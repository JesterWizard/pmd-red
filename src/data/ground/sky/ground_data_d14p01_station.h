







static const struct ScriptCommand s_gs210_g0_s0_station_sref_script[] = { /* 0x8263ee4 */
    DEBUGINFO_O(10),
    SELECT_MAP(210),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs210_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs210_g0_s0_station_sref_script }; /* 0x8263f50 */

static const struct ScriptCommand s_gs210_g1_s0_station_sref_script[] = { /* 0x8263f5c */
    DEBUGINFO_O(19),
    SELECT_MAP(210),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_THERES_TROUBLE),
    FADE_IN(1, 0x1E),
    AWAIT_CUE(3),
    FADE_OUT(1, 0x1E),
    RET,
};

static const ScriptRef s_gs210_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs210_g1_s0_station_sref_script }; /* 0x8263fdc */

static const struct ScriptCommand s_gs210_g1_s0_lives0_dlg0[] = { /* 0x8263fe8 */
    DEBUGINFO_O(32),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    WAIT_FADE,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs210_g1_s0_lives1_dlg0[] = { /* 0x8264058 */
    DEBUGINFO_O(42),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x2, 0x0),
    HALT,
};

static const struct GroundLivesData s_gs210_g1_s0_lives[] = { /* 0x8264098 */
    /*  0 */ {   0,   4,   0,   0, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs210_g1_s0_lives0_dlg0,
    } },
    /*  1 */ { 132,   0,   0,   0, {  34,  25, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs210_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs210_g1_s0_effs[] = { /* 0x82640c8 */
    /*  0 */ {   0,   0,   1,   1, {  34,  27, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x82640d4 */
    &s_gs210_g0_s0_station_sref,
    &s_gs210_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs210_g0_sectors[] = { /* 0x82640dc */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs210_g1_sectors[] = { /* 0x8264104 */
    { LPARRAY(s_gs210_g1_s0_lives), 0,NULL, LPARRAY(s_gs210_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs210_groups[] = { /* 0x826412c */
    { LPARRAY(s_gs210_g0_sectors) },
    { LPARRAY(s_gs210_g1_sectors) },
};

static const struct GroundLink s_gs210_links[] = { /* 0x826413c */
    {},
};

const GroundScriptHeader gGroundScript_gs210 = { LPARRAY(s_gs210_groups), s_gs210_links }; /* 0x8264144 */
