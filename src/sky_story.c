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

/* Beach Cave floors: tileset borrowed from Lapis Cave (blue rock). */
#define BEACH_CAVE_TILESET 0x2D
#define BEACH_CAVE_FLOORS 3

struct SkySpawn {
    s16 species;
    u8 level;
    u16 weight; /* out of 10000; 0 = only used to look up a level */
};

/* EoS Beach Cave: Shellos, Kabuto, Corsola, Shellder. Shellos is a Gen IV
 * Pokémon (not in Rescue Team), so Krabby from the opening takes its place. */
static const struct SkySpawn sBeachCaveSpawns[] = {
    { MONSTER_KRABBY,   2, 3000 },
    { MONSTER_SHELLDER, 2, 2500 },
    { MONSTER_KABUTO,   3, 2500 },
    { MONSTER_CORSOLA,  3, 2000 },
    { MONSTER_KECLEON, 90,    0 },
    { MONSTER_DECOY,    1,    0 },
};

/* Beach Cave Pit: the bosses' levels come from the floor's spawn table. The
 * table needs nonzero weights (random spawning loops on an all-zero table);
 * enemyDensity is forced to 0 so only the two bosses appear. */
static const struct SkySpawn sBeachCavePitSpawns[] = {
    { MONSTER_ZUBAT,    5, 5000 },
    { MONSTER_KOFFING,  5, 5000 },
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

    if (floor >= BEACH_CAVE_FLOORS && SkyStory_IsBeachCaveStoryRun()) {
        /* Beach Cave Pit */
        gDungeon->floorProperties.fixedRoomNumber = FIXED_ROOM_SINISTER_WOODS_TEAM_MEANIES;
        gDungeon->floorProperties.enemyDensity = 0;
        gDungeon->floorProperties.kecleonShopChance = 0;
        gDungeon->floorProperties.monsterHouseChance = 0;
        LoadSpawns(sBeachCavePitSpawns, ARRAY_COUNT(sBeachCavePitSpawns));
    }
    else {
        LoadSpawns(sBeachCaveSpawns, ARRAY_COUNT(sBeachCaveSpawns));
    }
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
