/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainEntei;
const SiroArchive gAxEntei = {"SIRO", &sAxMainEntei};

static const ax_pose sEnteiPose1[] = {
	AX_POSE(0, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose3[] = {
	AX_POSE(2, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose4[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose7[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose8[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose9[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose10[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose11[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose12[] = {
	AX_POSE(11, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 12)),
	AX_POSE(12, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE(13, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 12)),
	AX_POSE(14, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 12)),
	AX_POSE(15, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose13[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose14[] = {
	AX_POSE(17, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(18, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 12)),
	AX_POSE(19, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 12)),
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 12)),
	AX_POSE(21, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose15[] = {
	AX_POSE(22, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(23, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 12)),
	AX_POSE(24, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 12)),
	AX_POSE(25, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 12)),
	AX_POSE(26, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose16[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose17[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose18[] = {
	AX_POSE(11, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(12, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 12)),
	AX_POSE(15, OAM1(3, ST_OAM_SQUARE     , 2), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 12)),
	AX_POSE(13, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 12)),
	AX_POSE(14, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose19[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose20[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose21[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose22[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose23[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose74[] = {
	AX_POSE(27, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(28, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE(29, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 12)),
	AX_POSE(30, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 12)),
	AX_POSE(31, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose75[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose77[] = {
	AX_POSE(33, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(34, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE(35, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 12)),
	AX_POSE(36, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 12)),
	AX_POSE(37, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose78[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose80[] = {
	AX_POSE(39, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(40, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 12)),
	AX_POSE(41, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(6, 3, 12)),
	AX_POSE(42, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(7, 3, 12)),
	AX_POSE(43, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE(44, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 12)),
	AX_POSE(45, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose81[] = {
	AX_POSE(46, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 12)),
	AX_POSE(47, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(4, 3, 12)),
	AX_POSE(48, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(20, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 12)),
	AX_POSE(49, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(9, 3, 12)),
	AX_POSE(50, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 12)),
	AX_POSE(51, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(20, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 12)),
	AX_POSE(52, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 12)),
	AX_POSE(53, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(15, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose83[] = {
	AX_POSE(54, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(55, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 12)),
	AX_POSE(56, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 12)),
	AX_POSE(57, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 12)),
	AX_POSE(58, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(11, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose84[] = {
	AX_POSE(59, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose86[] = {
	AX_POSE(60, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(61, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE(62, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 12)),
	AX_POSE(63, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 12)),
	AX_POSE(64, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 12)),
	AX_POSE(65, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose87[] = {
	AX_POSE(66, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose89[] = {
	AX_POSE(54, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(55, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE(56, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 12)),
	AX_POSE(57, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 12)),
	AX_POSE(58, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose90[] = {
	AX_POSE(59, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose92[] = {
	AX_POSE(39, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(40, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 12)),
	AX_POSE(41, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(6, 3, 12)),
	AX_POSE(42, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(7, 3, 12)),
	AX_POSE(43, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE(44, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 12)),
	AX_POSE(45, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose93[] = {
	AX_POSE(46, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(47, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(4, 3, 12)),
	AX_POSE(48, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(229, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE(49, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(9, 3, 12)),
	AX_POSE(50, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 12)),
	AX_POSE(51, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(229, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 12)),
	AX_POSE(52, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 12)),
	AX_POSE(53, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose95[] = {
	AX_POSE(33, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(34, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 12)),
	AX_POSE(35, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 12)),
	AX_POSE(36, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 12)),
	AX_POSE(37, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose96[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose100[] = {
	AX_POSE(67, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose104[] = {
	AX_POSE(68, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose108[] = {
	AX_POSE(69, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 12)),
	AX_POSE(70, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(4, 3, 12)),
	AX_POSE(71, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(5, 3, 12)),
	AX_POSE(72, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(6, 3, 12)),
	AX_POSE(73, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE(74, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 12)),
	AX_POSE(75, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 12)),
	AX_POSE(76, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose112[] = {
	AX_POSE(77, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose116[] = {
	AX_POSE(78, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose120[] = {
	AX_POSE(77, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose124[] = {
	AX_POSE(69, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(70, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 12)),
	AX_POSE(71, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(5, 3, 12)),
	AX_POSE(72, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(6, 3, 12)),
	AX_POSE(73, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE(74, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 12)),
	AX_POSE(75, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 12)),
	AX_POSE(76, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose128[] = {
	AX_POSE(68, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose129[] = {
	AX_POSE(79, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose130[] = {
	AX_POSE(80, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose131[] = {
	AX_POSE(81, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose132[] = {
	AX_POSE(82, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose133[] = {
	AX_POSE(83, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose134[] = {
	AX_POSE(84, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose135[] = {
	AX_POSE(85, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose136[] = {
	AX_POSE(84, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose137[] = {
	AX_POSE(83, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose138[] = {
	AX_POSE(82, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose172[] = {
	AX_POSE(68, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose174[] = {
	AX_POSE(77, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose175[] = {
	AX_POSE(78, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose176[] = {
	AX_POSE(77, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose178[] = {
	AX_POSE(68, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose184[] = {
	AX_POSE(68, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose187[] = {
	AX_POSE(69, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 12)),
	AX_POSE(70, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(4, 3, 12)),
	AX_POSE(71, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(5, 3, 12)),
	AX_POSE(72, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(6, 3, 12)),
	AX_POSE(73, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 12)),
	AX_POSE(74, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 12)),
	AX_POSE(75, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 12)),
	AX_POSE(76, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose190[] = {
	AX_POSE(77, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose196[] = {
	AX_POSE(77, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose199[] = {
	AX_POSE(69, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE(70, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 12)),
	AX_POSE(71, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(5, 3, 12)),
	AX_POSE(72, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(6, 3, 12)),
	AX_POSE(73, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 12)),
	AX_POSE(74, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 12)),
	AX_POSE(75, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 12)),
	AX_POSE(76, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose202[] = {
	AX_POSE(68, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const ax_pose sEnteiPose221[] = {
	AX_POSE(86, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 12)),
	AX_POSE_TERMINATOR
};
static const u8 sEnteiAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_2_1.lz");
static const u8 sEnteiAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_2_2.lz");
static const u8 sEnteiAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_2_3.lz");
static const u8 sEnteiAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_2_4.lz");
static const u8 sEnteiAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_2_5.lz");
static const u8 sEnteiAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_2_6.lz");
static const u8 sEnteiAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_2_7.lz");
static const u8 sEnteiAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_2_8.lz");
static const u8 sEnteiAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_3_1.lz");
static const u8 sEnteiAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_3_2.lz");
static const u8 sEnteiAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_3_3.lz");
static const u8 sEnteiAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_3_4.lz");
static const u8 sEnteiAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_3_5.lz");
static const u8 sEnteiAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_3_6.lz");
static const u8 sEnteiAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_3_7.lz");
static const u8 sEnteiAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_3_8.lz");
static const u8 sEnteiAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_4_1.lz");
static const u8 sEnteiAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_4_2.lz");
static const u8 sEnteiAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_4_3.lz");
static const u8 sEnteiAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_4_4.lz");
static const u8 sEnteiAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_4_5.lz");
static const u8 sEnteiAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_4_6.lz");
static const u8 sEnteiAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_4_7.lz");
static const u8 sEnteiAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_4_8.lz");
static const u8 sEnteiAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_5_1.lz");
static const u8 sEnteiAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_5_2.lz");
static const u8 sEnteiAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_5_3.lz");
static const u8 sEnteiAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_5_4.lz");
static const u8 sEnteiAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_5_5.lz");
static const u8 sEnteiAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_5_6.lz");
static const u8 sEnteiAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_5_7.lz");
static const u8 sEnteiAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_5_8.lz");
static const u8 sEnteiAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_9_1.lz");
static const u8 sEnteiAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_9_2.lz");
static const u8 sEnteiAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_9_4.lz");
static const u8 sEnteiAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_9_5.lz");
static const u8 sEnteiAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_9_6.lz");
static const u8 sEnteiAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_9_8.lz");
static const u8 sEnteiAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_11_1.lz");
static const u8 sEnteiAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_11_2.lz");
static const u8 sEnteiAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_11_4.lz");
static const u8 sEnteiAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_11_6.lz");
static const u8 sEnteiAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_11_7.lz");
static const u8 sEnteiAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_11_8.lz");
static const u8 sEnteiAnims_14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/entei/sEnteiAnims_14_1.lz");

static const u8 sEnteiGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_1.4bpp.lz");
static const ax_sprite sEnteiSprites1[] = {
	{sEnteiGfx1, ARRAY_COUNT(sEnteiGfx1)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_2.4bpp.lz");
static const ax_sprite sEnteiSprites2[] = {
	{sEnteiGfx2, ARRAY_COUNT(sEnteiGfx2)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_3.4bpp.lz");
static const ax_sprite sEnteiSprites3[] = {
	{sEnteiGfx3, ARRAY_COUNT(sEnteiGfx3)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_4.4bpp.lz");
static const ax_sprite sEnteiSprites4[] = {
	{sEnteiGfx4, ARRAY_COUNT(sEnteiGfx4)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_5.4bpp.lz");
static const ax_sprite sEnteiSprites5[] = {
	{sEnteiGfx5, ARRAY_COUNT(sEnteiGfx5)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_6.4bpp.lz");
static const ax_sprite sEnteiSprites6[] = {
	{sEnteiGfx6, ARRAY_COUNT(sEnteiGfx6)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_7.4bpp.lz");
static const ax_sprite sEnteiSprites7[] = {
	{sEnteiGfx7, ARRAY_COUNT(sEnteiGfx7)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_8.4bpp.lz");
static const ax_sprite sEnteiSprites8[] = {
	{sEnteiGfx8, ARRAY_COUNT(sEnteiGfx8)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_9.4bpp.lz");
static const ax_sprite sEnteiSprites9[] = {
	{sEnteiGfx9, ARRAY_COUNT(sEnteiGfx9)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_10.4bpp.lz");
static const ax_sprite sEnteiSprites10[] = {
	{sEnteiGfx10, ARRAY_COUNT(sEnteiGfx10)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_11.4bpp.lz");
static const ax_sprite sEnteiSprites11[] = {
	{sEnteiGfx11, ARRAY_COUNT(sEnteiGfx11)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_12.4bpp.lz");
static const ax_sprite sEnteiSprites12[] = {
	{sEnteiGfx12, ARRAY_COUNT(sEnteiGfx12)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_13.4bpp.lz");
static const ax_sprite sEnteiSprites13[] = {
	{sEnteiGfx13, ARRAY_COUNT(sEnteiGfx13)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_14.4bpp.lz");
static const ax_sprite sEnteiSprites14[] = {
	{sEnteiGfx14, ARRAY_COUNT(sEnteiGfx14)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_15.4bpp.lz");
static const ax_sprite sEnteiSprites15[] = {
	{sEnteiGfx15, ARRAY_COUNT(sEnteiGfx15)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_16.4bpp.lz");
static const ax_sprite sEnteiSprites16[] = {
	{sEnteiGfx16, ARRAY_COUNT(sEnteiGfx16)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_17.4bpp.lz");
static const ax_sprite sEnteiSprites17[] = {
	{sEnteiGfx17, ARRAY_COUNT(sEnteiGfx17)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_18.4bpp.lz");
static const ax_sprite sEnteiSprites18[] = {
	{sEnteiGfx18, ARRAY_COUNT(sEnteiGfx18)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_19.4bpp.lz");
static const ax_sprite sEnteiSprites19[] = {
	{sEnteiGfx19, ARRAY_COUNT(sEnteiGfx19)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_20.4bpp.lz");
static const ax_sprite sEnteiSprites20[] = {
	{sEnteiGfx20, ARRAY_COUNT(sEnteiGfx20)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_21.4bpp.lz");
static const ax_sprite sEnteiSprites21[] = {
	{sEnteiGfx21, ARRAY_COUNT(sEnteiGfx21)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_22.4bpp.lz");
static const ax_sprite sEnteiSprites22[] = {
	{sEnteiGfx22, ARRAY_COUNT(sEnteiGfx22)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_23.4bpp.lz");
static const ax_sprite sEnteiSprites23[] = {
	{sEnteiGfx23, ARRAY_COUNT(sEnteiGfx23)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_24.4bpp.lz");
static const ax_sprite sEnteiSprites24[] = {
	{sEnteiGfx24, ARRAY_COUNT(sEnteiGfx24)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_25.4bpp.lz");
static const ax_sprite sEnteiSprites25[] = {
	{sEnteiGfx25, ARRAY_COUNT(sEnteiGfx25)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_26.4bpp.lz");
static const ax_sprite sEnteiSprites26[] = {
	{sEnteiGfx26, ARRAY_COUNT(sEnteiGfx26)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_27.4bpp.lz");
static const ax_sprite sEnteiSprites27[] = {
	{sEnteiGfx27, ARRAY_COUNT(sEnteiGfx27)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_28.4bpp.lz");
static const ax_sprite sEnteiSprites28[] = {
	{sEnteiGfx28, ARRAY_COUNT(sEnteiGfx28)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_29.4bpp.lz");
static const ax_sprite sEnteiSprites29[] = {
	{sEnteiGfx29, ARRAY_COUNT(sEnteiGfx29)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_30.4bpp.lz");
static const ax_sprite sEnteiSprites30[] = {
	{sEnteiGfx30, ARRAY_COUNT(sEnteiGfx30)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_31.4bpp.lz");
static const ax_sprite sEnteiSprites31[] = {
	{sEnteiGfx31, ARRAY_COUNT(sEnteiGfx31)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_32.4bpp.lz");
static const ax_sprite sEnteiSprites32[] = {
	{sEnteiGfx32, ARRAY_COUNT(sEnteiGfx32)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_33.4bpp.lz");
static const u8 sEnteiGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_33_1.4bpp.lz");
static const ax_sprite sEnteiSprites33[] = {
	{NULL, 32}, 
	{sEnteiGfx33, ARRAY_COUNT(sEnteiGfx33)}, 
	{NULL, 32}, 
	{sEnteiGfx33_1, ARRAY_COUNT(sEnteiGfx33_1)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_34.4bpp.lz");
static const ax_sprite sEnteiSprites34[] = {
	{sEnteiGfx34, ARRAY_COUNT(sEnteiGfx34)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_35.4bpp.lz");
static const ax_sprite sEnteiSprites35[] = {
	{sEnteiGfx35, ARRAY_COUNT(sEnteiGfx35)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_36.4bpp.lz");
static const ax_sprite sEnteiSprites36[] = {
	{sEnteiGfx36, ARRAY_COUNT(sEnteiGfx36)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_37.4bpp.lz");
static const ax_sprite sEnteiSprites37[] = {
	{sEnteiGfx37, ARRAY_COUNT(sEnteiGfx37)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_38.4bpp.lz");
static const ax_sprite sEnteiSprites38[] = {
	{sEnteiGfx38, ARRAY_COUNT(sEnteiGfx38)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_39.4bpp.lz");
static const u8 sEnteiGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_39_1.4bpp.lz");
static const ax_sprite sEnteiSprites39[] = {
	{sEnteiGfx39, ARRAY_COUNT(sEnteiGfx39)}, 
	{NULL, 32}, 
	{sEnteiGfx39_1, ARRAY_COUNT(sEnteiGfx39_1)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_40.4bpp.lz");
static const ax_sprite sEnteiSprites40[] = {
	{sEnteiGfx40, ARRAY_COUNT(sEnteiGfx40)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_41.4bpp.lz");
static const ax_sprite sEnteiSprites41[] = {
	{sEnteiGfx41, ARRAY_COUNT(sEnteiGfx41)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_42.4bpp.lz");
static const ax_sprite sEnteiSprites42[] = {
	{sEnteiGfx42, ARRAY_COUNT(sEnteiGfx42)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_43.4bpp.lz");
static const ax_sprite sEnteiSprites43[] = {
	{sEnteiGfx43, ARRAY_COUNT(sEnteiGfx43)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_44.4bpp.lz");
static const ax_sprite sEnteiSprites44[] = {
	{sEnteiGfx44, ARRAY_COUNT(sEnteiGfx44)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_45.4bpp.lz");
static const ax_sprite sEnteiSprites45[] = {
	{sEnteiGfx45, ARRAY_COUNT(sEnteiGfx45)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_46.4bpp.lz");
static const ax_sprite sEnteiSprites46[] = {
	{sEnteiGfx46, ARRAY_COUNT(sEnteiGfx46)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_47.4bpp.lz");
static const ax_sprite sEnteiSprites47[] = {
	{sEnteiGfx47, ARRAY_COUNT(sEnteiGfx47)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_48.4bpp.lz");
static const ax_sprite sEnteiSprites48[] = {
	{sEnteiGfx48, ARRAY_COUNT(sEnteiGfx48)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_49.4bpp.lz");
static const ax_sprite sEnteiSprites49[] = {
	{sEnteiGfx49, ARRAY_COUNT(sEnteiGfx49)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_50.4bpp.lz");
static const ax_sprite sEnteiSprites50[] = {
	{sEnteiGfx50, ARRAY_COUNT(sEnteiGfx50)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_51.4bpp.lz");
static const ax_sprite sEnteiSprites51[] = {
	{sEnteiGfx51, ARRAY_COUNT(sEnteiGfx51)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_52.4bpp.lz");
static const ax_sprite sEnteiSprites52[] = {
	{sEnteiGfx52, ARRAY_COUNT(sEnteiGfx52)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_53.4bpp.lz");
static const ax_sprite sEnteiSprites53[] = {
	{sEnteiGfx53, ARRAY_COUNT(sEnteiGfx53)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_54.4bpp.lz");
static const ax_sprite sEnteiSprites54[] = {
	{sEnteiGfx54, ARRAY_COUNT(sEnteiGfx54)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_55.4bpp.lz");
static const ax_sprite sEnteiSprites55[] = {
	{sEnteiGfx55, ARRAY_COUNT(sEnteiGfx55)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_56.4bpp.lz");
static const ax_sprite sEnteiSprites56[] = {
	{sEnteiGfx56, ARRAY_COUNT(sEnteiGfx56)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_57.4bpp.lz");
static const ax_sprite sEnteiSprites57[] = {
	{sEnteiGfx57, ARRAY_COUNT(sEnteiGfx57)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_58.4bpp.lz");
static const ax_sprite sEnteiSprites58[] = {
	{sEnteiGfx58, ARRAY_COUNT(sEnteiGfx58)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_59.4bpp.lz");
static const ax_sprite sEnteiSprites59[] = {
	{sEnteiGfx59, ARRAY_COUNT(sEnteiGfx59)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_60.4bpp.lz");
static const ax_sprite sEnteiSprites60[] = {
	{sEnteiGfx60, ARRAY_COUNT(sEnteiGfx60)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_61.4bpp.lz");
static const ax_sprite sEnteiSprites61[] = {
	{sEnteiGfx61, ARRAY_COUNT(sEnteiGfx61)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_62.4bpp.lz");
static const ax_sprite sEnteiSprites62[] = {
	{sEnteiGfx62, ARRAY_COUNT(sEnteiGfx62)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_63.4bpp.lz");
static const ax_sprite sEnteiSprites63[] = {
	{sEnteiGfx63, ARRAY_COUNT(sEnteiGfx63)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_64.4bpp.lz");
static const ax_sprite sEnteiSprites64[] = {
	{sEnteiGfx64, ARRAY_COUNT(sEnteiGfx64)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_65.4bpp.lz");
static const ax_sprite sEnteiSprites65[] = {
	{sEnteiGfx65, ARRAY_COUNT(sEnteiGfx65)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_66.4bpp.lz");
static const ax_sprite sEnteiSprites66[] = {
	{sEnteiGfx66, ARRAY_COUNT(sEnteiGfx66)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_67.4bpp.lz");
static const u8 sEnteiGfx67_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_67_1.4bpp.lz");
static const ax_sprite sEnteiSprites67[] = {
	{sEnteiGfx67, ARRAY_COUNT(sEnteiGfx67)}, 
	{NULL, 32}, 
	{sEnteiGfx67_1, ARRAY_COUNT(sEnteiGfx67_1)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_68.4bpp.lz");
static const ax_sprite sEnteiSprites68[] = {
	{sEnteiGfx68, ARRAY_COUNT(sEnteiGfx68)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_69.4bpp.lz");
static const ax_sprite sEnteiSprites69[] = {
	{sEnteiGfx69, ARRAY_COUNT(sEnteiGfx69)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sEnteiGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_70.4bpp.lz");
static const ax_sprite sEnteiSprites70[] = {
	{sEnteiGfx70, ARRAY_COUNT(sEnteiGfx70)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_71.4bpp.lz");
static const ax_sprite sEnteiSprites71[] = {
	{sEnteiGfx71, ARRAY_COUNT(sEnteiGfx71)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_72.4bpp.lz");
static const ax_sprite sEnteiSprites72[] = {
	{sEnteiGfx72, ARRAY_COUNT(sEnteiGfx72)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_73.4bpp.lz");
static const ax_sprite sEnteiSprites73[] = {
	{sEnteiGfx73, ARRAY_COUNT(sEnteiGfx73)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_74.4bpp.lz");
static const ax_sprite sEnteiSprites74[] = {
	{sEnteiGfx74, ARRAY_COUNT(sEnteiGfx74)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_75.4bpp.lz");
static const ax_sprite sEnteiSprites75[] = {
	{sEnteiGfx75, ARRAY_COUNT(sEnteiGfx75)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_76.4bpp.lz");
static const ax_sprite sEnteiSprites76[] = {
	{sEnteiGfx76, ARRAY_COUNT(sEnteiGfx76)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_77.4bpp.lz");
static const ax_sprite sEnteiSprites77[] = {
	{sEnteiGfx77, ARRAY_COUNT(sEnteiGfx77)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_78.4bpp.lz");
static const u8 sEnteiGfx78_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_78_1.4bpp.lz");
static const ax_sprite sEnteiSprites78[] = {
	{sEnteiGfx78, ARRAY_COUNT(sEnteiGfx78)}, 
	{NULL, 64}, 
	{sEnteiGfx78_1, ARRAY_COUNT(sEnteiGfx78_1)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_79.4bpp.lz");
static const u8 sEnteiGfx79_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_79_1.4bpp.lz");
static const ax_sprite sEnteiSprites79[] = {
	{NULL, 32}, 
	{sEnteiGfx79, ARRAY_COUNT(sEnteiGfx79)}, 
	{NULL, 32}, 
	{sEnteiGfx79_1, ARRAY_COUNT(sEnteiGfx79_1)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_80.4bpp.lz");
static const ax_sprite sEnteiSprites80[] = {
	{sEnteiGfx80, ARRAY_COUNT(sEnteiGfx80)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_81.4bpp.lz");
static const ax_sprite sEnteiSprites81[] = {
	{sEnteiGfx81, ARRAY_COUNT(sEnteiGfx81)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_82.4bpp.lz");
static const ax_sprite sEnteiSprites82[] = {
	{sEnteiGfx82, ARRAY_COUNT(sEnteiGfx82)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_83.4bpp.lz");
static const ax_sprite sEnteiSprites83[] = {
	{sEnteiGfx83, ARRAY_COUNT(sEnteiGfx83)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx84[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_84.4bpp.lz");
static const ax_sprite sEnteiSprites84[] = {
	{sEnteiGfx84, ARRAY_COUNT(sEnteiGfx84)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx85[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_85.4bpp.lz");
static const ax_sprite sEnteiSprites85[] = {
	{sEnteiGfx85, ARRAY_COUNT(sEnteiGfx85)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx86[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_86.4bpp.lz");
static const ax_sprite sEnteiSprites86[] = {
	{sEnteiGfx86, ARRAY_COUNT(sEnteiGfx86)}, 
	{NULL, 0}
};
static const u8 sEnteiGfx87[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/entei/sprite_87.4bpp.lz");
static const ax_sprite sEnteiSprites87[] = {
	{sEnteiGfx87, ARRAY_COUNT(sEnteiGfx87)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesEntei[] = {
	sEnteiPose1,
	sEnteiPose2,
	sEnteiPose3,
	sEnteiPose4,
	sEnteiPose5,
	sEnteiPose6,
	sEnteiPose7,
	sEnteiPose8,
	sEnteiPose9,
	sEnteiPose10,
	sEnteiPose11,
	sEnteiPose12,
	sEnteiPose13,
	sEnteiPose14,
	sEnteiPose15,
	sEnteiPose16,
	sEnteiPose17,
	sEnteiPose18,
	sEnteiPose19,
	sEnteiPose20,
	sEnteiPose21,
	sEnteiPose22,
	sEnteiPose23,
	sEnteiPose24,
	sEnteiPose1,
	sEnteiPose2,
	sEnteiPose3,
	sEnteiPose4,
	sEnteiPose5,
	sEnteiPose6,
	sEnteiPose7,
	sEnteiPose8,
	sEnteiPose9,
	sEnteiPose10,
	sEnteiPose11,
	sEnteiPose12,
	sEnteiPose13,
	sEnteiPose14,
	sEnteiPose15,
	sEnteiPose16,
	sEnteiPose17,
	sEnteiPose18,
	sEnteiPose19,
	sEnteiPose20,
	sEnteiPose21,
	sEnteiPose22,
	sEnteiPose23,
	sEnteiPose24,
	sEnteiPose1,
	sEnteiPose2,
	sEnteiPose3,
	sEnteiPose4,
	sEnteiPose5,
	sEnteiPose6,
	sEnteiPose7,
	sEnteiPose8,
	sEnteiPose9,
	sEnteiPose10,
	sEnteiPose11,
	sEnteiPose12,
	sEnteiPose13,
	sEnteiPose14,
	sEnteiPose15,
	sEnteiPose16,
	sEnteiPose17,
	sEnteiPose18,
	sEnteiPose19,
	sEnteiPose20,
	sEnteiPose21,
	sEnteiPose22,
	sEnteiPose23,
	sEnteiPose24,
	sEnteiPose1,
	sEnteiPose74,
	sEnteiPose75,
	sEnteiPose4,
	sEnteiPose77,
	sEnteiPose78,
	sEnteiPose7,
	sEnteiPose80,
	sEnteiPose81,
	sEnteiPose10,
	sEnteiPose83,
	sEnteiPose84,
	sEnteiPose13,
	sEnteiPose86,
	sEnteiPose87,
	sEnteiPose16,
	sEnteiPose89,
	sEnteiPose90,
	sEnteiPose19,
	sEnteiPose92,
	sEnteiPose93,
	sEnteiPose22,
	sEnteiPose95,
	sEnteiPose96,
	sEnteiPose1,
	sEnteiPose74,
	sEnteiPose75,
	sEnteiPose100,
	sEnteiPose4,
	sEnteiPose77,
	sEnteiPose78,
	sEnteiPose104,
	sEnteiPose7,
	sEnteiPose80,
	sEnteiPose81,
	sEnteiPose108,
	sEnteiPose10,
	sEnteiPose83,
	sEnteiPose84,
	sEnteiPose112,
	sEnteiPose13,
	sEnteiPose86,
	sEnteiPose87,
	sEnteiPose116,
	sEnteiPose16,
	sEnteiPose89,
	sEnteiPose90,
	sEnteiPose120,
	sEnteiPose19,
	sEnteiPose92,
	sEnteiPose93,
	sEnteiPose124,
	sEnteiPose22,
	sEnteiPose95,
	sEnteiPose96,
	sEnteiPose128,
	sEnteiPose129,
	sEnteiPose130,
	sEnteiPose131,
	sEnteiPose132,
	sEnteiPose133,
	sEnteiPose134,
	sEnteiPose135,
	sEnteiPose136,
	sEnteiPose137,
	sEnteiPose138,
	sEnteiPose1,
	sEnteiPose74,
	sEnteiPose75,
	sEnteiPose4,
	sEnteiPose77,
	sEnteiPose78,
	sEnteiPose7,
	sEnteiPose80,
	sEnteiPose81,
	sEnteiPose10,
	sEnteiPose83,
	sEnteiPose84,
	sEnteiPose13,
	sEnteiPose86,
	sEnteiPose87,
	sEnteiPose16,
	sEnteiPose89,
	sEnteiPose90,
	sEnteiPose19,
	sEnteiPose92,
	sEnteiPose93,
	sEnteiPose22,
	sEnteiPose95,
	sEnteiPose96,
	sEnteiPose3,
	sEnteiPose24,
	sEnteiPose21,
	sEnteiPose18,
	sEnteiPose15,
	sEnteiPose12,
	sEnteiPose9,
	sEnteiPose6,
	sEnteiPose100,
	sEnteiPose172,
	sEnteiPose108,
	sEnteiPose174,
	sEnteiPose175,
	sEnteiPose176,
	sEnteiPose124,
	sEnteiPose178,
	sEnteiPose1,
	sEnteiPose74,
	sEnteiPose100,
	sEnteiPose4,
	sEnteiPose77,
	sEnteiPose184,
	sEnteiPose7,
	sEnteiPose80,
	sEnteiPose187,
	sEnteiPose10,
	sEnteiPose83,
	sEnteiPose190,
	sEnteiPose13,
	sEnteiPose86,
	sEnteiPose175,
	sEnteiPose16,
	sEnteiPose89,
	sEnteiPose196,
	sEnteiPose19,
	sEnteiPose92,
	sEnteiPose199,
	sEnteiPose22,
	sEnteiPose95,
	sEnteiPose202,
	sEnteiPose74,
	sEnteiPose95,
	sEnteiPose92,
	sEnteiPose89,
	sEnteiPose86,
	sEnteiPose83,
	sEnteiPose80,
	sEnteiPose77,
	sEnteiPose1,
	sEnteiPose22,
	sEnteiPose19,
	sEnteiPose16,
	sEnteiPose13,
	sEnteiPose10,
	sEnteiPose7,
	sEnteiPose4,
	sEnteiPose1,
	sEnteiPose74,
	sEnteiPose221,
	sEnteiPose75,
};

static const struct PositionSets sAxPositionsEntei[] = {
	[0] = { .set = { {0, -11}, {-7, 2}, {7, 2}, {0, -9} } },
	[1] = { .set = { {0, -10}, {-7, 4}, {6, 2}, {0, -8} } },
	[2] = { .set = { {0, -10}, {-6, 2}, {7, 4}, {0, -8} } },
	[3] = { .set = { {9, -12}, {9, 0}, {0, 2}, {1, -12} } },
	[4] = { .set = { {9, -11}, {11, 2}, {-2, 1}, {0, -11} } },
	[5] = { .set = { {9, -11}, {8, 0}, {1, 4}, {-1, -12} } },
	[6] = { .set = { {15, -15}, {8, -3}, {8, 1}, {3, -13} } },
	[7] = { .set = { {15, -14}, {13, -2}, {5, 1}, {3, -12} } },
	[8] = { .set = { {15, -14}, {3, -1}, {12, 1}, {1, -12} } },
	[9] = { .set = { {10, -20}, {1, -7}, {10, -4}, {1, -13} } },
	[10] = { .set = { {10, -19}, {6, -8}, {8, -2}, {1, -13} } },
	[11] = { .set = { {10, -19}, {0, -4}, {11, -4}, {1, -12} } },
	[12] = { .set = { {0, -24}, {5, -6}, {-5, -6}, {0, -16} } },
	[13] = { .set = { {0, -23}, {4, -5}, {-5, -7}, {0, -15} } },
	[14] = { .set = { {0, -21}, {5, -6}, {-4, -3}, {1, -14} } },
	[15] = { .set = { {-10, -20}, {-1, -7}, {-10, -4}, {-1, -13} } },
	[16] = { .set = { {-10, -19}, {-6, -8}, {-8, -2}, {-1, -13} } },
	[17] = { .set = { {-10, -19}, {0, -4}, {-11, -4}, {-1, -12} } },
	[18] = { .set = { {-15, -15}, {-8, -3}, {-8, 1}, {-3, -13} } },
	[19] = { .set = { {-15, -14}, {-13, -2}, {-5, 1}, {-3, -12} } },
	[20] = { .set = { {-15, -14}, {-3, -1}, {-12, 1}, {-1, -12} } },
	[21] = { .set = { {-9, -12}, {-9, 0}, {0, 2}, {-1, -12} } },
	[22] = { .set = { {-9, -11}, {-11, 2}, {2, 1}, {0, -11} } },
	[23] = { .set = { {-9, -11}, {-8, 0}, {-1, 4}, {1, -12} } },
	[24] = { .set = { {0, -11}, {-7, 2}, {7, 2}, {0, -9} } },
	[25] = { .set = { {0, -10}, {-7, 4}, {6, 2}, {0, -8} } },
	[26] = { .set = { {0, -10}, {-6, 2}, {7, 4}, {0, -8} } },
	[27] = { .set = { {9, -12}, {9, 0}, {0, 2}, {1, -12} } },
	[28] = { .set = { {9, -11}, {11, 2}, {-2, 1}, {0, -11} } },
	[29] = { .set = { {9, -11}, {8, 0}, {1, 4}, {-1, -12} } },
	[30] = { .set = { {15, -15}, {8, -3}, {8, 1}, {3, -13} } },
	[31] = { .set = { {15, -14}, {13, -2}, {5, 1}, {3, -12} } },
	[32] = { .set = { {15, -14}, {3, -1}, {12, 1}, {1, -12} } },
	[33] = { .set = { {10, -20}, {1, -7}, {10, -4}, {1, -13} } },
	[34] = { .set = { {10, -19}, {6, -8}, {8, -2}, {1, -13} } },
	[35] = { .set = { {10, -19}, {0, -4}, {11, -4}, {1, -12} } },
	[36] = { .set = { {0, -24}, {5, -6}, {-5, -6}, {0, -16} } },
	[37] = { .set = { {0, -23}, {4, -5}, {-5, -7}, {0, -15} } },
	[38] = { .set = { {0, -21}, {5, -6}, {-4, -3}, {1, -14} } },
	[39] = { .set = { {-10, -20}, {-1, -7}, {-10, -4}, {-1, -13} } },
	[40] = { .set = { {-10, -19}, {-6, -8}, {-8, -2}, {-1, -13} } },
	[41] = { .set = { {-10, -19}, {0, -4}, {-11, -4}, {-1, -12} } },
	[42] = { .set = { {-15, -15}, {-8, -3}, {-8, 1}, {-3, -13} } },
	[43] = { .set = { {-15, -14}, {-13, -2}, {-5, 1}, {-3, -12} } },
	[44] = { .set = { {-15, -14}, {-3, -1}, {-12, 1}, {-1, -12} } },
	[45] = { .set = { {-9, -12}, {-9, 0}, {0, 2}, {-1, -12} } },
	[46] = { .set = { {-9, -11}, {-11, 2}, {2, 1}, {0, -11} } },
	[47] = { .set = { {-9, -11}, {-8, 0}, {-1, 4}, {1, -12} } },
	[48] = { .set = { {0, -11}, {-7, 2}, {7, 2}, {0, -9} } },
	[49] = { .set = { {0, -10}, {-7, 4}, {6, 2}, {0, -8} } },
	[50] = { .set = { {0, -10}, {-6, 2}, {7, 4}, {0, -8} } },
	[51] = { .set = { {9, -12}, {9, 0}, {0, 2}, {1, -12} } },
	[52] = { .set = { {9, -11}, {11, 2}, {-2, 1}, {0, -11} } },
	[53] = { .set = { {9, -11}, {8, 0}, {1, 4}, {-1, -12} } },
	[54] = { .set = { {15, -15}, {8, -3}, {8, 1}, {3, -13} } },
	[55] = { .set = { {15, -14}, {13, -2}, {5, 1}, {3, -12} } },
	[56] = { .set = { {15, -14}, {3, -1}, {12, 1}, {1, -12} } },
	[57] = { .set = { {10, -20}, {1, -7}, {10, -4}, {1, -13} } },
	[58] = { .set = { {10, -19}, {6, -8}, {8, -2}, {1, -13} } },
	[59] = { .set = { {10, -19}, {0, -4}, {11, -4}, {1, -12} } },
	[60] = { .set = { {0, -24}, {5, -6}, {-5, -6}, {0, -16} } },
	[61] = { .set = { {0, -23}, {4, -5}, {-5, -7}, {0, -15} } },
	[62] = { .set = { {0, -21}, {5, -6}, {-4, -3}, {1, -14} } },
	[63] = { .set = { {-10, -20}, {-1, -7}, {-10, -4}, {-1, -13} } },
	[64] = { .set = { {-10, -19}, {-6, -8}, {-8, -2}, {-1, -13} } },
	[65] = { .set = { {-10, -19}, {0, -4}, {-11, -4}, {-1, -12} } },
	[66] = { .set = { {-15, -15}, {-8, -3}, {-8, 1}, {-3, -13} } },
	[67] = { .set = { {-15, -14}, {-13, -2}, {-5, 1}, {-3, -12} } },
	[68] = { .set = { {-15, -14}, {-3, -1}, {-12, 1}, {-1, -12} } },
	[69] = { .set = { {-9, -12}, {-9, 0}, {0, 2}, {-1, -12} } },
	[70] = { .set = { {-9, -11}, {-11, 2}, {2, 1}, {0, -11} } },
	[71] = { .set = { {-9, -11}, {-8, 0}, {-1, 4}, {1, -12} } },
	[72] = { .set = { {0, -11}, {-7, 2}, {7, 2}, {0, -9} } },
	[73] = { .set = { {0, -22}, {-7, 2}, {7, 2}, {0, -13} } },
	[74] = { .set = { {0, -7}, {-7, 2}, {7, 2}, {0, -9} } },
	[75] = { .set = { {9, -12}, {9, 0}, {0, 2}, {1, -12} } },
	[76] = { .set = { {7, -21}, {9, 0}, {0, 2}, {0, -14} } },
	[77] = { .set = { {13, -9}, {9, 0}, {0, 2}, {2, -11} } },
	[78] = { .set = { {15, -15}, {8, -3}, {8, 1}, {3, -13} } },
	[79] = { .set = { {11, -24}, {7, -1}, {8, 1}, {2, -17} } },
	[80] = { .set = { {19, -10}, {6, -1}, {8, 1}, {5, -11} } },
	[81] = { .set = { {10, -20}, {1, -7}, {10, -4}, {1, -13} } },
	[82] = { .set = { {8, -24}, {1, -5}, {10, -4}, {0, -16} } },
	[83] = { .set = { {13, -17}, {6, -7}, {10, -4}, {3, -15} } },
	[84] = { .set = { {0, -24}, {5, -6}, {-5, -6}, {0, -16} } },
	[85] = { .set = { {0, -25}, {5, -3}, {-5, -3}, {0, -15} } },
	[86] = { .set = { {0, -21}, {5, -4}, {-5, -4}, {0, -16} } },
	[87] = { .set = { {-10, -20}, {-1, -7}, {-10, -4}, {-1, -13} } },
	[88] = { .set = { {-8, -24}, {-1, -5}, {-10, -4}, {0, -16} } },
	[89] = { .set = { {-13, -17}, {-6, -7}, {-10, -4}, {-3, -15} } },
	[90] = { .set = { {-15, -15}, {-8, -3}, {-8, 1}, {-3, -13} } },
	[91] = { .set = { {-11, -24}, {-7, -1}, {-8, 1}, {-2, -17} } },
	[92] = { .set = { {-19, -10}, {-6, -1}, {-8, 1}, {-5, -11} } },
	[93] = { .set = { {-9, -12}, {-9, 0}, {0, 2}, {-1, -12} } },
	[94] = { .set = { {-7, -21}, {-9, 0}, {0, 2}, {0, -14} } },
	[95] = { .set = { {-13, -9}, {-9, 0}, {0, 2}, {-2, -11} } },
	[96] = { .set = { {0, -11}, {-7, 2}, {7, 2}, {0, -9} } },
	[97] = { .set = { {0, -22}, {-7, 2}, {7, 2}, {0, -13} } },
	[98] = { .set = { {0, -7}, {-7, 2}, {7, 2}, {0, -9} } },
	[99] = { .set = { {0, -4}, {-7, 3}, {7, 6}, {0, -6} } },
	[100] = { .set = { {9, -12}, {9, 0}, {0, 2}, {1, -12} } },
	[101] = { .set = { {7, -21}, {9, 0}, {0, 2}, {0, -14} } },
	[102] = { .set = { {13, -9}, {9, 0}, {0, 2}, {2, -11} } },
	[103] = { .set = { {13, -4}, {11, 1}, {7, 6}, {2, -9} } },
	[104] = { .set = { {15, -15}, {8, -3}, {8, 1}, {3, -13} } },
	[105] = { .set = { {11, -24}, {7, -1}, {8, 1}, {2, -17} } },
	[106] = { .set = { {19, -10}, {6, -1}, {8, 1}, {5, -11} } },
	[107] = { .set = { {17, -7}, {6, -1}, {15, 1}, {1, -10} } },
	[108] = { .set = { {10, -20}, {1, -7}, {10, -4}, {1, -13} } },
	[109] = { .set = { {8, -24}, {1, -5}, {10, -4}, {0, -16} } },
	[110] = { .set = { {13, -17}, {6, -7}, {10, -4}, {3, -15} } },
	[111] = { .set = { {12, -12}, {9, -10}, {15, -6}, {2, -11} } },
	[112] = { .set = { {0, -24}, {5, -6}, {-5, -6}, {0, -16} } },
	[113] = { .set = { {0, -25}, {5, -3}, {-5, -3}, {0, -15} } },
	[114] = { .set = { {0, -21}, {5, -4}, {-5, -4}, {0, -16} } },
	[115] = { .set = { {0, -18}, {5, -10}, {-5, -4}, {0, -13} } },
	[116] = { .set = { {-10, -20}, {-1, -7}, {-10, -4}, {-1, -13} } },
	[117] = { .set = { {-8, -24}, {-1, -5}, {-10, -4}, {0, -16} } },
	[118] = { .set = { {-13, -17}, {-6, -7}, {-10, -4}, {-3, -15} } },
	[119] = { .set = { {-10, -12}, {-7, -10}, {-13, -6}, {0, -11} } },
	[120] = { .set = { {-15, -15}, {-8, -3}, {-8, 1}, {-3, -13} } },
	[121] = { .set = { {-11, -24}, {-7, -1}, {-8, 1}, {-2, -17} } },
	[122] = { .set = { {-19, -10}, {-6, -1}, {-8, 1}, {-5, -11} } },
	[123] = { .set = { {-18, -7}, {-7, -1}, {-16, 1}, {-2, -10} } },
	[124] = { .set = { {-9, -12}, {-9, 0}, {0, 2}, {-1, -12} } },
	[125] = { .set = { {-7, -21}, {-9, 0}, {0, 2}, {0, -14} } },
	[126] = { .set = { {-13, -9}, {-9, 0}, {0, 2}, {-2, -11} } },
	[127] = { .set = { {-13, -4}, {-11, 1}, {-7, 6}, {-2, -9} } },
	[128] = { .set = { {-9, -5}, {-14, -1}, {-4, 2}, {1, -10} } },
	[129] = { .set = { {-9, -5}, {-14, -1}, {-4, 2}, {1, -9} } },
	[130] = { .set = { {0, -7}, {-11, 2}, {11, 2}, {0, -10} } },
	[131] = { .set = { {8, -6}, {13, -1}, {-8, 1}, {-3, -10} } },
	[132] = { .set = { {13, -9}, {12, -3}, {6, 2}, {-1, -10} } },
	[133] = { .set = { {11, -15}, {2, -14}, {14, -3}, {1, -12} } },
	[134] = { .set = { {0, -20}, {7, -2}, {-7, -2}, {0, -13} } },
	[135] = { .set = { {-12, -15}, {-3, -14}, {-15, -3}, {-2, -12} } },
	[136] = { .set = { {-14, -9}, {-13, -3}, {-7, 2}, {0, -10} } },
	[137] = { .set = { {-9, -6}, {-14, -1}, {7, 1}, {2, -10} } },
	[138] = { .set = { {0, -11}, {-7, 2}, {7, 2}, {0, -9} } },
	[139] = { .set = { {0, -22}, {-7, 2}, {7, 2}, {0, -13} } },
	[140] = { .set = { {0, -7}, {-7, 2}, {7, 2}, {0, -9} } },
	[141] = { .set = { {9, -12}, {9, 0}, {0, 2}, {1, -12} } },
	[142] = { .set = { {7, -21}, {9, 0}, {0, 2}, {0, -14} } },
	[143] = { .set = { {13, -9}, {9, 0}, {0, 2}, {2, -11} } },
	[144] = { .set = { {15, -15}, {8, -3}, {8, 1}, {3, -13} } },
	[145] = { .set = { {11, -24}, {7, -1}, {8, 1}, {2, -17} } },
	[146] = { .set = { {19, -10}, {6, -1}, {8, 1}, {5, -11} } },
	[147] = { .set = { {10, -20}, {1, -7}, {10, -4}, {1, -13} } },
	[148] = { .set = { {8, -24}, {1, -5}, {10, -4}, {0, -16} } },
	[149] = { .set = { {13, -17}, {6, -7}, {10, -4}, {3, -15} } },
	[150] = { .set = { {0, -24}, {5, -6}, {-5, -6}, {0, -16} } },
	[151] = { .set = { {0, -25}, {5, -3}, {-5, -3}, {0, -15} } },
	[152] = { .set = { {0, -21}, {5, -4}, {-5, -4}, {0, -16} } },
	[153] = { .set = { {-10, -20}, {-1, -7}, {-10, -4}, {-1, -13} } },
	[154] = { .set = { {-8, -24}, {-1, -5}, {-10, -4}, {0, -16} } },
	[155] = { .set = { {-13, -17}, {-6, -7}, {-10, -4}, {-3, -15} } },
	[156] = { .set = { {-15, -15}, {-8, -3}, {-8, 1}, {-3, -13} } },
	[157] = { .set = { {-11, -24}, {-7, -1}, {-8, 1}, {-2, -17} } },
	[158] = { .set = { {-19, -10}, {-6, -1}, {-8, 1}, {-5, -11} } },
	[159] = { .set = { {-9, -12}, {-9, 0}, {0, 2}, {-1, -12} } },
	[160] = { .set = { {-7, -21}, {-9, 0}, {0, 2}, {0, -14} } },
	[161] = { .set = { {-13, -9}, {-9, 0}, {0, 2}, {-2, -11} } },
	[162] = { .set = { {0, -10}, {-6, 2}, {7, 4}, {0, -8} } },
	[163] = { .set = { {-9, -11}, {-8, 0}, {-1, 4}, {1, -12} } },
	[164] = { .set = { {-15, -14}, {-3, -1}, {-12, 1}, {-1, -12} } },
	[165] = { .set = { {-10, -19}, {0, -4}, {-11, -4}, {-1, -12} } },
	[166] = { .set = { {0, -21}, {5, -6}, {-4, -3}, {1, -14} } },
	[167] = { .set = { {10, -19}, {0, -4}, {11, -4}, {1, -12} } },
	[168] = { .set = { {15, -14}, {3, -1}, {12, 1}, {1, -12} } },
	[169] = { .set = { {9, -11}, {8, 0}, {1, 4}, {-1, -12} } },
	[170] = { .set = { {0, -4}, {-7, 3}, {7, 6}, {0, -6} } },
	[171] = { .set = { {11, -5}, {9, 0}, {5, 5}, {0, -10} } },
	[172] = { .set = { {17, -7}, {6, -1}, {15, 1}, {1, -10} } },
	[173] = { .set = { {10, -13}, {7, -11}, {13, -7}, {0, -12} } },
	[174] = { .set = { {0, -16}, {5, -8}, {-5, -2}, {0, -11} } },
	[175] = { .set = { {-10, -13}, {-7, -11}, {-13, -7}, {0, -12} } },
	[176] = { .set = { {-18, -7}, {-7, -1}, {-16, 1}, {-2, -10} } },
	[177] = { .set = { {-11, -5}, {-9, 0}, {-5, 5}, {0, -10} } },
	[178] = { .set = { {0, -11}, {-7, 2}, {7, 2}, {0, -9} } },
	[179] = { .set = { {0, -22}, {-7, 2}, {7, 2}, {0, -13} } },
	[180] = { .set = { {0, -4}, {-7, 3}, {7, 6}, {0, -6} } },
	[181] = { .set = { {9, -12}, {9, 0}, {0, 2}, {1, -12} } },
	[182] = { .set = { {7, -21}, {9, 0}, {0, 2}, {0, -14} } },
	[183] = { .set = { {10, -5}, {8, 0}, {4, 5}, {-1, -10} } },
	[184] = { .set = { {15, -15}, {8, -3}, {8, 1}, {3, -13} } },
	[185] = { .set = { {11, -24}, {7, -1}, {8, 1}, {2, -17} } },
	[186] = { .set = { {16, -7}, {5, -1}, {14, 1}, {0, -10} } },
	[187] = { .set = { {10, -20}, {1, -7}, {10, -4}, {1, -13} } },
	[188] = { .set = { {8, -24}, {1, -5}, {10, -4}, {0, -16} } },
	[189] = { .set = { {11, -15}, {8, -13}, {14, -9}, {1, -14} } },
	[190] = { .set = { {0, -24}, {5, -6}, {-5, -6}, {0, -16} } },
	[191] = { .set = { {0, -25}, {5, -3}, {-5, -3}, {0, -15} } },
	[192] = { .set = { {0, -16}, {5, -8}, {-5, -2}, {0, -11} } },
	[193] = { .set = { {-10, -20}, {-1, -7}, {-10, -4}, {-1, -13} } },
	[194] = { .set = { {-8, -24}, {-1, -5}, {-10, -4}, {0, -16} } },
	[195] = { .set = { {-11, -15}, {-8, -13}, {-14, -9}, {-1, -14} } },
	[196] = { .set = { {-15, -15}, {-8, -3}, {-8, 1}, {-3, -13} } },
	[197] = { .set = { {-11, -24}, {-7, -1}, {-8, 1}, {-2, -17} } },
	[198] = { .set = { {-16, -7}, {-5, -1}, {-14, 1}, {0, -10} } },
	[199] = { .set = { {-9, -12}, {-9, 0}, {0, 2}, {-1, -12} } },
	[200] = { .set = { {-7, -21}, {-9, 0}, {0, 2}, {0, -14} } },
	[201] = { .set = { {-10, -5}, {-8, 0}, {-4, 5}, {1, -10} } },
	[202] = { .set = { {0, -22}, {-7, 2}, {7, 2}, {0, -13} } },
	[203] = { .set = { {-7, -21}, {-9, 0}, {0, 2}, {0, -14} } },
	[204] = { .set = { {-11, -24}, {-7, -1}, {-8, 1}, {-2, -17} } },
	[205] = { .set = { {-8, -24}, {-1, -5}, {-10, -4}, {0, -16} } },
	[206] = { .set = { {0, -25}, {5, -3}, {-5, -3}, {0, -15} } },
	[207] = { .set = { {8, -24}, {1, -5}, {10, -4}, {0, -16} } },
	[208] = { .set = { {11, -24}, {7, -1}, {8, 1}, {2, -17} } },
	[209] = { .set = { {7, -21}, {9, 0}, {0, 2}, {0, -14} } },
	[210] = { .set = { {0, -11}, {-7, 2}, {7, 2}, {0, -9} } },
	[211] = { .set = { {-9, -12}, {-9, 0}, {0, 2}, {-1, -12} } },
	[212] = { .set = { {-15, -15}, {-8, -3}, {-8, 1}, {-3, -13} } },
	[213] = { .set = { {-10, -20}, {-1, -7}, {-10, -4}, {-1, -13} } },
	[214] = { .set = { {0, -24}, {5, -6}, {-5, -6}, {0, -16} } },
	[215] = { .set = { {10, -20}, {1, -7}, {10, -4}, {1, -13} } },
	[216] = { .set = { {15, -15}, {8, -3}, {8, 1}, {3, -13} } },
	[217] = { .set = { {9, -12}, {9, 0}, {0, 2}, {1, -12} } },
	[218] = { .set = { {0, -11}, {-7, 2}, {7, 2}, {0, -9} } },
	[219] = { .set = { {0, -22}, {-7, 2}, {7, 2}, {0, -13} } },
	[220] = { .set = { {0, -16}, {-7, 2}, {7, 2}, {0, -11} } },
	[221] = { .set = { {0, -7}, {-7, 2}, {7, 2}, {0, -9} } },
};

static const ax_anim *const sEnteiAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_00036),
	AX_ANIM_PTR(gAxSharedAnim_00080),
	AX_ANIM_PTR(gAxSharedAnim_00085),
	AX_ANIM_PTR(gAxSharedAnim_00090),
	AX_ANIM_PTR(gAxSharedAnim_00041),
	AX_ANIM_PTR(gAxSharedAnim_00055),
	AX_ANIM_PTR(gAxSharedAnim_00061),
	AX_ANIM_PTR(gAxSharedAnim_00066),
};

static const ax_anim *const sEnteiAnimTable2[] = {
	AX_ANIM_PTR(sEnteiAnims_2_1),
	AX_ANIM_PTR(sEnteiAnims_2_2),
	AX_ANIM_PTR(sEnteiAnims_2_3),
	AX_ANIM_PTR(sEnteiAnims_2_4),
	AX_ANIM_PTR(sEnteiAnims_2_5),
	AX_ANIM_PTR(sEnteiAnims_2_6),
	AX_ANIM_PTR(sEnteiAnims_2_7),
	AX_ANIM_PTR(sEnteiAnims_2_8),
};

static const ax_anim *const sEnteiAnimTable3[] = {
	AX_ANIM_PTR(sEnteiAnims_3_1),
	AX_ANIM_PTR(sEnteiAnims_3_2),
	AX_ANIM_PTR(sEnteiAnims_3_3),
	AX_ANIM_PTR(sEnteiAnims_3_4),
	AX_ANIM_PTR(sEnteiAnims_3_5),
	AX_ANIM_PTR(sEnteiAnims_3_6),
	AX_ANIM_PTR(sEnteiAnims_3_7),
	AX_ANIM_PTR(sEnteiAnims_3_8),
};

static const ax_anim *const sEnteiAnimTable4[] = {
	AX_ANIM_PTR(sEnteiAnims_4_1),
	AX_ANIM_PTR(sEnteiAnims_4_2),
	AX_ANIM_PTR(sEnteiAnims_4_3),
	AX_ANIM_PTR(sEnteiAnims_4_4),
	AX_ANIM_PTR(sEnteiAnims_4_5),
	AX_ANIM_PTR(sEnteiAnims_4_6),
	AX_ANIM_PTR(sEnteiAnims_4_7),
	AX_ANIM_PTR(sEnteiAnims_4_8),
};

static const ax_anim *const sEnteiAnimTable5[] = {
	AX_ANIM_PTR(sEnteiAnims_5_1),
	AX_ANIM_PTR(sEnteiAnims_5_2),
	AX_ANIM_PTR(sEnteiAnims_5_3),
	AX_ANIM_PTR(sEnteiAnims_5_4),
	AX_ANIM_PTR(sEnteiAnims_5_5),
	AX_ANIM_PTR(sEnteiAnims_5_6),
	AX_ANIM_PTR(sEnteiAnims_5_7),
	AX_ANIM_PTR(sEnteiAnims_5_8),
};

static const ax_anim *const sEnteiAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
	AX_ANIM_PTR(gAxSharedAnim_02363),
};

static const ax_anim *const sEnteiAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00398),
	AX_ANIM_PTR(gAxSharedAnim_00404),
	AX_ANIM_PTR(gAxSharedAnim_00415),
	AX_ANIM_PTR(gAxSharedAnim_00424),
	AX_ANIM_PTR(gAxSharedAnim_00436),
	AX_ANIM_PTR(gAxSharedAnim_00444),
	AX_ANIM_PTR(gAxSharedAnim_00454),
	AX_ANIM_PTR(gAxSharedAnim_00464),
};

static const ax_anim *const sEnteiAnimTable8[] = {
	AX_ANIM_PTR(gAxSharedAnim_02571),
	AX_ANIM_PTR(gAxSharedAnim_02572),
	AX_ANIM_PTR(gAxSharedAnim_02573),
	AX_ANIM_PTR(gAxSharedAnim_02574),
	AX_ANIM_PTR(gAxSharedAnim_02575),
	AX_ANIM_PTR(gAxSharedAnim_02576),
	AX_ANIM_PTR(gAxSharedAnim_02578),
	AX_ANIM_PTR(gAxSharedAnim_02579),
};

static const ax_anim *const sEnteiAnimTable9[] = {
	AX_ANIM_PTR(sEnteiAnims_9_1),
	AX_ANIM_PTR(sEnteiAnims_9_2),
	AX_ANIM_PTR(gAxSharedAnim_00769),
	AX_ANIM_PTR(sEnteiAnims_9_4),
	AX_ANIM_PTR(sEnteiAnims_9_5),
	AX_ANIM_PTR(sEnteiAnims_9_6),
	AX_ANIM_PTR(gAxSharedAnim_00720),
	AX_ANIM_PTR(sEnteiAnims_9_8),
};

static const ax_anim *const sEnteiAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00801),
	AX_ANIM_PTR(gAxSharedAnim_00813),
	AX_ANIM_PTR(gAxSharedAnim_00827),
	AX_ANIM_PTR(gAxSharedAnim_00838),
	AX_ANIM_PTR(gAxSharedAnim_00849),
	AX_ANIM_PTR(gAxSharedAnim_00862),
	AX_ANIM_PTR(gAxSharedAnim_00879),
	AX_ANIM_PTR(gAxSharedAnim_00889),
};

static const ax_anim *const sEnteiAnimTable11[] = {
	AX_ANIM_PTR(sEnteiAnims_11_1),
	AX_ANIM_PTR(sEnteiAnims_11_2),
	AX_ANIM_PTR(gAxSharedAnim_00973),
	AX_ANIM_PTR(sEnteiAnims_11_4),
	AX_ANIM_PTR(gAxSharedAnim_01074),
	AX_ANIM_PTR(sEnteiAnims_11_6),
	AX_ANIM_PTR(sEnteiAnims_11_7),
	AX_ANIM_PTR(sEnteiAnims_11_8),
};

static const ax_anim *const sEnteiAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01243),
	AX_ANIM_PTR(gAxSharedAnim_01327),
	AX_ANIM_PTR(gAxSharedAnim_01308),
	AX_ANIM_PTR(gAxSharedAnim_01292),
	AX_ANIM_PTR(gAxSharedAnim_01291),
	AX_ANIM_PTR(gAxSharedAnim_01280),
	AX_ANIM_PTR(gAxSharedAnim_01260),
	AX_ANIM_PTR(gAxSharedAnim_01244),
};

static const ax_anim *const sEnteiAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01335),
	AX_ANIM_PTR(gAxSharedAnim_01409),
	AX_ANIM_PTR(gAxSharedAnim_01397),
	AX_ANIM_PTR(gAxSharedAnim_01386),
	AX_ANIM_PTR(gAxSharedAnim_01374),
	AX_ANIM_PTR(gAxSharedAnim_01366),
	AX_ANIM_PTR(gAxSharedAnim_01358),
	AX_ANIM_PTR(gAxSharedAnim_01348),
};

static const ax_anim *const sEnteiAnimTable14[] = {
	AX_ANIM_PTR(sEnteiAnims_14_1),
	AX_ANIM_PTR(sEnteiAnims_14_1),
	AX_ANIM_PTR(sEnteiAnims_14_1),
	AX_ANIM_PTR(sEnteiAnims_14_1),
	AX_ANIM_PTR(sEnteiAnims_14_1),
	AX_ANIM_PTR(sEnteiAnims_14_1),
	AX_ANIM_PTR(sEnteiAnims_14_1),
	AX_ANIM_PTR(sEnteiAnims_14_1),
};

static const ax_anim *const *const sAxAnimationsEntei[] = {
	sEnteiAnimTable1,
	sEnteiAnimTable2,
	sEnteiAnimTable3,
	sEnteiAnimTable4,
	sEnteiAnimTable5,
	sEnteiAnimTable6,
	sEnteiAnimTable7,
	sEnteiAnimTable8,
	sEnteiAnimTable9,
	sEnteiAnimTable10,
	sEnteiAnimTable11,
	sEnteiAnimTable12,
	sEnteiAnimTable13,
	sEnteiAnimTable14,
};

static const ax_sprite *const sAxSpritesEntei[] = {
	sEnteiSprites1,
	sEnteiSprites2,
	sEnteiSprites3,
	sEnteiSprites4,
	sEnteiSprites5,
	sEnteiSprites6,
	sEnteiSprites7,
	sEnteiSprites8,
	sEnteiSprites9,
	sEnteiSprites10,
	sEnteiSprites11,
	sEnteiSprites12,
	sEnteiSprites13,
	sEnteiSprites14,
	sEnteiSprites15,
	sEnteiSprites16,
	sEnteiSprites17,
	sEnteiSprites18,
	sEnteiSprites19,
	sEnteiSprites20,
	sEnteiSprites21,
	sEnteiSprites22,
	sEnteiSprites23,
	sEnteiSprites24,
	sEnteiSprites25,
	sEnteiSprites26,
	sEnteiSprites27,
	sEnteiSprites28,
	sEnteiSprites29,
	sEnteiSprites30,
	sEnteiSprites31,
	sEnteiSprites32,
	sEnteiSprites33,
	sEnteiSprites34,
	sEnteiSprites35,
	sEnteiSprites36,
	sEnteiSprites37,
	sEnteiSprites38,
	sEnteiSprites39,
	sEnteiSprites40,
	sEnteiSprites41,
	sEnteiSprites42,
	sEnteiSprites43,
	sEnteiSprites44,
	sEnteiSprites45,
	sEnteiSprites46,
	sEnteiSprites47,
	sEnteiSprites48,
	sEnteiSprites49,
	sEnteiSprites50,
	sEnteiSprites51,
	sEnteiSprites52,
	sEnteiSprites53,
	sEnteiSprites54,
	sEnteiSprites55,
	sEnteiSprites56,
	sEnteiSprites57,
	sEnteiSprites58,
	sEnteiSprites59,
	sEnteiSprites60,
	sEnteiSprites61,
	sEnteiSprites62,
	sEnteiSprites63,
	sEnteiSprites64,
	sEnteiSprites65,
	sEnteiSprites66,
	sEnteiSprites67,
	sEnteiSprites68,
	sEnteiSprites69,
	sEnteiSprites70,
	sEnteiSprites71,
	sEnteiSprites72,
	sEnteiSprites73,
	sEnteiSprites74,
	sEnteiSprites75,
	sEnteiSprites76,
	sEnteiSprites77,
	sEnteiSprites78,
	sEnteiSprites79,
	sEnteiSprites80,
	sEnteiSprites81,
	sEnteiSprites82,
	sEnteiSprites83,
	sEnteiSprites84,
	sEnteiSprites85,
	sEnteiSprites86,
	sEnteiSprites87,
};

static const axmain sAxMainEntei = {
	.poses = sAxPosesEntei,
	.animations = sAxAnimationsEntei,
	.animCount = ARRAY_COUNT(sAxAnimationsEntei),
	.spriteData = sAxSpritesEntei,
	.positions = sAxPositionsEntei,
};
