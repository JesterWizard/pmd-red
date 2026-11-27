/*
 * Explorers of Sky demake, chapter 3's flow (documentation/Features/SkyChapter3.md,
 * "What plays"): EoS's coroutines EVENT_M03_* (SCRIPT/COMMON/unionall.ssb) as
 * the event scripts that run the scenes on chapter 3's station gs181
 * (events/sky/scenes/sky_d02p02_scenes.scene; EXECUTE_SUBSTATION's map only
 * picks that script file, each group selects its own map). Included by
 * src/data/ground/ground_event_data.h in its sky-only block, so the vanilla
 * build's line numbers (DEBUGINFO, __LINE__) do not move. The Mt. Bristle
 * events (cleared, the peak won, fainted) are next to GETOUT_M01E02B there.
 *
 * gs181's groups: 0 the free roam's hub, 1-12 free roam (one a map), then
 * EoS's scripts in play order: 20 c00a0201, 21 c00a0101, 22 m03a0101,
 * 23 m03a0102, 24 m03a0105, 25 m03a0106, 26 m00p1101, 27 m03a0107,
 * 28 m03a0108, 29 m03a0109, 30 m03a0201, 31 m03a0301, 32 c00a0701,
 * 33 m03d0313, 34 c00a1701, 35 m03d0314, 36 m03a0401, 37 m03d0812 (sector 1),
 * 38 m03a0403, 39 m03a0502, 40 m03a0505, 41 m03a0506, 42 m03a0511,
 * 43 m03a0601, 44 m03a0801, 45 m03a0901, 46 m03a1001, 47 m03a1002,
 * 48 m03a1201, 49 m03d0812 (sector 0), 50 m03a1203, 51-64 m03a1301-1314,
 * 65 m03a0701, 66 m03a0702. Dinner (c00a0501, c00a0601) is chapter 2's
 * groups 17 and 18 on gs180.
 */

/* Free roam on a chapter-3 map (gs181's hub, group 0, runs the map's group):
 * the hero and the partner at entry `link` of the map (link 0: where the last
 * scene left them). */
#define SKY_CH3_FREE_ROAM(map, link)                                     \
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, map),                          \
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, map),                         \
    UPDATE_VARINT(CALC_SET, GROUND_ENTER_LINK, link),                    \
    EXECUTE_MAP_VAR(GROUND_ENTER),                                       \
    HALT

/* EoS EVENT_HA_KI at (4, 0) (EVENT_DIVIDE after chapter 2's good night):
 * c00a0201, chapter 3's card, "The next morning...", Loudred, the save; then
 * free roam in the crew room, from the hero's bed (EoS: ExecuteStationCommon
 * (G01P07A, 1)). The crew room is GROUND_ENTER before the save, so Continue
 * from it comes back there (EVENT_DIVIDE_FIRST, SKY_CH3_FLAG_MORNING). */
static const struct ScriptCommand s_script_SKY_CH3_MORNING[] = {
    DEBUGINFO_O(4044),
    SET_PLACE_MODE(1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_SKY_GUILD_CREW_ROOM_CH3),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER_LINK, 2),
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_CREW_ROOM_CH3, 20, 0),   /* c00a0201: the card, the morning (the save) */
    SKY_CH3_FREE_ROAM(MAP_SKY_GUILD_CREW_ROOM_CH3, 2),
};

/* EoS G01P07A enter01 with $SCENARIO_MAIN_BIT_FLAG[1] (the crew room's exit
 * after a morning): EVENT_HA_CHO at (4, 0) (the morning address, c00a0101 in
 * its sector 2, then B2F's station: its triggers run SKY_CH3_TOWN_EVENT), or
 * EVENT_M03_07B after fainting on Mt. Bristle ((4, 5) / (4, 6): the address,
 * then m03a0702: back to Mt. Bristle, by the crossroads' exploration exit). */
static const struct ScriptCommand s_script_SKY_CH3_ADDRESS[] = {
    DEBUGINFO_O(4045),
    SET_PLACE_MODE(1),
    SET_ARRAYVAL(SKY_SCENARIO_MAIN_BIT_FLAG, SKY_CH3_FLAG_ADDRESS, 0),
    SET_ARRAYVAL(SKY_SCENARIO_MAIN_BIT_FLAG, SKY_CH3_FLAG_MORNING, 0),
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B2F_CH3, 21, 0),         /* c00a0101: the morning address */
    JUMPIF_SCENE_EQ(SCENARIO_MAIN, 4, 0, /* to label */ 1),
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B2F_CH3, 66, 0),         /* m03a0702: "Hurry! We have to rescue Azurill!" */
  LABEL(1),
    SKY_CH3_FREE_ROAM(MAP_SKY_GUILD_B2F_CH3, 0),
};

/* EoS EVENT_M03_01B (B2F's triggers at (4, 0)): the outlaw board, out of the
 * guild by day, the crossroads, Treasure Town; then free roam in the square
 * (EoS ExecuteStationCommon(T01P01A, 1): where m03a0109 left them). */
static const struct ScriptCommand s_script_SKY_CH3_TOWN[] = {
    DEBUGINFO_O(4046),
    SET_PLACE_MODE(1),
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B2F_CH3, 22, 0),         /* m03a0101 (4, 1): Chatot */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B1F_CH3, 23, 0),         /* m03a0102: the Outlaw Notice Board */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B2F_CH3, 24, 0),         /* m03a0105: Bidoof */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_ENTRANCE_DAY, 25, 0),    /* m03a0106: out of the guild */
    EXECUTE_SUBSTATION(MAP_SKY_CROSSROADS, 26, 0),            /* m00p1101: the crossroads */
    EXECUTE_SUBSTATION(MAP_SKY_TREASURE_TOWN_SQUARE, 27, 0),  /* m03a0107: Treasure Town */
    EXECUTE_SUBSTATION(MAP_SKY_TREASURE_TOWN_WEST, 28, 0),    /* m03a0108: Kecleon Market */
    EXECUTE_SUBSTATION(MAP_SKY_TREASURE_TOWN_SQUARE, 29, 0),  /* m03a0109: the other shops */
    SKY_CH3_FREE_ROAM(MAP_SKY_TREASURE_TOWN_SQUARE, 5),
};

/* EoS EVENT_M03_02 (the square's east edge at (4, 1)): "Let's go to the
 * Kecleon shop first"; back to free roam (EoS CORO_EVENT_END_FREE). */
static const struct ScriptCommand s_script_SKY_CH3_DETOUR[] = {
    DEBUGINFO_O(4047),
    SET_PLACE_MODE(1),
    EXECUTE_SUBSTATION(MAP_SKY_TREASURE_TOWN_SQUARE, 30, 0),  /* m03a0201 */
    SKY_CH3_FREE_ROAM(MAP_SKY_TREASURE_TOWN_SQUARE, 6),
};

/* EoS EVENT_M03_03 (the Kecleon brothers at (4, 1), after their shop):
 * Marill and Azurill, the apple; the partner's dizzy spell, the scream; then
 * free roam on the west side. */
static const struct ScriptCommand s_script_SKY_CH3_KECLEON[] = {
    DEBUGINFO_O(4048),
    SET_PLACE_MODE(1),
    EXECUTE_SUBSTATION(MAP_SKY_TREASURE_TOWN_WEST, 31, 0),    /* m03a0301 (4, 2) */
    EXECUTE_SUBSTATION(MAP_SKY_MT_BRISTLE_PEAK, 32, 0),       /* c00a0701: the dizzy spell (black) */
    EXECUTE_SUBSTATION(MAP_SKY_TREASURE_TOWN_WEST, 33, 0),    /* m03d0313: "H-h-h...HELP!" */
    EXECUTE_SUBSTATION(MAP_SKY_MT_BRISTLE_PEAK, 34, 0),       /* c00a1701: out of it */
    EXECUTE_SUBSTATION(MAP_SKY_TREASURE_TOWN_WEST, 35, 0),    /* m03d0314 */
    SKY_CH3_FREE_ROAM(MAP_SKY_TREASURE_TOWN_WEST, 5),
};

/* EoS EVENT_M03_04 (the square at (4, 2)): Drowzee bumps the hero; the
 * hero's vision of Azurill at Mt. Bristle; then free roam in the square. */
static const struct ScriptCommand s_script_SKY_CH3_VISION[] = {
    DEBUGINFO_O(4049),
    SET_PLACE_MODE(1),
    EXECUTE_SUBSTATION(MAP_SKY_TREASURE_TOWN_SQUARE, 36, 0),  /* m03a0401 (4, 3) */
    EXECUTE_SUBSTATION(MAP_SKY_MT_BRISTLE_PEAK, 32, 0),       /* c00a0701 */
    EXECUTE_SUBSTATION(MAP_SKY_MT_BRISTLE_PEAK, 37, 0),       /* m03d0812 (sector 1): the vision */
    EXECUTE_SUBSTATION(MAP_SKY_MT_BRISTLE_PEAK, 34, 0),       /* c00a1701 */
    EXECUTE_SUBSTATION(MAP_SKY_TREASURE_TOWN_SQUARE, 38, 0),  /* m03a0403 */
    SKY_CH3_FREE_ROAM(MAP_SKY_TREASURE_TOWN_SQUARE, 7),
};

/* EoS EVENT_M03_05_06 (Bidoof at B1F, m03a0501's "Yes"): Chatot and the
 * outlaw board, Dugtrio, Drowzee's poster, the crossroads, Mt. Bristle's
 * foot; m03a0601 enters Mt. Bristle (scenario (4, 5)). */
static const struct ScriptCommand s_script_SKY_CH3_OUTLAW[] = {
    DEBUGINFO_O(4050),
    SET_PLACE_MODE(1),
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B1F_CH3, 39, 0),         /* m03a0502 (4, 4) */
    EXECUTE_SUBSTATION(MAP_SKY_DUGTRIO_TUNNEL, 40, 0),        /* m03a0505: behind the board */
    EXECUTE_SUBSTATION(MAP_SKY_GUILD_B1F_CH3, 41, 0),         /* m03a0506: Drowzee's poster */
    EXECUTE_SUBSTATION(MAP_SKY_CROSSROADS, 42, 0),            /* m03a0511: Marill */
    EXECUTE_SUBSTATION(MAP_SKY_MT_BRISTLE_ENTRANCE, 43, 0),   /* m03a0601 (4, 5): into Mt. Bristle */
    CMD_UNK_AF(RESCUE_DUNGEON_MT_STEEL, TRUE),
    RET,
};

/* make DEBUG_BOOT_EVENT=SKY_CH3_START: chapter 3 from its start (scenario
 * (4, 0), as after chapter 2's good night): EVENT_DIVIDE runs the morning
 * (the card). */
static const struct ScriptCommand s_script_SKY_CH3_START[] = {
    DEBUGINFO_O(4051),
    SCENARIO_CALC(SCENARIO_MAIN,  4,  0),
    JUMP_SCRIPT(EVENT_DIVIDE),
};
