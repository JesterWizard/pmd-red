/*
 * Explorers of Sky demake, chapter 2's flow (documentation/Features/SkyChapter2.md,
 * "What plays"): EoS's coroutines EVENT_M02_* (SCRIPT/COMMON/unionall.ssb) as
 * the event scripts that run the scenes on chapter 2's station gs180
 * (events/sky/scenes/sky_d02p01_scenes.scene; EXECUTE_SUBSTATION's map only
 * picks that script file, each group selects its own map). Included by
 * src/data/ground/ground_event_data.h in its sky-only block, so the vanilla
 * build's line numbers (DEBUGINFO, __LINE__) do not move.
 *
 * gs180's groups: 0 free roam on B2F (hand-made), then EoS's scripts in play
 * order: 1 m02a0101, 2 m02a0104, 3 m02a0105, 4 m02a0106, 5 m02a0108,
 * 6 m02a0109, 7 m02a0110, 8 m02a0111, 9 m02a0113, 10 m02a0201, 11 m02a0202,
 * 12 m02a0301, 13 m02a0302, 14 m02a0401, 15 m02a0801, 16 m02a1001,
 * 17 c00a0501, 18 c00a0601, 19 m02a1003, 20 m02a0501, 21 m02a0601,
 * 22 m02a0602, 23 m02a0603, 24 c00a0301, 25 c00a0201, 26 c00a0101,
 * 27 m02a0701.
 */

/* The save prompt (EoS CORO_HANYOU_SAVE_FUNC, as chapter 1's demo end asked
 * it); labels l, l+1, l+2. */
#define SKY_SAVE_PROMPT(l)                                                                          \
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, _("{CENTER_ALIGN}Would you like to save your adventure?")), \
    CHOICE(/* label */ (l), _("Save")),                                                             \
    CHOICE(/* label */ (l) + 1, _("Don't save")),                                                   \
  LABEL(l),                                                                                         \
    TEXTBOX_CLEAR,                                                                                  \
    SKY_SAVE_GAME,                                                                                  \
    COND_EQUAL(0, /* to label */ (l) + 2),                                                          \
    MSG_INSTANT(_("{CENTER_ALIGN}Your adventure has been saved.")),                                 \
    JUMP_LABEL((l) + 1),                                                                            \
  LABEL((l) + 2),                                                                                   \
    MSG_INSTANT(_("{CENTER_ALIGN}The data could not be saved.")),                                   \
  LABEL((l) + 1),                                                                                   \
    TEXTBOX_CLEAR

/* EoS EVENT_M02_01_02: the guild, the team, the first night and morning; then
 * free roam on B2F (gs180 group 0) until the player leaves the address's
 * spot (SKY_CH2_JOB_EVENT). EVENT_DIVIDE runs it at scenario (3, 1); after a
 * save at the good night (SKY_CH2_FLAG_MORNING) it starts at m02a0113's
 * "saved" branch and the morning. */
static const struct ScriptCommand s_script_SKY_CH2[] = {
    DEBUGINFO_O(1886),
    SET_PLACE_MODE(1),
    JUMPIF_ARRAY(SKY_SCENARIO_MAIN_BIT_FLAG, SKY_CH2_FLAG_MORNING, /* to label */ 1),
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_DUSK2, 1, 0),           /* m02a0101: chapter card, the sentry grate */
    EXECUTE_SUBSTATION(MAP_SKY_SENTRY_POST, 2, 0),           /* m02a0104: Diglett under the grate */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_ENTRANCE, 3, 0),        /* m02a0105: the gate opens */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_1F, 4, 0),              /* m02a0106: in */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B1F, 5, 0),             /* m02a0108: Chatot */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B2F, 6, 0),             /* m02a0109: down to B2F */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_WIGGLYTUFF, 7, 0),      /* m02a0110: Wigglytuff, the team's name, the kit */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_CREW_ROOM, 8, 0),       /* m02a0111: the crew room */
  LABEL(1),
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_CREW_ROOM_NIGHT, 9, 0), /* m02a0113: good night (the save) */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_CREW_ROOM, 10, 0),      /* m02a0201: "UP AND AT 'EM!" */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B2F, 11, 0),            /* m02a0202: the morning address */
    /* EoS: CORO_EVENT_END_MAPIN; main_SetGround(G01P04A); ExecuteStationCommon(G01P04A, 1) */
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_SKY_GUILD_B2F),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_SKY_GUILD_B2F),
    EXECUTE_MAP_VAR(GROUND_ENTER),
    HALT,
};

/* EoS EVENT_M02_03_04 (gs180 group 0's triggers: leaving the address's spot
 * on B2F): "Don't wander", the job bulletin board, Drenched Bluff. */
static const struct ScriptCommand s_script_SKY_CH2_JOB[] = {
    DEBUGINFO_O(1887),
    SET_PLACE_MODE(1),
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B2F, 12, 0),                 /* m02a0301 (3, 2) */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B1F, 13, 0),                 /* m02a0302: Spoink's pearl */
    EXECUTE_SUBSTATION(MAP_SKY_DRENCHED_BLUFF_ENTRANCE, 14, 0),   /* m02a0401 (3, 3): into the dungeon */
    CMD_UNK_AF(RESCUE_DUNGEON_THUNDERWAVE_CAVE, TRUE),
    RET,
};

/* make DEBUG_BOOT_EVENT=SKY_CH2_START: chapter 2 from its start (the debug
 * boot is at (2, 0)): EVENT_DIVIDE takes (3, 0) to (3, 1), which queues the
 * chapter card, and runs SKY_CH2_EVENT, as after chapter 1's save. */
static const struct ScriptCommand s_script_SKY_CH2_START[] = {
    DEBUGINFO_O(1888),
    SCENARIO_CALC(SCENARIO_MAIN,  3,  0),
    JUMP_SCRIPT(EVENT_DIVIDE),
};

/* The demo end, after chapter 2's good night (m02a1003 sets (4, 0)): save,
 * "the demo ends here", back to the title. Also run on Continue from a save
 * made here (src/ground_main.c). */
static const struct ScriptCommand s_script_SKY_DEMO_END[] = {
    DEBUGINFO_O(1889),
    SCENARIO_CALC(SCENARIO_MAIN,  4,  0), /* chapter 2 done: Continue comes back here */
    SET_PLACE_MODE(1),
    BGM_STOP,
    FADE_OUT(TRUE, 0),
    FADE2_IN(TRUE, 0),
    WAIT(30),
    SKY_SAVE_PROMPT(1),
    WAIT(20),
    MSG_INSTANT(_("{CENTER_ALIGN}The demo ends here.\n{CENTER_ALIGN}Look forward to updates!")),
    TEXTBOX_CLEAR,
    WAIT(30),
    SKY_DEMO_TO_TITLE,
    HALT,
};

/* Chapter 2: Drenched Bluff (Red's Thunderwave Cave, SCRIPT_DUNGEON_THUNDERWAVE_CAVE).
 * After the dungeon GETOUT_M01E02A runs (DUNGEON_ENTER 1, SCENARIO_MAIN 3):
 * STARTMODE_DUNGEON_WON -> EVENT_M01E02A_L006 (SKY_DRENCHED_BLUFF_CLEARED_EVENT),
 * anything else (fainted, or left early) -> EVENT_M01E02A_L004
 * (SKY_DRENCHED_BLUFF_FAINTED_EVENT). */
static const struct ScriptCommand s_script_SKY_DRENCHED_BLUFF_DEBUG[] = {
    DEBUGINFO_O(1890),
    /* m02a0401: $SCENARIO_MAIN = scn[3, 3]; main_EnterDungeon(3, 0) */
    SCENARIO_CALC(SCENARIO_MAIN,  3,  3),
    CMD_UNK_AF(RESCUE_DUNGEON_THUNDERWAVE_CAVE, TRUE),
    NEXT_DUNGEON(0, SCRIPT_DUNGEON_THUNDERWAVE_CAVE),
    RET,
};

/* EoS EVENT_M02_09_10: the pearl, the job done, dinner, good night; then the
 * demo end (EoS: EVENT_DIVIDE into chapter 3). */
static const struct ScriptCommand s_script_SKY_DRENCHED_BLUFF_CLEARED[] = {
    DEBUGINFO_O(1891),
    SET_RESCUE_CONQUERED(RESCUE_DUNGEON_THUNDERWAVE_CAVE),
    SET_PLACE_MODE(1),
    EXECUTE_SUBSTATION(MAP_SKY_DRENCHED_BLUFF_END, 15, 0),      /* m02a0801 (3, 6): Spoink's pearl */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B1F, 16, 0),               /* m02a1001: the reward */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B2F, 17, 0),               /* c00a0501: "Dinner's on!" */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_MESS_HALL, 18, 0),         /* c00a0601: dinner */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_CREW_ROOM_NIGHT, 19, 0),   /* m02a1003 (4, 0): good night */
    JUMP_SCRIPT(SKY_DEMO_END_EVENT),
};

/* EoS EVENT_M02_05_07A (fainted in Drenched Bluff, or EVENT_DIVIDE at (3, 3)):
 * scolded, dinner, the night (the first time back: m02a0601-0603 at (3, 4),
 * else c00a0301), the morning; then EVENT_M02_07B: the morning address
 * (c00a0101, sector 1's lines) and back to the bluff (m02a0701 sets (3, 4) or
 * (3, 5)). */
static const struct ScriptCommand s_script_SKY_DRENCHED_BLUFF_FAINTED[] = {
    DEBUGINFO_O(1892),
    SET_PLACE_MODE(1),
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B1F, 20, 0),               /* m02a0501: back at the guild */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B2F, 17, 0),               /* c00a0501: "Dinner's on!" */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_MESS_HALL, 18, 0),         /* c00a0601: dinner */
    JUMPIF_SCENE_EQ(SCENARIO_MAIN, 3, 4, /* to label */ 1),
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_CREW_ROOM_NIGHT, 24, 0),   /* c00a0301: good night */
    JUMP_LABEL(2),
  LABEL(1),
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_CREW_ROOM_NIGHT, 21, 0),   /* m02a0601 */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B2F_NIGHT, 22, 0),         /* m02a0602 */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_WIGGLYTUFF_NIGHT, 23, 0),  /* m02a0603: Wigglytuff's gift */
  LABEL(2),
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_CREW_ROOM, 25, 0),         /* c00a0201: the morning */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B2F, 26, 0),               /* c00a0101: the morning address */
    EXECUTE_SUBSTATION(MAP_SKY_DRENCHED_BLUFF_ENTRANCE, 27, 0), /* m02a0701: into the dungeon again */
    CMD_UNK_AF(RESCUE_DUNGEON_THUNDERWAVE_CAVE, TRUE),
    RET,
};
