#include "global.h"
#include "globaldata.h"
#include "dungeon_floor_spawns.h"
#include "constants/dungeon.h"
#include "constants/trap.h"
#include "bg_palette_buffer.h"
#include "graphics_memory.h"
#include "code_800D090.h"
#include "code_803D110.h"
#include "dungeon_vram.h"
#include "cpu.h"
#include "def_filearchives.h"
#include "dungeon_info.h"
#include "dungeon_random.h"
#include "file_system.h"
#include "game_options.h"
#include "pokemon.h"
#include "pokemon_3.h"
#include "text_1.h"
#include "text_3.h"
#include "dungeon_config.h"
#include "runtime.h"
#include "constants/fixed_rooms.h"
#include "structs/dungeon_mapparam.h"

/* PMD2 Marowak Dojo enemy levels by floor (B1F-B5F). EXP scales with level. */
static const u8 sPmd2TrainingGroundLevels[] = {0, 1, 10, 20, 25, 35};

/* Returns FALSE when pmd2_training_grounds does not apply to this dungeon. */
static bool8 TryGetPmd2TrainingGroundEnemyLevel(u8 *levelOut)
{
    u8 dungId;
    u8 floor;

    if (!gRuntimeConfig.pmd2_training_grounds)
        return FALSE;

    dungId = gDungeon->unk644.dungeonLocation.id;
    if (dungId < DUNGEON_NORMAL_MAZE_2 || dungId > DUNGEON_STEEL_MAZE)
        return FALSE;

    floor = gDungeon->unk644.dungeonLocation.floor;
    if (floor >= 1 && floor <= 5)
        *levelOut = sPmd2TrainingGroundLevels[floor];
    else
        *levelOut = 1;
    return TRUE;
}

static void SetSpawnListLevels(SpawnPokemonData *spawns, s32 count, u8 level)
{
    s32 i;

    for (i = 0; i < count; i++) {
        s16 species = ExtractSpeciesIndex(&spawns[i]);
        if (species == 0)
            break;
        SetSpeciesLevelToExtract(&spawns[i], level, species);
    }
}

static void ApplyPmd2TrainingGroundOverrides(void)
{
    u8 level;

    if (!TryGetPmd2TrainingGroundEnemyLevel(&level))
        return;

    SetSpawnListLevels(gDungeon->fileMonsterSpawns, MONSTER_SPAWNS_ARR_COUNT - 1, level);
    /* Keep the live spawn table in sync when floors 3-5 reuse cached map data. */
    if (gDungeon->monsterSpawnsPopulated)
        SetSpawnListLevels(gDungeon->monsterSpawns, gDungeon->currFloorMonsterSpawnsCount, level);

    /* Safety: never run a dojo boss room under PMD2 rules. */
    if (gDungeon->floorProperties.fixedRoomNumber >= FIRST_DOJO_MAZE_BOSS_ROOM
        && gDungeon->floorProperties.fixedRoomNumber <= LAST_DOJO_MAZE_BOSS_ROOM) {
        gDungeon->floorProperties.fixedRoomNumber = 0;
    }
}

void sub_803D4AC(void)
{
    gDungeon->unk1C570.id = DUNGEON_INVALID;
    gDungeon->unk1C570.floor = 0xFF;
}

void SetFloorItemMonsterSpawns(void)
{
    s16 spArray[NUM_ITEM_CATEGORIES + NUMBER_OF_ITEM_IDS];
    s32 i, j, k;
    OpenedFile *file;
    struct DungeonMapParam1 *strPtr;

    GeneralizeMazeDungeonLoc(&gDungeon->unk644.dungeonLocation2, &gDungeon->unk644.dungeonLocation);
    if (gDungeon->unk1C570.id == gDungeon->unk644.dungeonLocation2.id && gDungeon->unk1C570.floor == gDungeon->unk644.dungeonLocation2.floor) {
        /* Floors 3-5 share remapped B2F data; still refresh per-floor levels. */
        ApplyPmd2TrainingGroundOverrides();
        return;
    }

    gDungeon->unk1C570 = gDungeon->unk644.dungeonLocation2;
    file = OpenFileAndGetFileDataPtr("mapparam", &gDungeonFileArchive);
    strPtr = &((struct DungeonMapParam2 *)(file->data))->unk0[gDungeon->unk1C570.id][gDungeon->unk1C570.floor];

    gDungeon->unk1CEC8 = GetDungeonFloorCount(gDungeon->unk644.dungeonLocation.id);
    gDungeon->startFloorId = GetDungeonStartingFloor(gDungeon->unk644.dungeonLocation.id);

    gDungeon->floorProperties = ((struct DungeonMapParam2 *)(file->data))->floorProperties[strPtr->unk0];

    for (i = 0; i < NUM_TRAPS; i++) {
        gDungeon->trapSpawnChances[i] = ((struct DungeonMapParam2 *)(file->data))->trapSpawnChances[strPtr->unk4][i];
    }
    for (i = 0; i < MONSTER_SPAWNS_ARR_COUNT - 1; i++) {
        gDungeon->fileMonsterSpawns[i] = ((struct DungeonMapParam2 *)(file->data))->monsterSpawns[strPtr->unk2][i];
        if (ExtractSpeciesIndex(&gDungeon->fileMonsterSpawns[i]) == 0)
            break;
    }
    while (i < MONSTER_SPAWNS_ARR_COUNT) {
        SetSpeciesToExtract(&gDungeon->fileMonsterSpawns[i], 0);
        i++;
    }

    ApplyPmd2TrainingGroundOverrides();

    for (i = 0; i < ITEM_SPAWN_TYPES_COUNT; i++)
    {
        u16 *src = ((struct DungeonMapParam2 *)(file->data))->itemSpawns[strPtr->unk6[i]];
        s32 arrId = 0;

        for (j = 0; j < NUM_ITEM_CATEGORIES + NUMBER_OF_ITEM_IDS; ) {
            if (src[arrId] >= ITEM_SETS_SKIP_NUMBER) {
                for (k = src[arrId] - ITEM_SETS_SKIP_NUMBER; k != 0; k--) {
                    spArray[j++] = 0;
                }
            }
            else {
                spArray[j++] = src[arrId];
            }
            arrId++;
        }

        arrId = 0;
        for (j = 0; j < NUM_ITEM_CATEGORIES; j++) {
            gDungeon->itemSpawns[i].categoryValues[arrId] = spArray[arrId];
            arrId++;
        }

        for (j = 0; j < NUMBER_OF_ITEM_IDS; j++) {
            gDungeon->itemSpawns[i].itemValues[j] = spArray[arrId];
            arrId++;
        }
    }

    CloseFile(file);
}

u8 GetRandomFloorTrap(void)
{
    s32 i;
    s32 rand = DungeonRandInt(10000);
    for (i = 0; i < NUM_TRAPS; i++) {
        if (gDungeon->trapSpawnChances[i] != 0 && gDungeon->trapSpawnChances[i] >= rand)
            return i;
    }

    return TRAP_CHESTNUT_TRAP;
}

u8 GetRandomFloorItem(s32 spawnType)
{
    s32 i;
    s32 rand = DungeonRandInt(ITEM_SETS_RANDOM_CAP + 1);
    u8 category = NUM_ITEM_CATEGORIES;
    for (i = 0; i < NUM_ITEM_CATEGORIES; i++) {
        if (gDungeon->itemSpawns[spawnType].categoryValues[i] != 0 && gDungeon->itemSpawns[spawnType].categoryValues[i] >= rand) {
            category = i;
            break;
        }
    }
    if (category == NUM_ITEM_CATEGORIES)
        return ITEM_POKE;

    rand = DungeonRandInt(ITEM_SETS_RANDOM_CAP + 1);
    for (i = 0; i < NUMBER_OF_ITEM_IDS; i++) {
        if (gDungeon->itemSpawns[spawnType].itemValues[i] != 0 && GetItemCategory(i) == category && gDungeon->itemSpawns[spawnType].itemValues[i] >= rand) {
            return i;
        }
    }

    return ITEM_POKE;
}

s32 SetMonsterSpawnsArray(SpawnPokemonData *strPtr, s32 id)
{
    s32 i;

    for (i = 0; i < MONSTER_SPAWNS_ARR_COUNT; i++) {
        if (ExtractSpeciesIndex(&gDungeon->fileMonsterSpawns[i]) == 0)
            break;
        strPtr[id] = gDungeon->fileMonsterSpawns[i];
        id++;
    }

    return id;
}

s32 GetAvailableMonsToTransform(SpawnPokemonData *strPtr, s32 id)
{
    s32 i;

    for (i = 0; i < MONSTER_SPAWNS_ARR_COUNT; i++) {
        s16 species = ExtractSpeciesIndex(&gDungeon->fileMonsterSpawns[i]);
        if (species == 0)
            break;
        if (GetBodySize(species) < 2 && gDungeon->fileMonsterSpawns[i].randNum[0] != 0) {
            strPtr[id] = gDungeon->fileMonsterSpawns[i];
            id++;
        }
    }

    return id;
}

void SetCurrentMonsterSpawns(void)
{
    if (!gDungeon->monsterSpawnsPopulated) {
        gDungeon->monsterSpawnsPopulated = TRUE;
        gDungeon->currFloorMonsterSpawnsCount = SetMonsterSpawnsArray(gDungeon->monsterSpawns, 0);
        /* Re-apply after copy so floors 3-5 (shared mapparam cache) get per-floor levels. */
        ApplyPmd2TrainingGroundOverrides();
    }
}

bool8 CanMonsterBeSpawnedHere(s16 speciesToFind)
{
    s32 i;
    s32 id = SpeciesId(speciesToFind);

    for (i = 0; i < MONSTER_SPAWNS_ARR_COUNT; i++) {
        s16 species = ExtractSpeciesIndex(&gDungeon->fileMonsterSpawns[i]);
        if (species == 0)
            break;
        if (species == id)
            return TRUE;
    }
    return FALSE;
}

s16 GetRandomFloorMonsterId(s32 arrId)
{
    s32 i;
    s32 rand = DungeonRandInt(10000);

    for (i = 0; i < gDungeon->currFloorMonsterSpawnsCount; i++) {
        if (gDungeon->monsterSpawns[i].randNum[arrId] != 0 && gDungeon->monsterSpawns[i].randNum[arrId] >= rand) {
            return ExtractSpeciesIndex(&gDungeon->monsterSpawns[i]);
        }
    }
    for (i = 0; i < gDungeon->currFloorMonsterSpawnsCount; i++) {
        if (gDungeon->monsterSpawns[i].randNum[arrId] != 0) {
            return ExtractSpeciesIndex(&gDungeon->monsterSpawns[i]);
        }
    }

    return MONSTER_KECLEON;
}

s32 GetSpawnedMonsterLevel(s32 species)
{
    s32 i;
    s32 speciesId = SpeciesId(species);
    u8 pmd2Level;

    /* Authoritative for training grounds: spawn-table copies can lag on remapped floors. */
    if (TryGetPmd2TrainingGroundEnemyLevel(&pmd2Level))
        return pmd2Level;

    for (i = 0; i < gDungeon->currFloorMonsterSpawnsCount; i++) {
        if (ExtractSpeciesIndex(&gDungeon->monsterSpawns[i]) == speciesId)
            return ExtractLevel(&gDungeon->monsterSpawns[i]);
    }
    return 1;
}
