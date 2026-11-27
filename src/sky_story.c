/*
 * Explorers of Sky demake (opening chapter): dungeon-side overrides.
 *
 * Tiny Woods plays the part of Beach Cave: renamed (strings.c, ground_place.c),
 * descending floors (B1F, B2F), a cave tileset and Beach Cave's wild Pokémon.
 * On the story run (SCENARIO_MAIN major 2) its last floor is Beach Cave Pit:
 * the Team Meanies boss-room layout with Zubat and Koffing in it, and its own
 * cutscene (CUTSCENE_BEACH_CAVE_PIT, src/dungeon_cutscene_beach_cave.c).
 *
 * Thunderwave Cave plays the part of Drenched Bluff (chapter 2): EoS's six
 * floors (layout, traps, wild Pokémon, floor items) from mappa_s.bin
 * (src/data/sky_drenched_bluff_floors.h), EoS's tileset and music.
 *
 * Mt. Steel plays chapter 3's Mt. Bristle (EoS dungeon 4, nine floors, the
 * run entered through SCRIPT_DUNGEON_MT_STEEL) and Mt. Bristle Peak (EoS
 * dungeon 5: one fixed floor with Drowzee, the run entered through
 * SCRIPT_DUNGEON_3, Red's second Mt. Steel entry), the same way
 * (src/data/sky_mt_bristle_floors.h, src/data/sky_mt_bristle_peak_floors.h);
 * the peak's cutscene is CUTSCENE_MT_BRISTLE_PEAK
 * (src/dungeon_cutscene_mt_bristle.c).
 *
 * Only built when the Makefile selects STORY=sky (defines SKY_STORY).
 */
#include "global.h"

#ifdef SKY_STORY

#include "globaldata.h"
#include "sky_story.h"
#include "dungeon_util.h"
#include "constants/dungeon.h"
#include "constants/event_flag.h"
#include "constants/fixed_rooms.h"
#include "constants/item.h"
#include "constants/monster.h"
#include "constants/script_dungeon_id.h"
#include "constants/trap.h"
#include "event_flag.h"
#include "adventure_info.h"
#include "menu_input.h"
#include "save.h"
#include "random.h"
#include "pokemon_3.h"
#include "structs/str_dungeon.h"
#include "structs/str_file_system.h"

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
    { MONSTER_ZUBAT,    3, 5000 }, /* EoS fixed-floor bosses: Zubat L3, Koffing L6 */
    { MONSTER_KOFFING,  6, 5000 },
    { MONSTER_KECLEON, 90,    0 },
    { MONSTER_DECOY,    1,    0 },
};

/* EoS floors from BALANCE/mappa_s.bin (tools/make_sky_dungeon_floors.py). */
struct SkyItemWeight {
    u8 item;
    u16 value; /* cumulative within the item's category, out of 10000 */
};

/* A fixed floor's boss (overlay 10's monster spawn stats). `code` is the Red
 * fixed-room entity code it spawns from (16 + sFixedRoomEntities index). */
struct SkyBoss {
    s16 species;
    u8 code;
    u8 level;
    u16 hp;
    u8 atk, spAtk, def, spDef;
};

struct SkyFloor {
    u8 props[0x1C]; /* EoS floor properties, laid out as Red's FloorProperties */
    const struct SkySpawn *spawns;
    u8 spawnCount;
    u16 traps[NUM_TRAPS]; /* cumulative, out of 10000 */
    s16 categories[NUM_ITEM_CATEGORIES]; /* floor items: cumulative, out of 10000 */
    const struct SkyItemWeight *items; /* ends with { 0, 0 } */
    u8 guaranteed[2]; /* EoS's "guaranteed" floor items (weight 0xFFFF) */
    /* EoS fixed floor (a boss room), or NULL: */
    const u8 *room; /* Red fixedmap encoding */
    const struct SkyBoss *bosses;
    u8 bossCount;
    const struct SkySpawn *bossSpawns; /* the room's species at the bosses' levels */
    u8 bossSpawnCount;
};

#include "data/sky_drenched_bluff_floors.h"
#include "data/sky_mt_bristle_floors.h"
#include "data/sky_mt_bristle_peak_floors.h"

_Static_assert(sizeof(FloorProperties) == 0x1C, "FloorProperties is EoS's floor layout (0x00-0x1B)");

/* An EoS dungeon played by a Red dungeon slot. */
struct SkyDungeon {
    const struct SkyFloor *floors;
    u8 floorCount;
    u8 tileset;   /* Red tileset id (game logic); src/sky_dungeon_tileset.c draws EoS's */
    u8 fixedRoom; /* Red fixed room an EoS fixed floor replaces (FIXED_ROOM_NONE: none) */
    u8 dataFloor; /* Red floor whose data is loaded under EoS's floors (0: the same floor) */
    u16 music;
};

static const struct SkyDungeon sDrenchedBluff = {
    sDrenchedBluffFloors, sDrenchedBluffFloorCount, SKY_DRENCHED_BLUFF_TILESET, FIXED_ROOM_NONE, 0,
    MUS_SKY_DRENCHED_BLUFF, /* EoS mappa music 2 on every floor */
};
static const struct SkyDungeon sMtBristle = {
    sMtBristleFloors, sMtBristleFloorCount, SKY_MT_BRISTLE_TILESET, FIXED_ROOM_NONE, 0,
    MUS_SKY_MT_BRISTLE, /* EoS mappa music 3 on every floor */
};
/* Red's Mt. Steel floor 9 (Skarmory's room, tileset 0x40) is loaded under it. */
static const struct SkyDungeon sMtBristlePeak = {
    sMtBristlePeakFloors, sMtBristlePeakFloorCount, SKY_MT_BRISTLE_PEAK_TILESET,
    FIXED_ROOM_MT_STEEL_SKARMORY, 9,
    MUS_SKY_IN_THE_DEPTHS_OF_THE_PIT, /* the scene's music; the cutscene starts Boss Battle! */
};

bool8 SkyStory_IsBeachCave(u8 dungeonId)
{
    return dungeonId == DUNGEON_TINY_WOODS;
}

bool8 SkyStory_IsDrenchedBluff(u8 dungeonId)
{
    return dungeonId == DUNGEON_THUNDERWAVE_CAVE;
}

bool8 SkyStory_IsMtBristle(u8 dungeonId)
{
    return dungeonId == DUNGEON_MT_STEEL;
}

/* The run entered through SCRIPT_DUNGEON_3 (ground_main sets DUNGEON_ENTER
 * to the script dungeon before the dungeon starts) is the peak. */
bool8 SkyStory_IsMtBristlePeakRun(void)
{
    return (s16)GetScriptVarValue(NULL, DUNGEON_ENTER) == SCRIPT_DUNGEON_3;
}

static const struct SkyDungeon *EosDungeon(u8 dungeonId)
{
    if (SkyStory_IsDrenchedBluff(dungeonId))
        return &sDrenchedBluff;
    if (SkyStory_IsMtBristle(dungeonId))
        return SkyStory_IsMtBristlePeakRun() ? &sMtBristlePeak : &sMtBristle;
    return NULL;
}

s32 SkyStory_GetEosFloorCount(u8 dungeonId)
{
    const struct SkyDungeon *d = EosDungeon(dungeonId);

    /* GetDungeonFloorCount convention: playable floors + 1 (0: not an EoS dungeon). */
    return d != NULL ? d->floorCount + 1 : 0;
}

/* The EoS floor the dungeon is on, or NULL. */
static const struct SkyFloor *EosFloor(void)
{
    const struct SkyDungeon *d = EosDungeon(gDungeon->unk644.dungeonLocation.id);
    s32 floor = gDungeon->unk644.dungeonLocation.floor;

    if (d == NULL)
        return NULL;
    if (floor < 1)
        floor = 1;
    if (floor > d->floorCount)
        floor = d->floorCount;
    return &d->floors[floor - 1];
}

/* EoS's next guaranteed floor items (SkyStory_TakeGuaranteedItem). */
static EWRAM_DATA u8 sSkyGuaranteedItems[2] = {0};

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

/* An EoS floor: the floor layout, traps and wild Pokémon. EoS's floor
 * properties are Red's FloorProperties byte for byte; the tileset is the
 * sky one, Red's music byte stays (SkyStory_GetDungeonBgm picks the song)
 * and the money cap is rescaled (EoS: byte x 5 Poké, Red: byte x 40). A
 * fixed floor plays in the Red fixed room it replaces (SkyStory_PatchFixedMap)
 * with only its bosses, as Beach Cave Pit. */
static void ApplyEosFloor(const struct SkyDungeon *d, const struct SkyFloor *fl)
{
    FloorProperties *fp = &gDungeon->floorProperties;
    u8 *dst = (u8 *)fp;
    u8 music = fp->bgMusic;
    s32 i;

    for (i = 0; i < (s32)sizeof(FloorProperties); i++)
        dst[i] = fl->props[i];
    fp->tileset = d->tileset;
    fp->bgMusic = music;
    fp->fixedRoomNumber = FIXED_ROOM_NONE;
    fp->moneyUpperBound = (fl->props[0x17] * 5 + 39) / 40; /* 0x17: moneyUpperBound */
    for (i = 0; i < NUM_TRAPS; i++)
        gDungeon->trapSpawnChances[i] = fl->traps[i];
    if (fl->room != NULL && d->fixedRoom != FIXED_ROOM_NONE) {
        fp->fixedRoomNumber = d->fixedRoom;
        fp->enemyDensity = 0;
        fp->kecleonShopChance = 0;
        fp->monsterHouseChance = 0;
        LoadSpawns(fl->bossSpawns, fl->bossSpawnCount);
    }
    else {
        LoadSpawns(fl->spawns, fl->spawnCount);
    }
}

void SkyStory_ApplyFloorItemOverrides(void)
{
    const struct SkyFloor *fl = EosFloor();
    const struct SkyItemWeight *it;
    ItemSpawns *dst;
    s32 i;

    if (fl == NULL)
        return;
    dst = &gDungeon->itemSpawns[ITEM_SPAWN_NORMAL];
    for (i = 0; i < NUM_ITEM_CATEGORIES; i++)
        dst->categoryValues[i] = fl->categories[i];
    for (i = 0; i < NUMBER_OF_ITEM_IDS; i++)
        dst->itemValues[i] = 0;
    for (it = fl->items; it->value != 0; it++)
        dst->itemValues[it->item] = it->value;
    sSkyGuaranteedItems[0] = fl->guaranteed[0];
    sSkyGuaranteedItems[1] = fl->guaranteed[1];
}

u8 SkyStory_TakeGuaranteedItem(u8 itemId)
{
    s32 i;

    if (EosDungeon(gDungeon->unk644.dungeonLocation.id) == NULL)
        return itemId;
    for (i = 0; i < 2; i++) {
        if (sSkyGuaranteedItems[i] != ITEM_NOTHING) {
            itemId = sSkyGuaranteedItems[i];
            sSkyGuaranteedItems[i] = ITEM_NOTHING;
            break;
        }
    }
    return itemId;
}

void SkyStory_ApplyFloorOverrides(void)
{
    const struct SkyDungeon *d = EosDungeon(gDungeon->unk644.dungeonLocation.id);
    u8 floor;

    if (d != NULL) {
        ApplyEosFloor(d, EosFloor());
        return;
    }
    if (!SkyStory_IsBeachCave(gDungeon->unk644.dungeonLocation.id))
        return;

    floor = gDungeon->unk644.dungeonLocation.floor;
    gDungeon->floorProperties.tileset = SKY_BEACH_CAVE_TILESET;

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
    const struct SkyDungeon *d = EosDungeon(gDungeon->unk644.dungeonLocation.id);

    if (d != NULL)
        return d->music;
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

/* Tiny Woods only has floor data for 3 floors: floors 4+ read floor 3's.
 * Thunderwave Cave has 5: Drenched Bluff B6F reads B5F's. Mt. Steel has 9,
 * the last Skarmory's room: Mt. Bristle 9F reads 8F's, the peak run reads
 * floor 9 (then all are replaced by EoS's floor, SkyStory_ApplyFloorOverrides). */
u8 SkyStory_RemapDataFloor(u8 dungeonId, u8 floor)
{
    if (SkyStory_IsBeachCave(dungeonId) && floor > 3)
        return 3;
    if (SkyStory_IsDrenchedBluff(dungeonId) && floor > 5)
        return 5;
    if (SkyStory_IsMtBristle(dungeonId)) {
        const struct SkyDungeon *d = EosDungeon(dungeonId);
        if (d->dataFloor != 0)
            return d->dataFloor;
        if (floor > 8)
            return 8;
    }
    return floor;
}

/*
 * Beach Cave Pit: the EoS fixed floor (BALANCE/fixed.bin #1, 14x15) in Red's
 * fixedmap encoding (header w, h, flags; then nibble RLE, 0x0E = literal).
 * 60 room floor, 2 wall, 4 player spawn, 18 Zubat (Gengar slot), 19 Koffing
 * (Ekans slot), 22 leader, 23 partner, 24-27 other team members (as in the
 * Team Meanies room; a room without tile 4 fails generation).
 * tools/make_sky_dungeon_floors.py EOS.nds 2 sBeachCavePit --boss-codes 18,19
 * writes the same bytes.
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
 * room number points at the EoS Beach Cave Pit layout instead; in an EoS
 * dungeon with a fixed floor, the Red room it replaces points at EoS's. */
void SkyStory_PatchFixedMap(OpenedFile *file)
{
    s32 i;
    const void *const *src;
    const struct SkyDungeon *d;
    const struct SkyFloor *fl;

    if (file == NULL)
        return;
    d = EosDungeon(gDungeon->unk644.dungeonLocation.id);
    fl = EosFloor();
    if (!SkyStory_IsBeachCave(gDungeon->unk644.dungeonLocation.id)
        && (d == NULL || d->fixedRoom == FIXED_ROOM_NONE || fl->room == NULL))
        return;
    src = file->data;
    for (i = 0; i < FIXEDMAP_ENTRIES; i++)
        sFixedMapTable[i] = src[i];
    if (d != NULL)
        sFixedMapTable[d->fixedRoom] = fl->room;
    else
        sFixedMapTable[FIXED_ROOM_SINISTER_WOODS_TEAM_MEANIES] = sBeachCavePitRoom;
    file->data = sFixedMapTable;
}

/* The species of Red's boss-room entity codes 16-20 (sFixedRoomEntities 0-4). */
static const s16 sRoomCodeSpecies[] = { MONSTER_SKARMORY, MONSTER_DIGLETT, MONSTER_GENGAR, MONSTER_EKANS, MONSTER_MEDICHAM };

/* The EoS fixed floor the dungeon is on, or NULL. */
static const struct SkyFloor *EosFixedFloor(void)
{
    const struct SkyDungeon *d = EosDungeon(gDungeon->unk644.dungeonLocation.id);
    const struct SkyFloor *fl;

    if (d == NULL || d->fixedRoom == FIXED_ROOM_NONE)
        return NULL;
    fl = EosFloor();
    if (fl->room == NULL || gDungeon->floorProperties.fixedRoomNumber != d->fixedRoom)
        return NULL;
    return fl;
}

s16 SkyStory_RemapFixedRoomSpecies(s16 species)
{
    const struct SkyFloor *fl = EosFixedFloor();

    if (fl != NULL) {
        s32 i;
        /* the Red room's own species are the slots EoS's bosses play */
        for (i = 0; i < fl->bossCount; i++) {
            u32 slot = fl->bosses[i].code - 16;
            if (slot < ARRAY_COUNT(sRoomCodeSpecies) && sRoomCodeSpecies[slot] == species)
                return fl->bosses[i].species;
        }
        return species;
    }
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

EWRAM_INIT u8 gSkyBossExp = FALSE; /* EoS: defeated bosses grant no EXP */

/* EoS gives fixed-floor bosses their own stats (overlay 10's monster spawn
 * stats table; entries 1 and 2 for Beach Cave Pit's Zubat and Koffing, the
 * generated boss tables for the EoS dungeons): level, HP, Attack / Sp. Atk,
 * Defense / Sp. Def. */
void SkyStory_ApplyFixedRoomBossStats(Entity *entity)
{
    const struct SkyFloor *fl;
    EntityInfo *info;
    s32 i;

    if (entity == NULL)
        return;
    info = GetEntInfo(entity);
    fl = EosFixedFloor();
    if (fl != NULL) {
        for (i = 0; i < fl->bossCount; i++) {
            const struct SkyBoss *b = &fl->bosses[i];
            if (b->species != info->id)
                continue;
            info->level = b->level;
            info->HP = info->maxHPStat = b->hp;
            info->bossFlag = TRUE; /* a boss: no EXP (gSkyBossExp), as in EoS */
            info->atk[0] = b->atk;
            info->atk[1] = b->spAtk;
            info->def[0] = b->def;
            info->def[1] = b->spDef;
            return;
        }
        return;
    }
    if (!SkyStory_IsBeachCave(gDungeon->unk644.dungeonLocation.id))
        return;
    if (gDungeon->floorProperties.fixedRoomNumber != FIXED_ROOM_SINISTER_WOODS_TEAM_MEANIES)
        return;
    {
        s32 hp, atk, def;
        switch (info->id) {
            case MONSTER_ZUBAT:   info->level = 3; hp = 15; atk = 15; def = 11; break;
            case MONSTER_KOFFING: info->level = 6; hp = 27; atk = 20; def = 8;  break;
            default: return;
        }
        info->HP = info->maxHPStat = hp;
        info->bossFlag = TRUE; /* a boss: no EXP (gSkyBossExp), as in EoS */
        info->atk[0] = info->atk[1] = atk;
        info->def[0] = info->def[1] = def;
    }
}

#endif /* SKY_STORY */

#ifdef SKY_STORY
/* Demo end (chapter 1): SKY_SAVE_GAME writes the adventure like Red's
 * between-mode save (src/main_loops.c QuickSave_Async); returns TRUE when it
 * was written. SKY_DEMO_TO_TITLE resets to the boot / title screens. */
bool8 SkyStory_SaveGame(void)
{
    s32 status;
    s32 unused = 0;
    DungeonLocation dl = { .id = DUNGEON_OUT_ON_RESCUE, .floor = 0 };

    /* A save only shows up as "Continue" with an id (set by the quiz; the
     * DEBUG_BOOT_EVENT hook skips it). */
    if (sub_8011C34() == -1)
        sub_8011C40(Rand32Bit());
    SetDungeonLocationInfo(&dl);
    sub_80140DC();
    status = WriteSavetoPak(&unused, 1);
    if (status == SAVE_COMPLETED)
        status = sub_80121E0(0xF1206);
    sub_8014114();
    return status == SAVE_COMPLETED;
}

void SkyStory_DemoToTitle(void)
{
    REG_IME = 0;
    DmaStop(0);
    DmaStop(1);
    DmaStop(2);
    DmaStop(3);
    SoftReset(RESET_ALL);
}
#endif
