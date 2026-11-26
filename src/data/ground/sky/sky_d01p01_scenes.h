/*
 * Explorers of Sky demake — opening chapter, ground scenes on the
 * MAP_TINY_WOODS_ENTRY script file (gs178). Each group selects one of the maps
 * converted from the Explorers of Sky ROM (tools/convert_eos_ground_map.py) and
 * follows the matching EoS scene script (SCRIPT/<level>/m01a0xxx.ssb):
 *
 *   group 4  m01a0101/0102  Storm at sea: voices in the dark, then the waves.
 *   group 5  m01a0103       The hero washed up on the beach (daytime).
 *   group 6  m01a0104       Wigglytuff's Guild at dusk: the partner loses their
 *                           nerve on the sentry grate; Zubat & Koffing watch.
 *   group 7  m01a0202       Krabby blowing bubbles.
 *   group 8  m01a0203       Krabby against the sunset.
 *   group 1  m01a0204-0208  Beach at sunset: the partner finds the hero, the
 *                           hero wakes up as a Pokémon, Zubat & Koffing steal
 *                           the Relic Fragment. -> NEXT_DUNGEON (Beach Cave).
 *   group 2  m01a0301       Defeated in Beach Cave: back on the beach.
 *   group 3  m01a0702       After the battle: the Relic Fragment, a team.
 *
 * Positions are EoS level coordinates (8px tiles); the converted maps keep the
 * EoS tile grid, so they carry over unchanged. Text follows the EoS default
 * dialogue variant, broken into GBA text boxes.
 */

#include "sky_story.h"

#define NPC_PLAYER 0
#define NPC_PARTNER 1
#define NPC_ZUBAT 2
#define NPC_KOFFING 3

/* ROTATE_TO_LIVES takes a lives kind, not an NPC slot. */
#define LIVES_KIND_PLAYER 0
#define LIVES_KIND_PARTNER 34

/* Cue protocol (as in the vanilla scenes): the driving script alerts an actor
 * cue (6 = partner, 7 = Zubat, 8 = Koffing, 9 = player), the actor performs one
 * step and alerts 5 ("done"); 3 tells the station script the scene is over. */

/* ------------------------------------------------------------------------ */
/* group 0 — plain map enter                                                 */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g0_s0_station_sref_script[] = {
    DEBUGINFO_O(38),
    SELECT_MAP(MAP_TINY_WOODS_ENTRY),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs178_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs178_g0_s0_station_sref_script };

/* ------------------------------------------------------------------------ */
/* group 4 — m01a0101 / m01a0102: a storm at sea                              */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g4_s0_station_sref_script[] = {
    DEBUGINFO_O(53),
    SET_PLACE_MODE(1),
    BGM_STOP,
    FADE_OUT(TRUE, 0),
    FADE2_OUT(TRUE, 0),
    SELECT_MAP(MAP_SKY_STORM_SEA),
    BGM_FADEIN(160, MUS_STORMY_SEA),
    WAIT(60),
    CAMERA_SHAKE(CAMERA_SHAKE_CUSTOM, 2, 3),
    MSG_NPC(-1, _(" Whoa! Wh-wh-whoa...!")),
    MSG_NPC(-1, _(" Are...{WAIT_PRESS} Are you OK?!")),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, _(" No!{WAIT_PRESS} Don't let go!")),
    MSG_NPC(-1, _(" Just a little longer...{WAIT_PRESS}\nCome on! Hang on!")),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, _(" N-n-no!{WAIT_PRESS} I can't...{WAIT_PRESS}hold on...!")),
    TEXTBOX_CLEAR,
    WAIT(40),
    MSG_NPC(-1, _(" Waaaaaah!")),
    TEXTBOX_CLEAR,
    CAMERA_SHAKE(CAMERA_SHAKE_OFF, 0, 0),
    WAIT(90),
    FADE2_IN(TRUE, 0),
    FADE_IN(TRUE, 30),
    SET_PLACE_MODE(4),
    WAIT(240),
    BGM_FADEOUT(120),
    FADE_OUT(TRUE, 60),
    WAIT(120),
    RET,
};

static const ScriptRef s_gs178_g4_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs178_g4_s0_station_sref_script };

/* ------------------------------------------------------------------------ */
/* group 5 — m01a0103: washed up on the beach                                 */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g5_s0_station_sref_script[] = {
    DEBUGINFO_O(93),
    SET_PLACE_MODE(1),
    BGM_STOP,
    FADE_OUT(TRUE, 0),
    FADE2_OUT(TRUE, 0),
    SELECT_MAP(MAP_SKY_BEACH_DAY),
    BGM_FADEIN(120, MUS_FRIEND_AREA_OCEANIC),
    WAIT(120),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}......")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}............")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}..................")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}Urrgh...")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}Where...")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}...Where am I?")),
    TEXTBOX_CLEAR,
    WAIT(1),
    FADE2_IN(TRUE, 0),
    SELECT_ENTITIES(-1, 0),
    FADE_IN(TRUE, 120),
    SET_PLACE_MODE(4),
    AWAIT_CUE(3),
    BGM_FADEOUT(120),
    FADE_OUT(TRUE, 150),
    WAIT(60),
    RET,
};

static const ScriptRef s_gs178_g5_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs178_g5_s0_station_sref_script };

static const struct ScriptCommand s_gs178_g5_s0_lives0_dlg0[] = { /* Player, unconscious */
    DEBUGINFO_O(122),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    UPDATE_NAME(UPDATE_NAME_SPEECH_SELF, NPC_PLAYER, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    WAIT_FADE,
    WAIT(60),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, NPC_PLAYER, EMOTION_PAINED),
    MSG_QUIET(NPC_PLAYER, _("...{WAIT_PRESS}I can't...{WAIT_PRESS} Drifting off...")),
    TEXTBOX_CLEAR,
    WAIT(90),
    ALERT_CUE(3),
    HALT,
};

/* ------------------------------------------------------------------------ */
/* group 6 — m01a0104: Wigglytuff's Guild, the sentry grate                    */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g6_s0_station_sref_script[] = {
    DEBUGINFO_O(139),
    SET_PLACE_MODE(1),
    BGM_STOP,
    FADE_OUT(TRUE, 0),
    SELECT_MAP(MAP_SKY_GUILD_DUSK),
    SELECT_ENTITIES(-1, 0),
    FADE_IN(TRUE, 30),
    SET_PLACE_MODE(4),
    AWAIT_CUE(3),
    BGM_FADEOUT(120),
    FADE_OUT(TRUE, 30),
    WAIT(60),
    RET,
};

static const ScriptRef s_gs178_g6_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs178_g6_s0_station_sref_script };

/* The partner drives this scene; there is no hero on screen yet. */
static const struct ScriptCommand s_gs178_g6_s0_lives0_dlg0[] = {
    DEBUGINFO_O(157),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PARTNER, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    CAMERA_INIT_PAN,
    WAIT_FADE,
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, NPC_PARTNER, EMOTION_WORRIED),
    MSG_NPC(NPC_PARTNER, _(" Hmm...")),
    TEXTBOX_CLEAR,
    WALK_RELATIVE(204, 24, 0),
    WALK_RELATIVE(204, -48, 0),
    WALK_RELATIVE(204, 48, 0),
    WALK_RELATIVE(204, -24, 0),
    WAIT(45),
    ROTATE_TO(1, DIR_TRANS_10, DIRECTION_NORTH),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_DETERMINED),
    MSG_NPC(NPC_PARTNER, _(" No.{WAIT_PRESS} I refuse to be paralyzed\nby this any longer!")),
    MSG_NPC(NPC_PARTNER, _(" This is it. Today I'm going to\nbe brave.")),
    TEXTBOX_CLEAR,
    WALK_RELATIVE(256, 0, -24),
    WAIT(30),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(SHOCK_FUNC),
    MSG_NPC(-1, _(" Pokémon detected! Pokémon detected!")),
    MSG_NPC(-1, _(" Whose footprint? Whose footprint?")),
    MSG_NPC(-1, _(" The footprint is {POKEMON_1}'s!{WAIT_PRESS}\nThe footprint is {POKEMON_1}'s!")),
    TEXTBOX_CLEAR,
    CALL_SCRIPT(SHOCK_FUNC),
    MOVE_RELATIVE(768, 0, 24),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SUPRISED),
    MSG_NPC(NPC_PARTNER, _(" Waah!")),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    ROTATE_TO(3, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    WAIT(5),
    ROTATE_TO(5, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    WAIT(15),
    ROTATE_TO(5, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    WAIT(45),
    MSG_NPC(NPC_PARTNER, _(" That shocked me!")),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SIGH),
    MSG_NPC(NPC_PARTNER, _(" Whew...")),
    TEXTBOX_CLEAR,
    WAIT(15),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SAD),
    MSG_NPC(NPC_PARTNER, _(" ...{WAIT_PRESS}I can't...{WAIT_PRESS} I can't bring myself\nto go in.")),
    MSG_NPC(NPC_PARTNER, _(" I vowed that I would do it\ntoday, but...")),
    TEXTBOX_CLEAR,
    WALK_RELATIVE(128, 0, -8),
    WAIT(15),
    MOVE_RELATIVE(128, 0, 8),
    WAIT(30),
    MSG_NPC(NPC_PARTNER, _(" I thought that holding on to my\npersonal treasure would inspire\nme...")),
    TEXTBOX_CLEAR,
    WALK_RELATIVE(128, 0, -8),
    WAIT(15),
    MOVE_RELATIVE(128, 0, 8),
    WAIT(45),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    WAIT(30),
    MSG_NPC(NPC_PARTNER, _(" Sigh...I just can't do it.")),
    MSG_NPC(NPC_PARTNER, _(" I'm such a coward...")),
    MSG_NPC(NPC_PARTNER, _(" This is so discouraging...")),
    TEXTBOX_CLEAR,
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(20),
    CAMERA_END_PAN,
    SELECT_LIVES(-1, 1), /* Zubat & Koffing step out of the shadows */
    WALK_RELATIVE(179, 0, 200),
    ALERT_CUE(7),
    END_DELETE,
};

static const struct ScriptCommand s_gs178_g6_s1_lives0_dlg0[] = { /* Zubat — drives the second half */
    DEBUGINFO_O(234),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_ZUBAT, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    AWAIT_CUE(7),
    WAIT(60),
    ALERT_CUE(8),
    WALK_RELATIVE(307, 96, 24),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(5),
    WAIT(45),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, NPC_KOFFING, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, NPC_ZUBAT, EMOTION_NORMAL),
    MSG_NPC(NPC_KOFFING, _(" Hey, Zubat.{WAIT_PRESS} Did you get a load\nof that?!")),
    MSG_NPC(NPC_ZUBAT, _(" You bet I did, Koffing.")),
    MSG_NPC(NPC_KOFFING, _(" That little wimp that was pacing\naround...{WAIT_PRESS}had something good,\nright?")),
    MSG_NPC(NPC_ZUBAT, _(" That wimp had something, that's\nfor sure.{WAIT_PRESS} It looked like some kind\nof treasure.")),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(NPC_KOFFING, _(" Do we go after it?")),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    MSG_NPC(NPC_ZUBAT, _(" We do.")),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(8),
    WAIT(15),
    WALK_RELATIVE(256, 0, 180),
    ALERT_CUE(3),
    END_DELETE,
};

static const struct ScriptCommand s_gs178_g6_s1_lives1_dlg0[] = { /* Koffing */
    DEBUGINFO_O(265),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_KOFFING, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    AWAIT_CUE(8),
    WAIT(10),
    WALK_RELATIVE(307, 88, 24),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WALK_RELATIVE(256, 0, 180),
    END_DELETE,
};

/* ------------------------------------------------------------------------ */
/* groups 7, 8 — m01a0202 / m01a0203: Krabby at sunset                         */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g7_s0_station_sref_script[] = {
    DEBUGINFO_O(285),
    SET_PLACE_MODE(1),
    BGM_STOP,
    FADE_OUT(TRUE, 0),
    SELECT_MAP(MAP_SKY_KRABBY_BUBBLES),
    BGM_FADEIN(160, MUS_FRIEND_AREA_OCEANIC),
    FADE_IN(TRUE, 30),
    SET_PLACE_MODE(4),
    WAIT(150),
    FADE_OUT(TRUE, 30),
    WAIT(30),
    RET,
};

static const ScriptRef s_gs178_g7_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs178_g7_s0_station_sref_script };

static const struct ScriptCommand s_gs178_g8_s0_station_sref_script[] = {
    DEBUGINFO_O(301),
    SET_PLACE_MODE(1),
    FADE_OUT(TRUE, 0),
    SELECT_MAP(MAP_SKY_KRABBY_SUNSET),
    FADE_IN(TRUE, 30),
    SET_PLACE_MODE(4),
    WAIT(150),
    FADE_OUT(TRUE, 30),
    WAIT(30),
    RET,
};

static const ScriptRef s_gs178_g8_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs178_g8_s0_station_sref_script };

/* ------------------------------------------------------------------------ */
/* group 1 — m01a0204..0208: the beach at sunset                               */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g1_s0_station_sref_script[] = {
    DEBUGINFO_O(318),
    SET_PLACE_MODE(1),
    FADE_OUT(TRUE, 0),
    FADE2_OUT(TRUE, 0),
    SELECT_MAP(MAP_SKY_BEACH_DUSK),
    FADE2_IN(TRUE, 0),
    SELECT_ENTITIES(-1, 0),
    BGM_FADEIN(60, MUS_FRIEND_AREA_OCEANIC),
    FADE_IN(TRUE, 30),
    SET_PLACE_MODE(4),
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    NEXT_DUNGEON(30, SCRIPT_DUNGEON_TINY_WOODS),
    RET,
};

static const ScriptRef s_gs178_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs178_g1_s0_station_sref_script };

static const struct ScriptCommand s_gs178_g1_s0_lives0_dlg0[] = { /* Player — drives the scene */
    DEBUGINFO_O(338),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    UPDATE_NAME(UPDATE_NAME_SPEECH_SELF, NPC_PLAYER, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    WAIT_FADE,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, NPC_PLAYER, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, NPC_PARTNER, EMOTION_NORMAL),
    ALERT_CUE(6), /* partner strolls along the shore and looks out to sea */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_INSPIRED),
    MSG_NPC(NPC_PARTNER, _(" Wow! What a beautiful sight!")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" When the weather's good, the\nKrabby come out at sundown to\nblow bubbles...")),
    MSG_NPC(NPC_PARTNER, _(" All those bubbles, reflecting the\nsetting sun off the waves...")),
    MSG_NPC(NPC_PARTNER, _(" It's always beautiful.")),
    TEXTBOX_CLEAR,
    WAIT(40),
    MSG_NPC(NPC_PARTNER, _(" ............")),
    MSG_NPC(NPC_PARTNER, _(" This is where I always come\nwhen I'm feeling down on myself.")),
    MSG_NPC(NPC_PARTNER, _(" But it makes me feel good to be\nhere, like always.")),
    MSG_NPC(NPC_PARTNER, _(" Coming here heals my spirits.")),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(120),
    WAIT(60),
    ALERT_CUE(6), /* partner turns left and notices something */
    AWAIT_CUE(5),
    MSG_NPC(NPC_PARTNER, _(" Hey...{WAIT_PRESS}what's that?{WAIT_PRESS} What's going\non over there?")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner walks closer */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SUPRISED),
    MSG_NPC(NPC_PARTNER, _(" Waah!{WAIT_PRESS} Someone has collapsed on\nthe sand!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner runs over */
    AWAIT_CUE(5),
    MSG_NPC(NPC_PARTNER, _(" What happened?!{WAIT_PRESS} Are you OK?")),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_PAINED),
    MSG_QUIET(NPC_PLAYER, _("(..................)")),
    MSG_QUIET(NPC_PLAYER, _("(...Ugh...)")),
    TEXTBOX_CLEAR,
    CALL_SCRIPT(WAKEUP_FUNC),
    WAIT(30),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(6), /* partner: "!" */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" You're awake!{WAIT_PRESS} Thank goodness!")),
    TEXTBOX_CLEAR,
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    WAIT(45),
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_NORMAL),
    MSG_QUIET(NPC_PLAYER, _("(Where...where am I...?)")),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO_LIVES(4, DIR_TRANS_11, LIVES_KIND_PARTNER),
    MSG_NPC(NPC_PARTNER, _(" You wouldn't move at all. I was\nreally scared for you!")),
    MSG_NPC(NPC_PARTNER, _(" Do you have any idea how you\nended up unconscious out here?")),
    TEXTBOX_CLEAR,
    MSG_QUIET(NPC_PLAYER, _("(I... I was unconscious?{WAIT_PRESS}\nWhat happened...?)")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner introduces themself */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_HAPPY),
    MSG_NPC(NPC_PARTNER, _(" Anyway, I'm {NAME_1}.{WAIT_PRESS}\nHappy to meet you!")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" And who are you?")),
    MSG_NPC(NPC_PARTNER, _(" I don't think I've seen you\naround before.")),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(6), /* partner jumps in surprise */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SUPRISED),
    MSG_NPC(NPC_PARTNER, _(" What?{WAIT_PRESS} You say you're a human?")),
    MSG_NPC(NPC_PARTNER, _(" You look like a totally normal\n{POKEMON_0} to me!")),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(469),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    FANFARE_STOP2(469),
    WAIT(30),
    FANFARE_PLAY2(482),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT_FANFARE2(482),
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_SUPRISED),
    MSG_QUIET(NPC_PLAYER, _("(It's...it's true!)")),
    MSG_QUIET(NPC_PLAYER, _("(I've turned into a {POKEMON_0}!)")),
    TEXTBOX_CLEAR,
    WAIT(15),
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_WORRIED),
    MSG_QUIET(NPC_PLAYER, _("(...But how did this happen?{WAIT_PRESS}\nI don't remember anything...)")),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_WORRIED),
    MSG_NPC(NPC_PARTNER, _(" You're...{WAIT_PRESS}a little odd...")),
    MSG_NPC(NPC_PARTNER, _(" Are you pulling some kind of\ntrick on me?")),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(463),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    WAIT(30),
    MSG_NPC(NPC_PARTNER, _(" You're telling me the truth?")),
    MSG_NPC(NPC_PARTNER, _(" OK, how about your name?{WAIT_PRESS}\nWhat's your name?")),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_NORMAL),
    MSG_QUIET(NPC_PLAYER, _("(My name?{WAIT_PRESS} That's right,\nmy name is...)")),
    TEXTBOX_CLEAR,
    WAIT(20),
    CLEAR_HERO_NAME,
    RENAME_ALLY(1),
    WAIT(20),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PLAYER, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_WORRIED),
    MSG_NPC(NPC_PARTNER, _(" So you're named {NAME_0}?")),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" OK.{WAIT_PRESS} Well, you don't seem to be a\nbad Pokémon, at least.")),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(6), /* partner: sweat */
    AWAIT_CUE(5),
    MSG_NPC(NPC_PARTNER, _(" Sorry that I doubted you.")),
    MSG_NPC(NPC_PARTNER, _(" More and more bad Pokémon\nhave been turning up lately,\nyou see!")),
    MSG_NPC(NPC_PARTNER, _(" A lot of Pokémon have gotten\naggressive lately.{WAIT_PRESS} It's just not\nsafe anymore...")),
    TEXTBOX_CLEAR,
    SELECT_LIVES(-1, 1), /* Zubat & Koffing swoop in from the right */
    WAIT(1),
    ALERT_CUE(7),
    ALERT_CUE(8),
    WAIT(30),
    FANFARE_PLAY2(466),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(5), /* Zubat rams into the partner */
    BGM_SWITCH(MUS_THERES_TROUBLE),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, NPC_PARTNER, EMOTION_SHOUTING),
    MSG_NPC(NPC_PARTNER, _(" Yowch!")),
    MOVE_RELATIVE(1024, -40, 0),
    AWAIT_CUE(5),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, NPC_KOFFING, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, NPC_ZUBAT, EMOTION_NORMAL),
    MSG_NPC(NPC_KOFFING, _(" Well, I do beg your pardon.")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner turns on them, angry */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, NPC_PARTNER, EMOTION_ANGRY),
    MSG_NPC(NPC_PARTNER, _(" Hey! Why'd you do that?!")),
    TEXTBOX_CLEAR,
    MSG_NPC(NPC_ZUBAT, _(" Heh-heh-heh! Can't figure it out?")),
    MSG_NPC(NPC_ZUBAT, _(" We wanted to mess with you!\nCan't face up to us, can you?!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner jumps */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SUPRISED),
    MSG_NPC(NPC_PARTNER, _(" Wh-what?!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(7), /* Zubat eyes the fallen treasure */
    AWAIT_CUE(5),
    MSG_NPC(NPC_ZUBAT, _(" That's yours, isn't it?")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner looks down: "!" */
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    MSG_NPC(NPC_PARTNER, _(" Oh! That's...!")),
    TEXTBOX_CLEAR,
    MSG_NPC(NPC_ZUBAT, _(" Sorry, kiddo. We'll take that!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(7), /* Zubat swoops down and grabs it */
    AWAIT_CUE(5),
    MSG_NPC(NPC_PARTNER, _(" Aaaah!")),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    ROTATE_TO_LIVES(4, DIR_TRANS_11, SKY_LIVES_ZUBAT),
    MSG_NPC(NPC_KOFFING, _(" Whoa-ho-ho!{WAIT_PRESS} Not gonna make a\nmove to get that back?{WAIT_PRESS} What's the\nmatter?{WAIT_PRESS} Too scared?")),
    MSG_NPC(NPC_KOFFING, _(" I didn't expect that you'd be such\na big coward!")),
    TEXTBOX_CLEAR,
    MSG_NPC(NPC_KOFFING, _(" Come on. Let's get out of here.")),
    TEXTBOX_CLEAR,
    MSG_NPC(NPC_ZUBAT, _(" See you around, chicken.{WAIT_PRESS}\nHeh-heh-heh.")),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(60),
    ALERT_CUE(7), /* they make off toward Beach Cave */
    ALERT_CUE(8),
    WAIT(20),
    ALERT_CUE(6), /* partner watches them go */
    WAIT(20),
    ROTATE_TO(32, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(120),
    BGM_FADEIN(150, MUS_FRIEND_AREA_OCEANIC),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, NPC_PARTNER, EMOTION_SAD),
    MSG_NPC(NPC_PARTNER, _(" ...{WAIT_PRESS}Ohhh...")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner turns to the hero */
    AWAIT_CUE(5),
    MSG_NPC(NPC_PARTNER, _(" Wh-what should I do?")),
    TEXTBOX_CLEAR,
    ROTATE_TO_LIVES(4, DIR_TRANS_11, LIVES_KIND_PARTNER),
    WAIT(10),
    MSG_NPC(NPC_PARTNER, _(" That's my personal treasure.\nIt means everything to me.")),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_TEARY_EYE),
    MSG_NPC(NPC_PARTNER, _(" If I lose that...")),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_DETERMINED),
    MSG_NPC(NPC_PARTNER, _(" No! There's no time to waste!")),
    ASK2(FALSE, /*default*/ -1, /* speaker */ NPC_PARTNER, _(" I have to get it back!{WAIT_PRESS} Say, can\nyou please help me?")),
    CHOICE(/* label */ 2, _("Yes")),
    CHOICE(/* label */ 3, _("No")),
  LABEL(3), /* = 0x03 */
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SUPRISED),
    MSG_NPC(NPC_PARTNER, _(" Awww! You won't help me?")),
    MSG_NPC(NPC_PARTNER, _(" That thing is important to me!")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_TEARY_EYE),
    MSG_NPC(NPC_PARTNER, _(" If I can't get it back...")),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_DETERMINED),
    ASK2(FALSE, /*default*/ -1, /* speaker */ NPC_PARTNER, _(" Oh, please?{WAIT_PRESS} Please help me get\nthat treasure of mine back from\nthose guys!")),
    CHOICE(/* label */ 2, _("Yes")),
    CHOICE(/* label */ 3, _("No")),
  LABEL(2), /* = 0x02 */
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner jumps for joy */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_INSPIRED),
    MSG_NPC(NPC_PARTNER, _(" R-really?{WAIT_PRESS}\nYou'll really help?!")),
    MSG_NPC(NPC_PARTNER, _(" Th-thanks! Can we go take\ncare of it right now?")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner runs for the cave */
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(20),
    ALERT_CUE(3), /* before walking: the two may bump into each other */
    WALK_RELATIVE(256, -120, 48),
    HALT,
};

static const struct ScriptCommand s_gs178_g1_s0_lives1_dlg0[] = { /* Partner */
    DEBUGINFO_O(553),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_SPEECH_SELF, NPC_PARTNER, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    CAMERA_INIT_PAN,
    AWAIT_CUE(6),
    WALK_RELATIVE(179, -156, 4),
    WAIT(10),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(20),
    WALK_RELATIVE(128, 0, -24),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(30),
    FANFARE_PLAY2(466),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT_FANFARE2(466),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(256, -116, 0),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(768, -100, 0),
    WAIT(10),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(466),
    CALL_SCRIPT(NOTICE_FUNC),
    MOVE_RELATIVE(256, 16, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PARTNER, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6), /* rammed by Zubat */
    MOVE_RELATIVE(768, -40, 0),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(1, DIR_TRANS_10, DIRECTION_EAST),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    FANFARE_PLAY2(466),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6), /* after the thieves leave */
    ROTATE_TO(16, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO_LIVES(4, DIR_TRANS_11, LIVES_KIND_PLAYER),
    ALERT_CUE(5),
    AWAIT_CUE(6), /* "Yes": jump for joy, then run for the cave */
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WALK_RELATIVE(384, -144, 40),
    WALK_RELATIVE(384, -40, 0),
    HALT,
};

static const struct ScriptCommand s_gs178_g1_s1_lives0_dlg0[] = { /* Zubat */
    DEBUGINFO_O(633),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_ZUBAT, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    AWAIT_CUE(7),
    WALK_RELATIVE(307, -116, 4),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WALK_RELATIVE(256, -28, 24),
    ALERT_CUE(5),
    WAIT(10),
    MOVE_RELATIVE(256, 28, -24),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WAIT(30),
    WALK_RELATIVE(256, 0, 40),
    WALK_RELATIVE(256, -244, 0),
    END_DELETE,
};

static const struct ScriptCommand s_gs178_g1_s1_lives1_dlg0[] = { /* Koffing */
    DEBUGINFO_O(654),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_KOFFING, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    AWAIT_CUE(8),
    WALK_RELATIVE(307, -124, 4),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(8),
    WALK_RELATIVE(256, -252, 16),
    END_DELETE,
};

/* ------------------------------------------------------------------------ */
/* group 2 — m01a0301: defeated in Beach Cave                                 */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g2_s0_station_sref_script[] = {
    DEBUGINFO_O(672),
    SET_PLACE_MODE(1),
    BGM_STOP,
    FADE_OUT(TRUE, 0),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, -1, EMOTION_PAINED),
    MSG_NPC(-1, _(" ...Wh-what?")),
    TEXTBOX_CLEAR,
    WAIT(60),
    SELECT_MAP(MAP_SKY_BEACH_DUSK),
    SELECT_ENTITIES(-1, 0),
    BGM_FADEIN(160, MUS_FRIEND_AREA_OCEANIC),
    FADE_IN(TRUE, 30),
    SET_PLACE_MODE(4),
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    NEXT_DUNGEON(30, SCRIPT_DUNGEON_TINY_WOODS),
    RET,
};

static const ScriptRef s_gs178_g2_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs178_g2_s0_station_sref_script };

static const struct ScriptCommand s_gs178_g2_s0_lives0_dlg0[] = { /* Player */
    DEBUGINFO_O(693),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PLAYER, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    WAIT_FADE,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, NPC_PLAYER, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, NPC_PARTNER, EMOTION_PAINED),
    ALERT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_DOWN_FUNC),
    AWAIT_CUE(5),
    ROTATE_TO_LIVES(4, DIR_TRANS_11, LIVES_KIND_PARTNER),
    WAIT(20),
    MSG_NPC(NPC_PARTNER, _(" Ouch! We didn't do too well...")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" I guess if either of us faints,\nthe other one can't carry on!")),
    MSG_NPC(NPC_PARTNER, _(" ...Could this be what they're\ncalling a mystery dungeon?")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SUPRISED),
    MSG_NPC(NPC_PARTNER, _(" Oh! There's no time to waste!")),
    MSG_NPC(NPC_PARTNER, _(" We need to catch Koffing and\nhis buddy and get my treasure\nback!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_DETERMINED),
    MSG_NPC(NPC_PARTNER, _(" Let's go, {NAME_0}!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(3),
    WALK_RELATIVE(384, -184, 4),
    HALT,
};

static const struct ScriptCommand s_gs178_g2_s0_lives1_dlg0[] = { /* Partner */
    DEBUGINFO_O(735),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PARTNER, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    AWAIT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ROTATE_TO_LIVES(4, DIR_TRANS_11, LIVES_KIND_PLAYER),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(466),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WALK_RELATIVE(384, -144, 4),
    HALT,
};

/* ------------------------------------------------------------------------ */
/* group 3 — m01a0702: back on the beach with the Relic Fragment               */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g3_s0_station_sref_script[] = {
    DEBUGINFO_O(762),
    SET_PLACE_MODE(1),
    BGM_STOP,
    FADE_OUT(TRUE, 0),
    SELECT_MAP(MAP_SKY_BEACH_DUSK),
    SELECT_ENTITIES(-1, 0),
    BGM_FADEIN(160, MUS_FRIEND_AREA_OCEANIC),
    FADE_IN(TRUE, 30),
    SET_PLACE_MODE(4),
    AWAIT_CUE(3),
    BGM_FADEOUT(180),
    FADE_OUT(TRUE, 90),
    FADE2_OUT(TRUE, 0),
    UPDATE_NAME(UPDATE_NAME_ACTOR_TYPE, 0x0, 0x21),
    UPDATE_NAME(UPDATE_NAME_ACTOR_TYPE, 0x1, 0x22),
    WAIT(60),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}And so...")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}{NAME_1} and {NAME_0}...")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}formed an exploration team.")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}This turned out to be...")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}their very first step into...")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}many fantastic realms of adventure\n{CENTER_ALIGN}that awaited their arrival.")),
    TEXTBOX_CLEAR,
    WAIT(1),
    FADE2_IN(TRUE, 0),
    RET,
};

static const ScriptRef s_gs178_g3_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs178_g3_s0_station_sref_script };

static const struct ScriptCommand s_gs178_g3_s0_lives0_dlg0[] = { /* Player */
    DEBUGINFO_O(780),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PLAYER, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    WAIT_FADE,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, NPC_PLAYER, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, NPC_PARTNER, EMOTION_HAPPY),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(NPC_PARTNER, _(" Thank you very much!")),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_WORRIED),
    MSG_QUIET(NPC_PLAYER, _("(............)")),
    MSG_QUIET(NPC_PLAYER, _("(I only helped because I happened\nto be there... Was that the right\nthing to do?)")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_HAPPY),
    MSG_QUIET(NPC_PLAYER, _("(I guess so.{WAIT_PRESS} This Pokémon is\nclearly grateful.)")),
    MSG_QUIET(NPC_PLAYER, _("(It's nice to be appreciated.)")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" Here's what they stole.")),
    MSG_NPC(NPC_PARTNER, _(" This is a Relic Fragment.{WAIT_PRESS}\n...Well, at least, that's what\nI started calling it...")),
    MSG_NPC(NPC_PARTNER, _(" But this Relic Fragment...{WAIT_PRESS}\nIt's my precious treasure.")),
    TEXTBOX_CLEAR,
    MSG_NPC(NPC_PARTNER, _(" You see, I've always liked\nlegends and lore...")),
    MSG_NPC(NPC_PARTNER, _(" I always get so excited when I\nhear tales from the past!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(NPC_PARTNER, _(" Don't you feel the same way?")),
    MSG_NPC(NPC_PARTNER, _(" Hidden troves full of treasure\nand strange relics...")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_INSPIRED),
    MSG_NPC(NPC_PARTNER, _(" ...uncharted territories veiled\nin darkness...")),
    MSG_NPC(NPC_PARTNER, _(" ...and new lands just waiting to\nbe discovered!")),
    MSG_NPC(NPC_PARTNER, _(" Such places must be full of gold\nand treasure!")),
    MSG_NPC(NPC_PARTNER, _(" And history! Wouldn't it be\ndramatic to make historic\ndiscoveries?")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" That's what I always dream of.\nIt's all so exciting to me.")),
    MSG_NPC(NPC_PARTNER, _(" And it just so happened...{WAIT_PRESS}that I\nfound this Relic Fragment.")),
    MSG_NPC(NPC_PARTNER, _(" Sure, it does look like junk, but\ntake a closer look.")),
    MSG_NPC(NPC_PARTNER, _(" Look there.{WAIT_PRESS} See that strange\npattern inscribed on it?")),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_NORMAL),
    MSG_QUIET(NPC_PLAYER, _("(It's true. There is a strange\ninscription.)")),
    MSG_QUIET(NPC_PLAYER, _("(I've never seen a pattern like\nthis.)")),
    TEXTBOX_CLEAR,
    MSG_NPC(NPC_PARTNER, _(" There must be some meaning to\nthis pattern.")),
    MSG_NPC(NPC_PARTNER, _(" This Relic Fragment must be the\nkey to legendary places! To areas\nwhere precious treasure lies!")),
    MSG_NPC(NPC_PARTNER, _(" At least that's the feeling I get.")),
    MSG_NPC(NPC_PARTNER, _(" That's why I want to join an\nexploration team.")),
    MSG_NPC(NPC_PARTNER, _(" This fragment must fit into\nsomething...somewhere! I want to\ndiscover where that is.")),
    MSG_NPC(NPC_PARTNER, _(" I want to solve the mystery of\nmy Relic Fragment!")),
    MSG_NPC(NPC_PARTNER, _(" So earlier, I tried joining an\nexploration team as an\napprentice...")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SAD),
    MSG_NPC(NPC_PARTNER, _(" But...{WAIT_PRESS}I was too cowardly...")),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_WORRIED),
    MSG_NPC(NPC_PARTNER, _(" What about you, {NAME_0}?\nWhat are you going to do now?")),
    MSG_NPC(NPC_PARTNER, _(" You lost your memory. And you\nsomehow transformed into a\nPokémon...")),
    MSG_NPC(NPC_PARTNER, _(" Do you have anyplace where\nyou can stay?")),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_WORRIED),
    MSG_QUIET(NPC_PLAYER, _("(............)")),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SAD),
    MSG_NPC(NPC_PARTNER, _(" If not, can I ask a big favor?")),
    MSG_NPC(NPC_PARTNER, _(" Would you form an exploration\nteam with me?")),
    MSG_NPC(NPC_PARTNER, _(" I think we could make a good\nexploration team together,\n{NAME_0}.")),
    MSG_NPC(NPC_PARTNER, _(" So will you do that with me?{WAIT_PRESS}\nPlease?")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_SUPRISED),
    MSG_QUIET(NPC_PLAYER, _("(Wah! What should I do?{WAIT_PRESS} I'm getting\nrecruited out of the blue!)")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_WORRIED),
    MSG_QUIET(NPC_PLAYER, _("(I don't know what an exploration\nteam is...)")),
  LABEL(1), /* = 0x01 */
    ASK2(FALSE, /*default*/ -1, /* speaker */ NPC_PLAYER, _("(What should I do?{WAIT_PRESS} Should I join this\nPokémon and form an exploration\nteam?)")),
    CHOICE(/* label */ 2, _("Form a team")),
    CHOICE(/* label */ 3, _("Say no")),
  LABEL(3), /* = 0x03 */
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SUPRISED),
    MSG_NPC(NPC_PARTNER, _(" What?! Oh, please!")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SAD),
    MSG_NPC(NPC_PARTNER, _(" But I'm braver when I'm with\nyou, {NAME_0}...")),
    MSG_NPC(NPC_PARTNER, _(" And you were fantastic when\nwe faced Koffing and his sidekick.")),
    MSG_NPC(NPC_PARTNER, _(" When I saw that, I realized\nyou're no ordinary Pokémon,\n{NAME_0}!")),
    MSG_NPC(NPC_PARTNER, _(" I thought that you could be a\nfirst-class explorer, {NAME_0}.")),
    MSG_NPC(NPC_PARTNER, _(" So, please?{WAIT_PRESS} Will you please form\nan exploration team with me?")),
    TEXTBOX_CLEAR,
    JUMP_LABEL(1),
  LABEL(2), /* = 0x02 */
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_WORRIED),
    MSG_QUIET(NPC_PLAYER, _("(It's true, I do have nowhere to go...)")),
    MSG_QUIET(NPC_PLAYER, _("(I don't have any clue what I should\ndo next.)")),
    MSG_QUIET(NPC_PLAYER, _("(I guess it wouldn't hurt to team up\nwith {NAME_1} for now.)")),
    MSG_QUIET(NPC_PLAYER, _("(Maybe I'll eventually discover who or\nwhat I am by hanging out with this\nPokémon.)")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_NORMAL),
    MSG_QUIET(NPC_PLAYER, _("(OK! That's settled!)")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_INSPIRED),
    MSG_NPC(NPC_PARTNER, _(" Oh?{WAIT_PRESS} Really?!")),
    MSG_NPC(NPC_PARTNER, _(" You'll really form an exploration\nteam with me?")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_JOYOUS),
    MSG_NPC(NPC_PARTNER, _(" Yay! Thank you!")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" We're going to be a great\ncombination! Let's make this work!")),
    MSG_NPC(NPC_PARTNER, _(" First, we need to go to\nWigglytuff's place and sign up as\napprentices.")),
    MSG_NPC(NPC_PARTNER, _(" That's where we can get the\ntraining to become a proper\nexploration team.")),
    MSG_NPC(NPC_PARTNER, _(" I think the training will be very\ntough...")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_HAPPY),
    MSG_NPC(NPC_PARTNER, _(" So let's give it our best,\n{NAME_0}!")),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(6),
    WAIT(60),
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs178_g3_s0_lives1_dlg0[] = { /* Partner */
    DEBUGINFO_O(902),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PARTNER, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK), /* scripted: no collision */
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(128, 12, 0),
    MOVE_RELATIVE(128, -12, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6), /* "Oh? Really?!" */
    FANFARE_PLAY2(466),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6), /* "Yay!" */
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6), /* both look out to sea */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    HALT,
};

/* ------------------------------------------------------------------------ */
/* Lives / sectors                                                            */
/* ------------------------------------------------------------------------ */

/* g5 / m01a0103: PLAYER (36,21) facing right */
static const struct GroundLivesData s_gs178_g5_s0_lives[] = {
    /*  0 */ {   0,   2,   0,   0, {  36,  21, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g5_s0_lives0_dlg0,
    } },
};

/* g6 / m01a0104: ATTENDANT1 (30,25) facing up; Zubat (20,22) and Koffing
 * (17,22) facing right appear in sector 1 when the partner leaves. */
static const struct GroundLivesData s_gs178_g6_s0_lives[] = {
    /*  0 */ {  34,   4,   0,   0, {  30,  25, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g6_s0_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs178_g6_s1_lives[] = {
    /*  0 */ { SKY_LIVES_ZUBAT,   2,   0,   0, {  20,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g6_s1_lives0_dlg0,
    } },
    /*  1 */ { SKY_LIVES_KOFFING, 2,   0,   0, {  17,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g6_s1_lives1_dlg0,
    } },
};

/* g1 / m01a0204-0208: PLAYER (36,21) asleep, ATTENDANT1 enters from (86,24);
 * Zubat (58,21) / Koffing (59,24) arrive from the right in sector 1. */
static const struct GroundLivesData s_gs178_g1_s0_lives[] = {
    /*  0 */ {   0,   2,   0,   0, {  36,  21, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  86,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs178_g1_s1_lives[] = {
    /*  0 */ { SKY_LIVES_ZUBAT,   6,   0,   0, {  58,  21, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g1_s1_lives0_dlg0,
    } },
    /*  1 */ { SKY_LIVES_KOFFING, 6,   0,   0, {  59,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g1_s1_lives1_dlg0,
    } },
};

/* g2 / m01a0301: PLAYER (36,25), ATTENDANT1 (30,25), both knocked out */
static const struct GroundLivesData s_gs178_g2_s0_lives[] = {
    /*  0 */ {   0,   2,   0,   0, {  36,  25, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  30,  25, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g2_s0_lives1_dlg0,
    } },
};

/* g3 / m01a0702: PLAYER (53,22) facing left, ATTENDANT1 (47,22) facing right */
static const struct GroundLivesData s_gs178_g3_s0_lives[] = {
    /*  0 */ {   0,   6,   0,   0, {  53,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g3_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  47,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g3_s0_lives1_dlg0,
    } },
};

static const ScriptRef * const (sStationScripts[]) = {
    &s_gs178_g0_s0_station_sref,
    &s_gs178_g1_s0_station_sref,
    &s_gs178_g2_s0_station_sref,
    &s_gs178_g3_s0_station_sref,
    &s_gs178_g4_s0_station_sref,
    &s_gs178_g5_s0_station_sref,
    &s_gs178_g6_s0_station_sref,
    &s_gs178_g7_s0_station_sref,
    &s_gs178_g8_s0_station_sref,
};

static const struct GroundScriptSector s_gs178_g0_sectors[] = {
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs178_g1_sectors[] = {
    { LPARRAY(s_gs178_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[1], },
    { LPARRAY(s_gs178_g1_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs178_g2_sectors[] = {
    { LPARRAY(s_gs178_g2_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptSector s_gs178_g3_sectors[] = {
    { LPARRAY(s_gs178_g3_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptSector s_gs178_g4_sectors[] = {
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs178_g5_sectors[] = {
    { LPARRAY(s_gs178_g5_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[5], },
};

static const struct GroundScriptSector s_gs178_g6_sectors[] = {
    { LPARRAY(s_gs178_g6_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[6], },
    { LPARRAY(s_gs178_g6_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs178_g7_sectors[] = {
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[7], },
};

static const struct GroundScriptSector s_gs178_g8_sectors[] = {
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[8], },
};

static const struct GroundScriptGroup s_gs178_groups[] = {
    { LPARRAY(s_gs178_g0_sectors) },
    { LPARRAY(s_gs178_g1_sectors) },
    { LPARRAY(s_gs178_g2_sectors) },
    { LPARRAY(s_gs178_g3_sectors) },
    { LPARRAY(s_gs178_g4_sectors) },
    { LPARRAY(s_gs178_g5_sectors) },
    { LPARRAY(s_gs178_g6_sectors) },
    { LPARRAY(s_gs178_g7_sectors) },
    { LPARRAY(s_gs178_g8_sectors) },
};
