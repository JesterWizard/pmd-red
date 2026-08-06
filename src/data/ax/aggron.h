/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainAggron;
const SiroArchive gAxAggron = {"SIRO", &sAxMainAggron};

static const ax_pose sAggronPose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose3[] = {
	AX_POSE(2, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose7[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose8[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose9[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose12[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose13[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose15[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose18[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose19[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose20[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose21[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose22[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose23[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose28[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose32[] = {
	AX_POSE(16, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(17, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose36[] = {
	AX_POSE(21, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(22, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(23, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(10, 3, 5)),
	AX_POSE(24, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(11, 3, 5)),
	AX_POSE(25, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(26, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose40[] = {
	AX_POSE(27, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(28, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(29, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(30, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose44[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose48[] = {
	AX_POSE(27, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(28, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(29, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(30, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose52[] = {
	AX_POSE(21, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(22, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(23, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(24, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(11, 3, 5)),
	AX_POSE(25, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE(26, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose56[] = {
	AX_POSE(16, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(17, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose90[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(33, OAM1(222, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose93[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(35, OAM1(222, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose96[] = {
	AX_POSE(36, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(37, OAM1(220, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose99[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(39, OAM1(221, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose102[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(41, OAM1(221, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose105[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(39, OAM1(221, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose108[] = {
	AX_POSE(36, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(37, OAM1(220, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose111[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(35, OAM1(222, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose114[] = {
	AX_POSE(42, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose115[] = {
	AX_POSE(43, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose117[] = {
	AX_POSE(44, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose118[] = {
	AX_POSE(45, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose120[] = {
	AX_POSE(46, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose121[] = {
	AX_POSE(47, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose123[] = {
	AX_POSE(48, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose124[] = {
	AX_POSE(49, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose126[] = {
	AX_POSE(50, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose127[] = {
	AX_POSE(51, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose129[] = {
	AX_POSE(48, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose130[] = {
	AX_POSE(49, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose132[] = {
	AX_POSE(46, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose133[] = {
	AX_POSE(47, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose135[] = {
	AX_POSE(44, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose136[] = {
	AX_POSE(45, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose137[] = {
	AX_POSE(52, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose138[] = {
	AX_POSE(53, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose139[] = {
	AX_POSE(54, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose140[] = {
	AX_POSE(55, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose141[] = {
	AX_POSE(56, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose142[] = {
	AX_POSE(57, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(58, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(59, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(6, 3, 5)),
	AX_POSE(60, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose143[] = {
	AX_POSE(61, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose144[] = {
	AX_POSE(57, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(58, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(17, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 5)),
	AX_POSE(59, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(6, 3, 5)),
	AX_POSE(60, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose145[] = {
	AX_POSE(56, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose146[] = {
	AX_POSE(55, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose173[] = {
	AX_POSE(21, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(22, OAM1(253, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(23, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(24, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(11, 3, 5)),
	AX_POSE(25, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE(26, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose177[] = {
	AX_POSE(21, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(22, OAM1(253, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(23, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(10, 3, 5)),
	AX_POSE(24, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(11, 3, 5)),
	AX_POSE(25, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(26, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose200[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAggronPose201[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sAggronAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_2_1.lz");
static const u8 sAggronAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_2_2.lz");
static const u8 sAggronAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_2_3.lz");
static const u8 sAggronAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_2_4.lz");
static const u8 sAggronAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_2_5.lz");
static const u8 sAggronAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_2_6.lz");
static const u8 sAggronAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_2_7.lz");
static const u8 sAggronAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_2_8.lz");
static const u8 sAggronAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_3_1.lz");
static const u8 sAggronAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_3_2.lz");
static const u8 sAggronAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_3_3.lz");
static const u8 sAggronAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_3_4.lz");
static const u8 sAggronAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_3_5.lz");
static const u8 sAggronAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_3_6.lz");
static const u8 sAggronAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_3_7.lz");
static const u8 sAggronAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_3_8.lz");
static const u8 sAggronAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_4_1.lz");
static const u8 sAggronAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_4_2.lz");
static const u8 sAggronAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_4_3.lz");
static const u8 sAggronAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_4_4.lz");
static const u8 sAggronAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_4_5.lz");
static const u8 sAggronAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_4_6.lz");
static const u8 sAggronAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_4_7.lz");
static const u8 sAggronAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_4_8.lz");
static const u8 sAggronAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_5_1.lz");
static const u8 sAggronAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_5_2.lz");
static const u8 sAggronAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_5_3.lz");
static const u8 sAggronAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_5_4.lz");
static const u8 sAggronAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_5_5.lz");
static const u8 sAggronAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_5_6.lz");
static const u8 sAggronAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_5_7.lz");
static const u8 sAggronAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_5_8.lz");
static const u8 sAggronAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_8_1.lz");
static const u8 sAggronAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_8_2.lz");
static const u8 sAggronAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_8_3.lz");
static const u8 sAggronAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_8_4.lz");
static const u8 sAggronAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_8_5.lz");
static const u8 sAggronAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_8_6.lz");
static const u8 sAggronAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_8_7.lz");
static const u8 sAggronAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_8_8.lz");
static const u8 sAggronAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_9_1.lz");
static const u8 sAggronAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_9_2.lz");
static const u8 sAggronAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_9_3.lz");
static const u8 sAggronAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_9_4.lz");
static const u8 sAggronAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_9_5.lz");
static const u8 sAggronAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_9_6.lz");
static const u8 sAggronAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_9_7.lz");
static const u8 sAggronAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_9_8.lz");
static const u8 sAggronAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_11_4.lz");
static const u8 sAggronAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/aggron/sAggronAnims_11_6.lz");

static const u8 sAggronGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_1.4bpp.lz");
static const ax_sprite sAggronSprites1[] = {
	{sAggronGfx1, ARRAY_COUNT(sAggronGfx1)}, 
	{NULL, 0}
};
static const u8 sAggronGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_2.4bpp.lz");
static const ax_sprite sAggronSprites2[] = {
	{sAggronGfx2, ARRAY_COUNT(sAggronGfx2)}, 
	{NULL, 0}
};
static const u8 sAggronGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_3.4bpp.lz");
static const ax_sprite sAggronSprites3[] = {
	{sAggronGfx3, ARRAY_COUNT(sAggronGfx3)}, 
	{NULL, 0}
};
static const u8 sAggronGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_4.4bpp.lz");
static const ax_sprite sAggronSprites4[] = {
	{sAggronGfx4, ARRAY_COUNT(sAggronGfx4)}, 
	{NULL, 0}
};
static const u8 sAggronGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_5.4bpp.lz");
static const ax_sprite sAggronSprites5[] = {
	{sAggronGfx5, ARRAY_COUNT(sAggronGfx5)}, 
	{NULL, 0}
};
static const u8 sAggronGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_6.4bpp.lz");
static const ax_sprite sAggronSprites6[] = {
	{sAggronGfx6, ARRAY_COUNT(sAggronGfx6)}, 
	{NULL, 0}
};
static const u8 sAggronGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_7.4bpp.lz");
static const ax_sprite sAggronSprites7[] = {
	{sAggronGfx7, ARRAY_COUNT(sAggronGfx7)}, 
	{NULL, 0}
};
static const u8 sAggronGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_8.4bpp.lz");
static const ax_sprite sAggronSprites8[] = {
	{sAggronGfx8, ARRAY_COUNT(sAggronGfx8)}, 
	{NULL, 0}
};
static const u8 sAggronGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_9.4bpp.lz");
static const ax_sprite sAggronSprites9[] = {
	{sAggronGfx9, ARRAY_COUNT(sAggronGfx9)}, 
	{NULL, 0}
};
static const u8 sAggronGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_10.4bpp.lz");
static const ax_sprite sAggronSprites10[] = {
	{sAggronGfx10, ARRAY_COUNT(sAggronGfx10)}, 
	{NULL, 0}
};
static const u8 sAggronGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_11.4bpp.lz");
static const ax_sprite sAggronSprites11[] = {
	{sAggronGfx11, ARRAY_COUNT(sAggronGfx11)}, 
	{NULL, 0}
};
static const u8 sAggronGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_12.4bpp.lz");
static const ax_sprite sAggronSprites12[] = {
	{sAggronGfx12, ARRAY_COUNT(sAggronGfx12)}, 
	{NULL, 0}
};
static const u8 sAggronGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_13.4bpp.lz");
static const ax_sprite sAggronSprites13[] = {
	{sAggronGfx13, ARRAY_COUNT(sAggronGfx13)}, 
	{NULL, 0}
};
static const u8 sAggronGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_14.4bpp.lz");
static const ax_sprite sAggronSprites14[] = {
	{sAggronGfx14, ARRAY_COUNT(sAggronGfx14)}, 
	{NULL, 0}
};
static const u8 sAggronGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_15.4bpp.lz");
static const ax_sprite sAggronSprites15[] = {
	{sAggronGfx15, ARRAY_COUNT(sAggronGfx15)}, 
	{NULL, 0}
};
static const u8 sAggronGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_16.4bpp.lz");
static const u8 sAggronGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_16_1.4bpp.lz");
static const ax_sprite sAggronSprites16[] = {
	{NULL, 32}, 
	{sAggronGfx16, ARRAY_COUNT(sAggronGfx16)}, 
	{NULL, 32}, 
	{sAggronGfx16_1, ARRAY_COUNT(sAggronGfx16_1)}, 
	{NULL, 0}
};
static const u8 sAggronGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_17.4bpp.lz");
static const ax_sprite sAggronSprites17[] = {
	{sAggronGfx17, ARRAY_COUNT(sAggronGfx17)}, 
	{NULL, 0}
};
static const u8 sAggronGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_18.4bpp.lz");
static const ax_sprite sAggronSprites18[] = {
	{sAggronGfx18, ARRAY_COUNT(sAggronGfx18)}, 
	{NULL, 0}
};
static const u8 sAggronGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_19.4bpp.lz");
static const ax_sprite sAggronSprites19[] = {
	{sAggronGfx19, ARRAY_COUNT(sAggronGfx19)}, 
	{NULL, 0}
};
static const u8 sAggronGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_20.4bpp.lz");
static const ax_sprite sAggronSprites20[] = {
	{sAggronGfx20, ARRAY_COUNT(sAggronGfx20)}, 
	{NULL, 0}
};
static const u8 sAggronGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_21.4bpp.lz");
static const ax_sprite sAggronSprites21[] = {
	{sAggronGfx21, ARRAY_COUNT(sAggronGfx21)}, 
	{NULL, 0}
};
static const u8 sAggronGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_22.4bpp.lz");
static const ax_sprite sAggronSprites22[] = {
	{sAggronGfx22, ARRAY_COUNT(sAggronGfx22)}, 
	{NULL, 0}
};
static const u8 sAggronGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_23.4bpp.lz");
static const ax_sprite sAggronSprites23[] = {
	{sAggronGfx23, ARRAY_COUNT(sAggronGfx23)}, 
	{NULL, 0}
};
static const u8 sAggronGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_24.4bpp.lz");
static const ax_sprite sAggronSprites24[] = {
	{sAggronGfx24, ARRAY_COUNT(sAggronGfx24)}, 
	{NULL, 0}
};
static const u8 sAggronGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_25.4bpp.lz");
static const ax_sprite sAggronSprites25[] = {
	{sAggronGfx25, ARRAY_COUNT(sAggronGfx25)}, 
	{NULL, 0}
};
static const u8 sAggronGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_26.4bpp.lz");
static const ax_sprite sAggronSprites26[] = {
	{sAggronGfx26, ARRAY_COUNT(sAggronGfx26)}, 
	{NULL, 0}
};
static const u8 sAggronGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_27.4bpp.lz");
static const ax_sprite sAggronSprites27[] = {
	{sAggronGfx27, ARRAY_COUNT(sAggronGfx27)}, 
	{NULL, 0}
};
static const u8 sAggronGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_28.4bpp.lz");
static const ax_sprite sAggronSprites28[] = {
	{sAggronGfx28, ARRAY_COUNT(sAggronGfx28)}, 
	{NULL, 0}
};
static const u8 sAggronGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_29.4bpp.lz");
static const ax_sprite sAggronSprites29[] = {
	{sAggronGfx29, ARRAY_COUNT(sAggronGfx29)}, 
	{NULL, 0}
};
static const u8 sAggronGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_30.4bpp.lz");
static const ax_sprite sAggronSprites30[] = {
	{sAggronGfx30, ARRAY_COUNT(sAggronGfx30)}, 
	{NULL, 0}
};
static const u8 sAggronGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_31.4bpp.lz");
static const ax_sprite sAggronSprites31[] = {
	{sAggronGfx31, ARRAY_COUNT(sAggronGfx31)}, 
	{NULL, 0}
};
static const u8 sAggronGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_32.4bpp.lz");
static const u8 sAggronGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_32_1.4bpp.lz");
static const ax_sprite sAggronSprites32[] = {
	{NULL, 32}, 
	{sAggronGfx32, ARRAY_COUNT(sAggronGfx32)}, 
	{NULL, 32}, 
	{sAggronGfx32_1, ARRAY_COUNT(sAggronGfx32_1)}, 
	{NULL, 0}
};
static const u8 sAggronGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_33.4bpp.lz");
static const ax_sprite sAggronSprites33[] = {
	{sAggronGfx33, ARRAY_COUNT(sAggronGfx33)}, 
	{NULL, 0}
};
static const u8 sAggronGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_34.4bpp.lz");
static const ax_sprite sAggronSprites34[] = {
	{sAggronGfx34, ARRAY_COUNT(sAggronGfx34)}, 
	{NULL, 0}
};
static const u8 sAggronGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_35.4bpp.lz");
static const ax_sprite sAggronSprites35[] = {
	{sAggronGfx35, ARRAY_COUNT(sAggronGfx35)}, 
	{NULL, 0}
};
static const u8 sAggronGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_36.4bpp.lz");
static const ax_sprite sAggronSprites36[] = {
	{sAggronGfx36, ARRAY_COUNT(sAggronGfx36)}, 
	{NULL, 0}
};
static const u8 sAggronGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_37.4bpp.lz");
static const u8 sAggronGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_37_1.4bpp.lz");
static const u8 sAggronGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_37_2.4bpp.lz");
static const ax_sprite sAggronSprites37[] = {
	{sAggronGfx37, ARRAY_COUNT(sAggronGfx37)}, 
	{NULL, 32}, 
	{sAggronGfx37_1, ARRAY_COUNT(sAggronGfx37_1)}, 
	{NULL, 32}, 
	{sAggronGfx37_2, ARRAY_COUNT(sAggronGfx37_2)}, 
	{NULL, 0}
};
static const u8 sAggronGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_38.4bpp.lz");
static const ax_sprite sAggronSprites38[] = {
	{sAggronGfx38, ARRAY_COUNT(sAggronGfx38)}, 
	{NULL, 0}
};
static const u8 sAggronGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_39.4bpp.lz");
static const u8 sAggronGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_39_1.4bpp.lz");
static const u8 sAggronGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_39_2.4bpp.lz");
static const ax_sprite sAggronSprites39[] = {
	{NULL, 32}, 
	{sAggronGfx39, ARRAY_COUNT(sAggronGfx39)}, 
	{NULL, 64}, 
	{sAggronGfx39_1, ARRAY_COUNT(sAggronGfx39_1)}, 
	{NULL, 32}, 
	{sAggronGfx39_2, ARRAY_COUNT(sAggronGfx39_2)}, 
	{NULL, 0}
};
static const u8 sAggronGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_40.4bpp.lz");
static const ax_sprite sAggronSprites40[] = {
	{sAggronGfx40, ARRAY_COUNT(sAggronGfx40)}, 
	{NULL, 0}
};
static const u8 sAggronGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_41.4bpp.lz");
static const ax_sprite sAggronSprites41[] = {
	{NULL, 32}, 
	{sAggronGfx41, ARRAY_COUNT(sAggronGfx41)}, 
	{NULL, 0}
};
static const u8 sAggronGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_42.4bpp.lz");
static const ax_sprite sAggronSprites42[] = {
	{sAggronGfx42, ARRAY_COUNT(sAggronGfx42)}, 
	{NULL, 0}
};
static const u8 sAggronGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_43.4bpp.lz");
static const ax_sprite sAggronSprites43[] = {
	{sAggronGfx43, ARRAY_COUNT(sAggronGfx43)}, 
	{NULL, 0}
};
static const u8 sAggronGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_44.4bpp.lz");
static const ax_sprite sAggronSprites44[] = {
	{sAggronGfx44, ARRAY_COUNT(sAggronGfx44)}, 
	{NULL, 0}
};
static const u8 sAggronGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_45.4bpp.lz");
static const ax_sprite sAggronSprites45[] = {
	{sAggronGfx45, ARRAY_COUNT(sAggronGfx45)}, 
	{NULL, 0}
};
static const u8 sAggronGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_46.4bpp.lz");
static const u8 sAggronGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_46_1.4bpp.lz");
static const ax_sprite sAggronSprites46[] = {
	{sAggronGfx46, ARRAY_COUNT(sAggronGfx46)}, 
	{NULL, 32}, 
	{sAggronGfx46_1, ARRAY_COUNT(sAggronGfx46_1)}, 
	{NULL, 0}
};
static const u8 sAggronGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_47.4bpp.lz");
static const u8 sAggronGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_47_1.4bpp.lz");
static const ax_sprite sAggronSprites47[] = {
	{sAggronGfx47, ARRAY_COUNT(sAggronGfx47)}, 
	{NULL, 32}, 
	{sAggronGfx47_1, ARRAY_COUNT(sAggronGfx47_1)}, 
	{NULL, 0}
};
static const u8 sAggronGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_48.4bpp.lz");
static const u8 sAggronGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_48_1.4bpp.lz");
static const u8 sAggronGfx48_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_48_2.4bpp.lz");
static const ax_sprite sAggronSprites48[] = {
	{sAggronGfx48, ARRAY_COUNT(sAggronGfx48)}, 
	{NULL, 32}, 
	{sAggronGfx48_1, ARRAY_COUNT(sAggronGfx48_1)}, 
	{NULL, 32}, 
	{sAggronGfx48_2, ARRAY_COUNT(sAggronGfx48_2)}, 
	{NULL, 0}
};
static const u8 sAggronGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_49.4bpp.lz");
static const u8 sAggronGfx49_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_49_1.4bpp.lz");
static const ax_sprite sAggronSprites49[] = {
	{sAggronGfx49, ARRAY_COUNT(sAggronGfx49)}, 
	{NULL, 32}, 
	{sAggronGfx49_1, ARRAY_COUNT(sAggronGfx49_1)}, 
	{NULL, 0}
};
static const u8 sAggronGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_50.4bpp.lz");
static const u8 sAggronGfx50_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_50_1.4bpp.lz");
static const ax_sprite sAggronSprites50[] = {
	{sAggronGfx50, ARRAY_COUNT(sAggronGfx50)}, 
	{NULL, 32}, 
	{sAggronGfx50_1, ARRAY_COUNT(sAggronGfx50_1)}, 
	{NULL, 0}
};
static const u8 sAggronGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_51.4bpp.lz");
static const ax_sprite sAggronSprites51[] = {
	{sAggronGfx51, ARRAY_COUNT(sAggronGfx51)}, 
	{NULL, 0}
};
static const u8 sAggronGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_52.4bpp.lz");
static const ax_sprite sAggronSprites52[] = {
	{sAggronGfx52, ARRAY_COUNT(sAggronGfx52)}, 
	{NULL, 0}
};
static const u8 sAggronGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_53.4bpp.lz");
static const ax_sprite sAggronSprites53[] = {
	{sAggronGfx53, ARRAY_COUNT(sAggronGfx53)}, 
	{NULL, 0}
};
static const u8 sAggronGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_54.4bpp.lz");
static const ax_sprite sAggronSprites54[] = {
	{sAggronGfx54, ARRAY_COUNT(sAggronGfx54)}, 
	{NULL, 0}
};
static const u8 sAggronGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_55.4bpp.lz");
static const ax_sprite sAggronSprites55[] = {
	{sAggronGfx55, ARRAY_COUNT(sAggronGfx55)}, 
	{NULL, 0}
};
static const u8 sAggronGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_56.4bpp.lz");
static const ax_sprite sAggronSprites56[] = {
	{sAggronGfx56, ARRAY_COUNT(sAggronGfx56)}, 
	{NULL, 0}
};
static const u8 sAggronGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_57.4bpp.lz");
static const ax_sprite sAggronSprites57[] = {
	{sAggronGfx57, ARRAY_COUNT(sAggronGfx57)}, 
	{NULL, 0}
};
static const u8 sAggronGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_58.4bpp.lz");
static const ax_sprite sAggronSprites58[] = {
	{sAggronGfx58, ARRAY_COUNT(sAggronGfx58)}, 
	{NULL, 0}
};
static const u8 sAggronGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_59.4bpp.lz");
static const ax_sprite sAggronSprites59[] = {
	{sAggronGfx59, ARRAY_COUNT(sAggronGfx59)}, 
	{NULL, 0}
};
static const u8 sAggronGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_60.4bpp.lz");
static const ax_sprite sAggronSprites60[] = {
	{sAggronGfx60, ARRAY_COUNT(sAggronGfx60)}, 
	{NULL, 0}
};
static const u8 sAggronGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_61.4bpp.lz");
static const ax_sprite sAggronSprites61[] = {
	{sAggronGfx61, ARRAY_COUNT(sAggronGfx61)}, 
	{NULL, 0}
};
static const u8 sAggronGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/aggron/sprite_62.4bpp.lz");
static const ax_sprite sAggronSprites62[] = {
	{sAggronGfx62, ARRAY_COUNT(sAggronGfx62)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesAggron[] = {
	sAggronPose1,
	sAggronPose2,
	sAggronPose3,
	sAggronPose4,
	sAggronPose5,
	sAggronPose6,
	sAggronPose7,
	sAggronPose8,
	sAggronPose9,
	sAggronPose10,
	sAggronPose11,
	sAggronPose12,
	sAggronPose13,
	sAggronPose14,
	sAggronPose15,
	sAggronPose16,
	sAggronPose17,
	sAggronPose18,
	sAggronPose19,
	sAggronPose20,
	sAggronPose21,
	sAggronPose22,
	sAggronPose23,
	sAggronPose24,
	sAggronPose1,
	sAggronPose2,
	sAggronPose3,
	sAggronPose28,
	sAggronPose4,
	sAggronPose5,
	sAggronPose6,
	sAggronPose32,
	sAggronPose7,
	sAggronPose8,
	sAggronPose9,
	sAggronPose36,
	sAggronPose10,
	sAggronPose11,
	sAggronPose12,
	sAggronPose40,
	sAggronPose13,
	sAggronPose14,
	sAggronPose15,
	sAggronPose44,
	sAggronPose16,
	sAggronPose17,
	sAggronPose18,
	sAggronPose48,
	sAggronPose19,
	sAggronPose20,
	sAggronPose21,
	sAggronPose52,
	sAggronPose22,
	sAggronPose23,
	sAggronPose24,
	sAggronPose56,
	sAggronPose1,
	sAggronPose2,
	sAggronPose3,
	sAggronPose28,
	sAggronPose4,
	sAggronPose5,
	sAggronPose6,
	sAggronPose32,
	sAggronPose7,
	sAggronPose8,
	sAggronPose9,
	sAggronPose36,
	sAggronPose10,
	sAggronPose11,
	sAggronPose12,
	sAggronPose40,
	sAggronPose13,
	sAggronPose14,
	sAggronPose15,
	sAggronPose44,
	sAggronPose16,
	sAggronPose17,
	sAggronPose18,
	sAggronPose48,
	sAggronPose19,
	sAggronPose20,
	sAggronPose21,
	sAggronPose52,
	sAggronPose22,
	sAggronPose23,
	sAggronPose24,
	sAggronPose56,
	sAggronPose1,
	sAggronPose90,
	sAggronPose28,
	sAggronPose4,
	sAggronPose93,
	sAggronPose32,
	sAggronPose7,
	sAggronPose96,
	sAggronPose36,
	sAggronPose10,
	sAggronPose99,
	sAggronPose40,
	sAggronPose13,
	sAggronPose102,
	sAggronPose44,
	sAggronPose16,
	sAggronPose105,
	sAggronPose48,
	sAggronPose19,
	sAggronPose108,
	sAggronPose52,
	sAggronPose22,
	sAggronPose111,
	sAggronPose56,
	sAggronPose1,
	sAggronPose114,
	sAggronPose115,
	sAggronPose4,
	sAggronPose117,
	sAggronPose118,
	sAggronPose7,
	sAggronPose120,
	sAggronPose121,
	sAggronPose10,
	sAggronPose123,
	sAggronPose124,
	sAggronPose13,
	sAggronPose126,
	sAggronPose127,
	sAggronPose16,
	sAggronPose129,
	sAggronPose130,
	sAggronPose19,
	sAggronPose132,
	sAggronPose133,
	sAggronPose22,
	sAggronPose135,
	sAggronPose136,
	sAggronPose137,
	sAggronPose138,
	sAggronPose139,
	sAggronPose140,
	sAggronPose141,
	sAggronPose142,
	sAggronPose143,
	sAggronPose144,
	sAggronPose145,
	sAggronPose146,
	sAggronPose1,
	sAggronPose114,
	sAggronPose115,
	sAggronPose4,
	sAggronPose117,
	sAggronPose118,
	sAggronPose7,
	sAggronPose120,
	sAggronPose121,
	sAggronPose10,
	sAggronPose123,
	sAggronPose124,
	sAggronPose13,
	sAggronPose126,
	sAggronPose127,
	sAggronPose16,
	sAggronPose129,
	sAggronPose130,
	sAggronPose19,
	sAggronPose132,
	sAggronPose133,
	sAggronPose22,
	sAggronPose135,
	sAggronPose136,
	sAggronPose28,
	sAggronPose56,
	sAggronPose173,
	sAggronPose48,
	sAggronPose44,
	sAggronPose40,
	sAggronPose177,
	sAggronPose32,
	sAggronPose28,
	sAggronPose32,
	sAggronPose36,
	sAggronPose40,
	sAggronPose44,
	sAggronPose48,
	sAggronPose52,
	sAggronPose56,
	sAggronPose1,
	sAggronPose2,
	sAggronPose3,
	sAggronPose4,
	sAggronPose5,
	sAggronPose6,
	sAggronPose7,
	sAggronPose8,
	sAggronPose9,
	sAggronPose10,
	sAggronPose11,
	sAggronPose12,
	sAggronPose13,
	sAggronPose200,
	sAggronPose201,
	sAggronPose16,
	sAggronPose17,
	sAggronPose18,
	sAggronPose19,
	sAggronPose20,
	sAggronPose21,
	sAggronPose22,
	sAggronPose23,
	sAggronPose24,
	sAggronPose28,
	sAggronPose32,
	sAggronPose36,
	sAggronPose40,
	sAggronPose44,
	sAggronPose48,
	sAggronPose52,
	sAggronPose56,
	sAggronPose1,
	sAggronPose22,
	sAggronPose19,
	sAggronPose16,
	sAggronPose13,
	sAggronPose10,
	sAggronPose7,
	sAggronPose4,
};

static const struct PositionSets sAxPositionsAggron[] = {
	[0] = { .set = { {-1, -13}, {-13, -8}, {11, -8}, {-1, -10} } },
	[1] = { .set = { {-2, -12}, {-8, -4}, {12, -9}, {-2, -9} } },
	[2] = { .set = { {0, -12}, {-14, -9}, {6, -5}, {0, -9} } },
	[3] = { .set = { {6, -16}, {11, -10}, {-5, -5}, {1, -12} } },
	[4] = { .set = { {7, -15}, {10, -8}, {-8, -8}, {0, -11} } },
	[5] = { .set = { {6, -14}, {8, -11}, {0, -5}, {-1, -10} } },
	[6] = { .set = { {8, -16}, {8, -15}, {8, -8}, {-1, -13} } },
	[7] = { .set = { {9, -15}, {8, -9}, {3, -7}, {-1, -13} } },
	[8] = { .set = { {8, -14}, {0, -9}, {9, -7}, {0, -11} } },
	[9] = { .set = { {9, -19}, {-2, -16}, {13, -11}, {0, -13} } },
	[10] = { .set = { {8, -18}, {3, -15}, {12, -8}, {0, -13} } },
	[11] = { .set = { {10, -18}, {-3, -14}, {13, -12}, {2, -13} } },
	[12] = { .set = { {-1, -20}, {10, -13}, {-12, -13}, {-1, -12} } },
	[13] = { .set = { {0, -19}, {10, -14}, {-11, -11}, {0, -11} } },
	[14] = { .set = { {-2, -19}, {10, -11}, {-12, -14}, {-2, -11} } },
	[15] = { .set = { {-9, -19}, {2, -16}, {-13, -11}, {0, -13} } },
	[16] = { .set = { {-8, -18}, {-3, -15}, {-12, -8}, {0, -13} } },
	[17] = { .set = { {-10, -18}, {3, -14}, {-13, -12}, {-2, -13} } },
	[18] = { .set = { {-10, -16}, {-10, -15}, {-10, -8}, {-1, -13} } },
	[19] = { .set = { {-11, -15}, {-10, -9}, {-5, -7}, {-1, -13} } },
	[20] = { .set = { {-10, -14}, {-2, -9}, {-11, -7}, {-2, -11} } },
	[21] = { .set = { {-8, -16}, {-13, -10}, {3, -5}, {-3, -12} } },
	[22] = { .set = { {-9, -15}, {-12, -8}, {6, -8}, {-2, -11} } },
	[23] = { .set = { {-8, -14}, {-10, -11}, {-2, -5}, {-1, -10} } },
	[24] = { .set = { {-1, -13}, {-13, -8}, {11, -8}, {-1, -10} } },
	[25] = { .set = { {-2, -12}, {-8, -4}, {12, -9}, {-2, -9} } },
	[26] = { .set = { {0, -12}, {-14, -9}, {6, -5}, {0, -9} } },
	[27] = { .set = { {-1, -3}, {-13, -1}, {11, -2}, {-1, -10} } },
	[28] = { .set = { {6, -16}, {11, -10}, {-5, -5}, {1, -12} } },
	[29] = { .set = { {7, -15}, {10, -8}, {-8, -8}, {0, -11} } },
	[30] = { .set = { {6, -14}, {8, -11}, {0, -5}, {-1, -10} } },
	[31] = { .set = { {9, -5}, {16, -3}, {-6, 1}, {-1, -10} } },
	[32] = { .set = { {8, -16}, {8, -15}, {8, -8}, {-1, -13} } },
	[33] = { .set = { {9, -15}, {8, -9}, {3, -7}, {-1, -13} } },
	[34] = { .set = { {8, -14}, {0, -9}, {9, -7}, {0, -11} } },
	[35] = { .set = { {13, -11}, {9, -12}, {8, -4}, {1, -10} } },
	[36] = { .set = { {9, -19}, {-2, -16}, {13, -11}, {0, -13} } },
	[37] = { .set = { {8, -18}, {3, -15}, {12, -8}, {0, -13} } },
	[38] = { .set = { {10, -18}, {-3, -14}, {13, -12}, {2, -13} } },
	[39] = { .set = { {9, -17}, {3, -11}, {13, -5}, {-1, -12} } },
	[40] = { .set = { {-1, -20}, {10, -13}, {-12, -13}, {-1, -12} } },
	[41] = { .set = { {0, -19}, {10, -14}, {-11, -11}, {0, -11} } },
	[42] = { .set = { {-2, -19}, {10, -11}, {-12, -14}, {-2, -11} } },
	[43] = { .set = { {-1, -19}, {11, -8}, {-13, -8}, {-1, -12} } },
	[44] = { .set = { {-9, -19}, {2, -16}, {-13, -11}, {0, -13} } },
	[45] = { .set = { {-8, -18}, {-3, -15}, {-12, -8}, {0, -13} } },
	[46] = { .set = { {-10, -18}, {3, -14}, {-13, -12}, {-2, -13} } },
	[47] = { .set = { {-9, -17}, {-3, -11}, {-13, -5}, {1, -12} } },
	[48] = { .set = { {-10, -16}, {-10, -15}, {-10, -8}, {-1, -13} } },
	[49] = { .set = { {-11, -15}, {-10, -9}, {-5, -7}, {-1, -13} } },
	[50] = { .set = { {-10, -14}, {-2, -9}, {-11, -7}, {-2, -11} } },
	[51] = { .set = { {-15, -11}, {-11, -12}, {-10, -4}, {-3, -10} } },
	[52] = { .set = { {-8, -16}, {-13, -10}, {3, -5}, {-3, -12} } },
	[53] = { .set = { {-9, -15}, {-12, -8}, {6, -8}, {-2, -11} } },
	[54] = { .set = { {-8, -14}, {-10, -11}, {-2, -5}, {-1, -10} } },
	[55] = { .set = { {-11, -5}, {-18, -3}, {4, 1}, {-1, -10} } },
	[56] = { .set = { {-1, -13}, {-13, -8}, {11, -8}, {-1, -10} } },
	[57] = { .set = { {-2, -12}, {-8, -4}, {12, -9}, {-2, -9} } },
	[58] = { .set = { {0, -12}, {-14, -9}, {6, -5}, {0, -9} } },
	[59] = { .set = { {-1, -3}, {-13, -1}, {11, -2}, {-1, -10} } },
	[60] = { .set = { {6, -16}, {11, -10}, {-5, -5}, {1, -12} } },
	[61] = { .set = { {7, -15}, {10, -8}, {-8, -8}, {0, -11} } },
	[62] = { .set = { {6, -14}, {8, -11}, {0, -5}, {-1, -10} } },
	[63] = { .set = { {9, -5}, {16, -3}, {-6, 1}, {-1, -10} } },
	[64] = { .set = { {8, -16}, {8, -15}, {8, -8}, {-1, -13} } },
	[65] = { .set = { {9, -15}, {8, -9}, {3, -7}, {-1, -13} } },
	[66] = { .set = { {8, -14}, {0, -9}, {9, -7}, {0, -11} } },
	[67] = { .set = { {13, -11}, {9, -12}, {8, -4}, {1, -10} } },
	[68] = { .set = { {9, -19}, {-2, -16}, {13, -11}, {0, -13} } },
	[69] = { .set = { {8, -18}, {3, -15}, {12, -8}, {0, -13} } },
	[70] = { .set = { {10, -18}, {-3, -14}, {13, -12}, {2, -13} } },
	[71] = { .set = { {9, -17}, {3, -11}, {13, -5}, {-1, -12} } },
	[72] = { .set = { {-1, -20}, {10, -13}, {-12, -13}, {-1, -12} } },
	[73] = { .set = { {0, -19}, {10, -14}, {-11, -11}, {0, -11} } },
	[74] = { .set = { {-2, -19}, {10, -11}, {-12, -14}, {-2, -11} } },
	[75] = { .set = { {-1, -19}, {11, -8}, {-13, -8}, {-1, -12} } },
	[76] = { .set = { {-9, -19}, {2, -16}, {-13, -11}, {0, -13} } },
	[77] = { .set = { {-8, -18}, {-3, -15}, {-12, -8}, {0, -13} } },
	[78] = { .set = { {-10, -18}, {3, -14}, {-13, -12}, {-2, -13} } },
	[79] = { .set = { {-9, -17}, {-3, -11}, {-13, -5}, {1, -12} } },
	[80] = { .set = { {-10, -16}, {-10, -15}, {-10, -8}, {-1, -13} } },
	[81] = { .set = { {-11, -15}, {-10, -9}, {-5, -7}, {-1, -13} } },
	[82] = { .set = { {-10, -14}, {-2, -9}, {-11, -7}, {-2, -11} } },
	[83] = { .set = { {-15, -11}, {-11, -12}, {-10, -4}, {-3, -10} } },
	[84] = { .set = { {-8, -16}, {-13, -10}, {3, -5}, {-3, -12} } },
	[85] = { .set = { {-9, -15}, {-12, -8}, {6, -8}, {-2, -11} } },
	[86] = { .set = { {-8, -14}, {-10, -11}, {-2, -5}, {-1, -10} } },
	[87] = { .set = { {-11, -5}, {-18, -3}, {4, 1}, {-1, -10} } },
	[88] = { .set = { {-1, -13}, {-13, -8}, {11, -8}, {-1, -10} } },
	[89] = { .set = { {-1, -23}, {-13, -6}, {10, -15}, {-2, -13} } },
	[90] = { .set = { {-1, -3}, {-13, -1}, {11, -2}, {-1, -10} } },
	[91] = { .set = { {6, -16}, {11, -10}, {-5, -5}, {1, -12} } },
	[92] = { .set = { {2, -23}, {13, -10}, {-12, -13}, {0, -13} } },
	[93] = { .set = { {9, -5}, {16, -3}, {-6, 1}, {-1, -10} } },
	[94] = { .set = { {8, -16}, {8, -15}, {8, -8}, {-1, -13} } },
	[95] = { .set = { {2, -22}, {12, -18}, {-8, -8}, {0, -14} } },
	[96] = { .set = { {13, -11}, {9, -12}, {8, -4}, {1, -10} } },
	[97] = { .set = { {9, -19}, {-2, -16}, {13, -11}, {0, -13} } },
	[98] = { .set = { {1, -21}, {-5, -10}, {7, -7}, {-2, -9} } },
	[99] = { .set = { {9, -17}, {3, -11}, {13, -5}, {-1, -12} } },
	[100] = { .set = { {-1, -20}, {10, -13}, {-12, -13}, {-1, -12} } },
	[101] = { .set = { {-4, -26}, {2, -15}, {-13, -9}, {0, -11} } },
	[102] = { .set = { {-1, -19}, {11, -8}, {-13, -8}, {-1, -12} } },
	[103] = { .set = { {-9, -19}, {2, -16}, {-13, -11}, {0, -13} } },
	[104] = { .set = { {-1, -21}, {5, -10}, {-7, -7}, {2, -9} } },
	[105] = { .set = { {-9, -17}, {-3, -11}, {-13, -5}, {1, -12} } },
	[106] = { .set = { {-10, -16}, {-10, -15}, {-10, -8}, {-1, -13} } },
	[107] = { .set = { {-4, -22}, {-14, -18}, {6, -8}, {-2, -14} } },
	[108] = { .set = { {-15, -11}, {-11, -12}, {-10, -4}, {-3, -10} } },
	[109] = { .set = { {-8, -16}, {-13, -10}, {3, -5}, {-3, -12} } },
	[110] = { .set = { {-4, -23}, {-15, -10}, {10, -13}, {-2, -13} } },
	[111] = { .set = { {-11, -5}, {-18, -3}, {4, 1}, {-1, -10} } },
	[112] = { .set = { {-1, -13}, {-13, -8}, {11, -8}, {-1, -10} } },
	[113] = { .set = { {0, -13}, {-12, -10}, {11, -7}, {0, -10} } },
	[114] = { .set = { {-2, -13}, {-13, -6}, {10, -11}, {-2, -10} } },
	[115] = { .set = { {6, -16}, {11, -10}, {-5, -5}, {1, -12} } },
	[116] = { .set = { {5, -15}, {11, -11}, {-6, -5}, {-1, -11} } },
	[117] = { .set = { {7, -16}, {12, -9}, {-4, -7}, {1, -11} } },
	[118] = { .set = { {8, -16}, {8, -15}, {8, -8}, {-1, -13} } },
	[119] = { .set = { {7, -15}, {8, -10}, {8, -6}, {-1, -11} } },
	[120] = { .set = { {9, -17}, {-2, -10}, {8, -9}, {-1, -13} } },
	[121] = { .set = { {9, -19}, {-2, -16}, {13, -11}, {0, -13} } },
	[122] = { .set = { {11, -19}, {1, -15}, {13, -10}, {0, -13} } },
	[123] = { .set = { {7, -19}, {-1, -16}, {12, -12}, {-1, -13} } },
	[124] = { .set = { {-1, -20}, {10, -13}, {-12, -13}, {-1, -12} } },
	[125] = { .set = { {-2, -20}, {9, -14}, {-13, -12}, {-2, -13} } },
	[126] = { .set = { {0, -20}, {11, -12}, {-11, -14}, {0, -12} } },
	[127] = { .set = { {-9, -19}, {2, -16}, {-13, -11}, {0, -13} } },
	[128] = { .set = { {-11, -19}, {-1, -15}, {-13, -10}, {0, -13} } },
	[129] = { .set = { {-7, -19}, {1, -16}, {-12, -12}, {1, -13} } },
	[130] = { .set = { {-10, -16}, {-10, -15}, {-10, -8}, {-1, -13} } },
	[131] = { .set = { {-9, -15}, {-10, -10}, {-10, -6}, {-1, -11} } },
	[132] = { .set = { {-11, -17}, {0, -10}, {-10, -9}, {-1, -13} } },
	[133] = { .set = { {-8, -16}, {-13, -10}, {3, -5}, {-3, -12} } },
	[134] = { .set = { {-7, -15}, {-13, -11}, {4, -5}, {-1, -11} } },
	[135] = { .set = { {-9, -16}, {-14, -9}, {2, -7}, {-3, -11} } },
	[136] = { .set = { {-1, -10}, {-13, -6}, {11, -6}, {-1, -7} } },
	[137] = { .set = { {-1, -11}, {-13, -7}, {11, -7}, {-1, -8} } },
	[138] = { .set = { {0, -15}, {-11, -21}, {11, -21}, {0, -11} } },
	[139] = { .set = { {2, -18}, {10, -24}, {-8, -14}, {0, -12} } },
	[140] = { .set = { {1, -16}, {-3, -23}, {-4, -15}, {-2, -13} } },
	[141] = { .set = { {3, -17}, {-11, -23}, {9, -15}, {-1, -11} } },
	[142] = { .set = { {0, -14}, {12, -18}, {-12, -18}, {0, -9} } },
	[143] = { .set = { {-4, -17}, {10, -23}, {-10, -15}, {0, -11} } },
	[144] = { .set = { {-2, -16}, {2, -23}, {3, -15}, {1, -13} } },
	[145] = { .set = { {-3, -18}, {-11, -24}, {7, -14}, {-1, -12} } },
	[146] = { .set = { {-1, -13}, {-13, -8}, {11, -8}, {-1, -10} } },
	[147] = { .set = { {0, -13}, {-12, -10}, {11, -7}, {0, -10} } },
	[148] = { .set = { {-2, -13}, {-13, -6}, {10, -11}, {-2, -10} } },
	[149] = { .set = { {6, -16}, {11, -10}, {-5, -5}, {1, -12} } },
	[150] = { .set = { {5, -15}, {11, -11}, {-6, -5}, {-1, -11} } },
	[151] = { .set = { {7, -16}, {12, -9}, {-4, -7}, {1, -11} } },
	[152] = { .set = { {8, -16}, {8, -15}, {8, -8}, {-1, -13} } },
	[153] = { .set = { {7, -15}, {8, -10}, {8, -6}, {-1, -11} } },
	[154] = { .set = { {9, -17}, {-2, -10}, {8, -9}, {-1, -13} } },
	[155] = { .set = { {9, -19}, {-2, -16}, {13, -11}, {0, -13} } },
	[156] = { .set = { {11, -19}, {1, -15}, {13, -10}, {0, -13} } },
	[157] = { .set = { {7, -19}, {-1, -16}, {12, -12}, {-1, -13} } },
	[158] = { .set = { {-1, -20}, {10, -13}, {-12, -13}, {-1, -12} } },
	[159] = { .set = { {-2, -20}, {9, -14}, {-13, -12}, {-2, -13} } },
	[160] = { .set = { {0, -20}, {11, -12}, {-11, -14}, {0, -12} } },
	[161] = { .set = { {-9, -19}, {2, -16}, {-13, -11}, {0, -13} } },
	[162] = { .set = { {-11, -19}, {-1, -15}, {-13, -10}, {0, -13} } },
	[163] = { .set = { {-7, -19}, {1, -16}, {-12, -12}, {1, -13} } },
	[164] = { .set = { {-10, -16}, {-10, -15}, {-10, -8}, {-1, -13} } },
	[165] = { .set = { {-9, -15}, {-10, -10}, {-10, -6}, {-1, -11} } },
	[166] = { .set = { {-11, -17}, {0, -10}, {-10, -9}, {-1, -13} } },
	[167] = { .set = { {-8, -16}, {-13, -10}, {3, -5}, {-3, -12} } },
	[168] = { .set = { {-7, -15}, {-13, -11}, {4, -5}, {-1, -11} } },
	[169] = { .set = { {-9, -16}, {-14, -9}, {2, -7}, {-3, -11} } },
	[170] = { .set = { {-1, -3}, {-13, -1}, {11, -2}, {-1, -10} } },
	[171] = { .set = { {-11, -5}, {-18, -3}, {4, 1}, {-1, -10} } },
	[172] = { .set = { {-15, -10}, {-11, -11}, {-10, -3}, {-3, -9} } },
	[173] = { .set = { {-9, -17}, {-3, -11}, {-13, -5}, {1, -12} } },
	[174] = { .set = { {-1, -19}, {11, -8}, {-13, -8}, {-1, -12} } },
	[175] = { .set = { {9, -17}, {3, -11}, {13, -5}, {-1, -12} } },
	[176] = { .set = { {13, -10}, {9, -11}, {8, -3}, {1, -9} } },
	[177] = { .set = { {9, -5}, {16, -3}, {-6, 1}, {-1, -10} } },
	[178] = { .set = { {-1, -3}, {-13, -1}, {11, -2}, {-1, -10} } },
	[179] = { .set = { {9, -5}, {16, -3}, {-6, 1}, {-1, -10} } },
	[180] = { .set = { {13, -11}, {9, -12}, {8, -4}, {1, -10} } },
	[181] = { .set = { {9, -17}, {3, -11}, {13, -5}, {-1, -12} } },
	[182] = { .set = { {-1, -19}, {11, -8}, {-13, -8}, {-1, -12} } },
	[183] = { .set = { {-9, -17}, {-3, -11}, {-13, -5}, {1, -12} } },
	[184] = { .set = { {-15, -11}, {-11, -12}, {-10, -4}, {-3, -10} } },
	[185] = { .set = { {-11, -5}, {-18, -3}, {4, 1}, {-1, -10} } },
	[186] = { .set = { {-1, -13}, {-13, -8}, {11, -8}, {-1, -10} } },
	[187] = { .set = { {-2, -12}, {-8, -4}, {12, -9}, {-2, -9} } },
	[188] = { .set = { {0, -12}, {-14, -9}, {6, -5}, {0, -9} } },
	[189] = { .set = { {6, -16}, {11, -10}, {-5, -5}, {1, -12} } },
	[190] = { .set = { {7, -15}, {10, -8}, {-8, -8}, {0, -11} } },
	[191] = { .set = { {6, -14}, {8, -11}, {0, -5}, {-1, -10} } },
	[192] = { .set = { {8, -16}, {8, -15}, {8, -8}, {-1, -13} } },
	[193] = { .set = { {9, -15}, {8, -9}, {3, -7}, {-1, -13} } },
	[194] = { .set = { {8, -14}, {0, -9}, {9, -7}, {0, -11} } },
	[195] = { .set = { {9, -19}, {-2, -16}, {13, -11}, {0, -13} } },
	[196] = { .set = { {8, -18}, {3, -15}, {12, -8}, {0, -13} } },
	[197] = { .set = { {10, -18}, {-3, -14}, {13, -12}, {2, -13} } },
	[198] = { .set = { {-1, -20}, {10, -13}, {-12, -13}, {-1, -12} } },
	[199] = { .set = { {-1, -19}, {9, -14}, {-12, -11}, {-1, -11} } },
	[200] = { .set = { {-1, -19}, {11, -11}, {-11, -14}, {-1, -11} } },
	[201] = { .set = { {-9, -19}, {2, -16}, {-13, -11}, {0, -13} } },
	[202] = { .set = { {-8, -18}, {-3, -15}, {-12, -8}, {0, -13} } },
	[203] = { .set = { {-10, -18}, {3, -14}, {-13, -12}, {-2, -13} } },
	[204] = { .set = { {-10, -16}, {-10, -15}, {-10, -8}, {-1, -13} } },
	[205] = { .set = { {-11, -15}, {-10, -9}, {-5, -7}, {-1, -13} } },
	[206] = { .set = { {-10, -14}, {-2, -9}, {-11, -7}, {-2, -11} } },
	[207] = { .set = { {-8, -16}, {-13, -10}, {3, -5}, {-3, -12} } },
	[208] = { .set = { {-9, -15}, {-12, -8}, {6, -8}, {-2, -11} } },
	[209] = { .set = { {-8, -14}, {-10, -11}, {-2, -5}, {-1, -10} } },
	[210] = { .set = { {-1, -3}, {-13, -1}, {11, -2}, {-1, -10} } },
	[211] = { .set = { {9, -5}, {16, -3}, {-6, 1}, {-1, -10} } },
	[212] = { .set = { {13, -11}, {9, -12}, {8, -4}, {1, -10} } },
	[213] = { .set = { {9, -17}, {3, -11}, {13, -5}, {-1, -12} } },
	[214] = { .set = { {-1, -19}, {11, -8}, {-13, -8}, {-1, -12} } },
	[215] = { .set = { {-9, -17}, {-3, -11}, {-13, -5}, {1, -12} } },
	[216] = { .set = { {-15, -11}, {-11, -12}, {-10, -4}, {-3, -10} } },
	[217] = { .set = { {-11, -5}, {-18, -3}, {4, 1}, {-1, -10} } },
	[218] = { .set = { {-1, -13}, {-13, -8}, {11, -8}, {-1, -10} } },
	[219] = { .set = { {-8, -16}, {-13, -10}, {3, -5}, {-3, -12} } },
	[220] = { .set = { {-10, -16}, {-10, -15}, {-10, -8}, {-1, -13} } },
	[221] = { .set = { {-9, -19}, {2, -16}, {-13, -11}, {0, -13} } },
	[222] = { .set = { {-1, -20}, {10, -13}, {-12, -13}, {-1, -12} } },
	[223] = { .set = { {9, -19}, {-2, -16}, {13, -11}, {0, -13} } },
	[224] = { .set = { {8, -16}, {8, -15}, {8, -8}, {-1, -13} } },
	[225] = { .set = { {6, -16}, {11, -10}, {-5, -5}, {1, -12} } },
};

static const ax_anim *const sAggronAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02603),
	AX_ANIM_PTR(gAxSharedAnim_02679),
	AX_ANIM_PTR(gAxSharedAnim_02688),
	AX_ANIM_PTR(gAxSharedAnim_02697),
	AX_ANIM_PTR(gAxSharedAnim_02615),
	AX_ANIM_PTR(gAxSharedAnim_02637),
	AX_ANIM_PTR(gAxSharedAnim_02650),
	AX_ANIM_PTR(gAxSharedAnim_02659),
};

static const ax_anim *const sAggronAnimTable2[] = {
	AX_ANIM_PTR(sAggronAnims_2_1),
	AX_ANIM_PTR(sAggronAnims_2_2),
	AX_ANIM_PTR(sAggronAnims_2_3),
	AX_ANIM_PTR(sAggronAnims_2_4),
	AX_ANIM_PTR(sAggronAnims_2_5),
	AX_ANIM_PTR(sAggronAnims_2_6),
	AX_ANIM_PTR(sAggronAnims_2_7),
	AX_ANIM_PTR(sAggronAnims_2_8),
};

static const ax_anim *const sAggronAnimTable3[] = {
	AX_ANIM_PTR(sAggronAnims_3_1),
	AX_ANIM_PTR(sAggronAnims_3_2),
	AX_ANIM_PTR(sAggronAnims_3_3),
	AX_ANIM_PTR(sAggronAnims_3_4),
	AX_ANIM_PTR(sAggronAnims_3_5),
	AX_ANIM_PTR(sAggronAnims_3_6),
	AX_ANIM_PTR(sAggronAnims_3_7),
	AX_ANIM_PTR(sAggronAnims_3_8),
};

static const ax_anim *const sAggronAnimTable4[] = {
	AX_ANIM_PTR(sAggronAnims_4_1),
	AX_ANIM_PTR(sAggronAnims_4_2),
	AX_ANIM_PTR(sAggronAnims_4_3),
	AX_ANIM_PTR(sAggronAnims_4_4),
	AX_ANIM_PTR(sAggronAnims_4_5),
	AX_ANIM_PTR(sAggronAnims_4_6),
	AX_ANIM_PTR(sAggronAnims_4_7),
	AX_ANIM_PTR(sAggronAnims_4_8),
};

static const ax_anim *const sAggronAnimTable5[] = {
	AX_ANIM_PTR(sAggronAnims_5_1),
	AX_ANIM_PTR(sAggronAnims_5_2),
	AX_ANIM_PTR(sAggronAnims_5_3),
	AX_ANIM_PTR(sAggronAnims_5_4),
	AX_ANIM_PTR(sAggronAnims_5_5),
	AX_ANIM_PTR(sAggronAnims_5_6),
	AX_ANIM_PTR(sAggronAnims_5_7),
	AX_ANIM_PTR(sAggronAnims_5_8),
};

static const ax_anim *const sAggronAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
};

static const ax_anim *const sAggronAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00467),
	AX_ANIM_PTR(gAxSharedAnim_00480),
	AX_ANIM_PTR(gAxSharedAnim_00488),
	AX_ANIM_PTR(gAxSharedAnim_00497),
	AX_ANIM_PTR(gAxSharedAnim_00509),
	AX_ANIM_PTR(gAxSharedAnim_00518),
	AX_ANIM_PTR(gAxSharedAnim_00524),
	AX_ANIM_PTR(gAxSharedAnim_00530),
};

static const ax_anim *const sAggronAnimTable8[] = {
	AX_ANIM_PTR(sAggronAnims_8_1),
	AX_ANIM_PTR(sAggronAnims_8_2),
	AX_ANIM_PTR(sAggronAnims_8_3),
	AX_ANIM_PTR(sAggronAnims_8_4),
	AX_ANIM_PTR(sAggronAnims_8_5),
	AX_ANIM_PTR(sAggronAnims_8_6),
	AX_ANIM_PTR(sAggronAnims_8_7),
	AX_ANIM_PTR(sAggronAnims_8_8),
};

static const ax_anim *const sAggronAnimTable9[] = {
	AX_ANIM_PTR(sAggronAnims_9_1),
	AX_ANIM_PTR(sAggronAnims_9_2),
	AX_ANIM_PTR(sAggronAnims_9_3),
	AX_ANIM_PTR(sAggronAnims_9_4),
	AX_ANIM_PTR(sAggronAnims_9_5),
	AX_ANIM_PTR(sAggronAnims_9_6),
	AX_ANIM_PTR(sAggronAnims_9_7),
	AX_ANIM_PTR(sAggronAnims_9_8),
};

static const ax_anim *const sAggronAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00905),
	AX_ANIM_PTR(gAxSharedAnim_00918),
	AX_ANIM_PTR(gAxSharedAnim_00930),
	AX_ANIM_PTR(gAxSharedAnim_00942),
	AX_ANIM_PTR(gAxSharedAnim_00955),
	AX_ANIM_PTR(gAxSharedAnim_00965),
	AX_ANIM_PTR(gAxSharedAnim_00978),
	AX_ANIM_PTR(gAxSharedAnim_00993),
};

static const ax_anim *const sAggronAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01004),
	AX_ANIM_PTR(gAxSharedAnim_01055),
	AX_ANIM_PTR(gAxSharedAnim_01102),
	AX_ANIM_PTR(sAggronAnims_11_4),
	AX_ANIM_PTR(gAxSharedAnim_01184),
	AX_ANIM_PTR(sAggronAnims_11_6),
	AX_ANIM_PTR(gAxSharedAnim_01261),
	AX_ANIM_PTR(gAxSharedAnim_01293),
};

static const ax_anim *const sAggronAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01337),
	AX_ANIM_PTR(gAxSharedAnim_01350),
	AX_ANIM_PTR(gAxSharedAnim_01354),
	AX_ANIM_PTR(gAxSharedAnim_01360),
	AX_ANIM_PTR(gAxSharedAnim_01379),
	AX_ANIM_PTR(gAxSharedAnim_01389),
	AX_ANIM_PTR(gAxSharedAnim_01392),
	AX_ANIM_PTR(gAxSharedAnim_01401),
};

static const ax_anim *const sAggronAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01422),
	AX_ANIM_PTR(gAxSharedAnim_01464),
	AX_ANIM_PTR(gAxSharedAnim_01461),
	AX_ANIM_PTR(gAxSharedAnim_01456),
	AX_ANIM_PTR(gAxSharedAnim_01446),
	AX_ANIM_PTR(gAxSharedAnim_01443),
	AX_ANIM_PTR(gAxSharedAnim_01438),
	AX_ANIM_PTR(gAxSharedAnim_01429),
};

static const ax_anim *const *const sAxAnimationsAggron[] = {
	sAggronAnimTable1,
	sAggronAnimTable2,
	sAggronAnimTable3,
	sAggronAnimTable4,
	sAggronAnimTable5,
	sAggronAnimTable6,
	sAggronAnimTable7,
	sAggronAnimTable8,
	sAggronAnimTable9,
	sAggronAnimTable10,
	sAggronAnimTable11,
	sAggronAnimTable12,
	sAggronAnimTable13,
};

static const ax_sprite *const sAxSpritesAggron[] = {
	sAggronSprites1,
	sAggronSprites2,
	sAggronSprites3,
	sAggronSprites4,
	sAggronSprites5,
	sAggronSprites6,
	sAggronSprites7,
	sAggronSprites8,
	sAggronSprites9,
	sAggronSprites10,
	sAggronSprites11,
	sAggronSprites12,
	sAggronSprites13,
	sAggronSprites14,
	sAggronSprites15,
	sAggronSprites16,
	sAggronSprites17,
	sAggronSprites18,
	sAggronSprites19,
	sAggronSprites20,
	sAggronSprites21,
	sAggronSprites22,
	sAggronSprites23,
	sAggronSprites24,
	sAggronSprites25,
	sAggronSprites26,
	sAggronSprites27,
	sAggronSprites28,
	sAggronSprites29,
	sAggronSprites30,
	sAggronSprites31,
	sAggronSprites32,
	sAggronSprites33,
	sAggronSprites34,
	sAggronSprites35,
	sAggronSprites36,
	sAggronSprites37,
	sAggronSprites38,
	sAggronSprites39,
	sAggronSprites40,
	sAggronSprites41,
	sAggronSprites42,
	sAggronSprites43,
	sAggronSprites44,
	sAggronSprites45,
	sAggronSprites46,
	sAggronSprites47,
	sAggronSprites48,
	sAggronSprites49,
	sAggronSprites50,
	sAggronSprites51,
	sAggronSprites52,
	sAggronSprites53,
	sAggronSprites54,
	sAggronSprites55,
	sAggronSprites56,
	sAggronSprites57,
	sAggronSprites58,
	sAggronSprites59,
	sAggronSprites60,
	sAggronSprites61,
	sAggronSprites62,
};

static const axmain sAxMainAggron = {
	.poses = sAxPosesAggron,
	.animations = sAxAnimationsAggron,
	.animCount = ARRAY_COUNT(sAxAnimationsAggron),
	.spriteData = sAxSpritesAggron,
	.positions = sAxPositionsAggron,
};
