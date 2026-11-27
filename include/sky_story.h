#ifndef GUARD_SKY_STORY_H
#define GUARD_SKY_STORY_H

/*
 * Explorers of Sky demake (opening chapter).
 * Built when the Makefile selects STORY=sky (default for the modern build),
 * which also defines SKY_STORY. See documentation/Features/SkyDemake.md.
 */

/* Extra ground-script NPC kinds (GroundLivesData.kind), appended after the
 * 147 vanilla entries of gGroundLivesTypeData_811E63C. */
#define SKY_LIVES_KIND_FIRST 147
/* Ground object kind of the Relic Fragment (src/ground_sprite_data.c). */
#define SKY_OBJ_RELIC_FRAGMENT 69
/* The guild's totem poles (EoS GROUND/t01p01a1.wan, t01p01a3.wan): kinds past
 * the end of the vanilla gGroundObjectTypes table (see ground_object.c). */
#define SKY_OBJ_TOTEM_POLE_1   70
#define SKY_OBJ_TOTEM_POLE_2   71

#define SKY_LIVES_ZUBAT      147
#define SKY_LIVES_KOFFING    148
#define SKY_LIVES_WIGGLYTUFF 149
#define SKY_LIVES_KRABBY     150
#define SKY_LIVES_DIGLETT    151
#define SKY_LIVES_KIND_COUNT 5

#ifndef __ASSEMBLER__
#include "global.h"

/* TRUE while Tiny Woods is playing the part of Beach Cave. */
bool8 SkyStory_IsBeachCave(u8 dungeonId);
/* TRUE on the story run, when Beach Cave Pit hosts the Zubat & Koffing fight. */
bool8 SkyStory_IsBeachCaveStoryRun(void);
/* Called after floor data is loaded (SetFloorItemMonsterSpawns). */
void SkyStory_ApplyFloorOverrides(void);
s32 SkyStory_GetBeachCaveFloorCount(void);
u8 SkyStory_RemapDataFloor(u8 dungeonId, u8 floor);
/* Chapter 2: Thunderwave Cave plays the part of Drenched Bluff (EoS dungeon
 * 3): EoS's six floors, wild Pokémon, traps and floor items from mappa_s.bin
 * (src/data/sky_drenched_bluff_floors.h), EoS's tileset and music. */
bool8 SkyStory_IsDrenchedBluff(u8 dungeonId);
s32 SkyStory_GetDrenchedBluffFloorCount(void);
/* Called after the floor's item lists are loaded (SetFloorItemMonsterSpawns). */
void SkyStory_ApplyFloorItemOverrides(void);
/* Floor item placement: EoS's guaranteed items take the first normal spots. */
u8 SkyStory_TakeGuaranteedItem(u8 itemId);
struct OpenedFile;
void SkyStory_PatchFixedMap(struct OpenedFile *file);
/* EoS Beach Cave dungeon tileset (src/sky_dungeon_tileset.c). Beach Cave's
 * floors keep Lapis Cave's tileset id for game logic (water terrain); the Pit
 * floor borrows Red tileset 64 (a pre-drawn background tileset, no water) and
 * shows the EoS Beach Cave Pit background. The sky ROM has no Red dungeon
 * tilesets: every tileset id draws Beach Cave (0x40+: the Pit background). */
#define SKY_BEACH_CAVE_TILESET 0x2D
#define SKY_BEACH_CAVE_PIT_TILESET 64
/* Drenched Bluff draws EoS tileset 2; its floors use Red tileset 0x2A for game
 * logic (water terrain, Rock camouflage, Nature Power: Rock Slide, as EoS's
 * tileset 2). */
#define SKY_DRENCHED_BLUFF_TILESET 0x2A
void SkyStory_LoadDungeonTileset(struct OpenedFile **paletteFile, struct OpenedFile **animFile, u16 (*cel)[9], u8 *cex);
void SkyStory_LoadGroundDungeonTileset(struct OpenedFile **paletteFile, struct OpenedFile **animFile, void *tiles, void *cel, u8 *cex);
bool8 SkyStory_IsSkyTilesetFile(const struct OpenedFile *file);
void SkyStory_RelocateGridTiles(s32 firstFree);
/* Fixed-room spawn remap: Gengar/Ekans -> Zubat/Koffing; Medicham dropped. */
s16 SkyStory_RemapFixedRoomSpecies(s16 species);
struct Entity;
void SkyStory_ApplyFixedRoomBossStats(struct Entity *entity);
/* Dungeon talk with EoS's lines (src/sky_dungeon_talk.c); types as EoS's
 * MESSAGE/tbl_talk.tlk. */
#define SKY_TALK_HEALTHY    0
#define SKY_TALK_HALF_HP    1
#define SKY_TALK_PINCH      2
#define SKY_TALK_LEVEL_UP   3
#define SKY_TALK_TYPE_COUNT 4
struct EntityInfo;
s32 SkyStory_TalkType(struct EntityInfo *info);
u8 SkyStory_TalkEmotion(struct EntityInfo *info);
void SkyStory_TalkLine(u8 *dst, struct Entity *speaker, s32 type);
bool8 SkyStory_HasLevelUpLine(struct EntityInfo *info);
/* Runtime toggle (debug menu "Boss EXP"): FALSE = bosses grant no EXP, as
 * in Explorers of Sky; TRUE = Red's EXP. Default in src/sky_story.c. */
extern u8 gSkyBossExp;

/* EoS music converted to Red voices (sound/songs/seq_061..068,
 * tools/eos_music/convert_eos_bgm.py). Song slots were empty in Red. */
#define MUS_SKY_ON_THE_BEACH_AT_DUSK        61
#define MUS_SKY_BEACH_CAVE                  62
#define MUS_SKY_BOSS_BATTLE                 63
#define MUS_SKY_IN_THE_DEPTHS_OF_THE_PIT    64
#define MUS_SKY_TITLE_THEME                 65
#define MUS_SKY_TOP_MENU_THEME              66
#define MUS_SKY_EXPLORATION_TEAM_THEME      67
#define MUS_SKY_WELCOME_TO_THE_WORLD        68
#define MUS_SKY_STORM                       69 /* EoS BGM_STORM (bgm0101) */
#define MUS_SKY_OCEAN                       70 /* EoS BGM_OCEAN1 (bgm0100): the waves */
#define MUS_SKY_FIRE_CRACKLING              71 /* EoS BGM_FIRE_CRACKLING_LOUDER (bgm0116): the guild's torches */
/* Sky Jukebox range (src/data/sky_jukebox_data.h, SKY_JUKEBOX_FIRST_SONG). */
#define MUS_SKY_DRENCHED_BLUFF              944 /* EoS BGM_DRENCHED_BLUFF (bgm 22, dungeon music 2) */

/* EoS scene sound effects with no Red equivalent (song table slots that are
 * empty in Red; tools/eos_music/sky_red_se_map.py). */
#define SE_SKY_TACKLE                       519 /* SE_NUM_EVENT_MOTION_DAMEGE_01 (0x1401) */
#define SE_SKY_SWEAT_DROP                   520 /* SE_NUM_EVENT_SIGN_ASE_01 (0x2301) */
#define SE_SKY_FLUSTERED                    521 /* SE_NUM_EVENT_SIGN_HATENA_03 (0x2303) */
#define SE_SKY_RELIC_FRAGMENT               522 /* SE_NUM_EVENT_MAIN02_HAKO_01 (0x190A) */
#define SE_SKY_FRAGMENT_TOSS                523 /* SE_NUM_EVENT_MAIN01_KAKERA_03 (0x1906) */
#define SE_SKY_FLEE                         524 /* SE_NUM_EVENT_MAIN18_MIKARUGE_06 (0x1D06) */
#define SE_SKY_PICK_UP                      525 /* SE_NUM_EVENT_MOTION_ITEM (0x2206) */
#define SE_SKY_FLASH_HEAVY                  526 /* SE_NUM_EVENT_EFF_FLASH_HEAVY (0x1417) */
#define SE_SKY_BOSS_WIPE                    527 /* SE_NUM_EVENT_EFF_WIPE_01 (0x1410) */
#define SE_SKY_QUIZ_REVEAL                  528 /* SE_NUM_ETC01_HADO_02 (0x2C02) */

#ifndef __ASSEMBLER__
s32 SkyStory_GetDungeonBgm(s32 defaultSong);
#endif

/* Full-screen cutaways for EoS second-screen art (src/sky_cutaways.c). Their
 * pictures and settings are in events/sky/cutaways.cfg. */
enum {
    SKY_CUTAWAY_SKY_DAY,
    SKY_CUTAWAY_SKY_DUSK,
    /* 2, 3: the storm cliff CGs (now src/sky_storm.c). Ids stay as they
     * were: an object built with the old enum still names the same picture. */
    SKY_CUTAWAY_GUILD_SKY = 4,
    SKY_CUTAWAY_RELIC_FRAGMENT,
    SKY_CUTAWAY_SUNSET_SKY,
    SKY_CUTAWAY_SUNSET_SEA0,
    SKY_CUTAWAY_COUNT = SKY_CUTAWAY_SUNSET_SEA0 + 8,
    /* sequences */
    SKY_CUTAWAY_STORM = 100,
    SKY_CUTAWAY_SUNSET_SEA_ANIM,
    /* boot / title (gSkyTitleArt); these leave the screen black */
    SKY_CUTAWAY_BOOT_SCREENS,
    SKY_CUTAWAY_TITLE_SCREEN,
    /* connected CGs: pan down from EoS's top-screen CG into the scene */
    SKY_CUTAWAY_SKY_DAY_SCROLL,
    SKY_CUTAWAY_GUILD_SKY_SCROLL,
    /* EoS's opening, the Shaymin scene (src/sky_opening.c); leaves the screen black */
    SKY_CUTAWAY_OPENING,
};

/* Boot and title screens, generated by tools/make_sky_title_screens.py. */
enum {
    SKY_TITLE_NINTENDO,
    SKY_TITLE_ESRB,
    SKY_TITLE_CARD,     /* the logo and emblem; "Press START" is gSkyPressStart* */
    SKY_TITLE_ART_COUNT,
};

typedef struct SkyCutawayArt
{
    const u8 *at4px;
    const u8 *pal;
} SkyCutawayArt;

/* SKY_CUTAWAY_COUNT, then the CGs events/sky/cutaways.cfg adds (SKY_CG_COUNT) */
extern const SkyCutawayArt gSkyCutaways[];

/* Gen 4 species and moves (src/data/sky_gen4_data.c, tools/make_sky_gen4_data.py):
 * the sky build reads species, move and learnset data from these tables. */
#include "structs/str_pokemon.h"
#include "moves.h"
extern const MonsterDataEntry gSkyMonsterData[];
extern const MoveDataEntry gSkyMoveData[];
extern const MoveLearnset gSkyMoveLearnsets[];
extern const LevelData gSkyGen4LevelData[][100];
/* Red species EoS also has: index into gSkyRedLevelData, or -1 (Red's own). */
extern const s16 gSkyRedLevelIndex[];
extern const LevelData gSkyRedLevelData[][100];
/* Gen 4 moves borrow Red effect handlers / animations (src/sky_gen4_moves.c). */
u16 SkyStory_MoveEffectId(u16 moveId);
u16 SkyStory_MoveAnimId(u16 moveId);
extern const SkyCutawayArt gSkyTitleArt[SKY_TITLE_ART_COUNT];
/* "Press START" as OBJ: 64x32 pieces in OBJ 1D order, 16 colours,
 * and x, y, number of pieces (src/sky_title_data.c). */
extern const u8 gSkyPressStartGfx[];
extern const u16 gSkyPressStartPal[];
extern const u8 gSkyPressStartPos[3];
void SkyStory_ShowCutaway_Async(s32 id, s32 frames);
void SkyCutaway_UpdateCover(void);
void SkyCutaway_LoadScrollRow(const u8 *tiles, s32 row);
void SkyOpening_Play(void);
/* The opening's scenes use BG2/BG3 as 4bpp layers (src/reg_control.c), and
 * the title fades in from white after the whole opening (as EoS's does). */
extern bool8 gSkyOpeningBg4bpp;
extern bool8 gSkyTitleFromWhite;
#define SKY_OPENING_SCENE_TITLE 0xFE
extern u8 gSkyOpeningScene;
void SkyGroundSprite_DrawActors(s32 x, s32 y);
extern bool8 gSkyCoverActive;

/* Krabby bubbles (src/sky_bubbles.c): SKY_BUBBLES(mode) in scripts. */
enum {
    SKY_BUBBLES_OFF,
    SKY_BUBBLES_KRABBY_SAND,
    SKY_BUBBLES_KRABBY_SUNSET,
    SKY_BUBBLES_BEACH,
    SKY_BUBBLES_RAIN, /* the storm in m01a0102 */
};
void SkyBubbles_Start(s32 mode);
bool8 SkyBubbles_Active(void);
void SkyBubbles_SetBrightness(s32 brightness);
void SkyBubbles_Draw(void);

/* Lightning over the stormy sea (src/sky_storm.c): SKY_STORM_BOLT in scripts. */
void SkyStorm_StartBolt(void);
void SkyStorm_Stop(void);
void SkyStorm_Draw(void);
/* src/ground_map.c: restart the map's palette animations (SKY_MAP_PAL_RESTART). */
void GroundMap_SkyRestartPaletteAnims(void);

/* Demo end after chapter 1 (SKY_SAVE_GAME / SKY_DEMO_TO_TITLE). The demo-end
 * event reuses Red's chapter 2 start slot, which the sky build never reaches. */
#define SKY_DEMO_END_EVENT EVENT_M01E02A_L001
/* Chapter 2, Drenched Bluff (Red's Thunderwave Cave slots, see
 * documentation/Features/SkyChapter2.md, "Drenched Bluff"): after the
 * dungeon, GETOUT_M01E02A runs the cleared event (STARTMODE_DUNGEON_WON) or
 * the fainted event (any other result but STARTMODE_10, which goes to
 * EVENT_DIVIDE). SKY_DRENCHED_BLUFF_DEBUG_EVENT enters the dungeon at
 * scenario (3,3), as m02a0401: make DEBUG_BOOT_EVENT=SKY_DRENCHED_BLUFF_DEBUG_EVENT. */
#define SKY_DRENCHED_BLUFF_DEBUG_EVENT   EVENT_M01E02A_L002
#define SKY_DRENCHED_BLUFF_FAINTED_EVENT EVENT_M01E02A_L004
#define SKY_DRENCHED_BLUFF_CLEARED_EVENT EVENT_M01E02A_L006
bool8 SkyStory_SaveGame(void);
void SkyStory_DemoToTitle(void);
void SkyBubbles_DrawCutaway(void);

/* Beach Cave Pit boss cutscene (src/dungeon_cutscene_beach_cave.c). */
bool8 SkyStory_TrySetBeachCavePitCutscene(void);
void SkyStory_BeachCavePitSetup(void);
void SkyStory_BeachCavePitPreFightDialogue(void);
void SkyStory_HandleBeachCavePitBossFaint(u8 monsterBehavior);
#endif

#endif /* GUARD_SKY_STORY_H */
