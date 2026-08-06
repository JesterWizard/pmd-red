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
static const axmain sAxMainSuicune;
const SiroArchive gAxSuicune = {"SIRO", &sAxMainSuicune};

static const ax_pose sSuicunePose1[] = {
	AX_POSE(0, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose2[] = {
	AX_POSE(1, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 7)),
	AX_POSE(2, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(3, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(5, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose3[] = {
	AX_POSE(6, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(7, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 7)),
	AX_POSE(8, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 7)),
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(10, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose4[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose5[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose6[] = {
	AX_POSE(13, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(14, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(15, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(16, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose7[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose8[] = {
	AX_POSE(19, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 7)),
	AX_POSE(20, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(21, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(22, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(23, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose9[] = {
	AX_POSE(24, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(25, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(26, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 7)),
	AX_POSE(27, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 7)),
	AX_POSE(28, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(29, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose10[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose11[] = {
	AX_POSE(31, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(32, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(33, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(35, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose12[] = {
	AX_POSE(36, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 7)),
	AX_POSE(37, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(38, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(40, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose13[] = {
	AX_POSE(41, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose14[] = {
	AX_POSE(42, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose15[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose16[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose17[] = {
	AX_POSE(31, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(32, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 7)),
	AX_POSE(33, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 7)),
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(35, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose18[] = {
	AX_POSE(36, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(37, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(38, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 7)),
	AX_POSE(39, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(40, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose19[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose20[] = {
	AX_POSE(19, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(20, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(21, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 7)),
	AX_POSE(22, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(23, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose21[] = {
	AX_POSE(24, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(25, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(26, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(27, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 7)),
	AX_POSE(28, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(29, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose22[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose23[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose24[] = {
	AX_POSE(13, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(14, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(15, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(16, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose26[] = {
	AX_POSE(44, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(45, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose27[] = {
	AX_POSE(46, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 7)),
	AX_POSE(47, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose29[] = {
	AX_POSE(48, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(49, OAM1(250, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(50, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 7)),
	AX_POSE(51, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 7)),
	AX_POSE(52, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(18, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(53, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE(54, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(17, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose30[] = {
	AX_POSE(55, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(56, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(57, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(11, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 7)),
	AX_POSE(58, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(11, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 7)),
	AX_POSE(59, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(60, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose32[] = {
	AX_POSE(61, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(62, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(63, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 7)),
	AX_POSE(64, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(65, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE(66, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(17, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose33[] = {
	AX_POSE(67, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(68, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(69, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 7)),
	AX_POSE(70, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(11, 3, 7)),
	AX_POSE(71, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(72, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 7)),
	AX_POSE(73, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose35[] = {
	AX_POSE(74, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(75, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(76, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(77, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(78, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose36[] = {
	AX_POSE(79, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose38[] = {
	AX_POSE(80, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose39[] = {
	AX_POSE(81, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose41[] = {
	AX_POSE(74, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(75, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(76, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 7)),
	AX_POSE(77, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(78, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose42[] = {
	AX_POSE(79, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose44[] = {
	AX_POSE(61, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(62, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(63, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(64, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(65, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(21, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE(66, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(21, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(17, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose45[] = {
	AX_POSE(67, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(68, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(69, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 7)),
	AX_POSE(71, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(11, 3, 7)),
	AX_POSE(70, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 7)),
	AX_POSE(72, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 7)),
	AX_POSE(73, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose47[] = {
	AX_POSE(48, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(49, OAM1(250, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(50, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(51, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 7)),
	AX_POSE(54, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(52, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(229, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE(53, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose48[] = {
	AX_POSE(55, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(56, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(57, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(58, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 7)),
	AX_POSE(59, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(60, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose74[] = {
	AX_POSE(82, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose75[] = {
	AX_POSE(83, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose77[] = {
	AX_POSE(84, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(85, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(86, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(87, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose78[] = {
	AX_POSE(88, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose80[] = {
	AX_POSE(89, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose81[] = {
	AX_POSE(90, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(91, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(92, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 7)),
	AX_POSE(93, OAM1(253, ST_OAM_H_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(11, 3, 7)),
	AX_POSE(94, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 7)),
	AX_POSE(95, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(96, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose83[] = {
	AX_POSE(97, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose84[] = {
	AX_POSE(98, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose86[] = {
	AX_POSE(99, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose87[] = {
	AX_POSE(100, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(101, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(102, OAM1(253, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(103, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose89[] = {
	AX_POSE(97, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose90[] = {
	AX_POSE(98, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose92[] = {
	AX_POSE(89, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose93[] = {
	AX_POSE(90, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(91, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(92, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 7)),
	AX_POSE(93, OAM1(253, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(11, 3, 7)),
	AX_POSE(94, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 7)),
	AX_POSE(95, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(96, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose95[] = {
	AX_POSE(84, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(85, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(86, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(87, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose96[] = {
	AX_POSE(88, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose98[] = {
	AX_POSE(104, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(105, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(106, OAM1(253, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(107, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(108, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose100[] = {
	AX_POSE(109, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(110, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 7)),
	AX_POSE(111, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(112, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(113, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose102[] = {
	AX_POSE(114, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(115, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(116, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(117, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(118, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose104[] = {
	AX_POSE(119, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(120, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(121, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(122, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(123, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose106[] = {
	AX_POSE(124, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(125, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose108[] = {
	AX_POSE(119, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(120, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(121, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(122, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(123, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose110[] = {
	AX_POSE(114, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(115, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(116, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(117, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(118, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose112[] = {
	AX_POSE(109, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(110, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 7)),
	AX_POSE(111, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(112, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(113, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose113[] = {
	AX_POSE(126, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose114[] = {
	AX_POSE(127, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose115[] = {
	AX_POSE(128, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose116[] = {
	AX_POSE(129, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose117[] = {
	AX_POSE(130, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose118[] = {
	AX_POSE(131, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose119[] = {
	AX_POSE(132, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose120[] = {
	AX_POSE(131, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose121[] = {
	AX_POSE(130, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose122[] = {
	AX_POSE(129, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose148[] = {
	AX_POSE(88, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose149[] = {
	AX_POSE(90, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(91, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(92, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 7)),
	AX_POSE(93, OAM1(253, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(11, 3, 7)),
	AX_POSE(94, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 7)),
	AX_POSE(95, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 7)),
	AX_POSE(96, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose150[] = {
	AX_POSE(98, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose152[] = {
	AX_POSE(98, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose153[] = {
	AX_POSE(90, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(91, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(92, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 7)),
	AX_POSE(93, OAM1(253, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(11, 3, 7)),
	AX_POSE(94, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 7)),
	AX_POSE(95, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE(96, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose154[] = {
	AX_POSE(88, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose170[] = {
	AX_POSE(98, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose181[] = {
	AX_POSE(89, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose182[] = {
	AX_POSE(97, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose183[] = {
	AX_POSE(99, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose184[] = {
	AX_POSE(97, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose185[] = {
	AX_POSE(89, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSuicunePose186[] = {
	AX_POSE(84, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(85, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(86, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 7)),
	AX_POSE(87, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 7)),
	AX_POSE_TERMINATOR
};
static const u8 sSuicuneAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_2_1.lz");
static const u8 sSuicuneAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_2_2.lz");
static const u8 sSuicuneAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_2_3.lz");
static const u8 sSuicuneAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_2_4.lz");
static const u8 sSuicuneAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_2_5.lz");
static const u8 sSuicuneAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_2_6.lz");
static const u8 sSuicuneAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_2_7.lz");
static const u8 sSuicuneAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_2_8.lz");
static const u8 sSuicuneAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_3_1.lz");
static const u8 sSuicuneAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_3_2.lz");
static const u8 sSuicuneAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_3_3.lz");
static const u8 sSuicuneAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_3_4.lz");
static const u8 sSuicuneAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_3_5.lz");
static const u8 sSuicuneAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_3_6.lz");
static const u8 sSuicuneAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_3_7.lz");
static const u8 sSuicuneAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_3_8.lz");
static const u8 sSuicuneAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_4_1.lz");
static const u8 sSuicuneAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_4_2.lz");
static const u8 sSuicuneAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_4_3.lz");
static const u8 sSuicuneAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_4_4.lz");
static const u8 sSuicuneAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_4_5.lz");
static const u8 sSuicuneAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_4_6.lz");
static const u8 sSuicuneAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_4_7.lz");
static const u8 sSuicuneAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_4_8.lz");
static const u8 sSuicuneAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_5_1.lz");
static const u8 sSuicuneAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_5_2.lz");
static const u8 sSuicuneAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_5_3.lz");
static const u8 sSuicuneAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_5_4.lz");
static const u8 sSuicuneAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_5_5.lz");
static const u8 sSuicuneAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_5_6.lz");
static const u8 sSuicuneAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_5_7.lz");
static const u8 sSuicuneAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_5_8.lz");
static const u8 sSuicuneAnims_7_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_7_1.lz");
static const u8 sSuicuneAnims_7_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_7_2.lz");
static const u8 sSuicuneAnims_7_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_7_3.lz");
static const u8 sSuicuneAnims_7_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_7_7.lz");
static const ax_anim sSuicuneAnims_7_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 8, .unkFlags = 0, .poseId = 121, .offset = {7, -7}, .shadow = {7, -7} },
	AX_ANIM_TERMINATOR
};
static const u8 sSuicuneAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_8_1.lz");
static const u8 sSuicuneAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_8_2.lz");
static const u8 sSuicuneAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_8_3.lz");
static const u8 sSuicuneAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_8_4.lz");
static const u8 sSuicuneAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_8_5.lz");
static const u8 sSuicuneAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_8_6.lz");
static const u8 sSuicuneAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_8_7.lz");
static const u8 sSuicuneAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_8_8.lz");
static const u8 sSuicuneAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_9_2.lz");
static const u8 sSuicuneAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_9_3.lz");
static const u8 sSuicuneAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_9_4.lz");
static const u8 sSuicuneAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_9_5.lz");
static const u8 sSuicuneAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_9_6.lz");
static const u8 sSuicuneAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_9_7.lz");
static const u8 sSuicuneAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_9_8.lz");
static const u8 sSuicuneAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_11_1.lz");
static const u8 sSuicuneAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_11_2.lz");
static const u8 sSuicuneAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_11_3.lz");
static const u8 sSuicuneAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_11_4.lz");
static const u8 sSuicuneAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_11_6.lz");
static const u8 sSuicuneAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_11_7.lz");
static const u8 sSuicuneAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_11_8.lz");
static const u8 sSuicuneAnims_14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/suicune/sSuicuneAnims_14_1.lz");

static const u8 sSuicuneGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_1.4bpp.lz");
static const ax_sprite sSuicuneSprites1[] = {
	{sSuicuneGfx1, ARRAY_COUNT(sSuicuneGfx1)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_2.4bpp.lz");
static const ax_sprite sSuicuneSprites2[] = {
	{sSuicuneGfx2, ARRAY_COUNT(sSuicuneGfx2)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_3.4bpp.lz");
static const ax_sprite sSuicuneSprites3[] = {
	{sSuicuneGfx3, ARRAY_COUNT(sSuicuneGfx3)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_4.4bpp.lz");
static const ax_sprite sSuicuneSprites4[] = {
	{sSuicuneGfx4, ARRAY_COUNT(sSuicuneGfx4)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_5.4bpp.lz");
static const ax_sprite sSuicuneSprites5[] = {
	{sSuicuneGfx5, ARRAY_COUNT(sSuicuneGfx5)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_6.4bpp.lz");
static const ax_sprite sSuicuneSprites6[] = {
	{sSuicuneGfx6, ARRAY_COUNT(sSuicuneGfx6)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_7.4bpp.lz");
static const ax_sprite sSuicuneSprites7[] = {
	{sSuicuneGfx7, ARRAY_COUNT(sSuicuneGfx7)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_8.4bpp.lz");
static const ax_sprite sSuicuneSprites8[] = {
	{sSuicuneGfx8, ARRAY_COUNT(sSuicuneGfx8)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_9.4bpp.lz");
static const ax_sprite sSuicuneSprites9[] = {
	{sSuicuneGfx9, ARRAY_COUNT(sSuicuneGfx9)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_10.4bpp.lz");
static const ax_sprite sSuicuneSprites10[] = {
	{sSuicuneGfx10, ARRAY_COUNT(sSuicuneGfx10)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_11.4bpp.lz");
static const ax_sprite sSuicuneSprites11[] = {
	{sSuicuneGfx11, ARRAY_COUNT(sSuicuneGfx11)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_12.4bpp.lz");
static const ax_sprite sSuicuneSprites12[] = {
	{sSuicuneGfx12, ARRAY_COUNT(sSuicuneGfx12)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_13.4bpp.lz");
static const ax_sprite sSuicuneSprites13[] = {
	{sSuicuneGfx13, ARRAY_COUNT(sSuicuneGfx13)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_14.4bpp.lz");
static const ax_sprite sSuicuneSprites14[] = {
	{sSuicuneGfx14, ARRAY_COUNT(sSuicuneGfx14)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_15.4bpp.lz");
static const ax_sprite sSuicuneSprites15[] = {
	{sSuicuneGfx15, ARRAY_COUNT(sSuicuneGfx15)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_16.4bpp.lz");
static const ax_sprite sSuicuneSprites16[] = {
	{sSuicuneGfx16, ARRAY_COUNT(sSuicuneGfx16)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_17.4bpp.lz");
static const ax_sprite sSuicuneSprites17[] = {
	{sSuicuneGfx17, ARRAY_COUNT(sSuicuneGfx17)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_18.4bpp.lz");
static const ax_sprite sSuicuneSprites18[] = {
	{sSuicuneGfx18, ARRAY_COUNT(sSuicuneGfx18)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_19.4bpp.lz");
static const ax_sprite sSuicuneSprites19[] = {
	{sSuicuneGfx19, ARRAY_COUNT(sSuicuneGfx19)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_20.4bpp.lz");
static const ax_sprite sSuicuneSprites20[] = {
	{sSuicuneGfx20, ARRAY_COUNT(sSuicuneGfx20)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_21.4bpp.lz");
static const ax_sprite sSuicuneSprites21[] = {
	{sSuicuneGfx21, ARRAY_COUNT(sSuicuneGfx21)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_22.4bpp.lz");
static const ax_sprite sSuicuneSprites22[] = {
	{sSuicuneGfx22, ARRAY_COUNT(sSuicuneGfx22)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_23.4bpp.lz");
static const ax_sprite sSuicuneSprites23[] = {
	{sSuicuneGfx23, ARRAY_COUNT(sSuicuneGfx23)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_24.4bpp.lz");
static const ax_sprite sSuicuneSprites24[] = {
	{sSuicuneGfx24, ARRAY_COUNT(sSuicuneGfx24)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_25.4bpp.lz");
static const ax_sprite sSuicuneSprites25[] = {
	{sSuicuneGfx25, ARRAY_COUNT(sSuicuneGfx25)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_26.4bpp.lz");
static const ax_sprite sSuicuneSprites26[] = {
	{sSuicuneGfx26, ARRAY_COUNT(sSuicuneGfx26)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_27.4bpp.lz");
static const ax_sprite sSuicuneSprites27[] = {
	{sSuicuneGfx27, ARRAY_COUNT(sSuicuneGfx27)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_28.4bpp.lz");
static const ax_sprite sSuicuneSprites28[] = {
	{sSuicuneGfx28, ARRAY_COUNT(sSuicuneGfx28)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_29.4bpp.lz");
static const ax_sprite sSuicuneSprites29[] = {
	{sSuicuneGfx29, ARRAY_COUNT(sSuicuneGfx29)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_30.4bpp.lz");
static const ax_sprite sSuicuneSprites30[] = {
	{sSuicuneGfx30, ARRAY_COUNT(sSuicuneGfx30)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_31.4bpp.lz");
static const ax_sprite sSuicuneSprites31[] = {
	{sSuicuneGfx31, ARRAY_COUNT(sSuicuneGfx31)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_32.4bpp.lz");
static const ax_sprite sSuicuneSprites32[] = {
	{sSuicuneGfx32, ARRAY_COUNT(sSuicuneGfx32)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_33.4bpp.lz");
static const ax_sprite sSuicuneSprites33[] = {
	{sSuicuneGfx33, ARRAY_COUNT(sSuicuneGfx33)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_34.4bpp.lz");
static const ax_sprite sSuicuneSprites34[] = {
	{sSuicuneGfx34, ARRAY_COUNT(sSuicuneGfx34)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_35.4bpp.lz");
static const ax_sprite sSuicuneSprites35[] = {
	{sSuicuneGfx35, ARRAY_COUNT(sSuicuneGfx35)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_36.4bpp.lz");
static const ax_sprite sSuicuneSprites36[] = {
	{sSuicuneGfx36, ARRAY_COUNT(sSuicuneGfx36)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_37.4bpp.lz");
static const ax_sprite sSuicuneSprites37[] = {
	{sSuicuneGfx37, ARRAY_COUNT(sSuicuneGfx37)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_38.4bpp.lz");
static const ax_sprite sSuicuneSprites38[] = {
	{sSuicuneGfx38, ARRAY_COUNT(sSuicuneGfx38)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_39.4bpp.lz");
static const ax_sprite sSuicuneSprites39[] = {
	{sSuicuneGfx39, ARRAY_COUNT(sSuicuneGfx39)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_40.4bpp.lz");
static const ax_sprite sSuicuneSprites40[] = {
	{sSuicuneGfx40, ARRAY_COUNT(sSuicuneGfx40)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_41.4bpp.lz");
static const ax_sprite sSuicuneSprites41[] = {
	{sSuicuneGfx41, ARRAY_COUNT(sSuicuneGfx41)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_42.4bpp.lz");
static const ax_sprite sSuicuneSprites42[] = {
	{sSuicuneGfx42, ARRAY_COUNT(sSuicuneGfx42)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_43.4bpp.lz");
static const ax_sprite sSuicuneSprites43[] = {
	{sSuicuneGfx43, ARRAY_COUNT(sSuicuneGfx43)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_44.4bpp.lz");
static const ax_sprite sSuicuneSprites44[] = {
	{sSuicuneGfx44, ARRAY_COUNT(sSuicuneGfx44)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_45.4bpp.lz");
static const ax_sprite sSuicuneSprites45[] = {
	{sSuicuneGfx45, ARRAY_COUNT(sSuicuneGfx45)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_46.4bpp.lz");
static const ax_sprite sSuicuneSprites46[] = {
	{sSuicuneGfx46, ARRAY_COUNT(sSuicuneGfx46)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_47.4bpp.lz");
static const ax_sprite sSuicuneSprites47[] = {
	{sSuicuneGfx47, ARRAY_COUNT(sSuicuneGfx47)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_48.4bpp.lz");
static const ax_sprite sSuicuneSprites48[] = {
	{sSuicuneGfx48, ARRAY_COUNT(sSuicuneGfx48)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_49.4bpp.lz");
static const ax_sprite sSuicuneSprites49[] = {
	{sSuicuneGfx49, ARRAY_COUNT(sSuicuneGfx49)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_50.4bpp.lz");
static const ax_sprite sSuicuneSprites50[] = {
	{sSuicuneGfx50, ARRAY_COUNT(sSuicuneGfx50)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_51.4bpp.lz");
static const ax_sprite sSuicuneSprites51[] = {
	{sSuicuneGfx51, ARRAY_COUNT(sSuicuneGfx51)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_52.4bpp.lz");
static const ax_sprite sSuicuneSprites52[] = {
	{sSuicuneGfx52, ARRAY_COUNT(sSuicuneGfx52)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_53.4bpp.lz");
static const ax_sprite sSuicuneSprites53[] = {
	{sSuicuneGfx53, ARRAY_COUNT(sSuicuneGfx53)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_54.4bpp.lz");
static const ax_sprite sSuicuneSprites54[] = {
	{sSuicuneGfx54, ARRAY_COUNT(sSuicuneGfx54)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_55.4bpp.lz");
static const ax_sprite sSuicuneSprites55[] = {
	{sSuicuneGfx55, ARRAY_COUNT(sSuicuneGfx55)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_56.4bpp.lz");
static const ax_sprite sSuicuneSprites56[] = {
	{sSuicuneGfx56, ARRAY_COUNT(sSuicuneGfx56)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_57.4bpp.lz");
static const ax_sprite sSuicuneSprites57[] = {
	{sSuicuneGfx57, ARRAY_COUNT(sSuicuneGfx57)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_58.4bpp.lz");
static const ax_sprite sSuicuneSprites58[] = {
	{sSuicuneGfx58, ARRAY_COUNT(sSuicuneGfx58)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_59.4bpp.lz");
static const ax_sprite sSuicuneSprites59[] = {
	{sSuicuneGfx59, ARRAY_COUNT(sSuicuneGfx59)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_60.4bpp.lz");
static const ax_sprite sSuicuneSprites60[] = {
	{sSuicuneGfx60, ARRAY_COUNT(sSuicuneGfx60)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_61.4bpp.lz");
static const ax_sprite sSuicuneSprites61[] = {
	{sSuicuneGfx61, ARRAY_COUNT(sSuicuneGfx61)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_62.4bpp.lz");
static const ax_sprite sSuicuneSprites62[] = {
	{sSuicuneGfx62, ARRAY_COUNT(sSuicuneGfx62)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_63.4bpp.lz");
static const ax_sprite sSuicuneSprites63[] = {
	{sSuicuneGfx63, ARRAY_COUNT(sSuicuneGfx63)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_64.4bpp.lz");
static const ax_sprite sSuicuneSprites64[] = {
	{sSuicuneGfx64, ARRAY_COUNT(sSuicuneGfx64)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_65.4bpp.lz");
static const ax_sprite sSuicuneSprites65[] = {
	{sSuicuneGfx65, ARRAY_COUNT(sSuicuneGfx65)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_66.4bpp.lz");
static const ax_sprite sSuicuneSprites66[] = {
	{sSuicuneGfx66, ARRAY_COUNT(sSuicuneGfx66)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_67.4bpp.lz");
static const ax_sprite sSuicuneSprites67[] = {
	{sSuicuneGfx67, ARRAY_COUNT(sSuicuneGfx67)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_68.4bpp.lz");
static const ax_sprite sSuicuneSprites68[] = {
	{sSuicuneGfx68, ARRAY_COUNT(sSuicuneGfx68)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_69.4bpp.lz");
static const ax_sprite sSuicuneSprites69[] = {
	{sSuicuneGfx69, ARRAY_COUNT(sSuicuneGfx69)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_70.4bpp.lz");
static const ax_sprite sSuicuneSprites70[] = {
	{sSuicuneGfx70, ARRAY_COUNT(sSuicuneGfx70)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_71.4bpp.lz");
static const ax_sprite sSuicuneSprites71[] = {
	{sSuicuneGfx71, ARRAY_COUNT(sSuicuneGfx71)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_72.4bpp.lz");
static const ax_sprite sSuicuneSprites72[] = {
	{sSuicuneGfx72, ARRAY_COUNT(sSuicuneGfx72)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_73.4bpp.lz");
static const ax_sprite sSuicuneSprites73[] = {
	{sSuicuneGfx73, ARRAY_COUNT(sSuicuneGfx73)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_74.4bpp.lz");
static const ax_sprite sSuicuneSprites74[] = {
	{sSuicuneGfx74, ARRAY_COUNT(sSuicuneGfx74)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_75.4bpp.lz");
static const u8 sSuicuneGfx75_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_75_1.4bpp.lz");
static const ax_sprite sSuicuneSprites75[] = {
	{sSuicuneGfx75, ARRAY_COUNT(sSuicuneGfx75)}, 
	{NULL, 32}, 
	{sSuicuneGfx75_1, ARRAY_COUNT(sSuicuneGfx75_1)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_76.4bpp.lz");
static const ax_sprite sSuicuneSprites76[] = {
	{sSuicuneGfx76, ARRAY_COUNT(sSuicuneGfx76)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_77.4bpp.lz");
static const ax_sprite sSuicuneSprites77[] = {
	{sSuicuneGfx77, ARRAY_COUNT(sSuicuneGfx77)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_78.4bpp.lz");
static const ax_sprite sSuicuneSprites78[] = {
	{sSuicuneGfx78, ARRAY_COUNT(sSuicuneGfx78)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_79.4bpp.lz");
static const ax_sprite sSuicuneSprites79[] = {
	{sSuicuneGfx79, ARRAY_COUNT(sSuicuneGfx79)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_80.4bpp.lz");
static const ax_sprite sSuicuneSprites80[] = {
	{NULL, 64}, 
	{sSuicuneGfx80, ARRAY_COUNT(sSuicuneGfx80)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_81.4bpp.lz");
static const u8 sSuicuneGfx81_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_81_1.4bpp.lz");
static const ax_sprite sSuicuneSprites81[] = {
	{NULL, 32}, 
	{sSuicuneGfx81, ARRAY_COUNT(sSuicuneGfx81)}, 
	{NULL, 32}, 
	{sSuicuneGfx81_1, ARRAY_COUNT(sSuicuneGfx81_1)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_82.4bpp.lz");
static const ax_sprite sSuicuneSprites82[] = {
	{sSuicuneGfx82, ARRAY_COUNT(sSuicuneGfx82)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_83.4bpp.lz");
static const ax_sprite sSuicuneSprites83[] = {
	{sSuicuneGfx83, ARRAY_COUNT(sSuicuneGfx83)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx84[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_84.4bpp.lz");
static const u8 sSuicuneGfx84_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_84_1.4bpp.lz");
static const ax_sprite sSuicuneSprites84[] = {
	{NULL, 32}, 
	{sSuicuneGfx84, ARRAY_COUNT(sSuicuneGfx84)}, 
	{NULL, 32}, 
	{sSuicuneGfx84_1, ARRAY_COUNT(sSuicuneGfx84_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx85[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_85.4bpp.lz");
static const ax_sprite sSuicuneSprites85[] = {
	{sSuicuneGfx85, ARRAY_COUNT(sSuicuneGfx85)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx86[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_86.4bpp.lz");
static const ax_sprite sSuicuneSprites86[] = {
	{sSuicuneGfx86, ARRAY_COUNT(sSuicuneGfx86)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx87[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_87.4bpp.lz");
static const ax_sprite sSuicuneSprites87[] = {
	{sSuicuneGfx87, ARRAY_COUNT(sSuicuneGfx87)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx88[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_88.4bpp.lz");
static const ax_sprite sSuicuneSprites88[] = {
	{sSuicuneGfx88, ARRAY_COUNT(sSuicuneGfx88)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx89[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_89.4bpp.lz");
static const ax_sprite sSuicuneSprites89[] = {
	{sSuicuneGfx89, ARRAY_COUNT(sSuicuneGfx89)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx90[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_90.4bpp.lz");
static const ax_sprite sSuicuneSprites90[] = {
	{NULL, 32}, 
	{sSuicuneGfx90, ARRAY_COUNT(sSuicuneGfx90)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx91[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_91.4bpp.lz");
static const ax_sprite sSuicuneSprites91[] = {
	{sSuicuneGfx91, ARRAY_COUNT(sSuicuneGfx91)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx92[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_92.4bpp.lz");
static const ax_sprite sSuicuneSprites92[] = {
	{sSuicuneGfx92, ARRAY_COUNT(sSuicuneGfx92)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx93[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_93.4bpp.lz");
static const ax_sprite sSuicuneSprites93[] = {
	{sSuicuneGfx93, ARRAY_COUNT(sSuicuneGfx93)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx94[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_94.4bpp.lz");
static const ax_sprite sSuicuneSprites94[] = {
	{sSuicuneGfx94, ARRAY_COUNT(sSuicuneGfx94)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx95[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_95.4bpp.lz");
static const ax_sprite sSuicuneSprites95[] = {
	{sSuicuneGfx95, ARRAY_COUNT(sSuicuneGfx95)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx96[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_96.4bpp.lz");
static const ax_sprite sSuicuneSprites96[] = {
	{sSuicuneGfx96, ARRAY_COUNT(sSuicuneGfx96)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx97[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_97.4bpp.lz");
static const ax_sprite sSuicuneSprites97[] = {
	{sSuicuneGfx97, ARRAY_COUNT(sSuicuneGfx97)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx98[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_98.4bpp.lz");
static const ax_sprite sSuicuneSprites98[] = {
	{NULL, 32}, 
	{sSuicuneGfx98, ARRAY_COUNT(sSuicuneGfx98)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx99[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_99.4bpp.lz");
static const ax_sprite sSuicuneSprites99[] = {
	{sSuicuneGfx99, ARRAY_COUNT(sSuicuneGfx99)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx100[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_100.4bpp.lz");
static const u8 sSuicuneGfx100_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_100_1.4bpp.lz");
static const ax_sprite sSuicuneSprites100[] = {
	{NULL, 32}, 
	{sSuicuneGfx100, ARRAY_COUNT(sSuicuneGfx100)}, 
	{NULL, 32}, 
	{sSuicuneGfx100_1, ARRAY_COUNT(sSuicuneGfx100_1)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx101[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_101.4bpp.lz");
static const ax_sprite sSuicuneSprites101[] = {
	{sSuicuneGfx101, ARRAY_COUNT(sSuicuneGfx101)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx102[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_102.4bpp.lz");
static const ax_sprite sSuicuneSprites102[] = {
	{sSuicuneGfx102, ARRAY_COUNT(sSuicuneGfx102)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx103[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_103.4bpp.lz");
static const ax_sprite sSuicuneSprites103[] = {
	{sSuicuneGfx103, ARRAY_COUNT(sSuicuneGfx103)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx104[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_104.4bpp.lz");
static const ax_sprite sSuicuneSprites104[] = {
	{sSuicuneGfx104, ARRAY_COUNT(sSuicuneGfx104)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx105[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_105.4bpp.lz");
static const ax_sprite sSuicuneSprites105[] = {
	{sSuicuneGfx105, ARRAY_COUNT(sSuicuneGfx105)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx106[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_106.4bpp.lz");
static const ax_sprite sSuicuneSprites106[] = {
	{sSuicuneGfx106, ARRAY_COUNT(sSuicuneGfx106)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx107[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_107.4bpp.lz");
static const ax_sprite sSuicuneSprites107[] = {
	{sSuicuneGfx107, ARRAY_COUNT(sSuicuneGfx107)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx108[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_108.4bpp.lz");
static const ax_sprite sSuicuneSprites108[] = {
	{sSuicuneGfx108, ARRAY_COUNT(sSuicuneGfx108)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx109[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_109.4bpp.lz");
static const ax_sprite sSuicuneSprites109[] = {
	{sSuicuneGfx109, ARRAY_COUNT(sSuicuneGfx109)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx110[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_110.4bpp.lz");
static const ax_sprite sSuicuneSprites110[] = {
	{sSuicuneGfx110, ARRAY_COUNT(sSuicuneGfx110)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx111[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_111.4bpp.lz");
static const ax_sprite sSuicuneSprites111[] = {
	{sSuicuneGfx111, ARRAY_COUNT(sSuicuneGfx111)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx112[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_112.4bpp.lz");
static const ax_sprite sSuicuneSprites112[] = {
	{sSuicuneGfx112, ARRAY_COUNT(sSuicuneGfx112)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx113[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_113.4bpp.lz");
static const ax_sprite sSuicuneSprites113[] = {
	{sSuicuneGfx113, ARRAY_COUNT(sSuicuneGfx113)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx114[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_114.4bpp.lz");
static const ax_sprite sSuicuneSprites114[] = {
	{sSuicuneGfx114, ARRAY_COUNT(sSuicuneGfx114)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx115[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_115.4bpp.lz");
static const ax_sprite sSuicuneSprites115[] = {
	{sSuicuneGfx115, ARRAY_COUNT(sSuicuneGfx115)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx116[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_116.4bpp.lz");
static const ax_sprite sSuicuneSprites116[] = {
	{sSuicuneGfx116, ARRAY_COUNT(sSuicuneGfx116)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx117[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_117.4bpp.lz");
static const ax_sprite sSuicuneSprites117[] = {
	{sSuicuneGfx117, ARRAY_COUNT(sSuicuneGfx117)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx118[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_118.4bpp.lz");
static const ax_sprite sSuicuneSprites118[] = {
	{sSuicuneGfx118, ARRAY_COUNT(sSuicuneGfx118)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx119[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_119.4bpp.lz");
static const ax_sprite sSuicuneSprites119[] = {
	{sSuicuneGfx119, ARRAY_COUNT(sSuicuneGfx119)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx120[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_120.4bpp.lz");
static const ax_sprite sSuicuneSprites120[] = {
	{sSuicuneGfx120, ARRAY_COUNT(sSuicuneGfx120)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx121[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_121.4bpp.lz");
static const ax_sprite sSuicuneSprites121[] = {
	{sSuicuneGfx121, ARRAY_COUNT(sSuicuneGfx121)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx122[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_122.4bpp.lz");
static const ax_sprite sSuicuneSprites122[] = {
	{sSuicuneGfx122, ARRAY_COUNT(sSuicuneGfx122)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx123[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_123.4bpp.lz");
static const ax_sprite sSuicuneSprites123[] = {
	{sSuicuneGfx123, ARRAY_COUNT(sSuicuneGfx123)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx124[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_124.4bpp.lz");
static const ax_sprite sSuicuneSprites124[] = {
	{sSuicuneGfx124, ARRAY_COUNT(sSuicuneGfx124)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx125[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_125.4bpp.lz");
static const ax_sprite sSuicuneSprites125[] = {
	{sSuicuneGfx125, ARRAY_COUNT(sSuicuneGfx125)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx126[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_126.4bpp.lz");
static const ax_sprite sSuicuneSprites126[] = {
	{sSuicuneGfx126, ARRAY_COUNT(sSuicuneGfx126)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx127[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_127.4bpp.lz");
static const ax_sprite sSuicuneSprites127[] = {
	{sSuicuneGfx127, ARRAY_COUNT(sSuicuneGfx127)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx128[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_128.4bpp.lz");
static const ax_sprite sSuicuneSprites128[] = {
	{sSuicuneGfx128, ARRAY_COUNT(sSuicuneGfx128)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx129[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_129.4bpp.lz");
static const ax_sprite sSuicuneSprites129[] = {
	{sSuicuneGfx129, ARRAY_COUNT(sSuicuneGfx129)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx130[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_130.4bpp.lz");
static const ax_sprite sSuicuneSprites130[] = {
	{sSuicuneGfx130, ARRAY_COUNT(sSuicuneGfx130)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx131[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_131.4bpp.lz");
static const ax_sprite sSuicuneSprites131[] = {
	{sSuicuneGfx131, ARRAY_COUNT(sSuicuneGfx131)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx132[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_132.4bpp.lz");
static const ax_sprite sSuicuneSprites132[] = {
	{sSuicuneGfx132, ARRAY_COUNT(sSuicuneGfx132)}, 
	{NULL, 0}
};
static const u8 sSuicuneGfx133[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/suicune/sprite_133.4bpp.lz");
static const ax_sprite sSuicuneSprites133[] = {
	{sSuicuneGfx133, ARRAY_COUNT(sSuicuneGfx133)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSuicune[] = {
	sSuicunePose1,
	sSuicunePose2,
	sSuicunePose3,
	sSuicunePose4,
	sSuicunePose5,
	sSuicunePose6,
	sSuicunePose7,
	sSuicunePose8,
	sSuicunePose9,
	sSuicunePose10,
	sSuicunePose11,
	sSuicunePose12,
	sSuicunePose13,
	sSuicunePose14,
	sSuicunePose15,
	sSuicunePose16,
	sSuicunePose17,
	sSuicunePose18,
	sSuicunePose19,
	sSuicunePose20,
	sSuicunePose21,
	sSuicunePose22,
	sSuicunePose23,
	sSuicunePose24,
	sSuicunePose1,
	sSuicunePose26,
	sSuicunePose27,
	sSuicunePose4,
	sSuicunePose29,
	sSuicunePose30,
	sSuicunePose7,
	sSuicunePose32,
	sSuicunePose33,
	sSuicunePose10,
	sSuicunePose35,
	sSuicunePose36,
	sSuicunePose13,
	sSuicunePose38,
	sSuicunePose39,
	sSuicunePose16,
	sSuicunePose41,
	sSuicunePose42,
	sSuicunePose19,
	sSuicunePose44,
	sSuicunePose45,
	sSuicunePose22,
	sSuicunePose47,
	sSuicunePose48,
	sSuicunePose1,
	sSuicunePose26,
	sSuicunePose27,
	sSuicunePose4,
	sSuicunePose29,
	sSuicunePose30,
	sSuicunePose7,
	sSuicunePose32,
	sSuicunePose33,
	sSuicunePose10,
	sSuicunePose35,
	sSuicunePose36,
	sSuicunePose13,
	sSuicunePose38,
	sSuicunePose39,
	sSuicunePose16,
	sSuicunePose41,
	sSuicunePose42,
	sSuicunePose19,
	sSuicunePose44,
	sSuicunePose45,
	sSuicunePose22,
	sSuicunePose47,
	sSuicunePose48,
	sSuicunePose1,
	sSuicunePose74,
	sSuicunePose75,
	sSuicunePose4,
	sSuicunePose77,
	sSuicunePose78,
	sSuicunePose7,
	sSuicunePose80,
	sSuicunePose81,
	sSuicunePose10,
	sSuicunePose83,
	sSuicunePose84,
	sSuicunePose13,
	sSuicunePose86,
	sSuicunePose87,
	sSuicunePose16,
	sSuicunePose89,
	sSuicunePose90,
	sSuicunePose19,
	sSuicunePose92,
	sSuicunePose93,
	sSuicunePose22,
	sSuicunePose95,
	sSuicunePose96,
	sSuicunePose1,
	sSuicunePose98,
	sSuicunePose4,
	sSuicunePose100,
	sSuicunePose7,
	sSuicunePose102,
	sSuicunePose10,
	sSuicunePose104,
	sSuicunePose13,
	sSuicunePose106,
	sSuicunePose16,
	sSuicunePose108,
	sSuicunePose19,
	sSuicunePose110,
	sSuicunePose22,
	sSuicunePose112,
	sSuicunePose113,
	sSuicunePose114,
	sSuicunePose115,
	sSuicunePose116,
	sSuicunePose117,
	sSuicunePose118,
	sSuicunePose119,
	sSuicunePose120,
	sSuicunePose121,
	sSuicunePose122,
	sSuicunePose1,
	sSuicunePose74,
	sSuicunePose75,
	sSuicunePose4,
	sSuicunePose77,
	sSuicunePose78,
	sSuicunePose7,
	sSuicunePose80,
	sSuicunePose81,
	sSuicunePose10,
	sSuicunePose83,
	sSuicunePose84,
	sSuicunePose13,
	sSuicunePose86,
	sSuicunePose87,
	sSuicunePose16,
	sSuicunePose89,
	sSuicunePose90,
	sSuicunePose19,
	sSuicunePose92,
	sSuicunePose93,
	sSuicunePose22,
	sSuicunePose95,
	sSuicunePose96,
	sSuicunePose75,
	sSuicunePose148,
	sSuicunePose149,
	sSuicunePose150,
	sSuicunePose87,
	sSuicunePose152,
	sSuicunePose153,
	sSuicunePose154,
	sSuicunePose75,
	sSuicunePose154,
	sSuicunePose153,
	sSuicunePose152,
	sSuicunePose87,
	sSuicunePose150,
	sSuicunePose149,
	sSuicunePose148,
	sSuicunePose1,
	sSuicunePose75,
	sSuicunePose4,
	sSuicunePose154,
	sSuicunePose7,
	sSuicunePose153,
	sSuicunePose10,
	sSuicunePose170,
	sSuicunePose13,
	sSuicunePose87,
	sSuicunePose16,
	sSuicunePose150,
	sSuicunePose19,
	sSuicunePose149,
	sSuicunePose22,
	sSuicunePose148,
	sSuicunePose74,
	sSuicunePose95,
	sSuicunePose181,
	sSuicunePose182,
	sSuicunePose183,
	sSuicunePose184,
	sSuicunePose185,
	sSuicunePose186,
	sSuicunePose1,
	sSuicunePose22,
	sSuicunePose19,
	sSuicunePose16,
	sSuicunePose13,
	sSuicunePose10,
	sSuicunePose7,
	sSuicunePose4,
	sSuicunePose1,
	sSuicunePose74,
	sSuicunePose75,
	sSuicunePose98,
};

static const struct PositionSets sAxPositionsSuicune[] = {
	[0] = { .set = { {-1, -6}, {-7, 3}, {5, 3}, {-1, -13} } },
	[1] = { .set = { {-1, -4}, {-4, 6}, {3, -1}, {-1, -11} } },
	[2] = { .set = { {-1, -4}, {-5, -1}, {2, 6}, {-1, -11} } },
	[3] = { .set = { {10, -8}, {8, -1}, {0, 3}, {-2, -14} } },
	[4] = { .set = { {10, -6}, {9, 3}, {-5, 0}, {-1, -14} } },
	[5] = { .set = { {10, -6}, {3, -3}, {3, 5}, {-3, -16} } },
	[6] = { .set = { {13, -13}, {5, -3}, {5, 2}, {-2, -12} } },
	[7] = { .set = { {13, -11}, {11, -2}, {-2, 1}, {-1, -10} } },
	[8] = { .set = { {13, -11}, {-2, -3}, {10, 2}, {-1, -13} } },
	[9] = { .set = { {7, -17}, {-2, -6}, {9, -1}, {-2, -13} } },
	[10] = { .set = { {7, -16}, {3, -10}, {3, 1}, {-1, -13} } },
	[11] = { .set = { {7, -17}, {-4, -4}, {10, -2}, {-1, -14} } },
	[12] = { .set = { {-1, -16}, {5, -6}, {-7, -6}, {-1, -14} } },
	[13] = { .set = { {-1, -15}, {4, -3}, {-7, -5}, {-1, -13} } },
	[14] = { .set = { {-1, -14}, {5, -7}, {-6, -4}, {-1, -12} } },
	[15] = { .set = { {-9, -17}, {0, -6}, {-11, -1}, {0, -13} } },
	[16] = { .set = { {-9, -16}, {-5, -10}, {-5, 1}, {-1, -13} } },
	[17] = { .set = { {-9, -17}, {2, -4}, {-12, -2}, {-1, -14} } },
	[18] = { .set = { {-15, -13}, {-7, -3}, {-7, 2}, {0, -12} } },
	[19] = { .set = { {-15, -11}, {-13, -2}, {0, 1}, {-1, -10} } },
	[20] = { .set = { {-15, -11}, {0, -3}, {-12, 2}, {-1, -13} } },
	[21] = { .set = { {-12, -8}, {-10, -1}, {-2, 3}, {0, -14} } },
	[22] = { .set = { {-12, -6}, {-11, 3}, {3, 0}, {-1, -14} } },
	[23] = { .set = { {-12, -6}, {-5, -3}, {-5, 5}, {1, -16} } },
	[24] = { .set = { {-1, -6}, {-7, 3}, {5, 3}, {-1, -13} } },
	[25] = { .set = { {-1, -5}, {-8, -2}, {6, -2}, {-1, -15} } },
	[26] = { .set = { {-1, 2}, {-7, 3}, {5, 4}, {-1, -9} } },
	[27] = { .set = { {10, -8}, {8, -1}, {0, 3}, {-2, -14} } },
	[28] = { .set = { {11, -4}, {15, -5}, {5, 0}, {-2, -13} } },
	[29] = { .set = { {8, 1}, {12, -1}, {1, 3}, {-3, -11} } },
	[30] = { .set = { {13, -13}, {5, -3}, {5, 2}, {-2, -12} } },
	[31] = { .set = { {14, -8}, {16, -7}, {12, -4}, {1, -12} } },
	[32] = { .set = { {12, -2}, {7, -3}, {7, 2}, {-2, -7} } },
	[33] = { .set = { {7, -17}, {-2, -6}, {9, -1}, {-2, -13} } },
	[34] = { .set = { {9, -14}, {3, -15}, {12, -10}, {-2, -11} } },
	[35] = { .set = { {9, -9}, {0, -8}, {9, -2}, {-2, -9} } },
	[36] = { .set = { {-1, -16}, {5, -6}, {-7, -6}, {-1, -14} } },
	[37] = { .set = { {-1, -17}, {6, -7}, {-7, -7}, {-1, -15} } },
	[38] = { .set = { {-1, -5}, {5, -4}, {-7, -2}, {-1, -9} } },
	[39] = { .set = { {-9, -17}, {0, -6}, {-11, -1}, {0, -13} } },
	[40] = { .set = { {-10, -14}, {-4, -15}, {-13, -10}, {1, -11} } },
	[41] = { .set = { {-11, -9}, {-2, -8}, {-11, -2}, {0, -9} } },
	[42] = { .set = { {-15, -13}, {-7, -3}, {-7, 2}, {0, -12} } },
	[43] = { .set = { {-16, -8}, {-18, -7}, {-14, -4}, {-3, -12} } },
	[44] = { .set = { {-14, -2}, {-9, -3}, {-9, 2}, {0, -7} } },
	[45] = { .set = { {-12, -8}, {-10, -1}, {-2, 3}, {0, -14} } },
	[46] = { .set = { {-13, -4}, {-17, -5}, {-7, 0}, {0, -13} } },
	[47] = { .set = { {-10, 1}, {-14, -1}, {-3, 3}, {1, -11} } },
	[48] = { .set = { {-1, -6}, {-7, 3}, {5, 3}, {-1, -13} } },
	[49] = { .set = { {-1, -5}, {-8, -2}, {6, -2}, {-1, -15} } },
	[50] = { .set = { {-1, 2}, {-7, 3}, {5, 4}, {-1, -9} } },
	[51] = { .set = { {10, -8}, {8, -1}, {0, 3}, {-2, -14} } },
	[52] = { .set = { {11, -4}, {15, -5}, {5, 0}, {-2, -13} } },
	[53] = { .set = { {8, 1}, {12, -1}, {1, 3}, {-3, -11} } },
	[54] = { .set = { {13, -13}, {5, -3}, {5, 2}, {-2, -12} } },
	[55] = { .set = { {14, -8}, {16, -7}, {12, -4}, {1, -12} } },
	[56] = { .set = { {12, -2}, {7, -3}, {7, 2}, {-2, -7} } },
	[57] = { .set = { {7, -17}, {-2, -6}, {9, -1}, {-2, -13} } },
	[58] = { .set = { {9, -14}, {3, -15}, {12, -10}, {-2, -11} } },
	[59] = { .set = { {9, -9}, {0, -8}, {9, -2}, {-2, -9} } },
	[60] = { .set = { {-1, -16}, {5, -6}, {-7, -6}, {-1, -14} } },
	[61] = { .set = { {-1, -17}, {6, -7}, {-7, -7}, {-1, -15} } },
	[62] = { .set = { {-1, -5}, {5, -4}, {-7, -2}, {-1, -9} } },
	[63] = { .set = { {-9, -17}, {0, -6}, {-11, -1}, {0, -13} } },
	[64] = { .set = { {-10, -14}, {-4, -15}, {-13, -10}, {1, -11} } },
	[65] = { .set = { {-11, -9}, {-2, -8}, {-11, -2}, {0, -9} } },
	[66] = { .set = { {-15, -13}, {-7, -3}, {-7, 2}, {0, -12} } },
	[67] = { .set = { {-16, -8}, {-18, -7}, {-14, -4}, {-3, -12} } },
	[68] = { .set = { {-14, -2}, {-9, -3}, {-9, 2}, {0, -7} } },
	[69] = { .set = { {-12, -8}, {-10, -1}, {-2, 3}, {0, -14} } },
	[70] = { .set = { {-13, -4}, {-17, -5}, {-7, 0}, {0, -13} } },
	[71] = { .set = { {-10, 1}, {-14, -1}, {-3, 3}, {1, -11} } },
	[72] = { .set = { {-1, -6}, {-7, 3}, {5, 3}, {-1, -13} } },
	[73] = { .set = { {-1, 2}, {-7, 3}, {5, 3}, {-1, -9} } },
	[74] = { .set = { {-1, 1}, {-7, 4}, {5, 3}, {-1, -10} } },
	[75] = { .set = { {10, -8}, {8, -1}, {0, 3}, {-2, -14} } },
	[76] = { .set = { {6, 0}, {9, -1}, {0, 3}, {-4, -12} } },
	[77] = { .set = { {12, -2}, {9, -1}, {0, 3}, {1, -10} } },
	[78] = { .set = { {13, -13}, {5, -3}, {5, 2}, {-2, -12} } },
	[79] = { .set = { {8, -1}, {5, -3}, {5, 2}, {-3, -9} } },
	[80] = { .set = { {17, -7}, {9, -2}, {5, 2}, {2, -11} } },
	[81] = { .set = { {7, -17}, {-2, -6}, {9, -1}, {-2, -13} } },
	[82] = { .set = { {5, -5}, {1, -6}, {9, -1}, {-1, -10} } },
	[83] = { .set = { {11, -17}, {0, -7}, {9, -1}, {1, -14} } },
	[84] = { .set = { {-1, -16}, {5, -6}, {-7, -6}, {-1, -14} } },
	[85] = { .set = { {-1, -5}, {5, -2}, {-7, -2}, {-1, -11} } },
	[86] = { .set = { {-1, -20}, {5, -3}, {-7, -3}, {-1, -12} } },
	[87] = { .set = { {-9, -17}, {0, -6}, {-11, -1}, {0, -13} } },
	[88] = { .set = { {-7, -5}, {-3, -6}, {-11, -1}, {-1, -10} } },
	[89] = { .set = { {-13, -17}, {-2, -7}, {-11, -1}, {-3, -14} } },
	[90] = { .set = { {-15, -13}, {-7, -3}, {-7, 2}, {0, -12} } },
	[91] = { .set = { {-10, -1}, {-7, -3}, {-7, 2}, {1, -9} } },
	[92] = { .set = { {-19, -7}, {-11, -2}, {-7, 2}, {-4, -11} } },
	[93] = { .set = { {-12, -8}, {-10, -1}, {-2, 3}, {0, -14} } },
	[94] = { .set = { {-8, 0}, {-11, -1}, {-2, 3}, {2, -12} } },
	[95] = { .set = { {-14, -2}, {-11, -1}, {-2, 3}, {-3, -10} } },
	[96] = { .set = { {-1, -6}, {-7, 3}, {5, 3}, {-1, -13} } },
	[97] = { .set = { {-1, -26}, {-7, 3}, {5, 3}, {-1, -12} } },
	[98] = { .set = { {10, -8}, {8, -1}, {0, 3}, {-2, -14} } },
	[99] = { .set = { {2, -25}, {9, -1}, {0, 3}, {-1, -13} } },
	[100] = { .set = { {13, -13}, {5, -3}, {5, 2}, {-2, -12} } },
	[101] = { .set = { {3, -24}, {5, -3}, {5, 2}, {-5, -11} } },
	[102] = { .set = { {7, -17}, {-2, -6}, {9, -1}, {-2, -13} } },
	[103] = { .set = { {4, -25}, {0, -6}, {9, -1}, {-3, -10} } },
	[104] = { .set = { {-1, -16}, {5, -6}, {-7, -6}, {-1, -14} } },
	[105] = { .set = { {-1, -27}, {5, -4}, {-7, -4}, {-1, -9} } },
	[106] = { .set = { {-9, -17}, {0, -6}, {-11, -1}, {0, -13} } },
	[107] = { .set = { {-6, -25}, {-2, -6}, {-11, -1}, {1, -10} } },
	[108] = { .set = { {-15, -13}, {-7, -3}, {-7, 2}, {0, -12} } },
	[109] = { .set = { {-5, -24}, {-7, -3}, {-7, 2}, {3, -11} } },
	[110] = { .set = { {-12, -8}, {-10, -1}, {-2, 3}, {0, -14} } },
	[111] = { .set = { {-4, -25}, {-11, -1}, {-2, 3}, {-1, -13} } },
	[112] = { .set = { {-11, -1}, {-15, 0}, {-11, 1}, {2, -8} } },
	[113] = { .set = { {-11, -1}, {-15, 0}, {-11, 1}, {2, -8} } },
	[114] = { .set = { {0, 3}, {-5, 3}, {5, 3}, {0, -10} } },
	[115] = { .set = { {8, 2}, {10, 2}, {0, 4}, {-1, -11} } },
	[116] = { .set = { {13, -1}, {12, -3}, {11, 0}, {0, -13} } },
	[117] = { .set = { {7, -8}, {2, -9}, {12, -4}, {0, -8} } },
	[118] = { .set = { {0, -6}, {6, -2}, {-6, -2}, {0, -11} } },
	[119] = { .set = { {-8, -8}, {-3, -9}, {-13, -4}, {-1, -8} } },
	[120] = { .set = { {-14, -1}, {-13, -3}, {-12, 0}, {-1, -13} } },
	[121] = { .set = { {-9, 2}, {-11, 2}, {-1, 4}, {0, -11} } },
	[122] = { .set = { {-1, -6}, {-7, 3}, {5, 3}, {-1, -13} } },
	[123] = { .set = { {-1, 2}, {-7, 3}, {5, 3}, {-1, -9} } },
	[124] = { .set = { {-1, 1}, {-7, 4}, {5, 3}, {-1, -10} } },
	[125] = { .set = { {10, -8}, {8, -1}, {0, 3}, {-2, -14} } },
	[126] = { .set = { {6, 0}, {9, -1}, {0, 3}, {-4, -12} } },
	[127] = { .set = { {12, -2}, {9, -1}, {0, 3}, {1, -10} } },
	[128] = { .set = { {13, -13}, {5, -3}, {5, 2}, {-2, -12} } },
	[129] = { .set = { {8, -1}, {5, -3}, {5, 2}, {-3, -9} } },
	[130] = { .set = { {17, -7}, {9, -2}, {5, 2}, {2, -11} } },
	[131] = { .set = { {7, -17}, {-2, -6}, {9, -1}, {-2, -13} } },
	[132] = { .set = { {5, -5}, {1, -6}, {9, -1}, {-1, -10} } },
	[133] = { .set = { {11, -17}, {0, -7}, {9, -1}, {1, -14} } },
	[134] = { .set = { {-1, -16}, {5, -6}, {-7, -6}, {-1, -14} } },
	[135] = { .set = { {-1, -5}, {5, -2}, {-7, -2}, {-1, -11} } },
	[136] = { .set = { {-1, -20}, {5, -3}, {-7, -3}, {-1, -12} } },
	[137] = { .set = { {-9, -17}, {0, -6}, {-11, -1}, {0, -13} } },
	[138] = { .set = { {-7, -5}, {-3, -6}, {-11, -1}, {-1, -10} } },
	[139] = { .set = { {-13, -17}, {-2, -7}, {-11, -1}, {-3, -14} } },
	[140] = { .set = { {-15, -13}, {-7, -3}, {-7, 2}, {0, -12} } },
	[141] = { .set = { {-10, -1}, {-7, -3}, {-7, 2}, {1, -9} } },
	[142] = { .set = { {-19, -7}, {-11, -2}, {-7, 2}, {-4, -11} } },
	[143] = { .set = { {-12, -8}, {-10, -1}, {-2, 3}, {0, -14} } },
	[144] = { .set = { {-8, 0}, {-11, -1}, {-2, 3}, {2, -12} } },
	[145] = { .set = { {-14, -2}, {-11, -1}, {-2, 3}, {-3, -10} } },
	[146] = { .set = { {-1, 1}, {-7, 4}, {5, 3}, {-1, -10} } },
	[147] = { .set = { {-12, -2}, {-9, -1}, {0, 3}, {-1, -10} } },
	[148] = { .set = { {-16, -7}, {-8, -2}, {-4, 2}, {-1, -11} } },
	[149] = { .set = { {-12, -17}, {-1, -7}, {-10, -1}, {-2, -14} } },
	[150] = { .set = { {-1, -20}, {5, -3}, {-7, -3}, {-1, -12} } },
	[151] = { .set = { {13, -17}, {2, -7}, {11, -1}, {3, -14} } },
	[152] = { .set = { {14, -7}, {6, -2}, {2, 2}, {-1, -11} } },
	[153] = { .set = { {10, -2}, {7, -1}, {-2, 3}, {-1, -10} } },
	[154] = { .set = { {-1, 1}, {-7, 4}, {5, 3}, {-1, -10} } },
	[155] = { .set = { {10, -2}, {7, -1}, {-2, 3}, {-1, -10} } },
	[156] = { .set = { {14, -7}, {6, -2}, {2, 2}, {-1, -11} } },
	[157] = { .set = { {13, -17}, {2, -7}, {11, -1}, {3, -14} } },
	[158] = { .set = { {-1, -20}, {5, -3}, {-7, -3}, {-1, -12} } },
	[159] = { .set = { {-12, -17}, {-1, -7}, {-10, -1}, {-2, -14} } },
	[160] = { .set = { {-16, -7}, {-8, -2}, {-4, 2}, {-1, -11} } },
	[161] = { .set = { {-12, -2}, {-9, -1}, {0, 3}, {-1, -10} } },
	[162] = { .set = { {-1, -6}, {-7, 3}, {5, 3}, {-1, -13} } },
	[163] = { .set = { {-1, 1}, {-7, 4}, {5, 3}, {-1, -10} } },
	[164] = { .set = { {10, -8}, {8, -1}, {0, 3}, {-2, -14} } },
	[165] = { .set = { {10, -2}, {7, -1}, {-2, 3}, {-1, -10} } },
	[166] = { .set = { {13, -13}, {5, -3}, {5, 2}, {-2, -12} } },
	[167] = { .set = { {14, -7}, {6, -2}, {2, 2}, {-1, -11} } },
	[168] = { .set = { {7, -17}, {-2, -6}, {9, -1}, {-2, -13} } },
	[169] = { .set = { {10, -17}, {-1, -7}, {8, -1}, {0, -14} } },
	[170] = { .set = { {-1, -16}, {5, -6}, {-7, -6}, {-1, -14} } },
	[171] = { .set = { {-1, -20}, {5, -3}, {-7, -3}, {-1, -12} } },
	[172] = { .set = { {-9, -17}, {0, -6}, {-11, -1}, {0, -13} } },
	[173] = { .set = { {-12, -17}, {-1, -7}, {-10, -1}, {-2, -14} } },
	[174] = { .set = { {-15, -13}, {-7, -3}, {-7, 2}, {0, -12} } },
	[175] = { .set = { {-16, -7}, {-8, -2}, {-4, 2}, {-1, -11} } },
	[176] = { .set = { {-12, -8}, {-10, -1}, {-2, 3}, {0, -14} } },
	[177] = { .set = { {-12, -2}, {-9, -1}, {0, 3}, {-1, -10} } },
	[178] = { .set = { {-1, 2}, {-7, 3}, {5, 3}, {-1, -9} } },
	[179] = { .set = { {-8, 0}, {-11, -1}, {-2, 3}, {2, -12} } },
	[180] = { .set = { {-11, -2}, {-8, -4}, {-8, 1}, {0, -10} } },
	[181] = { .set = { {-8, -5}, {-4, -6}, {-12, -1}, {-2, -10} } },
	[182] = { .set = { {-1, -6}, {5, -3}, {-7, -3}, {-1, -12} } },
	[183] = { .set = { {7, -5}, {3, -6}, {11, -1}, {1, -10} } },
	[184] = { .set = { {10, -2}, {7, -4}, {7, 1}, {-1, -10} } },
	[185] = { .set = { {7, 0}, {10, -1}, {1, 3}, {-3, -12} } },
	[186] = { .set = { {-1, -6}, {-7, 3}, {5, 3}, {-1, -13} } },
	[187] = { .set = { {-12, -8}, {-10, -1}, {-2, 3}, {0, -14} } },
	[188] = { .set = { {-15, -13}, {-7, -3}, {-7, 2}, {0, -12} } },
	[189] = { .set = { {-9, -17}, {0, -6}, {-11, -1}, {0, -13} } },
	[190] = { .set = { {-1, -16}, {5, -6}, {-7, -6}, {-1, -14} } },
	[191] = { .set = { {7, -17}, {-2, -6}, {9, -1}, {-2, -13} } },
	[192] = { .set = { {13, -13}, {5, -3}, {5, 2}, {-2, -12} } },
	[193] = { .set = { {10, -8}, {8, -1}, {0, 3}, {-2, -14} } },
	[194] = { .set = { {-1, -6}, {-7, 3}, {5, 3}, {-1, -13} } },
	[195] = { .set = { {-1, 2}, {-7, 3}, {5, 3}, {-1, -9} } },
	[196] = { .set = { {-1, 1}, {-7, 4}, {5, 3}, {-1, -10} } },
	[197] = { .set = { {-1, -26}, {-7, 3}, {5, 3}, {-1, -12} } },
};

static const ax_anim *const sSuicuneAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_00036),
	AX_ANIM_PTR(gAxSharedAnim_00080),
	AX_ANIM_PTR(gAxSharedAnim_00085),
	AX_ANIM_PTR(gAxSharedAnim_00090),
	AX_ANIM_PTR(gAxSharedAnim_00041),
	AX_ANIM_PTR(gAxSharedAnim_00055),
	AX_ANIM_PTR(gAxSharedAnim_00061),
	AX_ANIM_PTR(gAxSharedAnim_00066),
};

static const ax_anim *const sSuicuneAnimTable2[] = {
	AX_ANIM_PTR(sSuicuneAnims_2_1),
	AX_ANIM_PTR(sSuicuneAnims_2_2),
	AX_ANIM_PTR(sSuicuneAnims_2_3),
	AX_ANIM_PTR(sSuicuneAnims_2_4),
	AX_ANIM_PTR(sSuicuneAnims_2_5),
	AX_ANIM_PTR(sSuicuneAnims_2_6),
	AX_ANIM_PTR(sSuicuneAnims_2_7),
	AX_ANIM_PTR(sSuicuneAnims_2_8),
};

static const ax_anim *const sSuicuneAnimTable3[] = {
	AX_ANIM_PTR(sSuicuneAnims_3_1),
	AX_ANIM_PTR(sSuicuneAnims_3_2),
	AX_ANIM_PTR(sSuicuneAnims_3_3),
	AX_ANIM_PTR(sSuicuneAnims_3_4),
	AX_ANIM_PTR(sSuicuneAnims_3_5),
	AX_ANIM_PTR(sSuicuneAnims_3_6),
	AX_ANIM_PTR(sSuicuneAnims_3_7),
	AX_ANIM_PTR(sSuicuneAnims_3_8),
};

static const ax_anim *const sSuicuneAnimTable4[] = {
	AX_ANIM_PTR(sSuicuneAnims_4_1),
	AX_ANIM_PTR(sSuicuneAnims_4_2),
	AX_ANIM_PTR(sSuicuneAnims_4_3),
	AX_ANIM_PTR(sSuicuneAnims_4_4),
	AX_ANIM_PTR(sSuicuneAnims_4_5),
	AX_ANIM_PTR(sSuicuneAnims_4_6),
	AX_ANIM_PTR(sSuicuneAnims_4_7),
	AX_ANIM_PTR(sSuicuneAnims_4_8),
};

static const ax_anim *const sSuicuneAnimTable5[] = {
	AX_ANIM_PTR(sSuicuneAnims_5_1),
	AX_ANIM_PTR(sSuicuneAnims_5_2),
	AX_ANIM_PTR(sSuicuneAnims_5_3),
	AX_ANIM_PTR(sSuicuneAnims_5_4),
	AX_ANIM_PTR(sSuicuneAnims_5_5),
	AX_ANIM_PTR(sSuicuneAnims_5_6),
	AX_ANIM_PTR(sSuicuneAnims_5_7),
	AX_ANIM_PTR(sSuicuneAnims_5_8),
};

static const ax_anim *const sSuicuneAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
};

static const ax_anim *const sSuicuneAnimTable7[] = {
	AX_ANIM_PTR(sSuicuneAnims_7_1),
	AX_ANIM_PTR(sSuicuneAnims_7_2),
	AX_ANIM_PTR(sSuicuneAnims_7_3),
	AX_ANIM_PTR(gAxSharedAnim_00291),
	AX_ANIM_PTR(gAxSharedAnim_00303),
	AX_ANIM_PTR(gAxSharedAnim_00316),
	AX_ANIM_PTR(sSuicuneAnims_7_7),
	AX_ANIM_PTR(sSuicuneAnims_7_8),
};

static const ax_anim *const sSuicuneAnimTable8[] = {
	AX_ANIM_PTR(sSuicuneAnims_8_1),
	AX_ANIM_PTR(sSuicuneAnims_8_2),
	AX_ANIM_PTR(sSuicuneAnims_8_3),
	AX_ANIM_PTR(sSuicuneAnims_8_4),
	AX_ANIM_PTR(sSuicuneAnims_8_5),
	AX_ANIM_PTR(sSuicuneAnims_8_6),
	AX_ANIM_PTR(sSuicuneAnims_8_7),
	AX_ANIM_PTR(sSuicuneAnims_8_8),
};

static const ax_anim *const sSuicuneAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00534),
	AX_ANIM_PTR(sSuicuneAnims_9_2),
	AX_ANIM_PTR(sSuicuneAnims_9_3),
	AX_ANIM_PTR(sSuicuneAnims_9_4),
	AX_ANIM_PTR(sSuicuneAnims_9_5),
	AX_ANIM_PTR(sSuicuneAnims_9_6),
	AX_ANIM_PTR(sSuicuneAnims_9_7),
	AX_ANIM_PTR(sSuicuneAnims_9_8),
};

static const ax_anim *const sSuicuneAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00612),
	AX_ANIM_PTR(gAxSharedAnim_00622),
	AX_ANIM_PTR(gAxSharedAnim_00632),
	AX_ANIM_PTR(gAxSharedAnim_00642),
	AX_ANIM_PTR(gAxSharedAnim_00651),
	AX_ANIM_PTR(gAxSharedAnim_00660),
	AX_ANIM_PTR(gAxSharedAnim_00675),
	AX_ANIM_PTR(gAxSharedAnim_00686),
};

static const ax_anim *const sSuicuneAnimTable11[] = {
	AX_ANIM_PTR(sSuicuneAnims_11_1),
	AX_ANIM_PTR(sSuicuneAnims_11_2),
	AX_ANIM_PTR(sSuicuneAnims_11_3),
	AX_ANIM_PTR(sSuicuneAnims_11_4),
	AX_ANIM_PTR(gAxSharedAnim_00791),
	AX_ANIM_PTR(sSuicuneAnims_11_6),
	AX_ANIM_PTR(sSuicuneAnims_11_7),
	AX_ANIM_PTR(sSuicuneAnims_11_8),
};

static const ax_anim *const sSuicuneAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00907),
	AX_ANIM_PTR(gAxSharedAnim_00996),
	AX_ANIM_PTR(gAxSharedAnim_00971),
	AX_ANIM_PTR(gAxSharedAnim_00960),
	AX_ANIM_PTR(gAxSharedAnim_00959),
	AX_ANIM_PTR(gAxSharedAnim_00945),
	AX_ANIM_PTR(gAxSharedAnim_00925),
	AX_ANIM_PTR(gAxSharedAnim_00908),
};

static const ax_anim *const sSuicuneAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01017),
	AX_ANIM_PTR(gAxSharedAnim_01123),
	AX_ANIM_PTR(gAxSharedAnim_01112),
	AX_ANIM_PTR(gAxSharedAnim_01093),
	AX_ANIM_PTR(gAxSharedAnim_01079),
	AX_ANIM_PTR(gAxSharedAnim_01063),
	AX_ANIM_PTR(gAxSharedAnim_01048),
	AX_ANIM_PTR(gAxSharedAnim_01028),
};

static const ax_anim *const sSuicuneAnimTable14[] = {
	AX_ANIM_PTR(sSuicuneAnims_14_1),
	AX_ANIM_PTR(sSuicuneAnims_14_1),
	AX_ANIM_PTR(sSuicuneAnims_14_1),
	AX_ANIM_PTR(sSuicuneAnims_14_1),
	AX_ANIM_PTR(sSuicuneAnims_14_1),
	AX_ANIM_PTR(sSuicuneAnims_14_1),
	AX_ANIM_PTR(sSuicuneAnims_14_1),
	AX_ANIM_PTR(sSuicuneAnims_14_1),
};

static const ax_anim *const *const sAxAnimationsSuicune[] = {
	sSuicuneAnimTable1,
	sSuicuneAnimTable2,
	sSuicuneAnimTable3,
	sSuicuneAnimTable4,
	sSuicuneAnimTable5,
	sSuicuneAnimTable6,
	sSuicuneAnimTable7,
	sSuicuneAnimTable8,
	sSuicuneAnimTable9,
	sSuicuneAnimTable10,
	sSuicuneAnimTable11,
	sSuicuneAnimTable12,
	sSuicuneAnimTable13,
	sSuicuneAnimTable14,
};

static const ax_sprite *const sAxSpritesSuicune[] = {
	sSuicuneSprites1,
	sSuicuneSprites2,
	sSuicuneSprites3,
	sSuicuneSprites4,
	sSuicuneSprites5,
	sSuicuneSprites6,
	sSuicuneSprites7,
	sSuicuneSprites8,
	sSuicuneSprites9,
	sSuicuneSprites10,
	sSuicuneSprites11,
	sSuicuneSprites12,
	sSuicuneSprites13,
	sSuicuneSprites14,
	sSuicuneSprites15,
	sSuicuneSprites16,
	sSuicuneSprites17,
	sSuicuneSprites18,
	sSuicuneSprites19,
	sSuicuneSprites20,
	sSuicuneSprites21,
	sSuicuneSprites22,
	sSuicuneSprites23,
	sSuicuneSprites24,
	sSuicuneSprites25,
	sSuicuneSprites26,
	sSuicuneSprites27,
	sSuicuneSprites28,
	sSuicuneSprites29,
	sSuicuneSprites30,
	sSuicuneSprites31,
	sSuicuneSprites32,
	sSuicuneSprites33,
	sSuicuneSprites34,
	sSuicuneSprites35,
	sSuicuneSprites36,
	sSuicuneSprites37,
	sSuicuneSprites38,
	sSuicuneSprites39,
	sSuicuneSprites40,
	sSuicuneSprites41,
	sSuicuneSprites42,
	sSuicuneSprites43,
	sSuicuneSprites44,
	sSuicuneSprites45,
	sSuicuneSprites46,
	sSuicuneSprites47,
	sSuicuneSprites48,
	sSuicuneSprites49,
	sSuicuneSprites50,
	sSuicuneSprites51,
	sSuicuneSprites52,
	sSuicuneSprites53,
	sSuicuneSprites54,
	sSuicuneSprites55,
	sSuicuneSprites56,
	sSuicuneSprites57,
	sSuicuneSprites58,
	sSuicuneSprites59,
	sSuicuneSprites60,
	sSuicuneSprites61,
	sSuicuneSprites62,
	sSuicuneSprites63,
	sSuicuneSprites64,
	sSuicuneSprites65,
	sSuicuneSprites66,
	sSuicuneSprites67,
	sSuicuneSprites68,
	sSuicuneSprites69,
	sSuicuneSprites70,
	sSuicuneSprites71,
	sSuicuneSprites72,
	sSuicuneSprites73,
	sSuicuneSprites74,
	sSuicuneSprites75,
	sSuicuneSprites76,
	sSuicuneSprites77,
	sSuicuneSprites78,
	sSuicuneSprites79,
	sSuicuneSprites80,
	sSuicuneSprites81,
	sSuicuneSprites82,
	sSuicuneSprites83,
	sSuicuneSprites84,
	sSuicuneSprites85,
	sSuicuneSprites86,
	sSuicuneSprites87,
	sSuicuneSprites88,
	sSuicuneSprites89,
	sSuicuneSprites90,
	sSuicuneSprites91,
	sSuicuneSprites92,
	sSuicuneSprites93,
	sSuicuneSprites94,
	sSuicuneSprites95,
	sSuicuneSprites96,
	sSuicuneSprites97,
	sSuicuneSprites98,
	sSuicuneSprites99,
	sSuicuneSprites100,
	sSuicuneSprites101,
	sSuicuneSprites102,
	sSuicuneSprites103,
	sSuicuneSprites104,
	sSuicuneSprites105,
	sSuicuneSprites106,
	sSuicuneSprites107,
	sSuicuneSprites108,
	sSuicuneSprites109,
	sSuicuneSprites110,
	sSuicuneSprites111,
	sSuicuneSprites112,
	sSuicuneSprites113,
	sSuicuneSprites114,
	sSuicuneSprites115,
	sSuicuneSprites116,
	sSuicuneSprites117,
	sSuicuneSprites118,
	sSuicuneSprites119,
	sSuicuneSprites120,
	sSuicuneSprites121,
	sSuicuneSprites122,
	sSuicuneSprites123,
	sSuicuneSprites124,
	sSuicuneSprites125,
	sSuicuneSprites126,
	sSuicuneSprites127,
	sSuicuneSprites128,
	sSuicuneSprites129,
	sSuicuneSprites130,
	sSuicuneSprites131,
	sSuicuneSprites132,
	sSuicuneSprites133,
};

static const axmain sAxMainSuicune = {
	.poses = sAxPosesSuicune,
	.animations = sAxAnimationsSuicune,
	.animCount = ARRAY_COUNT(sAxAnimationsSuicune),
	.spriteData = sAxSpritesSuicune,
	.positions = sAxPositionsSuicune,
};
