







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

/* Spinda's dance: the Juice Bar talk script cues it after an order and waits. */
#define CAFE_CUE_SPINDA_DANCE      40
#define CAFE_CUE_SPINDA_DANCE_DONE 41

/* Café staff */
static const struct ScriptCommand s_gs229_g1_s0_lives0_dlg2[] = {
    DEBUGINFO_O(58),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_SPINDA_JUICE_BAR, 0, 0),
  LABEL(0), /* = 0x00 */
    COND_EQUAL(-1, /* to label */ 1),
    ALERT_CUE(CAFE_CUE_SPINDA_DANCE),
    AWAIT_CUE(CAFE_CUE_SPINDA_DANCE_DONE),
    SPECIAL_TEXT(SPECIAL_TEXT_SPINDA_JUICE_SERVE, 0, 0),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(END_TALK),
};

/* Spinda idles (sway) behind the bar; on cue it hops, spins twice, wiggles,
 * turns back to the counter and hops again. */
static const struct ScriptCommand s_gs229_g1_s0_lives0_dlg1[] = {
    DEBUGINFO_O(70),
    SELECT_ANIMATION(GROUND_ANIM_IDLE),
  LABEL(0), /* = 0x00 */
    AWAIT_CUE(CAFE_CUE_SPINDA_DANCE),
    WAIT(8),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    SELECT_ANIMATION(GROUND_ANIM_SPIN),
    ROTATE_RELATIVE(1, 1, DIR_TRANS_SPINRIGHT2),
    ROTATE_RELATIVE(1, 1, DIR_TRANS_SPINRIGHT2),
    ROTATE_RELATIVE(1, 1, DIR_TRANS_SPINRIGHT2),
    ROTATE_RELATIVE(1, 1, DIR_TRANS_SPINRIGHT2),
    ROTATE_RELATIVE(1, 1, DIR_TRANS_SPINRIGHT2),
    ROTATE_RELATIVE(1, 1, DIR_TRANS_SPINRIGHT2),
    ROTATE_RELATIVE(1, 1, DIR_TRANS_SPINRIGHT2),
    ROTATE_RELATIVE(1, 1, DIR_TRANS_SPINRIGHT2),
    SELECT_ANIMATION(GROUND_ANIM_TAIL_WHIP),
    WAIT(40),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    WAIT(10),
    SELECT_ANIMATION(GROUND_ANIM_IDLE),
    ALERT_CUE(CAFE_CUE_SPINDA_DANCE_DONE),
    JUMP_LABEL(0),
};

static const struct ScriptCommand s_gs229_g1_s0_lives1_dlg2[] = {
    DEBUGINFO_O(68),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_RECYCLE_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs229_g1_s0_lives2_dlg2[] = {
    DEBUGINFO_O(78),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    WAIT(1),
    MSG_NPC(1, _(" Wobbuffet!")),
    JUMP_SCRIPT(END_TALK),
};

/* Team members (besides leader / partner) relaxing at the tables. */
static const struct ScriptCommand s_gs229_g1_s0_team_dlg2[] = {
    DEBUGINFO_O(110),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    CJUMP_RANDOM(6),
    COND_EQUAL(0, /* to label */ 0),
    COND_EQUAL(1, /* to label */ 1),
    COND_EQUAL(2, /* to label */ 2),
    COND_EQUAL(3, /* to label */ 3),
    COND_EQUAL(4, /* to label */ 4),
  LABEL(5), /* = 0x05 */
    MSG_NPC(1, _(" Taking a little break.\nJust call me when it's time to go!")),
    JUMP_LABEL(6),
  LABEL(0), /* = 0x00 */
    MSG_NPC(1, _(" This café is so relaxing...\nI could stay here all day.")),
    JUMP_LABEL(6),
  LABEL(1), /* = 0x01 */
    MSG_NPC(1, _(" Spinda's juice is the best!\nWhat flavor should I try next?")),
    JUMP_LABEL(6),
  LABEL(2), /* = 0x02 */
    MSG_NPC(1, _(" Let's do our best on the\nnext rescue! I'll be ready.")),
    JUMP_LABEL(6),
  LABEL(3), /* = 0x03 */
    MSG_NPC(1, _(" Did you see Wynaut's\nlottery? I want a Prism Ticket!")),
    JUMP_LABEL(6),
  LABEL(4), /* = 0x04 */
    MSG_NPC(1, _(" Spinda's dance is amazing.\nI wonder how it doesn't get dizzy!")),
  LABEL(6), /* = 0x06 */
    SELECT_ANIMATION(GROUND_ANIM_IDLE),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs229_g1_s0_team_dlg1[] = {
    DEBUGINFO_O(150),
    SELECT_ANIMATION(GROUND_ANIM_IDLE),
    HALT,
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
        [1] = s_gs229_g1_s0_lives0_dlg1,
        [2] = s_gs229_g1_s0_lives0_dlg2,
    } },
    /*  1 */ { 109,   0,   0,   0, {  42,  16, 0, CPOS_HALFTILE }, {
        [2] = s_gs229_g1_s0_lives1_dlg2,
    } },
    /*  2 */ { 110,   0,   0,   0, {  44,  16, 0, CPOS_HALFTILE }, {
        [2] = s_gs229_g1_s0_lives2_dlg2,
    } },
    /* Kinds 10–13: active team members other than leader / partner (absent
     * slots do not spawn). Beside the lower tables first, then the upper ones. */
    /*  3 */ {  10,   6,   0,   0, {  26,  30, 0, CPOS_HALFTILE }, {
        [1] = s_gs229_g1_s0_team_dlg1,
        [2] = s_gs229_g1_s0_team_dlg2,
    } },
    /*  4 */ {  11,   2,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [1] = s_gs229_g1_s0_team_dlg1,
        [2] = s_gs229_g1_s0_team_dlg2,
    } },
    /*  5 */ {  12,   4,   0,   0, {  16,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs229_g1_s0_team_dlg1,
        [2] = s_gs229_g1_s0_team_dlg2,
    } },
    /*  6 */ {  13,   4,   0,   0, {  49,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs229_g1_s0_team_dlg1,
        [2] = s_gs229_g1_s0_team_dlg2,
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
