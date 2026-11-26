/*
 * Explorers of Sky demake (opening chapter): dungeon-side overrides.
 *
 * Tiny Woods plays the part of Beach Cave: renamed (strings.c, ground_place.c),
 * descending floors (B1F, B2F), a cave tileset and Beach Cave's wild Pokémon.
 * On the story run (SCENARIO_MAIN major 2) its last floor is Beach Cave Pit:
 * the Team Meanies boss-room layout with Zubat and Koffing in it, and its own
 * cutscene (CUTSCENE_BEACH_CAVE_PIT, src/dungeon_cutscene_beach_cave.c).
 *
 * Only built when the Makefile selects STORY=sky (defines SKY_STORY).
 */
#include "global.h"

#ifdef SKY_STORY

#include "globaldata.h"
#include "sky_story.h"
#include "constants/dungeon.h"
#include "constants/event_flag.h"
#include "constants/fixed_rooms.h"
#include "constants/monster.h"
#include "event_flag.h"
#include "pokemon_3.h"
#include "structs/str_dungeon.h"
#include "structs/str_file_system.h"

/* Beach Cave floors: tileset borrowed from Lapis Cave (blue rock). */
#define BEACH_CAVE_TILESET 0x2D
/* EoS: Beach Cave B1F-B4F, then Beach Cave Pit (fixed floor 1) on the story run. */
#define BEACH_CAVE_FLOORS 4
#define BEACH_CAVE_PIT_FLOOR 5

struct SkySpawn {
    s16 species;
    u8 level;
    u16 weight; /* out of 10000; 0 = only used to look up a level */
};

/* EoS mappa_s.bin, Beach Cave B1F-B4F: Shellder L1, Kabuto L1, Corsola L2,
 * Shellos L2, 25% each; Kecleon L48. */
static const struct SkySpawn sBeachCaveSpawns[] = {
    { MONSTER_SHELLDER, 1, 2500 },
    { MONSTER_KABUTO,   1, 2500 },
    { MONSTER_CORSOLA,  2, 2500 },
    { MONSTER_SHELLOS,  2, 2500 },
    { MONSTER_KECLEON, 48,    0 },
    { MONSTER_DECOY,    1,    0 },
};

/* Beach Cave Pit: the bosses' levels come from the floor's spawn table. The
 * table needs nonzero weights (random spawning loops on an all-zero table);
 * enemyDensity is forced to 0 so only the two bosses appear. */
static const struct SkySpawn sBeachCavePitSpawns[] = {
    { MONSTER_ZUBAT,    4, 5000 }, /* EoS: Zubat L4, Koffing L7 */
    { MONSTER_KOFFING,  7, 5000 },
    { MONSTER_KECLEON, 90,    0 },
    { MONSTER_DECOY,    1,    0 },
};

bool8 SkyStory_IsBeachCave(u8 dungeonId)
{
    return dungeonId == DUNGEON_TINY_WOODS;
}

bool8 SkyStory_IsBeachCaveStoryRun(void)
{
    u32 main, sub;

    GetScriptVarScenario(SCENARIO_MAIN, &main, &sub);
    return main == 2;
}

static void LoadSpawns(const struct SkySpawn *spawns, s32 count)
{
    s32 i;
    s32 total = 0;

    for (i = 0; i < count && i < MONSTER_SPAWNS_ARR_COUNT - 1; i++) {
        SpawnPokemonData *dst = &gDungeon->fileMonsterSpawns[i];
        SetSpeciesLevelToExtract(dst, spawns[i].level, spawns[i].species);
        if (spawns[i].weight != 0) {
            total += spawns[i].weight;
            dst->randNum[0] = total;
            dst->randNum[1] = total;
        }
        else {
            dst->randNum[0] = 0;
            dst->randNum[1] = 0;
        }
    }
    for (; i < MONSTER_SPAWNS_ARR_COUNT; i++)
        SetSpeciesToExtract(&gDungeon->fileMonsterSpawns[i], 0);
}

void SkyStory_ApplyFloorOverrides(void)
{
    u8 floor;

    if (!SkyStory_IsBeachCave(gDungeon->unk644.dungeonLocation.id))
        return;

    floor = gDungeon->unk644.dungeonLocation.floor;
    gDungeon->floorProperties.tileset = BEACH_CAVE_TILESET;

    if (floor >= BEACH_CAVE_PIT_FLOOR && SkyStory_IsBeachCaveStoryRun()) {
        /* Beach Cave Pit */
        gDungeon->floorProperties.fixedRoomNumber = FIXED_ROOM_SINISTER_WOODS_TEAM_MEANIES;
        gDungeon->floorProperties.tileset = SKY_BEACH_CAVE_PIT_TILESET;
        gDungeon->floorProperties.enemyDensity = 0;
        gDungeon->floorProperties.kecleonShopChance = 0;
        gDungeon->floorProperties.monsterHouseChance = 0;
        LoadSpawns(sBeachCavePitSpawns, ARRAY_COUNT(sBeachCavePitSpawns));
    }
    else {
        LoadSpawns(sBeachCaveSpawns, ARRAY_COUNT(sBeachCaveSpawns));
    }
}

s32 SkyStory_GetDungeonBgm(s32 defaultSong)
{
    if (!SkyStory_IsBeachCave(gDungeon->unk644.dungeonLocation.id))
        return defaultSong;
    if (gDungeon->floorProperties.fixedRoomNumber == FIXED_ROOM_SINISTER_WOODS_TEAM_MEANIES)
        return MUS_SKY_IN_THE_DEPTHS_OF_THE_PIT;
    return MUS_SKY_BEACH_CAVE;
}

s32 SkyStory_GetBeachCaveFloorCount(void)
{
    /* GetDungeonFloorCount convention: playable floors + 1. */
    return (SkyStory_IsBeachCaveStoryRun() ? BEACH_CAVE_PIT_FLOOR : BEACH_CAVE_FLOORS) + 1;
}

/* Tiny Woods only has floor data for 3 floors: floors 4+ read floor 3's. */
u8 SkyStory_RemapDataFloor(u8 dungeonId, u8 floor)
{
    if (SkyStory_IsBeachCave(dungeonId) && floor > 3)
        return 3;
    return floor;
}

/*
 * Beach Cave Pit: the EoS fixed floor (BALANCE/fixed.bin #1, 14x15) in Red's
 * fixedmap encoding (header w, h, flags; then nibble RLE, 0x0E = literal).
 * 60 room floor, 2 wall, 4 player spawn, 18 Zubat (Gengar slot), 19 Koffing
 * (Ekans slot), 22 leader, 23 partner, 24-27 other team members (as in the
 * Team Meanies room; a room without tile 4 fails generation).
 *   ##.....#######
 *   ##.K.Z.#######
 *   #.......######
 *   #..P.L..######
 *   ##.....#######   (then the room narrows to 5 wide down to row 10)
 */
static const u8 sBeachCavePitRoom[] = {
    0x0e, 0x0f, 0x00, 0x21, 0x0e, 0x3c, 0x0e, 0x3c, 0x0e, 0x3c, 0x0e, 0x3c,
    0x0e, 0x3c, 0x28, 0x0e, 0x3c, 0x0e, 0x13, 0x0e, 0x3c, 0x0e, 0x12, 0x0e,
    0x3c, 0x27, 0x0e, 0x3c, 0x0e, 0x3c, 0x0e, 0x3c, 0x0e, 0x3c, 0x0e, 0x3c,
    0x0e, 0x3c, 0x0e, 0x3c, 0x26, 0x0e, 0x3c, 0x0e, 0x3c, 0x0e, 0x17, 0x0e,
    0x3c, 0x0e, 0x16, 0x0e, 0x3c, 0x0e, 0x3c, 0x27, 0x0e, 0x3c, 0x0e, 0x3c,
    0x0e, 0x18, 0x0e, 0x3c, 0x0e, 0x3c, 0x27, 0x0e, 0x3c, 0x0e, 0x3c, 0x0e,
    0x3c, 0x0e, 0x19, 0x0e, 0x3c, 0x0e, 0x3c, 0x0e, 0x3c, 0x27, 0x0e, 0x3c,
    0x0e, 0x3c, 0x40, 0x0e, 0x3c, 0x0e, 0x3c, 0x28, 0x0e, 0x3c, 0x0e, 0x3c,
    0x0e, 0x1a, 0x0e, 0x3c, 0x0e, 0x3c, 0x28, 0x0e, 0x3c, 0x0e, 0x3c, 0x0e,
    0x1b, 0x0e, 0x3c, 0x0e, 0x3c, 0x28, 0x0e, 0x3c, 0x0e, 0x3c, 0x0e, 0x3c,
    0x0e, 0x3c, 0x0e, 0x3c, 0x28, 0x0e, 0x3c, 0x0e, 0x3c, 0x0e, 0x3c, 0x0e,
    0x3c, 0x0e, 0x3c, 0x2f, 0x2f, 0x2f, 0x2e,
};

#define FIXEDMAP_ENTRIES 141
static EWRAM_DATA const void *sFixedMapTable[FIXEDMAP_ENTRIES] = {0};

/* Called after the dungeon opens "fixedmap": in Beach Cave, the Team Meanies
 * room number points at the EoS Beach Cave Pit layout instead. */
void SkyStory_PatchFixedMap(OpenedFile *file)
{
    s32 i;
    const void *const *src;

    if (file == NULL || !SkyStory_IsBeachCave(gDungeon->unk644.dungeonLocation.id))
        return;
    src = file->data;
    for (i = 0; i < FIXEDMAP_ENTRIES; i++)
        sFixedMapTable[i] = src[i];
    sFixedMapTable[FIXED_ROOM_SINISTER_WOODS_TEAM_MEANIES] = sBeachCavePitRoom;
    file->data = sFixedMapTable;
}

s16 SkyStory_RemapFixedRoomSpecies(s16 species)
{
    if (!SkyStory_IsBeachCave(gDungeon->unk644.dungeonLocation.id))
        return species;
    if (gDungeon->floorProperties.fixedRoomNumber != FIXED_ROOM_SINISTER_WOODS_TEAM_MEANIES)
        return species;

    switch (species) {
        case MONSTER_GENGAR:
            return MONSTER_ZUBAT;
        case MONSTER_EKANS:
            return MONSTER_KOFFING;
        case MONSTER_MEDICHAM:
            return MONSTER_NONE; /* only two thieves */
    }
    return species;
}

#endif /* SKY_STORY */
