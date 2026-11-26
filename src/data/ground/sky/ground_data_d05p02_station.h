
#define NPC_PARTNER 1
#define NPC_JUMPLUFF 2
#define NPC_SHIFTRY 3
#define NPC_ZAPDOS 6




static const struct ScriptCommand s_gs187_g0_s0_station_sref_script[] = { /* 0x8237b78 */
    DEBUGINFO_O(10),
    SELECT_MAP(187),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs187_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs187_g0_s0_station_sref_script }; /* 0x8237be4 */

static const struct ScriptCommand s_gs187_g1_s0_station_sref_script[] = { /* 0x8237bf0 */
    DEBUGINFO_O(19),
    SELECT_MAP(187),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_IN_THE_DEPTHS_OF_THE_PIT),
    FADE_IN(1, 0x1E),
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    FADE_OUT(1, 0x3C),
    WAIT(60),
    RET,
};

static const ScriptRef s_gs187_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs187_g1_s0_station_sref_script }; /* 0x8237c90 */

static const struct ScriptCommand s_gs187_g1_s0_eff0_script[] = { /* 0x8237c9c */
    DEBUGINFO_O(34),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    WALK_DIRECTION(68, 0x1CC, 0x4),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs187_g1_s0_lives0_dlg0[] = { /* 0x8237d1c */
    DEBUGINFO_O(45),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    ALERT_CUE(6),
    ALERT_CUE(12),
    WALK_DIRECTION(80, 0x100, 0x4),
    WAIT(32),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, NPC_PARTNER, 0),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" {NAME_2}'s friend is\nsupposed to be around here, right?")),
    VARIANT_DEFAULT(_(" Isn't this the place?\nWhere {NAME_2}'s friend is supposed\nto be?")),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    WAIT(60),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(NPC_PARTNER, 12),
    MSG_NPC(NPC_PARTNER, _(" Oh, hey!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(12),
    WALK_DIRECTION(32, 0x100, 0x4),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    PORTRAIT_REP(NPC_PARTNER, 0),
    MSG_NPC(NPC_PARTNER, _(" We came for you!\nAre you all right?")),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, NPC_JUMPLUFF, 65),
    MSG_NPC(NPC_JUMPLUFF, _(" Yes...\nI'm fine, but...")),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(NPC_PARTNER, 1),
    MSG_NPC(NPC_PARTNER, _(" Great!\nYour friend is waiting for you.")),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(NPC_JUMPLUFF, _(" {NAME_3} is in the\nback...")),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(NPC_PARTNER, 0),
    MSG_NPC(NPC_PARTNER, _(" Huh? {NAME_3}?")),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    WAIT(5),
    ALERT_CUE(6),
    ALERT_CUE(12),
    WAIT(40),
    ROTATE_TO(2, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, NPC_PARTNER, 0),
    MSG_NPC(NPC_PARTNER, _(" Let's go!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(12),
    ALERT_CUE(4),
    WALK_DIRECTION(60, 0x1CC, 0x4),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    WAIT(30),
    PORTRAIT_REP(NPC_PARTNER, 12),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Hey! Are you all right?\nGet it together!")),
    VARIANT_DEFAULT(_(" Listen! Are you OK?\nSnap out of it!")),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, NPC_SHIFTRY, 65),
    MSG_NPC(NPC_SHIFTRY, _(" ...Urrrgh.\nForget about me...")),
    MSG_NPC(NPC_SHIFTRY, _(" Get away from here!")),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(NPC_PARTNER, _(" Get...{WAIT_PRESS}\nGet away?!")),
    TEXTBOX_CLEAR,
    BGM_STOP,
    FANFARE_PLAY2(502),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x77, 0x77, 0x00)),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 3, RGB_U32(0x77, 0x77, 0x00)),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x77, 0x77, 0x00)),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 3, RGB_U32(0x77, 0x77, 0x00)),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 4, RGB_U32(0x00, 0x00, 0x00)),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Wh-what happened?!\nIt's pitch-black! I can't see!")),
    VARIANT_DEFAULT(_(" Wh-what's going on?!\nWhy did it turn pitch-black?")),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 1),
    FANFARE_PLAY2(474),
    MSG_OVERHEARD(_("Gyaoooooh!")),
    WAIT(90),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(NPC_SHIFTRY, _(" It's coming!")),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(502),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x00, 0x00, 0x00)),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x77, 0x77, 0x00)),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x77, 0x77, 0x00)),
    FLASH_TO(FALSE, PALUTIL_KIND_05, 2, RGB_U32(0x77, 0x77, 0x00)),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x00, 0x00, 0x00)),
    MSG_NPC(-1, _(" Move aside, you!")),
    MSG_NPC(-1, _(" He dared to disturb my sleep!")),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(502),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x00, 0x00, 0x00)),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x77, 0x77, 0x00)),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x77, 0x77, 0x00)),
    FLASH_TO(FALSE, PALUTIL_KIND_05, 2, RGB_U32(0x77, 0x77, 0x00)),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x00, 0x00, 0x00)),
    MSG_NPC(-1, _(" I have no mercy for meddlers!\nAnd that includes you!")),
    TEXTBOX_CLEAR,
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 32, RGB_U32(0x00, 0x00, 0x00)),
    WAIT(32),
    FANFARE_PLAY2(517),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 16, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(32),
    MSG_OVERHEARD(_("Gyaooooh!")),
    WAIT(90),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 16, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(64),
    ALERT_CUE(6),
    ALERT_CUE(12),
    WAIT(8),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    WAIT(30),
    MSG_NPC(NPC_PARTNER, _(" Shi-{NAME_3}'s gone!")),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(6),
    ALERT_CUE(12),
    WAIT(15),
    BGM_SWITCH(MUS_RISING_FEAR),
    MSG_NPC(-1, _(" I am {NAME_6}!\nThe embodiment of lightning!")),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, NPC_ZAPDOS, 0),
    MSG_NPC(NPC_ZAPDOS, _(" If you wish to save\n{NAME_3}, then scale {COLOR YELLOW_D}Mt. Thunder{RESET}!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(11),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT_REP(NPC_PARTNER, 12),
    MSG_NPC(NPC_PARTNER, _(" {NAME_6}...")),
    MSG_NPC(NPC_PARTNER, _(" So that's the legendary\nmonster...")),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};













static const struct ScriptCommand s_gs187_g1_s0_lives1_dlg0[] = { /* 0x82389a8 */
    DEBUGINFO_O(205),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x1, 0x0),
    AWAIT_CUE(6),
    WALK_DIRECTION(80, 0x100, 0x4),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_DIRECTION(32, 0x100, 0x4),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_DIRECTION(60, 0x1CC, 0x4),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    FANFARE_PLAY2(466),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs187_g1_s0_lives2_dlg0[] = { /* 0x8238b68 */
    DEBUGINFO_O(236),
    SELECT_ANIMATION(2),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    AWAIT_CUE(12),
    WALK_DIRECTION(88, 0x100, 0x4),
    AWAIT_CUE(12),
    WALK_DIRECTION(32, 0x100, 0x4),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(12),
    WALK_DIRECTION(60, 0x1CC, 0x4),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(12),
    HALT,
};

static const struct ScriptCommand s_gs187_g1_s0_lives3_dlg0[] = { /* 0x8238cb8 */
    DEBUGINFO_O(260),
    SELECT_ANIMATION(2),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    AWAIT_CUE(12),
    WALK_DIRECTION(88, 0x100, 0x4),
    AWAIT_CUE(12),
    WALK_DIRECTION(32, 0x100, 0x4),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(12),
    WALK_DIRECTION(60, 0x1CC, 0x4),
    AWAIT_CUE(12),
    WAIT(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(12),
    HALT,
};

static const struct ScriptCommand s_gs187_g1_s0_lives4_dlg0[] = { /* 0x8238e18 */
    DEBUGINFO_O(285),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x2, 0x0),
    AWAIT_CUE(7),
    WALK_DIRECTION(96, 0x100, 0x0),
    SELECT_ANIMATION(9),
    AWAIT_CUE(7),
    WAIT(20),
    SELECT_ANIMATION(5),
    WALK_DIRECTION(70, 0x100, 0x4),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs187_g1_s0_lives5_dlg0[] = { /* 0x8238ee8 */
    DEBUGINFO_O(301),
    SELECT_ANIMATION(22),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x3, 0x0),
    AWAIT_CUE(8),
    END_DELETE,
};

static const struct ScriptCommand s_gs187_g1_s1_lives0_dlg0[] = { /* 0x8238f38 */
    DEBUGINFO_O(309),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x6, 0x0),
    AWAIT_CUE(11),
    HEIGHT_TO(0x100, 0x8),
    WAIT(16),
    MSG_OVERHEARD(_("Gyaoooooooh!")),
    FANFARE_PLAY2(459),
    HEIGHT_TO(0x400, 0x80),
    WAIT(90),
    TEXTBOX_CLEAR,
    ALERT_CUE(5),
    END_DELETE,
};

static const struct GroundLivesData s_gs187_g1_s0_lives[] = { /* 0x8239018 */
    /*  0 */ {   0,   4,   0,   0, {  20,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs187_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  24,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs187_g1_s0_lives1_dlg0,
    } },
    /*  2 */ {  10,   4,   0,   0, {  19,  47, 0, CPOS_HALFTILE }, {
        [0] = s_gs187_g1_s0_lives2_dlg0,
    } },
    /*  3 */ {  11,   4,   0,   0, {  25,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs187_g1_s0_lives3_dlg0,
    } },
    /*  4 */ {  95,   0,   0,   0, {  22,  13, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs187_g1_s0_lives4_dlg0,
    } },
    /*  5 */ {  85,   2,   0,   0, {  22,  11, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs187_g1_s0_lives5_dlg0,
    } },
};

static const struct GroundLivesData s_gs187_g1_s1_lives[] = { /* 0x82390a8 */
    /*  0 */ {  96,   0,   0,   0, {  22,   9, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs187_g1_s1_lives0_dlg0,
    } },
};

static const struct GroundEffectData s_gs187_g1_s0_effs[] = { /* 0x82390c0 */
    /*  0 */ {   0,   0,   1,   1, {  22,  29, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs187_g1_s0_eff0_script },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x82390cc */
    &s_gs187_g0_s0_station_sref,
    &s_gs187_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs187_g0_sectors[] = { /* 0x82390d4 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs187_g1_sectors[] = { /* 0x82390fc */
    { LPARRAY(s_gs187_g1_s0_lives), 0,NULL, LPARRAY(s_gs187_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
    { LPARRAY(s_gs187_g1_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs187_groups[] = { /* 0x823914c */
    { LPARRAY(s_gs187_g0_sectors) },
    { LPARRAY(s_gs187_g1_sectors) },
};

static const struct GroundLink s_gs187_links[] = { /* 0x823915c */
    {},
};

const GroundScriptHeader gGroundScript_gs187 = { LPARRAY(s_gs187_groups), s_gs187_links }; /* 0x8239164 */
