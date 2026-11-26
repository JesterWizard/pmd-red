/*
 * Explorers of Sky demake: Beach Cave Pit after the Zubat & Koffing battle
 * (EoS SCRIPT/D01P41A/m01a0701), on the converted EoS map d01p41a.
 * Replaces the Tiny Woods end-room group (gs179 group 1).
 */
#include "sky_story.h"

#define NPC_PLAYER 0
#define NPC_PARTNER 1
#define NPC_ZUBAT 2
#define NPC_KOFFING 3

static const struct ScriptCommand s_gs179_g0_s0_station_sref_script[] = {
    DEBUGINFO_O(16),
    SELECT_MAP(179),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs179_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs179_g0_s0_station_sref_script };

static const struct ScriptCommand s_gs179_g1_s0_station_sref_script[] = {
    DEBUGINFO_O(25),
    SET_PLACE_MODE(1),
    FADE_OUT(TRUE, 0),
    SELECT_MAP(MAP_SKY_BEACH_CAVE_PIT),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_SKY_IN_THE_DEPTHS_OF_THE_PIT),
    FADE_IN(TRUE, 30),
    SET_PLACE_MODE(4),
    AWAIT_CUE(3),
    BGM_FADEOUT(120),
    FADE_OUT(TRUE, 60),
    WAIT(60),
    RET,
};

static const ScriptRef s_gs179_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs179_g1_s0_station_sref_script };

static const struct ScriptCommand s_gs179_g1_s0_lives0_dlg0[] = { /* Player — drives the scene */
    DEBUGINFO_O(42),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PLAYER, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    WAIT_FADE,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, NPC_PLAYER, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, NPC_PARTNER, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, NPC_KOFFING, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, NPC_ZUBAT, EMOTION_NORMAL),
    WAIT(30),
    MSG_NPC(NPC_KOFFING, _(" Owowow...")),
    MSG_NPC(NPC_ZUBAT, _(" Ugh...{WAIT_PRESS} We got roughed up...")),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(7), /* they pull themselves together */
    ALERT_CUE(8),
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, NPC_KOFFING, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, NPC_ZUBAT, EMOTION_NORMAL),
    MSG_NPC(NPC_KOFFING, _(" B-blast it... How'd we get wiped\nout by wimps like them?")),
    MSG_NPC(NPC_ZUBAT, _(" Bah!{WAIT_PRESS} Here you go. Take it, then!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(7), /* Zubat tosses the Relic Fragment down */
    AWAIT_CUE(5),
    SELECT_ENTITIES(-1, 1), /* EoS: it lands at (28.5, 23) */
    FANFARE_PLAY2(466),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(6), /* partner: "!" */
    AWAIT_CUE(5),
    MSG_NPC(NPC_KOFFING, _(" Whoa-ho!{WAIT_PRESS} Don't think you're so\nawesome. Your victory was a fluke!")),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    MSG_NPC(NPC_ZUBAT, _(" Yeah, you just remember that!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(7), /* they flee past the heroes */
    ALERT_CUE(8),
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    ALERT_CUE(6),
    WAIT(60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(6), /* partner steps up to the fragment */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_INSPIRED),
    MSG_NPC(NPC_PARTNER, _(" Oh! It's my Relic Fragment!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_HAPPY),
    MSG_NPC(NPC_PARTNER, _(" Thank goodness...{WAIT_PRESS} I actually\nmanaged to get it back.")),
    TEXTBOX_CLEAR,
    ALERT_CUE(9), /* the partner has picked it up */
    ALERT_CUE(6), /* partner turns to the hero */
    AWAIT_CUE(5),
    ROTATE_TO_LIVES(4, DIR_TRANS_11, 34),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_TEARY_EYE),
    MSG_NPC(NPC_PARTNER, _(" This happened only because you\nhelped me, {NAME_0}.")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_HAPPY),
    MSG_NPC(NPC_PARTNER, _(" Thank you, {NAME_0}!")),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs179_g1_s0_lives1_dlg0[] = { /* Partner */
    DEBUGINFO_O(112),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PARTNER, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WALK_RELATIVE(204, 8, -8),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(204, 8, -8),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO_LIVES(4, DIR_TRANS_11, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs179_g1_s0_lives2_dlg0[] = { /* Zubat */
    DEBUGINFO_O(137),
    SELECT_ANIMATION(GROUND_ANIM_HURT),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_ZUBAT, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WALK_RELATIVE(640, 28, 36),
    WALK_RELATIVE(640, 4, 128),
    END_DELETE,
};

static const struct ScriptCommand s_gs179_g1_s0_lives3_dlg0[] = { /* Koffing */
    DEBUGINFO_O(155),
    SELECT_ANIMATION(GROUND_ANIM_HURT),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_KOFFING, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    AWAIT_CUE(8),
    SELECT_ANIMATION(2),
    AWAIT_CUE(8),
    WALK_RELATIVE(640, -24, 36),
    WALK_RELATIVE(640, -8, 128),
    END_DELETE,
};

/* m01a0701: PLAYER (30,25) & ATTENDANT1 (26,25) facing up; Zubat (30,19) and
 * Koffing (26,19) facing down. */
static const struct GroundLivesData s_gs179_g1_s0_lives[] = {
    /*  0 */ {   0,   4,   0,   0, {  30,  25, 0, CPOS_HALFTILE }, {
        [0] = s_gs179_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  26,  25, 0, CPOS_HALFTILE }, {
        [0] = s_gs179_g1_s0_lives1_dlg0,
    } },
    /*  2 */ { SKY_LIVES_ZUBAT,   0,   0,   0, {  30,  19, 0, CPOS_HALFTILE }, {
        [0] = s_gs179_g1_s0_lives2_dlg0,
    } },
    /*  3 */ { SKY_LIVES_KOFFING, 0,   0,   0, {  26,  19, 0, CPOS_HALFTILE }, {
        [0] = s_gs179_g1_s0_lives3_dlg0,
    } },
};

static const ScriptRef * const (sStationScripts[]) = {
    &s_gs179_g0_s0_station_sref,
    &s_gs179_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs179_g0_sectors[] = {
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct ScriptCommand s_gs179_relic_fragment_dlg0[] = {
    DEBUGINFO_O(__LINE__),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    AWAIT_CUE(9),
    END_DELETE,
};

static const struct GroundObjectData s_gs179_g1_s1_objs[] = {
    /*  0 */ { SKY_OBJ_RELIC_FRAGMENT, 0, 1, 1, {  28,  23, CPOS_HALFTILE, 0 }, {
        [0] = s_gs179_relic_fragment_dlg0,
    } },
};

static const struct GroundScriptSector s_gs179_g1_sectors[] = {
    { LPARRAY(s_gs179_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[1], },
    { 0,NULL, LPARRAY(s_gs179_g1_s1_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs179_groups[] = {
    { LPARRAY(s_gs179_g0_sectors) },
    { LPARRAY(s_gs179_g1_sectors) },
};

static const struct GroundLink s_gs179_links[] = { /* 0x82302d4 */
    /* link   0 */ { { /*x*/  20, /*y*/  23, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  24, /*y*/  23, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs179 = { LPARRAY(s_gs179_groups), s_gs179_links }; /* 0x82302e4 */
