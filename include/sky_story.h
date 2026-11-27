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
/* Chapter 2's objects (documentation/Features/SkyChapter2.md), also past the
 * vanilla table. Their states are directions of group 0, as in EoS's WANs
 * (SELECT_ANIMATION on an object: 1 = 0x800 loops direction 0, 4 = 0x1001
 * plays direction 1 once and holds it, 7-14 = 0x800-0x807 loop direction
 * 0-7): the gate and the Exploration Team Kit rest closed (0) and open (1);
 * the dinner has EoS's five table settings (0-4); the pearl sparkles. */
#define SKY_OBJ_GUILD_GATE      72 /* EoS GROUND/g01p01a3.wan: g01p01b's portcullis */
#define SKY_OBJ_EXPLORATION_KIT 73 /* EoS GROUND/g01p05a1.wan */
#define SKY_OBJ_DINNER          74 /* EoS GROUND/g01p06b1.wan: the mess hall's food */
#define SKY_OBJ_PEARL           75 /* EoS GROUND/d02p31a1.wan: Spoink's pearl */

#define SKY_LIVES_ZUBAT      147
#define SKY_LIVES_KOFFING    148
#define SKY_LIVES_WIGGLYTUFF 149
#define SKY_LIVES_KRABBY     150
#define SKY_LIVES_DIGLETT    151
/* Chapter 2 (documentation/Features/SkyChapter2.md): the guild crew and the
 * Treasure Town folk, on EoS sprites with EoS's ground groups. */
#define SKY_LIVES_CHATOT     152
#define SKY_LIVES_LOUDRED    153
#define SKY_LIVES_DUGTRIO    154
#define SKY_LIVES_SUNFLORA   155
#define SKY_LIVES_BIDOOF     156
#define SKY_LIVES_CHIMECHO   157
#define SKY_LIVES_CORPHISH   158
#define SKY_LIVES_CROAGUNK   159
#define SKY_LIVES_SPOINK     160
#define SKY_LIVES_WURMPLE    161
#define SKY_LIVES_SWELLOW    162
#define SKY_LIVES_PIDGEY     163
#define SKY_LIVES_LEDYBA     164
#define SKY_LIVES_SEEDOT     165
#define SKY_LIVES_KIND_COUNT 19

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
#define MUS_SKY_EATING                      72 /* EoS BGM_EATING (bgm0126): dinner in the mess hall (c00a0601), a clip */
/* Sky Jukebox range (src/data/sky_jukebox_data.h, SKY_JUKEBOX_FIRST_SONG):
 * chapter 2's songs play the jukebox's conversion. */
#define MUS_SKY_WIGGLYTUFFS_GUILD           940 /* EoS BGM_WIGGLYTUFFS_GUILD (bgm 7) */
#define MUS_SKY_GUILDMASTER_WIGGLYTUFF      941 /* EoS BGM_GUILDMASTER_WIGGLYTUFF (bgm 73) */
#define MUS_SKY_GOODNIGHT                   942 /* EoS BGM_GOODNIGHT (bgm 70) */
#define MUS_SKY_WIGGLYTUFFS_GUILD_REMIX     943 /* EoS BGM_WIGGLYTUFFS_GUILD_REMIX (bgm 8) */
#define MUS_SKY_DRENCHED_BLUFF              944 /* EoS BGM_DRENCHED_BLUFF (bgm 22, dungeon music 2) */
#define MUS_SKY_JOB_CLEAR                   945 /* EoS BGM_JOB_CLEAR (bgm 5) */

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
/* chapter 2 (documentation/Features/SkyChapter2.md) */
#define SE_SKY_WING_FLAP                    529 /* SE_NUM_EVENT_MOTION_WING_01 (0x1402): Chatot's wings */
#define SE_SKY_DINNER_BELL                  530 /* SE_NUM_EVENT_EFF_BELL_01 (0x1403): Chimecho rings for dinner */
#define SE_SKY_TAIL_FEATHERS                531 /* SE_NUM_EVENT_MOTION_TALE_01 (0x1404): Chatot at the board */
#define SE_SKY_GATE_OPEN                    532 /* SE_NUM_EVENT_MAIN02_DOOROPEN (0x1908): the guild's gate */
#define SE_SKY_KIT_OPEN                     533 /* SE_NUM_EVENT_MAIN02_HAKO_02 (0x190B): the Exploration Team Kit */
#define SE_SKY_CHEER                        534 /* SE_NUM_EVENT_MOTION_CLAP_02_L (0x1412): the crew cheers */
#define SE_SKY_DOOR                         535 /* SE_NUM_EVENT_MOTION_DOOR (0x2207): Wigglytuff's door */
#define SE_SKY_REWARD_MONEY                 536 /* SE_NUM_DUN_MOTION_MONEY (0x2209): the reward's Poké */
#define SE_SKY_NOTICE_5                     537 /* SE_NUM_EVENT_SIGN_NOTICE_05 (0x2312) */

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

/* Chapter 2 (documentation/Features/SkyChapter2.md) runs in Red's chapter 2
 * event slots (EVENT_M01E02A_*), which the sky build otherwise never reaches.
 * EVENT_DIVIDE (EVENT_DIVIDE_FIRST) sends scenario (3,0) to (3,1) and
 * SKY_CH2_EVENT, (3,1) to SKY_CH2_EVENT and (3,3) to SKY_CH2_FAINTED_PATH_EVENT,
 * as Red sends them to its own chapter 2's events.
 *   SKY_CH2_EVENT: EoS EVENT_M02_01_02 (m02a0101 .. m02a0202), then free roam
 *     in the guild (gs180 group 0); with SKY_CH2_FLAG_MORNING (a save at the
 *     good night) it starts at the next morning.
 *   SKY_CH2_JOB_EVENT: EoS EVENT_M02_03_04 (leaving B2F in free roam): the
 *     bulletin board, Drenched Bluff's entrance, into the dungeon.
 *   SKY_CH2_START: make DEBUG_BOOT_EVENT=SKY_CH2_START (scenario (3,0), then
 *     EVENT_DIVIDE: the chapter card and chapter 2).
 *   SKY_DEMO_END_EVENT: the save prompt and "The demo ends here" after
 *     chapter 2's good night; Continue from a finished save (scenario (4,0)
 *     or later) shows it again (src/ground_main.c). */
#define SKY_CH2_EVENT              EVENT_M01E02A_L001
#define SKY_CH2_FAINTED_PATH_EVENT EVENT_M01E02A_L001C
#define SKY_CH2_START              EVENT_M01E02A_L003
#define SKY_CH2_JOB_EVENT          EVENT_M01E02A_L001B
#define SKY_DEMO_END_EVENT         EVENT_M01E02A_L005
/* Drenched Bluff (Red's Thunderwave Cave slots, SkyChapter2.md "Drenched
 * Bluff"): after the dungeon, GETOUT_M01E02A runs the cleared event
 * (STARTMODE_DUNGEON_WON: EoS EVENT_M02_09_10) or the fainted event (any
 * other result, leaving early included: EoS EVENT_M02_05_07A, then
 * EVENT_M02_07B back to the bluff). SKY_DRENCHED_BLUFF_DEBUG_EVENT enters
 * the dungeon at scenario (3,3), as m02a0401:
 * make DEBUG_BOOT_EVENT=SKY_DRENCHED_BLUFF_DEBUG_EVENT. */
#define SKY_DRENCHED_BLUFF_DEBUG_EVENT   EVENT_M01E02A_L002
#define SKY_DRENCHED_BLUFF_FAINTED_EVENT EVENT_M01E02A_L004
#define SKY_DRENCHED_BLUFF_CLEARED_EVENT EVENT_M01E02A_L006
/* EoS's $SCENARIO_MAIN_BIT_FLAG (story flags kept in the save): Red's
 * EVENT_T01P01, Pokémon Square's flags, which the sky build has no use for
 * (no save-layout change). Bit 8 (EoS's): the good night of chapter 2 was
 * saved, chapter 2 goes on from the next morning. */
#define SKY_SCENARIO_MAIN_BIT_FLAG EVENT_T01P01
#define SKY_CH2_FLAG_MORNING       8
/* Bit 7 (EoS's): the morning after fainting in Drenched Bluff was saved
 * (c00a0201); Continue goes on with EVENT_M02_07B. */
#define SKY_CH2_FLAG_FAINTED_MORNING 7
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
