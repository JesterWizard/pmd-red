const RGB_Struct gBoard01Pal[] = { INCBIN_RGB("graphics/ornament/pal/board01.pmdpal") };

static const axmain sAxMainBoard01;
const SiroArchive gAxBoard01 = {"SIRO", &sAxMainBoard01};

/* 32×32 bulletin board ornament (all facings share pose 0). */
static const ax_pose sBoard01Pose1[] = {
	AX_POSE(0, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 2, 0), OAM3(0, 3, 13)),
	AX_POSE_TERMINATOR
};

static const ax_anim sBoard01Anims_1_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBoard01Anims_1_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBoard01Anims_1_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBoard01Anims_1_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBoard01Anims_1_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBoard01Anims_1_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBoard01Anims_1_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBoard01Anims_1_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sBoard01Gfx1[] = INCBIN_U8("graphics/ornament/Board01/sprite_1.4bpp");
static const ax_sprite sBoard01Sprites1[] = {
	{sBoard01Gfx1, ARRAY_COUNT(sBoard01Gfx1)},
	{NULL, 0},
};

static const ax_pose *const sAxPosesBoard01[] = {
	sBoard01Pose1,
};

static const ax_anim *const sBoard01AnimTable1[] = {
	sBoard01Anims_1_1,
	sBoard01Anims_1_2,
	sBoard01Anims_1_3,
	sBoard01Anims_1_4,
	sBoard01Anims_1_5,
	sBoard01Anims_1_6,
	sBoard01Anims_1_7,
	sBoard01Anims_1_8,
};

static const ax_anim *const *const sAxAnimationsBoard01[] = {
	sBoard01AnimTable1,
};

static const ax_sprite *const sAxSpritesBoard01[] = {
	sBoard01Sprites1,
};

static const axmain sAxMainBoard01 = {
	.poses = sAxPosesBoard01,
	.animations = sAxAnimationsBoard01,
	.animCount = ARRAY_COUNT(sAxAnimationsBoard01),
	.spriteData = sAxSpritesBoard01,
	.positions = NULL,
};
