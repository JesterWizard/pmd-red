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
static const axmain sAxMainDragonair;
const SiroArchive gAxDragonair = {"SIRO", &sAxMainDragonair};

static const ax_pose sDragonairPose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose2[] = {
	AX_POSE(1, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(2, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(3, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE(4, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE(5, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose3[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose4[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose5[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose6[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose7[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose8[] = {
	AX_POSE(11, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 9)),
	AX_POSE(12, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(13, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 9)),
	AX_POSE(14, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(11, 3, 9)),
	AX_POSE(15, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(16, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose9[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose10[] = {
	AX_POSE(18, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(19, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(20, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(21, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose11[] = {
	AX_POSE(22, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 9)),
	AX_POSE(23, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(24, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 9)),
	AX_POSE(25, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(26, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose12[] = {
	AX_POSE(27, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(28, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(29, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(30, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose13[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose14[] = {
	AX_POSE(32, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(33, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(34, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(35, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE(36, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose15[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose16[] = {
	AX_POSE(38, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(39, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(40, OAM1(4, ST_OAM_H_RECTANGLE, 2), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose17[] = {
	AX_POSE(41, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(42, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(43, OAM1(4, ST_OAM_H_RECTANGLE, 2), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE(44, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose18[] = {
	AX_POSE(45, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(46, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(47, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose19[] = {
	AX_POSE(48, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose20[] = {
	AX_POSE(49, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(50, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(51, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose21[] = {
	AX_POSE(52, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose22[] = {
	AX_POSE(53, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose23[] = {
	AX_POSE(54, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose24[] = {
	AX_POSE(55, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose26[] = {
	AX_POSE(56, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(57, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 9)),
	AX_POSE(58, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(59, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 9)),
	AX_POSE(60, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE(61, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose27[] = {
	AX_POSE(62, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(63, OAM1(219, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(64, OAM1(251, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose30[] = {
	AX_POSE(65, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(66, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(67, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(68, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE(69, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose31[] = {
	AX_POSE(70, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(71, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 9)),
	AX_POSE(72, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(73, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(227, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE(74, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose34[] = {
	AX_POSE(75, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(76, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(77, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(78, OAM1(220, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose35[] = {
	AX_POSE(79, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(80, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(222, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(81, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(22, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE(82, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose38[] = {
	AX_POSE(83, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(84, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(85, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE(86, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE(87, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE(88, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose39[] = {
	AX_POSE(89, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 9)),
	AX_POSE(90, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(91, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(92, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose42[] = {
	AX_POSE(93, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(94, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(95, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(96, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose43[] = {
	AX_POSE(97, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(98, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(99, OAM1(252, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(10, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose46[] = {
	AX_POSE(83, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(84, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(85, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(86, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 9)),
	AX_POSE(87, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE(88, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose47[] = {
	AX_POSE(89, OAM1(220, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(90, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(91, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(92, OAM1(3, ST_OAM_H_RECTANGLE, 2), OAM2(3, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose50[] = {
	AX_POSE(75, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(76, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(77, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE(78, OAM1(220, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose51[] = {
	AX_POSE(79, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(228, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(80, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(81, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(82, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose54[] = {
	AX_POSE(65, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(66, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(67, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(68, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 9)),
	AX_POSE(69, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose55[] = {
	AX_POSE(70, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(71, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 9)),
	AX_POSE(72, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(19, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE(73, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 9)),
	AX_POSE(74, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose94[] = {
	AX_POSE(100, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose100[] = {
	AX_POSE(101, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(102, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(103, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE(104, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(228, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE(105, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose106[] = {
	AX_POSE(106, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 9)),
	AX_POSE(107, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(4, 3, 9)),
	AX_POSE(108, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(230, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(109, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE(110, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose112[] = {
	AX_POSE(111, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 9)),
	AX_POSE(112, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(113, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 9)),
	AX_POSE(114, OAM1(7, ST_OAM_H_RECTANGLE, 2), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(115, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 9)),
	AX_POSE(116, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose118[] = {
	AX_POSE(117, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(118, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(119, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(120, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE(121, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 9)),
	AX_POSE(122, OAM1(8, ST_OAM_SQUARE     , 2), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose124[] = {
	AX_POSE(111, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(112, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(113, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 9)),
	AX_POSE(114, OAM1(7, ST_OAM_H_RECTANGLE, 2), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE(115, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE(116, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose130[] = {
	AX_POSE(106, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(107, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(4, 3, 9)),
	AX_POSE(108, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(109, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(110, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose136[] = {
	AX_POSE(101, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(102, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(103, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(104, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 9)),
	AX_POSE(105, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose185[] = {
	AX_POSE(123, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose186[] = {
	AX_POSE(124, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose187[] = {
	AX_POSE(125, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 9)),
	AX_POSE(126, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 9)),
	AX_POSE(127, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(5, 3, 9)),
	AX_POSE(128, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(6, 3, 9)),
	AX_POSE(129, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose188[] = {
	AX_POSE(130, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose189[] = {
	AX_POSE(131, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose190[] = {
	AX_POSE(132, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose191[] = {
	AX_POSE(133, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(134, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 9)),
	AX_POSE(135, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(5, 3, 9)),
	AX_POSE(136, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(6, 3, 9)),
	AX_POSE(137, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose192[] = {
	AX_POSE(132, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose193[] = {
	AX_POSE(131, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose194[] = {
	AX_POSE(130, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose217[] = {
	AX_POSE(54, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose238[] = {
	AX_POSE(49, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(50, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(51, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose244[] = {
	AX_POSE(65, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(66, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(67, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(68, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE(69, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose245[] = {
	AX_POSE(75, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(76, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(77, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(78, OAM1(220, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose246[] = {
	AX_POSE(83, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(84, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(85, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE(86, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE(87, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(252, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE(88, OAM1(4, ST_OAM_SQUARE     , 2), OAM2(244, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose247[] = {
	AX_POSE(93, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(94, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(95, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(96, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose249[] = {
	AX_POSE(75, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(76, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(77, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE(78, OAM1(220, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose250[] = {
	AX_POSE(65, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(66, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(67, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(68, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 9)),
	AX_POSE(69, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose255[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDragonairPose259[] = {
	AX_POSE(75, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(76, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(77, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(78, OAM1(220, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 9)),
	AX_POSE_TERMINATOR
};
static const u8 sDragonairAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_1_1.lz");
static const u8 sDragonairAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_1_2.lz");
static const u8 sDragonairAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_1_3.lz");
static const u8 sDragonairAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_1_4.lz");
static const u8 sDragonairAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_1_5.lz");
static const u8 sDragonairAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_1_6.lz");
static const u8 sDragonairAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_1_7.lz");
static const u8 sDragonairAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_1_8.lz");
static const u8 sDragonairAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_2_1.lz");
static const u8 sDragonairAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_2_2.lz");
static const u8 sDragonairAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_2_3.lz");
static const u8 sDragonairAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_2_4.lz");
static const u8 sDragonairAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_2_5.lz");
static const u8 sDragonairAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_2_6.lz");
static const u8 sDragonairAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_2_7.lz");
static const u8 sDragonairAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_2_8.lz");
static const u8 sDragonairAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_3_1.lz");
static const u8 sDragonairAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_3_2.lz");
static const u8 sDragonairAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_3_3.lz");
static const u8 sDragonairAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_3_4.lz");
static const u8 sDragonairAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_3_5.lz");
static const u8 sDragonairAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_3_6.lz");
static const u8 sDragonairAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_3_7.lz");
static const u8 sDragonairAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_3_8.lz");
static const u8 sDragonairAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_4_1.lz");
static const u8 sDragonairAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_4_2.lz");
static const u8 sDragonairAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_4_3.lz");
static const u8 sDragonairAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_4_4.lz");
static const u8 sDragonairAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_4_5.lz");
static const u8 sDragonairAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_4_6.lz");
static const u8 sDragonairAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_4_7.lz");
static const u8 sDragonairAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_4_8.lz");
static const u8 sDragonairAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_5_1.lz");
static const u8 sDragonairAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_5_2.lz");
static const u8 sDragonairAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_5_3.lz");
static const u8 sDragonairAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_5_4.lz");
static const u8 sDragonairAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_5_5.lz");
static const u8 sDragonairAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_5_6.lz");
static const u8 sDragonairAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_5_7.lz");
static const u8 sDragonairAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_5_8.lz");
static const u8 sDragonairAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_8_1.lz");
static const u8 sDragonairAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_8_2.lz");
static const u8 sDragonairAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_8_3.lz");
static const u8 sDragonairAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_8_4.lz");
static const u8 sDragonairAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_8_5.lz");
static const u8 sDragonairAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_8_6.lz");
static const u8 sDragonairAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_8_7.lz");
static const u8 sDragonairAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_8_8.lz");
static const u8 sDragonairAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_9_1.lz");
static const u8 sDragonairAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_9_2.lz");
static const u8 sDragonairAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_9_3.lz");
static const u8 sDragonairAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_9_4.lz");
static const u8 sDragonairAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_9_5.lz");
static const u8 sDragonairAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_9_6.lz");
static const u8 sDragonairAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_9_7.lz");
static const u8 sDragonairAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_9_8.lz");
static const u8 sDragonairAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_11_1.lz");
static const u8 sDragonairAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_11_2.lz");
static const u8 sDragonairAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_11_3.lz");
static const u8 sDragonairAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_11_4.lz");
static const u8 sDragonairAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_11_5.lz");
static const u8 sDragonairAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_11_6.lz");
static const u8 sDragonairAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_11_7.lz");
static const u8 sDragonairAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dragonair/sDragonairAnims_11_8.lz");

static const u8 sDragonairGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_1.4bpp.lz");
static const ax_sprite sDragonairSprites1[] = {
	{sDragonairGfx1, ARRAY_COUNT(sDragonairGfx1)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_2.4bpp.lz");
static const ax_sprite sDragonairSprites2[] = {
	{sDragonairGfx2, ARRAY_COUNT(sDragonairGfx2)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_3.4bpp.lz");
static const ax_sprite sDragonairSprites3[] = {
	{sDragonairGfx3, ARRAY_COUNT(sDragonairGfx3)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_4.4bpp.lz");
static const ax_sprite sDragonairSprites4[] = {
	{sDragonairGfx4, ARRAY_COUNT(sDragonairGfx4)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_5.4bpp.lz");
static const ax_sprite sDragonairSprites5[] = {
	{sDragonairGfx5, ARRAY_COUNT(sDragonairGfx5)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_6.4bpp.lz");
static const ax_sprite sDragonairSprites6[] = {
	{sDragonairGfx6, ARRAY_COUNT(sDragonairGfx6)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_7.4bpp.lz");
static const ax_sprite sDragonairSprites7[] = {
	{sDragonairGfx7, ARRAY_COUNT(sDragonairGfx7)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_8.4bpp.lz");
static const ax_sprite sDragonairSprites8[] = {
	{sDragonairGfx8, ARRAY_COUNT(sDragonairGfx8)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_9.4bpp.lz");
static const ax_sprite sDragonairSprites9[] = {
	{sDragonairGfx9, ARRAY_COUNT(sDragonairGfx9)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_10.4bpp.lz");
static const ax_sprite sDragonairSprites10[] = {
	{sDragonairGfx10, ARRAY_COUNT(sDragonairGfx10)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_11.4bpp.lz");
static const ax_sprite sDragonairSprites11[] = {
	{sDragonairGfx11, ARRAY_COUNT(sDragonairGfx11)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_12.4bpp.lz");
static const ax_sprite sDragonairSprites12[] = {
	{sDragonairGfx12, ARRAY_COUNT(sDragonairGfx12)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_13.4bpp.lz");
static const ax_sprite sDragonairSprites13[] = {
	{sDragonairGfx13, ARRAY_COUNT(sDragonairGfx13)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_14.4bpp.lz");
static const ax_sprite sDragonairSprites14[] = {
	{sDragonairGfx14, ARRAY_COUNT(sDragonairGfx14)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_15.4bpp.lz");
static const ax_sprite sDragonairSprites15[] = {
	{sDragonairGfx15, ARRAY_COUNT(sDragonairGfx15)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_16.4bpp.lz");
static const ax_sprite sDragonairSprites16[] = {
	{sDragonairGfx16, ARRAY_COUNT(sDragonairGfx16)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_17.4bpp.lz");
static const ax_sprite sDragonairSprites17[] = {
	{sDragonairGfx17, ARRAY_COUNT(sDragonairGfx17)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_18.4bpp.lz");
static const ax_sprite sDragonairSprites18[] = {
	{sDragonairGfx18, ARRAY_COUNT(sDragonairGfx18)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_19.4bpp.lz");
static const ax_sprite sDragonairSprites19[] = {
	{sDragonairGfx19, ARRAY_COUNT(sDragonairGfx19)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_20.4bpp.lz");
static const ax_sprite sDragonairSprites20[] = {
	{sDragonairGfx20, ARRAY_COUNT(sDragonairGfx20)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_21.4bpp.lz");
static const ax_sprite sDragonairSprites21[] = {
	{sDragonairGfx21, ARRAY_COUNT(sDragonairGfx21)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_22.4bpp.lz");
static const ax_sprite sDragonairSprites22[] = {
	{sDragonairGfx22, ARRAY_COUNT(sDragonairGfx22)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_23.4bpp.lz");
static const ax_sprite sDragonairSprites23[] = {
	{sDragonairGfx23, ARRAY_COUNT(sDragonairGfx23)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_24.4bpp.lz");
static const ax_sprite sDragonairSprites24[] = {
	{sDragonairGfx24, ARRAY_COUNT(sDragonairGfx24)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_25.4bpp.lz");
static const ax_sprite sDragonairSprites25[] = {
	{sDragonairGfx25, ARRAY_COUNT(sDragonairGfx25)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_26.4bpp.lz");
static const ax_sprite sDragonairSprites26[] = {
	{sDragonairGfx26, ARRAY_COUNT(sDragonairGfx26)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_27.4bpp.lz");
static const ax_sprite sDragonairSprites27[] = {
	{sDragonairGfx27, ARRAY_COUNT(sDragonairGfx27)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_28.4bpp.lz");
static const ax_sprite sDragonairSprites28[] = {
	{sDragonairGfx28, ARRAY_COUNT(sDragonairGfx28)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_29.4bpp.lz");
static const ax_sprite sDragonairSprites29[] = {
	{sDragonairGfx29, ARRAY_COUNT(sDragonairGfx29)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_30.4bpp.lz");
static const ax_sprite sDragonairSprites30[] = {
	{sDragonairGfx30, ARRAY_COUNT(sDragonairGfx30)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_31.4bpp.lz");
static const ax_sprite sDragonairSprites31[] = {
	{sDragonairGfx31, ARRAY_COUNT(sDragonairGfx31)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_32.4bpp.lz");
static const ax_sprite sDragonairSprites32[] = {
	{sDragonairGfx32, ARRAY_COUNT(sDragonairGfx32)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_33.4bpp.lz");
static const ax_sprite sDragonairSprites33[] = {
	{sDragonairGfx33, ARRAY_COUNT(sDragonairGfx33)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_34.4bpp.lz");
static const ax_sprite sDragonairSprites34[] = {
	{sDragonairGfx34, ARRAY_COUNT(sDragonairGfx34)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_35.4bpp.lz");
static const ax_sprite sDragonairSprites35[] = {
	{sDragonairGfx35, ARRAY_COUNT(sDragonairGfx35)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_36.4bpp.lz");
static const ax_sprite sDragonairSprites36[] = {
	{sDragonairGfx36, ARRAY_COUNT(sDragonairGfx36)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_37.4bpp.lz");
static const ax_sprite sDragonairSprites37[] = {
	{sDragonairGfx37, ARRAY_COUNT(sDragonairGfx37)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_38.4bpp.lz");
static const ax_sprite sDragonairSprites38[] = {
	{sDragonairGfx38, ARRAY_COUNT(sDragonairGfx38)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_39.4bpp.lz");
static const ax_sprite sDragonairSprites39[] = {
	{sDragonairGfx39, ARRAY_COUNT(sDragonairGfx39)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_40.4bpp.lz");
static const ax_sprite sDragonairSprites40[] = {
	{sDragonairGfx40, ARRAY_COUNT(sDragonairGfx40)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_41.4bpp.lz");
static const ax_sprite sDragonairSprites41[] = {
	{sDragonairGfx41, ARRAY_COUNT(sDragonairGfx41)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_42.4bpp.lz");
static const ax_sprite sDragonairSprites42[] = {
	{sDragonairGfx42, ARRAY_COUNT(sDragonairGfx42)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_43.4bpp.lz");
static const ax_sprite sDragonairSprites43[] = {
	{sDragonairGfx43, ARRAY_COUNT(sDragonairGfx43)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_44.4bpp.lz");
static const ax_sprite sDragonairSprites44[] = {
	{sDragonairGfx44, ARRAY_COUNT(sDragonairGfx44)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_45.4bpp.lz");
static const ax_sprite sDragonairSprites45[] = {
	{sDragonairGfx45, ARRAY_COUNT(sDragonairGfx45)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_46.4bpp.lz");
static const ax_sprite sDragonairSprites46[] = {
	{sDragonairGfx46, ARRAY_COUNT(sDragonairGfx46)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_47.4bpp.lz");
static const ax_sprite sDragonairSprites47[] = {
	{sDragonairGfx47, ARRAY_COUNT(sDragonairGfx47)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_48.4bpp.lz");
static const ax_sprite sDragonairSprites48[] = {
	{sDragonairGfx48, ARRAY_COUNT(sDragonairGfx48)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_49.4bpp.lz");
static const ax_sprite sDragonairSprites49[] = {
	{sDragonairGfx49, ARRAY_COUNT(sDragonairGfx49)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_50.4bpp.lz");
static const ax_sprite sDragonairSprites50[] = {
	{sDragonairGfx50, ARRAY_COUNT(sDragonairGfx50)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_51.4bpp.lz");
static const ax_sprite sDragonairSprites51[] = {
	{sDragonairGfx51, ARRAY_COUNT(sDragonairGfx51)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_52.4bpp.lz");
static const ax_sprite sDragonairSprites52[] = {
	{sDragonairGfx52, ARRAY_COUNT(sDragonairGfx52)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_53.4bpp.lz");
static const ax_sprite sDragonairSprites53[] = {
	{sDragonairGfx53, ARRAY_COUNT(sDragonairGfx53)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_54.4bpp.lz");
static const ax_sprite sDragonairSprites54[] = {
	{sDragonairGfx54, ARRAY_COUNT(sDragonairGfx54)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_55.4bpp.lz");
static const ax_sprite sDragonairSprites55[] = {
	{sDragonairGfx55, ARRAY_COUNT(sDragonairGfx55)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_56.4bpp.lz");
static const ax_sprite sDragonairSprites56[] = {
	{sDragonairGfx56, ARRAY_COUNT(sDragonairGfx56)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_57.4bpp.lz");
static const ax_sprite sDragonairSprites57[] = {
	{sDragonairGfx57, ARRAY_COUNT(sDragonairGfx57)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_58.4bpp.lz");
static const ax_sprite sDragonairSprites58[] = {
	{sDragonairGfx58, ARRAY_COUNT(sDragonairGfx58)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_59.4bpp.lz");
static const ax_sprite sDragonairSprites59[] = {
	{sDragonairGfx59, ARRAY_COUNT(sDragonairGfx59)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_60.4bpp.lz");
static const ax_sprite sDragonairSprites60[] = {
	{sDragonairGfx60, ARRAY_COUNT(sDragonairGfx60)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_61.4bpp.lz");
static const ax_sprite sDragonairSprites61[] = {
	{sDragonairGfx61, ARRAY_COUNT(sDragonairGfx61)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_62.4bpp.lz");
static const ax_sprite sDragonairSprites62[] = {
	{sDragonairGfx62, ARRAY_COUNT(sDragonairGfx62)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_63.4bpp.lz");
static const ax_sprite sDragonairSprites63[] = {
	{sDragonairGfx63, ARRAY_COUNT(sDragonairGfx63)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_64.4bpp.lz");
static const ax_sprite sDragonairSprites64[] = {
	{sDragonairGfx64, ARRAY_COUNT(sDragonairGfx64)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_65.4bpp.lz");
static const ax_sprite sDragonairSprites65[] = {
	{sDragonairGfx65, ARRAY_COUNT(sDragonairGfx65)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_66.4bpp.lz");
static const ax_sprite sDragonairSprites66[] = {
	{sDragonairGfx66, ARRAY_COUNT(sDragonairGfx66)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_67.4bpp.lz");
static const ax_sprite sDragonairSprites67[] = {
	{NULL, 32}, 
	{sDragonairGfx67, ARRAY_COUNT(sDragonairGfx67)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_68.4bpp.lz");
static const ax_sprite sDragonairSprites68[] = {
	{sDragonairGfx68, ARRAY_COUNT(sDragonairGfx68)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_69.4bpp.lz");
static const ax_sprite sDragonairSprites69[] = {
	{sDragonairGfx69, ARRAY_COUNT(sDragonairGfx69)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_70.4bpp.lz");
static const ax_sprite sDragonairSprites70[] = {
	{sDragonairGfx70, ARRAY_COUNT(sDragonairGfx70)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_71.4bpp.lz");
static const u8 sDragonairGfx71_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_71_1.4bpp.lz");
static const ax_sprite sDragonairSprites71[] = {
	{sDragonairGfx71, ARRAY_COUNT(sDragonairGfx71)}, 
	{NULL, 32}, 
	{sDragonairGfx71_1, ARRAY_COUNT(sDragonairGfx71_1)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_72.4bpp.lz");
static const ax_sprite sDragonairSprites72[] = {
	{sDragonairGfx72, ARRAY_COUNT(sDragonairGfx72)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_73.4bpp.lz");
static const ax_sprite sDragonairSprites73[] = {
	{sDragonairGfx73, ARRAY_COUNT(sDragonairGfx73)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_74.4bpp.lz");
static const ax_sprite sDragonairSprites74[] = {
	{sDragonairGfx74, ARRAY_COUNT(sDragonairGfx74)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_75.4bpp.lz");
static const ax_sprite sDragonairSprites75[] = {
	{sDragonairGfx75, ARRAY_COUNT(sDragonairGfx75)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_76.4bpp.lz");
static const ax_sprite sDragonairSprites76[] = {
	{sDragonairGfx76, ARRAY_COUNT(sDragonairGfx76)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_77.4bpp.lz");
static const ax_sprite sDragonairSprites77[] = {
	{sDragonairGfx77, ARRAY_COUNT(sDragonairGfx77)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_78.4bpp.lz");
static const ax_sprite sDragonairSprites78[] = {
	{sDragonairGfx78, ARRAY_COUNT(sDragonairGfx78)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_79.4bpp.lz");
static const ax_sprite sDragonairSprites79[] = {
	{sDragonairGfx79, ARRAY_COUNT(sDragonairGfx79)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_80.4bpp.lz");
static const ax_sprite sDragonairSprites80[] = {
	{sDragonairGfx80, ARRAY_COUNT(sDragonairGfx80)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_81.4bpp.lz");
static const ax_sprite sDragonairSprites81[] = {
	{sDragonairGfx81, ARRAY_COUNT(sDragonairGfx81)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_82.4bpp.lz");
static const ax_sprite sDragonairSprites82[] = {
	{sDragonairGfx82, ARRAY_COUNT(sDragonairGfx82)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_83.4bpp.lz");
static const ax_sprite sDragonairSprites83[] = {
	{sDragonairGfx83, ARRAY_COUNT(sDragonairGfx83)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx84[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_84.4bpp.lz");
static const ax_sprite sDragonairSprites84[] = {
	{sDragonairGfx84, ARRAY_COUNT(sDragonairGfx84)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx85[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_85.4bpp.lz");
static const u8 sDragonairGfx85_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_85_1.4bpp.lz");
static const ax_sprite sDragonairSprites85[] = {
	{sDragonairGfx85, ARRAY_COUNT(sDragonairGfx85)}, 
	{NULL, 32}, 
	{sDragonairGfx85_1, ARRAY_COUNT(sDragonairGfx85_1)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx86[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_86.4bpp.lz");
static const ax_sprite sDragonairSprites86[] = {
	{sDragonairGfx86, ARRAY_COUNT(sDragonairGfx86)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx87[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_87.4bpp.lz");
static const ax_sprite sDragonairSprites87[] = {
	{sDragonairGfx87, ARRAY_COUNT(sDragonairGfx87)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx88[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_88.4bpp.lz");
static const ax_sprite sDragonairSprites88[] = {
	{sDragonairGfx88, ARRAY_COUNT(sDragonairGfx88)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx89[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_89.4bpp.lz");
static const ax_sprite sDragonairSprites89[] = {
	{sDragonairGfx89, ARRAY_COUNT(sDragonairGfx89)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx90[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_90.4bpp.lz");
static const u8 sDragonairGfx90_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_90_1.4bpp.lz");
static const ax_sprite sDragonairSprites90[] = {
	{sDragonairGfx90, ARRAY_COUNT(sDragonairGfx90)}, 
	{NULL, 32}, 
	{sDragonairGfx90_1, ARRAY_COUNT(sDragonairGfx90_1)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx91[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_91.4bpp.lz");
static const u8 sDragonairGfx91_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_91_1.4bpp.lz");
static const ax_sprite sDragonairSprites91[] = {
	{sDragonairGfx91, ARRAY_COUNT(sDragonairGfx91)}, 
	{NULL, 32}, 
	{sDragonairGfx91_1, ARRAY_COUNT(sDragonairGfx91_1)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx92[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_92.4bpp.lz");
static const ax_sprite sDragonairSprites92[] = {
	{sDragonairGfx92, ARRAY_COUNT(sDragonairGfx92)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx93[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_93.4bpp.lz");
static const ax_sprite sDragonairSprites93[] = {
	{sDragonairGfx93, ARRAY_COUNT(sDragonairGfx93)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx94[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_94.4bpp.lz");
static const ax_sprite sDragonairSprites94[] = {
	{sDragonairGfx94, ARRAY_COUNT(sDragonairGfx94)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx95[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_95.4bpp.lz");
static const u8 sDragonairGfx95_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_95_1.4bpp.lz");
static const ax_sprite sDragonairSprites95[] = {
	{sDragonairGfx95, ARRAY_COUNT(sDragonairGfx95)}, 
	{NULL, 32}, 
	{sDragonairGfx95_1, ARRAY_COUNT(sDragonairGfx95_1)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx96[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_96.4bpp.lz");
static const ax_sprite sDragonairSprites96[] = {
	{sDragonairGfx96, ARRAY_COUNT(sDragonairGfx96)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx97[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_97.4bpp.lz");
static const ax_sprite sDragonairSprites97[] = {
	{sDragonairGfx97, ARRAY_COUNT(sDragonairGfx97)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx98[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_98.4bpp.lz");
static const ax_sprite sDragonairSprites98[] = {
	{sDragonairGfx98, ARRAY_COUNT(sDragonairGfx98)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx99[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_99.4bpp.lz");
static const ax_sprite sDragonairSprites99[] = {
	{sDragonairGfx99, ARRAY_COUNT(sDragonairGfx99)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx100[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_100.4bpp.lz");
static const ax_sprite sDragonairSprites100[] = {
	{sDragonairGfx100, ARRAY_COUNT(sDragonairGfx100)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDragonairGfx101[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_101.4bpp.lz");
static const u8 sDragonairGfx101_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_101_1.4bpp.lz");
static const ax_sprite sDragonairSprites101[] = {
	{NULL, 64}, 
	{sDragonairGfx101, ARRAY_COUNT(sDragonairGfx101)}, 
	{NULL, 64}, 
	{sDragonairGfx101_1, ARRAY_COUNT(sDragonairGfx101_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDragonairGfx102[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_102.4bpp.lz");
static const ax_sprite sDragonairSprites102[] = {
	{sDragonairGfx102, ARRAY_COUNT(sDragonairGfx102)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx103[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_103.4bpp.lz");
static const ax_sprite sDragonairSprites103[] = {
	{sDragonairGfx103, ARRAY_COUNT(sDragonairGfx103)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx104[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_104.4bpp.lz");
static const ax_sprite sDragonairSprites104[] = {
	{sDragonairGfx104, ARRAY_COUNT(sDragonairGfx104)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx105[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_105.4bpp.lz");
static const ax_sprite sDragonairSprites105[] = {
	{sDragonairGfx105, ARRAY_COUNT(sDragonairGfx105)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx106[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_106.4bpp.lz");
static const ax_sprite sDragonairSprites106[] = {
	{sDragonairGfx106, ARRAY_COUNT(sDragonairGfx106)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx107[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_107.4bpp.lz");
static const ax_sprite sDragonairSprites107[] = {
	{sDragonairGfx107, ARRAY_COUNT(sDragonairGfx107)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx108[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_108.4bpp.lz");
static const ax_sprite sDragonairSprites108[] = {
	{sDragonairGfx108, ARRAY_COUNT(sDragonairGfx108)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx109[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_109.4bpp.lz");
static const ax_sprite sDragonairSprites109[] = {
	{sDragonairGfx109, ARRAY_COUNT(sDragonairGfx109)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx110[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_110.4bpp.lz");
static const ax_sprite sDragonairSprites110[] = {
	{sDragonairGfx110, ARRAY_COUNT(sDragonairGfx110)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx111[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_111.4bpp.lz");
static const ax_sprite sDragonairSprites111[] = {
	{sDragonairGfx111, ARRAY_COUNT(sDragonairGfx111)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx112[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_112.4bpp.lz");
static const ax_sprite sDragonairSprites112[] = {
	{sDragonairGfx112, ARRAY_COUNT(sDragonairGfx112)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx113[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_113.4bpp.lz");
static const ax_sprite sDragonairSprites113[] = {
	{sDragonairGfx113, ARRAY_COUNT(sDragonairGfx113)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx114[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_114.4bpp.lz");
static const ax_sprite sDragonairSprites114[] = {
	{sDragonairGfx114, ARRAY_COUNT(sDragonairGfx114)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx115[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_115.4bpp.lz");
static const ax_sprite sDragonairSprites115[] = {
	{sDragonairGfx115, ARRAY_COUNT(sDragonairGfx115)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx116[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_116.4bpp.lz");
static const ax_sprite sDragonairSprites116[] = {
	{sDragonairGfx116, ARRAY_COUNT(sDragonairGfx116)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx117[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_117.4bpp.lz");
static const ax_sprite sDragonairSprites117[] = {
	{sDragonairGfx117, ARRAY_COUNT(sDragonairGfx117)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx118[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_118.4bpp.lz");
static const ax_sprite sDragonairSprites118[] = {
	{sDragonairGfx118, ARRAY_COUNT(sDragonairGfx118)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx119[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_119.4bpp.lz");
static const u8 sDragonairGfx119_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_119_1.4bpp.lz");
static const ax_sprite sDragonairSprites119[] = {
	{sDragonairGfx119, ARRAY_COUNT(sDragonairGfx119)}, 
	{NULL, 32}, 
	{sDragonairGfx119_1, ARRAY_COUNT(sDragonairGfx119_1)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx120[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_120.4bpp.lz");
static const ax_sprite sDragonairSprites120[] = {
	{sDragonairGfx120, ARRAY_COUNT(sDragonairGfx120)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx121[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_121.4bpp.lz");
static const ax_sprite sDragonairSprites121[] = {
	{sDragonairGfx121, ARRAY_COUNT(sDragonairGfx121)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx122[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_122.4bpp.lz");
static const ax_sprite sDragonairSprites122[] = {
	{sDragonairGfx122, ARRAY_COUNT(sDragonairGfx122)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx123[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_123.4bpp.lz");
static const ax_sprite sDragonairSprites123[] = {
	{sDragonairGfx123, ARRAY_COUNT(sDragonairGfx123)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx124[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_124.4bpp.lz");
static const ax_sprite sDragonairSprites124[] = {
	{sDragonairGfx124, ARRAY_COUNT(sDragonairGfx124)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx125[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_125.4bpp.lz");
static const ax_sprite sDragonairSprites125[] = {
	{sDragonairGfx125, ARRAY_COUNT(sDragonairGfx125)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx126[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_126.4bpp.lz");
static const ax_sprite sDragonairSprites126[] = {
	{sDragonairGfx126, ARRAY_COUNT(sDragonairGfx126)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx127[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_127.4bpp.lz");
static const ax_sprite sDragonairSprites127[] = {
	{sDragonairGfx127, ARRAY_COUNT(sDragonairGfx127)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx128[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_128.4bpp.lz");
static const ax_sprite sDragonairSprites128[] = {
	{sDragonairGfx128, ARRAY_COUNT(sDragonairGfx128)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx129[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_129.4bpp.lz");
static const ax_sprite sDragonairSprites129[] = {
	{sDragonairGfx129, ARRAY_COUNT(sDragonairGfx129)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx130[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_130.4bpp.lz");
static const ax_sprite sDragonairSprites130[] = {
	{sDragonairGfx130, ARRAY_COUNT(sDragonairGfx130)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx131[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_131.4bpp.lz");
static const ax_sprite sDragonairSprites131[] = {
	{sDragonairGfx131, ARRAY_COUNT(sDragonairGfx131)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx132[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_132.4bpp.lz");
static const ax_sprite sDragonairSprites132[] = {
	{sDragonairGfx132, ARRAY_COUNT(sDragonairGfx132)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx133[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_133.4bpp.lz");
static const ax_sprite sDragonairSprites133[] = {
	{sDragonairGfx133, ARRAY_COUNT(sDragonairGfx133)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx134[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_134.4bpp.lz");
static const ax_sprite sDragonairSprites134[] = {
	{sDragonairGfx134, ARRAY_COUNT(sDragonairGfx134)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx135[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_135.4bpp.lz");
static const ax_sprite sDragonairSprites135[] = {
	{sDragonairGfx135, ARRAY_COUNT(sDragonairGfx135)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx136[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_136.4bpp.lz");
static const ax_sprite sDragonairSprites136[] = {
	{sDragonairGfx136, ARRAY_COUNT(sDragonairGfx136)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx137[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_137.4bpp.lz");
static const ax_sprite sDragonairSprites137[] = {
	{sDragonairGfx137, ARRAY_COUNT(sDragonairGfx137)}, 
	{NULL, 0}
};
static const u8 sDragonairGfx138[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dragonair/sprite_138.4bpp.lz");
static const ax_sprite sDragonairSprites138[] = {
	{sDragonairGfx138, ARRAY_COUNT(sDragonairGfx138)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesDragonair[] = {
	sDragonairPose1,
	sDragonairPose2,
	sDragonairPose3,
	sDragonairPose4,
	sDragonairPose5,
	sDragonairPose6,
	sDragonairPose7,
	sDragonairPose8,
	sDragonairPose9,
	sDragonairPose10,
	sDragonairPose11,
	sDragonairPose12,
	sDragonairPose13,
	sDragonairPose14,
	sDragonairPose15,
	sDragonairPose16,
	sDragonairPose17,
	sDragonairPose18,
	sDragonairPose19,
	sDragonairPose20,
	sDragonairPose21,
	sDragonairPose22,
	sDragonairPose23,
	sDragonairPose24,
	sDragonairPose1,
	sDragonairPose26,
	sDragonairPose27,
	sDragonairPose2,
	sDragonairPose4,
	sDragonairPose30,
	sDragonairPose31,
	sDragonairPose5,
	sDragonairPose7,
	sDragonairPose34,
	sDragonairPose35,
	sDragonairPose8,
	sDragonairPose10,
	sDragonairPose38,
	sDragonairPose39,
	sDragonairPose11,
	sDragonairPose13,
	sDragonairPose42,
	sDragonairPose43,
	sDragonairPose14,
	sDragonairPose16,
	sDragonairPose46,
	sDragonairPose47,
	sDragonairPose17,
	sDragonairPose19,
	sDragonairPose50,
	sDragonairPose51,
	sDragonairPose20,
	sDragonairPose22,
	sDragonairPose54,
	sDragonairPose55,
	sDragonairPose23,
	sDragonairPose1,
	sDragonairPose26,
	sDragonairPose27,
	sDragonairPose2,
	sDragonairPose4,
	sDragonairPose30,
	sDragonairPose31,
	sDragonairPose5,
	sDragonairPose7,
	sDragonairPose34,
	sDragonairPose35,
	sDragonairPose8,
	sDragonairPose10,
	sDragonairPose38,
	sDragonairPose39,
	sDragonairPose11,
	sDragonairPose13,
	sDragonairPose42,
	sDragonairPose43,
	sDragonairPose14,
	sDragonairPose16,
	sDragonairPose46,
	sDragonairPose47,
	sDragonairPose17,
	sDragonairPose19,
	sDragonairPose50,
	sDragonairPose51,
	sDragonairPose20,
	sDragonairPose22,
	sDragonairPose54,
	sDragonairPose55,
	sDragonairPose23,
	sDragonairPose1,
	sDragonairPose2,
	sDragonairPose3,
	sDragonairPose26,
	sDragonairPose27,
	sDragonairPose94,
	sDragonairPose4,
	sDragonairPose5,
	sDragonairPose6,
	sDragonairPose30,
	sDragonairPose31,
	sDragonairPose100,
	sDragonairPose7,
	sDragonairPose8,
	sDragonairPose9,
	sDragonairPose34,
	sDragonairPose35,
	sDragonairPose106,
	sDragonairPose10,
	sDragonairPose11,
	sDragonairPose12,
	sDragonairPose38,
	sDragonairPose39,
	sDragonairPose112,
	sDragonairPose13,
	sDragonairPose14,
	sDragonairPose15,
	sDragonairPose42,
	sDragonairPose43,
	sDragonairPose118,
	sDragonairPose16,
	sDragonairPose17,
	sDragonairPose18,
	sDragonairPose46,
	sDragonairPose47,
	sDragonairPose124,
	sDragonairPose19,
	sDragonairPose20,
	sDragonairPose21,
	sDragonairPose50,
	sDragonairPose51,
	sDragonairPose130,
	sDragonairPose22,
	sDragonairPose23,
	sDragonairPose24,
	sDragonairPose54,
	sDragonairPose55,
	sDragonairPose136,
	sDragonairPose1,
	sDragonairPose2,
	sDragonairPose3,
	sDragonairPose26,
	sDragonairPose27,
	sDragonairPose94,
	sDragonairPose4,
	sDragonairPose5,
	sDragonairPose6,
	sDragonairPose30,
	sDragonairPose31,
	sDragonairPose100,
	sDragonairPose7,
	sDragonairPose8,
	sDragonairPose9,
	sDragonairPose34,
	sDragonairPose35,
	sDragonairPose106,
	sDragonairPose10,
	sDragonairPose11,
	sDragonairPose12,
	sDragonairPose38,
	sDragonairPose39,
	sDragonairPose112,
	sDragonairPose13,
	sDragonairPose14,
	sDragonairPose15,
	sDragonairPose42,
	sDragonairPose43,
	sDragonairPose118,
	sDragonairPose16,
	sDragonairPose17,
	sDragonairPose18,
	sDragonairPose46,
	sDragonairPose47,
	sDragonairPose124,
	sDragonairPose19,
	sDragonairPose20,
	sDragonairPose21,
	sDragonairPose50,
	sDragonairPose51,
	sDragonairPose130,
	sDragonairPose22,
	sDragonairPose23,
	sDragonairPose24,
	sDragonairPose54,
	sDragonairPose55,
	sDragonairPose136,
	sDragonairPose185,
	sDragonairPose186,
	sDragonairPose187,
	sDragonairPose188,
	sDragonairPose189,
	sDragonairPose190,
	sDragonairPose191,
	sDragonairPose192,
	sDragonairPose193,
	sDragonairPose194,
	sDragonairPose1,
	sDragonairPose2,
	sDragonairPose3,
	sDragonairPose4,
	sDragonairPose5,
	sDragonairPose6,
	sDragonairPose7,
	sDragonairPose8,
	sDragonairPose9,
	sDragonairPose10,
	sDragonairPose11,
	sDragonairPose12,
	sDragonairPose13,
	sDragonairPose14,
	sDragonairPose15,
	sDragonairPose16,
	sDragonairPose17,
	sDragonairPose18,
	sDragonairPose19,
	sDragonairPose20,
	sDragonairPose21,
	sDragonairPose22,
	sDragonairPose217,
	sDragonairPose24,
	sDragonairPose1,
	sDragonairPose2,
	sDragonairPose3,
	sDragonairPose4,
	sDragonairPose5,
	sDragonairPose6,
	sDragonairPose7,
	sDragonairPose8,
	sDragonairPose9,
	sDragonairPose10,
	sDragonairPose11,
	sDragonairPose12,
	sDragonairPose13,
	sDragonairPose14,
	sDragonairPose15,
	sDragonairPose16,
	sDragonairPose17,
	sDragonairPose18,
	sDragonairPose19,
	sDragonairPose238,
	sDragonairPose21,
	sDragonairPose22,
	sDragonairPose23,
	sDragonairPose24,
	sDragonairPose26,
	sDragonairPose244,
	sDragonairPose245,
	sDragonairPose246,
	sDragonairPose247,
	sDragonairPose46,
	sDragonairPose249,
	sDragonairPose250,
	sDragonairPose1,
	sDragonairPose2,
	sDragonairPose26,
	sDragonairPose4,
	sDragonairPose255,
	sDragonairPose244,
	sDragonairPose7,
	sDragonairPose8,
	sDragonairPose259,
	sDragonairPose10,
	sDragonairPose11,
	sDragonairPose38,
	sDragonairPose13,
	sDragonairPose14,
	sDragonairPose42,
	sDragonairPose16,
	sDragonairPose17,
	sDragonairPose46,
	sDragonairPose19,
	sDragonairPose20,
	sDragonairPose50,
	sDragonairPose22,
	sDragonairPose23,
	sDragonairPose54,
	sDragonairPose1,
	sDragonairPose22,
	sDragonairPose19,
	sDragonairPose16,
	sDragonairPose13,
	sDragonairPose10,
	sDragonairPose7,
	sDragonairPose4,
	sDragonairPose1,
	sDragonairPose22,
	sDragonairPose19,
	sDragonairPose16,
	sDragonairPose13,
	sDragonairPose10,
	sDragonairPose7,
	sDragonairPose4,
};

static const struct PositionSets sAxPositionsDragonair[] = {
	[0] = { .set = { {-1, -10}, {-3, -4}, {0, -4}, {-1, -6} } },
	[1] = { .set = { {-1, -7}, {-3, -3}, {1, -3}, {0, -6} } },
	[2] = { .set = { {-1, -11}, {-3, -5}, {1, -5}, {-1, -5} } },
	[3] = { .set = { {8, -12}, {3, -5}, {7, -6}, {-1, -5} } },
	[4] = { .set = { {13, -8}, {5, -3}, {9, -4}, {0, -6} } },
	[5] = { .set = { {7, -12}, {2, -6}, {6, -7}, {0, -4} } },
	[6] = { .set = { {10, -14}, {8, -3}, {8, -7}, {2, -4} } },
	[7] = { .set = { {18, -12}, {9, -3}, {11, -7}, {4, -2} } },
	[8] = { .set = { {9, -13}, {8, -4}, {9, -6}, {1, -5} } },
	[9] = { .set = { {9, -15}, {7, -7}, {4, -9}, {4, -5} } },
	[10] = { .set = { {13, -14}, {9, -7}, {6, -9}, {4, -5} } },
	[11] = { .set = { {8, -14}, {7, -7}, {4, -8}, {1, -2} } },
	[12] = { .set = { {0, -17}, {1, -12}, {-2, -12}, {-1, -5} } },
	[13] = { .set = { {0, -21}, {1, -14}, {-2, -14}, {-1, -8} } },
	[14] = { .set = { {0, -17}, {1, -9}, {-2, -9}, {0, -5} } },
	[15] = { .set = { {-8, -15}, {-3, -12}, {-6, -11}, {-2, -3} } },
	[16] = { .set = { {-13, -14}, {-6, -12}, {-9, -11}, {-3, -3} } },
	[17] = { .set = { {-7, -14}, {-1, -11}, {-5, -10}, {-4, -4} } },
	[18] = { .set = { {-9, -14}, {-8, -8}, {-7, -6}, {0, -1} } },
	[19] = { .set = { {-16, -11}, {-12, -7}, {-10, -4}, {0, -2} } },
	[20] = { .set = { {-8, -13}, {-8, -8}, {-7, -6}, {-1, -2} } },
	[21] = { .set = { {-7, -12}, {-7, -6}, {-4, -5}, {2, -2} } },
	[22] = { .set = { {-12, -8}, {-8, -5}, {-5, -3}, {1, 0} } },
	[23] = { .set = { {-6, -12}, {-6, -7}, {-3, -5}, {2, -1} } },
	[24] = { .set = { {-1, -10}, {-3, -4}, {0, -4}, {-1, -6} } },
	[25] = { .set = { {-1, -19}, {-2, -12}, {1, -12}, {0, -6} } },
	[26] = { .set = { {0, 8}, {-4, 4}, {3, 5}, {0, -6} } },
	[27] = { .set = { {-1, -7}, {-3, -3}, {1, -3}, {0, -6} } },
	[28] = { .set = { {8, -12}, {3, -5}, {7, -6}, {-1, -5} } },
	[29] = { .set = { {0, -21}, {1, -15}, {-2, -13}, {-3, -8} } },
	[30] = { .set = { {11, 1}, {4, -7}, {1, -3}, {-5, -6} } },
	[31] = { .set = { {13, -8}, {5, -3}, {9, -4}, {0, -6} } },
	[32] = { .set = { {10, -14}, {8, -3}, {8, -7}, {2, -4} } },
	[33] = { .set = { {6, -22}, {4, -15}, {4, -13}, {0, -5} } },
	[34] = { .set = { {19, -6}, {11, -12}, {10, -10}, {-1, -7} } },
	[35] = { .set = { {18, -12}, {9, -3}, {11, -7}, {4, -2} } },
	[36] = { .set = { {9, -15}, {7, -7}, {4, -9}, {4, -5} } },
	[37] = { .set = { {6, -22}, {0, -18}, {3, -17}, {1, -6} } },
	[38] = { .set = { {18, -20}, {11, -21}, {15, -20}, {6, -12} } },
	[39] = { .set = { {13, -14}, {9, -7}, {6, -9}, {4, -5} } },
	[40] = { .set = { {0, -17}, {1, -12}, {-2, -12}, {-1, -5} } },
	[41] = { .set = { {-1, -20}, {1, -13}, {-3, -13}, {-1, -9} } },
	[42] = { .set = { {0, -22}, {1, -21}, {-2, -21}, {0, -17} } },
	[43] = { .set = { {0, -21}, {1, -14}, {-2, -14}, {-1, -8} } },
	[44] = { .set = { {-8, -15}, {-3, -12}, {-6, -11}, {-2, -3} } },
	[45] = { .set = { {-7, -22}, {-1, -18}, {-4, -17}, {-2, -6} } },
	[46] = { .set = { {-19, -20}, {-12, -21}, {-16, -20}, {-7, -12} } },
	[47] = { .set = { {-13, -14}, {-6, -12}, {-9, -11}, {-3, -3} } },
	[48] = { .set = { {-9, -14}, {-8, -8}, {-7, -6}, {0, -1} } },
	[49] = { .set = { {-5, -22}, {-3, -15}, {-3, -13}, {1, -5} } },
	[50] = { .set = { {-18, -6}, {-10, -12}, {-9, -10}, {2, -7} } },
	[51] = { .set = { {-16, -11}, {-12, -7}, {-10, -4}, {0, -2} } },
	[52] = { .set = { {-7, -12}, {-7, -6}, {-4, -5}, {2, -2} } },
	[53] = { .set = { {0, -21}, {-1, -15}, {2, -13}, {3, -8} } },
	[54] = { .set = { {-11, 1}, {-4, -7}, {-1, -3}, {5, -6} } },
	[55] = { .set = { {-12, -8}, {-8, -5}, {-5, -3}, {1, 0} } },
	[56] = { .set = { {-1, -10}, {-3, -4}, {0, -4}, {-1, -6} } },
	[57] = { .set = { {-1, -19}, {-2, -12}, {1, -12}, {0, -6} } },
	[58] = { .set = { {0, 8}, {-4, 4}, {3, 5}, {0, -6} } },
	[59] = { .set = { {-1, -7}, {-3, -3}, {1, -3}, {0, -6} } },
	[60] = { .set = { {8, -12}, {3, -5}, {7, -6}, {-1, -5} } },
	[61] = { .set = { {0, -21}, {1, -15}, {-2, -13}, {-3, -8} } },
	[62] = { .set = { {11, 1}, {4, -7}, {1, -3}, {-5, -6} } },
	[63] = { .set = { {13, -8}, {5, -3}, {9, -4}, {0, -6} } },
	[64] = { .set = { {10, -14}, {8, -3}, {8, -7}, {2, -4} } },
	[65] = { .set = { {6, -22}, {4, -15}, {4, -13}, {0, -5} } },
	[66] = { .set = { {19, -6}, {11, -12}, {10, -10}, {-1, -7} } },
	[67] = { .set = { {18, -12}, {9, -3}, {11, -7}, {4, -2} } },
	[68] = { .set = { {9, -15}, {7, -7}, {4, -9}, {4, -5} } },
	[69] = { .set = { {6, -22}, {0, -18}, {3, -17}, {1, -6} } },
	[70] = { .set = { {18, -20}, {11, -21}, {15, -20}, {6, -12} } },
	[71] = { .set = { {13, -14}, {9, -7}, {6, -9}, {4, -5} } },
	[72] = { .set = { {0, -17}, {1, -12}, {-2, -12}, {-1, -5} } },
	[73] = { .set = { {-1, -20}, {1, -13}, {-3, -13}, {-1, -9} } },
	[74] = { .set = { {0, -22}, {1, -21}, {-2, -21}, {0, -17} } },
	[75] = { .set = { {0, -21}, {1, -14}, {-2, -14}, {-1, -8} } },
	[76] = { .set = { {-8, -15}, {-3, -12}, {-6, -11}, {-2, -3} } },
	[77] = { .set = { {-7, -22}, {-1, -18}, {-4, -17}, {-2, -6} } },
	[78] = { .set = { {-19, -20}, {-12, -21}, {-16, -20}, {-7, -12} } },
	[79] = { .set = { {-13, -14}, {-6, -12}, {-9, -11}, {-3, -3} } },
	[80] = { .set = { {-9, -14}, {-8, -8}, {-7, -6}, {0, -1} } },
	[81] = { .set = { {-5, -22}, {-3, -15}, {-3, -13}, {1, -5} } },
	[82] = { .set = { {-18, -6}, {-10, -12}, {-9, -10}, {2, -7} } },
	[83] = { .set = { {-16, -11}, {-12, -7}, {-10, -4}, {0, -2} } },
	[84] = { .set = { {-7, -12}, {-7, -6}, {-4, -5}, {2, -2} } },
	[85] = { .set = { {0, -21}, {-1, -15}, {2, -13}, {3, -8} } },
	[86] = { .set = { {-11, 1}, {-4, -7}, {-1, -3}, {5, -6} } },
	[87] = { .set = { {-12, -8}, {-8, -5}, {-5, -3}, {1, 0} } },
	[88] = { .set = { {-1, -10}, {-3, -4}, {0, -4}, {-1, -6} } },
	[89] = { .set = { {-1, -7}, {-3, -3}, {1, -3}, {0, -6} } },
	[90] = { .set = { {-1, -11}, {-3, -5}, {1, -5}, {-1, -5} } },
	[91] = { .set = { {-1, -19}, {-2, -12}, {1, -12}, {0, -6} } },
	[92] = { .set = { {0, 8}, {-4, 4}, {3, 5}, {0, -6} } },
	[93] = { .set = { {-1, -1}, {-4, -4}, {2, -4}, {-2, -5} } },
	[94] = { .set = { {8, -12}, {3, -5}, {7, -6}, {-1, -5} } },
	[95] = { .set = { {13, -8}, {5, -3}, {9, -4}, {0, -6} } },
	[96] = { .set = { {7, -12}, {2, -6}, {6, -7}, {0, -4} } },
	[97] = { .set = { {0, -21}, {1, -15}, {-2, -13}, {-3, -8} } },
	[98] = { .set = { {11, 1}, {4, -7}, {1, -3}, {-5, -6} } },
	[99] = { .set = { {17, -5}, {8, -4}, {7, -1}, {0, -1} } },
	[100] = { .set = { {10, -14}, {8, -3}, {8, -7}, {2, -4} } },
	[101] = { .set = { {18, -12}, {9, -3}, {11, -7}, {4, -2} } },
	[102] = { .set = { {9, -13}, {8, -4}, {9, -6}, {1, -5} } },
	[103] = { .set = { {6, -22}, {4, -15}, {4, -13}, {0, -5} } },
	[104] = { .set = { {19, -6}, {11, -12}, {10, -10}, {-1, -7} } },
	[105] = { .set = { {19, -18}, {9, -13}, {10, -11}, {2, -4} } },
	[106] = { .set = { {9, -15}, {7, -7}, {4, -9}, {4, -5} } },
	[107] = { .set = { {13, -14}, {9, -7}, {6, -9}, {4, -5} } },
	[108] = { .set = { {8, -14}, {7, -7}, {4, -8}, {1, -2} } },
	[109] = { .set = { {6, -22}, {0, -18}, {3, -17}, {1, -6} } },
	[110] = { .set = { {18, -20}, {11, -21}, {15, -20}, {6, -12} } },
	[111] = { .set = { {13, -20}, {4, -17}, {7, -16}, {1, -7} } },
	[112] = { .set = { {0, -17}, {1, -12}, {-2, -12}, {-1, -5} } },
	[113] = { .set = { {0, -21}, {1, -14}, {-2, -14}, {-1, -8} } },
	[114] = { .set = { {0, -17}, {1, -9}, {-2, -9}, {0, -5} } },
	[115] = { .set = { {-1, -20}, {1, -13}, {-3, -13}, {-1, -9} } },
	[116] = { .set = { {0, -22}, {1, -21}, {-2, -21}, {0, -17} } },
	[117] = { .set = { {0, -23}, {1, -16}, {-2, -16}, {0, -11} } },
	[118] = { .set = { {-8, -15}, {-3, -12}, {-6, -11}, {-2, -3} } },
	[119] = { .set = { {-13, -14}, {-6, -12}, {-9, -11}, {-3, -3} } },
	[120] = { .set = { {-7, -14}, {-1, -11}, {-5, -10}, {-4, -4} } },
	[121] = { .set = { {-7, -22}, {-1, -18}, {-4, -17}, {-2, -6} } },
	[122] = { .set = { {-19, -20}, {-12, -21}, {-16, -20}, {-7, -12} } },
	[123] = { .set = { {-14, -20}, {-5, -17}, {-8, -16}, {-2, -7} } },
	[124] = { .set = { {-9, -14}, {-8, -8}, {-7, -6}, {0, -1} } },
	[125] = { .set = { {-16, -11}, {-12, -7}, {-10, -4}, {0, -2} } },
	[126] = { .set = { {-8, -13}, {-8, -8}, {-7, -6}, {-1, -2} } },
	[127] = { .set = { {-5, -22}, {-3, -15}, {-3, -13}, {1, -5} } },
	[128] = { .set = { {-18, -6}, {-10, -12}, {-9, -10}, {2, -7} } },
	[129] = { .set = { {-18, -18}, {-8, -13}, {-9, -11}, {-1, -4} } },
	[130] = { .set = { {-7, -12}, {-7, -6}, {-4, -5}, {2, -2} } },
	[131] = { .set = { {-12, -8}, {-8, -5}, {-5, -3}, {1, 0} } },
	[132] = { .set = { {-6, -12}, {-6, -7}, {-3, -5}, {2, -1} } },
	[133] = { .set = { {0, -21}, {-1, -15}, {2, -13}, {3, -8} } },
	[134] = { .set = { {-11, 1}, {-4, -7}, {-1, -3}, {5, -6} } },
	[135] = { .set = { {-17, -5}, {-8, -4}, {-7, -1}, {0, -1} } },
	[136] = { .set = { {-1, -10}, {-3, -4}, {0, -4}, {-1, -6} } },
	[137] = { .set = { {-1, -7}, {-3, -3}, {1, -3}, {0, -6} } },
	[138] = { .set = { {-1, -11}, {-3, -5}, {1, -5}, {-1, -5} } },
	[139] = { .set = { {-1, -19}, {-2, -12}, {1, -12}, {0, -6} } },
	[140] = { .set = { {0, 8}, {-4, 4}, {3, 5}, {0, -6} } },
	[141] = { .set = { {-1, -1}, {-4, -4}, {2, -4}, {-2, -5} } },
	[142] = { .set = { {8, -12}, {3, -5}, {7, -6}, {-1, -5} } },
	[143] = { .set = { {13, -8}, {5, -3}, {9, -4}, {0, -6} } },
	[144] = { .set = { {7, -12}, {2, -6}, {6, -7}, {0, -4} } },
	[145] = { .set = { {0, -21}, {1, -15}, {-2, -13}, {-3, -8} } },
	[146] = { .set = { {11, 1}, {4, -7}, {1, -3}, {-5, -6} } },
	[147] = { .set = { {17, -5}, {8, -4}, {7, -1}, {0, -1} } },
	[148] = { .set = { {10, -14}, {8, -3}, {8, -7}, {2, -4} } },
	[149] = { .set = { {18, -12}, {9, -3}, {11, -7}, {4, -2} } },
	[150] = { .set = { {9, -13}, {8, -4}, {9, -6}, {1, -5} } },
	[151] = { .set = { {6, -22}, {4, -15}, {4, -13}, {0, -5} } },
	[152] = { .set = { {19, -6}, {11, -12}, {10, -10}, {-1, -7} } },
	[153] = { .set = { {19, -18}, {9, -13}, {10, -11}, {2, -4} } },
	[154] = { .set = { {9, -15}, {7, -7}, {4, -9}, {4, -5} } },
	[155] = { .set = { {13, -14}, {9, -7}, {6, -9}, {4, -5} } },
	[156] = { .set = { {8, -14}, {7, -7}, {4, -8}, {1, -2} } },
	[157] = { .set = { {6, -22}, {0, -18}, {3, -17}, {1, -6} } },
	[158] = { .set = { {18, -20}, {11, -21}, {15, -20}, {6, -12} } },
	[159] = { .set = { {13, -20}, {4, -17}, {7, -16}, {1, -7} } },
	[160] = { .set = { {0, -17}, {1, -12}, {-2, -12}, {-1, -5} } },
	[161] = { .set = { {0, -21}, {1, -14}, {-2, -14}, {-1, -8} } },
	[162] = { .set = { {0, -17}, {1, -9}, {-2, -9}, {0, -5} } },
	[163] = { .set = { {-1, -20}, {1, -13}, {-3, -13}, {-1, -9} } },
	[164] = { .set = { {0, -22}, {1, -21}, {-2, -21}, {0, -17} } },
	[165] = { .set = { {0, -23}, {1, -16}, {-2, -16}, {0, -11} } },
	[166] = { .set = { {-8, -15}, {-3, -12}, {-6, -11}, {-2, -3} } },
	[167] = { .set = { {-13, -14}, {-6, -12}, {-9, -11}, {-3, -3} } },
	[168] = { .set = { {-7, -14}, {-1, -11}, {-5, -10}, {-4, -4} } },
	[169] = { .set = { {-7, -22}, {-1, -18}, {-4, -17}, {-2, -6} } },
	[170] = { .set = { {-19, -20}, {-12, -21}, {-16, -20}, {-7, -12} } },
	[171] = { .set = { {-14, -20}, {-5, -17}, {-8, -16}, {-2, -7} } },
	[172] = { .set = { {-9, -14}, {-8, -8}, {-7, -6}, {0, -1} } },
	[173] = { .set = { {-16, -11}, {-12, -7}, {-10, -4}, {0, -2} } },
	[174] = { .set = { {-8, -13}, {-8, -8}, {-7, -6}, {-1, -2} } },
	[175] = { .set = { {-5, -22}, {-3, -15}, {-3, -13}, {1, -5} } },
	[176] = { .set = { {-18, -6}, {-10, -12}, {-9, -10}, {2, -7} } },
	[177] = { .set = { {-18, -18}, {-8, -13}, {-9, -11}, {-1, -4} } },
	[178] = { .set = { {-7, -12}, {-7, -6}, {-4, -5}, {2, -2} } },
	[179] = { .set = { {-12, -8}, {-8, -5}, {-5, -3}, {1, 0} } },
	[180] = { .set = { {-6, -12}, {-6, -7}, {-3, -5}, {2, -1} } },
	[181] = { .set = { {0, -21}, {-1, -15}, {2, -13}, {3, -8} } },
	[182] = { .set = { {-11, 1}, {-4, -7}, {-1, -3}, {5, -6} } },
	[183] = { .set = { {-17, -5}, {-8, -4}, {-7, -1}, {0, -1} } },
	[184] = { .set = { {-6, -11}, {-4, -7}, {-2, -5}, {-3, -3} } },
	[185] = { .set = { {-6, -10}, {-4, -7}, {-1, -5}, {-4, -2} } },
	[186] = { .set = { {-2, -13}, {-4, -6}, {0, -6}, {-2, -7} } },
	[187] = { .set = { {4, -13}, {5, -8}, {2, -6}, {2, -3} } },
	[188] = { .set = { {6, -15}, {8, -10}, {7, -7}, {2, -6} } },
	[189] = { .set = { {5, -15}, {0, -11}, {3, -11}, {3, -4} } },
	[190] = { .set = { {0, -15}, {2, -10}, {-2, -10}, {0, -6} } },
	[191] = { .set = { {-6, -15}, {-1, -11}, {-4, -11}, {-4, -4} } },
	[192] = { .set = { {-7, -15}, {-9, -10}, {-8, -7}, {-3, -6} } },
	[193] = { .set = { {-5, -13}, {-6, -8}, {-3, -6}, {-3, -3} } },
	[194] = { .set = { {-1, -10}, {-3, -4}, {0, -4}, {-1, -6} } },
	[195] = { .set = { {-1, -7}, {-3, -3}, {1, -3}, {0, -6} } },
	[196] = { .set = { {-1, -11}, {-3, -5}, {1, -5}, {-1, -5} } },
	[197] = { .set = { {8, -12}, {3, -5}, {7, -6}, {-1, -5} } },
	[198] = { .set = { {13, -8}, {5, -3}, {9, -4}, {0, -6} } },
	[199] = { .set = { {7, -12}, {2, -6}, {6, -7}, {0, -4} } },
	[200] = { .set = { {10, -14}, {8, -3}, {8, -7}, {2, -4} } },
	[201] = { .set = { {18, -12}, {9, -3}, {11, -7}, {4, -2} } },
	[202] = { .set = { {9, -13}, {8, -4}, {9, -6}, {1, -5} } },
	[203] = { .set = { {9, -15}, {7, -7}, {4, -9}, {4, -5} } },
	[204] = { .set = { {13, -14}, {9, -7}, {6, -9}, {4, -5} } },
	[205] = { .set = { {8, -14}, {7, -7}, {4, -8}, {1, -2} } },
	[206] = { .set = { {0, -17}, {1, -12}, {-2, -12}, {-1, -5} } },
	[207] = { .set = { {0, -21}, {1, -14}, {-2, -14}, {-1, -8} } },
	[208] = { .set = { {0, -17}, {1, -9}, {-2, -9}, {0, -5} } },
	[209] = { .set = { {-8, -15}, {-3, -12}, {-6, -11}, {-2, -3} } },
	[210] = { .set = { {-13, -14}, {-6, -12}, {-9, -11}, {-3, -3} } },
	[211] = { .set = { {-7, -14}, {-1, -11}, {-5, -10}, {-4, -4} } },
	[212] = { .set = { {-9, -14}, {-8, -8}, {-7, -6}, {0, -1} } },
	[213] = { .set = { {-16, -11}, {-12, -7}, {-10, -4}, {0, -2} } },
	[214] = { .set = { {-8, -13}, {-8, -8}, {-7, -6}, {-1, -2} } },
	[215] = { .set = { {-7, -12}, {-7, -6}, {-4, -5}, {2, -2} } },
	[216] = { .set = { {-11, -9}, {-7, -6}, {-4, -4}, {2, -1} } },
	[217] = { .set = { {-6, -12}, {-6, -7}, {-3, -5}, {2, -1} } },
	[218] = { .set = { {-1, -10}, {-3, -4}, {0, -4}, {-1, -6} } },
	[219] = { .set = { {-1, -7}, {-3, -3}, {1, -3}, {0, -6} } },
	[220] = { .set = { {-1, -11}, {-3, -5}, {1, -5}, {-1, -5} } },
	[221] = { .set = { {8, -12}, {3, -5}, {7, -6}, {-1, -5} } },
	[222] = { .set = { {13, -8}, {5, -3}, {9, -4}, {0, -6} } },
	[223] = { .set = { {7, -12}, {2, -6}, {6, -7}, {0, -4} } },
	[224] = { .set = { {10, -14}, {8, -3}, {8, -7}, {2, -4} } },
	[225] = { .set = { {18, -12}, {9, -3}, {11, -7}, {4, -2} } },
	[226] = { .set = { {9, -13}, {8, -4}, {9, -6}, {1, -5} } },
	[227] = { .set = { {9, -15}, {7, -7}, {4, -9}, {4, -5} } },
	[228] = { .set = { {13, -14}, {9, -7}, {6, -9}, {4, -5} } },
	[229] = { .set = { {8, -14}, {7, -7}, {4, -8}, {1, -2} } },
	[230] = { .set = { {0, -17}, {1, -12}, {-2, -12}, {-1, -5} } },
	[231] = { .set = { {0, -21}, {1, -14}, {-2, -14}, {-1, -8} } },
	[232] = { .set = { {0, -17}, {1, -9}, {-2, -9}, {0, -5} } },
	[233] = { .set = { {-8, -15}, {-3, -12}, {-6, -11}, {-2, -3} } },
	[234] = { .set = { {-13, -14}, {-6, -12}, {-9, -11}, {-3, -3} } },
	[235] = { .set = { {-7, -14}, {-1, -11}, {-5, -10}, {-4, -4} } },
	[236] = { .set = { {-9, -14}, {-8, -8}, {-7, -6}, {0, -1} } },
	[237] = { .set = { {-15, -11}, {-11, -7}, {-9, -4}, {1, -2} } },
	[238] = { .set = { {-8, -13}, {-8, -8}, {-7, -6}, {-1, -2} } },
	[239] = { .set = { {-7, -12}, {-7, -6}, {-4, -5}, {2, -2} } },
	[240] = { .set = { {-12, -8}, {-8, -5}, {-5, -3}, {1, 0} } },
	[241] = { .set = { {-6, -12}, {-6, -7}, {-3, -5}, {2, -1} } },
	[242] = { .set = { {-1, -19}, {-2, -12}, {1, -12}, {0, -6} } },
	[243] = { .set = { {4, -21}, {5, -15}, {2, -13}, {1, -8} } },
	[244] = { .set = { {8, -22}, {6, -15}, {6, -13}, {2, -5} } },
	[245] = { .set = { {7, -22}, {1, -18}, {4, -17}, {2, -6} } },
	[246] = { .set = { {-1, -21}, {1, -14}, {-3, -14}, {-1, -10} } },
	[247] = { .set = { {-7, -22}, {-1, -18}, {-4, -17}, {-2, -6} } },
	[248] = { .set = { {-8, -22}, {-6, -15}, {-6, -13}, {-2, -5} } },
	[249] = { .set = { {-5, -21}, {-6, -15}, {-3, -13}, {-2, -8} } },
	[250] = { .set = { {-1, -10}, {-3, -4}, {0, -4}, {-1, -6} } },
	[251] = { .set = { {-1, -7}, {-3, -3}, {1, -3}, {0, -6} } },
	[252] = { .set = { {-1, -19}, {-2, -12}, {1, -12}, {0, -6} } },
	[253] = { .set = { {8, -12}, {3, -5}, {7, -6}, {-1, -5} } },
	[254] = { .set = { {11, -8}, {3, -3}, {7, -4}, {-2, -6} } },
	[255] = { .set = { {4, -21}, {5, -15}, {2, -13}, {1, -8} } },
	[256] = { .set = { {10, -14}, {8, -3}, {8, -7}, {2, -4} } },
	[257] = { .set = { {18, -12}, {9, -3}, {11, -7}, {4, -2} } },
	[258] = { .set = { {7, -22}, {5, -15}, {5, -13}, {1, -5} } },
	[259] = { .set = { {9, -15}, {7, -7}, {4, -9}, {4, -5} } },
	[260] = { .set = { {13, -14}, {9, -7}, {6, -9}, {4, -5} } },
	[261] = { .set = { {6, -22}, {0, -18}, {3, -17}, {1, -6} } },
	[262] = { .set = { {0, -17}, {1, -12}, {-2, -12}, {-1, -5} } },
	[263] = { .set = { {0, -21}, {1, -14}, {-2, -14}, {-1, -8} } },
	[264] = { .set = { {-1, -20}, {1, -13}, {-3, -13}, {-1, -9} } },
	[265] = { .set = { {-8, -15}, {-3, -12}, {-6, -11}, {-2, -3} } },
	[266] = { .set = { {-13, -14}, {-6, -12}, {-9, -11}, {-3, -3} } },
	[267] = { .set = { {-7, -22}, {-1, -18}, {-4, -17}, {-2, -6} } },
	[268] = { .set = { {-9, -14}, {-8, -8}, {-7, -6}, {0, -1} } },
	[269] = { .set = { {-16, -11}, {-12, -7}, {-10, -4}, {0, -2} } },
	[270] = { .set = { {-5, -22}, {-3, -15}, {-3, -13}, {1, -5} } },
	[271] = { .set = { {-7, -12}, {-7, -6}, {-4, -5}, {2, -2} } },
	[272] = { .set = { {-12, -8}, {-8, -5}, {-5, -3}, {1, 0} } },
	[273] = { .set = { {0, -21}, {-1, -15}, {2, -13}, {3, -8} } },
	[274] = { .set = { {-1, -10}, {-3, -4}, {0, -4}, {-1, -6} } },
	[275] = { .set = { {-7, -12}, {-7, -6}, {-4, -5}, {2, -2} } },
	[276] = { .set = { {-9, -14}, {-8, -8}, {-7, -6}, {0, -1} } },
	[277] = { .set = { {-8, -15}, {-3, -12}, {-6, -11}, {-2, -3} } },
	[278] = { .set = { {0, -17}, {1, -12}, {-2, -12}, {-1, -5} } },
	[279] = { .set = { {9, -15}, {7, -7}, {4, -9}, {4, -5} } },
	[280] = { .set = { {10, -14}, {8, -3}, {8, -7}, {2, -4} } },
	[281] = { .set = { {8, -12}, {3, -5}, {7, -6}, {-1, -5} } },
	[282] = { .set = { {-1, -10}, {-3, -4}, {0, -4}, {-1, -6} } },
	[283] = { .set = { {-7, -12}, {-7, -6}, {-4, -5}, {2, -2} } },
	[284] = { .set = { {-9, -14}, {-8, -8}, {-7, -6}, {0, -1} } },
	[285] = { .set = { {-8, -15}, {-3, -12}, {-6, -11}, {-2, -3} } },
	[286] = { .set = { {0, -17}, {1, -12}, {-2, -12}, {-1, -5} } },
	[287] = { .set = { {9, -15}, {7, -7}, {4, -9}, {4, -5} } },
	[288] = { .set = { {10, -14}, {8, -3}, {8, -7}, {2, -4} } },
	[289] = { .set = { {8, -12}, {3, -5}, {7, -6}, {-1, -5} } },
};

static const ax_anim *const sDragonairAnimTable1[] = {
	AX_ANIM_PTR(sDragonairAnims_1_1),
	AX_ANIM_PTR(sDragonairAnims_1_2),
	AX_ANIM_PTR(sDragonairAnims_1_3),
	AX_ANIM_PTR(sDragonairAnims_1_4),
	AX_ANIM_PTR(sDragonairAnims_1_5),
	AX_ANIM_PTR(sDragonairAnims_1_6),
	AX_ANIM_PTR(sDragonairAnims_1_7),
	AX_ANIM_PTR(sDragonairAnims_1_8),
};

static const ax_anim *const sDragonairAnimTable2[] = {
	AX_ANIM_PTR(sDragonairAnims_2_1),
	AX_ANIM_PTR(sDragonairAnims_2_2),
	AX_ANIM_PTR(sDragonairAnims_2_3),
	AX_ANIM_PTR(sDragonairAnims_2_4),
	AX_ANIM_PTR(sDragonairAnims_2_5),
	AX_ANIM_PTR(sDragonairAnims_2_6),
	AX_ANIM_PTR(sDragonairAnims_2_7),
	AX_ANIM_PTR(sDragonairAnims_2_8),
};

static const ax_anim *const sDragonairAnimTable3[] = {
	AX_ANIM_PTR(sDragonairAnims_3_1),
	AX_ANIM_PTR(sDragonairAnims_3_2),
	AX_ANIM_PTR(sDragonairAnims_3_3),
	AX_ANIM_PTR(sDragonairAnims_3_4),
	AX_ANIM_PTR(sDragonairAnims_3_5),
	AX_ANIM_PTR(sDragonairAnims_3_6),
	AX_ANIM_PTR(sDragonairAnims_3_7),
	AX_ANIM_PTR(sDragonairAnims_3_8),
};

static const ax_anim *const sDragonairAnimTable4[] = {
	AX_ANIM_PTR(sDragonairAnims_4_1),
	AX_ANIM_PTR(sDragonairAnims_4_2),
	AX_ANIM_PTR(sDragonairAnims_4_3),
	AX_ANIM_PTR(sDragonairAnims_4_4),
	AX_ANIM_PTR(sDragonairAnims_4_5),
	AX_ANIM_PTR(sDragonairAnims_4_6),
	AX_ANIM_PTR(sDragonairAnims_4_7),
	AX_ANIM_PTR(sDragonairAnims_4_8),
};

static const ax_anim *const sDragonairAnimTable5[] = {
	AX_ANIM_PTR(sDragonairAnims_5_1),
	AX_ANIM_PTR(sDragonairAnims_5_2),
	AX_ANIM_PTR(sDragonairAnims_5_3),
	AX_ANIM_PTR(sDragonairAnims_5_4),
	AX_ANIM_PTR(sDragonairAnims_5_5),
	AX_ANIM_PTR(sDragonairAnims_5_6),
	AX_ANIM_PTR(sDragonairAnims_5_7),
	AX_ANIM_PTR(sDragonairAnims_5_8),
};

static const ax_anim *const sDragonairAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02383),
	AX_ANIM_PTR(gAxSharedAnim_02383),
	AX_ANIM_PTR(gAxSharedAnim_02383),
	AX_ANIM_PTR(gAxSharedAnim_02383),
	AX_ANIM_PTR(gAxSharedAnim_02383),
	AX_ANIM_PTR(gAxSharedAnim_02383),
	AX_ANIM_PTR(gAxSharedAnim_02383),
	AX_ANIM_PTR(gAxSharedAnim_02383),
};

static const ax_anim *const sDragonairAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_01001),
	AX_ANIM_PTR(gAxSharedAnim_01020),
	AX_ANIM_PTR(gAxSharedAnim_01032),
	AX_ANIM_PTR(gAxSharedAnim_01050),
	AX_ANIM_PTR(gAxSharedAnim_01081),
	AX_ANIM_PTR(gAxSharedAnim_01096),
	AX_ANIM_PTR(gAxSharedAnim_01114),
	AX_ANIM_PTR(gAxSharedAnim_01129),
};

static const ax_anim *const sDragonairAnimTable8[] = {
	AX_ANIM_PTR(sDragonairAnims_8_1),
	AX_ANIM_PTR(sDragonairAnims_8_2),
	AX_ANIM_PTR(sDragonairAnims_8_3),
	AX_ANIM_PTR(sDragonairAnims_8_4),
	AX_ANIM_PTR(sDragonairAnims_8_5),
	AX_ANIM_PTR(sDragonairAnims_8_6),
	AX_ANIM_PTR(sDragonairAnims_8_7),
	AX_ANIM_PTR(sDragonairAnims_8_8),
};

static const ax_anim *const sDragonairAnimTable9[] = {
	AX_ANIM_PTR(sDragonairAnims_9_1),
	AX_ANIM_PTR(sDragonairAnims_9_2),
	AX_ANIM_PTR(sDragonairAnims_9_3),
	AX_ANIM_PTR(sDragonairAnims_9_4),
	AX_ANIM_PTR(sDragonairAnims_9_5),
	AX_ANIM_PTR(sDragonairAnims_9_6),
	AX_ANIM_PTR(sDragonairAnims_9_7),
	AX_ANIM_PTR(sDragonairAnims_9_8),
};

static const ax_anim *const sDragonairAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01585),
	AX_ANIM_PTR(gAxSharedAnim_01590),
	AX_ANIM_PTR(gAxSharedAnim_01596),
	AX_ANIM_PTR(gAxSharedAnim_01601),
	AX_ANIM_PTR(gAxSharedAnim_01604),
	AX_ANIM_PTR(gAxSharedAnim_01611),
	AX_ANIM_PTR(gAxSharedAnim_01619),
	AX_ANIM_PTR(gAxSharedAnim_01625),
};

static const ax_anim *const sDragonairAnimTable11[] = {
	AX_ANIM_PTR(sDragonairAnims_11_1),
	AX_ANIM_PTR(sDragonairAnims_11_2),
	AX_ANIM_PTR(sDragonairAnims_11_3),
	AX_ANIM_PTR(sDragonairAnims_11_4),
	AX_ANIM_PTR(sDragonairAnims_11_5),
	AX_ANIM_PTR(sDragonairAnims_11_6),
	AX_ANIM_PTR(sDragonairAnims_11_7),
	AX_ANIM_PTR(sDragonairAnims_11_8),
};

static const ax_anim *const sDragonairAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01742),
	AX_ANIM_PTR(gAxSharedAnim_01770),
	AX_ANIM_PTR(gAxSharedAnim_01765),
	AX_ANIM_PTR(gAxSharedAnim_01752),
	AX_ANIM_PTR(gAxSharedAnim_01751),
	AX_ANIM_PTR(gAxSharedAnim_01748),
	AX_ANIM_PTR(gAxSharedAnim_01745),
	AX_ANIM_PTR(gAxSharedAnim_01743),
};

static const ax_anim *const sDragonairAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01772),
	AX_ANIM_PTR(gAxSharedAnim_01789),
	AX_ANIM_PTR(gAxSharedAnim_01788),
	AX_ANIM_PTR(gAxSharedAnim_01786),
	AX_ANIM_PTR(gAxSharedAnim_01783),
	AX_ANIM_PTR(gAxSharedAnim_01781),
	AX_ANIM_PTR(gAxSharedAnim_01779),
	AX_ANIM_PTR(gAxSharedAnim_01776),
};

static const ax_anim *const *const sAxAnimationsDragonair[] = {
	sDragonairAnimTable1,
	sDragonairAnimTable2,
	sDragonairAnimTable3,
	sDragonairAnimTable4,
	sDragonairAnimTable5,
	sDragonairAnimTable6,
	sDragonairAnimTable7,
	sDragonairAnimTable8,
	sDragonairAnimTable9,
	sDragonairAnimTable10,
	sDragonairAnimTable11,
	sDragonairAnimTable12,
	sDragonairAnimTable13,
};

static const ax_sprite *const sAxSpritesDragonair[] = {
	sDragonairSprites1,
	sDragonairSprites2,
	sDragonairSprites3,
	sDragonairSprites4,
	sDragonairSprites5,
	sDragonairSprites6,
	sDragonairSprites7,
	sDragonairSprites8,
	sDragonairSprites9,
	sDragonairSprites10,
	sDragonairSprites11,
	sDragonairSprites12,
	sDragonairSprites13,
	sDragonairSprites14,
	sDragonairSprites15,
	sDragonairSprites16,
	sDragonairSprites17,
	sDragonairSprites18,
	sDragonairSprites19,
	sDragonairSprites20,
	sDragonairSprites21,
	sDragonairSprites22,
	sDragonairSprites23,
	sDragonairSprites24,
	sDragonairSprites25,
	sDragonairSprites26,
	sDragonairSprites27,
	sDragonairSprites28,
	sDragonairSprites29,
	sDragonairSprites30,
	sDragonairSprites31,
	sDragonairSprites32,
	sDragonairSprites33,
	sDragonairSprites34,
	sDragonairSprites35,
	sDragonairSprites36,
	sDragonairSprites37,
	sDragonairSprites38,
	sDragonairSprites39,
	sDragonairSprites40,
	sDragonairSprites41,
	sDragonairSprites42,
	sDragonairSprites43,
	sDragonairSprites44,
	sDragonairSprites45,
	sDragonairSprites46,
	sDragonairSprites47,
	sDragonairSprites48,
	sDragonairSprites49,
	sDragonairSprites50,
	sDragonairSprites51,
	sDragonairSprites52,
	sDragonairSprites53,
	sDragonairSprites54,
	sDragonairSprites55,
	sDragonairSprites56,
	sDragonairSprites57,
	sDragonairSprites58,
	sDragonairSprites59,
	sDragonairSprites60,
	sDragonairSprites61,
	sDragonairSprites62,
	sDragonairSprites63,
	sDragonairSprites64,
	sDragonairSprites65,
	sDragonairSprites66,
	sDragonairSprites67,
	sDragonairSprites68,
	sDragonairSprites69,
	sDragonairSprites70,
	sDragonairSprites71,
	sDragonairSprites72,
	sDragonairSprites73,
	sDragonairSprites74,
	sDragonairSprites75,
	sDragonairSprites76,
	sDragonairSprites77,
	sDragonairSprites78,
	sDragonairSprites79,
	sDragonairSprites80,
	sDragonairSprites81,
	sDragonairSprites82,
	sDragonairSprites83,
	sDragonairSprites84,
	sDragonairSprites85,
	sDragonairSprites86,
	sDragonairSprites87,
	sDragonairSprites88,
	sDragonairSprites89,
	sDragonairSprites90,
	sDragonairSprites91,
	sDragonairSprites92,
	sDragonairSprites93,
	sDragonairSprites94,
	sDragonairSprites95,
	sDragonairSprites96,
	sDragonairSprites97,
	sDragonairSprites98,
	sDragonairSprites99,
	sDragonairSprites100,
	sDragonairSprites101,
	sDragonairSprites102,
	sDragonairSprites103,
	sDragonairSprites104,
	sDragonairSprites105,
	sDragonairSprites106,
	sDragonairSprites107,
	sDragonairSprites108,
	sDragonairSprites109,
	sDragonairSprites110,
	sDragonairSprites111,
	sDragonairSprites112,
	sDragonairSprites113,
	sDragonairSprites114,
	sDragonairSprites115,
	sDragonairSprites116,
	sDragonairSprites117,
	sDragonairSprites118,
	sDragonairSprites119,
	sDragonairSprites120,
	sDragonairSprites121,
	sDragonairSprites122,
	sDragonairSprites123,
	sDragonairSprites124,
	sDragonairSprites125,
	sDragonairSprites126,
	sDragonairSprites127,
	sDragonairSprites128,
	sDragonairSprites129,
	sDragonairSprites130,
	sDragonairSprites131,
	sDragonairSprites132,
	sDragonairSprites133,
	sDragonairSprites134,
	sDragonairSprites135,
	sDragonairSprites136,
	sDragonairSprites137,
	sDragonairSprites138,
};

static const axmain sAxMainDragonair = {
	.poses = sAxPosesDragonair,
	.animations = sAxAnimationsDragonair,
	.animCount = ARRAY_COUNT(sAxAnimationsDragonair),
	.spriteData = sAxSpritesDragonair,
	.positions = sAxPositionsDragonair,
};
