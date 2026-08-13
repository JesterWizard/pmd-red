







static const struct ScriptCommand s_gs206_g0_s0_station_sref_script[] = { /* 0x825e858 */
    DEBUGINFO_O(10),
    SELECT_MAP(206),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs206_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs206_g0_s0_station_sref_script }; /* 0x825e8c4 */

static const struct ScriptCommand s_gs206_g1_s0_station_sref_script[] = { /* 0x825e8d0 */
    DEBUGINFO_O(19),
    SELECT_MAP(206),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_IN_THE_DEPTHS_OF_THE_PIT),
    FADE_IN(1, 0x1E),
    AWAIT_CUE(3),
    FANFARE_FADEOUT2(60, 453),
    BGM_FADEOUT(60),
    SET_PLACE_MODE(1),
    FADE_OUT(1, 0x3C),
    { 0x97, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(90),
    FADE2_OUT(1, 0x0),
    UPDATE_NAME(UPDATE_NAME_ACTOR_TYPE, 0x0, 0x1),
    UPDATE_NAME(UPDATE_NAME_ACTOR_TYPE, 0x1, 0x58),
    UPDATE_NAME(UPDATE_NAME_ACTOR_TYPE, 0x2, 0x67),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}Having calmed {NAME_2},\n{CENTER_ALIGN}{NAME_0}'s team left the dungeon...")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}And returned to Pokémon Square\n{CENTER_ALIGN}together with {NAME_1}'s team.")),
    TEXTBOX_CLEAR,
    WAIT(1),
    FADE2_IN(1, 0x0),
    WAIT(120),
    SET_PLACE_MODE(0),
    RET,
};

static const ScriptRef s_gs206_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs206_g1_s0_station_sref_script }; /* 0x825eacc */

static const struct ScriptCommand s_gs206_g1_s0_eff0_script[] = { /* 0x825ead8 */
    DEBUGINFO_O(48),
    CAMERA_END_PAN,
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs206_g1_s0_lives0_dlg0[] = { /* 0x825eb18 */
    DEBUGINFO_O(55),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    WAIT_FADE,
    WAIT(30),
    FANFARE_PLAY2(493),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 4, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(5),
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 4, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(15),
    FANFARE_PLAY2(493),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 4, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(5),
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 4, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(30),
    ALERT_CUE(7),
    WAIT(20),
    MSG_OVERHEARD(_("Grgaaaaaah!")),
    WAIT(120),
    TEXTBOX_CLEAR,
    WAIT(90),
    FANFARE_PLAY2(499),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    SELECT_ENTITIES(-1, 1),
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_NPC(1, _(" Look! It's {NAME_3}!{WAIT_PRESS}\n{NAME_4} and {NAME_5} too!")),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(10),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, _(" Urrgggh!")),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(10),
    ALERT_CUE(9),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0004, 0x00000043),
    MSG_NPC(4, _(" Did you do it?\n{NAME_2}?")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Are you all right?")),
    VARIANT_DEFAULT(_(" Are you OK?")),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    WAIT(30),
    PORTRAIT(PLACEMENT_CENTERRIGHT_TOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, _(" Yes, fine.")),
    MSG_NPC(3, _(" We will be fine.\nBut we must get out immediately.")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0005, 0x00000005),
    MSG_NPC(1, _(" What about {NAME_2}?{WAIT_PRESS}\nWill it be OK?")),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, _(" Your concern is unneeded.\nIt will awaken soon enough.")),
    MSG_NPC(3, _(" It had lost control only\nbecause it was enraged from having its\nsleep disturbed.")),
    MSG_NPC(3, _(" It should calm down.")),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(453),
    { 0x97, 0x00,  0x0002,  0x00000001,  0x00000003, NULL },
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(14),
    WAIT(30),
    PORTRAIT_REP(0x0005, 0x0000000c),
    MSG_NPC(1, _(" Waah...{WAIT_PRESS}\nAnother quake!")),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, _(" Out! Quickly!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(14),
    WALK_DIRECTION(120, 0x100, 0x0),
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs206_g1_s0_lives1_dlg0[] = { /* 0x825f2ec */
    DEBUGINFO_O(157),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x1, 0x0),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(128, 0, -8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    WALK_DIRECTION(120, 0x100, 0x0),
    HALT,
};

static const struct ScriptCommand s_gs206_g1_s0_lives2_dlg0[] = { /* 0x825f41c */
    DEBUGINFO_O(179),
    SELECT_ANIMATION(2),
    AWAIT_CUE(14),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(14),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    WALK_DIRECTION(120, 0x100, 0x0),
    HALT,
};

static const struct ScriptCommand s_gs206_g1_s0_lives3_dlg0[] = { /* 0x825f49c */
    DEBUGINFO_O(190),
    SELECT_ANIMATION(2),
    AWAIT_CUE(14),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(14),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    WALK_DIRECTION(120, 0x100, 0x0),
    HALT,
};

static const struct ScriptCommand s_gs206_g1_s0_lives4_dlg0[] = { /* 0x825f51c */
    DEBUGINFO_O(201),
    SELECT_ANIMATION(22),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x2, 0x0),
    AWAIT_CUE(7),
    SELECT_ANIMATION(23),
    WAIT(30),
    FANFARE_PLAY2(665),
    WAIT(60),
    FANFARE_PLAY2(662),
    { 0x97, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    WAIT(20),
    { 0x97, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs206_g1_s0_eff1_script[] = { /* 0x825f5fc */
    DEBUGINFO_O(218),
    AWAIT_CUE(11),
    EMOTION_EFFECT(0x67),
    WAIT_EFFECT,
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs206_g1_s0_eff2_script[] = { /* 0x825f65c */
    DEBUGINFO_O(227),
    AWAIT_CUE(12),
    EMOTION_EFFECT(0x67),
    WAIT_EFFECT,
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs206_g1_s0_eff3_script[] = { /* 0x825f6bc */
    DEBUGINFO_O(236),
    AWAIT_CUE(13),
    EMOTION_EFFECT(0x67),
    WAIT_EFFECT,
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs206_g1_s1_lives0_dlg0[] = { /* 0x825f71c */
    DEBUGINFO_O(245),
    SELECT_ANIMATION(0x1A),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x3, 0x0),
    AWAIT_CUE(8),
    MOVE_RELATIVE(0x100, 0x1, 0x0),
    MOVE_RELATIVE(0x100, -1, 0x0),
    MOVE_RELATIVE(0x100, 0x1, 0x0),
    MOVE_RELATIVE(0x100, -1, 0x0),
    MOVE_RELATIVE(0x100, 0x1, 0x0),
    MOVE_RELATIVE(0x100, -1, 0x0),
    WAIT(30),
    MOVE_RELATIVE(0x100, 0x2, 0x0),
    MOVE_RELATIVE(0x100, -2, 0x0),
    MOVE_RELATIVE(0x100, 0x2, 0x0),
    MOVE_RELATIVE(0x100, -2, 0x0),
    WAIT(30),
    SELECT_ANIMATION(2),
    WAIT(30),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    WAIT(20),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    WAIT(10),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(8),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WALK_DIRECTION(120, 0x100, 0x0),
    HALT,
};

static const struct ScriptCommand s_gs206_g1_s1_lives1_dlg0[] = { /* 0x825f91c */
    DEBUGINFO_O(280),
    SELECT_ANIMATION(25),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x4, 0x0),
    AWAIT_CUE(9),
    WAIT(10),
    MOVE_RELATIVE(0x100, 0x0, 0x1),
    MOVE_RELATIVE(0x100, 0x0, -1),
    MOVE_RELATIVE(0x100, 0x0, 0x1),
    MOVE_RELATIVE(0x100, 0x0, -1),
    MOVE_RELATIVE(0x100, 0x0, 0x1),
    MOVE_RELATIVE(0x100, 0x0, -1),
    WAIT(25),
    MOVE_RELATIVE(0x100, 0x2, 0x0),
    MOVE_RELATIVE(0x100, -2, 0x0),
    MOVE_RELATIVE(0x100, 0x2, 0x0),
    MOVE_RELATIVE(0x100, -2, 0x0),
    WAIT(25),
    SELECT_ANIMATION(2),
    WAIT(45),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(20),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(9),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(9),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(9),
    WALK_DIRECTION(136, 0x100, 0x0),
    HALT,
};

static const struct ScriptCommand s_gs206_g1_s1_lives2_dlg0[] = { /* 0x825fb1c */
    DEBUGINFO_O(315),
    SELECT_ANIMATION(23),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x5, 0x0),
    AWAIT_CUE(10),
    MOVE_RELATIVE(0x100, 0x0, 0x1),
    MOVE_RELATIVE(0x100, 0x0, -1),
    MOVE_RELATIVE(0x100, 0x0, 0x1),
    MOVE_RELATIVE(0x100, 0x0, -1),
    MOVE_RELATIVE(0x100, 0x0, 0x1),
    MOVE_RELATIVE(0x100, 0x0, -1),
    AWAIT_CUE(10),
    WAIT(15),
    MOVE_RELATIVE(0x100, 0x0, 0x1),
    MOVE_RELATIVE(0x100, 0x0, -1),
    MOVE_RELATIVE(0x100, 0x0, 0x1),
    MOVE_RELATIVE(0x100, 0x0, -1),
    MOVE_RELATIVE(0x100, 0x0, 0x1),
    MOVE_RELATIVE(0x100, 0x0, -1),
    WAIT(30),
    MOVE_RELATIVE(0x100, 0x0, 0x2),
    MOVE_RELATIVE(0x100, 0x0, -2),
    MOVE_RELATIVE(0x100, 0x0, 0x2),
    MOVE_RELATIVE(0x100, 0x0, -2),
    WAIT(40),
    SELECT_ANIMATION(2),
    WAIT(40),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WAIT(10),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(5),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(10),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(10),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(10),
    WALK_DIRECTION(136, 0x100, 0x0),
    HALT,
};

static const struct GroundLivesData s_gs206_g1_s0_lives[] = { /* 0x825fdcc */
    /*  0 */ {   0,   4,   0,   0, {  34,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  27,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s0_lives1_dlg0,
    } },
    /*  2 */ {  10,   4,   0,   0, {  29,  34, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s0_lives2_dlg0,
    } },
    /*  3 */ {  11,   4,   0,   0, {  33,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s0_lives3_dlg0,
    } },
    /*  4 */ { 103,   0,   0,   0, {  30,  22, CPOS_HALFTILE, 0 }, {
        [0] = s_gs206_g1_s0_lives4_dlg0,
    } },
};

static const struct GroundLivesData s_gs206_g1_s1_lives[] = { /* 0x825fe44 */
    /*  0 */ {  88,   0,   0,   0, {  30,  26, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s1_lives0_dlg0,
    } },
    /*  1 */ {  89,   7,   0,   0, {  26,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s1_lives1_dlg0,
    } },
    /*  2 */ {  90,   1,   0,   0, {  36,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s1_lives2_dlg0,
    } },
};

static const struct GroundEffectData s_gs206_g1_s0_effs[] = { /* 0x825fe8c */
    /*  0 */ {   0,   0,   1,   1, {  31,  26, 0, CPOS_HALFTILE }, s_gs206_g1_s0_eff0_script },
    /*  1 */ {   4,   0,   2,   1, {  30,  26, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs206_g1_s0_eff1_script },
    /*  2 */ {   4,   0,   2,   1, {  36,  24, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs206_g1_s0_eff2_script },
    /*  3 */ {   4,   0,   2,   1, {  26,  24, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs206_g1_s0_eff3_script },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x825febc */
    &s_gs206_g0_s0_station_sref,
    &s_gs206_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs206_g0_sectors[] = { /* 0x825fec4 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs206_g1_sectors[] = { /* 0x825feec */
    { LPARRAY(s_gs206_g1_s0_lives), 0,NULL, LPARRAY(s_gs206_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
    { LPARRAY(s_gs206_g1_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs206_groups[] = { /* 0x825ff3c */
    { LPARRAY(s_gs206_g0_sectors) },
    { LPARRAY(s_gs206_g1_sectors) },
};

static const struct GroundLink s_gs206_links[] = { /* 0x825ff4c */
    {},
};

const GroundScriptHeader gGroundScript_gs206 = { LPARRAY(s_gs206_groups), s_gs206_links }; /* 0x825ff54 */
