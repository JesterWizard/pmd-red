









static const struct ScriptCommand s_gs165_g0_s0_station_sref_script[] = { /* 0x82185a0 */
    DEBUGINFO_O(12),
    SELECT_MAP(165),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs165_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs165_g0_s0_station_sref_script }; /* 0x821860c */

static const struct ScriptCommand s_gs165_g1_s0_station_sref_script[] = { /* 0x8218618 */
    DEBUGINFO_O(21),
    BGM_SWITCH(MUS_THE_ESCAPE),
    FADE_OUT(1, 0x0),
    FADE2_OUT(1, 0x0),
    SELECT_MAP(165),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}Across fields of fire...")),
    TEXTBOX_CLEAR,
    WAIT(1),
    FADE2_IN(1, 0x0),
    SELECT_ENTITIES(-1, 0),
    FADE_IN(1, 0x1E),
    AWAIT_CUE(3),
    FADE_OUT(1, 0x1E),
    FADE2_OUT(1, 0x0),
    UPDATE_NAME(UPDATE_NAME_ACTOR_TYPE, 0x0, 0x21),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}But throughout it all,\n{CENTER_ALIGN}{NAME_0}'s team kept\n{CENTER_ALIGN}their heads held high.")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}Without a complaint,\n{CENTER_ALIGN}they marched on.")),
    TEXTBOX_CLEAR,
    WAIT(1),
    FADE2_IN(1, 0x0),
    BGM_FADEOUT(120),
    FADE_OUT(1, 0x3C),
    WAIT(60),
    RET,
};

static const ScriptRef s_gs165_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs165_g1_s0_station_sref_script }; /* 0x8218828 */



static const struct ScriptCommand s_gs165_g1_s0_lives0_dlg0[] = { /* 0x8218834 */
    DEBUGINFO_O(52),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    ALERT_CUE(6),
    WALK_GRID(204, 0),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Nature's gone savage\nhere too...")),
    VARIANT(/* == */  1, _(" The forest fires are still\nburning out of control...")),
    VARIANT_DEFAULT(_(" The environment is out\nof control here too...")),
    VARIANT_DEFAULT(_(" The forest fire is still\nraging...")),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    FADE_OUT(0, 0x64),
    WALK_DIRECTION(128, 0xCC, 0x2),
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs165_g1_s0_lives1_dlg0[] = { /* 0x8218a34 */
    DEBUGINFO_O(77),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x1, 0x0),
    AWAIT_CUE(6),
    WALK_GRID(204, 1),
    ROTATE_TO(8, DIR_TRANS_11, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(10),
    ALERT_CUE(6),
    WALK_DIRECTION(128, 0xCC, 0x2),
    HALT,
};

static const struct GroundLivesData s_gs165_g1_s0_lives[] = { /* 0x8218af4 */
    /*  0 */ {   0,   2,   0,   0, {   6,  12, 0, CPOS_HALFTILE }, {
        [0] = s_gs165_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {   1,  12, 0, CPOS_HALFTILE }, {
        [0] = s_gs165_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs165_g1_s0_effs[] = { /* 0x8218b24 */
    /*  0 */ {   0,   0,   1,   1, {  16,  11, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8218b30 */
    &s_gs165_g0_s0_station_sref,
    &s_gs165_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs165_g0_sectors[] = { /* 0x8218b38 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs165_g1_sectors[] = { /* 0x8218b60 */
    { LPARRAY(s_gs165_g1_s0_lives), 0,NULL, LPARRAY(s_gs165_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs165_groups[] = { /* 0x8218b88 */
    { LPARRAY(s_gs165_g0_sectors) },
    { LPARRAY(s_gs165_g1_sectors) },
};

static const struct GroundLink s_gs165_links[] = { /* 0x8218b98 */
    /* link   0 */ { { /*x*/  18, /*y*/  12, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  14, /*y*/  12, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs165 = { LPARRAY(s_gs165_groups), s_gs165_links }; /* 0x8218ba8 */
