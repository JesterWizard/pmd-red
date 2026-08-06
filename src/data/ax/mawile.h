/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainMawile;
const SiroArchive gAxMawile = {"SIRO", &sAxMainMawile};

static const ax_pose sMawilePose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose12[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose13[] = {
	AX_POSE(12, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose14[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose15[] = {
	AX_POSE(14, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose16[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose17[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose18[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose21[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose22[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose23[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose24[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose28[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose32[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose36[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(225, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(18, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(19, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose40[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose44[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose48[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose52[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(24, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(18, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(19, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose56[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose60[] = {
	AX_POSE(22, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(23, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(24, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(25, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE(26, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose61[] = {
	AX_POSE(27, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose65[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(29, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(30, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(31, OAM1(211, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(6, 3, 5)),
	AX_POSE(32, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(7, 3, 5)),
	AX_POSE(33, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(11, 3, 5)),
	AX_POSE(34, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose66[] = {
	AX_POSE(35, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(36, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(37, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(38, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(11, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose70[] = {
	AX_POSE(39, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(40, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(41, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(42, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(224, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(11, 3, 5)),
	AX_POSE(43, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(44, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE(45, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(224, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE(46, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(17, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose71[] = {
	AX_POSE(47, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(48, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(217, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose75[] = {
	AX_POSE(49, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(50, OAM1(5, ST_OAM_H_RECTANGLE, 2), OAM2(228, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(51, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(52, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose76[] = {
	AX_POSE(53, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(54, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(55, OAM1(254, ST_OAM_V_RECTANGLE, 1), OAM2(229, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(56, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose80[] = {
	AX_POSE(57, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(58, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(59, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE(60, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(61, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose81[] = {
	AX_POSE(62, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose85[] = {
	AX_POSE(49, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(50, OAM1(5, ST_OAM_H_RECTANGLE, 2), OAM2(13, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(51, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(52, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose86[] = {
	AX_POSE(53, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(54, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(55, OAM1(254, ST_OAM_V_RECTANGLE, 1), OAM2(20, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(56, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose90[] = {
	AX_POSE(39, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(40, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(41, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(18, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(10, 3, 5)),
	AX_POSE(42, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(26, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(11, 3, 5)),
	AX_POSE(43, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(26, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE(44, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE(45, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(26, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE(46, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(18, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(17, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose91[] = {
	AX_POSE(47, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(48, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(24, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose95[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(29, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(4, 3, 5)),
	AX_POSE(30, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(5, 3, 5)),
	AX_POSE(31, OAM1(211, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(6, 3, 5)),
	AX_POSE(32, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(7, 3, 5)),
	AX_POSE(33, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(11, 3, 5)),
	AX_POSE(34, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose96[] = {
	AX_POSE(35, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(36, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(37, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(38, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(23, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(11, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose116[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose137[] = {
	AX_POSE(63, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose138[] = {
	AX_POSE(64, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose139[] = {
	AX_POSE(65, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(66, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(1, 3, 5)),
	AX_POSE(67, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose140[] = {
	AX_POSE(68, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(69, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(70, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE(71, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(11, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose141[] = {
	AX_POSE(72, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose142[] = {
	AX_POSE(73, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose143[] = {
	AX_POSE(74, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose144[] = {
	AX_POSE(73, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose145[] = {
	AX_POSE(72, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose146[] = {
	AX_POSE(68, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(69, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(70, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE(71, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(11, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose165[] = {
	AX_POSE(14, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose180[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose181[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(21, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(18, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(19, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose182[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose184[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose185[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(227, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(18, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(19, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose186[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose199[] = {
	AX_POSE(35, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(36, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(37, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(38, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(228, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(11, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose209[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose210[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose211[] = {
	AX_POSE(53, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(54, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(55, OAM1(254, ST_OAM_V_RECTANGLE, 1), OAM2(19, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(56, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose212[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose213[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose214[] = {
	AX_POSE(47, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(48, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(23, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose215[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(23, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(18, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(19, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose216[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose217[] = {
	AX_POSE(35, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(36, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(37, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(38, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(20, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(11, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMawilePose218[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sMawileAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_2_2.lz");
static const u8 sMawileAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_2_3.lz");
static const u8 sMawileAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_2_4.lz");
static const u8 sMawileAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_2_5.lz");
static const u8 sMawileAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_2_6.lz");
static const u8 sMawileAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_2_7.lz");
static const u8 sMawileAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_2_8.lz");
static const u8 sMawileAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_3_1.lz");
static const u8 sMawileAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_3_2.lz");
static const u8 sMawileAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_3_3.lz");
static const u8 sMawileAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_3_4.lz");
static const u8 sMawileAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_3_5.lz");
static const u8 sMawileAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_3_6.lz");
static const u8 sMawileAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_3_7.lz");
static const u8 sMawileAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_3_8.lz");
static const u8 sMawileAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_4_1.lz");
static const u8 sMawileAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_4_2.lz");
static const u8 sMawileAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_4_3.lz");
static const u8 sMawileAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_4_4.lz");
static const u8 sMawileAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_4_5.lz");
static const u8 sMawileAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_4_6.lz");
static const u8 sMawileAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_4_7.lz");
static const u8 sMawileAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_4_8.lz");
static const u8 sMawileAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_8_1.lz");
static const u8 sMawileAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_8_2.lz");
static const u8 sMawileAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_8_3.lz");
static const u8 sMawileAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_8_4.lz");
static const u8 sMawileAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_8_5.lz");
static const u8 sMawileAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_8_6.lz");
static const u8 sMawileAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_8_7.lz");
static const u8 sMawileAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_8_8.lz");
static const u8 sMawileAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_9_1.lz");
static const u8 sMawileAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_9_2.lz");
static const u8 sMawileAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_9_3.lz");
static const u8 sMawileAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_9_4.lz");
static const u8 sMawileAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_9_5.lz");
static const u8 sMawileAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_9_6.lz");
static const u8 sMawileAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_9_7.lz");
static const u8 sMawileAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_9_8.lz");
static const u8 sMawileAnims_10_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_10_8.lz");
static const u8 sMawileAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_11_1.lz");
static const u8 sMawileAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_11_2.lz");
static const u8 sMawileAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_11_3.lz");
static const u8 sMawileAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_11_4.lz");
static const u8 sMawileAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_11_5.lz");
static const u8 sMawileAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_11_6.lz");
static const u8 sMawileAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_11_7.lz");
static const u8 sMawileAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/mawile/sMawileAnims_11_8.lz");

static const u8 sMawileGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_1.4bpp.lz");
static const ax_sprite sMawileSprites1[] = {
	{sMawileGfx1, ARRAY_COUNT(sMawileGfx1)}, 
	{NULL, 0}
};
static const u8 sMawileGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_2.4bpp.lz");
static const ax_sprite sMawileSprites2[] = {
	{sMawileGfx2, ARRAY_COUNT(sMawileGfx2)}, 
	{NULL, 0}
};
static const u8 sMawileGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_3.4bpp.lz");
static const ax_sprite sMawileSprites3[] = {
	{sMawileGfx3, ARRAY_COUNT(sMawileGfx3)}, 
	{NULL, 0}
};
static const u8 sMawileGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_4.4bpp.lz");
static const ax_sprite sMawileSprites4[] = {
	{sMawileGfx4, ARRAY_COUNT(sMawileGfx4)}, 
	{NULL, 0}
};
static const u8 sMawileGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_5.4bpp.lz");
static const ax_sprite sMawileSprites5[] = {
	{sMawileGfx5, ARRAY_COUNT(sMawileGfx5)}, 
	{NULL, 0}
};
static const u8 sMawileGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_6.4bpp.lz");
static const ax_sprite sMawileSprites6[] = {
	{sMawileGfx6, ARRAY_COUNT(sMawileGfx6)}, 
	{NULL, 0}
};
static const u8 sMawileGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_7.4bpp.lz");
static const ax_sprite sMawileSprites7[] = {
	{sMawileGfx7, ARRAY_COUNT(sMawileGfx7)}, 
	{NULL, 0}
};
static const u8 sMawileGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_8.4bpp.lz");
static const ax_sprite sMawileSprites8[] = {
	{sMawileGfx8, ARRAY_COUNT(sMawileGfx8)}, 
	{NULL, 0}
};
static const u8 sMawileGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_9.4bpp.lz");
static const ax_sprite sMawileSprites9[] = {
	{sMawileGfx9, ARRAY_COUNT(sMawileGfx9)}, 
	{NULL, 0}
};
static const u8 sMawileGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_10.4bpp.lz");
static const ax_sprite sMawileSprites10[] = {
	{sMawileGfx10, ARRAY_COUNT(sMawileGfx10)}, 
	{NULL, 0}
};
static const u8 sMawileGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_11.4bpp.lz");
static const ax_sprite sMawileSprites11[] = {
	{sMawileGfx11, ARRAY_COUNT(sMawileGfx11)}, 
	{NULL, 0}
};
static const u8 sMawileGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_12.4bpp.lz");
static const ax_sprite sMawileSprites12[] = {
	{sMawileGfx12, ARRAY_COUNT(sMawileGfx12)}, 
	{NULL, 0}
};
static const u8 sMawileGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_13.4bpp.lz");
static const ax_sprite sMawileSprites13[] = {
	{sMawileGfx13, ARRAY_COUNT(sMawileGfx13)}, 
	{NULL, 0}
};
static const u8 sMawileGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_14.4bpp.lz");
static const ax_sprite sMawileSprites14[] = {
	{sMawileGfx14, ARRAY_COUNT(sMawileGfx14)}, 
	{NULL, 0}
};
static const u8 sMawileGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_15.4bpp.lz");
static const ax_sprite sMawileSprites15[] = {
	{sMawileGfx15, ARRAY_COUNT(sMawileGfx15)}, 
	{NULL, 0}
};
static const u8 sMawileGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_16.4bpp.lz");
static const u8 sMawileGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_16_1.4bpp.lz");
static const u8 sMawileGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_16_2.4bpp.lz");
static const u8 sMawileGfx16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_16_3.4bpp.lz");
static const ax_sprite sMawileSprites16[] = {
	{sMawileGfx16, ARRAY_COUNT(sMawileGfx16)}, 
	{NULL, 32}, 
	{sMawileGfx16_1, ARRAY_COUNT(sMawileGfx16_1)}, 
	{NULL, 32}, 
	{sMawileGfx16_2, ARRAY_COUNT(sMawileGfx16_2)}, 
	{NULL, 32}, 
	{sMawileGfx16_3, ARRAY_COUNT(sMawileGfx16_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMawileGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_17.4bpp.lz");
static const ax_sprite sMawileSprites17[] = {
	{NULL, 32}, 
	{sMawileGfx17, ARRAY_COUNT(sMawileGfx17)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMawileGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_18.4bpp.lz");
static const ax_sprite sMawileSprites18[] = {
	{sMawileGfx18, ARRAY_COUNT(sMawileGfx18)}, 
	{NULL, 0}
};
static const u8 sMawileGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_19.4bpp.lz");
static const ax_sprite sMawileSprites19[] = {
	{sMawileGfx19, ARRAY_COUNT(sMawileGfx19)}, 
	{NULL, 0}
};
static const u8 sMawileGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_20.4bpp.lz");
static const ax_sprite sMawileSprites20[] = {
	{sMawileGfx20, ARRAY_COUNT(sMawileGfx20)}, 
	{NULL, 0}
};
static const u8 sMawileGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_21.4bpp.lz");
static const u8 sMawileGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_21_1.4bpp.lz");
static const u8 sMawileGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_21_2.4bpp.lz");
static const ax_sprite sMawileSprites21[] = {
	{NULL, 32}, 
	{sMawileGfx21, ARRAY_COUNT(sMawileGfx21)}, 
	{NULL, 32}, 
	{sMawileGfx21_1, ARRAY_COUNT(sMawileGfx21_1)}, 
	{NULL, 32}, 
	{sMawileGfx21_2, ARRAY_COUNT(sMawileGfx21_2)}, 
	{NULL, 0}
};
static const u8 sMawileGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_22.4bpp.lz");
static const u8 sMawileGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_22_1.4bpp.lz");
static const u8 sMawileGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_22_2.4bpp.lz");
static const u8 sMawileGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_22_3.4bpp.lz");
static const ax_sprite sMawileSprites22[] = {
	{NULL, 32}, 
	{sMawileGfx22, ARRAY_COUNT(sMawileGfx22)}, 
	{NULL, 32}, 
	{sMawileGfx22_1, ARRAY_COUNT(sMawileGfx22_1)}, 
	{NULL, 32}, 
	{sMawileGfx22_2, ARRAY_COUNT(sMawileGfx22_2)}, 
	{NULL, 32}, 
	{sMawileGfx22_3, ARRAY_COUNT(sMawileGfx22_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMawileGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_23.4bpp.lz");
static const u8 sMawileGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_23_1.4bpp.lz");
static const ax_sprite sMawileSprites23[] = {
	{sMawileGfx23, ARRAY_COUNT(sMawileGfx23)}, 
	{NULL, 32}, 
	{sMawileGfx23_1, ARRAY_COUNT(sMawileGfx23_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMawileGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_24.4bpp.lz");
static const u8 sMawileGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_24_1.4bpp.lz");
static const ax_sprite sMawileSprites24[] = {
	{NULL, 32}, 
	{sMawileGfx24, ARRAY_COUNT(sMawileGfx24)}, 
	{NULL, 32}, 
	{sMawileGfx24_1, ARRAY_COUNT(sMawileGfx24_1)}, 
	{NULL, 0}
};
static const u8 sMawileGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_25.4bpp.lz");
static const ax_sprite sMawileSprites25[] = {
	{sMawileGfx25, ARRAY_COUNT(sMawileGfx25)}, 
	{NULL, 0}
};
static const u8 sMawileGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_26.4bpp.lz");
static const ax_sprite sMawileSprites26[] = {
	{sMawileGfx26, ARRAY_COUNT(sMawileGfx26)}, 
	{NULL, 0}
};
static const u8 sMawileGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_27.4bpp.lz");
static const ax_sprite sMawileSprites27[] = {
	{sMawileGfx27, ARRAY_COUNT(sMawileGfx27)}, 
	{NULL, 0}
};
static const u8 sMawileGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_28.4bpp.lz");
static const u8 sMawileGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_28_1.4bpp.lz");
static const u8 sMawileGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_28_2.4bpp.lz");
static const ax_sprite sMawileSprites28[] = {
	{NULL, 160}, 
	{sMawileGfx28, ARRAY_COUNT(sMawileGfx28)}, 
	{NULL, 32}, 
	{sMawileGfx28_1, ARRAY_COUNT(sMawileGfx28_1)}, 
	{NULL, 32}, 
	{sMawileGfx28_2, ARRAY_COUNT(sMawileGfx28_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMawileGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_29.4bpp.lz");
static const ax_sprite sMawileSprites29[] = {
	{sMawileGfx29, ARRAY_COUNT(sMawileGfx29)}, 
	{NULL, 0}
};
static const u8 sMawileGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_30.4bpp.lz");
static const ax_sprite sMawileSprites30[] = {
	{sMawileGfx30, ARRAY_COUNT(sMawileGfx30)}, 
	{NULL, 0}
};
static const u8 sMawileGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_31.4bpp.lz");
static const ax_sprite sMawileSprites31[] = {
	{sMawileGfx31, ARRAY_COUNT(sMawileGfx31)}, 
	{NULL, 0}
};
static const u8 sMawileGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_32.4bpp.lz");
static const ax_sprite sMawileSprites32[] = {
	{sMawileGfx32, ARRAY_COUNT(sMawileGfx32)}, 
	{NULL, 0}
};
static const u8 sMawileGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_33.4bpp.lz");
static const ax_sprite sMawileSprites33[] = {
	{sMawileGfx33, ARRAY_COUNT(sMawileGfx33)}, 
	{NULL, 0}
};
static const u8 sMawileGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_34.4bpp.lz");
static const ax_sprite sMawileSprites34[] = {
	{sMawileGfx34, ARRAY_COUNT(sMawileGfx34)}, 
	{NULL, 0}
};
static const u8 sMawileGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_35.4bpp.lz");
static const ax_sprite sMawileSprites35[] = {
	{sMawileGfx35, ARRAY_COUNT(sMawileGfx35)}, 
	{NULL, 0}
};
static const u8 sMawileGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_36.4bpp.lz");
static const u8 sMawileGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_36_1.4bpp.lz");
static const ax_sprite sMawileSprites36[] = {
	{sMawileGfx36, ARRAY_COUNT(sMawileGfx36)}, 
	{NULL, 64}, 
	{sMawileGfx36_1, ARRAY_COUNT(sMawileGfx36_1)}, 
	{NULL, 0}
};
static const u8 sMawileGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_37.4bpp.lz");
static const ax_sprite sMawileSprites37[] = {
	{sMawileGfx37, ARRAY_COUNT(sMawileGfx37)}, 
	{NULL, 0}
};
static const u8 sMawileGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_38.4bpp.lz");
static const ax_sprite sMawileSprites38[] = {
	{sMawileGfx38, ARRAY_COUNT(sMawileGfx38)}, 
	{NULL, 0}
};
static const u8 sMawileGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_39.4bpp.lz");
static const ax_sprite sMawileSprites39[] = {
	{sMawileGfx39, ARRAY_COUNT(sMawileGfx39)}, 
	{NULL, 0}
};
static const u8 sMawileGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_40.4bpp.lz");
static const ax_sprite sMawileSprites40[] = {
	{sMawileGfx40, ARRAY_COUNT(sMawileGfx40)}, 
	{NULL, 0}
};
static const u8 sMawileGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_41.4bpp.lz");
static const ax_sprite sMawileSprites41[] = {
	{sMawileGfx41, ARRAY_COUNT(sMawileGfx41)}, 
	{NULL, 0}
};
static const u8 sMawileGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_42.4bpp.lz");
static const ax_sprite sMawileSprites42[] = {
	{sMawileGfx42, ARRAY_COUNT(sMawileGfx42)}, 
	{NULL, 0}
};
static const u8 sMawileGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_43.4bpp.lz");
static const ax_sprite sMawileSprites43[] = {
	{sMawileGfx43, ARRAY_COUNT(sMawileGfx43)}, 
	{NULL, 0}
};
static const u8 sMawileGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_44.4bpp.lz");
static const ax_sprite sMawileSprites44[] = {
	{sMawileGfx44, ARRAY_COUNT(sMawileGfx44)}, 
	{NULL, 0}
};
static const u8 sMawileGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_45.4bpp.lz");
static const ax_sprite sMawileSprites45[] = {
	{sMawileGfx45, ARRAY_COUNT(sMawileGfx45)}, 
	{NULL, 0}
};
static const u8 sMawileGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_46.4bpp.lz");
static const ax_sprite sMawileSprites46[] = {
	{sMawileGfx46, ARRAY_COUNT(sMawileGfx46)}, 
	{NULL, 0}
};
static const u8 sMawileGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_47.4bpp.lz");
static const ax_sprite sMawileSprites47[] = {
	{sMawileGfx47, ARRAY_COUNT(sMawileGfx47)}, 
	{NULL, 0}
};
static const u8 sMawileGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_48.4bpp.lz");
static const ax_sprite sMawileSprites48[] = {
	{sMawileGfx48, ARRAY_COUNT(sMawileGfx48)}, 
	{NULL, 0}
};
static const u8 sMawileGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_49.4bpp.lz");
static const ax_sprite sMawileSprites49[] = {
	{sMawileGfx49, ARRAY_COUNT(sMawileGfx49)}, 
	{NULL, 0}
};
static const u8 sMawileGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_50.4bpp.lz");
static const ax_sprite sMawileSprites50[] = {
	{sMawileGfx50, ARRAY_COUNT(sMawileGfx50)}, 
	{NULL, 0}
};
static const u8 sMawileGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_51.4bpp.lz");
static const ax_sprite sMawileSprites51[] = {
	{sMawileGfx51, ARRAY_COUNT(sMawileGfx51)}, 
	{NULL, 0}
};
static const u8 sMawileGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_52.4bpp.lz");
static const ax_sprite sMawileSprites52[] = {
	{sMawileGfx52, ARRAY_COUNT(sMawileGfx52)}, 
	{NULL, 0}
};
static const u8 sMawileGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_53.4bpp.lz");
static const ax_sprite sMawileSprites53[] = {
	{sMawileGfx53, ARRAY_COUNT(sMawileGfx53)}, 
	{NULL, 0}
};
static const u8 sMawileGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_54.4bpp.lz");
static const ax_sprite sMawileSprites54[] = {
	{sMawileGfx54, ARRAY_COUNT(sMawileGfx54)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMawileGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_55.4bpp.lz");
static const ax_sprite sMawileSprites55[] = {
	{NULL, 32}, 
	{sMawileGfx55, ARRAY_COUNT(sMawileGfx55)}, 
	{NULL, 0}
};
static const u8 sMawileGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_56.4bpp.lz");
static const ax_sprite sMawileSprites56[] = {
	{sMawileGfx56, ARRAY_COUNT(sMawileGfx56)}, 
	{NULL, 0}
};
static const u8 sMawileGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_57.4bpp.lz");
static const ax_sprite sMawileSprites57[] = {
	{sMawileGfx57, ARRAY_COUNT(sMawileGfx57)}, 
	{NULL, 0}
};
static const u8 sMawileGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_58.4bpp.lz");
static const u8 sMawileGfx58_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_58_1.4bpp.lz");
static const ax_sprite sMawileSprites58[] = {
	{NULL, 32}, 
	{sMawileGfx58, ARRAY_COUNT(sMawileGfx58)}, 
	{NULL, 32}, 
	{sMawileGfx58_1, ARRAY_COUNT(sMawileGfx58_1)}, 
	{NULL, 0}
};
static const u8 sMawileGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_59.4bpp.lz");
static const ax_sprite sMawileSprites59[] = {
	{sMawileGfx59, ARRAY_COUNT(sMawileGfx59)}, 
	{NULL, 0}
};
static const u8 sMawileGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_60.4bpp.lz");
static const ax_sprite sMawileSprites60[] = {
	{NULL, 32}, 
	{sMawileGfx60, ARRAY_COUNT(sMawileGfx60)}, 
	{NULL, 0}
};
static const u8 sMawileGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_61.4bpp.lz");
static const ax_sprite sMawileSprites61[] = {
	{sMawileGfx61, ARRAY_COUNT(sMawileGfx61)}, 
	{NULL, 0}
};
static const u8 sMawileGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_62.4bpp.lz");
static const ax_sprite sMawileSprites62[] = {
	{sMawileGfx62, ARRAY_COUNT(sMawileGfx62)}, 
	{NULL, 0}
};
static const u8 sMawileGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_63.4bpp.lz");
static const u8 sMawileGfx63_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_63_1.4bpp.lz");
static const u8 sMawileGfx63_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_63_2.4bpp.lz");
static const ax_sprite sMawileSprites63[] = {
	{NULL, 192}, 
	{sMawileGfx63, ARRAY_COUNT(sMawileGfx63)}, 
	{NULL, 32}, 
	{sMawileGfx63_1, ARRAY_COUNT(sMawileGfx63_1)}, 
	{NULL, 32}, 
	{sMawileGfx63_2, ARRAY_COUNT(sMawileGfx63_2)}, 
	{NULL, 0}
};
static const u8 sMawileGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_64.4bpp.lz");
static const ax_sprite sMawileSprites64[] = {
	{sMawileGfx64, ARRAY_COUNT(sMawileGfx64)}, 
	{NULL, 0}
};
static const u8 sMawileGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_65.4bpp.lz");
static const ax_sprite sMawileSprites65[] = {
	{sMawileGfx65, ARRAY_COUNT(sMawileGfx65)}, 
	{NULL, 0}
};
static const u8 sMawileGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_66.4bpp.lz");
static const ax_sprite sMawileSprites66[] = {
	{sMawileGfx66, ARRAY_COUNT(sMawileGfx66)}, 
	{NULL, 0}
};
static const u8 sMawileGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_67.4bpp.lz");
static const ax_sprite sMawileSprites67[] = {
	{sMawileGfx67, ARRAY_COUNT(sMawileGfx67)}, 
	{NULL, 0}
};
static const u8 sMawileGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_68.4bpp.lz");
static const ax_sprite sMawileSprites68[] = {
	{sMawileGfx68, ARRAY_COUNT(sMawileGfx68)}, 
	{NULL, 0}
};
static const u8 sMawileGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_69.4bpp.lz");
static const ax_sprite sMawileSprites69[] = {
	{sMawileGfx69, ARRAY_COUNT(sMawileGfx69)}, 
	{NULL, 0}
};
static const u8 sMawileGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_70.4bpp.lz");
static const ax_sprite sMawileSprites70[] = {
	{sMawileGfx70, ARRAY_COUNT(sMawileGfx70)}, 
	{NULL, 0}
};
static const u8 sMawileGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_71.4bpp.lz");
static const ax_sprite sMawileSprites71[] = {
	{sMawileGfx71, ARRAY_COUNT(sMawileGfx71)}, 
	{NULL, 0}
};
static const u8 sMawileGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_72.4bpp.lz");
static const ax_sprite sMawileSprites72[] = {
	{sMawileGfx72, ARRAY_COUNT(sMawileGfx72)}, 
	{NULL, 0}
};
static const u8 sMawileGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_73.4bpp.lz");
static const ax_sprite sMawileSprites73[] = {
	{sMawileGfx73, ARRAY_COUNT(sMawileGfx73)}, 
	{NULL, 0}
};
static const u8 sMawileGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_74.4bpp.lz");
static const ax_sprite sMawileSprites74[] = {
	{sMawileGfx74, ARRAY_COUNT(sMawileGfx74)}, 
	{NULL, 0}
};
static const u8 sMawileGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/mawile/sprite_75.4bpp.lz");
static const ax_sprite sMawileSprites75[] = {
	{sMawileGfx75, ARRAY_COUNT(sMawileGfx75)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMawile[] = {
	sMawilePose1,
	sMawilePose2,
	sMawilePose3,
	sMawilePose4,
	sMawilePose5,
	sMawilePose6,
	sMawilePose7,
	sMawilePose8,
	sMawilePose9,
	sMawilePose10,
	sMawilePose11,
	sMawilePose12,
	sMawilePose13,
	sMawilePose14,
	sMawilePose15,
	sMawilePose16,
	sMawilePose17,
	sMawilePose18,
	sMawilePose19,
	sMawilePose20,
	sMawilePose21,
	sMawilePose22,
	sMawilePose23,
	sMawilePose24,
	sMawilePose1,
	sMawilePose2,
	sMawilePose3,
	sMawilePose28,
	sMawilePose4,
	sMawilePose5,
	sMawilePose6,
	sMawilePose32,
	sMawilePose7,
	sMawilePose8,
	sMawilePose9,
	sMawilePose36,
	sMawilePose10,
	sMawilePose11,
	sMawilePose12,
	sMawilePose40,
	sMawilePose13,
	sMawilePose14,
	sMawilePose15,
	sMawilePose44,
	sMawilePose16,
	sMawilePose17,
	sMawilePose18,
	sMawilePose48,
	sMawilePose19,
	sMawilePose20,
	sMawilePose21,
	sMawilePose52,
	sMawilePose22,
	sMawilePose23,
	sMawilePose24,
	sMawilePose56,
	sMawilePose1,
	sMawilePose2,
	sMawilePose3,
	sMawilePose60,
	sMawilePose61,
	sMawilePose4,
	sMawilePose5,
	sMawilePose6,
	sMawilePose65,
	sMawilePose66,
	sMawilePose7,
	sMawilePose8,
	sMawilePose9,
	sMawilePose70,
	sMawilePose71,
	sMawilePose10,
	sMawilePose11,
	sMawilePose12,
	sMawilePose75,
	sMawilePose76,
	sMawilePose13,
	sMawilePose14,
	sMawilePose15,
	sMawilePose80,
	sMawilePose81,
	sMawilePose16,
	sMawilePose17,
	sMawilePose18,
	sMawilePose85,
	sMawilePose86,
	sMawilePose19,
	sMawilePose20,
	sMawilePose21,
	sMawilePose90,
	sMawilePose91,
	sMawilePose22,
	sMawilePose23,
	sMawilePose24,
	sMawilePose95,
	sMawilePose96,
	sMawilePose1,
	sMawilePose2,
	sMawilePose3,
	sMawilePose28,
	sMawilePose4,
	sMawilePose5,
	sMawilePose6,
	sMawilePose32,
	sMawilePose7,
	sMawilePose8,
	sMawilePose9,
	sMawilePose36,
	sMawilePose10,
	sMawilePose11,
	sMawilePose12,
	sMawilePose40,
	sMawilePose13,
	sMawilePose14,
	sMawilePose15,
	sMawilePose116,
	sMawilePose16,
	sMawilePose17,
	sMawilePose18,
	sMawilePose48,
	sMawilePose19,
	sMawilePose20,
	sMawilePose21,
	sMawilePose52,
	sMawilePose22,
	sMawilePose23,
	sMawilePose24,
	sMawilePose56,
	sMawilePose1,
	sMawilePose22,
	sMawilePose19,
	sMawilePose16,
	sMawilePose13,
	sMawilePose10,
	sMawilePose7,
	sMawilePose4,
	sMawilePose137,
	sMawilePose138,
	sMawilePose139,
	sMawilePose140,
	sMawilePose141,
	sMawilePose142,
	sMawilePose143,
	sMawilePose144,
	sMawilePose145,
	sMawilePose146,
	sMawilePose1,
	sMawilePose2,
	sMawilePose3,
	sMawilePose28,
	sMawilePose4,
	sMawilePose5,
	sMawilePose6,
	sMawilePose32,
	sMawilePose7,
	sMawilePose8,
	sMawilePose9,
	sMawilePose36,
	sMawilePose10,
	sMawilePose11,
	sMawilePose12,
	sMawilePose40,
	sMawilePose13,
	sMawilePose14,
	sMawilePose165,
	sMawilePose116,
	sMawilePose16,
	sMawilePose17,
	sMawilePose18,
	sMawilePose48,
	sMawilePose19,
	sMawilePose20,
	sMawilePose21,
	sMawilePose52,
	sMawilePose22,
	sMawilePose23,
	sMawilePose24,
	sMawilePose56,
	sMawilePose28,
	sMawilePose180,
	sMawilePose181,
	sMawilePose182,
	sMawilePose44,
	sMawilePose184,
	sMawilePose185,
	sMawilePose186,
	sMawilePose28,
	sMawilePose180,
	sMawilePose181,
	sMawilePose182,
	sMawilePose44,
	sMawilePose184,
	sMawilePose185,
	sMawilePose186,
	sMawilePose1,
	sMawilePose61,
	sMawilePose28,
	sMawilePose4,
	sMawilePose199,
	sMawilePose32,
	sMawilePose7,
	sMawilePose71,
	sMawilePose36,
	sMawilePose10,
	sMawilePose76,
	sMawilePose40,
	sMawilePose13,
	sMawilePose81,
	sMawilePose209,
	sMawilePose210,
	sMawilePose211,
	sMawilePose212,
	sMawilePose213,
	sMawilePose214,
	sMawilePose215,
	sMawilePose216,
	sMawilePose217,
	sMawilePose218,
	sMawilePose28,
	sMawilePose180,
	sMawilePose181,
	sMawilePose182,
	sMawilePose44,
	sMawilePose184,
	sMawilePose185,
	sMawilePose186,
	sMawilePose1,
	sMawilePose22,
	sMawilePose19,
	sMawilePose16,
	sMawilePose13,
	sMawilePose10,
	sMawilePose7,
	sMawilePose4,
};

static const struct PositionSets sAxPositionsMawile[] = {
	[0] = { .set = { {0, -7}, {-7, -4}, {7, -4}, {0, -6} } },
	[1] = { .set = { {0, -6}, {-6, -3}, {6, -1}, {0, -5} } },
	[2] = { .set = { {0, -6}, {-6, -1}, {6, -3}, {0, -5} } },
	[3] = { .set = { {2, -7}, {6, -6}, {-6, -2}, {1, -6} } },
	[4] = { .set = { {2, -6}, {5, -5}, {-4, 0}, {1, -5} } },
	[5] = { .set = { {2, -6}, {7, -3}, {-6, -3}, {1, -5} } },
	[6] = { .set = { {3, -7}, {0, -4}, {0, -1}, {1, -6} } },
	[7] = { .set = { {3, -6}, {-2, -3}, {3, 0}, {0, -5} } },
	[8] = { .set = { {3, -6}, {6, -3}, {-3, -1}, {0, -5} } },
	[9] = { .set = { {3, -8}, {-5, -6}, {6, -2}, {0, -7} } },
	[10] = { .set = { {3, -7}, {-8, -3}, {6, -3}, {0, -6} } },
	[11] = { .set = { {3, -7}, {0, -5}, {2, -1}, {0, -6} } },
	[12] = { .set = { {-1, -12}, {7, -4}, {-7, -4}, {0, -7} } },
	[13] = { .set = { {0, -11}, {7, -2}, {-7, -5}, {1, -6} } },
	[14] = { .set = { {0, -11}, {7, -5}, {-7, -2}, {-1, -6} } },
	[15] = { .set = { {-3, -8}, {5, -6}, {-6, -2}, {0, -7} } },
	[16] = { .set = { {-3, -7}, {8, -3}, {-6, -3}, {0, -6} } },
	[17] = { .set = { {-3, -7}, {0, -5}, {-2, -1}, {0, -6} } },
	[18] = { .set = { {-3, -7}, {0, -4}, {0, -1}, {-1, -6} } },
	[19] = { .set = { {-3, -6}, {2, -3}, {-3, 0}, {0, -5} } },
	[20] = { .set = { {-3, -6}, {-6, -3}, {3, -1}, {0, -5} } },
	[21] = { .set = { {-2, -7}, {-6, -6}, {6, -2}, {-1, -6} } },
	[22] = { .set = { {-2, -6}, {-5, -5}, {4, 0}, {-1, -5} } },
	[23] = { .set = { {-2, -6}, {-7, -3}, {6, -3}, {-1, -5} } },
	[24] = { .set = { {0, -7}, {-7, -4}, {7, -4}, {0, -6} } },
	[25] = { .set = { {0, -6}, {-6, -3}, {6, -1}, {0, -5} } },
	[26] = { .set = { {0, -6}, {-6, -1}, {6, -3}, {0, -5} } },
	[27] = { .set = { {0, -4}, {-7, -2}, {7, -2}, {0, -5} } },
	[28] = { .set = { {2, -7}, {6, -6}, {-6, -2}, {1, -6} } },
	[29] = { .set = { {2, -6}, {5, -5}, {-4, 0}, {1, -5} } },
	[30] = { .set = { {2, -6}, {7, -3}, {-6, -3}, {1, -5} } },
	[31] = { .set = { {2, -5}, {5, -2}, {-5, -1}, {-1, -5} } },
	[32] = { .set = { {3, -7}, {0, -4}, {0, -1}, {1, -6} } },
	[33] = { .set = { {3, -6}, {-2, -3}, {3, 0}, {0, -5} } },
	[34] = { .set = { {3, -6}, {6, -3}, {-3, -1}, {0, -5} } },
	[35] = { .set = { {5, -6}, {3, 0}, {3, -2}, {2, -5} } },
	[36] = { .set = { {3, -8}, {-5, -6}, {6, -2}, {0, -7} } },
	[37] = { .set = { {3, -7}, {-8, -3}, {6, -3}, {0, -6} } },
	[38] = { .set = { {3, -7}, {0, -5}, {2, -1}, {0, -6} } },
	[39] = { .set = { {3, -7}, {-5, -4}, {4, -1}, {0, -6} } },
	[40] = { .set = { {-1, -12}, {7, -4}, {-7, -4}, {0, -7} } },
	[41] = { .set = { {0, -11}, {7, -2}, {-7, -5}, {1, -6} } },
	[42] = { .set = { {0, -11}, {7, -5}, {-7, -2}, {-1, -6} } },
	[43] = { .set = { {0, -9}, {-8, -3}, {5, -3}, {-2, -6} } },
	[44] = { .set = { {-3, -8}, {5, -6}, {-6, -2}, {0, -7} } },
	[45] = { .set = { {-3, -7}, {8, -3}, {-6, -3}, {0, -6} } },
	[46] = { .set = { {-3, -7}, {0, -5}, {-2, -1}, {0, -6} } },
	[47] = { .set = { {-3, -7}, {5, -4}, {-4, -1}, {0, -6} } },
	[48] = { .set = { {-3, -7}, {0, -4}, {0, -1}, {-1, -6} } },
	[49] = { .set = { {-3, -6}, {2, -3}, {-3, 0}, {0, -5} } },
	[50] = { .set = { {-3, -6}, {-6, -3}, {3, -1}, {0, -5} } },
	[51] = { .set = { {-5, -6}, {-3, 0}, {-3, -2}, {-2, -5} } },
	[52] = { .set = { {-2, -7}, {-6, -6}, {6, -2}, {-1, -6} } },
	[53] = { .set = { {-2, -6}, {-5, -5}, {4, 0}, {-1, -5} } },
	[54] = { .set = { {-2, -6}, {-7, -3}, {6, -3}, {-1, -5} } },
	[55] = { .set = { {-2, -5}, {-5, -2}, {5, -1}, {1, -5} } },
	[56] = { .set = { {0, -7}, {-7, -4}, {7, -4}, {0, -6} } },
	[57] = { .set = { {0, -6}, {-6, -3}, {6, -1}, {0, -5} } },
	[58] = { .set = { {0, -6}, {-6, -1}, {6, -3}, {0, -5} } },
	[59] = { .set = { {0, -8}, {-5, -7}, {5, -7}, {0, -5} } },
	[60] = { .set = { {0, -10}, {-5, -6}, {4, -6}, {0, -6} } },
	[61] = { .set = { {2, -7}, {6, -6}, {-6, -2}, {1, -6} } },
	[62] = { .set = { {2, -6}, {5, -5}, {-4, 0}, {1, -5} } },
	[63] = { .set = { {2, -6}, {7, -3}, {-6, -3}, {1, -5} } },
	[64] = { .set = { {0, -9}, {-2, -7}, {5, -9}, {-1, -6} } },
	[65] = { .set = { {-2, -10}, {-2, -6}, {5, -8}, {-1, -5} } },
	[66] = { .set = { {3, -7}, {0, -4}, {0, -1}, {1, -6} } },
	[67] = { .set = { {3, -6}, {-2, -3}, {3, 0}, {0, -5} } },
	[68] = { .set = { {3, -6}, {6, -3}, {-3, -1}, {0, -5} } },
	[69] = { .set = { {0, -9}, {6, -10}, {6, -11}, {-1, -7} } },
	[70] = { .set = { {-1, -8}, {7, -9}, {7, -10}, {-1, -6} } },
	[71] = { .set = { {3, -8}, {-5, -6}, {6, -2}, {0, -7} } },
	[72] = { .set = { {3, -7}, {-8, -3}, {6, -3}, {0, -6} } },
	[73] = { .set = { {3, -7}, {0, -5}, {2, -1}, {0, -6} } },
	[74] = { .set = { {-1, -9}, {4, -11}, {-3, -12}, {-1, -5} } },
	[75] = { .set = { {-2, -8}, {4, -10}, {-4, -11}, {-2, -5} } },
	[76] = { .set = { {-1, -12}, {7, -4}, {-7, -4}, {0, -7} } },
	[77] = { .set = { {0, -11}, {7, -2}, {-7, -5}, {1, -6} } },
	[78] = { .set = { {0, -11}, {7, -5}, {-7, -2}, {-1, -6} } },
	[79] = { .set = { {2, -9}, {5, 0}, {-6, 0}, {0, -6} } },
	[80] = { .set = { {-1, -6}, {4, 0}, {-6, 0}, {-3, -4} } },
	[81] = { .set = { {-3, -8}, {5, -6}, {-6, -2}, {0, -7} } },
	[82] = { .set = { {-3, -7}, {8, -3}, {-6, -3}, {0, -6} } },
	[83] = { .set = { {-3, -7}, {0, -5}, {-2, -1}, {0, -6} } },
	[84] = { .set = { {1, -9}, {-4, -11}, {3, -12}, {1, -5} } },
	[85] = { .set = { {2, -8}, {-4, -10}, {4, -11}, {2, -5} } },
	[86] = { .set = { {-3, -7}, {0, -4}, {0, -1}, {-1, -6} } },
	[87] = { .set = { {-3, -6}, {2, -3}, {-3, 0}, {0, -5} } },
	[88] = { .set = { {-3, -6}, {-6, -3}, {3, -1}, {0, -5} } },
	[89] = { .set = { {1, -9}, {-5, -10}, {-5, -11}, {2, -7} } },
	[90] = { .set = { {1, -8}, {-7, -9}, {-7, -10}, {1, -6} } },
	[91] = { .set = { {-2, -7}, {-6, -6}, {6, -2}, {-1, -6} } },
	[92] = { .set = { {-2, -6}, {-5, -5}, {4, 0}, {-1, -5} } },
	[93] = { .set = { {-2, -6}, {-7, -3}, {6, -3}, {-1, -5} } },
	[94] = { .set = { {0, -9}, {2, -7}, {-5, -9}, {1, -6} } },
	[95] = { .set = { {2, -10}, {2, -6}, {-5, -8}, {1, -5} } },
	[96] = { .set = { {0, -7}, {-7, -4}, {7, -4}, {0, -6} } },
	[97] = { .set = { {0, -6}, {-6, -3}, {6, -1}, {0, -5} } },
	[98] = { .set = { {0, -6}, {-6, -1}, {6, -3}, {0, -5} } },
	[99] = { .set = { {0, -4}, {-7, -2}, {7, -2}, {0, -5} } },
	[100] = { .set = { {2, -7}, {6, -6}, {-6, -2}, {1, -6} } },
	[101] = { .set = { {2, -6}, {5, -5}, {-4, 0}, {1, -5} } },
	[102] = { .set = { {2, -6}, {7, -3}, {-6, -3}, {1, -5} } },
	[103] = { .set = { {2, -5}, {5, -2}, {-5, -1}, {-1, -5} } },
	[104] = { .set = { {3, -7}, {0, -4}, {0, -1}, {1, -6} } },
	[105] = { .set = { {3, -6}, {-2, -3}, {3, 0}, {0, -5} } },
	[106] = { .set = { {3, -6}, {6, -3}, {-3, -1}, {0, -5} } },
	[107] = { .set = { {5, -6}, {3, 0}, {3, -2}, {2, -5} } },
	[108] = { .set = { {3, -8}, {-5, -6}, {6, -2}, {0, -7} } },
	[109] = { .set = { {3, -7}, {-8, -3}, {6, -3}, {0, -6} } },
	[110] = { .set = { {3, -7}, {0, -5}, {2, -1}, {0, -6} } },
	[111] = { .set = { {3, -7}, {-5, -4}, {4, -1}, {0, -6} } },
	[112] = { .set = { {-1, -12}, {7, -4}, {-7, -4}, {0, -7} } },
	[113] = { .set = { {0, -11}, {7, -2}, {-7, -5}, {1, -6} } },
	[114] = { .set = { {0, -11}, {7, -5}, {-7, -2}, {-1, -6} } },
	[115] = { .set = { {1, -9}, {-7, -3}, {6, -3}, {-1, -6} } },
	[116] = { .set = { {-3, -8}, {5, -6}, {-6, -2}, {0, -7} } },
	[117] = { .set = { {-3, -7}, {8, -3}, {-6, -3}, {0, -6} } },
	[118] = { .set = { {-3, -7}, {0, -5}, {-2, -1}, {0, -6} } },
	[119] = { .set = { {-3, -7}, {5, -4}, {-4, -1}, {0, -6} } },
	[120] = { .set = { {-3, -7}, {0, -4}, {0, -1}, {-1, -6} } },
	[121] = { .set = { {-3, -6}, {2, -3}, {-3, 0}, {0, -5} } },
	[122] = { .set = { {-3, -6}, {-6, -3}, {3, -1}, {0, -5} } },
	[123] = { .set = { {-5, -6}, {-3, 0}, {-3, -2}, {-2, -5} } },
	[124] = { .set = { {-2, -7}, {-6, -6}, {6, -2}, {-1, -6} } },
	[125] = { .set = { {-2, -6}, {-5, -5}, {4, 0}, {-1, -5} } },
	[126] = { .set = { {-2, -6}, {-7, -3}, {6, -3}, {-1, -5} } },
	[127] = { .set = { {-2, -5}, {-5, -2}, {5, -1}, {1, -5} } },
	[128] = { .set = { {0, -7}, {-7, -4}, {7, -4}, {0, -6} } },
	[129] = { .set = { {-2, -7}, {-6, -6}, {6, -2}, {-1, -6} } },
	[130] = { .set = { {-3, -7}, {0, -4}, {0, -1}, {-1, -6} } },
	[131] = { .set = { {-3, -8}, {5, -6}, {-6, -2}, {0, -7} } },
	[132] = { .set = { {-1, -12}, {7, -4}, {-7, -4}, {0, -7} } },
	[133] = { .set = { {3, -8}, {-5, -6}, {6, -2}, {0, -7} } },
	[134] = { .set = { {3, -7}, {0, -4}, {0, -1}, {1, -6} } },
	[135] = { .set = { {2, -7}, {6, -6}, {-6, -2}, {1, -6} } },
	[136] = { .set = { {-2, -5}, {-6, -3}, {5, 0}, {0, -5} } },
	[137] = { .set = { {-2, -4}, {-6, -3}, {5, 0}, {0, -4} } },
	[138] = { .set = { {-1, -7}, {-8, -9}, {6, -9}, {-1, -9} } },
	[139] = { .set = { {1, -6}, {5, -9}, {-9, -8}, {-1, -6} } },
	[140] = { .set = { {0, -6}, {-7, -10}, {-8, -5}, {-2, -5} } },
	[141] = { .set = { {4, -5}, {-2, -8}, {4, -4}, {-2, -6} } },
	[142] = { .set = { {-1, -4}, {7, -6}, {-7, -6}, {-3, -3} } },
	[143] = { .set = { {-5, -5}, {1, -8}, {-5, -4}, {1, -6} } },
	[144] = { .set = { {-1, -6}, {6, -10}, {7, -5}, {1, -5} } },
	[145] = { .set = { {-2, -6}, {-6, -9}, {8, -8}, {0, -6} } },
	[146] = { .set = { {0, -7}, {-7, -4}, {7, -4}, {0, -6} } },
	[147] = { .set = { {0, -6}, {-6, -3}, {6, -1}, {0, -5} } },
	[148] = { .set = { {0, -6}, {-6, -1}, {6, -3}, {0, -5} } },
	[149] = { .set = { {0, -4}, {-7, -2}, {7, -2}, {0, -5} } },
	[150] = { .set = { {2, -7}, {6, -6}, {-6, -2}, {1, -6} } },
	[151] = { .set = { {2, -6}, {5, -5}, {-4, 0}, {1, -5} } },
	[152] = { .set = { {2, -6}, {7, -3}, {-6, -3}, {1, -5} } },
	[153] = { .set = { {2, -5}, {5, -2}, {-5, -1}, {-1, -5} } },
	[154] = { .set = { {3, -7}, {0, -4}, {0, -1}, {1, -6} } },
	[155] = { .set = { {3, -6}, {-2, -3}, {3, 0}, {0, -5} } },
	[156] = { .set = { {3, -6}, {6, -3}, {-3, -1}, {0, -5} } },
	[157] = { .set = { {5, -6}, {3, 0}, {3, -2}, {2, -5} } },
	[158] = { .set = { {3, -8}, {-5, -6}, {6, -2}, {0, -7} } },
	[159] = { .set = { {3, -7}, {-8, -3}, {6, -3}, {0, -6} } },
	[160] = { .set = { {3, -7}, {0, -5}, {2, -1}, {0, -6} } },
	[161] = { .set = { {3, -7}, {-5, -4}, {4, -1}, {0, -6} } },
	[162] = { .set = { {-1, -12}, {7, -4}, {-7, -4}, {0, -7} } },
	[163] = { .set = { {0, -11}, {7, -2}, {-7, -5}, {1, -6} } },
	[164] = { .set = { {-1, -11}, {6, -5}, {-8, -2}, {-2, -6} } },
	[165] = { .set = { {1, -9}, {-7, -3}, {6, -3}, {-1, -6} } },
	[166] = { .set = { {-3, -8}, {5, -6}, {-6, -2}, {0, -7} } },
	[167] = { .set = { {-3, -7}, {8, -3}, {-6, -3}, {0, -6} } },
	[168] = { .set = { {-3, -7}, {0, -5}, {-2, -1}, {0, -6} } },
	[169] = { .set = { {-3, -7}, {5, -4}, {-4, -1}, {0, -6} } },
	[170] = { .set = { {-3, -7}, {0, -4}, {0, -1}, {-1, -6} } },
	[171] = { .set = { {-3, -6}, {2, -3}, {-3, 0}, {0, -5} } },
	[172] = { .set = { {-3, -6}, {-6, -3}, {3, -1}, {0, -5} } },
	[173] = { .set = { {-5, -6}, {-3, 0}, {-3, -2}, {-2, -5} } },
	[174] = { .set = { {-2, -7}, {-6, -6}, {6, -2}, {-1, -6} } },
	[175] = { .set = { {-2, -6}, {-5, -5}, {4, 0}, {-1, -5} } },
	[176] = { .set = { {-2, -6}, {-7, -3}, {6, -3}, {-1, -5} } },
	[177] = { .set = { {-2, -5}, {-5, -2}, {5, -1}, {1, -5} } },
	[178] = { .set = { {0, -4}, {-7, -2}, {7, -2}, {0, -5} } },
	[179] = { .set = { {-5, -5}, {-8, -2}, {2, -1}, {-2, -5} } },
	[180] = { .set = { {-8, -6}, {-6, 0}, {-6, -2}, {-5, -5} } },
	[181] = { .set = { {-6, -8}, {2, -5}, {-7, -2}, {-3, -7} } },
	[182] = { .set = { {0, -9}, {-8, -3}, {5, -3}, {-2, -6} } },
	[183] = { .set = { {5, -8}, {-3, -5}, {6, -2}, {2, -7} } },
	[184] = { .set = { {7, -6}, {5, 0}, {5, -2}, {4, -5} } },
	[185] = { .set = { {4, -5}, {7, -2}, {-3, -1}, {1, -5} } },
	[186] = { .set = { {0, -4}, {-7, -2}, {7, -2}, {0, -5} } },
	[187] = { .set = { {-5, -5}, {-8, -2}, {2, -1}, {-2, -5} } },
	[188] = { .set = { {-8, -6}, {-6, 0}, {-6, -2}, {-5, -5} } },
	[189] = { .set = { {-6, -8}, {2, -5}, {-7, -2}, {-3, -7} } },
	[190] = { .set = { {0, -9}, {-8, -3}, {5, -3}, {-2, -6} } },
	[191] = { .set = { {5, -8}, {-3, -5}, {6, -2}, {2, -7} } },
	[192] = { .set = { {7, -6}, {5, 0}, {5, -2}, {4, -5} } },
	[193] = { .set = { {4, -5}, {7, -2}, {-3, -1}, {1, -5} } },
	[194] = { .set = { {0, -7}, {-7, -4}, {7, -4}, {0, -6} } },
	[195] = { .set = { {0, -10}, {-5, -6}, {4, -6}, {0, -6} } },
	[196] = { .set = { {0, -4}, {-7, -2}, {7, -2}, {0, -5} } },
	[197] = { .set = { {2, -7}, {6, -6}, {-6, -2}, {1, -6} } },
	[198] = { .set = { {0, -10}, {0, -6}, {7, -8}, {1, -5} } },
	[199] = { .set = { {2, -5}, {5, -2}, {-5, -1}, {-1, -5} } },
	[200] = { .set = { {3, -7}, {0, -4}, {0, -1}, {1, -6} } },
	[201] = { .set = { {-1, -8}, {7, -9}, {7, -10}, {-1, -6} } },
	[202] = { .set = { {5, -6}, {3, 0}, {3, -2}, {2, -5} } },
	[203] = { .set = { {3, -8}, {-5, -6}, {6, -2}, {0, -7} } },
	[204] = { .set = { {-2, -8}, {4, -10}, {-4, -11}, {-2, -5} } },
	[205] = { .set = { {3, -7}, {-5, -4}, {4, -1}, {0, -6} } },
	[206] = { .set = { {-1, -12}, {7, -4}, {-7, -4}, {0, -7} } },
	[207] = { .set = { {-1, -6}, {4, 0}, {-6, 0}, {-3, -4} } },
	[208] = { .set = { {2, -9}, {-6, -3}, {7, -3}, {0, -6} } },
	[209] = { .set = { {-4, -8}, {4, -6}, {-7, -2}, {-1, -7} } },
	[210] = { .set = { {1, -8}, {-5, -10}, {3, -11}, {1, -5} } },
	[211] = { .set = { {-4, -7}, {4, -4}, {-5, -1}, {-1, -6} } },
	[212] = { .set = { {-4, -7}, {-1, -4}, {-1, -1}, {-2, -6} } },
	[213] = { .set = { {0, -8}, {-8, -9}, {-8, -10}, {0, -6} } },
	[214] = { .set = { {-6, -6}, {-4, 0}, {-4, -2}, {-3, -5} } },
	[215] = { .set = { {-3, -7}, {-7, -6}, {5, -2}, {-2, -6} } },
	[216] = { .set = { {-1, -10}, {-1, -6}, {-8, -8}, {-2, -5} } },
	[217] = { .set = { {-3, -5}, {-6, -2}, {4, -1}, {0, -5} } },
	[218] = { .set = { {0, -4}, {-7, -2}, {7, -2}, {0, -5} } },
	[219] = { .set = { {-5, -5}, {-8, -2}, {2, -1}, {-2, -5} } },
	[220] = { .set = { {-8, -6}, {-6, 0}, {-6, -2}, {-5, -5} } },
	[221] = { .set = { {-6, -8}, {2, -5}, {-7, -2}, {-3, -7} } },
	[222] = { .set = { {0, -9}, {-8, -3}, {5, -3}, {-2, -6} } },
	[223] = { .set = { {5, -8}, {-3, -5}, {6, -2}, {2, -7} } },
	[224] = { .set = { {7, -6}, {5, 0}, {5, -2}, {4, -5} } },
	[225] = { .set = { {4, -5}, {7, -2}, {-3, -1}, {1, -5} } },
	[226] = { .set = { {0, -7}, {-7, -4}, {7, -4}, {0, -6} } },
	[227] = { .set = { {-2, -7}, {-6, -6}, {6, -2}, {-1, -6} } },
	[228] = { .set = { {-3, -7}, {0, -4}, {0, -1}, {-1, -6} } },
	[229] = { .set = { {-3, -8}, {5, -6}, {-6, -2}, {0, -7} } },
	[230] = { .set = { {-1, -12}, {7, -4}, {-7, -4}, {0, -7} } },
	[231] = { .set = { {3, -8}, {-5, -6}, {6, -2}, {0, -7} } },
	[232] = { .set = { {3, -7}, {0, -4}, {0, -1}, {1, -6} } },
	[233] = { .set = { {2, -7}, {6, -6}, {-6, -2}, {1, -6} } },
};

static const ax_anim *const sMawileAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sMawileAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01569),
	AX_ANIM_PTR(sMawileAnims_2_2),
	AX_ANIM_PTR(sMawileAnims_2_3),
	AX_ANIM_PTR(sMawileAnims_2_4),
	AX_ANIM_PTR(sMawileAnims_2_5),
	AX_ANIM_PTR(sMawileAnims_2_6),
	AX_ANIM_PTR(sMawileAnims_2_7),
	AX_ANIM_PTR(sMawileAnims_2_8),
};

static const ax_anim *const sMawileAnimTable3[] = {
	AX_ANIM_PTR(sMawileAnims_3_1),
	AX_ANIM_PTR(sMawileAnims_3_2),
	AX_ANIM_PTR(sMawileAnims_3_3),
	AX_ANIM_PTR(sMawileAnims_3_4),
	AX_ANIM_PTR(sMawileAnims_3_5),
	AX_ANIM_PTR(sMawileAnims_3_6),
	AX_ANIM_PTR(sMawileAnims_3_7),
	AX_ANIM_PTR(sMawileAnims_3_8),
};

static const ax_anim *const sMawileAnimTable4[] = {
	AX_ANIM_PTR(sMawileAnims_4_1),
	AX_ANIM_PTR(sMawileAnims_4_2),
	AX_ANIM_PTR(sMawileAnims_4_3),
	AX_ANIM_PTR(sMawileAnims_4_4),
	AX_ANIM_PTR(sMawileAnims_4_5),
	AX_ANIM_PTR(sMawileAnims_4_6),
	AX_ANIM_PTR(sMawileAnims_4_7),
	AX_ANIM_PTR(sMawileAnims_4_8),
};

static const ax_anim *const sMawileAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00381),
	AX_ANIM_PTR(gAxSharedAnim_00438),
	AX_ANIM_PTR(gAxSharedAnim_00433),
	AX_ANIM_PTR(gAxSharedAnim_00427),
	AX_ANIM_PTR(gAxSharedAnim_00418),
	AX_ANIM_PTR(gAxSharedAnim_00409),
	AX_ANIM_PTR(gAxSharedAnim_00401),
	AX_ANIM_PTR(gAxSharedAnim_00389),
};

static const ax_anim *const sMawileAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
};

static const ax_anim *const sMawileAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00466),
	AX_ANIM_PTR(gAxSharedAnim_00479),
	AX_ANIM_PTR(gAxSharedAnim_00487),
	AX_ANIM_PTR(gAxSharedAnim_00496),
	AX_ANIM_PTR(gAxSharedAnim_00508),
	AX_ANIM_PTR(gAxSharedAnim_00517),
	AX_ANIM_PTR(gAxSharedAnim_00523),
	AX_ANIM_PTR(gAxSharedAnim_00529),
};

static const ax_anim *const sMawileAnimTable8[] = {
	AX_ANIM_PTR(sMawileAnims_8_1),
	AX_ANIM_PTR(sMawileAnims_8_2),
	AX_ANIM_PTR(sMawileAnims_8_3),
	AX_ANIM_PTR(sMawileAnims_8_4),
	AX_ANIM_PTR(sMawileAnims_8_5),
	AX_ANIM_PTR(sMawileAnims_8_6),
	AX_ANIM_PTR(sMawileAnims_8_7),
	AX_ANIM_PTR(sMawileAnims_8_8),
};

static const ax_anim *const sMawileAnimTable9[] = {
	AX_ANIM_PTR(sMawileAnims_9_1),
	AX_ANIM_PTR(sMawileAnims_9_2),
	AX_ANIM_PTR(sMawileAnims_9_3),
	AX_ANIM_PTR(sMawileAnims_9_4),
	AX_ANIM_PTR(sMawileAnims_9_5),
	AX_ANIM_PTR(sMawileAnims_9_6),
	AX_ANIM_PTR(sMawileAnims_9_7),
	AX_ANIM_PTR(sMawileAnims_9_8),
};

static const ax_anim *const sMawileAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01016),
	AX_ANIM_PTR(gAxSharedAnim_01125),
	AX_ANIM_PTR(gAxSharedAnim_01110),
	AX_ANIM_PTR(gAxSharedAnim_01091),
	AX_ANIM_PTR(gAxSharedAnim_01078),
	AX_ANIM_PTR(gAxSharedAnim_01062),
	AX_ANIM_PTR(gAxSharedAnim_01046),
	AX_ANIM_PTR(sMawileAnims_10_8),
};

static const ax_anim *const sMawileAnimTable11[] = {
	AX_ANIM_PTR(sMawileAnims_11_1),
	AX_ANIM_PTR(sMawileAnims_11_2),
	AX_ANIM_PTR(sMawileAnims_11_3),
	AX_ANIM_PTR(sMawileAnims_11_4),
	AX_ANIM_PTR(sMawileAnims_11_5),
	AX_ANIM_PTR(sMawileAnims_11_6),
	AX_ANIM_PTR(sMawileAnims_11_7),
	AX_ANIM_PTR(sMawileAnims_11_8),
};

static const ax_anim *const sMawileAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01423),
	AX_ANIM_PTR(gAxSharedAnim_01467),
	AX_ANIM_PTR(gAxSharedAnim_01458),
	AX_ANIM_PTR(gAxSharedAnim_01449),
	AX_ANIM_PTR(gAxSharedAnim_01448),
	AX_ANIM_PTR(gAxSharedAnim_01444),
	AX_ANIM_PTR(gAxSharedAnim_01432),
	AX_ANIM_PTR(gAxSharedAnim_01424),
};

static const ax_anim *const sMawileAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01471),
	AX_ANIM_PTR(gAxSharedAnim_01516),
	AX_ANIM_PTR(gAxSharedAnim_01511),
	AX_ANIM_PTR(gAxSharedAnim_01504),
	AX_ANIM_PTR(gAxSharedAnim_01497),
	AX_ANIM_PTR(gAxSharedAnim_01490),
	AX_ANIM_PTR(gAxSharedAnim_01486),
	AX_ANIM_PTR(gAxSharedAnim_01478),
};

static const ax_anim *const *const sAxAnimationsMawile[] = {
	sMawileAnimTable1,
	sMawileAnimTable2,
	sMawileAnimTable3,
	sMawileAnimTable4,
	sMawileAnimTable5,
	sMawileAnimTable6,
	sMawileAnimTable7,
	sMawileAnimTable8,
	sMawileAnimTable9,
	sMawileAnimTable10,
	sMawileAnimTable11,
	sMawileAnimTable12,
	sMawileAnimTable13,
};

static const ax_sprite *const sAxSpritesMawile[] = {
	sMawileSprites1,
	sMawileSprites2,
	sMawileSprites3,
	sMawileSprites4,
	sMawileSprites5,
	sMawileSprites6,
	sMawileSprites7,
	sMawileSprites8,
	sMawileSprites9,
	sMawileSprites10,
	sMawileSprites11,
	sMawileSprites12,
	sMawileSprites13,
	sMawileSprites14,
	sMawileSprites15,
	sMawileSprites16,
	sMawileSprites17,
	sMawileSprites18,
	sMawileSprites19,
	sMawileSprites20,
	sMawileSprites21,
	sMawileSprites22,
	sMawileSprites23,
	sMawileSprites24,
	sMawileSprites25,
	sMawileSprites26,
	sMawileSprites27,
	sMawileSprites28,
	sMawileSprites29,
	sMawileSprites30,
	sMawileSprites31,
	sMawileSprites32,
	sMawileSprites33,
	sMawileSprites34,
	sMawileSprites35,
	sMawileSprites36,
	sMawileSprites37,
	sMawileSprites38,
	sMawileSprites39,
	sMawileSprites40,
	sMawileSprites41,
	sMawileSprites42,
	sMawileSprites43,
	sMawileSprites44,
	sMawileSprites45,
	sMawileSprites46,
	sMawileSprites47,
	sMawileSprites48,
	sMawileSprites49,
	sMawileSprites50,
	sMawileSprites51,
	sMawileSprites52,
	sMawileSprites53,
	sMawileSprites54,
	sMawileSprites55,
	sMawileSprites56,
	sMawileSprites57,
	sMawileSprites58,
	sMawileSprites59,
	sMawileSprites60,
	sMawileSprites61,
	sMawileSprites62,
	sMawileSprites63,
	sMawileSprites64,
	sMawileSprites65,
	sMawileSprites66,
	sMawileSprites67,
	sMawileSprites68,
	sMawileSprites69,
	sMawileSprites70,
	sMawileSprites71,
	sMawileSprites72,
	sMawileSprites73,
	sMawileSprites74,
	sMawileSprites75,
};

static const axmain sAxMainMawile = {
	.poses = sAxPosesMawile,
	.animations = sAxAnimationsMawile,
	.animCount = ARRAY_COUNT(sAxAnimationsMawile),
	.spriteData = sAxSpritesMawile,
	.positions = sAxPositionsMawile,
};
