const RGB_Struct gSign01Pal[] = { INCBIN_RGB("graphics/ornament/pal/sign01.pmdpal") };

static const axmain sAxMainSign01;
const SiroArchive gAxSign01 = {"SIRO", &sAxMainSign01};

/* 16×16 Spinda's Café sign ornament (all facings share pose 0). */
static const ax_pose sSign01Pose1[] = {
	AX_POSE(0, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 2, 0), OAM3(0, 3, 13)),
	AX_POSE_TERMINATOR
};

static const ax_anim sSign01Anims_1_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSign01Anims_1_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSign01Anims_1_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSign01Anims_1_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSign01Anims_1_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSign01Anims_1_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSign01Anims_1_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSign01Anims_1_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sSign01Gfx1[] = INCBIN_U8("graphics/ornament/Sign01/sprite_1.4bpp");
static const ax_sprite sSign01Sprites1[] = {
	{sSign01Gfx1, ARRAY_COUNT(sSign01Gfx1)},
	{NULL, 0},
};

static const ax_pose *const sAxPosesSign01[] = {
	sSign01Pose1,
};

static const ax_anim *const sSign01AnimTable1[] = {
	sSign01Anims_1_1,
	sSign01Anims_1_2,
	sSign01Anims_1_3,
	sSign01Anims_1_4,
	sSign01Anims_1_5,
	sSign01Anims_1_6,
	sSign01Anims_1_7,
	sSign01Anims_1_8,
};

static const ax_anim *const *const sAxAnimationsSign01[] = {
	sSign01AnimTable1,
};

static const ax_sprite *const sAxSpritesSign01[] = {
	sSign01Sprites1,
};

static const axmain sAxMainSign01 = {
	.poses = sAxPosesSign01,
	.animations = sAxAnimationsSign01,
	.animCount = ARRAY_COUNT(sAxAnimationsSign01),
	.spriteData = sAxSpritesSign01,
	.positions = NULL,
};
