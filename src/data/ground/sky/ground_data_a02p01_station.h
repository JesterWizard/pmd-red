









static const struct ScriptCommand s_gs164_g0_s0_station_sref_script[] = { /* 0x8218140 */
    DEBUGINFO_O(12),
    SELECT_MAP(164),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs164_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs164_g0_s0_station_sref_script }; /* 0x82181ac */

static const struct ScriptCommand s_gs164_g1_s0_station_sref_script[] = { /* 0x82181b8 */
    DEBUGINFO_O(21),
    BGM_SWITCH(MUS_THE_ESCAPE),
    FADE_OUT(1, 0x0),
    FADE2_OUT(1, 0x0),
    SELECT_MAP(164),
    UPDATE_NAME(UPDATE_NAME_ACTOR_TYPE, 0x0, 0x21),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}Thus began\n{CENTER_ALIGN}{NAME_0}'s")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}cruel and arduous\n{CENTER_ALIGN}journey as a fugitive.")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}Over forbidding mountains...")),
    TEXTBOX_CLEAR,
    WAIT(1),
    FADE2_IN(1, 0x0),
    SELECT_ENTITIES(-1, 0),
    FADE_IN(1, 0x1E),
    AWAIT_CUE(3),
    FADE_OUT(1, 0x1E),
    RET,
};

static const ScriptRef s_gs164_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs164_g1_s0_station_sref_script }; /* 0x8218330 */


static const struct ScriptCommand s_gs164_g1_s0_lives0_dlg0[] = { /* 0x821833c */
    DEBUGINFO_O(44),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    ALERT_CUE(6),
    CAMERA_PAN(256, 0),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Whoa!\nThese cracks go down deep!")),
    VARIANT_DEFAULT(_(" Wow!\nAren't these fissures amazing?!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs164_g1_s0_lives1_dlg0[] = { /* 0x8218458 */
    DEBUGINFO_O(61),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x1, 0x0),
    CAMERA_PAN(256, 1),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    HALT,
};

static const struct GroundLivesData s_gs164_g1_s0_lives[] = { /* 0x82184d8 */
    /*  0 */ {   0,   2,   0,   0, {  25,  19, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs164_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  26,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs164_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs164_g1_s0_effs[] = { /* 0x8218508 */
    /*  0 */ {   0,   0,   1,   1, {  40,  20, 0, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8218514 */
    &s_gs164_g0_s0_station_sref,
    &s_gs164_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs164_g0_sectors[] = { /* 0x821851c */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs164_g1_sectors[] = { /* 0x8218544 */
    { LPARRAY(s_gs164_g1_s0_lives), 0,NULL, LPARRAY(s_gs164_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs164_groups[] = { /* 0x821856c */
    { LPARRAY(s_gs164_g0_sectors) },
    { LPARRAY(s_gs164_g1_sectors) },
};

static const struct GroundLink s_gs164_links[] = { /* 0x821857c */
    /* link   0 */ { { /*x*/  34, /*y*/  19, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  35, /*y*/  21, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs164 = { LPARRAY(s_gs164_groups), s_gs164_links }; /* 0x821858c */
