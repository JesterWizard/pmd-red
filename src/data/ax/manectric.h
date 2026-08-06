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
static const axmain sAxMainManectric;
const SiroArchive gAxManectric = {"SIRO", &sAxMainManectric};

static const ax_pose sManectricPose1[] = {
	AX_POSE(0, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose3[] = {
	AX_POSE(2, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose6[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose9[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose11[] = {
	AX_POSE(10, OAM1(5, ST_OAM_SQUARE     , 2), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(11, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(1, 3, 0)),
	AX_POSE(12, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose12[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose13[] = {
	AX_POSE(14, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose14[] = {
	AX_POSE(15, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(5, ST_OAM_SQUARE     , 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose15[] = {
	AX_POSE(17, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(18, OAM1(5, ST_OAM_SQUARE     , 2), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose17[] = {
	AX_POSE(10, OAM1(5, ST_OAM_SQUARE     , 2), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(12, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 0)),
	AX_POSE(11, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(9, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose18[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose21[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose22[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose23[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose24[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose28[] = {
	AX_POSE(19, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(20, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(21, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose29[] = {
	AX_POSE(22, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(23, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(24, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose33[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose34[] = {
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose38[] = {
	AX_POSE(27, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose39[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose43[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose44[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose48[] = {
	AX_POSE(31, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose49[] = {
	AX_POSE(32, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose53[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose54[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose58[] = {
	AX_POSE(27, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose59[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose63[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose64[] = {
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose106[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose107[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose109[] = {
	AX_POSE(35, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose110[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose112[] = {
	AX_POSE(37, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose113[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose115[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose116[] = {
	AX_POSE(40, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose118[] = {
	AX_POSE(41, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose119[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose121[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose122[] = {
	AX_POSE(40, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose124[] = {
	AX_POSE(37, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose125[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose127[] = {
	AX_POSE(35, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose128[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose131[] = {
	AX_POSE(43, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(44, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 0)),
	AX_POSE(45, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(12, 3, 0)),
	AX_POSE(46, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE(47, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(17, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose132[] = {
	AX_POSE(48, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(49, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(50, OAM1(220, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(10, 3, 0)),
	AX_POSE(51, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(18, 3, 0)),
	AX_POSE(52, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(22, 3, 0)),
	AX_POSE(53, OAM1(212, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 0)),
	AX_POSE(54, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(25, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose133[] = {
	AX_POSE(47, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose134[] = {
	AX_POSE(54, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose137[] = {
	AX_POSE(55, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(56, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(4, 3, 0)),
	AX_POSE(57, OAM1(217, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(6, 3, 0)),
	AX_POSE(58, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(59, OAM1(1, ST_OAM_H_RECTANGLE, 2), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE(60, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(18, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose138[] = {
	AX_POSE(61, OAM1(216, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(62, OAM1(248, ST_OAM_H_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(63, OAM1(216, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(10, 3, 0)),
	AX_POSE(64, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(18, 3, 0)),
	AX_POSE(65, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(26, 3, 0)),
	AX_POSE(66, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(27, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose139[] = {
	AX_POSE(60, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose140[] = {
	AX_POSE(66, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose143[] = {
	AX_POSE(43, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(44, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 0)),
	AX_POSE(45, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(12, 3, 0)),
	AX_POSE(46, OAM1(216, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE(67, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(17, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose144[] = {
	AX_POSE(48, OAM1(218, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(49, OAM1(250, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(50, OAM1(218, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(10, 3, 0)),
	AX_POSE(51, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(18, 3, 0)),
	AX_POSE(52, OAM1(250, ST_OAM_H_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(22, 3, 0)),
	AX_POSE(53, OAM1(210, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 0)),
	AX_POSE(68, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(25, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose145[] = {
	AX_POSE(67, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose146[] = {
	AX_POSE(68, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose148[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose149[] = {
	AX_POSE(55, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(56, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 0)),
	AX_POSE(57, OAM1(216, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(6, 3, 0)),
	AX_POSE(58, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(59, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 0)),
	AX_POSE(69, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(18, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose150[] = {
	AX_POSE(61, OAM1(215, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(62, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(63, OAM1(215, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(10, 3, 0)),
	AX_POSE(64, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(18, 3, 0)),
	AX_POSE(65, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(26, 3, 0)),
	AX_POSE(70, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(27, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose151[] = {
	AX_POSE(69, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose152[] = {
	AX_POSE(70, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose155[] = {
	AX_POSE(43, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(44, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 0)),
	AX_POSE(45, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(12, 3, 0)),
	AX_POSE(46, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE(71, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(17, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose156[] = {
	AX_POSE(48, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(49, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(50, OAM1(220, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(10, 3, 0)),
	AX_POSE(51, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(18, 3, 0)),
	AX_POSE(52, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(22, 3, 0)),
	AX_POSE(53, OAM1(212, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 0)),
	AX_POSE(72, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(25, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose157[] = {
	AX_POSE(71, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose158[] = {
	AX_POSE(72, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose160[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose161[] = {
	AX_POSE(55, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(56, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(4, 3, 0)),
	AX_POSE(57, OAM1(216, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(6, 3, 0)),
	AX_POSE(58, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(59, OAM1(0, ST_OAM_H_RECTANGLE, 2), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE(69, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(18, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose162[] = {
	AX_POSE(61, OAM1(215, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(62, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(63, OAM1(215, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(10, 3, 0)),
	AX_POSE(64, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(18, 3, 0)),
	AX_POSE(65, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(26, 3, 0)),
	AX_POSE(70, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(27, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose163[] = {
	AX_POSE(69, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose164[] = {
	AX_POSE(70, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose167[] = {
	AX_POSE(43, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(44, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 0)),
	AX_POSE(45, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(12, 3, 0)),
	AX_POSE(46, OAM1(216, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE(67, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(17, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose168[] = {
	AX_POSE(48, OAM1(218, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(49, OAM1(250, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(50, OAM1(218, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(10, 3, 0)),
	AX_POSE(51, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(18, 3, 0)),
	AX_POSE(52, OAM1(250, ST_OAM_H_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(22, 3, 0)),
	AX_POSE(53, OAM1(210, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 0)),
	AX_POSE(68, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(25, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose169[] = {
	AX_POSE(67, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose170[] = {
	AX_POSE(68, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose173[] = {
	AX_POSE(55, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(56, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 0)),
	AX_POSE(57, OAM1(217, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(6, 3, 0)),
	AX_POSE(58, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(59, OAM1(1, ST_OAM_H_RECTANGLE, 2), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 0)),
	AX_POSE(60, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(18, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose174[] = {
	AX_POSE(61, OAM1(216, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(62, OAM1(248, ST_OAM_H_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE(63, OAM1(216, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(10, 3, 0)),
	AX_POSE(64, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(18, 3, 0)),
	AX_POSE(65, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(26, 3, 0)),
	AX_POSE(66, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(27, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose175[] = {
	AX_POSE(60, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose176[] = {
	AX_POSE(66, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose177[] = {
	AX_POSE(73, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose178[] = {
	AX_POSE(74, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose179[] = {
	AX_POSE(75, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose180[] = {
	AX_POSE(76, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose181[] = {
	AX_POSE(77, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose182[] = {
	AX_POSE(78, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose183[] = {
	AX_POSE(79, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(80, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 0)),
	AX_POSE(81, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose184[] = {
	AX_POSE(78, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose185[] = {
	AX_POSE(77, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose186[] = {
	AX_POSE(76, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose211[] = {
	AX_POSE(19, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(20, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE(21, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose215[] = {
	AX_POSE(31, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose230[] = {
	AX_POSE(35, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose232[] = {
	AX_POSE(37, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose234[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose238[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose240[] = {
	AX_POSE(37, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sManectricPose242[] = {
	AX_POSE(35, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sManectricAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_2_1.lz");
static const u8 sManectricAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_2_2.lz");
static const u8 sManectricAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_2_3.lz");
static const u8 sManectricAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_2_4.lz");
static const u8 sManectricAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_2_5.lz");
static const u8 sManectricAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_2_6.lz");
static const u8 sManectricAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_2_7.lz");
static const u8 sManectricAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_2_8.lz");
static const u8 sManectricAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_3_1.lz");
static const u8 sManectricAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_3_2.lz");
static const u8 sManectricAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_3_3.lz");
static const u8 sManectricAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_3_4.lz");
static const u8 sManectricAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_3_5.lz");
static const u8 sManectricAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_3_6.lz");
static const u8 sManectricAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_3_7.lz");
static const u8 sManectricAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_3_8.lz");
static const u8 sManectricAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_5_1.lz");
static const u8 sManectricAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_5_2.lz");
static const u8 sManectricAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_5_3.lz");
static const u8 sManectricAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_5_4.lz");
static const u8 sManectricAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_5_5.lz");
static const u8 sManectricAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_5_6.lz");
static const u8 sManectricAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_5_7.lz");
static const u8 sManectricAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_5_8.lz");
static const u8 sManectricAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_8_1.lz");
static const u8 sManectricAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_8_2.lz");
static const u8 sManectricAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_8_3.lz");
static const u8 sManectricAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_8_4.lz");
static const u8 sManectricAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_8_5.lz");
static const u8 sManectricAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_8_6.lz");
static const u8 sManectricAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_8_7.lz");
static const u8 sManectricAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_8_8.lz");
static const u8 sManectricAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_9_1.lz");
static const u8 sManectricAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_9_2.lz");
static const u8 sManectricAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_9_3.lz");
static const u8 sManectricAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_9_4.lz");
static const u8 sManectricAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_9_5.lz");
static const u8 sManectricAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_9_6.lz");
static const u8 sManectricAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_9_7.lz");
static const u8 sManectricAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_9_8.lz");
static const u8 sManectricAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_11_1.lz");
static const u8 sManectricAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/manectric/sManectricAnims_11_5.lz");

static const u8 sManectricGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_1.4bpp.lz");
static const ax_sprite sManectricSprites1[] = {
	{sManectricGfx1, ARRAY_COUNT(sManectricGfx1)}, 
	{NULL, 0}
};
static const u8 sManectricGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_2.4bpp.lz");
static const ax_sprite sManectricSprites2[] = {
	{sManectricGfx2, ARRAY_COUNT(sManectricGfx2)}, 
	{NULL, 0}
};
static const u8 sManectricGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_3.4bpp.lz");
static const ax_sprite sManectricSprites3[] = {
	{sManectricGfx3, ARRAY_COUNT(sManectricGfx3)}, 
	{NULL, 0}
};
static const u8 sManectricGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_4.4bpp.lz");
static const ax_sprite sManectricSprites4[] = {
	{sManectricGfx4, ARRAY_COUNT(sManectricGfx4)}, 
	{NULL, 0}
};
static const u8 sManectricGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_5.4bpp.lz");
static const ax_sprite sManectricSprites5[] = {
	{sManectricGfx5, ARRAY_COUNT(sManectricGfx5)}, 
	{NULL, 0}
};
static const u8 sManectricGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_6.4bpp.lz");
static const ax_sprite sManectricSprites6[] = {
	{sManectricGfx6, ARRAY_COUNT(sManectricGfx6)}, 
	{NULL, 0}
};
static const u8 sManectricGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_7.4bpp.lz");
static const ax_sprite sManectricSprites7[] = {
	{sManectricGfx7, ARRAY_COUNT(sManectricGfx7)}, 
	{NULL, 0}
};
static const u8 sManectricGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_8.4bpp.lz");
static const ax_sprite sManectricSprites8[] = {
	{sManectricGfx8, ARRAY_COUNT(sManectricGfx8)}, 
	{NULL, 0}
};
static const u8 sManectricGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_9.4bpp.lz");
static const ax_sprite sManectricSprites9[] = {
	{sManectricGfx9, ARRAY_COUNT(sManectricGfx9)}, 
	{NULL, 0}
};
static const u8 sManectricGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_10.4bpp.lz");
static const ax_sprite sManectricSprites10[] = {
	{sManectricGfx10, ARRAY_COUNT(sManectricGfx10)}, 
	{NULL, 0}
};
static const u8 sManectricGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_11.4bpp.lz");
static const ax_sprite sManectricSprites11[] = {
	{sManectricGfx11, ARRAY_COUNT(sManectricGfx11)}, 
	{NULL, 0}
};
static const u8 sManectricGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_12.4bpp.lz");
static const ax_sprite sManectricSprites12[] = {
	{sManectricGfx12, ARRAY_COUNT(sManectricGfx12)}, 
	{NULL, 0}
};
static const u8 sManectricGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_13.4bpp.lz");
static const ax_sprite sManectricSprites13[] = {
	{sManectricGfx13, ARRAY_COUNT(sManectricGfx13)}, 
	{NULL, 0}
};
static const u8 sManectricGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_14.4bpp.lz");
static const ax_sprite sManectricSprites14[] = {
	{sManectricGfx14, ARRAY_COUNT(sManectricGfx14)}, 
	{NULL, 0}
};
static const u8 sManectricGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_15.4bpp.lz");
static const ax_sprite sManectricSprites15[] = {
	{sManectricGfx15, ARRAY_COUNT(sManectricGfx15)}, 
	{NULL, 0}
};
static const u8 sManectricGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_16.4bpp.lz");
static const ax_sprite sManectricSprites16[] = {
	{sManectricGfx16, ARRAY_COUNT(sManectricGfx16)}, 
	{NULL, 0}
};
static const u8 sManectricGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_17.4bpp.lz");
static const ax_sprite sManectricSprites17[] = {
	{sManectricGfx17, ARRAY_COUNT(sManectricGfx17)}, 
	{NULL, 0}
};
static const u8 sManectricGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_18.4bpp.lz");
static const ax_sprite sManectricSprites18[] = {
	{sManectricGfx18, ARRAY_COUNT(sManectricGfx18)}, 
	{NULL, 0}
};
static const u8 sManectricGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_19.4bpp.lz");
static const ax_sprite sManectricSprites19[] = {
	{sManectricGfx19, ARRAY_COUNT(sManectricGfx19)}, 
	{NULL, 0}
};
static const u8 sManectricGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_20.4bpp.lz");
static const ax_sprite sManectricSprites20[] = {
	{sManectricGfx20, ARRAY_COUNT(sManectricGfx20)}, 
	{NULL, 0}
};
static const u8 sManectricGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_21.4bpp.lz");
static const ax_sprite sManectricSprites21[] = {
	{sManectricGfx21, ARRAY_COUNT(sManectricGfx21)}, 
	{NULL, 0}
};
static const u8 sManectricGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_22.4bpp.lz");
static const ax_sprite sManectricSprites22[] = {
	{sManectricGfx22, ARRAY_COUNT(sManectricGfx22)}, 
	{NULL, 0}
};
static const u8 sManectricGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_23.4bpp.lz");
static const ax_sprite sManectricSprites23[] = {
	{NULL, 32}, 
	{sManectricGfx23, ARRAY_COUNT(sManectricGfx23)}, 
	{NULL, 0}
};
static const u8 sManectricGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_24.4bpp.lz");
static const ax_sprite sManectricSprites24[] = {
	{NULL, 32}, 
	{sManectricGfx24, ARRAY_COUNT(sManectricGfx24)}, 
	{NULL, 0}
};
static const u8 sManectricGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_25.4bpp.lz");
static const ax_sprite sManectricSprites25[] = {
	{sManectricGfx25, ARRAY_COUNT(sManectricGfx25)}, 
	{NULL, 0}
};
static const u8 sManectricGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_26.4bpp.lz");
static const u8 sManectricGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_26_1.4bpp.lz");
static const ax_sprite sManectricSprites26[] = {
	{sManectricGfx26, ARRAY_COUNT(sManectricGfx26)}, 
	{NULL, 32}, 
	{sManectricGfx26_1, ARRAY_COUNT(sManectricGfx26_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sManectricGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_27.4bpp.lz");
static const u8 sManectricGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_27_1.4bpp.lz");
static const ax_sprite sManectricSprites27[] = {
	{NULL, 32}, 
	{sManectricGfx27, ARRAY_COUNT(sManectricGfx27)}, 
	{NULL, 32}, 
	{sManectricGfx27_1, ARRAY_COUNT(sManectricGfx27_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_28.4bpp.lz");
static const u8 sManectricGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_28_1.4bpp.lz");
static const u8 sManectricGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_28_2.4bpp.lz");
static const ax_sprite sManectricSprites28[] = {
	{sManectricGfx28, ARRAY_COUNT(sManectricGfx28)}, 
	{NULL, 32}, 
	{sManectricGfx28_1, ARRAY_COUNT(sManectricGfx28_1)}, 
	{NULL, 32}, 
	{sManectricGfx28_2, ARRAY_COUNT(sManectricGfx28_2)}, 
	{NULL, 0}
};
static const u8 sManectricGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_29.4bpp.lz");
static const u8 sManectricGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_29_1.4bpp.lz");
static const u8 sManectricGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_29_2.4bpp.lz");
static const ax_sprite sManectricSprites29[] = {
	{sManectricGfx29, ARRAY_COUNT(sManectricGfx29)}, 
	{NULL, 64}, 
	{sManectricGfx29_1, ARRAY_COUNT(sManectricGfx29_1)}, 
	{NULL, 32}, 
	{sManectricGfx29_2, ARRAY_COUNT(sManectricGfx29_2)}, 
	{NULL, 0}
};
static const u8 sManectricGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_30.4bpp.lz");
static const u8 sManectricGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_30_1.4bpp.lz");
static const ax_sprite sManectricSprites30[] = {
	{sManectricGfx30, ARRAY_COUNT(sManectricGfx30)}, 
	{NULL, 32}, 
	{sManectricGfx30_1, ARRAY_COUNT(sManectricGfx30_1)}, 
	{NULL, 0}
};
static const u8 sManectricGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_31.4bpp.lz");
static const u8 sManectricGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_31_1.4bpp.lz");
static const u8 sManectricGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_31_2.4bpp.lz");
static const ax_sprite sManectricSprites31[] = {
	{sManectricGfx31, ARRAY_COUNT(sManectricGfx31)}, 
	{NULL, 64}, 
	{sManectricGfx31_1, ARRAY_COUNT(sManectricGfx31_1)}, 
	{NULL, 32}, 
	{sManectricGfx31_2, ARRAY_COUNT(sManectricGfx31_2)}, 
	{NULL, 0}
};
static const u8 sManectricGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_32.4bpp.lz");
static const u8 sManectricGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_32_1.4bpp.lz");
static const u8 sManectricGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_32_2.4bpp.lz");
static const u8 sManectricGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_32_3.4bpp.lz");
static const ax_sprite sManectricSprites32[] = {
	{sManectricGfx32, ARRAY_COUNT(sManectricGfx32)}, 
	{NULL, 32}, 
	{sManectricGfx32_1, ARRAY_COUNT(sManectricGfx32_1)}, 
	{NULL, 32}, 
	{sManectricGfx32_2, ARRAY_COUNT(sManectricGfx32_2)}, 
	{NULL, 32}, 
	{sManectricGfx32_3, ARRAY_COUNT(sManectricGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_33.4bpp.lz");
static const u8 sManectricGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_33_1.4bpp.lz");
static const u8 sManectricGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_33_2.4bpp.lz");
static const u8 sManectricGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_33_3.4bpp.lz");
static const ax_sprite sManectricSprites33[] = {
	{sManectricGfx33, ARRAY_COUNT(sManectricGfx33)}, 
	{NULL, 32}, 
	{sManectricGfx33_1, ARRAY_COUNT(sManectricGfx33_1)}, 
	{NULL, 32}, 
	{sManectricGfx33_2, ARRAY_COUNT(sManectricGfx33_2)}, 
	{NULL, 32}, 
	{sManectricGfx33_3, ARRAY_COUNT(sManectricGfx33_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_34.4bpp.lz");
static const u8 sManectricGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_34_1.4bpp.lz");
static const u8 sManectricGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_34_2.4bpp.lz");
static const u8 sManectricGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_34_3.4bpp.lz");
static const ax_sprite sManectricSprites34[] = {
	{sManectricGfx34, ARRAY_COUNT(sManectricGfx34)}, 
	{NULL, 32}, 
	{sManectricGfx34_1, ARRAY_COUNT(sManectricGfx34_1)}, 
	{NULL, 32}, 
	{sManectricGfx34_2, ARRAY_COUNT(sManectricGfx34_2)}, 
	{NULL, 64}, 
	{sManectricGfx34_3, ARRAY_COUNT(sManectricGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_35.4bpp.lz");
static const u8 sManectricGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_35_1.4bpp.lz");
static const u8 sManectricGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_35_2.4bpp.lz");
static const u8 sManectricGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_35_3.4bpp.lz");
static const ax_sprite sManectricSprites35[] = {
	{NULL, 32}, 
	{sManectricGfx35, ARRAY_COUNT(sManectricGfx35)}, 
	{NULL, 64}, 
	{sManectricGfx35_1, ARRAY_COUNT(sManectricGfx35_1)}, 
	{NULL, 32}, 
	{sManectricGfx35_2, ARRAY_COUNT(sManectricGfx35_2)}, 
	{NULL, 32}, 
	{sManectricGfx35_3, ARRAY_COUNT(sManectricGfx35_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_36.4bpp.lz");
static const u8 sManectricGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_36_1.4bpp.lz");
static const u8 sManectricGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_36_2.4bpp.lz");
static const ax_sprite sManectricSprites36[] = {
	{NULL, 32}, 
	{sManectricGfx36, ARRAY_COUNT(sManectricGfx36)}, 
	{NULL, 32}, 
	{sManectricGfx36_1, ARRAY_COUNT(sManectricGfx36_1)}, 
	{NULL, 32}, 
	{sManectricGfx36_2, ARRAY_COUNT(sManectricGfx36_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_37.4bpp.lz");
static const u8 sManectricGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_37_1.4bpp.lz");
static const ax_sprite sManectricSprites37[] = {
	{NULL, 32}, 
	{sManectricGfx37, ARRAY_COUNT(sManectricGfx37)}, 
	{NULL, 32}, 
	{sManectricGfx37_1, ARRAY_COUNT(sManectricGfx37_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_38.4bpp.lz");
static const u8 sManectricGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_38_1.4bpp.lz");
static const u8 sManectricGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_38_2.4bpp.lz");
static const ax_sprite sManectricSprites38[] = {
	{sManectricGfx38, ARRAY_COUNT(sManectricGfx38)}, 
	{NULL, 32}, 
	{sManectricGfx38_1, ARRAY_COUNT(sManectricGfx38_1)}, 
	{NULL, 32}, 
	{sManectricGfx38_2, ARRAY_COUNT(sManectricGfx38_2)}, 
	{NULL, 0}
};
static const u8 sManectricGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_39.4bpp.lz");
static const u8 sManectricGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_39_1.4bpp.lz");
static const ax_sprite sManectricSprites39[] = {
	{sManectricGfx39, ARRAY_COUNT(sManectricGfx39)}, 
	{NULL, 64}, 
	{sManectricGfx39_1, ARRAY_COUNT(sManectricGfx39_1)}, 
	{NULL, 0}
};
static const u8 sManectricGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_40.4bpp.lz");
static const u8 sManectricGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_40_1.4bpp.lz");
static const u8 sManectricGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_40_2.4bpp.lz");
static const ax_sprite sManectricSprites40[] = {
	{NULL, 32}, 
	{sManectricGfx40, ARRAY_COUNT(sManectricGfx40)}, 
	{NULL, 32}, 
	{sManectricGfx40_1, ARRAY_COUNT(sManectricGfx40_1)}, 
	{NULL, 32}, 
	{sManectricGfx40_2, ARRAY_COUNT(sManectricGfx40_2)}, 
	{NULL, 0}
};
static const u8 sManectricGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_41.4bpp.lz");
static const u8 sManectricGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_41_1.4bpp.lz");
static const ax_sprite sManectricSprites41[] = {
	{sManectricGfx41, ARRAY_COUNT(sManectricGfx41)}, 
	{NULL, 64}, 
	{sManectricGfx41_1, ARRAY_COUNT(sManectricGfx41_1)}, 
	{NULL, 0}
};
static const u8 sManectricGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_42.4bpp.lz");
static const u8 sManectricGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_42_1.4bpp.lz");
static const u8 sManectricGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_42_2.4bpp.lz");
static const u8 sManectricGfx42_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_42_3.4bpp.lz");
static const ax_sprite sManectricSprites42[] = {
	{NULL, 32}, 
	{sManectricGfx42, ARRAY_COUNT(sManectricGfx42)}, 
	{NULL, 64}, 
	{sManectricGfx42_1, ARRAY_COUNT(sManectricGfx42_1)}, 
	{NULL, 32}, 
	{sManectricGfx42_2, ARRAY_COUNT(sManectricGfx42_2)}, 
	{NULL, 32}, 
	{sManectricGfx42_3, ARRAY_COUNT(sManectricGfx42_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_43.4bpp.lz");
static const u8 sManectricGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_43_1.4bpp.lz");
static const u8 sManectricGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_43_2.4bpp.lz");
static const u8 sManectricGfx43_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_43_3.4bpp.lz");
static const ax_sprite sManectricSprites43[] = {
	{sManectricGfx43, ARRAY_COUNT(sManectricGfx43)}, 
	{NULL, 32}, 
	{sManectricGfx43_1, ARRAY_COUNT(sManectricGfx43_1)}, 
	{NULL, 32}, 
	{sManectricGfx43_2, ARRAY_COUNT(sManectricGfx43_2)}, 
	{NULL, 32}, 
	{sManectricGfx43_3, ARRAY_COUNT(sManectricGfx43_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_44.4bpp.lz");
static const ax_sprite sManectricSprites44[] = {
	{sManectricGfx44, ARRAY_COUNT(sManectricGfx44)}, 
	{NULL, 0}
};
static const u8 sManectricGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_45.4bpp.lz");
static const u8 sManectricGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_45_1.4bpp.lz");
static const ax_sprite sManectricSprites45[] = {
	{sManectricGfx45, ARRAY_COUNT(sManectricGfx45)}, 
	{NULL, 32}, 
	{sManectricGfx45_1, ARRAY_COUNT(sManectricGfx45_1)}, 
	{NULL, 0}
};
static const u8 sManectricGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_46.4bpp.lz");
static const ax_sprite sManectricSprites46[] = {
	{NULL, 32}, 
	{sManectricGfx46, ARRAY_COUNT(sManectricGfx46)}, 
	{NULL, 0}
};
static const u8 sManectricGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_47.4bpp.lz");
static const ax_sprite sManectricSprites47[] = {
	{sManectricGfx47, ARRAY_COUNT(sManectricGfx47)}, 
	{NULL, 0}
};
static const u8 sManectricGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_48.4bpp.lz");
static const u8 sManectricGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_48_1.4bpp.lz");
static const u8 sManectricGfx48_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_48_2.4bpp.lz");
static const u8 sManectricGfx48_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_48_3.4bpp.lz");
static const ax_sprite sManectricSprites48[] = {
	{sManectricGfx48, ARRAY_COUNT(sManectricGfx48)}, 
	{NULL, 32}, 
	{sManectricGfx48_1, ARRAY_COUNT(sManectricGfx48_1)}, 
	{NULL, 32}, 
	{sManectricGfx48_2, ARRAY_COUNT(sManectricGfx48_2)}, 
	{NULL, 32}, 
	{sManectricGfx48_3, ARRAY_COUNT(sManectricGfx48_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_49.4bpp.lz");
static const ax_sprite sManectricSprites49[] = {
	{NULL, 32}, 
	{sManectricGfx49, ARRAY_COUNT(sManectricGfx49)}, 
	{NULL, 0}
};
static const u8 sManectricGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_50.4bpp.lz");
static const ax_sprite sManectricSprites50[] = {
	{sManectricGfx50, ARRAY_COUNT(sManectricGfx50)}, 
	{NULL, 0}
};
static const u8 sManectricGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_51.4bpp.lz");
static const ax_sprite sManectricSprites51[] = {
	{sManectricGfx51, ARRAY_COUNT(sManectricGfx51)}, 
	{NULL, 0}
};
static const u8 sManectricGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_52.4bpp.lz");
static const ax_sprite sManectricSprites52[] = {
	{sManectricGfx52, ARRAY_COUNT(sManectricGfx52)}, 
	{NULL, 0}
};
static const u8 sManectricGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_53.4bpp.lz");
static const ax_sprite sManectricSprites53[] = {
	{sManectricGfx53, ARRAY_COUNT(sManectricGfx53)}, 
	{NULL, 0}
};
static const u8 sManectricGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_54.4bpp.lz");
static const ax_sprite sManectricSprites54[] = {
	{sManectricGfx54, ARRAY_COUNT(sManectricGfx54)}, 
	{NULL, 0}
};
static const u8 sManectricGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_55.4bpp.lz");
static const u8 sManectricGfx55_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_55_1.4bpp.lz");
static const u8 sManectricGfx55_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_55_2.4bpp.lz");
static const u8 sManectricGfx55_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_55_3.4bpp.lz");
static const ax_sprite sManectricSprites55[] = {
	{sManectricGfx55, ARRAY_COUNT(sManectricGfx55)}, 
	{NULL, 32}, 
	{sManectricGfx55_1, ARRAY_COUNT(sManectricGfx55_1)}, 
	{NULL, 32}, 
	{sManectricGfx55_2, ARRAY_COUNT(sManectricGfx55_2)}, 
	{NULL, 32}, 
	{sManectricGfx55_3, ARRAY_COUNT(sManectricGfx55_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_56.4bpp.lz");
static const ax_sprite sManectricSprites56[] = {
	{sManectricGfx56, ARRAY_COUNT(sManectricGfx56)}, 
	{NULL, 0}
};
static const u8 sManectricGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_57.4bpp.lz");
static const ax_sprite sManectricSprites57[] = {
	{sManectricGfx57, ARRAY_COUNT(sManectricGfx57)}, 
	{NULL, 0}
};
static const u8 sManectricGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_58.4bpp.lz");
static const ax_sprite sManectricSprites58[] = {
	{sManectricGfx58, ARRAY_COUNT(sManectricGfx58)}, 
	{NULL, 0}
};
static const u8 sManectricGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_59.4bpp.lz");
static const ax_sprite sManectricSprites59[] = {
	{sManectricGfx59, ARRAY_COUNT(sManectricGfx59)}, 
	{NULL, 0}
};
static const u8 sManectricGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_60.4bpp.lz");
static const ax_sprite sManectricSprites60[] = {
	{sManectricGfx60, ARRAY_COUNT(sManectricGfx60)}, 
	{NULL, 0}
};
static const u8 sManectricGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_61.4bpp.lz");
static const u8 sManectricGfx61_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_61_1.4bpp.lz");
static const u8 sManectricGfx61_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_61_2.4bpp.lz");
static const ax_sprite sManectricSprites61[] = {
	{NULL, 32}, 
	{sManectricGfx61, ARRAY_COUNT(sManectricGfx61)}, 
	{NULL, 32}, 
	{sManectricGfx61_1, ARRAY_COUNT(sManectricGfx61_1)}, 
	{NULL, 32}, 
	{sManectricGfx61_2, ARRAY_COUNT(sManectricGfx61_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_62.4bpp.lz");
static const ax_sprite sManectricSprites62[] = {
	{NULL, 32}, 
	{sManectricGfx62, ARRAY_COUNT(sManectricGfx62)}, 
	{NULL, 0}
};
static const u8 sManectricGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_63.4bpp.lz");
static const ax_sprite sManectricSprites63[] = {
	{sManectricGfx63, ARRAY_COUNT(sManectricGfx63)}, 
	{NULL, 0}
};
static const u8 sManectricGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_64.4bpp.lz");
static const u8 sManectricGfx64_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_64_1.4bpp.lz");
static const u8 sManectricGfx64_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_64_2.4bpp.lz");
static const ax_sprite sManectricSprites64[] = {
	{sManectricGfx64, ARRAY_COUNT(sManectricGfx64)}, 
	{NULL, 32}, 
	{sManectricGfx64_1, ARRAY_COUNT(sManectricGfx64_1)}, 
	{NULL, 32}, 
	{sManectricGfx64_2, ARRAY_COUNT(sManectricGfx64_2)}, 
	{NULL, 0}
};
static const u8 sManectricGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_65.4bpp.lz");
static const ax_sprite sManectricSprites65[] = {
	{sManectricGfx65, ARRAY_COUNT(sManectricGfx65)}, 
	{NULL, 0}
};
static const u8 sManectricGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_66.4bpp.lz");
static const ax_sprite sManectricSprites66[] = {
	{sManectricGfx66, ARRAY_COUNT(sManectricGfx66)}, 
	{NULL, 0}
};
static const u8 sManectricGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_67.4bpp.lz");
static const u8 sManectricGfx67_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_67_1.4bpp.lz");
static const u8 sManectricGfx67_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_67_2.4bpp.lz");
static const ax_sprite sManectricSprites67[] = {
	{NULL, 32}, 
	{sManectricGfx67, ARRAY_COUNT(sManectricGfx67)}, 
	{NULL, 32}, 
	{sManectricGfx67_1, ARRAY_COUNT(sManectricGfx67_1)}, 
	{NULL, 32}, 
	{sManectricGfx67_2, ARRAY_COUNT(sManectricGfx67_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_68.4bpp.lz");
static const u8 sManectricGfx68_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_68_1.4bpp.lz");
static const u8 sManectricGfx68_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_68_2.4bpp.lz");
static const ax_sprite sManectricSprites68[] = {
	{sManectricGfx68, ARRAY_COUNT(sManectricGfx68)}, 
	{NULL, 32}, 
	{sManectricGfx68_1, ARRAY_COUNT(sManectricGfx68_1)}, 
	{NULL, 32}, 
	{sManectricGfx68_2, ARRAY_COUNT(sManectricGfx68_2)}, 
	{NULL, 0}
};
static const u8 sManectricGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_69.4bpp.lz");
static const u8 sManectricGfx69_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_69_1.4bpp.lz");
static const u8 sManectricGfx69_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_69_2.4bpp.lz");
static const ax_sprite sManectricSprites69[] = {
	{sManectricGfx69, ARRAY_COUNT(sManectricGfx69)}, 
	{NULL, 32}, 
	{sManectricGfx69_1, ARRAY_COUNT(sManectricGfx69_1)}, 
	{NULL, 32}, 
	{sManectricGfx69_2, ARRAY_COUNT(sManectricGfx69_2)}, 
	{NULL, 0}
};
static const u8 sManectricGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_70.4bpp.lz");
static const u8 sManectricGfx70_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_70_1.4bpp.lz");
static const ax_sprite sManectricSprites70[] = {
	{NULL, 32}, 
	{sManectricGfx70, ARRAY_COUNT(sManectricGfx70)}, 
	{NULL, 32}, 
	{sManectricGfx70_1, ARRAY_COUNT(sManectricGfx70_1)}, 
	{NULL, 0}
};
static const u8 sManectricGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_71.4bpp.lz");
static const u8 sManectricGfx71_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_71_1.4bpp.lz");
static const ax_sprite sManectricSprites71[] = {
	{NULL, 32}, 
	{sManectricGfx71, ARRAY_COUNT(sManectricGfx71)}, 
	{NULL, 32}, 
	{sManectricGfx71_1, ARRAY_COUNT(sManectricGfx71_1)}, 
	{NULL, 0}
};
static const u8 sManectricGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_72.4bpp.lz");
static const u8 sManectricGfx72_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_72_1.4bpp.lz");
static const u8 sManectricGfx72_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_72_2.4bpp.lz");
static const u8 sManectricGfx72_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_72_3.4bpp.lz");
static const ax_sprite sManectricSprites72[] = {
	{NULL, 32}, 
	{sManectricGfx72, ARRAY_COUNT(sManectricGfx72)}, 
	{NULL, 64}, 
	{sManectricGfx72_1, ARRAY_COUNT(sManectricGfx72_1)}, 
	{NULL, 32}, 
	{sManectricGfx72_2, ARRAY_COUNT(sManectricGfx72_2)}, 
	{NULL, 32}, 
	{sManectricGfx72_3, ARRAY_COUNT(sManectricGfx72_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_73.4bpp.lz");
static const u8 sManectricGfx73_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_73_1.4bpp.lz");
static const u8 sManectricGfx73_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_73_2.4bpp.lz");
static const u8 sManectricGfx73_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_73_3.4bpp.lz");
static const ax_sprite sManectricSprites73[] = {
	{NULL, 32}, 
	{sManectricGfx73, ARRAY_COUNT(sManectricGfx73)}, 
	{NULL, 64}, 
	{sManectricGfx73_1, ARRAY_COUNT(sManectricGfx73_1)}, 
	{NULL, 32}, 
	{sManectricGfx73_2, ARRAY_COUNT(sManectricGfx73_2)}, 
	{NULL, 32}, 
	{sManectricGfx73_3, ARRAY_COUNT(sManectricGfx73_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sManectricGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_74.4bpp.lz");
static const ax_sprite sManectricSprites74[] = {
	{sManectricGfx74, ARRAY_COUNT(sManectricGfx74)}, 
	{NULL, 0}
};
static const u8 sManectricGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_75.4bpp.lz");
static const ax_sprite sManectricSprites75[] = {
	{sManectricGfx75, ARRAY_COUNT(sManectricGfx75)}, 
	{NULL, 0}
};
static const u8 sManectricGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_76.4bpp.lz");
static const ax_sprite sManectricSprites76[] = {
	{sManectricGfx76, ARRAY_COUNT(sManectricGfx76)}, 
	{NULL, 0}
};
static const u8 sManectricGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_77.4bpp.lz");
static const ax_sprite sManectricSprites77[] = {
	{sManectricGfx77, ARRAY_COUNT(sManectricGfx77)}, 
	{NULL, 0}
};
static const u8 sManectricGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_78.4bpp.lz");
static const ax_sprite sManectricSprites78[] = {
	{sManectricGfx78, ARRAY_COUNT(sManectricGfx78)}, 
	{NULL, 0}
};
static const u8 sManectricGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_79.4bpp.lz");
static const ax_sprite sManectricSprites79[] = {
	{sManectricGfx79, ARRAY_COUNT(sManectricGfx79)}, 
	{NULL, 0}
};
static const u8 sManectricGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_80.4bpp.lz");
static const ax_sprite sManectricSprites80[] = {
	{sManectricGfx80, ARRAY_COUNT(sManectricGfx80)}, 
	{NULL, 0}
};
static const u8 sManectricGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_81.4bpp.lz");
static const ax_sprite sManectricSprites81[] = {
	{sManectricGfx81, ARRAY_COUNT(sManectricGfx81)}, 
	{NULL, 0}
};
static const u8 sManectricGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/manectric/sprite_82.4bpp.lz");
static const ax_sprite sManectricSprites82[] = {
	{sManectricGfx82, ARRAY_COUNT(sManectricGfx82)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesManectric[] = {
	sManectricPose1,
	sManectricPose2,
	sManectricPose3,
	sManectricPose4,
	sManectricPose5,
	sManectricPose6,
	sManectricPose7,
	sManectricPose8,
	sManectricPose9,
	sManectricPose10,
	sManectricPose11,
	sManectricPose12,
	sManectricPose13,
	sManectricPose14,
	sManectricPose15,
	sManectricPose16,
	sManectricPose17,
	sManectricPose18,
	sManectricPose19,
	sManectricPose20,
	sManectricPose21,
	sManectricPose22,
	sManectricPose23,
	sManectricPose24,
	sManectricPose1,
	sManectricPose2,
	sManectricPose3,
	sManectricPose28,
	sManectricPose29,
	sManectricPose4,
	sManectricPose5,
	sManectricPose6,
	sManectricPose33,
	sManectricPose34,
	sManectricPose7,
	sManectricPose8,
	sManectricPose9,
	sManectricPose38,
	sManectricPose39,
	sManectricPose10,
	sManectricPose11,
	sManectricPose12,
	sManectricPose43,
	sManectricPose44,
	sManectricPose13,
	sManectricPose14,
	sManectricPose15,
	sManectricPose48,
	sManectricPose49,
	sManectricPose16,
	sManectricPose17,
	sManectricPose18,
	sManectricPose53,
	sManectricPose54,
	sManectricPose19,
	sManectricPose20,
	sManectricPose21,
	sManectricPose58,
	sManectricPose59,
	sManectricPose22,
	sManectricPose23,
	sManectricPose24,
	sManectricPose63,
	sManectricPose64,
	sManectricPose1,
	sManectricPose2,
	sManectricPose3,
	sManectricPose28,
	sManectricPose29,
	sManectricPose4,
	sManectricPose5,
	sManectricPose6,
	sManectricPose33,
	sManectricPose34,
	sManectricPose7,
	sManectricPose8,
	sManectricPose9,
	sManectricPose38,
	sManectricPose39,
	sManectricPose10,
	sManectricPose11,
	sManectricPose12,
	sManectricPose43,
	sManectricPose44,
	sManectricPose13,
	sManectricPose14,
	sManectricPose15,
	sManectricPose48,
	sManectricPose49,
	sManectricPose16,
	sManectricPose17,
	sManectricPose18,
	sManectricPose53,
	sManectricPose54,
	sManectricPose19,
	sManectricPose20,
	sManectricPose21,
	sManectricPose58,
	sManectricPose59,
	sManectricPose22,
	sManectricPose23,
	sManectricPose24,
	sManectricPose63,
	sManectricPose64,
	sManectricPose1,
	sManectricPose106,
	sManectricPose107,
	sManectricPose4,
	sManectricPose109,
	sManectricPose110,
	sManectricPose7,
	sManectricPose112,
	sManectricPose113,
	sManectricPose10,
	sManectricPose115,
	sManectricPose116,
	sManectricPose13,
	sManectricPose118,
	sManectricPose119,
	sManectricPose16,
	sManectricPose121,
	sManectricPose122,
	sManectricPose19,
	sManectricPose124,
	sManectricPose125,
	sManectricPose22,
	sManectricPose127,
	sManectricPose128,
	sManectricPose1,
	sManectricPose107,
	sManectricPose131,
	sManectricPose132,
	sManectricPose133,
	sManectricPose134,
	sManectricPose4,
	sManectricPose110,
	sManectricPose137,
	sManectricPose138,
	sManectricPose139,
	sManectricPose140,
	sManectricPose7,
	sManectricPose113,
	sManectricPose143,
	sManectricPose144,
	sManectricPose145,
	sManectricPose146,
	sManectricPose10,
	sManectricPose148,
	sManectricPose149,
	sManectricPose150,
	sManectricPose151,
	sManectricPose152,
	sManectricPose13,
	sManectricPose119,
	sManectricPose155,
	sManectricPose156,
	sManectricPose157,
	sManectricPose158,
	sManectricPose16,
	sManectricPose160,
	sManectricPose161,
	sManectricPose162,
	sManectricPose163,
	sManectricPose164,
	sManectricPose19,
	sManectricPose125,
	sManectricPose167,
	sManectricPose168,
	sManectricPose169,
	sManectricPose170,
	sManectricPose22,
	sManectricPose128,
	sManectricPose173,
	sManectricPose174,
	sManectricPose175,
	sManectricPose176,
	sManectricPose177,
	sManectricPose178,
	sManectricPose179,
	sManectricPose180,
	sManectricPose181,
	sManectricPose182,
	sManectricPose183,
	sManectricPose184,
	sManectricPose185,
	sManectricPose186,
	sManectricPose1,
	sManectricPose107,
	sManectricPose133,
	sManectricPose4,
	sManectricPose110,
	sManectricPose139,
	sManectricPose7,
	sManectricPose113,
	sManectricPose145,
	sManectricPose10,
	sManectricPose148,
	sManectricPose151,
	sManectricPose13,
	sManectricPose119,
	sManectricPose157,
	sManectricPose16,
	sManectricPose160,
	sManectricPose163,
	sManectricPose19,
	sManectricPose125,
	sManectricPose169,
	sManectricPose22,
	sManectricPose128,
	sManectricPose175,
	sManectricPose211,
	sManectricPose63,
	sManectricPose58,
	sManectricPose53,
	sManectricPose215,
	sManectricPose43,
	sManectricPose38,
	sManectricPose33,
	sManectricPose106,
	sManectricPose109,
	sManectricPose112,
	sManectricPose115,
	sManectricPose118,
	sManectricPose121,
	sManectricPose124,
	sManectricPose127,
	sManectricPose1,
	sManectricPose106,
	sManectricPose4,
	sManectricPose230,
	sManectricPose7,
	sManectricPose232,
	sManectricPose10,
	sManectricPose234,
	sManectricPose13,
	sManectricPose118,
	sManectricPose16,
	sManectricPose238,
	sManectricPose19,
	sManectricPose240,
	sManectricPose22,
	sManectricPose242,
	sManectricPose1,
	sManectricPose22,
	sManectricPose19,
	sManectricPose16,
	sManectricPose13,
	sManectricPose10,
	sManectricPose7,
	sManectricPose4,
	sManectricPose1,
	sManectricPose22,
	sManectricPose19,
	sManectricPose16,
	sManectricPose13,
	sManectricPose10,
	sManectricPose7,
	sManectricPose4,
};

static const struct PositionSets sAxPositionsManectric[] = {
	[0] = { .set = { {-1, -4}, {-6, 1}, {5, 1}, {0, -9} } },
	[1] = { .set = { {1, -3}, {-4, 3}, {5, -1}, {0, -8} } },
	[2] = { .set = { {-2, -3}, {-5, -1}, {3, 3}, {-1, -8} } },
	[3] = { .set = { {8, -6}, {8, 0}, {1, 2}, {-1, -9} } },
	[4] = { .set = { {9, -5}, {7, -1}, {4, 4}, {0, -7} } },
	[5] = { .set = { {8, -4}, {9, 3}, {-1, 1}, {0, -5} } },
	[6] = { .set = { {12, -11}, {7, -3}, {6, 0}, {-1, -8} } },
	[7] = { .set = { {13, -11}, {0, -3}, {9, 0}, {-2, -9} } },
	[8] = { .set = { {13, -10}, {10, -3}, {3, 0}, {-1, -7} } },
	[9] = { .set = { {8, -16}, {-2, -5}, {6, -3}, {-1, -8} } },
	[10] = { .set = { {6, -15}, {-4, -5}, {9, -4}, {-2, -7} } },
	[11] = { .set = { {8, -14}, {1, -8}, {4, 0}, {-1, -7} } },
	[12] = { .set = { {0, -12}, {4, -4}, {-5, -4}, {0, -7} } },
	[13] = { .set = { {-1, -11}, {4, -4}, {-4, -8}, {-1, -7} } },
	[14] = { .set = { {2, -11}, {3, -7}, {-5, -4}, {0, -7} } },
	[15] = { .set = { {-9, -16}, {1, -5}, {-7, -3}, {0, -8} } },
	[16] = { .set = { {-7, -15}, {3, -5}, {-10, -4}, {1, -7} } },
	[17] = { .set = { {-9, -14}, {-2, -8}, {-5, 0}, {0, -7} } },
	[18] = { .set = { {-13, -11}, {-8, -3}, {-7, 0}, {0, -8} } },
	[19] = { .set = { {-14, -11}, {-1, -3}, {-10, 0}, {1, -9} } },
	[20] = { .set = { {-14, -10}, {-11, -3}, {-4, 0}, {0, -7} } },
	[21] = { .set = { {-9, -6}, {-9, 0}, {-2, 2}, {0, -9} } },
	[22] = { .set = { {-10, -5}, {-8, -1}, {-5, 4}, {-1, -7} } },
	[23] = { .set = { {-9, -4}, {-10, 3}, {0, 1}, {-1, -5} } },
	[24] = { .set = { {-1, -4}, {-6, 1}, {5, 1}, {0, -9} } },
	[25] = { .set = { {1, -3}, {-4, 3}, {5, -1}, {0, -8} } },
	[26] = { .set = { {-2, -3}, {-5, -1}, {3, 3}, {-1, -8} } },
	[27] = { .set = { {-1, -7}, {-3, -1}, {2, -2}, {0, -16} } },
	[28] = { .set = { {0, -1}, {-2, 1}, {0, 2}, {-1, -11} } },
	[29] = { .set = { {8, -6}, {8, 0}, {1, 2}, {-1, -9} } },
	[30] = { .set = { {9, -5}, {7, -1}, {4, 4}, {0, -7} } },
	[31] = { .set = { {8, -4}, {9, 3}, {-1, 1}, {0, -5} } },
	[32] = { .set = { {9, -6}, {9, -2}, {8, 0}, {0, -13} } },
	[33] = { .set = { {9, -4}, {5, -2}, {3, 2}, {-1, -10} } },
	[34] = { .set = { {12, -11}, {7, -3}, {6, 0}, {-1, -8} } },
	[35] = { .set = { {13, -11}, {0, -3}, {9, 0}, {-2, -9} } },
	[36] = { .set = { {13, -10}, {10, -3}, {3, 0}, {-1, -7} } },
	[37] = { .set = { {14, -12}, {11, -6}, {12, -4}, {-2, -13} } },
	[38] = { .set = { {14, -10}, {3, -3}, {2, 0}, {-1, -8} } },
	[39] = { .set = { {8, -16}, {-2, -5}, {6, -3}, {-1, -8} } },
	[40] = { .set = { {6, -15}, {-4, -5}, {9, -4}, {-2, -7} } },
	[41] = { .set = { {8, -14}, {1, -8}, {4, 0}, {-1, -7} } },
	[42] = { .set = { {10, -17}, {8, -9}, {11, -8}, {-1, -13} } },
	[43] = { .set = { {11, -14}, {0, -5}, {2, -2}, {-1, -7} } },
	[44] = { .set = { {0, -12}, {4, -4}, {-5, -4}, {0, -7} } },
	[45] = { .set = { {-1, -11}, {4, -4}, {-4, -8}, {-1, -7} } },
	[46] = { .set = { {2, -11}, {3, -7}, {-5, -4}, {0, -7} } },
	[47] = { .set = { {0, -19}, {4, -20}, {-4, -20}, {0, -17} } },
	[48] = { .set = { {0, -13}, {4, -7}, {-5, -7}, {0, -10} } },
	[49] = { .set = { {-9, -16}, {1, -5}, {-7, -3}, {0, -8} } },
	[50] = { .set = { {-7, -15}, {3, -5}, {-10, -4}, {1, -7} } },
	[51] = { .set = { {-9, -14}, {-2, -8}, {-5, 0}, {0, -7} } },
	[52] = { .set = { {-11, -17}, {-9, -9}, {-12, -8}, {0, -13} } },
	[53] = { .set = { {-12, -14}, {-1, -5}, {-3, -2}, {0, -7} } },
	[54] = { .set = { {-13, -11}, {-8, -3}, {-7, 0}, {0, -8} } },
	[55] = { .set = { {-14, -11}, {-1, -3}, {-10, 0}, {1, -9} } },
	[56] = { .set = { {-14, -10}, {-11, -3}, {-4, 0}, {0, -7} } },
	[57] = { .set = { {-15, -12}, {-12, -6}, {-13, -4}, {1, -13} } },
	[58] = { .set = { {-15, -10}, {-4, -3}, {-3, 0}, {0, -8} } },
	[59] = { .set = { {-9, -6}, {-9, 0}, {-2, 2}, {0, -9} } },
	[60] = { .set = { {-10, -5}, {-8, -1}, {-5, 4}, {-1, -7} } },
	[61] = { .set = { {-9, -4}, {-10, 3}, {0, 1}, {-1, -5} } },
	[62] = { .set = { {-10, -6}, {-10, -2}, {-9, 0}, {-1, -13} } },
	[63] = { .set = { {-10, -4}, {-6, -2}, {-4, 2}, {0, -10} } },
	[64] = { .set = { {-1, -4}, {-6, 1}, {5, 1}, {0, -9} } },
	[65] = { .set = { {1, -3}, {-4, 3}, {5, -1}, {0, -8} } },
	[66] = { .set = { {-2, -3}, {-5, -1}, {3, 3}, {-1, -8} } },
	[67] = { .set = { {-1, -7}, {-3, -1}, {2, -2}, {0, -16} } },
	[68] = { .set = { {0, -1}, {-2, 1}, {0, 2}, {-1, -11} } },
	[69] = { .set = { {8, -6}, {8, 0}, {1, 2}, {-1, -9} } },
	[70] = { .set = { {9, -5}, {7, -1}, {4, 4}, {0, -7} } },
	[71] = { .set = { {8, -4}, {9, 3}, {-1, 1}, {0, -5} } },
	[72] = { .set = { {9, -6}, {9, -2}, {8, 0}, {0, -13} } },
	[73] = { .set = { {9, -4}, {5, -2}, {3, 2}, {-1, -10} } },
	[74] = { .set = { {12, -11}, {7, -3}, {6, 0}, {-1, -8} } },
	[75] = { .set = { {13, -11}, {0, -3}, {9, 0}, {-2, -9} } },
	[76] = { .set = { {13, -10}, {10, -3}, {3, 0}, {-1, -7} } },
	[77] = { .set = { {14, -12}, {11, -6}, {12, -4}, {-2, -13} } },
	[78] = { .set = { {14, -10}, {3, -3}, {2, 0}, {-1, -8} } },
	[79] = { .set = { {8, -16}, {-2, -5}, {6, -3}, {-1, -8} } },
	[80] = { .set = { {6, -15}, {-4, -5}, {9, -4}, {-2, -7} } },
	[81] = { .set = { {8, -14}, {1, -8}, {4, 0}, {-1, -7} } },
	[82] = { .set = { {10, -17}, {8, -9}, {11, -8}, {-1, -13} } },
	[83] = { .set = { {11, -14}, {0, -5}, {2, -2}, {-1, -7} } },
	[84] = { .set = { {0, -12}, {4, -4}, {-5, -4}, {0, -7} } },
	[85] = { .set = { {-1, -11}, {4, -4}, {-4, -8}, {-1, -7} } },
	[86] = { .set = { {2, -11}, {3, -7}, {-5, -4}, {0, -7} } },
	[87] = { .set = { {0, -19}, {4, -20}, {-4, -20}, {0, -17} } },
	[88] = { .set = { {0, -13}, {4, -7}, {-5, -7}, {0, -10} } },
	[89] = { .set = { {-9, -16}, {1, -5}, {-7, -3}, {0, -8} } },
	[90] = { .set = { {-7, -15}, {3, -5}, {-10, -4}, {1, -7} } },
	[91] = { .set = { {-9, -14}, {-2, -8}, {-5, 0}, {0, -7} } },
	[92] = { .set = { {-11, -17}, {-9, -9}, {-12, -8}, {0, -13} } },
	[93] = { .set = { {-12, -14}, {-1, -5}, {-3, -2}, {0, -7} } },
	[94] = { .set = { {-13, -11}, {-8, -3}, {-7, 0}, {0, -8} } },
	[95] = { .set = { {-14, -11}, {-1, -3}, {-10, 0}, {1, -9} } },
	[96] = { .set = { {-14, -10}, {-11, -3}, {-4, 0}, {0, -7} } },
	[97] = { .set = { {-15, -12}, {-12, -6}, {-13, -4}, {1, -13} } },
	[98] = { .set = { {-15, -10}, {-4, -3}, {-3, 0}, {0, -8} } },
	[99] = { .set = { {-9, -6}, {-9, 0}, {-2, 2}, {0, -9} } },
	[100] = { .set = { {-10, -5}, {-8, -1}, {-5, 4}, {-1, -7} } },
	[101] = { .set = { {-9, -4}, {-10, 3}, {0, 1}, {-1, -5} } },
	[102] = { .set = { {-10, -6}, {-10, -2}, {-9, 0}, {-1, -13} } },
	[103] = { .set = { {-10, -4}, {-6, -2}, {-4, 2}, {0, -10} } },
	[104] = { .set = { {-1, -4}, {-6, 1}, {5, 1}, {0, -9} } },
	[105] = { .set = { {0, -13}, {-2, 0}, {2, 1}, {0, -8} } },
	[106] = { .set = { {-1, 0}, {-7, 1}, {6, 1}, {0, -9} } },
	[107] = { .set = { {8, -6}, {8, 0}, {1, 2}, {-1, -9} } },
	[108] = { .set = { {10, -13}, {6, 0}, {4, 2}, {-2, -8} } },
	[109] = { .set = { {10, -3}, {8, -1}, {2, 4}, {0, -8} } },
	[110] = { .set = { {12, -11}, {7, -3}, {6, 0}, {-1, -8} } },
	[111] = { .set = { {9, -19}, {4, -6}, {5, 0}, {-3, -8} } },
	[112] = { .set = { {10, -8}, {5, -4}, {5, 1}, {-1, -8} } },
	[113] = { .set = { {8, -16}, {-2, -5}, {6, -3}, {-1, -8} } },
	[114] = { .set = { {5, -21}, {0, -7}, {7, -4}, {-2, -7} } },
	[115] = { .set = { {11, -15}, {1, -7}, {9, -3}, {0, -9} } },
	[116] = { .set = { {0, -12}, {4, -4}, {-5, -4}, {0, -7} } },
	[117] = { .set = { {0, -25}, {5, -5}, {-6, -5}, {0, -9} } },
	[118] = { .set = { {0, -17}, {5, -6}, {-6, -6}, {0, -9} } },
	[119] = { .set = { {-9, -16}, {1, -5}, {-7, -3}, {0, -8} } },
	[120] = { .set = { {-6, -21}, {-1, -7}, {-8, -4}, {1, -7} } },
	[121] = { .set = { {-12, -15}, {-2, -7}, {-10, -3}, {-1, -9} } },
	[122] = { .set = { {-13, -11}, {-8, -3}, {-7, 0}, {0, -8} } },
	[123] = { .set = { {-10, -19}, {-5, -6}, {-6, 0}, {2, -8} } },
	[124] = { .set = { {-11, -8}, {-6, -4}, {-6, 1}, {0, -8} } },
	[125] = { .set = { {-9, -6}, {-9, 0}, {-2, 2}, {0, -9} } },
	[126] = { .set = { {-11, -13}, {-7, 0}, {-5, 2}, {1, -8} } },
	[127] = { .set = { {-11, -3}, {-9, -1}, {-3, 4}, {-1, -8} } },
	[128] = { .set = { {-1, -4}, {-6, 1}, {5, 1}, {0, -9} } },
	[129] = { .set = { {-1, 0}, {-7, 1}, {6, 1}, {0, -9} } },
	[130] = { .set = { {-1, -13}, {-6, 1}, {5, 1}, {-1, -7} } },
	[131] = { .set = { {-1, -13}, {-6, 1}, {5, 1}, {-1, -7} } },
	[132] = { .set = { {-1, -13}, {-6, 1}, {5, 1}, {-1, -7} } },
	[133] = { .set = { {-1, -13}, {-6, 1}, {5, 1}, {-1, -7} } },
	[134] = { .set = { {8, -6}, {8, 0}, {1, 2}, {-1, -9} } },
	[135] = { .set = { {10, -3}, {8, -1}, {2, 4}, {0, -8} } },
	[136] = { .set = { {10, -14}, {8, 0}, {1, 2}, {-1, -9} } },
	[137] = { .set = { {10, -14}, {8, 0}, {1, 2}, {-1, -9} } },
	[138] = { .set = { {10, -14}, {8, 0}, {1, 2}, {-1, -9} } },
	[139] = { .set = { {10, -14}, {8, 0}, {1, 2}, {-1, -9} } },
	[140] = { .set = { {12, -11}, {7, -3}, {6, 0}, {-1, -8} } },
	[141] = { .set = { {10, -8}, {5, -4}, {5, 1}, {-1, -8} } },
	[142] = { .set = { {10, -19}, {7, -3}, {6, 0}, {-1, -10} } },
	[143] = { .set = { {10, -19}, {7, -3}, {6, 0}, {-1, -10} } },
	[144] = { .set = { {10, -19}, {7, -3}, {6, 0}, {-1, -10} } },
	[145] = { .set = { {10, -19}, {7, -3}, {6, 0}, {-1, -10} } },
	[146] = { .set = { {8, -16}, {-2, -5}, {6, -3}, {-1, -8} } },
	[147] = { .set = { {10, -14}, {0, -6}, {8, -2}, {-1, -8} } },
	[148] = { .set = { {5, -22}, {-1, -6}, {6, -3}, {-2, -7} } },
	[149] = { .set = { {5, -22}, {-1, -6}, {6, -3}, {-2, -7} } },
	[150] = { .set = { {5, -22}, {-1, -6}, {6, -3}, {-2, -7} } },
	[151] = { .set = { {5, -22}, {-1, -6}, {6, -3}, {-2, -7} } },
	[152] = { .set = { {0, -12}, {4, -4}, {-5, -4}, {0, -7} } },
	[153] = { .set = { {0, -17}, {5, -6}, {-6, -6}, {0, -9} } },
	[154] = { .set = { {0, -23}, {5, -3}, {-6, -3}, {0, -5} } },
	[155] = { .set = { {0, -23}, {5, -3}, {-6, -3}, {0, -5} } },
	[156] = { .set = { {0, -23}, {5, -3}, {-6, -3}, {0, -5} } },
	[157] = { .set = { {0, -23}, {5, -3}, {-6, -3}, {0, -5} } },
	[158] = { .set = { {-9, -16}, {1, -5}, {-7, -3}, {0, -8} } },
	[159] = { .set = { {-11, -14}, {-1, -6}, {-9, -2}, {0, -8} } },
	[160] = { .set = { {-6, -22}, {0, -6}, {-7, -3}, {1, -7} } },
	[161] = { .set = { {-6, -22}, {0, -6}, {-7, -3}, {1, -7} } },
	[162] = { .set = { {-6, -22}, {0, -6}, {-7, -3}, {1, -7} } },
	[163] = { .set = { {-6, -22}, {0, -6}, {-7, -3}, {1, -7} } },
	[164] = { .set = { {-13, -11}, {-8, -3}, {-7, 0}, {0, -8} } },
	[165] = { .set = { {-11, -8}, {-6, -4}, {-6, 1}, {0, -8} } },
	[166] = { .set = { {-11, -19}, {-8, -3}, {-7, 0}, {0, -10} } },
	[167] = { .set = { {-11, -19}, {-8, -3}, {-7, 0}, {0, -10} } },
	[168] = { .set = { {-11, -19}, {-8, -3}, {-7, 0}, {0, -10} } },
	[169] = { .set = { {-11, -19}, {-8, -3}, {-7, 0}, {0, -10} } },
	[170] = { .set = { {-9, -6}, {-9, 0}, {-2, 2}, {0, -9} } },
	[171] = { .set = { {-11, -3}, {-9, -1}, {-3, 4}, {-1, -8} } },
	[172] = { .set = { {-11, -14}, {-9, 0}, {-2, 2}, {0, -9} } },
	[173] = { .set = { {-11, -14}, {-9, 0}, {-2, 2}, {0, -9} } },
	[174] = { .set = { {-11, -14}, {-9, 0}, {-2, 2}, {0, -9} } },
	[175] = { .set = { {-11, -14}, {-9, 0}, {-2, 2}, {0, -9} } },
	[176] = { .set = { {-8, -2}, {-8, 1}, {-5, 2}, {0, -6} } },
	[177] = { .set = { {-8, -1}, {-8, 1}, {-5, 2}, {0, -5} } },
	[178] = { .set = { {0, -3}, {-6, 1}, {7, 1}, {1, -9} } },
	[179] = { .set = { {7, -3}, {12, -1}, {4, 3}, {-1, -7} } },
	[180] = { .set = { {7, -7}, {11, -3}, {8, 0}, {-2, -8} } },
	[181] = { .set = { {6, -11}, {0, -8}, {9, -4}, {-3, -6} } },
	[182] = { .set = { {0, -10}, {5, -5}, {-6, -5}, {0, -7} } },
	[183] = { .set = { {-7, -11}, {-1, -8}, {-10, -4}, {2, -6} } },
	[184] = { .set = { {-8, -7}, {-12, -3}, {-9, 0}, {1, -8} } },
	[185] = { .set = { {-8, -3}, {-13, -1}, {-5, 3}, {0, -7} } },
	[186] = { .set = { {-1, -4}, {-6, 1}, {5, 1}, {0, -9} } },
	[187] = { .set = { {-1, 0}, {-7, 1}, {6, 1}, {0, -9} } },
	[188] = { .set = { {-1, -13}, {-6, 1}, {5, 1}, {-1, -7} } },
	[189] = { .set = { {8, -6}, {8, 0}, {1, 2}, {-1, -9} } },
	[190] = { .set = { {10, -3}, {8, -1}, {2, 4}, {0, -8} } },
	[191] = { .set = { {10, -14}, {8, 0}, {1, 2}, {-1, -9} } },
	[192] = { .set = { {12, -11}, {7, -3}, {6, 0}, {-1, -8} } },
	[193] = { .set = { {10, -8}, {5, -4}, {5, 1}, {-1, -8} } },
	[194] = { .set = { {10, -19}, {7, -3}, {6, 0}, {-1, -10} } },
	[195] = { .set = { {8, -16}, {-2, -5}, {6, -3}, {-1, -8} } },
	[196] = { .set = { {10, -14}, {0, -6}, {8, -2}, {-1, -8} } },
	[197] = { .set = { {5, -22}, {-1, -6}, {6, -3}, {-2, -7} } },
	[198] = { .set = { {0, -12}, {4, -4}, {-5, -4}, {0, -7} } },
	[199] = { .set = { {0, -17}, {5, -6}, {-6, -6}, {0, -9} } },
	[200] = { .set = { {0, -23}, {5, -3}, {-6, -3}, {0, -5} } },
	[201] = { .set = { {-9, -16}, {1, -5}, {-7, -3}, {0, -8} } },
	[202] = { .set = { {-11, -14}, {-1, -6}, {-9, -2}, {0, -8} } },
	[203] = { .set = { {-6, -22}, {0, -6}, {-7, -3}, {1, -7} } },
	[204] = { .set = { {-13, -11}, {-8, -3}, {-7, 0}, {0, -8} } },
	[205] = { .set = { {-11, -8}, {-6, -4}, {-6, 1}, {0, -8} } },
	[206] = { .set = { {-11, -19}, {-8, -3}, {-7, 0}, {0, -10} } },
	[207] = { .set = { {-9, -6}, {-9, 0}, {-2, 2}, {0, -9} } },
	[208] = { .set = { {-11, -3}, {-9, -1}, {-3, 4}, {-1, -8} } },
	[209] = { .set = { {-11, -14}, {-9, 0}, {-2, 2}, {0, -9} } },
	[210] = { .set = { {-1, -4}, {-3, 2}, {2, 1}, {0, -13} } },
	[211] = { .set = { {-10, -6}, {-10, -2}, {-9, 0}, {-1, -13} } },
	[212] = { .set = { {-15, -12}, {-12, -6}, {-13, -4}, {1, -13} } },
	[213] = { .set = { {-11, -17}, {-9, -9}, {-12, -8}, {0, -13} } },
	[214] = { .set = { {0, -16}, {4, -17}, {-4, -17}, {0, -14} } },
	[215] = { .set = { {10, -17}, {8, -9}, {11, -8}, {-1, -13} } },
	[216] = { .set = { {14, -12}, {11, -6}, {12, -4}, {-2, -13} } },
	[217] = { .set = { {9, -6}, {9, -2}, {8, 0}, {0, -13} } },
	[218] = { .set = { {0, -13}, {-2, 0}, {2, 1}, {0, -8} } },
	[219] = { .set = { {10, -13}, {6, 0}, {4, 2}, {-2, -8} } },
	[220] = { .set = { {9, -19}, {4, -6}, {5, 0}, {-3, -8} } },
	[221] = { .set = { {5, -21}, {0, -7}, {7, -4}, {-2, -7} } },
	[222] = { .set = { {0, -25}, {5, -5}, {-6, -5}, {0, -9} } },
	[223] = { .set = { {-6, -21}, {-1, -7}, {-8, -4}, {1, -7} } },
	[224] = { .set = { {-10, -19}, {-5, -6}, {-6, 0}, {2, -8} } },
	[225] = { .set = { {-11, -13}, {-7, 0}, {-5, 2}, {1, -8} } },
	[226] = { .set = { {-1, -4}, {-6, 1}, {5, 1}, {0, -9} } },
	[227] = { .set = { {0, -13}, {-2, 0}, {2, 1}, {0, -8} } },
	[228] = { .set = { {8, -6}, {8, 0}, {1, 2}, {-1, -9} } },
	[229] = { .set = { {9, -13}, {5, 0}, {3, 2}, {-3, -8} } },
	[230] = { .set = { {12, -11}, {7, -3}, {6, 0}, {-1, -8} } },
	[231] = { .set = { {10, -19}, {5, -6}, {6, 0}, {-2, -8} } },
	[232] = { .set = { {8, -16}, {-2, -5}, {6, -3}, {-1, -8} } },
	[233] = { .set = { {6, -21}, {1, -7}, {8, -4}, {-1, -7} } },
	[234] = { .set = { {0, -12}, {4, -4}, {-5, -4}, {0, -7} } },
	[235] = { .set = { {0, -25}, {5, -5}, {-6, -5}, {0, -9} } },
	[236] = { .set = { {-9, -16}, {1, -5}, {-7, -3}, {0, -8} } },
	[237] = { .set = { {-7, -21}, {-2, -7}, {-9, -4}, {0, -7} } },
	[238] = { .set = { {-13, -11}, {-8, -3}, {-7, 0}, {0, -8} } },
	[239] = { .set = { {-11, -19}, {-6, -6}, {-7, 0}, {1, -8} } },
	[240] = { .set = { {-9, -6}, {-9, 0}, {-2, 2}, {0, -9} } },
	[241] = { .set = { {-10, -13}, {-6, 0}, {-4, 2}, {2, -8} } },
	[242] = { .set = { {-1, -4}, {-6, 1}, {5, 1}, {0, -9} } },
	[243] = { .set = { {-9, -6}, {-9, 0}, {-2, 2}, {0, -9} } },
	[244] = { .set = { {-13, -11}, {-8, -3}, {-7, 0}, {0, -8} } },
	[245] = { .set = { {-9, -16}, {1, -5}, {-7, -3}, {0, -8} } },
	[246] = { .set = { {0, -12}, {4, -4}, {-5, -4}, {0, -7} } },
	[247] = { .set = { {8, -16}, {-2, -5}, {6, -3}, {-1, -8} } },
	[248] = { .set = { {12, -11}, {7, -3}, {6, 0}, {-1, -8} } },
	[249] = { .set = { {8, -6}, {8, 0}, {1, 2}, {-1, -9} } },
	[250] = { .set = { {-1, -4}, {-6, 1}, {5, 1}, {0, -9} } },
	[251] = { .set = { {-9, -6}, {-9, 0}, {-2, 2}, {0, -9} } },
	[252] = { .set = { {-13, -11}, {-8, -3}, {-7, 0}, {0, -8} } },
	[253] = { .set = { {-9, -16}, {1, -5}, {-7, -3}, {0, -8} } },
	[254] = { .set = { {0, -12}, {4, -4}, {-5, -4}, {0, -7} } },
	[255] = { .set = { {8, -16}, {-2, -5}, {6, -3}, {-1, -8} } },
	[256] = { .set = { {12, -11}, {7, -3}, {6, 0}, {-1, -8} } },
	[257] = { .set = { {8, -6}, {8, 0}, {1, 2}, {-1, -9} } },
};

static const ax_anim *const sManectricAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sManectricAnimTable2[] = {
	AX_ANIM_PTR(sManectricAnims_2_1),
	AX_ANIM_PTR(sManectricAnims_2_2),
	AX_ANIM_PTR(sManectricAnims_2_3),
	AX_ANIM_PTR(sManectricAnims_2_4),
	AX_ANIM_PTR(sManectricAnims_2_5),
	AX_ANIM_PTR(sManectricAnims_2_6),
	AX_ANIM_PTR(sManectricAnims_2_7),
	AX_ANIM_PTR(sManectricAnims_2_8),
};

static const ax_anim *const sManectricAnimTable3[] = {
	AX_ANIM_PTR(sManectricAnims_3_1),
	AX_ANIM_PTR(sManectricAnims_3_2),
	AX_ANIM_PTR(sManectricAnims_3_3),
	AX_ANIM_PTR(sManectricAnims_3_4),
	AX_ANIM_PTR(sManectricAnims_3_5),
	AX_ANIM_PTR(sManectricAnims_3_6),
	AX_ANIM_PTR(sManectricAnims_3_7),
	AX_ANIM_PTR(sManectricAnims_3_8),
};

static const ax_anim *const sManectricAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_00186),
	AX_ANIM_PTR(gAxSharedAnim_00209),
	AX_ANIM_PTR(gAxSharedAnim_00240),
	AX_ANIM_PTR(gAxSharedAnim_00263),
	AX_ANIM_PTR(gAxSharedAnim_00296),
	AX_ANIM_PTR(gAxSharedAnim_00324),
	AX_ANIM_PTR(gAxSharedAnim_00347),
	AX_ANIM_PTR(gAxSharedAnim_00372),
};

static const ax_anim *const sManectricAnimTable5[] = {
	AX_ANIM_PTR(sManectricAnims_5_1),
	AX_ANIM_PTR(sManectricAnims_5_2),
	AX_ANIM_PTR(sManectricAnims_5_3),
	AX_ANIM_PTR(sManectricAnims_5_4),
	AX_ANIM_PTR(sManectricAnims_5_5),
	AX_ANIM_PTR(sManectricAnims_5_6),
	AX_ANIM_PTR(sManectricAnims_5_7),
	AX_ANIM_PTR(sManectricAnims_5_8),
};

static const ax_anim *const sManectricAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
	AX_ANIM_PTR(gAxSharedAnim_02378),
};

static const ax_anim *const sManectricAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00897),
	AX_ANIM_PTR(gAxSharedAnim_00910),
	AX_ANIM_PTR(gAxSharedAnim_00924),
	AX_ANIM_PTR(gAxSharedAnim_00935),
	AX_ANIM_PTR(gAxSharedAnim_00958),
	AX_ANIM_PTR(gAxSharedAnim_00970),
	AX_ANIM_PTR(gAxSharedAnim_00983),
	AX_ANIM_PTR(gAxSharedAnim_00999),
};

static const ax_anim *const sManectricAnimTable8[] = {
	AX_ANIM_PTR(sManectricAnims_8_1),
	AX_ANIM_PTR(sManectricAnims_8_2),
	AX_ANIM_PTR(sManectricAnims_8_3),
	AX_ANIM_PTR(sManectricAnims_8_4),
	AX_ANIM_PTR(sManectricAnims_8_5),
	AX_ANIM_PTR(sManectricAnims_8_6),
	AX_ANIM_PTR(sManectricAnims_8_7),
	AX_ANIM_PTR(sManectricAnims_8_8),
};

static const ax_anim *const sManectricAnimTable9[] = {
	AX_ANIM_PTR(sManectricAnims_9_1),
	AX_ANIM_PTR(sManectricAnims_9_2),
	AX_ANIM_PTR(sManectricAnims_9_3),
	AX_ANIM_PTR(sManectricAnims_9_4),
	AX_ANIM_PTR(sManectricAnims_9_5),
	AX_ANIM_PTR(sManectricAnims_9_6),
	AX_ANIM_PTR(sManectricAnims_9_7),
	AX_ANIM_PTR(sManectricAnims_9_8),
};

static const ax_anim *const sManectricAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01420),
	AX_ANIM_PTR(gAxSharedAnim_01427),
	AX_ANIM_PTR(gAxSharedAnim_01436),
	AX_ANIM_PTR(gAxSharedAnim_01442),
	AX_ANIM_PTR(gAxSharedAnim_01445),
	AX_ANIM_PTR(gAxSharedAnim_01455),
	AX_ANIM_PTR(gAxSharedAnim_01460),
	AX_ANIM_PTR(gAxSharedAnim_01465),
};

static const ax_anim *const sManectricAnimTable11[] = {
	AX_ANIM_PTR(sManectricAnims_11_1),
	AX_ANIM_PTR(gAxSharedAnim_01482),
	AX_ANIM_PTR(gAxSharedAnim_01494),
	AX_ANIM_PTR(gAxSharedAnim_01508),
	AX_ANIM_PTR(sManectricAnims_11_5),
	AX_ANIM_PTR(gAxSharedAnim_01534),
	AX_ANIM_PTR(gAxSharedAnim_01546),
	AX_ANIM_PTR(gAxSharedAnim_01575),
};

static const ax_anim *const sManectricAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01587),
	AX_ANIM_PTR(gAxSharedAnim_01627),
	AX_ANIM_PTR(gAxSharedAnim_01617),
	AX_ANIM_PTR(gAxSharedAnim_01610),
	AX_ANIM_PTR(gAxSharedAnim_01609),
	AX_ANIM_PTR(gAxSharedAnim_01603),
	AX_ANIM_PTR(gAxSharedAnim_01595),
	AX_ANIM_PTR(gAxSharedAnim_01588),
};

static const ax_anim *const sManectricAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01637),
	AX_ANIM_PTR(gAxSharedAnim_01670),
	AX_ANIM_PTR(gAxSharedAnim_01667),
	AX_ANIM_PTR(gAxSharedAnim_01663),
	AX_ANIM_PTR(gAxSharedAnim_01658),
	AX_ANIM_PTR(gAxSharedAnim_01653),
	AX_ANIM_PTR(gAxSharedAnim_01649),
	AX_ANIM_PTR(gAxSharedAnim_01644),
};

static const ax_anim *const *const sAxAnimationsManectric[] = {
	sManectricAnimTable1,
	sManectricAnimTable2,
	sManectricAnimTable3,
	sManectricAnimTable4,
	sManectricAnimTable5,
	sManectricAnimTable6,
	sManectricAnimTable7,
	sManectricAnimTable8,
	sManectricAnimTable9,
	sManectricAnimTable10,
	sManectricAnimTable11,
	sManectricAnimTable12,
	sManectricAnimTable13,
};

static const ax_sprite *const sAxSpritesManectric[] = {
	sManectricSprites1,
	sManectricSprites2,
	sManectricSprites3,
	sManectricSprites4,
	sManectricSprites5,
	sManectricSprites6,
	sManectricSprites7,
	sManectricSprites8,
	sManectricSprites9,
	sManectricSprites10,
	sManectricSprites11,
	sManectricSprites12,
	sManectricSprites13,
	sManectricSprites14,
	sManectricSprites15,
	sManectricSprites16,
	sManectricSprites17,
	sManectricSprites18,
	sManectricSprites19,
	sManectricSprites20,
	sManectricSprites21,
	sManectricSprites22,
	sManectricSprites23,
	sManectricSprites24,
	sManectricSprites25,
	sManectricSprites26,
	sManectricSprites27,
	sManectricSprites28,
	sManectricSprites29,
	sManectricSprites30,
	sManectricSprites31,
	sManectricSprites32,
	sManectricSprites33,
	sManectricSprites34,
	sManectricSprites35,
	sManectricSprites36,
	sManectricSprites37,
	sManectricSprites38,
	sManectricSprites39,
	sManectricSprites40,
	sManectricSprites41,
	sManectricSprites42,
	sManectricSprites43,
	sManectricSprites44,
	sManectricSprites45,
	sManectricSprites46,
	sManectricSprites47,
	sManectricSprites48,
	sManectricSprites49,
	sManectricSprites50,
	sManectricSprites51,
	sManectricSprites52,
	sManectricSprites53,
	sManectricSprites54,
	sManectricSprites55,
	sManectricSprites56,
	sManectricSprites57,
	sManectricSprites58,
	sManectricSprites59,
	sManectricSprites60,
	sManectricSprites61,
	sManectricSprites62,
	sManectricSprites63,
	sManectricSprites64,
	sManectricSprites65,
	sManectricSprites66,
	sManectricSprites67,
	sManectricSprites68,
	sManectricSprites69,
	sManectricSprites70,
	sManectricSprites71,
	sManectricSprites72,
	sManectricSprites73,
	sManectricSprites74,
	sManectricSprites75,
	sManectricSprites76,
	sManectricSprites77,
	sManectricSprites78,
	sManectricSprites79,
	sManectricSprites80,
	sManectricSprites81,
	sManectricSprites82,
};

static const axmain sAxMainManectric = {
	.poses = sAxPosesManectric,
	.animations = sAxAnimationsManectric,
	.animCount = ARRAY_COUNT(sAxAnimationsManectric),
	.spriteData = sAxSpritesManectric,
	.positions = sAxPositionsManectric,
};
