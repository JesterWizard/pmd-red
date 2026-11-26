







static const struct ScriptCommand s_gs172_g0_s0_station_sref_script[] = { /* 0x82298b4 */
    DEBUGINFO_O(10),
    SELECT_MAP(172),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs172_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs172_g0_s0_station_sref_script }; /* 0x8229920 */

static const struct ScriptCommand s_gs172_g1_s0_station_sref_script[] = { /* 0x822992c */
    DEBUGINFO_O(19),
    SELECT_MAP(172),
    SELECT_ENTITIES(-1, 0),
    UPDATE_NAME(UPDATE_NAME_ACTOR_TYPE, 0x0, 0x22),
    BGM_SWITCH(MUS_SKY_TOWER),
    ALERT_CUE(4),
    FADE_IN(1, 0x1E),
    AWAIT_CUE(5),
    WAIT(30),
    MSG_NPC(0, _(" It's a huge tower of\nclouds...")),
    TEXTBOX_CLEAR,
    FADE_OUT(1, 0x1E),
    RET,
};

static const ScriptRef s_gs172_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs172_g1_s0_station_sref_script }; /* 0x8229a20 */


static const struct ScriptCommand s_gs172_g1_s0_eff0_script[] = { /* 0x8229a2c */
    DEBUGINFO_O(38),
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    WALK_DIRECTION(224, 0x4C, 0x4),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    HALT,
};

static const struct GroundEffectData s_gs172_g1_s0_effs[] = { /* 0x8229a9c */
    /*  0 */ {   0,   0,   1,   1, {  18,  19, 0, CPOS_HALFTILE }, s_gs172_g1_s0_eff0_script },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8229aa8 */
    &s_gs172_g0_s0_station_sref,
    &s_gs172_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs172_g0_sectors[] = { /* 0x8229ab0 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs172_g1_sectors[] = { /* 0x8229ad8 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs172_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs172_groups[] = { /* 0x8229b00 */
    { LPARRAY(s_gs172_g0_sectors) },
    { LPARRAY(s_gs172_g1_sectors) },
};

static const struct GroundLink s_gs172_links[] = { /* 0x8229b10 */
    {},
};

const GroundScriptHeader gGroundScript_gs172 = { LPARRAY(s_gs172_groups), s_gs172_links }; /* 0x8229b18 */
