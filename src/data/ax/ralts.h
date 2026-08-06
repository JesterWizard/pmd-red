/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainRalts;
const SiroArchive gAxRalts = {"SIRO", &sAxMainRalts};

static const ax_pose sRaltsPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose16[] = {
	AX_POSE(9, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose19[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose21[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose22[] = {
	AX_POSE(3, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose23[] = {
	AX_POSE(4, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose24[] = {
	AX_POSE(5, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose73[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose74[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose75[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose76[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose77[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose78[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose79[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose80[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose82[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose83[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose84[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose85[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose86[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose87[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose88[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose89[] = {
	AX_POSE(20, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose90[] = {
	AX_POSE(21, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose91[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose92[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose93[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose94[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose95[] = {
	AX_POSE(26, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose96[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose97[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose98[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose102[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose104[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose106[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose110[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose112[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose114[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose136[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaltsPose144[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const u8 sRaltsAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_2_1.lz");
static const u8 sRaltsAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_2_2.lz");
static const u8 sRaltsAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_2_3.lz");
static const u8 sRaltsAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_2_4.lz");
static const u8 sRaltsAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_2_5.lz");
static const u8 sRaltsAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_2_6.lz");
static const u8 sRaltsAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_2_7.lz");
static const u8 sRaltsAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_2_8.lz");
static const u8 sRaltsAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_3_1.lz");
static const u8 sRaltsAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_3_2.lz");
static const u8 sRaltsAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_3_3.lz");
static const u8 sRaltsAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_3_4.lz");
static const u8 sRaltsAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_3_5.lz");
static const u8 sRaltsAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_3_6.lz");
static const u8 sRaltsAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_3_7.lz");
static const u8 sRaltsAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_3_8.lz");
static const u8 sRaltsAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_5_1.lz");
static const u8 sRaltsAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_5_2.lz");
static const u8 sRaltsAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_5_3.lz");
static const u8 sRaltsAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_5_4.lz");
static const u8 sRaltsAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_5_5.lz");
static const u8 sRaltsAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_5_6.lz");
static const u8 sRaltsAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_5_7.lz");
static const u8 sRaltsAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_5_8.lz");
static const u8 sRaltsAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_8_1.lz");
static const u8 sRaltsAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_8_2.lz");
static const u8 sRaltsAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_8_3.lz");
static const u8 sRaltsAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_8_4.lz");
static const u8 sRaltsAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_8_5.lz");
static const u8 sRaltsAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_8_6.lz");
static const u8 sRaltsAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_8_7.lz");
static const u8 sRaltsAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_8_8.lz");
static const u8 sRaltsAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_9_1.lz");
static const u8 sRaltsAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_9_2.lz");
static const u8 sRaltsAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_9_3.lz");
static const u8 sRaltsAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_9_4.lz");
static const u8 sRaltsAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_9_5.lz");
static const u8 sRaltsAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_9_6.lz");
static const u8 sRaltsAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_9_7.lz");
static const u8 sRaltsAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_9_8.lz");
static const u8 sRaltsAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_11_1.lz");
static const u8 sRaltsAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_11_2.lz");
static const u8 sRaltsAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_11_3.lz");
static const u8 sRaltsAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_11_4.lz");
static const u8 sRaltsAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_11_6.lz");
static const u8 sRaltsAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_11_7.lz");
static const u8 sRaltsAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_11_8.lz");
static const u8 sRaltsAnims_12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_12_1.lz");
static const u8 sRaltsAnims_12_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_12_2.lz");
static const u8 sRaltsAnims_12_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_12_3.lz");
static const u8 sRaltsAnims_12_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_12_4.lz");
static const u8 sRaltsAnims_12_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_12_5.lz");
static const u8 sRaltsAnims_12_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_12_6.lz");
static const u8 sRaltsAnims_12_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_12_7.lz");
static const u8 sRaltsAnims_12_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_12_8.lz");
static const u8 sRaltsAnims_13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_13_1.lz");
static const u8 sRaltsAnims_13_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_13_2.lz");
static const u8 sRaltsAnims_13_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_13_3.lz");
static const u8 sRaltsAnims_13_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_13_4.lz");
static const u8 sRaltsAnims_13_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_13_5.lz");
static const u8 sRaltsAnims_13_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_13_6.lz");
static const u8 sRaltsAnims_13_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_13_7.lz");
static const u8 sRaltsAnims_13_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/ralts/sRaltsAnims_13_8.lz");

static const u8 sRaltsGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_1.4bpp.lz");
static const ax_sprite sRaltsSprites1[] = {
	{sRaltsGfx1, ARRAY_COUNT(sRaltsGfx1)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_2.4bpp.lz");
static const ax_sprite sRaltsSprites2[] = {
	{sRaltsGfx2, ARRAY_COUNT(sRaltsGfx2)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_3.4bpp.lz");
static const ax_sprite sRaltsSprites3[] = {
	{sRaltsGfx3, ARRAY_COUNT(sRaltsGfx3)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_4.4bpp.lz");
static const ax_sprite sRaltsSprites4[] = {
	{sRaltsGfx4, ARRAY_COUNT(sRaltsGfx4)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_5.4bpp.lz");
static const ax_sprite sRaltsSprites5[] = {
	{sRaltsGfx5, ARRAY_COUNT(sRaltsGfx5)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_6.4bpp.lz");
static const ax_sprite sRaltsSprites6[] = {
	{sRaltsGfx6, ARRAY_COUNT(sRaltsGfx6)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_7.4bpp.lz");
static const ax_sprite sRaltsSprites7[] = {
	{sRaltsGfx7, ARRAY_COUNT(sRaltsGfx7)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_8.4bpp.lz");
static const ax_sprite sRaltsSprites8[] = {
	{sRaltsGfx8, ARRAY_COUNT(sRaltsGfx8)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_9.4bpp.lz");
static const ax_sprite sRaltsSprites9[] = {
	{sRaltsGfx9, ARRAY_COUNT(sRaltsGfx9)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_10.4bpp.lz");
static const ax_sprite sRaltsSprites10[] = {
	{sRaltsGfx10, ARRAY_COUNT(sRaltsGfx10)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_11.4bpp.lz");
static const ax_sprite sRaltsSprites11[] = {
	{sRaltsGfx11, ARRAY_COUNT(sRaltsGfx11)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_12.4bpp.lz");
static const ax_sprite sRaltsSprites12[] = {
	{sRaltsGfx12, ARRAY_COUNT(sRaltsGfx12)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_13.4bpp.lz");
static const ax_sprite sRaltsSprites13[] = {
	{sRaltsGfx13, ARRAY_COUNT(sRaltsGfx13)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_14.4bpp.lz");
static const ax_sprite sRaltsSprites14[] = {
	{sRaltsGfx14, ARRAY_COUNT(sRaltsGfx14)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_15.4bpp.lz");
static const ax_sprite sRaltsSprites15[] = {
	{sRaltsGfx15, ARRAY_COUNT(sRaltsGfx15)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_16.4bpp.lz");
static const u8 sRaltsGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_16_1.4bpp.lz");
static const u8 sRaltsGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_16_2.4bpp.lz");
static const ax_sprite sRaltsSprites16[] = {
	{sRaltsGfx16, ARRAY_COUNT(sRaltsGfx16)}, 
	{NULL, 64}, 
	{sRaltsGfx16_1, ARRAY_COUNT(sRaltsGfx16_1)}, 
	{NULL, 64}, 
	{sRaltsGfx16_2, ARRAY_COUNT(sRaltsGfx16_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sRaltsGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_17.4bpp.lz");
static const u8 sRaltsGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_17_1.4bpp.lz");
static const u8 sRaltsGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_17_2.4bpp.lz");
static const ax_sprite sRaltsSprites17[] = {
	{sRaltsGfx17, ARRAY_COUNT(sRaltsGfx17)}, 
	{NULL, 64}, 
	{sRaltsGfx17_1, ARRAY_COUNT(sRaltsGfx17_1)}, 
	{NULL, 64}, 
	{sRaltsGfx17_2, ARRAY_COUNT(sRaltsGfx17_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sRaltsGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_18.4bpp.lz");
static const u8 sRaltsGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_18_1.4bpp.lz");
static const u8 sRaltsGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_18_2.4bpp.lz");
static const ax_sprite sRaltsSprites18[] = {
	{NULL, 32}, 
	{sRaltsGfx18, ARRAY_COUNT(sRaltsGfx18)}, 
	{NULL, 64}, 
	{sRaltsGfx18_1, ARRAY_COUNT(sRaltsGfx18_1)}, 
	{NULL, 32}, 
	{sRaltsGfx18_2, ARRAY_COUNT(sRaltsGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sRaltsGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_19.4bpp.lz");
static const u8 sRaltsGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_19_1.4bpp.lz");
static const u8 sRaltsGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_19_2.4bpp.lz");
static const ax_sprite sRaltsSprites19[] = {
	{sRaltsGfx19, ARRAY_COUNT(sRaltsGfx19)}, 
	{NULL, 64}, 
	{sRaltsGfx19_1, ARRAY_COUNT(sRaltsGfx19_1)}, 
	{NULL, 32}, 
	{sRaltsGfx19_2, ARRAY_COUNT(sRaltsGfx19_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sRaltsGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_20.4bpp.lz");
static const u8 sRaltsGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_20_1.4bpp.lz");
static const u8 sRaltsGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_20_2.4bpp.lz");
static const ax_sprite sRaltsSprites20[] = {
	{sRaltsGfx20, ARRAY_COUNT(sRaltsGfx20)}, 
	{NULL, 64}, 
	{sRaltsGfx20_1, ARRAY_COUNT(sRaltsGfx20_1)}, 
	{NULL, 64}, 
	{sRaltsGfx20_2, ARRAY_COUNT(sRaltsGfx20_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sRaltsGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_21.4bpp.lz");
static const ax_sprite sRaltsSprites21[] = {
	{sRaltsGfx21, ARRAY_COUNT(sRaltsGfx21)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_22.4bpp.lz");
static const ax_sprite sRaltsSprites22[] = {
	{sRaltsGfx22, ARRAY_COUNT(sRaltsGfx22)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_23.4bpp.lz");
static const ax_sprite sRaltsSprites23[] = {
	{sRaltsGfx23, ARRAY_COUNT(sRaltsGfx23)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_24.4bpp.lz");
static const ax_sprite sRaltsSprites24[] = {
	{sRaltsGfx24, ARRAY_COUNT(sRaltsGfx24)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_25.4bpp.lz");
static const ax_sprite sRaltsSprites25[] = {
	{sRaltsGfx25, ARRAY_COUNT(sRaltsGfx25)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_26.4bpp.lz");
static const ax_sprite sRaltsSprites26[] = {
	{sRaltsGfx26, ARRAY_COUNT(sRaltsGfx26)}, 
	{NULL, 0}
};
static const u8 sRaltsGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/ralts/sprite_27.4bpp.lz");
static const ax_sprite sRaltsSprites27[] = {
	{sRaltsGfx27, ARRAY_COUNT(sRaltsGfx27)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesRalts[] = {
	sRaltsPose1,
	sRaltsPose2,
	sRaltsPose3,
	sRaltsPose4,
	sRaltsPose5,
	sRaltsPose6,
	sRaltsPose7,
	sRaltsPose8,
	sRaltsPose9,
	sRaltsPose10,
	sRaltsPose11,
	sRaltsPose12,
	sRaltsPose13,
	sRaltsPose14,
	sRaltsPose15,
	sRaltsPose16,
	sRaltsPose17,
	sRaltsPose18,
	sRaltsPose19,
	sRaltsPose20,
	sRaltsPose21,
	sRaltsPose22,
	sRaltsPose23,
	sRaltsPose24,
	sRaltsPose1,
	sRaltsPose2,
	sRaltsPose3,
	sRaltsPose4,
	sRaltsPose5,
	sRaltsPose6,
	sRaltsPose7,
	sRaltsPose8,
	sRaltsPose9,
	sRaltsPose10,
	sRaltsPose11,
	sRaltsPose12,
	sRaltsPose13,
	sRaltsPose14,
	sRaltsPose15,
	sRaltsPose16,
	sRaltsPose17,
	sRaltsPose18,
	sRaltsPose19,
	sRaltsPose20,
	sRaltsPose21,
	sRaltsPose22,
	sRaltsPose23,
	sRaltsPose24,
	sRaltsPose1,
	sRaltsPose2,
	sRaltsPose3,
	sRaltsPose4,
	sRaltsPose5,
	sRaltsPose6,
	sRaltsPose7,
	sRaltsPose8,
	sRaltsPose9,
	sRaltsPose10,
	sRaltsPose11,
	sRaltsPose12,
	sRaltsPose13,
	sRaltsPose14,
	sRaltsPose15,
	sRaltsPose16,
	sRaltsPose17,
	sRaltsPose18,
	sRaltsPose19,
	sRaltsPose20,
	sRaltsPose21,
	sRaltsPose22,
	sRaltsPose23,
	sRaltsPose24,
	sRaltsPose73,
	sRaltsPose74,
	sRaltsPose75,
	sRaltsPose76,
	sRaltsPose77,
	sRaltsPose78,
	sRaltsPose79,
	sRaltsPose80,
	sRaltsPose73,
	sRaltsPose82,
	sRaltsPose83,
	sRaltsPose84,
	sRaltsPose85,
	sRaltsPose86,
	sRaltsPose87,
	sRaltsPose88,
	sRaltsPose89,
	sRaltsPose90,
	sRaltsPose91,
	sRaltsPose92,
	sRaltsPose93,
	sRaltsPose94,
	sRaltsPose95,
	sRaltsPose96,
	sRaltsPose97,
	sRaltsPose98,
	sRaltsPose1,
	sRaltsPose73,
	sRaltsPose4,
	sRaltsPose102,
	sRaltsPose7,
	sRaltsPose104,
	sRaltsPose10,
	sRaltsPose106,
	sRaltsPose13,
	sRaltsPose85,
	sRaltsPose16,
	sRaltsPose110,
	sRaltsPose19,
	sRaltsPose112,
	sRaltsPose22,
	sRaltsPose114,
	sRaltsPose1,
	sRaltsPose22,
	sRaltsPose19,
	sRaltsPose16,
	sRaltsPose13,
	sRaltsPose10,
	sRaltsPose7,
	sRaltsPose4,
	sRaltsPose73,
	sRaltsPose80,
	sRaltsPose79,
	sRaltsPose78,
	sRaltsPose77,
	sRaltsPose76,
	sRaltsPose75,
	sRaltsPose74,
	sRaltsPose1,
	sRaltsPose73,
	sRaltsPose4,
	sRaltsPose102,
	sRaltsPose7,
	sRaltsPose136,
	sRaltsPose10,
	sRaltsPose106,
	sRaltsPose13,
	sRaltsPose85,
	sRaltsPose16,
	sRaltsPose110,
	sRaltsPose19,
	sRaltsPose144,
	sRaltsPose22,
	sRaltsPose114,
	sRaltsPose73,
	sRaltsPose74,
	sRaltsPose75,
	sRaltsPose76,
	sRaltsPose77,
	sRaltsPose78,
	sRaltsPose79,
	sRaltsPose80,
	sRaltsPose1,
	sRaltsPose22,
	sRaltsPose19,
	sRaltsPose16,
	sRaltsPose13,
	sRaltsPose10,
	sRaltsPose7,
	sRaltsPose4,
};

static const struct PositionSets sAxPositionsRalts[] = {
	[0] = { .set = { {-1, -6}, {-4, -3}, {2, -3}, {-1, -5} } },
	[1] = { .set = { {-1, -5}, {-4, -2}, {2, -2}, {-1, -4} } },
	[2] = { .set = { {-1, -5}, {-4, -2}, {2, -2}, {-1, -4} } },
	[3] = { .set = { {2, -6}, {1, -3}, {-3, -3}, {-1, -5} } },
	[4] = { .set = { {1, -5}, {-1, -2}, {-3, -2}, {-1, -4} } },
	[5] = { .set = { {1, -5}, {1, -2}, {-3, -2}, {-1, -4} } },
	[6] = { .set = { {2, -6}, {0, -4}, {0, -3}, {-1, -5} } },
	[7] = { .set = { {1, -5}, {-3, -2}, {0, -2}, {-1, -4} } },
	[8] = { .set = { {2, -5}, {1, -2}, {0, -2}, {-1, -4} } },
	[9] = { .set = { {1, -7}, {-2, -4}, {1, -3}, {-1, -5} } },
	[10] = { .set = { {1, -6}, {-3, -2}, {1, -2}, {-1, -4} } },
	[11] = { .set = { {1, -6}, {0, -3}, {1, -2}, {-1, -4} } },
	[12] = { .set = { {-1, -7}, {1, -3}, {-3, -3}, {-1, -5} } },
	[13] = { .set = { {-2, -7}, {2, -2}, {-3, -3}, {-1, -5} } },
	[14] = { .set = { {0, -7}, {1, -3}, {-4, -2}, {-1, -5} } },
	[15] = { .set = { {-3, -7}, {0, -4}, {-3, -3}, {-1, -5} } },
	[16] = { .set = { {-3, -6}, {1, -2}, {-3, -2}, {-1, -4} } },
	[17] = { .set = { {-3, -6}, {-2, -3}, {-3, -2}, {-1, -4} } },
	[18] = { .set = { {-4, -6}, {-2, -4}, {-2, -3}, {-1, -5} } },
	[19] = { .set = { {-3, -5}, {1, -2}, {-2, -2}, {-1, -4} } },
	[20] = { .set = { {-4, -5}, {-3, -2}, {-2, -2}, {-1, -4} } },
	[21] = { .set = { {-4, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[22] = { .set = { {-3, -5}, {-1, -2}, {1, -2}, {-1, -4} } },
	[23] = { .set = { {-3, -5}, {-3, -2}, {1, -2}, {-1, -4} } },
	[24] = { .set = { {-1, -6}, {-4, -3}, {2, -3}, {-1, -5} } },
	[25] = { .set = { {-1, -5}, {-4, -2}, {2, -2}, {-1, -4} } },
	[26] = { .set = { {-1, -5}, {-4, -2}, {2, -2}, {-1, -4} } },
	[27] = { .set = { {2, -6}, {1, -3}, {-3, -3}, {-1, -5} } },
	[28] = { .set = { {1, -5}, {-1, -2}, {-3, -2}, {-1, -4} } },
	[29] = { .set = { {1, -5}, {1, -2}, {-3, -2}, {-1, -4} } },
	[30] = { .set = { {2, -6}, {0, -4}, {0, -3}, {-1, -5} } },
	[31] = { .set = { {1, -5}, {-3, -2}, {0, -2}, {-1, -4} } },
	[32] = { .set = { {2, -5}, {1, -2}, {0, -2}, {-1, -4} } },
	[33] = { .set = { {1, -7}, {-2, -4}, {1, -3}, {-1, -5} } },
	[34] = { .set = { {1, -6}, {-3, -2}, {1, -2}, {-1, -4} } },
	[35] = { .set = { {1, -6}, {0, -3}, {1, -2}, {-1, -4} } },
	[36] = { .set = { {-1, -7}, {1, -3}, {-3, -3}, {-1, -5} } },
	[37] = { .set = { {-2, -7}, {2, -2}, {-3, -3}, {-1, -5} } },
	[38] = { .set = { {0, -7}, {1, -3}, {-4, -2}, {-1, -5} } },
	[39] = { .set = { {-3, -7}, {0, -4}, {-3, -3}, {-1, -5} } },
	[40] = { .set = { {-3, -6}, {1, -2}, {-3, -2}, {-1, -4} } },
	[41] = { .set = { {-3, -6}, {-2, -3}, {-3, -2}, {-1, -4} } },
	[42] = { .set = { {-4, -6}, {-2, -4}, {-2, -3}, {-1, -5} } },
	[43] = { .set = { {-3, -5}, {1, -2}, {-2, -2}, {-1, -4} } },
	[44] = { .set = { {-4, -5}, {-3, -2}, {-2, -2}, {-1, -4} } },
	[45] = { .set = { {-4, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[46] = { .set = { {-3, -5}, {-1, -2}, {1, -2}, {-1, -4} } },
	[47] = { .set = { {-3, -5}, {-3, -2}, {1, -2}, {-1, -4} } },
	[48] = { .set = { {-1, -6}, {-4, -3}, {2, -3}, {-1, -5} } },
	[49] = { .set = { {-1, -5}, {-4, -2}, {2, -2}, {-1, -4} } },
	[50] = { .set = { {-1, -5}, {-4, -2}, {2, -2}, {-1, -4} } },
	[51] = { .set = { {2, -6}, {1, -3}, {-3, -3}, {-1, -5} } },
	[52] = { .set = { {1, -5}, {-1, -2}, {-3, -2}, {-1, -4} } },
	[53] = { .set = { {1, -5}, {1, -2}, {-3, -2}, {-1, -4} } },
	[54] = { .set = { {2, -6}, {0, -4}, {0, -3}, {-1, -5} } },
	[55] = { .set = { {1, -5}, {-3, -2}, {0, -2}, {-1, -4} } },
	[56] = { .set = { {2, -5}, {1, -2}, {0, -2}, {-1, -4} } },
	[57] = { .set = { {1, -7}, {-2, -4}, {1, -3}, {-1, -5} } },
	[58] = { .set = { {1, -6}, {-3, -2}, {1, -2}, {-1, -4} } },
	[59] = { .set = { {1, -6}, {0, -3}, {1, -2}, {-1, -4} } },
	[60] = { .set = { {-1, -7}, {1, -3}, {-3, -3}, {-1, -5} } },
	[61] = { .set = { {-2, -7}, {2, -2}, {-3, -3}, {-1, -5} } },
	[62] = { .set = { {0, -7}, {1, -3}, {-4, -2}, {-1, -5} } },
	[63] = { .set = { {-3, -7}, {0, -4}, {-3, -3}, {-1, -5} } },
	[64] = { .set = { {-3, -6}, {1, -2}, {-3, -2}, {-1, -4} } },
	[65] = { .set = { {-3, -6}, {-2, -3}, {-3, -2}, {-1, -4} } },
	[66] = { .set = { {-4, -6}, {-2, -4}, {-2, -3}, {-1, -5} } },
	[67] = { .set = { {-3, -5}, {1, -2}, {-2, -2}, {-1, -4} } },
	[68] = { .set = { {-4, -5}, {-3, -2}, {-2, -2}, {-1, -4} } },
	[69] = { .set = { {-4, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[70] = { .set = { {-3, -5}, {-1, -2}, {1, -2}, {-1, -4} } },
	[71] = { .set = { {-3, -5}, {-3, -2}, {1, -2}, {-1, -4} } },
	[72] = { .set = { {-1, -7}, {-3, -6}, {1, -6}, {-1, -5} } },
	[73] = { .set = { {-4, -8}, {-5, -7}, {-2, -7}, {-1, -7} } },
	[74] = { .set = { {-4, -8}, {-5, -9}, {-5, -7}, {-2, -6} } },
	[75] = { .set = { {-3, -9}, {0, -9}, {-5, -7}, {-2, -6} } },
	[76] = { .set = { {-1, -9}, {1, -8}, {-3, -8}, {-1, -5} } },
	[77] = { .set = { {1, -9}, {-2, -9}, {3, -7}, {0, -6} } },
	[78] = { .set = { {2, -8}, {3, -9}, {3, -7}, {0, -6} } },
	[79] = { .set = { {2, -8}, {3, -7}, {0, -7}, {-1, -7} } },
	[80] = { .set = { {-1, -7}, {-3, -6}, {1, -6}, {-1, -5} } },
	[81] = { .set = { {-4, -7}, {-5, -6}, {-2, -6}, {-1, -6} } },
	[82] = { .set = { {-4, -7}, {-5, -8}, {-5, -6}, {-2, -5} } },
	[83] = { .set = { {-3, -8}, {0, -8}, {-5, -6}, {-2, -5} } },
	[84] = { .set = { {-1, -8}, {1, -7}, {-3, -7}, {-1, -4} } },
	[85] = { .set = { {1, -8}, {-2, -8}, {3, -6}, {0, -5} } },
	[86] = { .set = { {2, -7}, {3, -8}, {3, -6}, {0, -5} } },
	[87] = { .set = { {2, -7}, {3, -6}, {0, -6}, {-1, -6} } },
	[88] = { .set = { {-4, -5}, {-3, -2}, {1, -2}, {-1, -4} } },
	[89] = { .set = { {-5, -4}, {-3, -2}, {1, -1}, {-2, -3} } },
	[90] = { .set = { {0, -9}, {-3, -9}, {3, -9}, {0, -7} } },
	[91] = { .set = { {1, -9}, {2, -9}, {-2, -8}, {0, -6} } },
	[92] = { .set = { {2, -8}, {1, -10}, {1, -7}, {0, -5} } },
	[93] = { .set = { {1, -10}, {-2, -10}, {3, -8}, {0, -6} } },
	[94] = { .set = { {0, -8}, {3, -8}, {-3, -8}, {0, -5} } },
	[95] = { .set = { {-2, -10}, {1, -10}, {-4, -8}, {-1, -6} } },
	[96] = { .set = { {-4, -6}, {-3, -8}, {-3, -5}, {-2, -3} } },
	[97] = { .set = { {-2, -9}, {-3, -9}, {1, -8}, {-1, -6} } },
	[98] = { .set = { {-1, -6}, {-4, -3}, {2, -3}, {-1, -5} } },
	[99] = { .set = { {-1, -7}, {-3, -6}, {1, -6}, {-1, -5} } },
	[100] = { .set = { {2, -6}, {1, -3}, {-3, -3}, {-1, -5} } },
	[101] = { .set = { {1, -7}, {2, -6}, {-1, -6}, {-2, -6} } },
	[102] = { .set = { {2, -6}, {0, -4}, {0, -3}, {-1, -5} } },
	[103] = { .set = { {0, -7}, {1, -8}, {1, -6}, {-2, -5} } },
	[104] = { .set = { {1, -7}, {-2, -4}, {1, -3}, {-1, -5} } },
	[105] = { .set = { {0, -8}, {-3, -8}, {2, -6}, {-1, -5} } },
	[106] = { .set = { {-1, -7}, {1, -3}, {-3, -3}, {-1, -5} } },
	[107] = { .set = { {-1, -8}, {1, -7}, {-3, -7}, {-1, -4} } },
	[108] = { .set = { {-3, -7}, {0, -4}, {-3, -3}, {-1, -5} } },
	[109] = { .set = { {-2, -8}, {1, -8}, {-4, -6}, {-1, -5} } },
	[110] = { .set = { {-4, -6}, {-2, -4}, {-2, -3}, {-1, -5} } },
	[111] = { .set = { {-2, -7}, {-3, -8}, {-3, -6}, {0, -5} } },
	[112] = { .set = { {-4, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[113] = { .set = { {-3, -7}, {-4, -6}, {-1, -6}, {0, -6} } },
	[114] = { .set = { {-1, -6}, {-4, -3}, {2, -3}, {-1, -5} } },
	[115] = { .set = { {-4, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[116] = { .set = { {-4, -6}, {-2, -4}, {-2, -3}, {-1, -5} } },
	[117] = { .set = { {-3, -7}, {0, -4}, {-3, -3}, {-1, -5} } },
	[118] = { .set = { {-1, -7}, {1, -3}, {-3, -3}, {-1, -5} } },
	[119] = { .set = { {1, -7}, {-2, -4}, {1, -3}, {-1, -5} } },
	[120] = { .set = { {2, -6}, {0, -4}, {0, -3}, {-1, -5} } },
	[121] = { .set = { {2, -6}, {1, -3}, {-3, -3}, {-1, -5} } },
	[122] = { .set = { {-1, -7}, {-3, -6}, {1, -6}, {-1, -5} } },
	[123] = { .set = { {2, -8}, {3, -7}, {0, -7}, {-1, -7} } },
	[124] = { .set = { {2, -8}, {3, -9}, {3, -7}, {0, -6} } },
	[125] = { .set = { {1, -9}, {-2, -9}, {3, -7}, {0, -6} } },
	[126] = { .set = { {-1, -9}, {1, -8}, {-3, -8}, {-1, -5} } },
	[127] = { .set = { {-3, -9}, {0, -9}, {-5, -7}, {-2, -6} } },
	[128] = { .set = { {-4, -8}, {-5, -9}, {-5, -7}, {-2, -6} } },
	[129] = { .set = { {-4, -8}, {-5, -7}, {-2, -7}, {-1, -7} } },
	[130] = { .set = { {-1, -6}, {-4, -3}, {2, -3}, {-1, -5} } },
	[131] = { .set = { {-1, -7}, {-3, -6}, {1, -6}, {-1, -5} } },
	[132] = { .set = { {2, -6}, {1, -3}, {-3, -3}, {-1, -5} } },
	[133] = { .set = { {1, -7}, {2, -6}, {-1, -6}, {-2, -6} } },
	[134] = { .set = { {2, -6}, {0, -4}, {0, -3}, {-1, -5} } },
	[135] = { .set = { {1, -7}, {2, -8}, {2, -6}, {-1, -5} } },
	[136] = { .set = { {1, -7}, {-2, -4}, {1, -3}, {-1, -5} } },
	[137] = { .set = { {0, -8}, {-3, -8}, {2, -6}, {-1, -5} } },
	[138] = { .set = { {-1, -7}, {1, -3}, {-3, -3}, {-1, -5} } },
	[139] = { .set = { {-1, -8}, {1, -7}, {-3, -7}, {-1, -4} } },
	[140] = { .set = { {-3, -7}, {0, -4}, {-3, -3}, {-1, -5} } },
	[141] = { .set = { {-2, -8}, {1, -8}, {-4, -6}, {-1, -5} } },
	[142] = { .set = { {-4, -6}, {-2, -4}, {-2, -3}, {-1, -5} } },
	[143] = { .set = { {-3, -7}, {-4, -8}, {-4, -6}, {-1, -5} } },
	[144] = { .set = { {-4, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[145] = { .set = { {-3, -7}, {-4, -6}, {-1, -6}, {0, -6} } },
	[146] = { .set = { {-1, -7}, {-3, -6}, {1, -6}, {-1, -5} } },
	[147] = { .set = { {-4, -8}, {-5, -7}, {-2, -7}, {-1, -7} } },
	[148] = { .set = { {-4, -8}, {-5, -9}, {-5, -7}, {-2, -6} } },
	[149] = { .set = { {-3, -9}, {0, -9}, {-5, -7}, {-2, -6} } },
	[150] = { .set = { {-1, -9}, {1, -8}, {-3, -8}, {-1, -5} } },
	[151] = { .set = { {1, -9}, {-2, -9}, {3, -7}, {0, -6} } },
	[152] = { .set = { {2, -8}, {3, -9}, {3, -7}, {0, -6} } },
	[153] = { .set = { {2, -8}, {3, -7}, {0, -7}, {-1, -7} } },
	[154] = { .set = { {-1, -6}, {-4, -3}, {2, -3}, {-1, -5} } },
	[155] = { .set = { {-4, -6}, {-3, -3}, {1, -3}, {-1, -5} } },
	[156] = { .set = { {-4, -6}, {-2, -4}, {-2, -3}, {-1, -5} } },
	[157] = { .set = { {-3, -7}, {0, -4}, {-3, -3}, {-1, -5} } },
	[158] = { .set = { {-1, -7}, {1, -3}, {-3, -3}, {-1, -5} } },
	[159] = { .set = { {1, -7}, {-2, -4}, {1, -3}, {-1, -5} } },
	[160] = { .set = { {2, -6}, {0, -4}, {0, -3}, {-1, -5} } },
	[161] = { .set = { {2, -6}, {1, -3}, {-3, -3}, {-1, -5} } },
};

static const ax_anim *const sRaltsAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_00039),
	AX_ANIM_PTR(gAxSharedAnim_00083),
	AX_ANIM_PTR(gAxSharedAnim_00088),
	AX_ANIM_PTR(gAxSharedAnim_00093),
	AX_ANIM_PTR(gAxSharedAnim_00044),
	AX_ANIM_PTR(gAxSharedAnim_00058),
	AX_ANIM_PTR(gAxSharedAnim_00064),
	AX_ANIM_PTR(gAxSharedAnim_00069),
};

static const ax_anim *const sRaltsAnimTable2[] = {
	AX_ANIM_PTR(sRaltsAnims_2_1),
	AX_ANIM_PTR(sRaltsAnims_2_2),
	AX_ANIM_PTR(sRaltsAnims_2_3),
	AX_ANIM_PTR(sRaltsAnims_2_4),
	AX_ANIM_PTR(sRaltsAnims_2_5),
	AX_ANIM_PTR(sRaltsAnims_2_6),
	AX_ANIM_PTR(sRaltsAnims_2_7),
	AX_ANIM_PTR(sRaltsAnims_2_8),
};

static const ax_anim *const sRaltsAnimTable3[] = {
	AX_ANIM_PTR(sRaltsAnims_3_1),
	AX_ANIM_PTR(sRaltsAnims_3_2),
	AX_ANIM_PTR(sRaltsAnims_3_3),
	AX_ANIM_PTR(sRaltsAnims_3_4),
	AX_ANIM_PTR(sRaltsAnims_3_5),
	AX_ANIM_PTR(sRaltsAnims_3_6),
	AX_ANIM_PTR(sRaltsAnims_3_7),
	AX_ANIM_PTR(sRaltsAnims_3_8),
};

static const ax_anim *const sRaltsAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02094),
	AX_ANIM_PTR(gAxSharedAnim_02142),
	AX_ANIM_PTR(gAxSharedAnim_02128),
	AX_ANIM_PTR(gAxSharedAnim_02124),
	AX_ANIM_PTR(gAxSharedAnim_02122),
	AX_ANIM_PTR(gAxSharedAnim_02113),
	AX_ANIM_PTR(gAxSharedAnim_02101),
	AX_ANIM_PTR(gAxSharedAnim_02095),
};

static const ax_anim *const sRaltsAnimTable5[] = {
	AX_ANIM_PTR(sRaltsAnims_5_1),
	AX_ANIM_PTR(sRaltsAnims_5_2),
	AX_ANIM_PTR(sRaltsAnims_5_3),
	AX_ANIM_PTR(sRaltsAnims_5_4),
	AX_ANIM_PTR(sRaltsAnims_5_5),
	AX_ANIM_PTR(sRaltsAnims_5_6),
	AX_ANIM_PTR(sRaltsAnims_5_7),
	AX_ANIM_PTR(sRaltsAnims_5_8),
};

static const ax_anim *const sRaltsAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
};

static const ax_anim *const sRaltsAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_02235),
	AX_ANIM_PTR(gAxSharedAnim_02243),
	AX_ANIM_PTR(gAxSharedAnim_02255),
	AX_ANIM_PTR(gAxSharedAnim_02264),
	AX_ANIM_PTR(gAxSharedAnim_02278),
	AX_ANIM_PTR(gAxSharedAnim_02289),
	AX_ANIM_PTR(gAxSharedAnim_02295),
	AX_ANIM_PTR(gAxSharedAnim_02302),
};

static const ax_anim *const sRaltsAnimTable8[] = {
	AX_ANIM_PTR(sRaltsAnims_8_1),
	AX_ANIM_PTR(sRaltsAnims_8_2),
	AX_ANIM_PTR(sRaltsAnims_8_3),
	AX_ANIM_PTR(sRaltsAnims_8_4),
	AX_ANIM_PTR(sRaltsAnims_8_5),
	AX_ANIM_PTR(sRaltsAnims_8_6),
	AX_ANIM_PTR(sRaltsAnims_8_7),
	AX_ANIM_PTR(sRaltsAnims_8_8),
};

static const ax_anim *const sRaltsAnimTable9[] = {
	AX_ANIM_PTR(sRaltsAnims_9_1),
	AX_ANIM_PTR(sRaltsAnims_9_2),
	AX_ANIM_PTR(sRaltsAnims_9_3),
	AX_ANIM_PTR(sRaltsAnims_9_4),
	AX_ANIM_PTR(sRaltsAnims_9_5),
	AX_ANIM_PTR(sRaltsAnims_9_6),
	AX_ANIM_PTR(sRaltsAnims_9_7),
	AX_ANIM_PTR(sRaltsAnims_9_8),
};

static const ax_anim *const sRaltsAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00335),
	AX_ANIM_PTR(gAxSharedAnim_00343),
	AX_ANIM_PTR(gAxSharedAnim_00353),
	AX_ANIM_PTR(gAxSharedAnim_00359),
	AX_ANIM_PTR(gAxSharedAnim_00365),
	AX_ANIM_PTR(gAxSharedAnim_00374),
	AX_ANIM_PTR(gAxSharedAnim_00379),
	AX_ANIM_PTR(gAxSharedAnim_00388),
};

static const ax_anim *const sRaltsAnimTable11[] = {
	AX_ANIM_PTR(sRaltsAnims_11_1),
	AX_ANIM_PTR(sRaltsAnims_11_2),
	AX_ANIM_PTR(sRaltsAnims_11_3),
	AX_ANIM_PTR(sRaltsAnims_11_4),
	AX_ANIM_PTR(gAxSharedAnim_00468),
	AX_ANIM_PTR(sRaltsAnims_11_6),
	AX_ANIM_PTR(sRaltsAnims_11_7),
	AX_ANIM_PTR(sRaltsAnims_11_8),
};

static const ax_anim *const sRaltsAnimTable12[] = {
	AX_ANIM_PTR(sRaltsAnims_12_1),
	AX_ANIM_PTR(sRaltsAnims_12_2),
	AX_ANIM_PTR(sRaltsAnims_12_3),
	AX_ANIM_PTR(sRaltsAnims_12_4),
	AX_ANIM_PTR(sRaltsAnims_12_5),
	AX_ANIM_PTR(sRaltsAnims_12_6),
	AX_ANIM_PTR(sRaltsAnims_12_7),
	AX_ANIM_PTR(sRaltsAnims_12_8),
};

static const ax_anim *const sRaltsAnimTable13[] = {
	AX_ANIM_PTR(sRaltsAnims_13_1),
	AX_ANIM_PTR(sRaltsAnims_13_2),
	AX_ANIM_PTR(sRaltsAnims_13_3),
	AX_ANIM_PTR(sRaltsAnims_13_4),
	AX_ANIM_PTR(sRaltsAnims_13_5),
	AX_ANIM_PTR(sRaltsAnims_13_6),
	AX_ANIM_PTR(sRaltsAnims_13_7),
	AX_ANIM_PTR(sRaltsAnims_13_8),
};

static const ax_anim *const *const sAxAnimationsRalts[] = {
	sRaltsAnimTable1,
	sRaltsAnimTable2,
	sRaltsAnimTable3,
	sRaltsAnimTable4,
	sRaltsAnimTable5,
	sRaltsAnimTable6,
	sRaltsAnimTable7,
	sRaltsAnimTable8,
	sRaltsAnimTable9,
	sRaltsAnimTable10,
	sRaltsAnimTable11,
	sRaltsAnimTable12,
	sRaltsAnimTable13,
};

static const ax_sprite *const sAxSpritesRalts[] = {
	sRaltsSprites1,
	sRaltsSprites2,
	sRaltsSprites3,
	sRaltsSprites4,
	sRaltsSprites5,
	sRaltsSprites6,
	sRaltsSprites7,
	sRaltsSprites8,
	sRaltsSprites9,
	sRaltsSprites10,
	sRaltsSprites11,
	sRaltsSprites12,
	sRaltsSprites13,
	sRaltsSprites14,
	sRaltsSprites15,
	sRaltsSprites16,
	sRaltsSprites17,
	sRaltsSprites18,
	sRaltsSprites19,
	sRaltsSprites20,
	sRaltsSprites21,
	sRaltsSprites22,
	sRaltsSprites23,
	sRaltsSprites24,
	sRaltsSprites25,
	sRaltsSprites26,
	sRaltsSprites27,
};

static const axmain sAxMainRalts = {
	.poses = sAxPosesRalts,
	.animations = sAxAnimationsRalts,
	.animCount = ARRAY_COUNT(sAxAnimationsRalts),
	.spriteData = sAxSpritesRalts,
	.positions = sAxPositionsRalts,
};
