const RGB_Struct gStairs01Pal[] = { INCBIN_RGB("graphics/ornament/pal/stairs01.pmdpal") };

static const axmain sAxMainStairs01;
const SiroArchive gAxStairs01 = {"SIRO", &sAxMainStairs01};

/* 32×32 café stairs ornament (all facings share pose 0). */
static const ax_pose sStairs01Pose1[] = {
	AX_POSE(0, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 2, 0), OAM3(0, 3, 13)),
	AX_POSE_TERMINATOR
};

static const ax_anim sStairs01Anims_1_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStairs01Anims_1_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStairs01Anims_1_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStairs01Anims_1_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStairs01Anims_1_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStairs01Anims_1_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStairs01Anims_1_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStairs01Anims_1_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sStairs01Gfx1[] = INCBIN_U8("graphics/ornament/Stairs01/sprite_1.4bpp");
static const ax_sprite sStairs01Sprites1[] = {
	{sStairs01Gfx1, ARRAY_COUNT(sStairs01Gfx1)},
	{NULL, 0},
};

static const ax_pose *const sAxPosesStairs01[] = {
	sStairs01Pose1,
};

static const ax_anim *const sStairs01AnimTable1[] = {
	sStairs01Anims_1_1,
	sStairs01Anims_1_2,
	sStairs01Anims_1_3,
	sStairs01Anims_1_4,
	sStairs01Anims_1_5,
	sStairs01Anims_1_6,
	sStairs01Anims_1_7,
	sStairs01Anims_1_8,
};

static const ax_anim *const *const sAxAnimationsStairs01[] = {
	sStairs01AnimTable1,
};

static const ax_sprite *const sAxSpritesStairs01[] = {
	sStairs01Sprites1,
};

static const axmain sAxMainStairs01 = {
	.poses = sAxPosesStairs01,
	.animations = sAxAnimationsStairs01,
	.animCount = ARRAY_COUNT(sAxAnimationsStairs01),
	.spriteData = sAxSpritesStairs01,
	.positions = NULL,
};
