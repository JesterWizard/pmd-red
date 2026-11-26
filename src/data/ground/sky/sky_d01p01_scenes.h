/*
 * Explorers of Sky demake — opening chapter, ground scenes on the
 * MAP_TINY_WOODS_ENTRY script file (gs178).
 *
 *   group 4  Storm at sea (voices in the dark), then the partner loses their
 *            nerve on the guild's sentry grate while Zubat & Koffing watch.
 *            Background: Pelipper Post Office (stands in for the guild).
 *   group 1  Beach at sunset: the partner finds the hero, the hero wakes up as a
 *            Pokémon, names themself, Zubat & Koffing steal the partner's Relic
 *            Fragment and flee into Beach Cave. -> NEXT_DUNGEON (Beach Cave).
 *   group 2  Defeated in Beach Cave: wake up on the beach and try again.
 *   group 3  After the boss: the beach again, the Relic Fragment and a team.
 *
 * Dialogue is an original adaptation of the Explorers of Sky opening, written
 * to fit GBA text boxes; it is not a transcript of the DS script.
 */

#include "sky_story.h"

#define NPC_PLAYER 0
#define NPC_PARTNER 1
#define NPC_ZUBAT 2
#define NPC_KOFFING 3

/* Cue protocol (same as the vanilla scenes): the player's script drives the
 * scene; 6 = partner, 7 = Zubat, 8 = Koffing, 5 = "step done", 3 = station. */

/* ------------------------------------------------------------------------ */
/* group 0 — plain map enter                                                 */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g0_s0_station_sref_script[] = {
    DEBUGINFO_O(30),
    SELECT_MAP(MAP_TINY_WOODS_ENTRY),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs178_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs178_g0_s0_station_sref_script };

/* ------------------------------------------------------------------------ */
/* group 4 — storm at sea + the guild's sentry grate                         */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g4_s0_station_sref_script[] = {
    DEBUGINFO_O(45),
    SET_PLACE_MODE(1),
    BGM_STOP,
    FADE_OUT(TRUE, 0),
    FADE2_OUT(TRUE, 0),
    SELECT_MAP(MAP_PELIPPER_POST_OFFICE),
    WAIT(90),
    CAMERA_SHAKE(CAMERA_SHAKE_CUSTOM, 2, 3),
    MSG_NPC(-1, _(" Waaaaah!")),
    MSG_NPC(-1, _(" Hang on! Just a little\nlonger!")),
    MSG_NPC(-1, _(" I...I can't...!\nMy grip is slipping!")),
    MSG_NPC(-1, _(" Don't let go!{WAIT_PRESS}\nWhatever happens, don't let go!")),
    MSG_NPC(-1, _(" Aaaaaaaah!")),
    TEXTBOX_CLEAR,
    CAMERA_SHAKE(CAMERA_SHAKE_OFF, 0, 0),
    WAIT(90),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}...The storm passed in the night.")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}The next day, near a certain guild...")),
    TEXTBOX_CLEAR,
    WAIT(1),
    FADE2_IN(TRUE, 0),
    SELECT_ENTITIES(-1, 0),
    BGM_FADEIN(60, MUS_POKEMON_SQUARE),
    FADE_IN(TRUE, 60),
    SET_PLACE_MODE(4),
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    FADE_OUT(TRUE, 60),
    WAIT(60),
    RET,
};

static const ScriptRef s_gs178_g4_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs178_g4_s0_station_sref_script };

/* The partner drives this scene (there is no hero on screen yet). */
static const struct ScriptCommand s_gs178_g4_s0_lives0_dlg0[] = {
    DEBUGINFO_O(80),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PARTNER, 0x0),
    CAMERA_INIT_PAN,
    WAIT_FADE,
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, NPC_PARTNER, EMOTION_WORRIED),
    WAIT(30),
    WALK_RELATIVE(128, 0, -24),
    WAIT(30),
    MSG_NPC(NPC_PARTNER, _(" ...Here it is.\nThe guild...")),
    MSG_NPC(NPC_PARTNER, _(" ......{WAIT_PRESS}\nI made up my mind. Today's the\nday I sign up as an apprentice!")),
    TEXTBOX_CLEAR,
    WAIT(20),
    WALK_RELATIVE(96, 0, -16),
    WAIT(10),
    ALERT_CUE(7), /* the sentry grate */
    AWAIT_CUE(5),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT_FANFARE2(463),
    MOVE_RELATIVE(768, 0, 24),
    WAIT(20),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SUPRISED),
    MSG_NPC(NPC_PARTNER, _(" Waaah!")),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SAD),
    MSG_NPC(NPC_PARTNER, _(" Wh-what a shock...{WAIT_PRESS}\nThat startled me so much...")),
    MSG_NPC(NPC_PARTNER, _(" ......{WAIT_PRESS}\nIt's no good. I just can't work up\nthe courage...")),
    MSG_NPC(NPC_PARTNER, _(" I brought my Personal Treasure\nalong, so it would give me some\nnerve...")),
    MSG_NPC(NPC_PARTNER, _(" ...Sigh...\nI'm such a coward...")),
    TEXTBOX_CLEAR,
    WAIT(20),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT2, DIRECTION_SOUTH),
    WAIT(20),
    CAMERA_END_PAN,
    WALK_RELATIVE(128, 0, 112),
    ALERT_CUE(8), /* Zubat & Koffing have been watching */
    END_DELETE,
};

/* The sentry grate: a voice from below, then a second one answering. */
static const struct ScriptCommand s_gs178_g4_s0_lives1_dlg0[] = {
    DEBUGINFO_O(122),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    MSG_NPC(-1, _(" Pokémon detected!\nPokémon detected!")),
    MSG_NPC(-1, _(" Whose footprint?\nWhose footprint?")),
    MSG_NPC(-1, _(" The footprint is {POKEMON_1}'s!\nThe footprint is {POKEMON_1}'s!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs178_g4_s0_lives2_dlg0[] = { /* Zubat */
    DEBUGINFO_O(135),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_ZUBAT, 0x0),
    AWAIT_CUE(8),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, NPC_ZUBAT, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, NPC_KOFFING, EMOTION_NORMAL),
    WAIT(30),
    MSG_NPC(NPC_KOFFING, _(" Hey, Zubat.\nDid you see that?")),
    MSG_NPC(NPC_ZUBAT, _(" Sure did, Koffing.\nThat little wimp was hugging\nsome kind of treasure.")),
    MSG_NPC(NPC_KOFFING, _(" Looked valuable, huh?\nChaaa!")),
    MSG_NPC(NPC_ZUBAT, _(" Heh heh heh.\nWhat do you say we go and\nrelieve that kid of it?")),
    MSG_NPC(NPC_KOFFING, _(" Chaaa! Let's tail that\nscaredy-cat!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    WALK_RELATIVE(256, 0, 96),
    ALERT_CUE(3),
    END_DELETE,
};

static const struct ScriptCommand s_gs178_g4_s0_lives3_dlg0[] = { /* Koffing */
    DEBUGINFO_O(155),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_KOFFING, 0x0),
    AWAIT_CUE(9),
    WALK_RELATIVE(256, 0, 96),
    END_DELETE,
};

/* ------------------------------------------------------------------------ */
/* group 1 — the beach: wake-up, name, the theft                              */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g1_s0_station_sref_script[] = {
    DEBUGINFO_O(170),
    SET_PLACE_MODE(1),
    BGM_STOP,
    FADE_OUT(TRUE, 0),
    FADE2_OUT(TRUE, 0),
    SELECT_MAP(MAP_FRIEND_AREA_SHALLOW_BEACH),
    WAIT(60),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}...Ugh...")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}...Where...am I...?")),
    MSG_ON_BG_AUTO(30, _("{CENTER_ALIGN}I hear waves...")),
    TEXTBOX_CLEAR,
    WAIT(1),
    FADE2_IN(TRUE, 0),
    SELECT_ENTITIES(-1, 0),
    BGM_FADEIN(60, MUS_FRIEND_AREA_OCEANIC),
    FADE_IN(TRUE, 60),
    SET_PLACE_MODE(4),
    AWAIT_CUE(3),
    BGM_FADEOUT(30),
    NEXT_DUNGEON(30, SCRIPT_DUNGEON_TINY_WOODS),
    RET,
};

static const ScriptRef s_gs178_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs178_g1_s0_station_sref_script };

static const struct ScriptCommand s_gs178_g1_s0_lives0_dlg0[] = { /* Player — drives the scene */
    DEBUGINFO_O(195),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    UPDATE_NAME(UPDATE_NAME_SPEECH_SELF, NPC_PLAYER, 0x0),
    WAIT_FADE,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, NPC_PLAYER, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, NPC_PARTNER, EMOTION_NORMAL),
    WAIT(30),
    ALERT_CUE(6), /* partner strolls along the shore */
    AWAIT_CUE(5),
    MSG_NPC(NPC_PARTNER, _(" Wow... The Krabby are blowing\nbubbles again tonight.")),
    MSG_NPC(NPC_PARTNER, _(" When the sun sets over the sea,\nthe bubbles sparkle in the light.\nIt's so pretty...")),
    MSG_NPC(NPC_PARTNER, _(" Whenever I feel down, I come\nhere to watch. It always cheers\nme up a little.")),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6), /* partner notices the hero */
    AWAIT_CUE(5),
    MSG_NPC(NPC_PARTNER, _(" Huh? What's that over there?")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner runs over */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SUPRISED),
    MSG_NPC(NPC_PARTNER, _(" Oh no! Someone's collapsed\non the sand!")),
    MSG_NPC(NPC_PARTNER, _(" Hey! Are you all right?!{WAIT_PRESS}\nPlease, wake up!")),
    TEXTBOX_CLEAR,
    WAIT(40),
    CALL_SCRIPT(WAKEUP_FUNC),
    WAIT(30),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_HAPPY),
    MSG_NPC(NPC_PARTNER, _(" Oh, thank goodness!\nYou came to!")),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_QUIET(NPC_PLAYER, _("(Wh-where... Where am I...?)")),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(468),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    WAIT(20),
    FANFARE_PLAY2(468),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WAIT(40),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" You were passed out right here\non the beach. You had me really\nworried!")),
    ALERT_CUE(6), /* partner introduces themself */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_HAPPY),
    MSG_NPC(NPC_PARTNER, _(" I'm {NAME_1}.\nNice to meet you!")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" ...So, who are you?{WAIT_PRESS}\nI don't think I've ever seen you\naround here.")),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_QUIET(NPC_PLAYER, _("(Who am I...?{WAIT_PRESS} I'm...\nI'm a human, of course...)")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner: "?" */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_WORRIED),
    MSG_NPC(NPC_PARTNER, _(" What? A human?{WAIT_PRESS}\nBut you look like a perfectly\nordinary {POKEMON_0} to me!")),
    TEXTBOX_CLEAR,
    WAIT(30),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    FANFARE_STOP2(469),
    WAIT(40),
    FANFARE_PLAY2(482),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT_FANFARE2(482),
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_SUPRISED),
    MSG_QUIET(NPC_PLAYER, _("(Wh-what?! It's true!\nI've turned into a {POKEMON_0}!)")),
    TEXTBOX_CLEAR,
    WAIT(20),
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_WORRIED),
    MSG_QUIET(NPC_PLAYER, _("(But how...? I can't remember\nanything at all...)")),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_WORRIED),
    MSG_NPC(NPC_PARTNER, _(" You're acting kind of weird...{WAIT_PRESS}\nYou're not trying to trick me,\nare you?")),
    MSG_NPC(NPC_PARTNER, _(" There are a lot of shady\nPokémon hanging around lately...")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" Well, anyway...\nWhat's your name?")),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_KEEP, NPC_PLAYER, EMOTION_NORMAL),
    MSG_QUIET(NPC_PLAYER, _("(My name...?{WAIT_PRESS}\nThat's right... My name is...)")),
    TEXTBOX_CLEAR,
    WAIT(20),
    CLEAR_HERO_NAME,
    RENAME_ALLY(1),
    WAIT(20),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PLAYER, 0x0),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" {NAME_0}, huh?{WAIT_PRESS}\n...You know, you don't seem like a\nbad Pokémon after all.")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_HAPPY),
    MSG_NPC(NPC_PARTNER, _(" Sorry for doubting you.\nThe truth is, I...")),
    TEXTBOX_CLEAR,
    BGM_SWITCH(MUS_THERES_TROUBLE),
    ALERT_CUE(7), /* Zubat & Koffing barge in from behind */
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ALERT_CUE(6), /* partner is knocked forward */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_PAINED),
    MSG_NPC(NPC_PARTNER, _(" Oof!")),
    TEXTBOX_CLEAR,
    WAIT(20),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, NPC_KOFFING, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, NPC_ZUBAT, EMOTION_NORMAL),
    MSG_NPC(NPC_KOFFING, _(" Hey! Watch where you're\ngoing, pipsqueak!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner turns to face them */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_WORRIED),
    MSG_NPC(NPC_PARTNER, _(" Wh-what?! You're the ones who\nbumped into me!")),
    MSG_NPC(NPC_ZUBAT, _(" Heh heh heh.\nLooks like you dropped something,\nkid.")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SUPRISED),
    MSG_NPC(NPC_PARTNER, _(" Ah! My treasure...!")),
    MSG_NPC(NPC_KOFFING, _(" Don't mind if we do!\nFinders keepers! Chaaa!")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_TEARY_EYE),
    MSG_NPC(NPC_PARTNER, _(" N-no! That's mine!\nPlease, give it back!")),
    MSG_NPC(NPC_ZUBAT, _(" Oh? If you want it so badly,\ncome and take it from us.")),
    MSG_NPC(NPC_KOFFING, _(" Look at that face! What a\nscaredy-cat! Chaaa!")),
    MSG_NPC(NPC_ZUBAT, _(" Let's go, Koffing!\nHeh heh heh!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(7), /* they flee down the shore */
    ALERT_CUE(8),
    WAIT(100),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SAD),
    MSG_NPC(NPC_PARTNER, _(" Wh-what do I do...?{WAIT_PRESS}\nThat was my Personal Treasure...")),
    MSG_NPC(NPC_PARTNER, _(" It means more to me than\nanything... I can't lose it!")),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(6), /* partner turns back to the hero */
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_DETERMINED),
    MSG_NPC(NPC_PARTNER, _(" They ran into Beach Cave,\nfarther down the shore.")),
    MSG_NPC(NPC_PARTNER, _(" {NAME_0}... I know we just met,\nbut please...{WAIT_PRESS}\nWill you help me get it back?")),
    TEXTBOX_CLEAR,
    WAIT(20),
    MSG_QUIET(NPC_PLAYER, _("(I can't just leave {NAME_1}\nlike this...)")),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_JOYOUS),
    MSG_NPC(NPC_PARTNER, _(" Really? You'll help me?!\nThank you, {NAME_0}!")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_DETERMINED),
    MSG_NPC(NPC_PARTNER, _(" Come on!\nBeach Cave is this way!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6), /* partner sets off */
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WALK_RELATIVE(384, 0, 16),
    ALERT_CUE(3),
    WALK_RELATIVE(384, 160, 0),
    HALT,
};

static const struct ScriptCommand s_gs178_g1_s0_lives1_dlg0[] = { /* Partner */
    DEBUGINFO_O(330),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_SPEECH_SELF, NPC_PARTNER, 0x0),
    AWAIT_CUE(6),
    WALK_RELATIVE(128, 64, 0),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    WAIT(20),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    FANFARE_PLAY2(466),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT_FANFARE2(466),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(384, 32, 0),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT_FANFARE2(463),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PARTNER, 0x0),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    WAIT_FANFARE2(469),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    MOVE_RELATIVE(512, 6, 0),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT_FANFARE2(463),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT2, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT2, DIRECTION_EAST),
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(384, 0, -16),
    WALK_RELATIVE(384, 200, 0),
    HALT,
};

static const struct ScriptCommand s_gs178_g1_s0_lives2_dlg0[] = { /* Zubat */
    DEBUGINFO_O(372),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_ZUBAT, 0x0),
    AWAIT_CUE(7),
    WALK_RELATIVE(512, 136, 0),
    AWAIT_CUE(7),
    WALK_RELATIVE(512, 0, -24),
    WALK_RELATIVE(512, 240, 0),
    END_DELETE,
};

static const struct ScriptCommand s_gs178_g1_s0_lives3_dlg0[] = { /* Koffing */
    DEBUGINFO_O(383),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_KOFFING, 0x0),
    AWAIT_CUE(8),
    WALK_RELATIVE(512, 144, 0),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WALK_RELATIVE(512, 0, 24),
    WALK_RELATIVE(512, 240, 0),
    END_DELETE,
};

/* ------------------------------------------------------------------------ */
/* group 2 — defeated in Beach Cave: back on the beach, try again             */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g2_s0_station_sref_script[] = {
    DEBUGINFO_O(400),
    SET_PLACE_MODE(1),
    BGM_STOP,
    WAIT(60),
    SELECT_MAP(MAP_FRIEND_AREA_SHALLOW_BEACH),
    SELECT_ENTITIES(-1, 0),
    FADE_IN(TRUE, 60),
    SET_PLACE_MODE(4),
    AWAIT_CUE(3),
    NEXT_DUNGEON(30, SCRIPT_DUNGEON_TINY_WOODS),
    RET,
};

static const ScriptRef s_gs178_g2_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs178_g2_s0_station_sref_script };

static const struct ScriptCommand s_gs178_g2_s0_lives0_dlg0[] = { /* Player */
    DEBUGINFO_O(416),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PLAYER, 0x0),
    WAIT_FADE,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, NPC_PLAYER, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, NPC_PARTNER, EMOTION_PAINED),
    ALERT_CUE(6),
    WAIT(1),
    CALL_SCRIPT(WAKEUP_FUNC),
    AWAIT_CUE(5),
    MSG_NPC(NPC_PARTNER, _(" Ow ow ow...")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SAD),
    MSG_NPC(NPC_PARTNER, _(" We got beaten in the cave and\nended up back on the beach...")),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_DETERMINED),
    MSG_NPC(NPC_PARTNER, _(" ...But we can't give up!\nMy treasure is still in there!")),
    MSG_NPC(NPC_PARTNER, _(" Let's try again, {NAME_0}!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(3),
    WALK_RELATIVE(384, 160, 0),
    HALT,
};

static const struct ScriptCommand s_gs178_g2_s0_lives1_dlg0[] = { /* Partner */
    DEBUGINFO_O(447),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PARTNER, 0x0),
    AWAIT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(384, 0, -16),
    WALK_RELATIVE(384, 200, 0),
    HALT,
};

/* ------------------------------------------------------------------------ */
/* group 3 — after the boss: the beach, the Relic Fragment, a team            */
/* ------------------------------------------------------------------------ */

static const struct ScriptCommand s_gs178_g3_s0_station_sref_script[] = {
    DEBUGINFO_O(465),
    SET_PLACE_MODE(1),
    BGM_STOP,
    FADE_OUT(TRUE, 0),
    SELECT_MAP(MAP_FRIEND_AREA_SHALLOW_BEACH),
    SELECT_ENTITIES(-1, 0),
    BGM_FADEIN(60, MUS_HEARTWARMING),
    FADE_IN(TRUE, 60),
    SET_PLACE_MODE(4),
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    FADE_OUT(TRUE, 60),
    WAIT(60),
    RET,
};

static const ScriptRef s_gs178_g3_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs178_g3_s0_station_sref_script };

static const struct ScriptCommand s_gs178_g3_s0_lives0_dlg0[] = { /* Player */
    DEBUGINFO_O(482),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PLAYER, 0x0),
    WAIT_FADE,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, NPC_PLAYER, EMOTION_NORMAL),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, NPC_PARTNER, EMOTION_JOYOUS),
    WAIT(40),
    MSG_NPC(NPC_PARTNER, _(" We did it!{WAIT_PRESS}\nWe got my treasure back!")),
    MSG_NPC(NPC_PARTNER, _(" Thank you so much, {NAME_0}!\nI couldn't have done it alone.")),
    TEXTBOX_CLEAR,
    WAIT(20),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" This is my Personal Treasure.\nI call it my Relic Fragment.")),
    MSG_NPC(NPC_PARTNER, _(" See the strange pattern carved\ninto it? I've never seen anything\nlike it anywhere.")),
    MSG_NPC(NPC_PARTNER, _(" I just know it's a piece of\nsome great, legendary treasure.")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_INSPIRED),
    MSG_NPC(NPC_PARTNER, _(" Someday, I want to become an\nexplorer and uncover its secret!")),
    TEXTBOX_CLEAR,
    WAIT(20),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_SAD),
    MSG_NPC(NPC_PARTNER, _(" ...That's why I went to the\nguild today. But I chickened out\nat the front door...")),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_NORMAL),
    MSG_NPC(NPC_PARTNER, _(" ...But you were so brave in\nthat cave, {NAME_0}.{WAIT_PRESS}\nWhen I'm with you, I feel braver too.")),
    MSG_NPC(NPC_PARTNER, _(" Say... You don't have anywhere\nto go, do you?")),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_DETERMINED),
    MSG_NPC(NPC_PARTNER, _(" Then how about it?{WAIT_PRESS}\nWill you form a team with me?")),
    MSG_NPC(NPC_PARTNER, _(" Maybe you'll even find out how\nyou turned into a Pokémon!")),
    TEXTBOX_CLEAR,
    WAIT(20),
    MSG_QUIET(NPC_PLAYER, _("(A team with {NAME_1}...\n...I think I'd like that.)")),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_JOYOUS),
    MSG_NPC(NPC_PARTNER, _(" Yay! It's a deal!\nCome on, follow me!")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    WAIT(30),
    ALERT_CUE(3),
    WALK_RELATIVE(256, 0, -64),
    HALT,
};

static const struct ScriptCommand s_gs178_g3_s0_lives1_dlg0[] = { /* Partner */
    DEBUGINFO_O(530),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, NPC_PARTNER, 0x0),
    WAIT_FADE,
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    WAIT(40),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    WALK_RELATIVE(256, 0, -64),
    HALT,
};

/* ------------------------------------------------------------------------ */
/* Lives / effects / sectors                                                  */
/* ------------------------------------------------------------------------ */

/* Positions are in 8px tiles on the Shallow Beach map (the hero sleeps at the
 * spot the friend-area leader normally stands). */
static const struct GroundLivesData s_gs178_g1_s0_lives[] = {
    /*  0 */ {   0,   0,   0,   0, {  33,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  21,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g1_s0_lives1_dlg0,
    } },
    /*  2 */ { SKY_LIVES_ZUBAT,   2,   0,   0, {   8,  19, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g1_s0_lives2_dlg0,
    } },
    /*  3 */ { SKY_LIVES_KOFFING, 2,   0,   0, {   8,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g1_s0_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs178_g2_s0_lives[] = {
    /*  0 */ {   0,   0,   0,   0, {  33,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  37,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs178_g3_s0_lives[] = {
    /*  0 */ {   0,   2,   0,   0, {  31,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g3_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  35,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs178_g3_s0_lives1_dlg0,
    } },
};

/* Pelipper Post Office map: the partner walks up to the door; Zubat & Koffing
 * lurk off to the side. Lives 0 is the partner kind so the hero is absent. */
static const struct GroundLivesData s_gs178_g4_s0_lives[] = {
    /*  0 */ {  34,   4,   0,   0, {  49,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs178_g4_s0_lives0_dlg0,
    } },
    /*  1 */ { SKY_LIVES_DIGLETT, 0,  0,   0, {  49,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs178_g4_s0_lives1_dlg0,
    } },
    /*  2 */ { SKY_LIVES_ZUBAT,   2,   0,   0, {  41,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs178_g4_s0_lives2_dlg0,
    } },
    /*  3 */ { SKY_LIVES_KOFFING, 2,   0,   0, {  39,  34, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs178_g4_s0_lives3_dlg0,
    } },
};

static const ScriptRef * const (sStationScripts[]) = {
    &s_gs178_g0_s0_station_sref,
    &s_gs178_g1_s0_station_sref,
    &s_gs178_g2_s0_station_sref,
    &s_gs178_g3_s0_station_sref,
    &s_gs178_g4_s0_station_sref,
};

static const struct GroundScriptSector s_gs178_g0_sectors[] = {
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs178_g1_sectors[] = {
    { LPARRAY(s_gs178_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs178_g2_sectors[] = {
    { LPARRAY(s_gs178_g2_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptSector s_gs178_g3_sectors[] = {
    { LPARRAY(s_gs178_g3_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptSector s_gs178_g4_sectors[] = {
    { LPARRAY(s_gs178_g4_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptGroup s_gs178_groups[] = {
    { LPARRAY(s_gs178_g0_sectors) },
    { LPARRAY(s_gs178_g1_sectors) },
    { LPARRAY(s_gs178_g2_sectors) },
    { LPARRAY(s_gs178_g3_sectors) },
    { LPARRAY(s_gs178_g4_sectors) },
};
