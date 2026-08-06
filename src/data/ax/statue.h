/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
static const axmain sAxMainStatue;
const SiroArchive gAxStatue = {"SIRO", &sAxMainStatue};

static const ax_pose sStatuePose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 2, 0), OAM3(0, 3, 13)),
	AX_POSE_TERMINATOR
};
static const u8 sStatueAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_1_1.lz");
static const u8 sStatueAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_2_1.lz");
static const u8 sStatueAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_3_1.lz");
static const u8 sStatueAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_4_1.lz");
static const u8 sStatueAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_5_1.lz");
static const u8 sStatueAnims_6_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_6_1.lz");
static const u8 sStatueAnims_7_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_7_1.lz");
static const u8 sStatueAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_8_1.lz");
static const u8 sStatueAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_9_1.lz");
static const u8 sStatueAnims_10_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_10_1.lz");
static const u8 sStatueAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_11_1.lz");
static const u8 sStatueAnims_12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_12_1.lz");
static const u8 sStatueAnims_13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/statue/sStatueAnims_13_1.lz");

static const u8 sStatueGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/statue/sprite_1.4bpp.lz");
static const ax_sprite sStatueSprites1[] = {
	{sStatueGfx1, ARRAY_COUNT(sStatueGfx1)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesStatue[] = {
	sStatuePose1,
	sStatuePose1,
	sStatuePose1,
	sStatuePose1,
	sStatuePose1,
	sStatuePose1,
	sStatuePose1,
	sStatuePose1,
	sStatuePose1,
	sStatuePose1,
	sStatuePose1,
	sStatuePose1,
	sStatuePose1,
};

static const struct PositionSets sAxPositionsStatue[] = {
	[0] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
	[1] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
	[2] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
	[3] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
	[4] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
	[5] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
	[6] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
	[7] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
	[8] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
	[9] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
	[10] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
	[11] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
	[12] = { .set = { {-1, -11}, {-12, -11}, {12, -11}, {-1, -6} } },
};

static const ax_anim *const sStatueAnimTable1[] = {
	AX_ANIM_PTR(sStatueAnims_1_1),
	AX_ANIM_PTR(sStatueAnims_1_1),
	AX_ANIM_PTR(sStatueAnims_1_1),
	AX_ANIM_PTR(sStatueAnims_1_1),
	AX_ANIM_PTR(sStatueAnims_1_1),
	AX_ANIM_PTR(sStatueAnims_1_1),
	AX_ANIM_PTR(sStatueAnims_1_1),
	AX_ANIM_PTR(sStatueAnims_1_1),
};

static const ax_anim *const sStatueAnimTable2[] = {
	AX_ANIM_PTR(sStatueAnims_2_1),
	AX_ANIM_PTR(sStatueAnims_2_1),
	AX_ANIM_PTR(sStatueAnims_2_1),
	AX_ANIM_PTR(sStatueAnims_2_1),
	AX_ANIM_PTR(sStatueAnims_2_1),
	AX_ANIM_PTR(sStatueAnims_2_1),
	AX_ANIM_PTR(sStatueAnims_2_1),
	AX_ANIM_PTR(sStatueAnims_2_1),
};

static const ax_anim *const sStatueAnimTable3[] = {
	AX_ANIM_PTR(sStatueAnims_3_1),
	AX_ANIM_PTR(sStatueAnims_3_1),
	AX_ANIM_PTR(sStatueAnims_3_1),
	AX_ANIM_PTR(sStatueAnims_3_1),
	AX_ANIM_PTR(sStatueAnims_3_1),
	AX_ANIM_PTR(sStatueAnims_3_1),
	AX_ANIM_PTR(sStatueAnims_3_1),
	AX_ANIM_PTR(sStatueAnims_3_1),
};

static const ax_anim *const sStatueAnimTable4[] = {
	AX_ANIM_PTR(sStatueAnims_4_1),
	AX_ANIM_PTR(sStatueAnims_4_1),
	AX_ANIM_PTR(sStatueAnims_4_1),
	AX_ANIM_PTR(sStatueAnims_4_1),
	AX_ANIM_PTR(sStatueAnims_4_1),
	AX_ANIM_PTR(sStatueAnims_4_1),
	AX_ANIM_PTR(sStatueAnims_4_1),
	AX_ANIM_PTR(sStatueAnims_4_1),
};

static const ax_anim *const sStatueAnimTable5[] = {
	AX_ANIM_PTR(sStatueAnims_5_1),
	AX_ANIM_PTR(sStatueAnims_5_1),
	AX_ANIM_PTR(sStatueAnims_5_1),
	AX_ANIM_PTR(sStatueAnims_5_1),
	AX_ANIM_PTR(sStatueAnims_5_1),
	AX_ANIM_PTR(sStatueAnims_5_1),
	AX_ANIM_PTR(sStatueAnims_5_1),
	AX_ANIM_PTR(sStatueAnims_5_1),
};

static const ax_anim *const sStatueAnimTable6[] = {
	AX_ANIM_PTR(sStatueAnims_6_1),
	AX_ANIM_PTR(sStatueAnims_6_1),
	AX_ANIM_PTR(sStatueAnims_6_1),
	AX_ANIM_PTR(sStatueAnims_6_1),
	AX_ANIM_PTR(sStatueAnims_6_1),
	AX_ANIM_PTR(sStatueAnims_6_1),
	AX_ANIM_PTR(sStatueAnims_6_1),
	AX_ANIM_PTR(sStatueAnims_6_1),
};

static const ax_anim *const sStatueAnimTable7[] = {
	AX_ANIM_PTR(sStatueAnims_7_1),
	AX_ANIM_PTR(sStatueAnims_7_1),
	AX_ANIM_PTR(sStatueAnims_7_1),
	AX_ANIM_PTR(sStatueAnims_7_1),
	AX_ANIM_PTR(sStatueAnims_7_1),
	AX_ANIM_PTR(sStatueAnims_7_1),
	AX_ANIM_PTR(sStatueAnims_7_1),
	AX_ANIM_PTR(sStatueAnims_7_1),
};

static const ax_anim *const sStatueAnimTable8[] = {
	AX_ANIM_PTR(sStatueAnims_8_1),
	AX_ANIM_PTR(sStatueAnims_8_1),
	AX_ANIM_PTR(sStatueAnims_8_1),
	AX_ANIM_PTR(sStatueAnims_8_1),
	AX_ANIM_PTR(sStatueAnims_8_1),
	AX_ANIM_PTR(sStatueAnims_8_1),
	AX_ANIM_PTR(sStatueAnims_8_1),
	AX_ANIM_PTR(sStatueAnims_8_1),
};

static const ax_anim *const sStatueAnimTable9[] = {
	AX_ANIM_PTR(sStatueAnims_9_1),
	AX_ANIM_PTR(sStatueAnims_9_1),
	AX_ANIM_PTR(sStatueAnims_9_1),
	AX_ANIM_PTR(sStatueAnims_9_1),
	AX_ANIM_PTR(sStatueAnims_9_1),
	AX_ANIM_PTR(sStatueAnims_9_1),
	AX_ANIM_PTR(sStatueAnims_9_1),
	AX_ANIM_PTR(sStatueAnims_9_1),
};

static const ax_anim *const sStatueAnimTable10[] = {
	AX_ANIM_PTR(sStatueAnims_10_1),
	AX_ANIM_PTR(sStatueAnims_10_1),
	AX_ANIM_PTR(sStatueAnims_10_1),
	AX_ANIM_PTR(sStatueAnims_10_1),
	AX_ANIM_PTR(sStatueAnims_10_1),
	AX_ANIM_PTR(sStatueAnims_10_1),
	AX_ANIM_PTR(sStatueAnims_10_1),
	AX_ANIM_PTR(sStatueAnims_10_1),
};

static const ax_anim *const sStatueAnimTable11[] = {
	AX_ANIM_PTR(sStatueAnims_11_1),
	AX_ANIM_PTR(sStatueAnims_11_1),
	AX_ANIM_PTR(sStatueAnims_11_1),
	AX_ANIM_PTR(sStatueAnims_11_1),
	AX_ANIM_PTR(sStatueAnims_11_1),
	AX_ANIM_PTR(sStatueAnims_11_1),
	AX_ANIM_PTR(sStatueAnims_11_1),
	AX_ANIM_PTR(sStatueAnims_11_1),
};

static const ax_anim *const sStatueAnimTable12[] = {
	AX_ANIM_PTR(sStatueAnims_12_1),
	AX_ANIM_PTR(sStatueAnims_12_1),
	AX_ANIM_PTR(sStatueAnims_12_1),
	AX_ANIM_PTR(sStatueAnims_12_1),
	AX_ANIM_PTR(sStatueAnims_12_1),
	AX_ANIM_PTR(sStatueAnims_12_1),
	AX_ANIM_PTR(sStatueAnims_12_1),
	AX_ANIM_PTR(sStatueAnims_12_1),
};

static const ax_anim *const sStatueAnimTable13[] = {
	AX_ANIM_PTR(sStatueAnims_13_1),
	AX_ANIM_PTR(sStatueAnims_13_1),
	AX_ANIM_PTR(sStatueAnims_13_1),
	AX_ANIM_PTR(sStatueAnims_13_1),
	AX_ANIM_PTR(sStatueAnims_13_1),
	AX_ANIM_PTR(sStatueAnims_13_1),
	AX_ANIM_PTR(sStatueAnims_13_1),
	AX_ANIM_PTR(sStatueAnims_13_1),
};

static const ax_anim *const *const sAxAnimationsStatue[] = {
	sStatueAnimTable1,
	sStatueAnimTable2,
	sStatueAnimTable3,
	sStatueAnimTable4,
	sStatueAnimTable5,
	sStatueAnimTable6,
	sStatueAnimTable7,
	sStatueAnimTable8,
	sStatueAnimTable9,
	sStatueAnimTable10,
	sStatueAnimTable11,
	sStatueAnimTable12,
	sStatueAnimTable13,
};

static const ax_sprite *const sAxSpritesStatue[] = {
	sStatueSprites1,
};

static const axmain sAxMainStatue = {
	.poses = sAxPosesStatue,
	.animations = sAxAnimationsStatue,
	.animCount = ARRAY_COUNT(sAxAnimationsStatue),
	.spriteData = sAxSpritesStatue,
	.positions = sAxPositionsStatue,
};
