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
static const axmain sAxMainWynaut;
const SiroArchive gAxWynaut = {"SIRO", &sAxMainWynaut};

static const ax_pose sWynautPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose16[] = {
	AX_POSE(9, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose22[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose23[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose24[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose28[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose32[] = {
	AX_POSE(16, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose36[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose40[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose44[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose48[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose52[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose56[] = {
	AX_POSE(16, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose90[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose91[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose93[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose94[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose96[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose97[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose99[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose100[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose102[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose103[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose105[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose106[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose108[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose109[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose111[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose112[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose118[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose122[] = {
	AX_POSE(19, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose129[] = {
	AX_POSE(30, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose130[] = {
	AX_POSE(31, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose131[] = {
	AX_POSE(32, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose132[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose133[] = {
	AX_POSE(34, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose134[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose135[] = {
	AX_POSE(36, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose136[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose137[] = {
	AX_POSE(34, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose138[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose164[] = {
	AX_POSE(16, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose174[] = {
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose185[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose186[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose188[] = {
	AX_POSE(9, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose189[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose190[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose196[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWynautPose200[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sWynautAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_1_1.lz");
static const u8 sWynautAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_1_2.lz");
static const u8 sWynautAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_1_3.lz");
static const u8 sWynautAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_1_4.lz");
static const u8 sWynautAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_1_5.lz");
static const u8 sWynautAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_1_6.lz");
static const u8 sWynautAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_1_7.lz");
static const u8 sWynautAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_1_8.lz");
static const u8 sWynautAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_2_1.lz");
static const u8 sWynautAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_2_2.lz");
static const u8 sWynautAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_2_3.lz");
static const u8 sWynautAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_2_4.lz");
static const u8 sWynautAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_2_5.lz");
static const u8 sWynautAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_2_6.lz");
static const u8 sWynautAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_2_7.lz");
static const u8 sWynautAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_2_8.lz");
static const u8 sWynautAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_3_1.lz");
static const u8 sWynautAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_3_2.lz");
static const u8 sWynautAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_3_3.lz");
static const u8 sWynautAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_3_4.lz");
static const u8 sWynautAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_3_5.lz");
static const u8 sWynautAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_3_6.lz");
static const u8 sWynautAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_3_7.lz");
static const u8 sWynautAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_3_8.lz");
static const u8 sWynautAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_4_1.lz");
static const u8 sWynautAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_4_2.lz");
static const u8 sWynautAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_4_3.lz");
static const u8 sWynautAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_4_4.lz");
static const u8 sWynautAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_4_5.lz");
static const u8 sWynautAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_4_6.lz");
static const u8 sWynautAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_4_7.lz");
static const u8 sWynautAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_4_8.lz");
static const u8 sWynautAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_5_1.lz");
static const u8 sWynautAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_5_2.lz");
static const u8 sWynautAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_5_3.lz");
static const u8 sWynautAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_5_4.lz");
static const u8 sWynautAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_5_5.lz");
static const u8 sWynautAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_5_6.lz");
static const u8 sWynautAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_5_7.lz");
static const u8 sWynautAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_5_8.lz");
static const u8 sWynautAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_8_4.lz");
static const u8 sWynautAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_8_5.lz");
static const u8 sWynautAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_8_6.lz");
static const u8 sWynautAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_8_7.lz");
static const u8 sWynautAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_8_8.lz");
static const u8 sWynautAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_9_1.lz");
static const u8 sWynautAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_9_2.lz");
static const u8 sWynautAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_9_3.lz");
static const u8 sWynautAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_9_4.lz");
static const u8 sWynautAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_9_5.lz");
static const u8 sWynautAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_9_6.lz");
static const u8 sWynautAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_9_7.lz");
static const u8 sWynautAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_9_8.lz");
static const u8 sWynautAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_11_1.lz");
static const u8 sWynautAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_11_3.lz");
static const u8 sWynautAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_11_4.lz");
static const u8 sWynautAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_11_5.lz");
static const u8 sWynautAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/wynaut/sWynautAnims_11_7.lz");

static const u8 sWynautGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_1.4bpp.lz");
static const ax_sprite sWynautSprites1[] = {
	{sWynautGfx1, ARRAY_COUNT(sWynautGfx1)}, 
	{NULL, 0}
};
static const u8 sWynautGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_2.4bpp.lz");
static const ax_sprite sWynautSprites2[] = {
	{sWynautGfx2, ARRAY_COUNT(sWynautGfx2)}, 
	{NULL, 0}
};
static const u8 sWynautGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_3.4bpp.lz");
static const ax_sprite sWynautSprites3[] = {
	{sWynautGfx3, ARRAY_COUNT(sWynautGfx3)}, 
	{NULL, 0}
};
static const u8 sWynautGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_4.4bpp.lz");
static const ax_sprite sWynautSprites4[] = {
	{sWynautGfx4, ARRAY_COUNT(sWynautGfx4)}, 
	{NULL, 0}
};
static const u8 sWynautGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_5.4bpp.lz");
static const ax_sprite sWynautSprites5[] = {
	{sWynautGfx5, ARRAY_COUNT(sWynautGfx5)}, 
	{NULL, 0}
};
static const u8 sWynautGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_6.4bpp.lz");
static const ax_sprite sWynautSprites6[] = {
	{sWynautGfx6, ARRAY_COUNT(sWynautGfx6)}, 
	{NULL, 0}
};
static const u8 sWynautGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_7.4bpp.lz");
static const ax_sprite sWynautSprites7[] = {
	{sWynautGfx7, ARRAY_COUNT(sWynautGfx7)}, 
	{NULL, 0}
};
static const u8 sWynautGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_8.4bpp.lz");
static const ax_sprite sWynautSprites8[] = {
	{sWynautGfx8, ARRAY_COUNT(sWynautGfx8)}, 
	{NULL, 0}
};
static const u8 sWynautGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_9.4bpp.lz");
static const ax_sprite sWynautSprites9[] = {
	{sWynautGfx9, ARRAY_COUNT(sWynautGfx9)}, 
	{NULL, 0}
};
static const u8 sWynautGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_10.4bpp.lz");
static const ax_sprite sWynautSprites10[] = {
	{sWynautGfx10, ARRAY_COUNT(sWynautGfx10)}, 
	{NULL, 0}
};
static const u8 sWynautGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_11.4bpp.lz");
static const ax_sprite sWynautSprites11[] = {
	{sWynautGfx11, ARRAY_COUNT(sWynautGfx11)}, 
	{NULL, 0}
};
static const u8 sWynautGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_12.4bpp.lz");
static const ax_sprite sWynautSprites12[] = {
	{sWynautGfx12, ARRAY_COUNT(sWynautGfx12)}, 
	{NULL, 0}
};
static const u8 sWynautGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_13.4bpp.lz");
static const ax_sprite sWynautSprites13[] = {
	{sWynautGfx13, ARRAY_COUNT(sWynautGfx13)}, 
	{NULL, 0}
};
static const u8 sWynautGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_14.4bpp.lz");
static const ax_sprite sWynautSprites14[] = {
	{sWynautGfx14, ARRAY_COUNT(sWynautGfx14)}, 
	{NULL, 0}
};
static const u8 sWynautGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_15.4bpp.lz");
static const ax_sprite sWynautSprites15[] = {
	{sWynautGfx15, ARRAY_COUNT(sWynautGfx15)}, 
	{NULL, 0}
};
static const u8 sWynautGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_16.4bpp.lz");
static const u8 sWynautGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_16_1.4bpp.lz");
static const u8 sWynautGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_16_2.4bpp.lz");
static const ax_sprite sWynautSprites16[] = {
	{NULL, 32}, 
	{sWynautGfx16, ARRAY_COUNT(sWynautGfx16)}, 
	{NULL, 32}, 
	{sWynautGfx16_1, ARRAY_COUNT(sWynautGfx16_1)}, 
	{NULL, 32}, 
	{sWynautGfx16_2, ARRAY_COUNT(sWynautGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWynautGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_17.4bpp.lz");
static const u8 sWynautGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_17_1.4bpp.lz");
static const u8 sWynautGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_17_2.4bpp.lz");
static const ax_sprite sWynautSprites17[] = {
	{NULL, 128}, 
	{sWynautGfx17, ARRAY_COUNT(sWynautGfx17)}, 
	{NULL, 32}, 
	{sWynautGfx17_1, ARRAY_COUNT(sWynautGfx17_1)}, 
	{NULL, 64}, 
	{sWynautGfx17_2, ARRAY_COUNT(sWynautGfx17_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWynautGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_18.4bpp.lz");
static const u8 sWynautGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_18_1.4bpp.lz");
static const u8 sWynautGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_18_2.4bpp.lz");
static const u8 sWynautGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_18_3.4bpp.lz");
static const ax_sprite sWynautSprites18[] = {
	{NULL, 32}, 
	{sWynautGfx18, ARRAY_COUNT(sWynautGfx18)}, 
	{NULL, 64}, 
	{sWynautGfx18_1, ARRAY_COUNT(sWynautGfx18_1)}, 
	{NULL, 32}, 
	{sWynautGfx18_2, ARRAY_COUNT(sWynautGfx18_2)}, 
	{NULL, 64}, 
	{sWynautGfx18_3, ARRAY_COUNT(sWynautGfx18_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWynautGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_19.4bpp.lz");
static const u8 sWynautGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_19_1.4bpp.lz");
static const u8 sWynautGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_19_2.4bpp.lz");
static const u8 sWynautGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_19_3.4bpp.lz");
static const ax_sprite sWynautSprites19[] = {
	{NULL, 32}, 
	{sWynautGfx19, ARRAY_COUNT(sWynautGfx19)}, 
	{NULL, 64}, 
	{sWynautGfx19_1, ARRAY_COUNT(sWynautGfx19_1)}, 
	{NULL, 32}, 
	{sWynautGfx19_2, ARRAY_COUNT(sWynautGfx19_2)}, 
	{NULL, 64}, 
	{sWynautGfx19_3, ARRAY_COUNT(sWynautGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWynautGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_20.4bpp.lz");
static const u8 sWynautGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_20_1.4bpp.lz");
static const u8 sWynautGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_20_2.4bpp.lz");
static const ax_sprite sWynautSprites20[] = {
	{NULL, 32}, 
	{sWynautGfx20, ARRAY_COUNT(sWynautGfx20)}, 
	{NULL, 32}, 
	{sWynautGfx20_1, ARRAY_COUNT(sWynautGfx20_1)}, 
	{NULL, 32}, 
	{sWynautGfx20_2, ARRAY_COUNT(sWynautGfx20_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWynautGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_21.4bpp.lz");
static const u8 sWynautGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_21_1.4bpp.lz");
static const u8 sWynautGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_21_2.4bpp.lz");
static const ax_sprite sWynautSprites21[] = {
	{sWynautGfx21, ARRAY_COUNT(sWynautGfx21)}, 
	{NULL, 32}, 
	{sWynautGfx21_1, ARRAY_COUNT(sWynautGfx21_1)}, 
	{NULL, 32}, 
	{sWynautGfx21_2, ARRAY_COUNT(sWynautGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sWynautGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_22.4bpp.lz");
static const u8 sWynautGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_22_1.4bpp.lz");
static const u8 sWynautGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_22_2.4bpp.lz");
static const ax_sprite sWynautSprites22[] = {
	{sWynautGfx22, ARRAY_COUNT(sWynautGfx22)}, 
	{NULL, 64}, 
	{sWynautGfx22_1, ARRAY_COUNT(sWynautGfx22_1)}, 
	{NULL, 32}, 
	{sWynautGfx22_2, ARRAY_COUNT(sWynautGfx22_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sWynautGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_23.4bpp.lz");
static const u8 sWynautGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_23_1.4bpp.lz");
static const u8 sWynautGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_23_2.4bpp.lz");
static const ax_sprite sWynautSprites23[] = {
	{sWynautGfx23, ARRAY_COUNT(sWynautGfx23)}, 
	{NULL, 32}, 
	{sWynautGfx23_1, ARRAY_COUNT(sWynautGfx23_1)}, 
	{NULL, 32}, 
	{sWynautGfx23_2, ARRAY_COUNT(sWynautGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sWynautGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_24.4bpp.lz");
static const u8 sWynautGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_24_1.4bpp.lz");
static const u8 sWynautGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_24_2.4bpp.lz");
static const u8 sWynautGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_24_3.4bpp.lz");
static const ax_sprite sWynautSprites24[] = {
	{sWynautGfx24, ARRAY_COUNT(sWynautGfx24)}, 
	{NULL, 32}, 
	{sWynautGfx24_1, ARRAY_COUNT(sWynautGfx24_1)}, 
	{NULL, 64}, 
	{sWynautGfx24_2, ARRAY_COUNT(sWynautGfx24_2)}, 
	{NULL, 64}, 
	{sWynautGfx24_3, ARRAY_COUNT(sWynautGfx24_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWynautGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_25.4bpp.lz");
static const u8 sWynautGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_25_1.4bpp.lz");
static const u8 sWynautGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_25_2.4bpp.lz");
static const ax_sprite sWynautSprites25[] = {
	{sWynautGfx25, ARRAY_COUNT(sWynautGfx25)}, 
	{NULL, 32}, 
	{sWynautGfx25_1, ARRAY_COUNT(sWynautGfx25_1)}, 
	{NULL, 32}, 
	{sWynautGfx25_2, ARRAY_COUNT(sWynautGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sWynautGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_26.4bpp.lz");
static const u8 sWynautGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_26_1.4bpp.lz");
static const u8 sWynautGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_26_2.4bpp.lz");
static const u8 sWynautGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_26_3.4bpp.lz");
static const ax_sprite sWynautSprites26[] = {
	{sWynautGfx26, ARRAY_COUNT(sWynautGfx26)}, 
	{NULL, 64}, 
	{sWynautGfx26_1, ARRAY_COUNT(sWynautGfx26_1)}, 
	{NULL, 32}, 
	{sWynautGfx26_2, ARRAY_COUNT(sWynautGfx26_2)}, 
	{NULL, 64}, 
	{sWynautGfx26_3, ARRAY_COUNT(sWynautGfx26_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWynautGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_27.4bpp.lz");
static const u8 sWynautGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_27_1.4bpp.lz");
static const u8 sWynautGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_27_2.4bpp.lz");
static const ax_sprite sWynautSprites27[] = {
	{sWynautGfx27, ARRAY_COUNT(sWynautGfx27)}, 
	{NULL, 32}, 
	{sWynautGfx27_1, ARRAY_COUNT(sWynautGfx27_1)}, 
	{NULL, 64}, 
	{sWynautGfx27_2, ARRAY_COUNT(sWynautGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sWynautGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_28.4bpp.lz");
static const u8 sWynautGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_28_1.4bpp.lz");
static const u8 sWynautGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_28_2.4bpp.lz");
static const u8 sWynautGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_28_3.4bpp.lz");
static const ax_sprite sWynautSprites28[] = {
	{sWynautGfx28, ARRAY_COUNT(sWynautGfx28)}, 
	{NULL, 32}, 
	{sWynautGfx28_1, ARRAY_COUNT(sWynautGfx28_1)}, 
	{NULL, 32}, 
	{sWynautGfx28_2, ARRAY_COUNT(sWynautGfx28_2)}, 
	{NULL, 64}, 
	{sWynautGfx28_3, ARRAY_COUNT(sWynautGfx28_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWynautGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_29.4bpp.lz");
static const u8 sWynautGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_29_1.4bpp.lz");
static const u8 sWynautGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_29_2.4bpp.lz");
static const u8 sWynautGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_29_3.4bpp.lz");
static const ax_sprite sWynautSprites29[] = {
	{sWynautGfx29, ARRAY_COUNT(sWynautGfx29)}, 
	{NULL, 32}, 
	{sWynautGfx29_1, ARRAY_COUNT(sWynautGfx29_1)}, 
	{NULL, 32}, 
	{sWynautGfx29_2, ARRAY_COUNT(sWynautGfx29_2)}, 
	{NULL, 32}, 
	{sWynautGfx29_3, ARRAY_COUNT(sWynautGfx29_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWynautGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_30.4bpp.lz");
static const u8 sWynautGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_30_1.4bpp.lz");
static const u8 sWynautGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_30_2.4bpp.lz");
static const u8 sWynautGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_30_3.4bpp.lz");
static const ax_sprite sWynautSprites30[] = {
	{NULL, 32}, 
	{sWynautGfx30, ARRAY_COUNT(sWynautGfx30)}, 
	{NULL, 32}, 
	{sWynautGfx30_1, ARRAY_COUNT(sWynautGfx30_1)}, 
	{NULL, 32}, 
	{sWynautGfx30_2, ARRAY_COUNT(sWynautGfx30_2)}, 
	{NULL, 64}, 
	{sWynautGfx30_3, ARRAY_COUNT(sWynautGfx30_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWynautGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_31.4bpp.lz");
static const ax_sprite sWynautSprites31[] = {
	{sWynautGfx31, ARRAY_COUNT(sWynautGfx31)}, 
	{NULL, 0}
};
static const u8 sWynautGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_32.4bpp.lz");
static const ax_sprite sWynautSprites32[] = {
	{sWynautGfx32, ARRAY_COUNT(sWynautGfx32)}, 
	{NULL, 0}
};
static const u8 sWynautGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_33.4bpp.lz");
static const ax_sprite sWynautSprites33[] = {
	{sWynautGfx33, ARRAY_COUNT(sWynautGfx33)}, 
	{NULL, 0}
};
static const u8 sWynautGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_34.4bpp.lz");
static const ax_sprite sWynautSprites34[] = {
	{sWynautGfx34, ARRAY_COUNT(sWynautGfx34)}, 
	{NULL, 0}
};
static const u8 sWynautGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_35.4bpp.lz");
static const ax_sprite sWynautSprites35[] = {
	{sWynautGfx35, ARRAY_COUNT(sWynautGfx35)}, 
	{NULL, 0}
};
static const u8 sWynautGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_36.4bpp.lz");
static const ax_sprite sWynautSprites36[] = {
	{sWynautGfx36, ARRAY_COUNT(sWynautGfx36)}, 
	{NULL, 0}
};
static const u8 sWynautGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wynaut/sprite_37.4bpp.lz");
static const ax_sprite sWynautSprites37[] = {
	{sWynautGfx37, ARRAY_COUNT(sWynautGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesWynaut[] = {
	sWynautPose1,
	sWynautPose2,
	sWynautPose3,
	sWynautPose4,
	sWynautPose5,
	sWynautPose6,
	sWynautPose7,
	sWynautPose8,
	sWynautPose9,
	sWynautPose10,
	sWynautPose11,
	sWynautPose12,
	sWynautPose13,
	sWynautPose14,
	sWynautPose15,
	sWynautPose16,
	sWynautPose17,
	sWynautPose18,
	sWynautPose19,
	sWynautPose20,
	sWynautPose21,
	sWynautPose22,
	sWynautPose23,
	sWynautPose24,
	sWynautPose1,
	sWynautPose2,
	sWynautPose3,
	sWynautPose28,
	sWynautPose4,
	sWynautPose5,
	sWynautPose6,
	sWynautPose32,
	sWynautPose7,
	sWynautPose8,
	sWynautPose9,
	sWynautPose36,
	sWynautPose10,
	sWynautPose11,
	sWynautPose12,
	sWynautPose40,
	sWynautPose13,
	sWynautPose14,
	sWynautPose15,
	sWynautPose44,
	sWynautPose16,
	sWynautPose17,
	sWynautPose18,
	sWynautPose48,
	sWynautPose19,
	sWynautPose20,
	sWynautPose21,
	sWynautPose52,
	sWynautPose22,
	sWynautPose23,
	sWynautPose24,
	sWynautPose56,
	sWynautPose1,
	sWynautPose2,
	sWynautPose3,
	sWynautPose28,
	sWynautPose4,
	sWynautPose5,
	sWynautPose6,
	sWynautPose32,
	sWynautPose7,
	sWynautPose8,
	sWynautPose9,
	sWynautPose36,
	sWynautPose10,
	sWynautPose11,
	sWynautPose12,
	sWynautPose40,
	sWynautPose13,
	sWynautPose14,
	sWynautPose15,
	sWynautPose44,
	sWynautPose16,
	sWynautPose17,
	sWynautPose18,
	sWynautPose48,
	sWynautPose19,
	sWynautPose20,
	sWynautPose21,
	sWynautPose52,
	sWynautPose22,
	sWynautPose23,
	sWynautPose24,
	sWynautPose56,
	sWynautPose1,
	sWynautPose90,
	sWynautPose91,
	sWynautPose4,
	sWynautPose93,
	sWynautPose94,
	sWynautPose7,
	sWynautPose96,
	sWynautPose97,
	sWynautPose10,
	sWynautPose99,
	sWynautPose100,
	sWynautPose13,
	sWynautPose102,
	sWynautPose103,
	sWynautPose16,
	sWynautPose105,
	sWynautPose106,
	sWynautPose19,
	sWynautPose108,
	sWynautPose109,
	sWynautPose22,
	sWynautPose111,
	sWynautPose112,
	sWynautPose1,
	sWynautPose28,
	sWynautPose4,
	sWynautPose32,
	sWynautPose7,
	sWynautPose118,
	sWynautPose10,
	sWynautPose40,
	sWynautPose13,
	sWynautPose122,
	sWynautPose16,
	sWynautPose48,
	sWynautPose19,
	sWynautPose52,
	sWynautPose22,
	sWynautPose56,
	sWynautPose129,
	sWynautPose130,
	sWynautPose131,
	sWynautPose132,
	sWynautPose133,
	sWynautPose134,
	sWynautPose135,
	sWynautPose136,
	sWynautPose137,
	sWynautPose138,
	sWynautPose1,
	sWynautPose2,
	sWynautPose3,
	sWynautPose4,
	sWynautPose5,
	sWynautPose6,
	sWynautPose7,
	sWynautPose8,
	sWynautPose9,
	sWynautPose10,
	sWynautPose11,
	sWynautPose12,
	sWynautPose13,
	sWynautPose14,
	sWynautPose15,
	sWynautPose16,
	sWynautPose17,
	sWynautPose18,
	sWynautPose19,
	sWynautPose20,
	sWynautPose21,
	sWynautPose22,
	sWynautPose23,
	sWynautPose24,
	sWynautPose28,
	sWynautPose164,
	sWynautPose52,
	sWynautPose48,
	sWynautPose44,
	sWynautPose40,
	sWynautPose118,
	sWynautPose32,
	sWynautPose28,
	sWynautPose32,
	sWynautPose118,
	sWynautPose174,
	sWynautPose44,
	sWynautPose48,
	sWynautPose52,
	sWynautPose164,
	sWynautPose1,
	sWynautPose2,
	sWynautPose3,
	sWynautPose4,
	sWynautPose5,
	sWynautPose6,
	sWynautPose185,
	sWynautPose186,
	sWynautPose9,
	sWynautPose188,
	sWynautPose189,
	sWynautPose190,
	sWynautPose13,
	sWynautPose14,
	sWynautPose15,
	sWynautPose16,
	sWynautPose17,
	sWynautPose196,
	sWynautPose19,
	sWynautPose20,
	sWynautPose21,
	sWynautPose200,
	sWynautPose23,
	sWynautPose24,
	sWynautPose28,
	sWynautPose164,
	sWynautPose52,
	sWynautPose48,
	sWynautPose44,
	sWynautPose174,
	sWynautPose118,
	sWynautPose32,
	sWynautPose1,
	sWynautPose22,
	sWynautPose19,
	sWynautPose16,
	sWynautPose13,
	sWynautPose10,
	sWynautPose7,
	sWynautPose4,
};

static const struct PositionSets sAxPositionsWynaut[] = {
	[0] = { .set = { {-1, -8}, {-4, -5}, {2, -5}, {-1, -6} } },
	[1] = { .set = { {1, -7}, {-3, -4}, {2, -4}, {0, -5} } },
	[2] = { .set = { {-2, -7}, {-3, -4}, {1, -5}, {-1, -5} } },
	[3] = { .set = { {1, -8}, {2, -5}, {-2, -5}, {0, -5} } },
	[4] = { .set = { {0, -8}, {2, -6}, {-3, -5}, {-1, -6} } },
	[5] = { .set = { {2, -9}, {1, -5}, {-2, -5}, {0, -6} } },
	[6] = { .set = { {3, -8}, {0, -5}, {-2, -4}, {-1, -6} } },
	[7] = { .set = { {1, -6}, {-1, -5}, {-3, -4}, {-2, -5} } },
	[8] = { .set = { {3, -9}, {-2, -6}, {0, -5}, {-2, -7} } },
	[9] = { .set = { {0, -10}, {-3, -5}, {0, -5}, {-2, -6} } },
	[10] = { .set = { {0, -8}, {-4, -4}, {-1, -4}, {-3, -5} } },
	[11] = { .set = { {-1, -9}, {-4, -4}, {-1, -4}, {-3, -5} } },
	[12] = { .set = { {-1, -11}, {2, -5}, {-4, -5}, {-1, -6} } },
	[13] = { .set = { {-3, -9}, {2, -4}, {-3, -4}, {-1, -5} } },
	[14] = { .set = { {1, -9}, {2, -4}, {-4, -4}, {-1, -5} } },
	[15] = { .set = { {-2, -10}, {1, -5}, {-2, -5}, {0, -6} } },
	[16] = { .set = { {-2, -8}, {2, -4}, {-1, -4}, {1, -5} } },
	[17] = { .set = { {-1, -9}, {2, -4}, {-1, -4}, {1, -5} } },
	[18] = { .set = { {-5, -8}, {-2, -5}, {0, -4}, {-1, -6} } },
	[19] = { .set = { {-3, -6}, {-1, -5}, {1, -4}, {0, -5} } },
	[20] = { .set = { {-5, -9}, {0, -6}, {-2, -5}, {0, -7} } },
	[21] = { .set = { {-3, -8}, {-4, -5}, {0, -5}, {-2, -5} } },
	[22] = { .set = { {-2, -8}, {-4, -6}, {1, -5}, {-1, -6} } },
	[23] = { .set = { {-4, -9}, {-3, -5}, {0, -5}, {-2, -6} } },
	[24] = { .set = { {-1, -8}, {-4, -5}, {2, -5}, {-1, -6} } },
	[25] = { .set = { {1, -7}, {-3, -4}, {2, -4}, {0, -5} } },
	[26] = { .set = { {-2, -7}, {-3, -4}, {1, -5}, {-1, -5} } },
	[27] = { .set = { {-1, -11}, {-4, -6}, {2, -6}, {-1, -7} } },
	[28] = { .set = { {1, -8}, {2, -5}, {-2, -5}, {0, -5} } },
	[29] = { .set = { {0, -8}, {2, -6}, {-3, -5}, {-1, -6} } },
	[30] = { .set = { {2, -9}, {1, -5}, {-2, -5}, {0, -6} } },
	[31] = { .set = { {2, -11}, {2, -6}, {-3, -6}, {-1, -7} } },
	[32] = { .set = { {3, -8}, {0, -5}, {-2, -4}, {-1, -6} } },
	[33] = { .set = { {1, -6}, {-1, -5}, {-3, -4}, {-2, -5} } },
	[34] = { .set = { {3, -9}, {-2, -6}, {0, -5}, {-2, -7} } },
	[35] = { .set = { {2, -10}, {-2, -6}, {-3, -6}, {-2, -7} } },
	[36] = { .set = { {0, -10}, {-3, -5}, {0, -5}, {-2, -6} } },
	[37] = { .set = { {0, -8}, {-4, -4}, {-1, -4}, {-3, -5} } },
	[38] = { .set = { {-1, -9}, {-4, -4}, {-1, -4}, {-3, -5} } },
	[39] = { .set = { {-1, -12}, {-4, -6}, {1, -6}, {-2, -7} } },
	[40] = { .set = { {-1, -11}, {2, -5}, {-4, -5}, {-1, -6} } },
	[41] = { .set = { {-3, -9}, {2, -4}, {-3, -4}, {-1, -5} } },
	[42] = { .set = { {1, -9}, {2, -4}, {-4, -4}, {-1, -5} } },
	[43] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -8} } },
	[44] = { .set = { {-2, -10}, {1, -5}, {-2, -5}, {0, -6} } },
	[45] = { .set = { {-2, -8}, {2, -4}, {-1, -4}, {1, -5} } },
	[46] = { .set = { {-1, -9}, {2, -4}, {-1, -4}, {1, -5} } },
	[47] = { .set = { {-1, -12}, {2, -6}, {-3, -6}, {0, -7} } },
	[48] = { .set = { {-5, -8}, {-2, -5}, {0, -4}, {-1, -6} } },
	[49] = { .set = { {-3, -6}, {-1, -5}, {1, -4}, {0, -5} } },
	[50] = { .set = { {-5, -9}, {0, -6}, {-2, -5}, {0, -7} } },
	[51] = { .set = { {-4, -10}, {0, -6}, {1, -6}, {0, -7} } },
	[52] = { .set = { {-3, -8}, {-4, -5}, {0, -5}, {-2, -5} } },
	[53] = { .set = { {-2, -8}, {-4, -6}, {1, -5}, {-1, -6} } },
	[54] = { .set = { {-4, -9}, {-3, -5}, {0, -5}, {-2, -6} } },
	[55] = { .set = { {-4, -11}, {-4, -6}, {1, -6}, {-1, -7} } },
	[56] = { .set = { {-1, -8}, {-4, -5}, {2, -5}, {-1, -6} } },
	[57] = { .set = { {1, -7}, {-3, -4}, {2, -4}, {0, -5} } },
	[58] = { .set = { {-2, -7}, {-3, -4}, {1, -5}, {-1, -5} } },
	[59] = { .set = { {-1, -11}, {-4, -6}, {2, -6}, {-1, -7} } },
	[60] = { .set = { {1, -8}, {2, -5}, {-2, -5}, {0, -5} } },
	[61] = { .set = { {0, -8}, {2, -6}, {-3, -5}, {-1, -6} } },
	[62] = { .set = { {2, -9}, {1, -5}, {-2, -5}, {0, -6} } },
	[63] = { .set = { {2, -11}, {2, -6}, {-3, -6}, {-1, -7} } },
	[64] = { .set = { {3, -8}, {0, -5}, {-2, -4}, {-1, -6} } },
	[65] = { .set = { {1, -6}, {-1, -5}, {-3, -4}, {-2, -5} } },
	[66] = { .set = { {3, -9}, {-2, -6}, {0, -5}, {-2, -7} } },
	[67] = { .set = { {2, -10}, {-2, -6}, {-3, -6}, {-2, -7} } },
	[68] = { .set = { {0, -10}, {-3, -5}, {0, -5}, {-2, -6} } },
	[69] = { .set = { {0, -8}, {-4, -4}, {-1, -4}, {-3, -5} } },
	[70] = { .set = { {-1, -9}, {-4, -4}, {-1, -4}, {-3, -5} } },
	[71] = { .set = { {-1, -12}, {-4, -6}, {1, -6}, {-2, -7} } },
	[72] = { .set = { {-1, -11}, {2, -5}, {-4, -5}, {-1, -6} } },
	[73] = { .set = { {-3, -9}, {2, -4}, {-3, -4}, {-1, -5} } },
	[74] = { .set = { {1, -9}, {2, -4}, {-4, -4}, {-1, -5} } },
	[75] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -8} } },
	[76] = { .set = { {-2, -10}, {1, -5}, {-2, -5}, {0, -6} } },
	[77] = { .set = { {-2, -8}, {2, -4}, {-1, -4}, {1, -5} } },
	[78] = { .set = { {-1, -9}, {2, -4}, {-1, -4}, {1, -5} } },
	[79] = { .set = { {-1, -12}, {2, -6}, {-3, -6}, {0, -7} } },
	[80] = { .set = { {-5, -8}, {-2, -5}, {0, -4}, {-1, -6} } },
	[81] = { .set = { {-3, -6}, {-1, -5}, {1, -4}, {0, -5} } },
	[82] = { .set = { {-5, -9}, {0, -6}, {-2, -5}, {0, -7} } },
	[83] = { .set = { {-4, -10}, {0, -6}, {1, -6}, {0, -7} } },
	[84] = { .set = { {-3, -8}, {-4, -5}, {0, -5}, {-2, -5} } },
	[85] = { .set = { {-2, -8}, {-4, -6}, {1, -5}, {-1, -6} } },
	[86] = { .set = { {-4, -9}, {-3, -5}, {0, -5}, {-2, -6} } },
	[87] = { .set = { {-4, -11}, {-4, -6}, {1, -6}, {-1, -7} } },
	[88] = { .set = { {-1, -8}, {-4, -5}, {2, -5}, {-1, -6} } },
	[89] = { .set = { {-2, -10}, {-4, -5}, {2, -6}, {-1, -6} } },
	[90] = { .set = { {0, -10}, {-4, -6}, {2, -5}, {-1, -6} } },
	[91] = { .set = { {1, -8}, {2, -5}, {-2, -5}, {0, -5} } },
	[92] = { .set = { {1, -9}, {1, -5}, {-4, -6}, {-1, -6} } },
	[93] = { .set = { {1, -8}, {1, -5}, {-4, -4}, {-2, -5} } },
	[94] = { .set = { {3, -8}, {0, -5}, {-2, -4}, {-1, -6} } },
	[95] = { .set = { {2, -8}, {-1, -4}, {-3, -5}, {-2, -5} } },
	[96] = { .set = { {2, -6}, {-1, -4}, {-2, -2}, {-2, -4} } },
	[97] = { .set = { {0, -10}, {-3, -5}, {0, -5}, {-2, -6} } },
	[98] = { .set = { {-1, -10}, {-4, -5}, {1, -6}, {-2, -6} } },
	[99] = { .set = { {1, -9}, {-3, -6}, {2, -4}, {-1, -5} } },
	[100] = { .set = { {-1, -11}, {2, -5}, {-4, -5}, {-1, -6} } },
	[101] = { .set = { {1, -13}, {2, -7}, {-3, -7}, {0, -8} } },
	[102] = { .set = { {-2, -13}, {2, -7}, {-2, -6}, {0, -8} } },
	[103] = { .set = { {-2, -10}, {1, -5}, {-2, -5}, {0, -6} } },
	[104] = { .set = { {-1, -10}, {2, -5}, {-3, -6}, {0, -6} } },
	[105] = { .set = { {-3, -9}, {1, -6}, {-4, -4}, {-1, -5} } },
	[106] = { .set = { {-5, -8}, {-2, -5}, {0, -4}, {-1, -6} } },
	[107] = { .set = { {-4, -8}, {-1, -4}, {1, -5}, {0, -5} } },
	[108] = { .set = { {-4, -6}, {-1, -4}, {0, -2}, {0, -4} } },
	[109] = { .set = { {-3, -8}, {-4, -5}, {0, -5}, {-2, -5} } },
	[110] = { .set = { {-3, -9}, {-3, -5}, {2, -6}, {-1, -6} } },
	[111] = { .set = { {-3, -8}, {-3, -5}, {2, -4}, {0, -5} } },
	[112] = { .set = { {-1, -8}, {-4, -5}, {2, -5}, {-1, -6} } },
	[113] = { .set = { {-1, -11}, {-4, -6}, {2, -6}, {-1, -7} } },
	[114] = { .set = { {1, -8}, {2, -5}, {-2, -5}, {0, -5} } },
	[115] = { .set = { {2, -11}, {2, -6}, {-3, -6}, {-1, -7} } },
	[116] = { .set = { {3, -8}, {0, -5}, {-2, -4}, {-1, -6} } },
	[117] = { .set = { {3, -10}, {-1, -6}, {-2, -6}, {-1, -7} } },
	[118] = { .set = { {0, -10}, {-3, -5}, {0, -5}, {-2, -6} } },
	[119] = { .set = { {-1, -12}, {-4, -6}, {1, -6}, {-2, -7} } },
	[120] = { .set = { {-1, -11}, {2, -5}, {-4, -5}, {-1, -6} } },
	[121] = { .set = { {-1, -13}, {2, -7}, {-4, -7}, {-1, -9} } },
	[122] = { .set = { {-2, -10}, {1, -5}, {-2, -5}, {0, -6} } },
	[123] = { .set = { {-1, -12}, {2, -6}, {-3, -6}, {0, -7} } },
	[124] = { .set = { {-5, -8}, {-2, -5}, {0, -4}, {-1, -6} } },
	[125] = { .set = { {-4, -10}, {0, -6}, {1, -6}, {0, -7} } },
	[126] = { .set = { {-3, -8}, {-4, -5}, {0, -5}, {-2, -5} } },
	[127] = { .set = { {-4, -11}, {-4, -6}, {1, -6}, {-1, -7} } },
	[128] = { .set = { {-2, -4}, {-2, -2}, {2, -1}, {0, -3} } },
	[129] = { .set = { {-3, -4}, {-2, -2}, {2, -1}, {0, -3} } },
	[130] = { .set = { {0, -9}, {-2, -5}, {3, -5}, {0, -6} } },
	[131] = { .set = { {-3, -9}, {0, -6}, {-4, -5}, {-3, -7} } },
	[132] = { .set = { {-2, -9}, {-3, -4}, {-3, -3}, {-3, -5} } },
	[133] = { .set = { {-2, -8}, {-4, -2}, {0, -3}, {-3, -4} } },
	[134] = { .set = { {0, -8}, {4, -1}, {-4, -1}, {0, -2} } },
	[135] = { .set = { {1, -8}, {3, -2}, {-1, -3}, {2, -4} } },
	[136] = { .set = { {1, -9}, {2, -4}, {2, -3}, {2, -5} } },
	[137] = { .set = { {2, -9}, {-1, -6}, {3, -5}, {2, -7} } },
	[138] = { .set = { {-1, -8}, {-4, -5}, {2, -5}, {-1, -6} } },
	[139] = { .set = { {1, -7}, {-3, -4}, {2, -4}, {0, -5} } },
	[140] = { .set = { {-2, -7}, {-3, -4}, {1, -5}, {-1, -5} } },
	[141] = { .set = { {1, -8}, {2, -5}, {-2, -5}, {0, -5} } },
	[142] = { .set = { {0, -8}, {2, -6}, {-3, -5}, {-1, -6} } },
	[143] = { .set = { {2, -9}, {1, -5}, {-2, -5}, {0, -6} } },
	[144] = { .set = { {3, -8}, {0, -5}, {-2, -4}, {-1, -6} } },
	[145] = { .set = { {1, -6}, {-1, -5}, {-3, -4}, {-2, -5} } },
	[146] = { .set = { {3, -9}, {-2, -6}, {0, -5}, {-2, -7} } },
	[147] = { .set = { {0, -10}, {-3, -5}, {0, -5}, {-2, -6} } },
	[148] = { .set = { {0, -8}, {-4, -4}, {-1, -4}, {-3, -5} } },
	[149] = { .set = { {-1, -9}, {-4, -4}, {-1, -4}, {-3, -5} } },
	[150] = { .set = { {-1, -11}, {2, -5}, {-4, -5}, {-1, -6} } },
	[151] = { .set = { {-3, -9}, {2, -4}, {-3, -4}, {-1, -5} } },
	[152] = { .set = { {1, -9}, {2, -4}, {-4, -4}, {-1, -5} } },
	[153] = { .set = { {-2, -10}, {1, -5}, {-2, -5}, {0, -6} } },
	[154] = { .set = { {-2, -8}, {2, -4}, {-1, -4}, {1, -5} } },
	[155] = { .set = { {-1, -9}, {2, -4}, {-1, -4}, {1, -5} } },
	[156] = { .set = { {-5, -8}, {-2, -5}, {0, -4}, {-1, -6} } },
	[157] = { .set = { {-3, -6}, {-1, -5}, {1, -4}, {0, -5} } },
	[158] = { .set = { {-5, -9}, {0, -6}, {-2, -5}, {0, -7} } },
	[159] = { .set = { {-3, -8}, {-4, -5}, {0, -5}, {-2, -5} } },
	[160] = { .set = { {-2, -8}, {-4, -6}, {1, -5}, {-1, -6} } },
	[161] = { .set = { {-4, -9}, {-3, -5}, {0, -5}, {-2, -6} } },
	[162] = { .set = { {-1, -11}, {-4, -6}, {2, -6}, {-1, -7} } },
	[163] = { .set = { {-3, -11}, {-3, -6}, {2, -6}, {0, -7} } },
	[164] = { .set = { {-4, -10}, {0, -6}, {1, -6}, {0, -7} } },
	[165] = { .set = { {-1, -12}, {2, -6}, {-3, -6}, {0, -7} } },
	[166] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -8} } },
	[167] = { .set = { {-1, -12}, {-4, -6}, {1, -6}, {-2, -7} } },
	[168] = { .set = { {3, -10}, {-1, -6}, {-2, -6}, {-1, -7} } },
	[169] = { .set = { {2, -11}, {2, -6}, {-3, -6}, {-1, -7} } },
	[170] = { .set = { {-1, -11}, {-4, -6}, {2, -6}, {-1, -7} } },
	[171] = { .set = { {2, -11}, {2, -6}, {-3, -6}, {-1, -7} } },
	[172] = { .set = { {3, -10}, {-1, -6}, {-2, -6}, {-1, -7} } },
	[173] = { .set = { {0, -12}, {-3, -6}, {2, -6}, {-1, -7} } },
	[174] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -8} } },
	[175] = { .set = { {-1, -12}, {2, -6}, {-3, -6}, {0, -7} } },
	[176] = { .set = { {-4, -10}, {0, -6}, {1, -6}, {0, -7} } },
	[177] = { .set = { {-3, -11}, {-3, -6}, {2, -6}, {0, -7} } },
	[178] = { .set = { {-1, -8}, {-4, -5}, {2, -5}, {-1, -6} } },
	[179] = { .set = { {1, -7}, {-3, -4}, {2, -4}, {0, -5} } },
	[180] = { .set = { {-2, -7}, {-3, -4}, {1, -5}, {-1, -5} } },
	[181] = { .set = { {1, -8}, {2, -5}, {-2, -5}, {0, -5} } },
	[182] = { .set = { {0, -8}, {2, -6}, {-3, -5}, {-1, -6} } },
	[183] = { .set = { {2, -9}, {1, -5}, {-2, -5}, {0, -6} } },
	[184] = { .set = { {4, -8}, {1, -5}, {-1, -4}, {0, -6} } },
	[185] = { .set = { {2, -6}, {0, -5}, {-2, -4}, {-1, -5} } },
	[186] = { .set = { {3, -9}, {-2, -6}, {0, -5}, {-2, -7} } },
	[187] = { .set = { {1, -10}, {-2, -5}, {1, -5}, {-1, -6} } },
	[188] = { .set = { {1, -8}, {-3, -4}, {0, -4}, {-2, -5} } },
	[189] = { .set = { {1, -9}, {-2, -4}, {1, -4}, {-1, -5} } },
	[190] = { .set = { {-1, -11}, {2, -5}, {-4, -5}, {-1, -6} } },
	[191] = { .set = { {-3, -9}, {2, -4}, {-3, -4}, {-1, -5} } },
	[192] = { .set = { {1, -9}, {2, -4}, {-4, -4}, {-1, -5} } },
	[193] = { .set = { {-2, -10}, {1, -5}, {-2, -5}, {0, -6} } },
	[194] = { .set = { {-2, -8}, {2, -4}, {-1, -4}, {1, -5} } },
	[195] = { .set = { {-2, -9}, {1, -4}, {-2, -4}, {0, -5} } },
	[196] = { .set = { {-5, -8}, {-2, -5}, {0, -4}, {-1, -6} } },
	[197] = { .set = { {-3, -6}, {-1, -5}, {1, -4}, {0, -5} } },
	[198] = { .set = { {-5, -9}, {0, -6}, {-2, -5}, {0, -7} } },
	[199] = { .set = { {-2, -8}, {-3, -5}, {1, -5}, {-1, -5} } },
	[200] = { .set = { {-2, -8}, {-4, -6}, {1, -5}, {-1, -6} } },
	[201] = { .set = { {-4, -9}, {-3, -5}, {0, -5}, {-2, -6} } },
	[202] = { .set = { {-1, -11}, {-4, -6}, {2, -6}, {-1, -7} } },
	[203] = { .set = { {-3, -11}, {-3, -6}, {2, -6}, {0, -7} } },
	[204] = { .set = { {-4, -10}, {0, -6}, {1, -6}, {0, -7} } },
	[205] = { .set = { {-1, -12}, {2, -6}, {-3, -6}, {0, -7} } },
	[206] = { .set = { {-1, -12}, {2, -6}, {-4, -6}, {-1, -8} } },
	[207] = { .set = { {0, -12}, {-3, -6}, {2, -6}, {-1, -7} } },
	[208] = { .set = { {3, -10}, {-1, -6}, {-2, -6}, {-1, -7} } },
	[209] = { .set = { {2, -11}, {2, -6}, {-3, -6}, {-1, -7} } },
	[210] = { .set = { {-1, -8}, {-4, -5}, {2, -5}, {-1, -6} } },
	[211] = { .set = { {-3, -8}, {-4, -5}, {0, -5}, {-2, -5} } },
	[212] = { .set = { {-5, -8}, {-2, -5}, {0, -4}, {-1, -6} } },
	[213] = { .set = { {-2, -10}, {1, -5}, {-2, -5}, {0, -6} } },
	[214] = { .set = { {-1, -11}, {2, -5}, {-4, -5}, {-1, -6} } },
	[215] = { .set = { {0, -10}, {-3, -5}, {0, -5}, {-2, -6} } },
	[216] = { .set = { {3, -8}, {0, -5}, {-2, -4}, {-1, -6} } },
	[217] = { .set = { {1, -8}, {2, -5}, {-2, -5}, {0, -5} } },
};

static const ax_anim *const sWynautAnimTable1[] = {
	AX_ANIM_PTR(sWynautAnims_1_1),
	AX_ANIM_PTR(sWynautAnims_1_2),
	AX_ANIM_PTR(sWynautAnims_1_3),
	AX_ANIM_PTR(sWynautAnims_1_4),
	AX_ANIM_PTR(sWynautAnims_1_5),
	AX_ANIM_PTR(sWynautAnims_1_6),
	AX_ANIM_PTR(sWynautAnims_1_7),
	AX_ANIM_PTR(sWynautAnims_1_8),
};

static const ax_anim *const sWynautAnimTable2[] = {
	AX_ANIM_PTR(sWynautAnims_2_1),
	AX_ANIM_PTR(sWynautAnims_2_2),
	AX_ANIM_PTR(sWynautAnims_2_3),
	AX_ANIM_PTR(sWynautAnims_2_4),
	AX_ANIM_PTR(sWynautAnims_2_5),
	AX_ANIM_PTR(sWynautAnims_2_6),
	AX_ANIM_PTR(sWynautAnims_2_7),
	AX_ANIM_PTR(sWynautAnims_2_8),
};

static const ax_anim *const sWynautAnimTable3[] = {
	AX_ANIM_PTR(sWynautAnims_3_1),
	AX_ANIM_PTR(sWynautAnims_3_2),
	AX_ANIM_PTR(sWynautAnims_3_3),
	AX_ANIM_PTR(sWynautAnims_3_4),
	AX_ANIM_PTR(sWynautAnims_3_5),
	AX_ANIM_PTR(sWynautAnims_3_6),
	AX_ANIM_PTR(sWynautAnims_3_7),
	AX_ANIM_PTR(sWynautAnims_3_8),
};

static const ax_anim *const sWynautAnimTable4[] = {
	AX_ANIM_PTR(sWynautAnims_4_1),
	AX_ANIM_PTR(sWynautAnims_4_2),
	AX_ANIM_PTR(sWynautAnims_4_3),
	AX_ANIM_PTR(sWynautAnims_4_4),
	AX_ANIM_PTR(sWynautAnims_4_5),
	AX_ANIM_PTR(sWynautAnims_4_6),
	AX_ANIM_PTR(sWynautAnims_4_7),
	AX_ANIM_PTR(sWynautAnims_4_8),
};

static const ax_anim *const sWynautAnimTable5[] = {
	AX_ANIM_PTR(sWynautAnims_5_1),
	AX_ANIM_PTR(sWynautAnims_5_2),
	AX_ANIM_PTR(sWynautAnims_5_3),
	AX_ANIM_PTR(sWynautAnims_5_4),
	AX_ANIM_PTR(sWynautAnims_5_5),
	AX_ANIM_PTR(sWynautAnims_5_6),
	AX_ANIM_PTR(sWynautAnims_5_7),
	AX_ANIM_PTR(sWynautAnims_5_8),
};

static const ax_anim *const sWynautAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
};

static const ax_anim *const sWynautAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00396),
	AX_ANIM_PTR(gAxSharedAnim_00402),
	AX_ANIM_PTR(gAxSharedAnim_00413),
	AX_ANIM_PTR(gAxSharedAnim_00422),
	AX_ANIM_PTR(gAxSharedAnim_00434),
	AX_ANIM_PTR(gAxSharedAnim_00442),
	AX_ANIM_PTR(gAxSharedAnim_00451),
	AX_ANIM_PTR(gAxSharedAnim_00461),
};

static const ax_anim *const sWynautAnimTable8[] = {
	AX_ANIM_PTR(gAxSharedAnim_02458),
	AX_ANIM_PTR(gAxSharedAnim_02460),
	AX_ANIM_PTR(gAxSharedAnim_02462),
	AX_ANIM_PTR(sWynautAnims_8_4),
	AX_ANIM_PTR(sWynautAnims_8_5),
	AX_ANIM_PTR(sWynautAnims_8_6),
	AX_ANIM_PTR(sWynautAnims_8_7),
	AX_ANIM_PTR(sWynautAnims_8_8),
};

static const ax_anim *const sWynautAnimTable9[] = {
	AX_ANIM_PTR(sWynautAnims_9_1),
	AX_ANIM_PTR(sWynautAnims_9_2),
	AX_ANIM_PTR(sWynautAnims_9_3),
	AX_ANIM_PTR(sWynautAnims_9_4),
	AX_ANIM_PTR(sWynautAnims_9_5),
	AX_ANIM_PTR(sWynautAnims_9_6),
	AX_ANIM_PTR(sWynautAnims_9_7),
	AX_ANIM_PTR(sWynautAnims_9_8),
};

static const ax_anim *const sWynautAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00801),
	AX_ANIM_PTR(gAxSharedAnim_00813),
	AX_ANIM_PTR(gAxSharedAnim_00827),
	AX_ANIM_PTR(gAxSharedAnim_00838),
	AX_ANIM_PTR(gAxSharedAnim_00849),
	AX_ANIM_PTR(gAxSharedAnim_00862),
	AX_ANIM_PTR(gAxSharedAnim_00879),
	AX_ANIM_PTR(gAxSharedAnim_00889),
};

static const ax_anim *const sWynautAnimTable11[] = {
	AX_ANIM_PTR(sWynautAnims_11_1),
	AX_ANIM_PTR(gAxSharedAnim_00939),
	AX_ANIM_PTR(sWynautAnims_11_3),
	AX_ANIM_PTR(sWynautAnims_11_4),
	AX_ANIM_PTR(sWynautAnims_11_5),
	AX_ANIM_PTR(gAxSharedAnim_01120),
	AX_ANIM_PTR(sWynautAnims_11_7),
	AX_ANIM_PTR(gAxSharedAnim_01197),
};

static const ax_anim *const sWynautAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01243),
	AX_ANIM_PTR(gAxSharedAnim_01326),
	AX_ANIM_PTR(gAxSharedAnim_01308),
	AX_ANIM_PTR(gAxSharedAnim_01292),
	AX_ANIM_PTR(gAxSharedAnim_01291),
	AX_ANIM_PTR(gAxSharedAnim_01280),
	AX_ANIM_PTR(gAxSharedAnim_01260),
	AX_ANIM_PTR(gAxSharedAnim_01244),
};

static const ax_anim *const sWynautAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01335),
	AX_ANIM_PTR(gAxSharedAnim_01409),
	AX_ANIM_PTR(gAxSharedAnim_01397),
	AX_ANIM_PTR(gAxSharedAnim_01386),
	AX_ANIM_PTR(gAxSharedAnim_01374),
	AX_ANIM_PTR(gAxSharedAnim_01366),
	AX_ANIM_PTR(gAxSharedAnim_01358),
	AX_ANIM_PTR(gAxSharedAnim_01348),
};

static const ax_anim *const *const sAxAnimationsWynaut[] = {
	sWynautAnimTable1,
	sWynautAnimTable2,
	sWynautAnimTable3,
	sWynautAnimTable4,
	sWynautAnimTable5,
	sWynautAnimTable6,
	sWynautAnimTable7,
	sWynautAnimTable8,
	sWynautAnimTable9,
	sWynautAnimTable10,
	sWynautAnimTable11,
	sWynautAnimTable12,
	sWynautAnimTable13,
};

static const ax_sprite *const sAxSpritesWynaut[] = {
	sWynautSprites1,
	sWynautSprites2,
	sWynautSprites3,
	sWynautSprites4,
	sWynautSprites5,
	sWynautSprites6,
	sWynautSprites7,
	sWynautSprites8,
	sWynautSprites9,
	sWynautSprites10,
	sWynautSprites11,
	sWynautSprites12,
	sWynautSprites13,
	sWynautSprites14,
	sWynautSprites15,
	sWynautSprites16,
	sWynautSprites17,
	sWynautSprites18,
	sWynautSprites19,
	sWynautSprites20,
	sWynautSprites21,
	sWynautSprites22,
	sWynautSprites23,
	sWynautSprites24,
	sWynautSprites25,
	sWynautSprites26,
	sWynautSprites27,
	sWynautSprites28,
	sWynautSprites29,
	sWynautSprites30,
	sWynautSprites31,
	sWynautSprites32,
	sWynautSprites33,
	sWynautSprites34,
	sWynautSprites35,
	sWynautSprites36,
	sWynautSprites37,
};

static const axmain sAxMainWynaut = {
	.poses = sAxPosesWynaut,
	.animations = sAxAnimationsWynaut,
	.animCount = ARRAY_COUNT(sAxAnimationsWynaut),
	.spriteData = sAxSpritesWynaut,
	.positions = sAxPositionsWynaut,
};
