
static const struct ScriptCommand s_gs193_g0_s0_station_sref_script[] = { /* 0x8242bb8 */
    DEBUGINFO_O(13),
    JUMPIF_SCENARIOCHECK(QUEST_UNK5, /* to label */ 0),
    EXECUTE_STATION(MAP_TEAM_BASE_INSIDE, 0, 0),
  LABEL(0), /* = 0x00 */
    SELECT_MAP(MAP_LAPIS_CAVE_ENTRY),
    CJUMP_SCENARIO_0(SCENARIO_MAIN),
    COND(JUDGE_EQ, 11, /* to label */ 1),
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    CALL_STATION(  3,  0),
    JUMP_LABEL(2),
  LABEL(2), /* = 0x02 */
    JUMPIF_EQUAL(START_MODE, STARTMODE_CONTINUE_GAME, /* to label */ 3),
    JUMPIF_EQUAL(START_MODE, STARTMODE_3, /* to label */ 4),
    JUMPIF_EQUAL(START_MODE, STARTMODE_GROUND, /* to label */ 5),
    JUMPIF_EQUAL(START_MODE, STARTMODE_DUNGEON_WON, /* to label */ 6),
    JUMPIF_EQUAL(START_MODE, STARTMODE_10, /* to label */ 6),
    JUMPIF_EQUAL(START_MODE, STARTMODE_DUNGEON_LOST, /* to label */ 6),
    JUMPIF_EQUAL(START_MODE, STARTMODE_11, /* to label */ 6),
    JUMP_LABEL(3),
  LABEL(5), /* = 0x05 */
    CJUMP_VAR(GROUND_GETOUT),
    COND_EQUAL(1, /* to label */ 7),
    JUMP_LABEL(7),
  LABEL(3), /* = 0x03 */
    SELECT_LIVES(0, 3),
    JUMP_LABEL(8),
  LABEL(4), /* = 0x04 */
    SELECT_LIVES(0, 4),
    JUMP_LABEL(8),
  LABEL(7), /* = 0x07 */
    SELECT_LIVES(0, 1),
    JUMP_LABEL(8),
  LABEL(6), /* = 0x06 */
    SELECT_LIVES(0, 2),
    JUMP_LABEL(8),
  LABEL(8), /* = 0x08 */
    BGM_SWITCH(MUS_LAPIS_CAVE),
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs193_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs193_g0_s0_station_sref_script }; /* 0x8242e54 */

static const struct ScriptCommand s_gs193_g0_s0_obj0_dlg2[] = { /* 0x8242e60 */
    DEBUGINFO_O(57),
    JUMP_SCRIPT(SAVE_AND_WAREHOUSE_POINT),
};

static const struct ScriptCommand s_gs193_g0_s1_lives0_dlg0[] = { /* 0x8242e80 */
    DEBUGINFO_O(62),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s1_lives1_dlg0[] = { /* 0x8242ec0 */
    DEBUGINFO_O(69),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s2_lives0_dlg0[] = { /* 0x8242f00 */
    DEBUGINFO_O(76),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s2_lives1_dlg0[] = { /* 0x8242f40 */
    DEBUGINFO_O(83),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s3_lives0_dlg0[] = { /* 0x8242f80 */
    DEBUGINFO_O(90),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s3_lives1_dlg0[] = { /* 0x8242fc0 */
    DEBUGINFO_O(97),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s4_lives0_dlg0[] = { /* 0x8243000 */
    DEBUGINFO_O(104),
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s4_lives1_dlg0[] = { /* 0x8243030 */
    DEBUGINFO_O(110),
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s5_obj0_dlg2[] = { /* 0x8243060 */
    DEBUGINFO_O(116),
    JUMP_SCRIPT(WAREHOUSE_POINT),
};

static const struct ScriptCommand s_gs193_g0_s5_obj1_dlg2[] = { /* 0x8243080 */
    DEBUGINFO_O(121),
    JUMP_SCRIPT(SAVE_POINT),
};

static const struct ScriptCommand s_gs193_g1_s0_station_sref_script[] = { /* 0x82430a0 */
    DEBUGINFO_O(126),
    SELECT_MAP(MAP_LAPIS_CAVE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_THE_ESCAPE),
    FADE_IN(1, 0x1E),
    AWAIT_CUE(3),
    FADE_OUT(1, 0x1E),
    NEXT_DUNGEON(0, SCRIPT_DUNGEON_LAPIS_CAVE),
    RET,
};

static const ScriptRef s_gs193_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs193_g1_s0_station_sref_script }; /* 0x8243130 */

static const struct ScriptCommand s_gs193_g1_s0_lives0_dlg0[] = { /* 0x824313c */
    DEBUGINFO_O(140),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    BGM_FADEOUT(30),
    WAIT(120),
    ALERT_CUE(6),
    WALK_GRID(256, 0),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Whew!\nWe sure came a long way out.")),
    VARIANT_DEFAULT(_(" Whew.\nWe've sure traveled a long way.")),
    BGM_SWITCH(MUS_LAPIS_CAVE),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" But I was thinking...\nWhile we were on the way...")),
    VARIANT_DEFAULT(_(" But while we were moving,\nI couldn't help thinking...")),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" So many places are hit\nby the natural disasters...")),
    VARIANT(/* == */  1, _(" I bet there are many\nPokémon that need help.")),
    VARIANT(/* == */  1, _(" I'd really like to get back to\ndoing our rescue work...")),
    VARIANT_DEFAULT(_(" All sorts of places have\nbeen affected by the natural disasters.")),
    VARIANT_DEFAULT(_(" I'm sure many Pokémon are\nsuffering because of the calamities.")),
    VARIANT_DEFAULT(_(" I wish we could get back to\ndoing our rescue work...")),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000002),
    MSG_NPC(1, _(" Sorry, I shouldn't complain.\nWe have to get away now, period.")),
    TEXTBOX_CLEAR,
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, _(" Huh? I hear voices...")),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WAIT(20),
    MSG_NPC(-1, _(" I think they went this way.")),
    MSG_NPC(-1, _(" They can't get away.\nNot from all of us.")),
    MSG_NPC(-1, _(" We have to get rid of {NAME_0}\nquickly...")),
    TEXTBOX_CLEAR,
    WAIT(30),
    FANFARE_PLAY2(455),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Whoa!\nThey're catching up to us already?")),
    VARIANT(/* == */  1, _(" {NAME_0}, we have to\nroll.")),
    VARIANT_DEFAULT(_(" Aww, no!\nAre they catching up to us?")),
    VARIANT_DEFAULT(_(" {NAME_0}, we'd better\ngo.")),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    FADE_OUT(0, 0x50),
    CAMERA_PAN(256, 2),
    ALERT_CUE(3),
    HALT,
};




static const struct ScriptCommand s_gs193_g1_s0_lives1_dlg0[] = { /* 0x824389c */
    DEBUGINFO_O(208),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x1, 0x0),
    AWAIT_CUE(6),
    WALK_GRID(256, 1),
    AWAIT_CUE(6),
    ROTATE_TO_LIVES(4, DIR_TRANS_11, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(2, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    ROTATE_TO(2, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    ROTATE_TO(2, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    ROTATE_TO(2, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CAMERA_PAN(256, 2),
    HALT,
};

static const struct ScriptCommand s_gs193_g2_s0_station_sref_script[] = { /* 0x8243a1c */
    DEBUGINFO_O(235),
    SELECT_MAP(MAP_LAPIS_CAVE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_LAPIS_CAVE),
    FADE_IN(1, 0x1E),
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    CALL_STATION(  3,  0),
    RET,
};

static const ScriptRef s_gs193_g2_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs193_g2_s0_station_sref_script }; /* 0x8243aac */

static const struct ScriptCommand s_gs193_g2_s0_lives0_dlg0[] = { /* 0x8243ab8 */
    DEBUGINFO_O(249),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    WAIT_FADE,
    ALERT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_RIGHT_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Urrggh...{WAIT_PRESS}\nWe couldn't get through...")),
    VARIANT_DEFAULT(_(" Ouch...{WAIT_PRESS}\nWe couldn't break through...")),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" I think we got cocky and\ncareless, {NAME_0}.")),
    VARIANT(/* == */  1, _(" Wonder what happened to\nthe Pokémon chasing us?\nAre they in the dungeon?")),
    VARIANT(/* == */  1, _(" Well, running into them\nwould be bad trouble.\nLet's get through this...and fast.")),
    VARIANT_DEFAULT(_(" I guess we got a little\ncareless, {NAME_0}.")),
    VARIANT_DEFAULT(_(" I wonder what became of\nthe Pokémon chasing us?\nAre they in the dungeon?")),
    VARIANT_DEFAULT(_(" We sure don't want to run\ninto them.\nLet's get through this quickly.")),
    TEXTBOX_CLEAR,
    CAMERA_FOLLOW(0x100),
    ALERT_CUE(3),
    RET,
};


static const struct ScriptCommand s_gs193_g2_s0_lives1_dlg0[] = { /* 0x8243e64 */
    DEBUGINFO_O(281),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x1, 0x0),
    AWAIT_CUE(6),
    WAIT(15),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO_LIVES(4, DIR_TRANS_SPINRIGHT1, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs193_g3_s0_station_sref_script[] = { /* 0x8243f34 */
    DEBUGINFO_O(297),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs193_g3_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs193_g3_s0_station_sref_script }; /* 0x8243f64 */

static const struct ScriptCommand s_gs193_g3_s0_lives0_dlg1[] = { /* 0x8243f70 */
    DEBUGINFO_O(305),
    CLEAR_OBJ_FLAGS(0x200),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_CANCEL_SCRIPT2),
    JUMP_SCRIPT(LIVES_MOVE_NORMAL),
};

static const struct ScriptCommand s_gs193_g3_s0_lives0_dlg2[] = { /* 0x8243fb0 */
    DEBUGINFO_O(312),
    EXECUTE_STATION(-1, 3, 1),
    HALT,
};

static const struct ScriptCommand s_gs193_g3_s0_evt0_sref_script[] = { /* 0x8243fe0 */
    DEBUGINFO_O(318),
    EXECUTE_STATION(-1, 3, 1),
    HALT,
};

static const ScriptRef s_gs193_g3_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs193_g3_s0_evt0_sref_script }; /* 0x8244010 */

static const struct ScriptCommand s_gs193_g3_s1_station_sref_script[] = { /* 0x824401c */
    DEBUGINFO_O(326),
    SELECT_ENTITIES(-1, 1),
    CANCEL_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs193_g3_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs193_g3_s1_station_sref_script }; /* 0x824406c */

static const struct ScriptCommand s_gs193_g3_s1_lives0_dlg0[] = { /* 0x8244078 */
    DEBUGINFO_O(336),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    WAIT(1),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 34),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, _(" Hey, {NAME_0}.\nAre you all ready?")),
    VARIANT_DEFAULT(_(" Hi, {NAME_0}.\nAre you ready?")),
    CHOICE(/* label */  0, _("All set!")),
    CHOICE(/* label */  1, _("Not yet.")),
  LABEL(1), /* = 0x01 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" All right.\nWe'll go when you're ready.")),
    VARIANT_DEFAULT(_(" OK.\nLet's go when you're ready.")),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 0),
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    ASK3( TRUE, /*default*/ 0, /* speaker */ 1, _(" Which way should we go?")),
    CHOICE(/* label */  2, _("Lapis Cave.")),
    CHOICE(/* label */  3, _("Rock Path.")),
    JUMP_LABEL(1),
  LABEL(2), /* = 0x02 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" All right!\nLet's roll out!")),
    VARIANT_DEFAULT(_(" OK!\nLet's go!")),
    TEXTBOX_CLEAR,
    CJUMP_UNK_C8(34),
    COND_EQUAL(4, /* to label */ 4),
    COND_EQUAL(3, /* to label */ 4),
    COND_EQUAL(2, /* to label */ 4),
    COND_EQUAL(5, /* to label */ 4),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    FADE_OUT(0, 0x46),
    ALERT_CUE(6),
    WALK_GRID(256, 2),
    JUMP_LABEL(5),
  LABEL(4), /* = 0x04 */
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    ALERT_CUE(6),
    FADE_OUT(0, 0x46),
    WAIT(15),
    WALK_GRID(256, 2),
  LABEL(5), /* = 0x05 */
    SET_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    { 0x07, 0x00,  0x001e,  0x0000000a,  0x00000000, NULL },
    COND_EQUAL(-1, /* to label */ 1),
    HALT,
  LABEL(3), /* = 0x03 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" All right!\nLet's roll out!")),
    VARIANT_DEFAULT(_(" OK!\nLet's go!")),
    TEXTBOX_CLEAR,
    CJUMP_UNK_C8(34),
    COND_EQUAL(2, /* to label */ 6),
    COND_EQUAL(3, /* to label */ 6),
    COND_EQUAL(4, /* to label */ 6),
    COND_EQUAL(5, /* to label */ 6),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    BGM_FADEOUT(60),
    FADE_OUT(0, 0x46),
    ALERT_CUE(6),
    WALK_GRID(256, 2),
    JUMP_LABEL(7),
  LABEL(6), /* = 0x06 */
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    ALERT_CUE(6),
    BGM_FADEOUT(60),
    FADE_OUT(0, 0x46),
    WAIT(15),
    WALK_GRID(256, 2),
  LABEL(7), /* = 0x07 */
    SET_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    { 0x06, 0x00,  0x001e,  0x0000004e,  0x00000000, NULL },
    COND_EQUAL(-1, /* to label */ 1),
    HALT,
};

static const struct ScriptCommand s_gs193_g3_s1_lives1_dlg0[] = { /* 0x8244648 */
    DEBUGINFO_O(415),
    SELECT_ANIMATION(2),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_CANCEL_SCRIPT2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x1, 0x0),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 0),
    AWAIT_CUE(6),
    CJUMP_UNK_C8(0),
    COND_EQUAL(0, /* to label */ 0),
    COND_EQUAL(1, /* to label */ 0),
    COND_EQUAL(7, /* to label */ 0),
    COND_EQUAL(6, /* to label */ 0),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    WALK_GRID(256, 2),
    HALT,
  LABEL(0), /* = 0x00 */
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    WALK_GRID(256, 2),
    HALT,
};

static const struct ScriptCommand s_gs193_g4_s0_station_sref_script[] = { /* 0x8244768 */
    DEBUGINFO_O(436),
    SELECT_MAP(MAP_LAPIS_CAVE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_LAPIS_CAVE),
    FADE_IN(1, 0x1E),
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    CALL_STATION(  3,  0),
    RET,
};

static const ScriptRef s_gs193_g4_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs193_g4_s0_station_sref_script }; /* 0x82447f8 */

static const struct ScriptCommand s_gs193_g4_s0_lives0_dlg0[] = { /* 0x8244804 */
    DEBUGINFO_O(450),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    WALK_DIRECTION(32, 0x100, 0x7),
    WAIT_FADE,
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x0000000c),
    MSG_NPC(1, _(" What the...?{WAIT_PRESS}\nIsn't this where we started from?!")),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(468),
    ALERT_CUE(6),
    WAIT(15),
    CALL_SCRIPT(LOOK_AROUND_RIGHT_FUNC),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" ............{WAIT_PRESS}\nI guess that path just loops back to the\nstart.")),
    VARIANT(/* == */  1, _(" If we want to move on,\nI think our only choice is the {COLOR YELLOW_D}Lapis Cave{RESET}.")),
    VARIANT(/* == */  1, _(" {NAME_0}, let's give it\nour best!")),
    VARIANT_DEFAULT(_(" ............{WAIT_PRESS}\nI guess that path we took just loops back\nto where it started.")),
    VARIANT_DEFAULT(_(" It looks like we have to go\nthrough the {COLOR YELLOW_D}Lapis Cave{RESET} to move on.")),
    VARIANT_DEFAULT(_(" {NAME_0}, let's do our\nbest!")),
    TEXTBOX_CLEAR,
    SET_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK),
    CAMERA_FOLLOW(0x100),
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs193_g4_s0_lives1_dlg0[] = { /* 0x8244bb4 */
    DEBUGINFO_O(486),
    SELECT_ANIMATION(2),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x1, 0x0),
    WALK_DIRECTION(48, 0x100, 0x7),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE_COND(5, 0),
    AWAIT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO_LIVES(4, DIR_TRANS_SPINRIGHT1, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs193_g5_s0_station_sref_script[] = { /* 0x8244c94 */
    DEBUGINFO_O(503),
    SELECT_MAP(MAP_LAPIS_CAVE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_LAPIS_CAVE),
    FADE_IN(1, 0x1E),
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    CALL_STATION(  3,  0),
    RET,
};

static const ScriptRef s_gs193_g5_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs193_g5_s0_station_sref_script }; /* 0x8244d24 */

static const struct ScriptCommand s_gs193_g5_s0_lives0_dlg0[] = { /* 0x8244d30 */
    DEBUGINFO_O(517),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x0, 0x0),
    WAIT_FADE,
    ALERT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_RIGHT_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" Urrggh...{WAIT_PRESS}\nWe couldn't get through...")),
    VARIANT_DEFAULT(_(" Ouch...{WAIT_PRESS}\nWe couldn't break through...")),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, _(" We have to get through this\nfast, or they'll catch up to us.")),
    VARIANT(/* == */  1, _(" {NAME_0}, let's give it\nour best!")),
    VARIANT_DEFAULT(_(" If we don't get through here\nfast, they'll catch up to us.")),
    VARIANT_DEFAULT(_(" {NAME_0}, let's do our\nbest!")),
    TEXTBOX_CLEAR,
    CAMERA_FOLLOW(0x100),
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs193_g5_s0_lives1_dlg0[] = { /* 0x8244f58 */
    DEBUGINFO_O(546),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0x1, 0x0),
    AWAIT_CUE(6),
    WAIT(15),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO_LIVES(4, DIR_TRANS_SPINRIGHT1, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct GroundLivesData s_gs193_g0_s0_lives[] = { /* 0x8245028 */
    /*  0 */ { 144,   0,   0,   0, {  10,  21, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs193_g0_s1_lives[] = { /* 0x8245040 */
    /*  0 */ {   0,   2,   0,   0, {   7,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   3,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g0_s2_lives[] = { /* 0x8245070 */
    /*  0 */ {   0,   0,   0,   0, {  34,  21, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  34,  19, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g0_s3_lives[] = { /* 0x82450a0 */
    /*  0 */ {   0,   2,   0,   0, {   7,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   3,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g0_s4_lives[] = { /* 0x82450d0 */
    /*  0 */ {   0,   2,   0,   0, {   7,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   3,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g0_s5_lives[] = { /* 0x8245100 */
    /*  0 */ { 144,   0,   0,   0, {  10,  21, 0, CPOS_HALFTILE }, {} },
    /*  1 */ { 145,   0,   0,   0, {   8,  31, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs193_g1_s0_lives[] = { /* 0x8245130 */
    /*  0 */ {   0,   2,   0,   0, {   3,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {   8,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g2_s0_lives[] = { /* 0x8245160 */
    /*  0 */ {   0,   2,   0,   0, {  22,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  27,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g3_s0_lives[] = { /* 0x8245190 */
    /*  0 */ {  34,   0,   0,   0, {  27,  26, 0, CPOS_HALFTILE }, {
        [1] = s_gs193_g3_s0_lives0_dlg1,
        [2] = s_gs193_g3_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs193_g3_s1_lives[] = { /* 0x82451a8 */
    /*  0 */ {   0,   2,   0,   0, {  23,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g3_s1_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  27,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g3_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g4_s0_lives[] = { /* 0x82451d8 */
    /*  0 */ {   0,   2,   0,   0, {  26,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g4_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  33,  20, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g4_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g5_s0_lives[] = { /* 0x8245208 */
    /*  0 */ {   0,   2,   0,   0, {  22,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g5_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  27,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g5_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs193_g0_s0_objs[] = { /* 0x8245238 */
    /*  0 */ {   4,   0,   4,   2, {  10,  22, 0, 0 }, {
        [2] = s_gs193_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs193_g0_s5_objs[] = { /* 0x8245250 */
    /*  0 */ {   4,   0,   4,   2, {  10,  22, 0, 0 }, {
        [2] = s_gs193_g0_s5_obj0_dlg2,
    } },
    /*  1 */ {   4,   0,   4,   3, {   8,  31, 0, CPOS_HALFTILE }, {
        [2] = s_gs193_g0_s5_obj1_dlg2,
    } },
};

static const struct GroundEffectData s_gs193_g1_s0_effs[] = { /* 0x8245280 */
    /*  0 */ {   0,   0,   1,   1, {  27,  25, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs193_g2_s0_effs[] = { /* 0x824528c */
    /*  0 */ {   0,   0,   1,   1, {  24,  24, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs193_g4_s0_effs[] = { /* 0x8245298 */
    /*  0 */ {   0,   0,   1,   1, {  24,  24, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs193_g5_s0_effs[] = { /* 0x82452a4 */
    /*  0 */ {   0,   0,   1,   1, {  24,  24, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs193_g3_s0_evts[] = { /* 0x82452b0 */
    /*  0 */ {  12,   3,   0,   0, {  28,  16, 0, 0 }, &s_gs193_g3_s0_evt0_sref },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x82452bc */
    &s_gs193_g0_s0_station_sref,
    &s_gs193_g1_s0_station_sref,
    &s_gs193_g2_s0_station_sref,
    &s_gs193_g3_s0_station_sref,
    &s_gs193_g3_s1_station_sref,
    &s_gs193_g4_s0_station_sref,
    &s_gs193_g5_s0_station_sref,
};

static const struct GroundScriptSector s_gs193_g0_sectors[] = { /* 0x82452d8 */
    { LPARRAY(s_gs193_g0_s0_lives), LPARRAY(s_gs193_g0_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[0], },
    { LPARRAY(s_gs193_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs193_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs193_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs193_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs193_g0_s5_lives), LPARRAY(s_gs193_g0_s5_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs193_g1_sectors[] = { /* 0x82453c8 */
    { LPARRAY(s_gs193_g1_s0_lives), 0,NULL, LPARRAY(s_gs193_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs193_g2_sectors[] = { /* 0x82453f0 */
    { LPARRAY(s_gs193_g2_s0_lives), 0,NULL, LPARRAY(s_gs193_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptSector s_gs193_g3_sectors[] = { /* 0x8245418 */
    { LPARRAY(s_gs193_g3_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs193_g3_s0_evts), 1,&sStationScripts[3], },
    { LPARRAY(s_gs193_g3_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs193_g4_sectors[] = { /* 0x8245468 */
    { LPARRAY(s_gs193_g4_s0_lives), 0,NULL, LPARRAY(s_gs193_g4_s0_effs), 0,NULL, 1,&sStationScripts[5], },
};

static const struct GroundScriptSector s_gs193_g5_sectors[] = { /* 0x8245490 */
    { LPARRAY(s_gs193_g5_s0_lives), 0,NULL, LPARRAY(s_gs193_g5_s0_effs), 0,NULL, 1,&sStationScripts[6], },
};

static const struct GroundScriptGroup s_gs193_groups[] = { /* 0x82454b8 */
    { LPARRAY(s_gs193_g0_sectors) },
    { LPARRAY(s_gs193_g1_sectors) },
    { LPARRAY(s_gs193_g2_sectors) },
    { LPARRAY(s_gs193_g3_sectors) },
    { LPARRAY(s_gs193_g4_sectors) },
    { LPARRAY(s_gs193_g5_sectors) },
};

static const struct GroundLink s_gs193_links[] = { /* 0x82454e8 */
    /* link   0 */ { { /*x*/  25, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  29, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/  34, /*y*/  17, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs193 = { LPARRAY(s_gs193_groups), s_gs193_links }; /* 0x8245500 */
