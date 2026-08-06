







static const struct ScriptCommand s_gs229_g0_s0_station_sref_script[] = {
    DEBUGINFO_O(10),
    SELECT_MAP(MAP_SPINDA_CAFE),
    CJUMP_VAR(GROUND_GETOUT),
    COND_EQUAL(MAP_WHISCASH_POND, /* to label */ 0),
    COND_EQUAL(MAP_WHISCASH_POND_OPEN, /* to label */ 0),
  LABEL(0), /* = 0x00 */
    SELECT_LIVES(0, 1),
    JUMP_LABEL(1),
  LABEL(1), /* = 0x01 */
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    JUMPIF_SCENARIOCHECK(QUEST_CAN_ACCESS_JOBS, /* to label */ 2),
    JUMP_LABEL(3),
  LABEL(2), /* = 0x02 */
    SELECT_ENTITIES(1, 0),
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs229_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs229_g0_s0_station_sref_script };

/* Exit south stairs → Whiscash Pond */
static const struct ScriptCommand s_gs229_g0_s0_evt0_sref_script[] = {
    DEBUGINFO_O(35),
    { 0x01, 0x00, -0x0001,  MAP_WHISCASH_POND,  0x00000000, NULL },
    HALT,
};

static const ScriptRef s_gs229_g0_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs229_g0_s0_evt0_sref_script };

static const struct ScriptCommand s_gs229_g0_s1_lives0_dlg0[] = {
    DEBUGINFO_O(44),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs229_g0_s1_lives1_dlg0[] = {
    DEBUGINFO_O(51),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

/* Café staff */
static const struct ScriptCommand s_gs229_g1_s0_lives0_dlg2[] = {
    DEBUGINFO_O(58),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_SPINDA_JUICE_BAR, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs229_g1_s0_lives1_dlg2[] = {
    DEBUGINFO_O(68),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_RECYCLE_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs229_g1_s0_lives2_dlg2[] = {
    DEBUGINFO_O(78),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, _(" Wobbuffet!")),
    JUMP_SCRIPT(END_TALK),
};

/* Player / partner at top of entrance stairs (café floor landing), facing north */
static const struct GroundLivesData s_gs229_g0_s1_lives[] = {
    /*  0 */ {   0,   4,   0,   0, {  30,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs229_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  34,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs229_g0_s1_lives1_dlg0,
    } },
};

/* Spinda (left bar), Wynaut+Wobbuffet (right bar) — on fascia, face south.
 * Counter solid through y=22; talk hits kind-4 proxies there. */
static const struct GroundLivesData s_gs229_g1_s0_lives[] = {
    /*  0 */ { 115,   0,   0,   0, {  20,  16, 0, CPOS_HALFTILE }, {
        [2] = s_gs229_g1_s0_lives0_dlg2,
    } },
    /*  1 */ { 109,   0,   0,   0, {  42,  16, 0, CPOS_HALFTILE }, {
        [2] = s_gs229_g1_s0_lives1_dlg2,
    } },
    /*  2 */ { 110,   0,   0,   0, {  44,  16, 0, CPOS_HALFTILE }, {
        [2] = s_gs229_g1_s0_lives2_dlg2,
    } },
};

/* Invisible talk zones on solid y=22 so A works from player y=24 (kind 4 = no sprite). */
static const struct GroundObjectData s_gs229_g1_s0_objs[] = {
    /*  0 */ {   4,   0,   5,   1, {  20,  22, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs229_g1_s0_lives0_dlg2,
    } },
    /*  1 */ {   4,   0,   3,   1, {  42,  22, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs229_g1_s0_lives1_dlg2,
    } },
    /*  2 */ {   4,   0,   3,   1, {  44,  22, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs229_g1_s0_lives2_dlg2,
    } },
};

/* Exit on the bottom stair row → Whiscash Pond */
static const struct GroundEventData s_gs229_g0_s0_evts[] = {
    /*  0 */ {   5,   1,   0,   0, {  28,  46, 0, 0 }, &s_gs229_g0_s0_evt0_sref },
};

static const ScriptRef * const (sStationScripts[]) = {
    &s_gs229_g0_s0_station_sref,
};

static const struct GroundScriptSector s_gs229_g0_sectors[] = {
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs229_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs229_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs229_g1_sectors[] = {
    { LPARRAY(s_gs229_g1_s0_lives), LPARRAY(s_gs229_g1_s0_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs229_groups[] = {
    { LPARRAY(s_gs229_g0_sectors) },
    { LPARRAY(s_gs229_g1_sectors) },
};

static const struct GroundLink s_gs229_links[] = {
    {},
};

const GroundScriptHeader gGroundScript_gs229 = { LPARRAY(s_gs229_groups), s_gs229_links };
