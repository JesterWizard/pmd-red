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
#include "ax_shared_anims.h"
static const axmain sAxMainKirlia;
const SiroArchive gAxKirlia = {"SIRO", &sAxMainKirlia};

static const ax_pose sKirliaPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose5[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose6[] = {
	AX_POSE(3, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose7[] = {
	AX_POSE(2, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose8[] = {
	AX_POSE(1, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose9[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose10[] = {
	AX_POSE(6, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose11[] = {
	AX_POSE(7, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose12[] = {
	AX_POSE(8, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose13[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose14[] = {
	AX_POSE(8, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose15[] = {
	AX_POSE(7, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose16[] = {
	AX_POSE(6, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose17[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose18[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose19[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose20[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose21[] = {
	AX_POSE(13, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose22[] = {
	AX_POSE(14, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose23[] = {
	AX_POSE(6, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose24[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose25[] = {
	AX_POSE(16, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose26[] = {
	AX_POSE(17, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose27[] = {
	AX_POSE(7, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose28[] = {
	AX_POSE(18, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose29[] = {
	AX_POSE(19, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose30[] = {
	AX_POSE(20, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose31[] = {
	AX_POSE(8, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose32[] = {
	AX_POSE(21, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose33[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose34[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose35[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose36[] = {
	AX_POSE(24, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose37[] = {
	AX_POSE(19, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose38[] = {
	AX_POSE(20, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose39[] = {
	AX_POSE(8, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose40[] = {
	AX_POSE(21, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose41[] = {
	AX_POSE(16, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose42[] = {
	AX_POSE(17, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose43[] = {
	AX_POSE(7, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose44[] = {
	AX_POSE(18, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose45[] = {
	AX_POSE(13, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose46[] = {
	AX_POSE(14, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose47[] = {
	AX_POSE(6, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose48[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose105[] = {
	AX_POSE(25, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose106[] = {
	AX_POSE(26, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose107[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose108[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose109[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose110[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose111[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose112[] = {
	AX_POSE(30, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose113[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose114[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose131[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose132[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose133[] = {
	AX_POSE(18, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose134[] = {
	AX_POSE(21, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose138[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose152[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose155[] = {
	AX_POSE(18, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose158[] = {
	AX_POSE(21, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose164[] = {
	AX_POSE(21, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose167[] = {
	AX_POSE(18, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKirliaPose170[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const u8 sKirliaAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_1_1.lz");
static const u8 sKirliaAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_1_2.lz");
static const u8 sKirliaAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_1_3.lz");
static const u8 sKirliaAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_1_4.lz");
static const u8 sKirliaAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_1_5.lz");
static const u8 sKirliaAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_1_6.lz");
static const u8 sKirliaAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_1_7.lz");
static const u8 sKirliaAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_1_8.lz");
static const u8 sKirliaAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_2_1.lz");
static const u8 sKirliaAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_2_2.lz");
static const u8 sKirliaAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_2_3.lz");
static const u8 sKirliaAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_2_4.lz");
static const u8 sKirliaAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_2_5.lz");
static const u8 sKirliaAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_2_6.lz");
static const u8 sKirliaAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_2_7.lz");
static const u8 sKirliaAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_2_8.lz");
static const u8 sKirliaAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_3_1.lz");
static const u8 sKirliaAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_3_2.lz");
static const u8 sKirliaAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_3_3.lz");
static const u8 sKirliaAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_3_4.lz");
static const u8 sKirliaAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_3_5.lz");
static const u8 sKirliaAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_3_6.lz");
static const u8 sKirliaAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_3_7.lz");
static const u8 sKirliaAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_3_8.lz");
static const u8 sKirliaAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_5_1.lz");
static const u8 sKirliaAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_5_2.lz");
static const u8 sKirliaAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_5_3.lz");
static const u8 sKirliaAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_5_4.lz");
static const u8 sKirliaAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_5_5.lz");
static const u8 sKirliaAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_5_6.lz");
static const u8 sKirliaAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_5_7.lz");
static const u8 sKirliaAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_5_8.lz");
static const u8 sKirliaAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_8_1.lz");
static const u8 sKirliaAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_8_2.lz");
static const u8 sKirliaAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_8_3.lz");
static const u8 sKirliaAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_8_4.lz");
static const u8 sKirliaAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_8_5.lz");
static const u8 sKirliaAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_8_6.lz");
static const u8 sKirliaAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_8_7.lz");
static const u8 sKirliaAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_8_8.lz");
static const u8 sKirliaAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_9_1.lz");
static const u8 sKirliaAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_9_2.lz");
static const u8 sKirliaAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_9_3.lz");
static const u8 sKirliaAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_9_4.lz");
static const u8 sKirliaAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_9_5.lz");
static const u8 sKirliaAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_9_6.lz");
static const u8 sKirliaAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_9_7.lz");
static const u8 sKirliaAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_9_8.lz");
static const u8 sKirliaAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_11_1.lz");
static const u8 sKirliaAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_11_2.lz");
static const u8 sKirliaAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_11_3.lz");
static const u8 sKirliaAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_11_4.lz");
static const u8 sKirliaAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_11_5.lz");
static const u8 sKirliaAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_11_6.lz");
static const u8 sKirliaAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_11_7.lz");
static const u8 sKirliaAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/kirlia/sKirliaAnims_11_8.lz");

static const u8 sKirliaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_1.4bpp.lz");
static const ax_sprite sKirliaSprites1[] = {
	{sKirliaGfx1, ARRAY_COUNT(sKirliaGfx1)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_2.4bpp.lz");
static const ax_sprite sKirliaSprites2[] = {
	{sKirliaGfx2, ARRAY_COUNT(sKirliaGfx2)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_3.4bpp.lz");
static const ax_sprite sKirliaSprites3[] = {
	{sKirliaGfx3, ARRAY_COUNT(sKirliaGfx3)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_4.4bpp.lz");
static const ax_sprite sKirliaSprites4[] = {
	{sKirliaGfx4, ARRAY_COUNT(sKirliaGfx4)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_5.4bpp.lz");
static const ax_sprite sKirliaSprites5[] = {
	{sKirliaGfx5, ARRAY_COUNT(sKirliaGfx5)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_6.4bpp.lz");
static const ax_sprite sKirliaSprites6[] = {
	{sKirliaGfx6, ARRAY_COUNT(sKirliaGfx6)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_7.4bpp.lz");
static const ax_sprite sKirliaSprites7[] = {
	{sKirliaGfx7, ARRAY_COUNT(sKirliaGfx7)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_8.4bpp.lz");
static const ax_sprite sKirliaSprites8[] = {
	{sKirliaGfx8, ARRAY_COUNT(sKirliaGfx8)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_9.4bpp.lz");
static const ax_sprite sKirliaSprites9[] = {
	{sKirliaGfx9, ARRAY_COUNT(sKirliaGfx9)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_10.4bpp.lz");
static const ax_sprite sKirliaSprites10[] = {
	{sKirliaGfx10, ARRAY_COUNT(sKirliaGfx10)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_11.4bpp.lz");
static const u8 sKirliaGfx11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_11_1.4bpp.lz");
static const u8 sKirliaGfx11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_11_2.4bpp.lz");
static const ax_sprite sKirliaSprites11[] = {
	{NULL, 32}, 
	{sKirliaGfx11, ARRAY_COUNT(sKirliaGfx11)}, 
	{NULL, 32}, 
	{sKirliaGfx11_1, ARRAY_COUNT(sKirliaGfx11_1)}, 
	{NULL, 64}, 
	{sKirliaGfx11_2, ARRAY_COUNT(sKirliaGfx11_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKirliaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_12.4bpp.lz");
static const u8 sKirliaGfx12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_12_1.4bpp.lz");
static const u8 sKirliaGfx12_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_12_2.4bpp.lz");
static const ax_sprite sKirliaSprites12[] = {
	{NULL, 32}, 
	{sKirliaGfx12, ARRAY_COUNT(sKirliaGfx12)}, 
	{NULL, 32}, 
	{sKirliaGfx12_1, ARRAY_COUNT(sKirliaGfx12_1)}, 
	{NULL, 64}, 
	{sKirliaGfx12_2, ARRAY_COUNT(sKirliaGfx12_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKirliaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_13.4bpp.lz");
static const u8 sKirliaGfx13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_13_1.4bpp.lz");
static const u8 sKirliaGfx13_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_13_2.4bpp.lz");
static const ax_sprite sKirliaSprites13[] = {
	{sKirliaGfx13, ARRAY_COUNT(sKirliaGfx13)}, 
	{NULL, 32}, 
	{sKirliaGfx13_1, ARRAY_COUNT(sKirliaGfx13_1)}, 
	{NULL, 64}, 
	{sKirliaGfx13_2, ARRAY_COUNT(sKirliaGfx13_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKirliaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_14.4bpp.lz");
static const ax_sprite sKirliaSprites14[] = {
	{sKirliaGfx14, ARRAY_COUNT(sKirliaGfx14)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKirliaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_15.4bpp.lz");
static const ax_sprite sKirliaSprites15[] = {
	{sKirliaGfx15, ARRAY_COUNT(sKirliaGfx15)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKirliaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_16.4bpp.lz");
static const u8 sKirliaGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_16_1.4bpp.lz");
static const u8 sKirliaGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_16_2.4bpp.lz");
static const ax_sprite sKirliaSprites16[] = {
	{sKirliaGfx16, ARRAY_COUNT(sKirliaGfx16)}, 
	{NULL, 64}, 
	{sKirliaGfx16_1, ARRAY_COUNT(sKirliaGfx16_1)}, 
	{NULL, 32}, 
	{sKirliaGfx16_2, ARRAY_COUNT(sKirliaGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKirliaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_17.4bpp.lz");
static const ax_sprite sKirliaSprites17[] = {
	{sKirliaGfx17, ARRAY_COUNT(sKirliaGfx17)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKirliaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_18.4bpp.lz");
static const ax_sprite sKirliaSprites18[] = {
	{sKirliaGfx18, ARRAY_COUNT(sKirliaGfx18)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKirliaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_19.4bpp.lz");
static const ax_sprite sKirliaSprites19[] = {
	{sKirliaGfx19, ARRAY_COUNT(sKirliaGfx19)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKirliaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_20.4bpp.lz");
static const ax_sprite sKirliaSprites20[] = {
	{sKirliaGfx20, ARRAY_COUNT(sKirliaGfx20)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKirliaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_21.4bpp.lz");
static const ax_sprite sKirliaSprites21[] = {
	{sKirliaGfx21, ARRAY_COUNT(sKirliaGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKirliaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_22.4bpp.lz");
static const ax_sprite sKirliaSprites22[] = {
	{sKirliaGfx22, ARRAY_COUNT(sKirliaGfx22)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKirliaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_23.4bpp.lz");
static const u8 sKirliaGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_23_1.4bpp.lz");
static const u8 sKirliaGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_23_2.4bpp.lz");
static const ax_sprite sKirliaSprites23[] = {
	{NULL, 32}, 
	{sKirliaGfx23, ARRAY_COUNT(sKirliaGfx23)}, 
	{NULL, 32}, 
	{sKirliaGfx23_1, ARRAY_COUNT(sKirliaGfx23_1)}, 
	{NULL, 64}, 
	{sKirliaGfx23_2, ARRAY_COUNT(sKirliaGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKirliaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_24.4bpp.lz");
static const u8 sKirliaGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_24_1.4bpp.lz");
static const u8 sKirliaGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_24_2.4bpp.lz");
static const ax_sprite sKirliaSprites24[] = {
	{NULL, 32}, 
	{sKirliaGfx24, ARRAY_COUNT(sKirliaGfx24)}, 
	{NULL, 32}, 
	{sKirliaGfx24_1, ARRAY_COUNT(sKirliaGfx24_1)}, 
	{NULL, 64}, 
	{sKirliaGfx24_2, ARRAY_COUNT(sKirliaGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKirliaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_25.4bpp.lz");
static const u8 sKirliaGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_25_1.4bpp.lz");
static const u8 sKirliaGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_25_2.4bpp.lz");
static const ax_sprite sKirliaSprites25[] = {
	{NULL, 32}, 
	{sKirliaGfx25, ARRAY_COUNT(sKirliaGfx25)}, 
	{NULL, 32}, 
	{sKirliaGfx25_1, ARRAY_COUNT(sKirliaGfx25_1)}, 
	{NULL, 64}, 
	{sKirliaGfx25_2, ARRAY_COUNT(sKirliaGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKirliaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_26.4bpp.lz");
static const ax_sprite sKirliaSprites26[] = {
	{sKirliaGfx26, ARRAY_COUNT(sKirliaGfx26)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_27.4bpp.lz");
static const ax_sprite sKirliaSprites27[] = {
	{sKirliaGfx27, ARRAY_COUNT(sKirliaGfx27)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_28.4bpp.lz");
static const ax_sprite sKirliaSprites28[] = {
	{sKirliaGfx28, ARRAY_COUNT(sKirliaGfx28)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_29.4bpp.lz");
static const ax_sprite sKirliaSprites29[] = {
	{sKirliaGfx29, ARRAY_COUNT(sKirliaGfx29)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_30.4bpp.lz");
static const ax_sprite sKirliaSprites30[] = {
	{sKirliaGfx30, ARRAY_COUNT(sKirliaGfx30)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_31.4bpp.lz");
static const ax_sprite sKirliaSprites31[] = {
	{sKirliaGfx31, ARRAY_COUNT(sKirliaGfx31)}, 
	{NULL, 0}
};
static const u8 sKirliaGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kirlia/sprite_32.4bpp.lz");
static const ax_sprite sKirliaSprites32[] = {
	{sKirliaGfx32, ARRAY_COUNT(sKirliaGfx32)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesKirlia[] = {
	sKirliaPose1,
	sKirliaPose2,
	sKirliaPose3,
	sKirliaPose4,
	sKirliaPose5,
	sKirliaPose6,
	sKirliaPose7,
	sKirliaPose8,
	sKirliaPose9,
	sKirliaPose10,
	sKirliaPose11,
	sKirliaPose12,
	sKirliaPose13,
	sKirliaPose14,
	sKirliaPose15,
	sKirliaPose16,
	sKirliaPose17,
	sKirliaPose18,
	sKirliaPose19,
	sKirliaPose20,
	sKirliaPose21,
	sKirliaPose22,
	sKirliaPose23,
	sKirliaPose24,
	sKirliaPose25,
	sKirliaPose26,
	sKirliaPose27,
	sKirliaPose28,
	sKirliaPose29,
	sKirliaPose30,
	sKirliaPose31,
	sKirliaPose32,
	sKirliaPose33,
	sKirliaPose34,
	sKirliaPose35,
	sKirliaPose36,
	sKirliaPose37,
	sKirliaPose38,
	sKirliaPose39,
	sKirliaPose40,
	sKirliaPose41,
	sKirliaPose42,
	sKirliaPose43,
	sKirliaPose44,
	sKirliaPose45,
	sKirliaPose46,
	sKirliaPose47,
	sKirliaPose48,
	sKirliaPose17,
	sKirliaPose18,
	sKirliaPose19,
	sKirliaPose20,
	sKirliaPose21,
	sKirliaPose22,
	sKirliaPose23,
	sKirliaPose24,
	sKirliaPose25,
	sKirliaPose26,
	sKirliaPose27,
	sKirliaPose28,
	sKirliaPose29,
	sKirliaPose30,
	sKirliaPose31,
	sKirliaPose32,
	sKirliaPose33,
	sKirliaPose34,
	sKirliaPose35,
	sKirliaPose36,
	sKirliaPose37,
	sKirliaPose38,
	sKirliaPose39,
	sKirliaPose40,
	sKirliaPose41,
	sKirliaPose42,
	sKirliaPose43,
	sKirliaPose44,
	sKirliaPose45,
	sKirliaPose46,
	sKirliaPose47,
	sKirliaPose48,
	sKirliaPose17,
	sKirliaPose45,
	sKirliaPose41,
	sKirliaPose37,
	sKirliaPose33,
	sKirliaPose29,
	sKirliaPose25,
	sKirliaPose21,
	sKirliaPose17,
	sKirliaPose45,
	sKirliaPose41,
	sKirliaPose37,
	sKirliaPose33,
	sKirliaPose29,
	sKirliaPose25,
	sKirliaPose21,
	sKirliaPose18,
	sKirliaPose46,
	sKirliaPose42,
	sKirliaPose38,
	sKirliaPose34,
	sKirliaPose30,
	sKirliaPose26,
	sKirliaPose22,
	sKirliaPose105,
	sKirliaPose106,
	sKirliaPose107,
	sKirliaPose108,
	sKirliaPose109,
	sKirliaPose110,
	sKirliaPose111,
	sKirliaPose112,
	sKirliaPose113,
	sKirliaPose114,
	sKirliaPose17,
	sKirliaPose45,
	sKirliaPose41,
	sKirliaPose37,
	sKirliaPose33,
	sKirliaPose29,
	sKirliaPose25,
	sKirliaPose21,
	sKirliaPose18,
	sKirliaPose46,
	sKirliaPose42,
	sKirliaPose38,
	sKirliaPose34,
	sKirliaPose30,
	sKirliaPose26,
	sKirliaPose22,
	sKirliaPose131,
	sKirliaPose132,
	sKirliaPose133,
	sKirliaPose134,
	sKirliaPose36,
	sKirliaPose32,
	sKirliaPose28,
	sKirliaPose138,
	sKirliaPose18,
	sKirliaPose22,
	sKirliaPose26,
	sKirliaPose30,
	sKirliaPose34,
	sKirliaPose38,
	sKirliaPose42,
	sKirliaPose46,
	sKirliaPose1,
	sKirliaPose17,
	sKirliaPose20,
	sKirliaPose8,
	sKirliaPose21,
	sKirliaPose152,
	sKirliaPose7,
	sKirliaPose25,
	sKirliaPose155,
	sKirliaPose6,
	sKirliaPose29,
	sKirliaPose158,
	sKirliaPose5,
	sKirliaPose33,
	sKirliaPose36,
	sKirliaPose4,
	sKirliaPose37,
	sKirliaPose164,
	sKirliaPose3,
	sKirliaPose41,
	sKirliaPose167,
	sKirliaPose2,
	sKirliaPose45,
	sKirliaPose170,
	sKirliaPose17,
	sKirliaPose45,
	sKirliaPose41,
	sKirliaPose37,
	sKirliaPose33,
	sKirliaPose29,
	sKirliaPose25,
	sKirliaPose21,
	sKirliaPose1,
	sKirliaPose2,
	sKirliaPose3,
	sKirliaPose4,
	sKirliaPose5,
	sKirliaPose6,
	sKirliaPose7,
	sKirliaPose8,
};

static const struct PositionSets sAxPositionsKirlia[] = {
	[0] = { .set = { {-1, -10}, {-2, -6}, {0, -6}, {-1, -9} } },
	[1] = { .set = { {-4, -10}, {-4, -7}, {-2, -6}, {-2, -9} } },
	[2] = { .set = { {-5, -10}, {-4, -7}, {-3, -6}, {-2, -9} } },
	[3] = { .set = { {-3, -11}, {-1, -8}, {-3, -6}, {-1, -10} } },
	[4] = { .set = { {-1, -11}, {4, -8}, {-6, -8}, {-1, -10} } },
	[5] = { .set = { {1, -11}, {-1, -8}, {1, -6}, {-1, -10} } },
	[6] = { .set = { {3, -10}, {2, -7}, {1, -6}, {0, -9} } },
	[7] = { .set = { {2, -10}, {2, -7}, {0, -6}, {0, -9} } },
	[8] = { .set = { {-1, -10}, {-5, -7}, {3, -7}, {-1, -9} } },
	[9] = { .set = { {-3, -10}, {-6, -6}, {4, -6}, {-1, -9} } },
	[10] = { .set = { {-4, -10}, {-6, -6}, {3, -5}, {-1, -9} } },
	[11] = { .set = { {-2, -11}, {4, -8}, {-6, -7}, {0, -10} } },
	[12] = { .set = { {-1, -11}, {4, -7}, {-6, -7}, {-1, -10} } },
	[13] = { .set = { {1, -11}, {-5, -8}, {5, -7}, {-1, -10} } },
	[14] = { .set = { {3, -10}, {5, -6}, {-4, -5}, {0, -9} } },
	[15] = { .set = { {2, -10}, {5, -6}, {-5, -6}, {0, -9} } },
	[16] = { .set = { {-1, -10}, {-6, -7}, {4, -7}, {-1, -9} } },
	[17] = { .set = { {-1, -9}, {-5, -6}, {3, -6}, {-1, -8} } },
	[18] = { .set = { {-1, -9}, {-5, -6}, {3, -6}, {-1, -8} } },
	[19] = { .set = { {-1, -8}, {-7, -7}, {5, -7}, {-1, -7} } },
	[20] = { .set = { {2, -10}, {5, -7}, {-4, -6}, {0, -9} } },
	[21] = { .set = { {2, -9}, {2, -6}, {-1, -4}, {0, -8} } },
	[22] = { .set = { {2, -9}, {5, -5}, {-5, -5}, {0, -8} } },
	[23] = { .set = { {4, -8}, {4, -7}, {-4, -7}, {1, -8} } },
	[24] = { .set = { {3, -10}, {1, -7}, {2, -4}, {0, -9} } },
	[25] = { .set = { {3, -9}, {-2, -6}, {4, -5}, {0, -8} } },
	[26] = { .set = { {3, -9}, {5, -5}, {-4, -4}, {0, -8} } },
	[27] = { .set = { {5, -9}, {-2, -10}, {-2, -7}, {1, -9} } },
	[28] = { .set = { {1, -11}, {-4, -8}, {4, -5}, {-1, -10} } },
	[29] = { .set = { {1, -10}, {-2, -8}, {2, -3}, {-1, -9} } },
	[30] = { .set = { {1, -10}, {-5, -7}, {5, -6}, {-1, -9} } },
	[31] = { .set = { {4, -9}, {-4, -9}, {3, -6}, {0, -9} } },
	[32] = { .set = { {-1, -11}, {4, -8}, {-6, -8}, {-1, -10} } },
	[33] = { .set = { {-1, -10}, {4, -6}, {-6, -6}, {-1, -9} } },
	[34] = { .set = { {-1, -10}, {4, -6}, {-6, -6}, {-1, -9} } },
	[35] = { .set = { {-1, -11}, {5, -8}, {-7, -8}, {-1, -10} } },
	[36] = { .set = { {-3, -11}, {2, -8}, {-6, -5}, {-1, -10} } },
	[37] = { .set = { {-3, -10}, {0, -8}, {-4, -3}, {-1, -9} } },
	[38] = { .set = { {-3, -10}, {3, -7}, {-7, -6}, {-1, -9} } },
	[39] = { .set = { {-6, -9}, {2, -9}, {-5, -6}, {-2, -9} } },
	[40] = { .set = { {-5, -10}, {-3, -7}, {-4, -4}, {-2, -9} } },
	[41] = { .set = { {-5, -9}, {0, -6}, {-6, -5}, {-2, -8} } },
	[42] = { .set = { {-5, -9}, {-7, -5}, {2, -4}, {-2, -8} } },
	[43] = { .set = { {-7, -9}, {0, -10}, {0, -7}, {-3, -9} } },
	[44] = { .set = { {-4, -10}, {-7, -7}, {2, -6}, {-2, -9} } },
	[45] = { .set = { {-4, -9}, {-4, -6}, {-1, -4}, {-2, -8} } },
	[46] = { .set = { {-4, -9}, {-7, -5}, {3, -5}, {-2, -8} } },
	[47] = { .set = { {-6, -8}, {-6, -7}, {2, -7}, {-3, -8} } },
	[48] = { .set = { {-1, -10}, {-6, -7}, {4, -7}, {-1, -9} } },
	[49] = { .set = { {-1, -9}, {-5, -6}, {3, -6}, {-1, -8} } },
	[50] = { .set = { {-1, -9}, {-5, -6}, {3, -6}, {-1, -8} } },
	[51] = { .set = { {-1, -8}, {-7, -7}, {5, -7}, {-1, -7} } },
	[52] = { .set = { {2, -10}, {5, -7}, {-4, -6}, {0, -9} } },
	[53] = { .set = { {2, -9}, {2, -6}, {-1, -4}, {0, -8} } },
	[54] = { .set = { {2, -9}, {5, -5}, {-5, -5}, {0, -8} } },
	[55] = { .set = { {4, -8}, {4, -7}, {-4, -7}, {1, -8} } },
	[56] = { .set = { {3, -10}, {1, -7}, {2, -4}, {0, -9} } },
	[57] = { .set = { {3, -9}, {-2, -6}, {4, -5}, {0, -8} } },
	[58] = { .set = { {3, -9}, {5, -5}, {-4, -4}, {0, -8} } },
	[59] = { .set = { {5, -9}, {-2, -10}, {-2, -7}, {1, -9} } },
	[60] = { .set = { {1, -11}, {-4, -8}, {4, -5}, {-1, -10} } },
	[61] = { .set = { {1, -10}, {-2, -8}, {2, -3}, {-1, -9} } },
	[62] = { .set = { {1, -10}, {-5, -7}, {5, -6}, {-1, -9} } },
	[63] = { .set = { {4, -9}, {-4, -9}, {3, -6}, {0, -9} } },
	[64] = { .set = { {-1, -11}, {4, -8}, {-6, -8}, {-1, -10} } },
	[65] = { .set = { {-1, -10}, {4, -6}, {-6, -6}, {-1, -9} } },
	[66] = { .set = { {-1, -10}, {4, -6}, {-6, -6}, {-1, -9} } },
	[67] = { .set = { {-1, -11}, {5, -8}, {-7, -8}, {-1, -10} } },
	[68] = { .set = { {-3, -11}, {2, -8}, {-6, -5}, {-1, -10} } },
	[69] = { .set = { {-3, -10}, {0, -8}, {-4, -3}, {-1, -9} } },
	[70] = { .set = { {-3, -10}, {3, -7}, {-7, -6}, {-1, -9} } },
	[71] = { .set = { {-6, -9}, {2, -9}, {-5, -6}, {-2, -9} } },
	[72] = { .set = { {-5, -10}, {-3, -7}, {-4, -4}, {-2, -9} } },
	[73] = { .set = { {-5, -9}, {0, -6}, {-6, -5}, {-2, -8} } },
	[74] = { .set = { {-5, -9}, {-7, -5}, {2, -4}, {-2, -8} } },
	[75] = { .set = { {-7, -9}, {0, -10}, {0, -7}, {-3, -9} } },
	[76] = { .set = { {-4, -10}, {-7, -7}, {2, -6}, {-2, -9} } },
	[77] = { .set = { {-4, -9}, {-4, -6}, {-1, -4}, {-2, -8} } },
	[78] = { .set = { {-4, -9}, {-7, -5}, {3, -5}, {-2, -8} } },
	[79] = { .set = { {-6, -8}, {-6, -7}, {2, -7}, {-3, -8} } },
	[80] = { .set = { {-1, -10}, {-6, -7}, {4, -7}, {-1, -9} } },
	[81] = { .set = { {-4, -10}, {-7, -7}, {2, -6}, {-2, -9} } },
	[82] = { .set = { {-5, -10}, {-3, -7}, {-4, -4}, {-2, -9} } },
	[83] = { .set = { {-3, -11}, {2, -8}, {-6, -5}, {-1, -10} } },
	[84] = { .set = { {-1, -11}, {4, -8}, {-6, -8}, {-1, -10} } },
	[85] = { .set = { {1, -11}, {-4, -8}, {4, -5}, {-1, -10} } },
	[86] = { .set = { {3, -10}, {1, -7}, {2, -4}, {0, -9} } },
	[87] = { .set = { {2, -10}, {5, -7}, {-4, -6}, {0, -9} } },
	[88] = { .set = { {-1, -10}, {-6, -7}, {4, -7}, {-1, -9} } },
	[89] = { .set = { {-4, -10}, {-7, -7}, {2, -6}, {-2, -9} } },
	[90] = { .set = { {-5, -10}, {-3, -7}, {-4, -4}, {-2, -9} } },
	[91] = { .set = { {-3, -11}, {2, -8}, {-6, -5}, {-1, -10} } },
	[92] = { .set = { {-1, -11}, {4, -8}, {-6, -8}, {-1, -10} } },
	[93] = { .set = { {1, -11}, {-4, -8}, {4, -5}, {-1, -10} } },
	[94] = { .set = { {3, -10}, {1, -7}, {2, -4}, {0, -9} } },
	[95] = { .set = { {2, -10}, {5, -7}, {-4, -6}, {0, -9} } },
	[96] = { .set = { {-1, -9}, {-5, -6}, {3, -6}, {-1, -8} } },
	[97] = { .set = { {-4, -9}, {-4, -6}, {-1, -4}, {-2, -8} } },
	[98] = { .set = { {-5, -9}, {0, -6}, {-6, -5}, {-2, -8} } },
	[99] = { .set = { {-3, -10}, {0, -8}, {-4, -3}, {-1, -9} } },
	[100] = { .set = { {-1, -10}, {4, -6}, {-6, -6}, {-1, -9} } },
	[101] = { .set = { {1, -10}, {-2, -8}, {2, -3}, {-1, -9} } },
	[102] = { .set = { {3, -9}, {-2, -6}, {4, -5}, {0, -8} } },
	[103] = { .set = { {2, -9}, {2, -6}, {-1, -4}, {0, -8} } },
	[104] = { .set = { {-3, -7}, {-3, -4}, {-1, -3}, {-1, -6} } },
	[105] = { .set = { {-4, -6}, {-3, -3}, {-1, -2}, {-1, -5} } },
	[106] = { .set = { {0, -9}, {3, -12}, {-3, -12}, {0, -8} } },
	[107] = { .set = { {-2, -11}, {3, -15}, {-2, -13}, {-1, -7} } },
	[108] = { .set = { {0, -11}, {1, -12}, {0, -9}, {-1, -6} } },
	[109] = { .set = { {0, -10}, {-1, -13}, {4, -11}, {2, -5} } },
	[110] = { .set = { {0, -8}, {3, -11}, {-3, -11}, {0, -5} } },
	[111] = { .set = { {-1, -10}, {0, -13}, {-5, -11}, {-3, -5} } },
	[112] = { .set = { {-1, -11}, {-2, -12}, {-1, -9}, {0, -6} } },
	[113] = { .set = { {1, -11}, {-4, -15}, {1, -13}, {0, -7} } },
	[114] = { .set = { {-1, -10}, {-6, -7}, {4, -7}, {-1, -9} } },
	[115] = { .set = { {-4, -10}, {-7, -7}, {2, -6}, {-2, -9} } },
	[116] = { .set = { {-5, -10}, {-3, -7}, {-4, -4}, {-2, -9} } },
	[117] = { .set = { {-3, -11}, {2, -8}, {-6, -5}, {-1, -10} } },
	[118] = { .set = { {-1, -11}, {4, -8}, {-6, -8}, {-1, -10} } },
	[119] = { .set = { {1, -11}, {-4, -8}, {4, -5}, {-1, -10} } },
	[120] = { .set = { {3, -10}, {1, -7}, {2, -4}, {0, -9} } },
	[121] = { .set = { {2, -10}, {5, -7}, {-4, -6}, {0, -9} } },
	[122] = { .set = { {-1, -9}, {-5, -6}, {3, -6}, {-1, -8} } },
	[123] = { .set = { {-4, -9}, {-4, -6}, {-1, -4}, {-2, -8} } },
	[124] = { .set = { {-5, -9}, {0, -6}, {-6, -5}, {-2, -8} } },
	[125] = { .set = { {-3, -10}, {0, -8}, {-4, -3}, {-1, -9} } },
	[126] = { .set = { {-1, -10}, {4, -6}, {-6, -6}, {-1, -9} } },
	[127] = { .set = { {1, -10}, {-2, -8}, {2, -3}, {-1, -9} } },
	[128] = { .set = { {3, -9}, {-2, -6}, {4, -5}, {0, -8} } },
	[129] = { .set = { {2, -9}, {2, -6}, {-1, -4}, {0, -8} } },
	[130] = { .set = { {-1, -9}, {-7, -8}, {5, -8}, {-1, -8} } },
	[131] = { .set = { {-4, -9}, {-4, -8}, {4, -8}, {-1, -9} } },
	[132] = { .set = { {-5, -9}, {2, -10}, {2, -7}, {-1, -9} } },
	[133] = { .set = { {-5, -9}, {3, -9}, {-4, -6}, {-1, -9} } },
	[134] = { .set = { {-1, -11}, {5, -8}, {-7, -8}, {-1, -10} } },
	[135] = { .set = { {4, -9}, {-4, -9}, {3, -6}, {0, -9} } },
	[136] = { .set = { {5, -9}, {-2, -10}, {-2, -7}, {1, -9} } },
	[137] = { .set = { {3, -9}, {3, -8}, {-5, -8}, {0, -9} } },
	[138] = { .set = { {-1, -9}, {-5, -6}, {3, -6}, {-1, -8} } },
	[139] = { .set = { {2, -9}, {2, -6}, {-1, -4}, {0, -8} } },
	[140] = { .set = { {3, -9}, {-2, -6}, {4, -5}, {0, -8} } },
	[141] = { .set = { {1, -10}, {-2, -8}, {2, -3}, {-1, -9} } },
	[142] = { .set = { {-1, -10}, {4, -6}, {-6, -6}, {-1, -9} } },
	[143] = { .set = { {-3, -10}, {0, -8}, {-4, -3}, {-1, -9} } },
	[144] = { .set = { {-5, -9}, {0, -6}, {-6, -5}, {-2, -8} } },
	[145] = { .set = { {-4, -9}, {-4, -6}, {-1, -4}, {-2, -8} } },
	[146] = { .set = { {-1, -10}, {-2, -6}, {0, -6}, {-1, -9} } },
	[147] = { .set = { {-1, -10}, {-6, -7}, {4, -7}, {-1, -9} } },
	[148] = { .set = { {-1, -8}, {-7, -7}, {5, -7}, {-1, -7} } },
	[149] = { .set = { {2, -10}, {2, -7}, {0, -6}, {0, -9} } },
	[150] = { .set = { {2, -10}, {5, -7}, {-4, -6}, {0, -9} } },
	[151] = { .set = { {3, -7}, {3, -6}, {-5, -6}, {0, -7} } },
	[152] = { .set = { {3, -10}, {2, -7}, {1, -6}, {0, -9} } },
	[153] = { .set = { {3, -10}, {1, -7}, {2, -4}, {0, -9} } },
	[154] = { .set = { {3, -9}, {-4, -10}, {-4, -7}, {-1, -9} } },
	[155] = { .set = { {1, -11}, {-1, -8}, {1, -6}, {-1, -10} } },
	[156] = { .set = { {1, -11}, {-4, -8}, {4, -5}, {-1, -10} } },
	[157] = { .set = { {3, -7}, {-5, -7}, {2, -4}, {-1, -7} } },
	[158] = { .set = { {-1, -11}, {4, -8}, {-6, -8}, {-1, -10} } },
	[159] = { .set = { {-1, -11}, {4, -8}, {-6, -8}, {-1, -10} } },
	[160] = { .set = { {-1, -11}, {5, -8}, {-7, -8}, {-1, -10} } },
	[161] = { .set = { {-3, -11}, {-1, -8}, {-3, -6}, {-1, -10} } },
	[162] = { .set = { {-3, -11}, {2, -8}, {-6, -5}, {-1, -10} } },
	[163] = { .set = { {-5, -7}, {3, -7}, {-4, -4}, {-1, -7} } },
	[164] = { .set = { {-5, -10}, {-4, -7}, {-3, -6}, {-2, -9} } },
	[165] = { .set = { {-5, -10}, {-3, -7}, {-4, -4}, {-2, -9} } },
	[166] = { .set = { {-6, -9}, {1, -10}, {1, -7}, {-2, -9} } },
	[167] = { .set = { {-4, -10}, {-4, -7}, {-2, -6}, {-2, -9} } },
	[168] = { .set = { {-4, -10}, {-7, -7}, {2, -6}, {-2, -9} } },
	[169] = { .set = { {-5, -7}, {-5, -6}, {3, -6}, {-2, -7} } },
	[170] = { .set = { {-1, -10}, {-6, -7}, {4, -7}, {-1, -9} } },
	[171] = { .set = { {-4, -10}, {-7, -7}, {2, -6}, {-2, -9} } },
	[172] = { .set = { {-5, -10}, {-3, -7}, {-4, -4}, {-2, -9} } },
	[173] = { .set = { {-3, -11}, {2, -8}, {-6, -5}, {-1, -10} } },
	[174] = { .set = { {-1, -11}, {4, -8}, {-6, -8}, {-1, -10} } },
	[175] = { .set = { {1, -11}, {-4, -8}, {4, -5}, {-1, -10} } },
	[176] = { .set = { {3, -10}, {1, -7}, {2, -4}, {0, -9} } },
	[177] = { .set = { {2, -10}, {5, -7}, {-4, -6}, {0, -9} } },
	[178] = { .set = { {-1, -10}, {-2, -6}, {0, -6}, {-1, -9} } },
	[179] = { .set = { {-4, -10}, {-4, -7}, {-2, -6}, {-2, -9} } },
	[180] = { .set = { {-5, -10}, {-4, -7}, {-3, -6}, {-2, -9} } },
	[181] = { .set = { {-3, -11}, {-1, -8}, {-3, -6}, {-1, -10} } },
	[182] = { .set = { {-1, -11}, {4, -8}, {-6, -8}, {-1, -10} } },
	[183] = { .set = { {1, -11}, {-1, -8}, {1, -6}, {-1, -10} } },
	[184] = { .set = { {3, -10}, {2, -7}, {1, -6}, {0, -9} } },
	[185] = { .set = { {2, -10}, {2, -7}, {0, -6}, {0, -9} } },
};

static const ax_anim *const sKirliaAnimTable1[] = {
	AX_ANIM_PTR(sKirliaAnims_1_1),
	AX_ANIM_PTR(sKirliaAnims_1_2),
	AX_ANIM_PTR(sKirliaAnims_1_3),
	AX_ANIM_PTR(sKirliaAnims_1_4),
	AX_ANIM_PTR(sKirliaAnims_1_5),
	AX_ANIM_PTR(sKirliaAnims_1_6),
	AX_ANIM_PTR(sKirliaAnims_1_7),
	AX_ANIM_PTR(sKirliaAnims_1_8),
};

static const ax_anim *const sKirliaAnimTable2[] = {
	AX_ANIM_PTR(sKirliaAnims_2_1),
	AX_ANIM_PTR(sKirliaAnims_2_2),
	AX_ANIM_PTR(sKirliaAnims_2_3),
	AX_ANIM_PTR(sKirliaAnims_2_4),
	AX_ANIM_PTR(sKirliaAnims_2_5),
	AX_ANIM_PTR(sKirliaAnims_2_6),
	AX_ANIM_PTR(sKirliaAnims_2_7),
	AX_ANIM_PTR(sKirliaAnims_2_8),
};

static const ax_anim *const sKirliaAnimTable3[] = {
	AX_ANIM_PTR(sKirliaAnims_3_1),
	AX_ANIM_PTR(sKirliaAnims_3_2),
	AX_ANIM_PTR(sKirliaAnims_3_3),
	AX_ANIM_PTR(sKirliaAnims_3_4),
	AX_ANIM_PTR(sKirliaAnims_3_5),
	AX_ANIM_PTR(sKirliaAnims_3_6),
	AX_ANIM_PTR(sKirliaAnims_3_7),
	AX_ANIM_PTR(sKirliaAnims_3_8),
};

static const ax_anim *const sKirliaAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02149),
	AX_ANIM_PTR(gAxSharedAnim_02210),
	AX_ANIM_PTR(gAxSharedAnim_02197),
	AX_ANIM_PTR(gAxSharedAnim_02188),
	AX_ANIM_PTR(gAxSharedAnim_02186),
	AX_ANIM_PTR(gAxSharedAnim_02172),
	AX_ANIM_PTR(gAxSharedAnim_02161),
	AX_ANIM_PTR(gAxSharedAnim_02153),
};

static const ax_anim *const sKirliaAnimTable5[] = {
	AX_ANIM_PTR(sKirliaAnims_5_1),
	AX_ANIM_PTR(sKirliaAnims_5_2),
	AX_ANIM_PTR(sKirliaAnims_5_3),
	AX_ANIM_PTR(sKirliaAnims_5_4),
	AX_ANIM_PTR(sKirliaAnims_5_5),
	AX_ANIM_PTR(sKirliaAnims_5_6),
	AX_ANIM_PTR(sKirliaAnims_5_7),
	AX_ANIM_PTR(sKirliaAnims_5_8),
};

static const ax_anim *const sKirliaAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
};

static const ax_anim *const sKirliaAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00193),
	AX_ANIM_PTR(gAxSharedAnim_00201),
	AX_ANIM_PTR(gAxSharedAnim_00210),
	AX_ANIM_PTR(gAxSharedAnim_00218),
	AX_ANIM_PTR(gAxSharedAnim_00232),
	AX_ANIM_PTR(gAxSharedAnim_00244),
	AX_ANIM_PTR(gAxSharedAnim_00252),
	AX_ANIM_PTR(gAxSharedAnim_00259),
};

static const ax_anim *const sKirliaAnimTable8[] = {
	AX_ANIM_PTR(sKirliaAnims_8_1),
	AX_ANIM_PTR(sKirliaAnims_8_2),
	AX_ANIM_PTR(sKirliaAnims_8_3),
	AX_ANIM_PTR(sKirliaAnims_8_4),
	AX_ANIM_PTR(sKirliaAnims_8_5),
	AX_ANIM_PTR(sKirliaAnims_8_6),
	AX_ANIM_PTR(sKirliaAnims_8_7),
	AX_ANIM_PTR(sKirliaAnims_8_8),
};

static const ax_anim *const sKirliaAnimTable9[] = {
	AX_ANIM_PTR(sKirliaAnims_9_1),
	AX_ANIM_PTR(sKirliaAnims_9_2),
	AX_ANIM_PTR(sKirliaAnims_9_3),
	AX_ANIM_PTR(sKirliaAnims_9_4),
	AX_ANIM_PTR(sKirliaAnims_9_5),
	AX_ANIM_PTR(sKirliaAnims_9_6),
	AX_ANIM_PTR(sKirliaAnims_9_7),
	AX_ANIM_PTR(sKirliaAnims_9_8),
};

static const ax_anim *const sKirliaAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00474),
	AX_ANIM_PTR(gAxSharedAnim_00483),
	AX_ANIM_PTR(gAxSharedAnim_00492),
	AX_ANIM_PTR(gAxSharedAnim_00500),
	AX_ANIM_PTR(gAxSharedAnim_00506),
	AX_ANIM_PTR(gAxSharedAnim_00515),
	AX_ANIM_PTR(gAxSharedAnim_00521),
	AX_ANIM_PTR(gAxSharedAnim_00526),
};

static const ax_anim *const sKirliaAnimTable11[] = {
	AX_ANIM_PTR(sKirliaAnims_11_1),
	AX_ANIM_PTR(sKirliaAnims_11_2),
	AX_ANIM_PTR(sKirliaAnims_11_3),
	AX_ANIM_PTR(sKirliaAnims_11_4),
	AX_ANIM_PTR(sKirliaAnims_11_5),
	AX_ANIM_PTR(sKirliaAnims_11_6),
	AX_ANIM_PTR(sKirliaAnims_11_7),
	AX_ANIM_PTR(sKirliaAnims_11_8),
};

static const ax_anim *const sKirliaAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00804),
	AX_ANIM_PTR(gAxSharedAnim_00891),
	AX_ANIM_PTR(gAxSharedAnim_00868),
	AX_ANIM_PTR(gAxSharedAnim_00856),
	AX_ANIM_PTR(gAxSharedAnim_00855),
	AX_ANIM_PTR(gAxSharedAnim_00842),
	AX_ANIM_PTR(gAxSharedAnim_00820),
	AX_ANIM_PTR(gAxSharedAnim_00805),
};

static const ax_anim *const sKirliaAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_00906),
	AX_ANIM_PTR(gAxSharedAnim_00992),
	AX_ANIM_PTR(gAxSharedAnim_00980),
	AX_ANIM_PTR(gAxSharedAnim_00967),
	AX_ANIM_PTR(gAxSharedAnim_00956),
	AX_ANIM_PTR(gAxSharedAnim_00944),
	AX_ANIM_PTR(gAxSharedAnim_00931),
	AX_ANIM_PTR(gAxSharedAnim_00919),
};

static const ax_anim *const *const sAxAnimationsKirlia[] = {
	sKirliaAnimTable1,
	sKirliaAnimTable2,
	sKirliaAnimTable3,
	sKirliaAnimTable4,
	sKirliaAnimTable5,
	sKirliaAnimTable6,
	sKirliaAnimTable7,
	sKirliaAnimTable8,
	sKirliaAnimTable9,
	sKirliaAnimTable10,
	sKirliaAnimTable11,
	sKirliaAnimTable12,
	sKirliaAnimTable13,
};

static const ax_sprite *const sAxSpritesKirlia[] = {
	sKirliaSprites1,
	sKirliaSprites2,
	sKirliaSprites3,
	sKirliaSprites4,
	sKirliaSprites5,
	sKirliaSprites6,
	sKirliaSprites7,
	sKirliaSprites8,
	sKirliaSprites9,
	sKirliaSprites10,
	sKirliaSprites11,
	sKirliaSprites12,
	sKirliaSprites13,
	sKirliaSprites14,
	sKirliaSprites15,
	sKirliaSprites16,
	sKirliaSprites17,
	sKirliaSprites18,
	sKirliaSprites19,
	sKirliaSprites20,
	sKirliaSprites21,
	sKirliaSprites22,
	sKirliaSprites23,
	sKirliaSprites24,
	sKirliaSprites25,
	sKirliaSprites26,
	sKirliaSprites27,
	sKirliaSprites28,
	sKirliaSprites29,
	sKirliaSprites30,
	sKirliaSprites31,
	sKirliaSprites32,
};

static const axmain sAxMainKirlia = {
	.poses = sAxPosesKirlia,
	.animations = sAxAnimationsKirlia,
	.animCount = ARRAY_COUNT(sAxAnimationsKirlia),
	.spriteData = sAxSpritesKirlia,
	.positions = sAxPositionsKirlia,
};
