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
static const axmain sAxMainSurskit;
const SiroArchive gAxSurskit = {"SIRO", &sAxMainSurskit};

static const ax_pose sSurskitPose1[] = {
	AX_POSE(0, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose2[] = {
	AX_POSE(1, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose3[] = {
	AX_POSE(2, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose4[] = {
	AX_POSE(3, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose5[] = {
	AX_POSE(4, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose6[] = {
	AX_POSE(5, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose7[] = {
	AX_POSE(6, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose8[] = {
	AX_POSE(7, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose9[] = {
	AX_POSE(8, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose10[] = {
	AX_POSE(9, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose11[] = {
	AX_POSE(10, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose12[] = {
	AX_POSE(11, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose13[] = {
	AX_POSE(12, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose14[] = {
	AX_POSE(13, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose15[] = {
	AX_POSE(14, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose16[] = {
	AX_POSE(9, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose17[] = {
	AX_POSE(10, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose18[] = {
	AX_POSE(11, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose19[] = {
	AX_POSE(6, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose20[] = {
	AX_POSE(7, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose21[] = {
	AX_POSE(8, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose22[] = {
	AX_POSE(3, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose23[] = {
	AX_POSE(4, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose24[] = {
	AX_POSE(5, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose25[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose29[] = {
	AX_POSE(16, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose33[] = {
	AX_POSE(17, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose37[] = {
	AX_POSE(18, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose41[] = {
	AX_POSE(19, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose45[] = {
	AX_POSE(18, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose49[] = {
	AX_POSE(17, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose53[] = {
	AX_POSE(16, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose90[] = {
	AX_POSE(20, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose92[] = {
	AX_POSE(21, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose94[] = {
	AX_POSE(22, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose96[] = {
	AX_POSE(23, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose98[] = {
	AX_POSE(24, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose100[] = {
	AX_POSE(23, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose102[] = {
	AX_POSE(22, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose104[] = {
	AX_POSE(21, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose113[] = {
	AX_POSE(25, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose114[] = {
	AX_POSE(26, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose115[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose116[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose117[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose118[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose119[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose120[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose121[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose122[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose134[] = {
	AX_POSE(23, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose136[] = {
	AX_POSE(23, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose137[] = {
	AX_POSE(22, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose138[] = {
	AX_POSE(21, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose154[] = {
	AX_POSE(23, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose158[] = {
	AX_POSE(23, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose160[] = {
	AX_POSE(22, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose164[] = {
	AX_POSE(21, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose167[] = {
	AX_POSE(24, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose169[] = {
	AX_POSE(22, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSurskitPose170[] = {
	AX_POSE(21, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sSurskitAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_1_1.lz");
static const u8 sSurskitAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_1_2.lz");
static const u8 sSurskitAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_1_3.lz");
static const u8 sSurskitAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_1_4.lz");
static const u8 sSurskitAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_1_5.lz");
static const u8 sSurskitAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_1_6.lz");
static const u8 sSurskitAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_1_7.lz");
static const u8 sSurskitAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_1_8.lz");
static const u8 sSurskitAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_2_1.lz");
static const u8 sSurskitAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_2_2.lz");
static const u8 sSurskitAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_2_3.lz");
static const u8 sSurskitAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_2_4.lz");
static const u8 sSurskitAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_2_5.lz");
static const u8 sSurskitAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_2_6.lz");
static const u8 sSurskitAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_2_7.lz");
static const u8 sSurskitAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_2_8.lz");
static const u8 sSurskitAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_3_1.lz");
static const u8 sSurskitAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_3_2.lz");
static const u8 sSurskitAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_3_3.lz");
static const u8 sSurskitAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_3_4.lz");
static const u8 sSurskitAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_3_5.lz");
static const u8 sSurskitAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_3_6.lz");
static const u8 sSurskitAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_3_7.lz");
static const u8 sSurskitAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_3_8.lz");
static const u8 sSurskitAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_4_1.lz");
static const u8 sSurskitAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_4_2.lz");
static const u8 sSurskitAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_4_3.lz");
static const u8 sSurskitAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_4_4.lz");
static const u8 sSurskitAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_4_5.lz");
static const u8 sSurskitAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_4_6.lz");
static const u8 sSurskitAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_4_7.lz");
static const u8 sSurskitAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_4_8.lz");
static const u8 sSurskitAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_8_1.lz");
static const u8 sSurskitAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_8_2.lz");
static const u8 sSurskitAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_8_3.lz");
static const u8 sSurskitAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_8_4.lz");
static const u8 sSurskitAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_8_5.lz");
static const u8 sSurskitAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_8_6.lz");
static const u8 sSurskitAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_8_7.lz");
static const u8 sSurskitAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_8_8.lz");
static const u8 sSurskitAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_9_1.lz");
static const u8 sSurskitAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_9_2.lz");
static const u8 sSurskitAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_9_3.lz");
static const u8 sSurskitAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_9_4.lz");
static const u8 sSurskitAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_9_5.lz");
static const u8 sSurskitAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_9_6.lz");
static const u8 sSurskitAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_9_7.lz");
static const u8 sSurskitAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_9_8.lz");
static const u8 sSurskitAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_11_1.lz");
static const u8 sSurskitAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_11_2.lz");
static const u8 sSurskitAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_11_3.lz");
static const u8 sSurskitAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_11_4.lz");
static const u8 sSurskitAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_11_5.lz");
static const u8 sSurskitAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_11_6.lz");
static const u8 sSurskitAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_11_7.lz");
static const u8 sSurskitAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/surskit/sSurskitAnims_11_8.lz");

static const u8 sSurskitGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_1.4bpp.lz");
static const ax_sprite sSurskitSprites1[] = {
	{sSurskitGfx1, ARRAY_COUNT(sSurskitGfx1)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_2.4bpp.lz");
static const ax_sprite sSurskitSprites2[] = {
	{sSurskitGfx2, ARRAY_COUNT(sSurskitGfx2)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_3.4bpp.lz");
static const ax_sprite sSurskitSprites3[] = {
	{sSurskitGfx3, ARRAY_COUNT(sSurskitGfx3)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_4.4bpp.lz");
static const ax_sprite sSurskitSprites4[] = {
	{sSurskitGfx4, ARRAY_COUNT(sSurskitGfx4)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_5.4bpp.lz");
static const ax_sprite sSurskitSprites5[] = {
	{sSurskitGfx5, ARRAY_COUNT(sSurskitGfx5)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_6.4bpp.lz");
static const ax_sprite sSurskitSprites6[] = {
	{sSurskitGfx6, ARRAY_COUNT(sSurskitGfx6)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_7.4bpp.lz");
static const ax_sprite sSurskitSprites7[] = {
	{sSurskitGfx7, ARRAY_COUNT(sSurskitGfx7)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_8.4bpp.lz");
static const ax_sprite sSurskitSprites8[] = {
	{sSurskitGfx8, ARRAY_COUNT(sSurskitGfx8)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_9.4bpp.lz");
static const ax_sprite sSurskitSprites9[] = {
	{sSurskitGfx9, ARRAY_COUNT(sSurskitGfx9)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_10.4bpp.lz");
static const ax_sprite sSurskitSprites10[] = {
	{sSurskitGfx10, ARRAY_COUNT(sSurskitGfx10)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_11.4bpp.lz");
static const ax_sprite sSurskitSprites11[] = {
	{sSurskitGfx11, ARRAY_COUNT(sSurskitGfx11)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_12.4bpp.lz");
static const ax_sprite sSurskitSprites12[] = {
	{sSurskitGfx12, ARRAY_COUNT(sSurskitGfx12)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_13.4bpp.lz");
static const ax_sprite sSurskitSprites13[] = {
	{sSurskitGfx13, ARRAY_COUNT(sSurskitGfx13)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_14.4bpp.lz");
static const ax_sprite sSurskitSprites14[] = {
	{sSurskitGfx14, ARRAY_COUNT(sSurskitGfx14)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_15.4bpp.lz");
static const ax_sprite sSurskitSprites15[] = {
	{sSurskitGfx15, ARRAY_COUNT(sSurskitGfx15)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_16.4bpp.lz");
static const u8 sSurskitGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_16_1.4bpp.lz");
static const u8 sSurskitGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_16_2.4bpp.lz");
static const ax_sprite sSurskitSprites16[] = {
	{NULL, 32}, 
	{sSurskitGfx16, ARRAY_COUNT(sSurskitGfx16)}, 
	{NULL, 64}, 
	{sSurskitGfx16_1, ARRAY_COUNT(sSurskitGfx16_1)}, 
	{NULL, 32}, 
	{sSurskitGfx16_2, ARRAY_COUNT(sSurskitGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSurskitGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_17.4bpp.lz");
static const u8 sSurskitGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_17_1.4bpp.lz");
static const u8 sSurskitGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_17_2.4bpp.lz");
static const ax_sprite sSurskitSprites17[] = {
	{NULL, 32}, 
	{sSurskitGfx17, ARRAY_COUNT(sSurskitGfx17)}, 
	{NULL, 32}, 
	{sSurskitGfx17_1, ARRAY_COUNT(sSurskitGfx17_1)}, 
	{NULL, 64}, 
	{sSurskitGfx17_2, ARRAY_COUNT(sSurskitGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSurskitGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_18.4bpp.lz");
static const u8 sSurskitGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_18_1.4bpp.lz");
static const u8 sSurskitGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_18_2.4bpp.lz");
static const ax_sprite sSurskitSprites18[] = {
	{NULL, 32}, 
	{sSurskitGfx18, ARRAY_COUNT(sSurskitGfx18)}, 
	{NULL, 64}, 
	{sSurskitGfx18_1, ARRAY_COUNT(sSurskitGfx18_1)}, 
	{NULL, 32}, 
	{sSurskitGfx18_2, ARRAY_COUNT(sSurskitGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSurskitGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_19.4bpp.lz");
static const u8 sSurskitGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_19_1.4bpp.lz");
static const u8 sSurskitGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_19_2.4bpp.lz");
static const ax_sprite sSurskitSprites19[] = {
	{NULL, 32}, 
	{sSurskitGfx19, ARRAY_COUNT(sSurskitGfx19)}, 
	{NULL, 32}, 
	{sSurskitGfx19_1, ARRAY_COUNT(sSurskitGfx19_1)}, 
	{NULL, 64}, 
	{sSurskitGfx19_2, ARRAY_COUNT(sSurskitGfx19_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sSurskitGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_20.4bpp.lz");
static const u8 sSurskitGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_20_1.4bpp.lz");
static const u8 sSurskitGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_20_2.4bpp.lz");
static const u8 sSurskitGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_20_3.4bpp.lz");
static const ax_sprite sSurskitSprites20[] = {
	{sSurskitGfx20, ARRAY_COUNT(sSurskitGfx20)}, 
	{NULL, 32}, 
	{sSurskitGfx20_1, ARRAY_COUNT(sSurskitGfx20_1)}, 
	{NULL, 32}, 
	{sSurskitGfx20_2, ARRAY_COUNT(sSurskitGfx20_2)}, 
	{NULL, 32}, 
	{sSurskitGfx20_3, ARRAY_COUNT(sSurskitGfx20_3)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSurskitGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_21.4bpp.lz");
static const u8 sSurskitGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_21_1.4bpp.lz");
static const ax_sprite sSurskitSprites21[] = {
	{sSurskitGfx21, ARRAY_COUNT(sSurskitGfx21)}, 
	{NULL, 32}, 
	{sSurskitGfx21_1, ARRAY_COUNT(sSurskitGfx21_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSurskitGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_22.4bpp.lz");
static const u8 sSurskitGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_22_1.4bpp.lz");
static const u8 sSurskitGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_22_2.4bpp.lz");
static const ax_sprite sSurskitSprites22[] = {
	{NULL, 32}, 
	{sSurskitGfx22, ARRAY_COUNT(sSurskitGfx22)}, 
	{NULL, 64}, 
	{sSurskitGfx22_1, ARRAY_COUNT(sSurskitGfx22_1)}, 
	{NULL, 32}, 
	{sSurskitGfx22_2, ARRAY_COUNT(sSurskitGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSurskitGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_23.4bpp.lz");
static const u8 sSurskitGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_23_1.4bpp.lz");
static const ax_sprite sSurskitSprites23[] = {
	{sSurskitGfx23, ARRAY_COUNT(sSurskitGfx23)}, 
	{NULL, 32}, 
	{sSurskitGfx23_1, ARRAY_COUNT(sSurskitGfx23_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSurskitGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_24.4bpp.lz");
static const u8 sSurskitGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_24_1.4bpp.lz");
static const u8 sSurskitGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_24_2.4bpp.lz");
static const ax_sprite sSurskitSprites24[] = {
	{sSurskitGfx24, ARRAY_COUNT(sSurskitGfx24)}, 
	{NULL, 32}, 
	{sSurskitGfx24_1, ARRAY_COUNT(sSurskitGfx24_1)}, 
	{NULL, 64}, 
	{sSurskitGfx24_2, ARRAY_COUNT(sSurskitGfx24_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sSurskitGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_25.4bpp.lz");
static const u8 sSurskitGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_25_1.4bpp.lz");
static const ax_sprite sSurskitSprites25[] = {
	{sSurskitGfx25, ARRAY_COUNT(sSurskitGfx25)}, 
	{NULL, 32}, 
	{sSurskitGfx25_1, ARRAY_COUNT(sSurskitGfx25_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSurskitGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_26.4bpp.lz");
static const ax_sprite sSurskitSprites26[] = {
	{sSurskitGfx26, ARRAY_COUNT(sSurskitGfx26)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_27.4bpp.lz");
static const ax_sprite sSurskitSprites27[] = {
	{sSurskitGfx27, ARRAY_COUNT(sSurskitGfx27)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_28.4bpp.lz");
static const ax_sprite sSurskitSprites28[] = {
	{sSurskitGfx28, ARRAY_COUNT(sSurskitGfx28)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_29.4bpp.lz");
static const ax_sprite sSurskitSprites29[] = {
	{sSurskitGfx29, ARRAY_COUNT(sSurskitGfx29)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_30.4bpp.lz");
static const ax_sprite sSurskitSprites30[] = {
	{sSurskitGfx30, ARRAY_COUNT(sSurskitGfx30)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_31.4bpp.lz");
static const ax_sprite sSurskitSprites31[] = {
	{sSurskitGfx31, ARRAY_COUNT(sSurskitGfx31)}, 
	{NULL, 0}
};
static const u8 sSurskitGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/surskit/sprite_32.4bpp.lz");
static const ax_sprite sSurskitSprites32[] = {
	{sSurskitGfx32, ARRAY_COUNT(sSurskitGfx32)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSurskit[] = {
	sSurskitPose1,
	sSurskitPose2,
	sSurskitPose3,
	sSurskitPose4,
	sSurskitPose5,
	sSurskitPose6,
	sSurskitPose7,
	sSurskitPose8,
	sSurskitPose9,
	sSurskitPose10,
	sSurskitPose11,
	sSurskitPose12,
	sSurskitPose13,
	sSurskitPose14,
	sSurskitPose15,
	sSurskitPose16,
	sSurskitPose17,
	sSurskitPose18,
	sSurskitPose19,
	sSurskitPose20,
	sSurskitPose21,
	sSurskitPose22,
	sSurskitPose23,
	sSurskitPose24,
	sSurskitPose25,
	sSurskitPose1,
	sSurskitPose2,
	sSurskitPose3,
	sSurskitPose29,
	sSurskitPose4,
	sSurskitPose5,
	sSurskitPose6,
	sSurskitPose33,
	sSurskitPose7,
	sSurskitPose8,
	sSurskitPose9,
	sSurskitPose37,
	sSurskitPose10,
	sSurskitPose11,
	sSurskitPose12,
	sSurskitPose41,
	sSurskitPose13,
	sSurskitPose14,
	sSurskitPose15,
	sSurskitPose45,
	sSurskitPose16,
	sSurskitPose17,
	sSurskitPose18,
	sSurskitPose49,
	sSurskitPose19,
	sSurskitPose20,
	sSurskitPose21,
	sSurskitPose53,
	sSurskitPose22,
	sSurskitPose23,
	sSurskitPose24,
	sSurskitPose25,
	sSurskitPose1,
	sSurskitPose2,
	sSurskitPose3,
	sSurskitPose29,
	sSurskitPose4,
	sSurskitPose5,
	sSurskitPose6,
	sSurskitPose33,
	sSurskitPose7,
	sSurskitPose8,
	sSurskitPose9,
	sSurskitPose37,
	sSurskitPose10,
	sSurskitPose11,
	sSurskitPose12,
	sSurskitPose41,
	sSurskitPose13,
	sSurskitPose14,
	sSurskitPose15,
	sSurskitPose45,
	sSurskitPose16,
	sSurskitPose17,
	sSurskitPose18,
	sSurskitPose49,
	sSurskitPose19,
	sSurskitPose20,
	sSurskitPose21,
	sSurskitPose53,
	sSurskitPose22,
	sSurskitPose23,
	sSurskitPose24,
	sSurskitPose25,
	sSurskitPose90,
	sSurskitPose29,
	sSurskitPose92,
	sSurskitPose33,
	sSurskitPose94,
	sSurskitPose37,
	sSurskitPose96,
	sSurskitPose41,
	sSurskitPose98,
	sSurskitPose45,
	sSurskitPose100,
	sSurskitPose49,
	sSurskitPose102,
	sSurskitPose53,
	sSurskitPose104,
	sSurskitPose25,
	sSurskitPose53,
	sSurskitPose49,
	sSurskitPose45,
	sSurskitPose41,
	sSurskitPose37,
	sSurskitPose33,
	sSurskitPose29,
	sSurskitPose113,
	sSurskitPose114,
	sSurskitPose115,
	sSurskitPose116,
	sSurskitPose117,
	sSurskitPose118,
	sSurskitPose119,
	sSurskitPose120,
	sSurskitPose121,
	sSurskitPose122,
	sSurskitPose25,
	sSurskitPose53,
	sSurskitPose49,
	sSurskitPose45,
	sSurskitPose41,
	sSurskitPose37,
	sSurskitPose33,
	sSurskitPose29,
	sSurskitPose90,
	sSurskitPose104,
	sSurskitPose102,
	sSurskitPose134,
	sSurskitPose98,
	sSurskitPose136,
	sSurskitPose137,
	sSurskitPose138,
	sSurskitPose1,
	sSurskitPose4,
	sSurskitPose7,
	sSurskitPose10,
	sSurskitPose13,
	sSurskitPose16,
	sSurskitPose19,
	sSurskitPose22,
	sSurskitPose25,
	sSurskitPose90,
	sSurskitPose29,
	sSurskitPose92,
	sSurskitPose33,
	sSurskitPose94,
	sSurskitPose37,
	sSurskitPose154,
	sSurskitPose41,
	sSurskitPose98,
	sSurskitPose45,
	sSurskitPose158,
	sSurskitPose49,
	sSurskitPose160,
	sSurskitPose53,
	sSurskitPose104,
	sSurskitPose90,
	sSurskitPose164,
	sSurskitPose160,
	sSurskitPose134,
	sSurskitPose167,
	sSurskitPose136,
	sSurskitPose169,
	sSurskitPose170,
	sSurskitPose25,
	sSurskitPose53,
	sSurskitPose49,
	sSurskitPose45,
	sSurskitPose41,
	sSurskitPose37,
	sSurskitPose33,
	sSurskitPose29,
};

static const struct PositionSets sAxPositionsSurskit[] = {
	[0] = { .set = { {0, -2}, {-10, 1}, {10, 1}, {0, -5} } },
	[1] = { .set = { {1, -1}, {-9, 1}, {10, 1}, {1, -4} } },
	[2] = { .set = { {-2, -1}, {-11, 1}, {8, 1}, {-2, -4} } },
	[3] = { .set = { {3, -2}, {9, -1}, {-4, 3}, {1, -5} } },
	[4] = { .set = { {2, 0}, {9, -1}, {-4, 3}, {0, -3} } },
	[5] = { .set = { {4, -1}, {9, -1}, {-4, 3}, {2, -4} } },
	[6] = { .set = { {4, -4}, {6, -3}, {7, 2}, {0, -6} } },
	[7] = { .set = { {4, -3}, {6, -3}, {7, 2}, {0, -5} } },
	[8] = { .set = { {4, -5}, {6, -3}, {7, 2}, {0, -7} } },
	[9] = { .set = { {3, -5}, {0, -9}, {9, -2}, {0, -6} } },
	[10] = { .set = { {4, -3}, {1, -7}, {10, -2}, {1, -4} } },
	[11] = { .set = { {2, -4}, {-1, -8}, {9, -2}, {-1, -5} } },
	[12] = { .set = { {0, -5}, {9, -4}, {-9, -4}, {0, -6} } },
	[13] = { .set = { {-1, -4}, {8, -4}, {-9, -4}, {-1, -5} } },
	[14] = { .set = { {1, -4}, {9, -4}, {-8, -4}, {1, -5} } },
	[15] = { .set = { {-3, -5}, {0, -9}, {-9, -2}, {0, -6} } },
	[16] = { .set = { {-4, -3}, {-1, -7}, {-10, -2}, {-1, -4} } },
	[17] = { .set = { {-2, -4}, {1, -8}, {-9, -2}, {1, -5} } },
	[18] = { .set = { {-4, -4}, {-6, -3}, {-7, 2}, {0, -6} } },
	[19] = { .set = { {-4, -3}, {-6, -3}, {-7, 2}, {0, -5} } },
	[20] = { .set = { {-4, -5}, {-6, -3}, {-7, 2}, {0, -7} } },
	[21] = { .set = { {-3, -2}, {-9, -1}, {4, 3}, {-1, -5} } },
	[22] = { .set = { {-2, 0}, {-9, -1}, {4, 3}, {0, -3} } },
	[23] = { .set = { {-4, -1}, {-9, -1}, {4, 3}, {-2, -4} } },
	[24] = { .set = { {0, -4}, {-10, 1}, {10, 1}, {0, -7} } },
	[25] = { .set = { {0, -2}, {-10, 1}, {10, 1}, {0, -5} } },
	[26] = { .set = { {1, -1}, {-9, 1}, {10, 1}, {1, -4} } },
	[27] = { .set = { {-2, -1}, {-11, 1}, {8, 1}, {-2, -4} } },
	[28] = { .set = { {3, -4}, {10, -3}, {-3, 3}, {1, -7} } },
	[29] = { .set = { {3, -2}, {9, -1}, {-4, 3}, {1, -5} } },
	[30] = { .set = { {2, 0}, {9, -1}, {-4, 3}, {0, -3} } },
	[31] = { .set = { {4, -1}, {9, -1}, {-4, 3}, {2, -4} } },
	[32] = { .set = { {4, -5}, {7, -5}, {8, 2}, {0, -7} } },
	[33] = { .set = { {4, -4}, {6, -3}, {7, 2}, {0, -6} } },
	[34] = { .set = { {4, -3}, {6, -3}, {7, 2}, {0, -5} } },
	[35] = { .set = { {4, -5}, {6, -3}, {7, 2}, {0, -7} } },
	[36] = { .set = { {3, -6}, {0, -10}, {10, -3}, {0, -7} } },
	[37] = { .set = { {3, -5}, {0, -9}, {9, -2}, {0, -6} } },
	[38] = { .set = { {4, -3}, {1, -7}, {10, -2}, {1, -4} } },
	[39] = { .set = { {2, -4}, {-1, -8}, {9, -2}, {-1, -5} } },
	[40] = { .set = { {0, -6}, {9, -4}, {-9, -4}, {0, -7} } },
	[41] = { .set = { {0, -5}, {9, -4}, {-9, -4}, {0, -6} } },
	[42] = { .set = { {-1, -4}, {8, -4}, {-9, -4}, {-1, -5} } },
	[43] = { .set = { {1, -4}, {9, -4}, {-8, -4}, {1, -5} } },
	[44] = { .set = { {-3, -6}, {0, -10}, {-10, -3}, {0, -7} } },
	[45] = { .set = { {-3, -5}, {0, -9}, {-9, -2}, {0, -6} } },
	[46] = { .set = { {-4, -3}, {-1, -7}, {-10, -2}, {-1, -4} } },
	[47] = { .set = { {-2, -4}, {1, -8}, {-9, -2}, {1, -5} } },
	[48] = { .set = { {-4, -5}, {-7, -5}, {-8, 2}, {0, -7} } },
	[49] = { .set = { {-4, -4}, {-6, -3}, {-7, 2}, {0, -6} } },
	[50] = { .set = { {-4, -3}, {-6, -3}, {-7, 2}, {0, -5} } },
	[51] = { .set = { {-4, -5}, {-6, -3}, {-7, 2}, {0, -7} } },
	[52] = { .set = { {-3, -4}, {-10, -3}, {3, 3}, {-1, -7} } },
	[53] = { .set = { {-3, -2}, {-9, -1}, {4, 3}, {-1, -5} } },
	[54] = { .set = { {-2, 0}, {-9, -1}, {4, 3}, {0, -3} } },
	[55] = { .set = { {-4, -1}, {-9, -1}, {4, 3}, {-2, -4} } },
	[56] = { .set = { {0, -4}, {-10, 1}, {10, 1}, {0, -7} } },
	[57] = { .set = { {0, -2}, {-10, 1}, {10, 1}, {0, -5} } },
	[58] = { .set = { {1, -1}, {-9, 1}, {10, 1}, {1, -4} } },
	[59] = { .set = { {-2, -1}, {-11, 1}, {8, 1}, {-2, -4} } },
	[60] = { .set = { {3, -4}, {10, -3}, {-3, 3}, {1, -7} } },
	[61] = { .set = { {3, -2}, {9, -1}, {-4, 3}, {1, -5} } },
	[62] = { .set = { {2, 0}, {9, -1}, {-4, 3}, {0, -3} } },
	[63] = { .set = { {4, -1}, {9, -1}, {-4, 3}, {2, -4} } },
	[64] = { .set = { {4, -5}, {7, -5}, {8, 2}, {0, -7} } },
	[65] = { .set = { {4, -4}, {6, -3}, {7, 2}, {0, -6} } },
	[66] = { .set = { {4, -3}, {6, -3}, {7, 2}, {0, -5} } },
	[67] = { .set = { {4, -5}, {6, -3}, {7, 2}, {0, -7} } },
	[68] = { .set = { {3, -6}, {0, -10}, {10, -3}, {0, -7} } },
	[69] = { .set = { {3, -5}, {0, -9}, {9, -2}, {0, -6} } },
	[70] = { .set = { {4, -3}, {1, -7}, {10, -2}, {1, -4} } },
	[71] = { .set = { {2, -4}, {-1, -8}, {9, -2}, {-1, -5} } },
	[72] = { .set = { {0, -6}, {9, -4}, {-9, -4}, {0, -7} } },
	[73] = { .set = { {0, -5}, {9, -4}, {-9, -4}, {0, -6} } },
	[74] = { .set = { {-1, -4}, {8, -4}, {-9, -4}, {-1, -5} } },
	[75] = { .set = { {1, -4}, {9, -4}, {-8, -4}, {1, -5} } },
	[76] = { .set = { {-3, -6}, {0, -10}, {-10, -3}, {0, -7} } },
	[77] = { .set = { {-3, -5}, {0, -9}, {-9, -2}, {0, -6} } },
	[78] = { .set = { {-4, -3}, {-1, -7}, {-10, -2}, {-1, -4} } },
	[79] = { .set = { {-2, -4}, {1, -8}, {-9, -2}, {1, -5} } },
	[80] = { .set = { {-4, -5}, {-7, -5}, {-8, 2}, {0, -7} } },
	[81] = { .set = { {-4, -4}, {-6, -3}, {-7, 2}, {0, -6} } },
	[82] = { .set = { {-4, -3}, {-6, -3}, {-7, 2}, {0, -5} } },
	[83] = { .set = { {-4, -5}, {-6, -3}, {-7, 2}, {0, -7} } },
	[84] = { .set = { {-3, -4}, {-10, -3}, {3, 3}, {-1, -7} } },
	[85] = { .set = { {-3, -2}, {-9, -1}, {4, 3}, {-1, -5} } },
	[86] = { .set = { {-2, 0}, {-9, -1}, {4, 3}, {0, -3} } },
	[87] = { .set = { {-4, -1}, {-9, -1}, {4, 3}, {-2, -4} } },
	[88] = { .set = { {0, -4}, {-10, 1}, {10, 1}, {0, -7} } },
	[89] = { .set = { {0, 1}, {-10, 1}, {10, 1}, {0, -3} } },
	[90] = { .set = { {3, -4}, {10, -3}, {-3, 3}, {1, -7} } },
	[91] = { .set = { {3, 0}, {10, -3}, {-4, 3}, {2, -4} } },
	[92] = { .set = { {4, -5}, {7, -5}, {8, 2}, {0, -7} } },
	[93] = { .set = { {4, -1}, {7, -6}, {7, 2}, {2, -4} } },
	[94] = { .set = { {3, -6}, {0, -10}, {10, -3}, {0, -7} } },
	[95] = { .set = { {5, -4}, {4, -9}, {11, -3}, {3, -7} } },
	[96] = { .set = { {0, -6}, {9, -4}, {-9, -4}, {0, -7} } },
	[97] = { .set = { {0, -4}, {9, -4}, {-9, -4}, {0, -6} } },
	[98] = { .set = { {-3, -6}, {0, -10}, {-10, -3}, {0, -7} } },
	[99] = { .set = { {-5, -4}, {-4, -9}, {-11, -3}, {-3, -7} } },
	[100] = { .set = { {-4, -5}, {-7, -5}, {-8, 2}, {0, -7} } },
	[101] = { .set = { {-4, -1}, {-7, -6}, {-7, 2}, {-2, -4} } },
	[102] = { .set = { {-3, -4}, {-10, -3}, {3, 3}, {-1, -7} } },
	[103] = { .set = { {-3, 0}, {-10, -3}, {4, 3}, {-2, -4} } },
	[104] = { .set = { {0, -4}, {-10, 1}, {10, 1}, {0, -7} } },
	[105] = { .set = { {-3, -4}, {-10, -3}, {3, 3}, {-1, -7} } },
	[106] = { .set = { {-4, -5}, {-7, -5}, {-8, 2}, {0, -7} } },
	[107] = { .set = { {-3, -6}, {0, -10}, {-10, -3}, {0, -7} } },
	[108] = { .set = { {0, -6}, {9, -4}, {-9, -4}, {0, -7} } },
	[109] = { .set = { {3, -6}, {0, -10}, {10, -3}, {0, -7} } },
	[110] = { .set = { {4, -5}, {7, -5}, {8, 2}, {0, -7} } },
	[111] = { .set = { {3, -4}, {10, -3}, {-3, 3}, {1, -7} } },
	[112] = { .set = { {-3, -1}, {-10, -1}, {4, 5}, {-1, -4} } },
	[113] = { .set = { {-3, -2}, {-10, -1}, {4, 5}, {-1, -4} } },
	[114] = { .set = { {0, -1}, {-8, -7}, {8, -7}, {0, -4} } },
	[115] = { .set = { {3, -1}, {8, -10}, {-4, -10}, {1, -4} } },
	[116] = { .set = { {4, -1}, {6, -11}, {7, -6}, {0, -4} } },
	[117] = { .set = { {3, -3}, {0, -12}, {8, -9}, {1, -4} } },
	[118] = { .set = { {0, -3}, {7, -11}, {-7, -11}, {0, -4} } },
	[119] = { .set = { {-3, -3}, {0, -12}, {-8, -9}, {-1, -4} } },
	[120] = { .set = { {-4, -1}, {-6, -11}, {-7, -6}, {0, -4} } },
	[121] = { .set = { {-3, -1}, {-8, -10}, {4, -10}, {-1, -4} } },
	[122] = { .set = { {0, -4}, {-10, 1}, {10, 1}, {0, -7} } },
	[123] = { .set = { {-3, -4}, {-10, -3}, {3, 3}, {-1, -7} } },
	[124] = { .set = { {-4, -5}, {-7, -5}, {-8, 2}, {0, -7} } },
	[125] = { .set = { {-3, -6}, {0, -10}, {-10, -3}, {0, -7} } },
	[126] = { .set = { {0, -6}, {9, -4}, {-9, -4}, {0, -7} } },
	[127] = { .set = { {3, -6}, {0, -10}, {10, -3}, {0, -7} } },
	[128] = { .set = { {4, -5}, {7, -5}, {8, 2}, {0, -7} } },
	[129] = { .set = { {3, -4}, {10, -3}, {-3, 3}, {1, -7} } },
	[130] = { .set = { {0, 1}, {-10, 1}, {10, 1}, {0, -3} } },
	[131] = { .set = { {-3, 0}, {-10, -3}, {4, 3}, {-2, -4} } },
	[132] = { .set = { {-4, -1}, {-7, -6}, {-7, 2}, {-2, -4} } },
	[133] = { .set = { {-3, -3}, {-2, -8}, {-9, -2}, {-1, -6} } },
	[134] = { .set = { {0, -4}, {9, -4}, {-9, -4}, {0, -6} } },
	[135] = { .set = { {2, -3}, {1, -8}, {8, -2}, {0, -6} } },
	[136] = { .set = { {3, -1}, {6, -6}, {6, 2}, {1, -4} } },
	[137] = { .set = { {2, 0}, {9, -3}, {-5, 3}, {1, -4} } },
	[138] = { .set = { {0, -2}, {-10, 1}, {10, 1}, {0, -5} } },
	[139] = { .set = { {3, -2}, {9, -1}, {-4, 3}, {1, -5} } },
	[140] = { .set = { {4, -4}, {6, -3}, {7, 2}, {0, -6} } },
	[141] = { .set = { {3, -5}, {0, -9}, {9, -2}, {0, -6} } },
	[142] = { .set = { {0, -5}, {9, -4}, {-9, -4}, {0, -6} } },
	[143] = { .set = { {-3, -5}, {0, -9}, {-9, -2}, {0, -6} } },
	[144] = { .set = { {-4, -4}, {-6, -3}, {-7, 2}, {0, -6} } },
	[145] = { .set = { {-3, -2}, {-9, -1}, {4, 3}, {-1, -5} } },
	[146] = { .set = { {0, -4}, {-10, 1}, {10, 1}, {0, -7} } },
	[147] = { .set = { {0, 1}, {-10, 1}, {10, 1}, {0, -3} } },
	[148] = { .set = { {3, -4}, {10, -3}, {-3, 3}, {1, -7} } },
	[149] = { .set = { {3, 0}, {10, -3}, {-4, 3}, {2, -4} } },
	[150] = { .set = { {4, -5}, {7, -5}, {8, 2}, {0, -7} } },
	[151] = { .set = { {4, -1}, {7, -6}, {7, 2}, {2, -4} } },
	[152] = { .set = { {3, -6}, {0, -10}, {10, -3}, {0, -7} } },
	[153] = { .set = { {3, -2}, {2, -7}, {9, -1}, {1, -5} } },
	[154] = { .set = { {0, -6}, {9, -4}, {-9, -4}, {0, -7} } },
	[155] = { .set = { {0, -4}, {9, -4}, {-9, -4}, {0, -6} } },
	[156] = { .set = { {-3, -6}, {0, -10}, {-10, -3}, {0, -7} } },
	[157] = { .set = { {-3, -2}, {-2, -7}, {-9, -1}, {-1, -5} } },
	[158] = { .set = { {-4, -5}, {-7, -5}, {-8, 2}, {0, -7} } },
	[159] = { .set = { {-3, -1}, {-6, -6}, {-6, 2}, {-1, -4} } },
	[160] = { .set = { {-3, -4}, {-10, -3}, {3, 3}, {-1, -7} } },
	[161] = { .set = { {-3, 0}, {-10, -3}, {4, 3}, {-2, -4} } },
	[162] = { .set = { {0, 1}, {-10, 1}, {10, 1}, {0, -3} } },
	[163] = { .set = { {-3, 1}, {-10, -2}, {4, 4}, {-2, -3} } },
	[164] = { .set = { {-3, -1}, {-6, -6}, {-6, 2}, {-1, -4} } },
	[165] = { .set = { {-3, -3}, {-2, -8}, {-9, -2}, {-1, -6} } },
	[166] = { .set = { {0, -5}, {9, -5}, {-9, -5}, {0, -7} } },
	[167] = { .set = { {2, -3}, {1, -8}, {8, -2}, {0, -6} } },
	[168] = { .set = { {2, -1}, {5, -6}, {5, 2}, {0, -4} } },
	[169] = { .set = { {2, 1}, {9, -2}, {-5, 4}, {1, -3} } },
	[170] = { .set = { {0, -4}, {-10, 1}, {10, 1}, {0, -7} } },
	[171] = { .set = { {-3, -4}, {-10, -3}, {3, 3}, {-1, -7} } },
	[172] = { .set = { {-4, -5}, {-7, -5}, {-8, 2}, {0, -7} } },
	[173] = { .set = { {-3, -6}, {0, -10}, {-10, -3}, {0, -7} } },
	[174] = { .set = { {0, -6}, {9, -4}, {-9, -4}, {0, -7} } },
	[175] = { .set = { {3, -6}, {0, -10}, {10, -3}, {0, -7} } },
	[176] = { .set = { {4, -5}, {7, -5}, {8, 2}, {0, -7} } },
	[177] = { .set = { {3, -4}, {10, -3}, {-3, 3}, {1, -7} } },
};

static const ax_anim *const sSurskitAnimTable1[] = {
	AX_ANIM_PTR(sSurskitAnims_1_1),
	AX_ANIM_PTR(sSurskitAnims_1_2),
	AX_ANIM_PTR(sSurskitAnims_1_3),
	AX_ANIM_PTR(sSurskitAnims_1_4),
	AX_ANIM_PTR(sSurskitAnims_1_5),
	AX_ANIM_PTR(sSurskitAnims_1_6),
	AX_ANIM_PTR(sSurskitAnims_1_7),
	AX_ANIM_PTR(sSurskitAnims_1_8),
};

static const ax_anim *const sSurskitAnimTable2[] = {
	AX_ANIM_PTR(sSurskitAnims_2_1),
	AX_ANIM_PTR(sSurskitAnims_2_2),
	AX_ANIM_PTR(sSurskitAnims_2_3),
	AX_ANIM_PTR(sSurskitAnims_2_4),
	AX_ANIM_PTR(sSurskitAnims_2_5),
	AX_ANIM_PTR(sSurskitAnims_2_6),
	AX_ANIM_PTR(sSurskitAnims_2_7),
	AX_ANIM_PTR(sSurskitAnims_2_8),
};

static const ax_anim *const sSurskitAnimTable3[] = {
	AX_ANIM_PTR(sSurskitAnims_3_1),
	AX_ANIM_PTR(sSurskitAnims_3_2),
	AX_ANIM_PTR(sSurskitAnims_3_3),
	AX_ANIM_PTR(sSurskitAnims_3_4),
	AX_ANIM_PTR(sSurskitAnims_3_5),
	AX_ANIM_PTR(sSurskitAnims_3_6),
	AX_ANIM_PTR(sSurskitAnims_3_7),
	AX_ANIM_PTR(sSurskitAnims_3_8),
};

static const ax_anim *const sSurskitAnimTable4[] = {
	AX_ANIM_PTR(sSurskitAnims_4_1),
	AX_ANIM_PTR(sSurskitAnims_4_2),
	AX_ANIM_PTR(sSurskitAnims_4_3),
	AX_ANIM_PTR(sSurskitAnims_4_4),
	AX_ANIM_PTR(sSurskitAnims_4_5),
	AX_ANIM_PTR(sSurskitAnims_4_6),
	AX_ANIM_PTR(sSurskitAnims_4_7),
	AX_ANIM_PTR(sSurskitAnims_4_8),
};

static const ax_anim *const sSurskitAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00177),
	AX_ANIM_PTR(gAxSharedAnim_00241),
	AX_ANIM_PTR(gAxSharedAnim_00230),
	AX_ANIM_PTR(gAxSharedAnim_00221),
	AX_ANIM_PTR(gAxSharedAnim_00214),
	AX_ANIM_PTR(gAxSharedAnim_00203),
	AX_ANIM_PTR(gAxSharedAnim_00195),
	AX_ANIM_PTR(gAxSharedAnim_00187),
};

static const ax_anim *const sSurskitAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
};

static const ax_anim *const sSurskitAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00266),
	AX_ANIM_PTR(gAxSharedAnim_00273),
	AX_ANIM_PTR(gAxSharedAnim_00280),
	AX_ANIM_PTR(gAxSharedAnim_00290),
	AX_ANIM_PTR(gAxSharedAnim_00302),
	AX_ANIM_PTR(gAxSharedAnim_00315),
	AX_ANIM_PTR(gAxSharedAnim_00322),
	AX_ANIM_PTR(gAxSharedAnim_00328),
};

static const ax_anim *const sSurskitAnimTable8[] = {
	AX_ANIM_PTR(sSurskitAnims_8_1),
	AX_ANIM_PTR(sSurskitAnims_8_2),
	AX_ANIM_PTR(sSurskitAnims_8_3),
	AX_ANIM_PTR(sSurskitAnims_8_4),
	AX_ANIM_PTR(sSurskitAnims_8_5),
	AX_ANIM_PTR(sSurskitAnims_8_6),
	AX_ANIM_PTR(sSurskitAnims_8_7),
	AX_ANIM_PTR(sSurskitAnims_8_8),
};

static const ax_anim *const sSurskitAnimTable9[] = {
	AX_ANIM_PTR(sSurskitAnims_9_1),
	AX_ANIM_PTR(sSurskitAnims_9_2),
	AX_ANIM_PTR(sSurskitAnims_9_3),
	AX_ANIM_PTR(sSurskitAnims_9_4),
	AX_ANIM_PTR(sSurskitAnims_9_5),
	AX_ANIM_PTR(sSurskitAnims_9_6),
	AX_ANIM_PTR(sSurskitAnims_9_7),
	AX_ANIM_PTR(sSurskitAnims_9_8),
};

static const ax_anim *const sSurskitAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00474),
	AX_ANIM_PTR(gAxSharedAnim_00483),
	AX_ANIM_PTR(gAxSharedAnim_00492),
	AX_ANIM_PTR(gAxSharedAnim_00500),
	AX_ANIM_PTR(gAxSharedAnim_00506),
	AX_ANIM_PTR(gAxSharedAnim_00515),
	AX_ANIM_PTR(gAxSharedAnim_00521),
	AX_ANIM_PTR(gAxSharedAnim_00526),
};

static const ax_anim *const sSurskitAnimTable11[] = {
	AX_ANIM_PTR(sSurskitAnims_11_1),
	AX_ANIM_PTR(sSurskitAnims_11_2),
	AX_ANIM_PTR(sSurskitAnims_11_3),
	AX_ANIM_PTR(sSurskitAnims_11_4),
	AX_ANIM_PTR(sSurskitAnims_11_5),
	AX_ANIM_PTR(sSurskitAnims_11_6),
	AX_ANIM_PTR(sSurskitAnims_11_7),
	AX_ANIM_PTR(sSurskitAnims_11_8),
};

static const ax_anim *const sSurskitAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00707),
	AX_ANIM_PTR(gAxSharedAnim_00783),
	AX_ANIM_PTR(gAxSharedAnim_00765),
	AX_ANIM_PTR(gAxSharedAnim_00755),
	AX_ANIM_PTR(gAxSharedAnim_00754),
	AX_ANIM_PTR(gAxSharedAnim_00740),
	AX_ANIM_PTR(gAxSharedAnim_00719),
	AX_ANIM_PTR(gAxSharedAnim_00708),
};

static const ax_anim *const sSurskitAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_00803),
	AX_ANIM_PTR(gAxSharedAnim_00888),
	AX_ANIM_PTR(gAxSharedAnim_00881),
	AX_ANIM_PTR(gAxSharedAnim_00864),
	AX_ANIM_PTR(gAxSharedAnim_00851),
	AX_ANIM_PTR(gAxSharedAnim_00841),
	AX_ANIM_PTR(gAxSharedAnim_00830),
	AX_ANIM_PTR(gAxSharedAnim_00816),
};

static const ax_anim *const *const sAxAnimationsSurskit[] = {
	sSurskitAnimTable1,
	sSurskitAnimTable2,
	sSurskitAnimTable3,
	sSurskitAnimTable4,
	sSurskitAnimTable5,
	sSurskitAnimTable6,
	sSurskitAnimTable7,
	sSurskitAnimTable8,
	sSurskitAnimTable9,
	sSurskitAnimTable10,
	sSurskitAnimTable11,
	sSurskitAnimTable12,
	sSurskitAnimTable13,
};

static const ax_sprite *const sAxSpritesSurskit[] = {
	sSurskitSprites1,
	sSurskitSprites2,
	sSurskitSprites3,
	sSurskitSprites4,
	sSurskitSprites5,
	sSurskitSprites6,
	sSurskitSprites7,
	sSurskitSprites8,
	sSurskitSprites9,
	sSurskitSprites10,
	sSurskitSprites11,
	sSurskitSprites12,
	sSurskitSprites13,
	sSurskitSprites14,
	sSurskitSprites15,
	sSurskitSprites16,
	sSurskitSprites17,
	sSurskitSprites18,
	sSurskitSprites19,
	sSurskitSprites20,
	sSurskitSprites21,
	sSurskitSprites22,
	sSurskitSprites23,
	sSurskitSprites24,
	sSurskitSprites25,
	sSurskitSprites26,
	sSurskitSprites27,
	sSurskitSprites28,
	sSurskitSprites29,
	sSurskitSprites30,
	sSurskitSprites31,
	sSurskitSprites32,
};

static const axmain sAxMainSurskit = {
	.poses = sAxPosesSurskit,
	.animations = sAxAnimationsSurskit,
	.animCount = ARRAY_COUNT(sAxAnimationsSurskit),
	.spriteData = sAxSpritesSurskit,
	.positions = sAxPositionsSurskit,
};
