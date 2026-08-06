/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainSkarmory;
const SiroArchive gAxSkarmory = {"SIRO", &sAxMainSkarmory};

static const ax_pose sSkarmoryPose1[] = {
	AX_POSE(0, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(1, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(2, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(3, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose2[] = {
	AX_POSE(4, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose3[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose4[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose5[] = {
	AX_POSE(7, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose6[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose7[] = {
	AX_POSE(9, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(10, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(11, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(12, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE(13, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose8[] = {
	AX_POSE(14, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(15, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(16, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(17, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose9[] = {
	AX_POSE(18, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(19, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(20, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(21, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose10[] = {
	AX_POSE(22, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(23, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(24, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(25, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose11[] = {
	AX_POSE(9, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(10, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(11, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(12, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE(13, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose12[] = {
	AX_POSE(14, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(15, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(16, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(17, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose13[] = {
	AX_POSE(7, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose14[] = {
	AX_POSE(8, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose15[] = {
	AX_POSE(5, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose16[] = {
	AX_POSE(6, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose19[] = {
	AX_POSE(26, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(27, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(28, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(29, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(11, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose22[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose25[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose28[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose31[] = {
	AX_POSE(33, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(34, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(35, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 5)),
	AX_POSE(36, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(37, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose34[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose37[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose40[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose65[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose66[] = {
	AX_POSE(39, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(40, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(41, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 5)),
	AX_POSE(42, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(43, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(44, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE(45, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose67[] = {
	AX_POSE(46, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose68[] = {
	AX_POSE(47, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose69[] = {
	AX_POSE(48, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose70[] = {
	AX_POSE(49, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(50, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(51, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(52, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(53, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose71[] = {
	AX_POSE(54, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose72[] = {
	AX_POSE(55, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose73[] = {
	AX_POSE(56, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose74[] = {
	AX_POSE(57, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(58, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(59, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 5)),
	AX_POSE(60, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(61, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(62, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose75[] = {
	AX_POSE(54, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose76[] = {
	AX_POSE(55, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose77[] = {
	AX_POSE(48, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose78[] = {
	AX_POSE(49, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(50, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(51, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(52, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE(53, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose79[] = {
	AX_POSE(46, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose80[] = {
	AX_POSE(47, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose89[] = {
	AX_POSE(63, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose90[] = {
	AX_POSE(64, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose91[] = {
	AX_POSE(65, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose92[] = {
	AX_POSE(66, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose93[] = {
	AX_POSE(67, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose94[] = {
	AX_POSE(68, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose95[] = {
	AX_POSE(69, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose96[] = {
	AX_POSE(68, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose97[] = {
	AX_POSE(67, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose98[] = {
	AX_POSE(66, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose100[] = {
	AX_POSE(0, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(1, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(2, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose101[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose103[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose104[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose106[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose107[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose109[] = {
	AX_POSE(9, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(10, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(11, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(12, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE(13, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose110[] = {
	AX_POSE(14, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(15, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(17, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose112[] = {
	AX_POSE(18, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(19, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(20, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(21, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose113[] = {
	AX_POSE(22, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(23, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(24, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(25, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose115[] = {
	AX_POSE(9, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(10, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(11, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(12, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE(13, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose116[] = {
	AX_POSE(14, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(15, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(17, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose118[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose119[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose121[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose122[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose124[] = {
	AX_POSE(47, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose125[] = {
	AX_POSE(49, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(50, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(51, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(52, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE(53, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose126[] = {
	AX_POSE(55, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose130[] = {
	AX_POSE(47, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose141[] = {
	AX_POSE(0, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(1, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(2, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose144[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose147[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose150[] = {
	AX_POSE(9, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(10, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(11, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(12, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE(13, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose153[] = {
	AX_POSE(18, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(19, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(20, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(21, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose156[] = {
	AX_POSE(9, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(10, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(11, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(12, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE(13, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose159[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose162[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose179[] = {
	AX_POSE(70, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose180[] = {
	AX_POSE(71, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(72, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(73, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(74, OAM1(252, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(75, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose181[] = {
	AX_POSE(76, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(77, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(78, OAM1(250, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(79, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSkarmoryPose182[] = {
	AX_POSE(80, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(81, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(82, OAM1(250, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE(83, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sSkarmoryAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_1_1.lz");
static const u8 sSkarmoryAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_1_2.lz");
static const u8 sSkarmoryAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_1_3.lz");
static const u8 sSkarmoryAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_1_4.lz");
static const u8 sSkarmoryAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_1_5.lz");
static const u8 sSkarmoryAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_1_6.lz");
static const u8 sSkarmoryAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_1_7.lz");
static const u8 sSkarmoryAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_1_8.lz");
static const u8 sSkarmoryAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_2_1.lz");
static const u8 sSkarmoryAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_2_2.lz");
static const u8 sSkarmoryAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_2_3.lz");
static const u8 sSkarmoryAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_2_4.lz");
static const u8 sSkarmoryAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_2_5.lz");
static const u8 sSkarmoryAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_2_6.lz");
static const u8 sSkarmoryAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_2_7.lz");
static const u8 sSkarmoryAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_2_8.lz");
static const u8 sSkarmoryAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_3_1.lz");
static const u8 sSkarmoryAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_3_2.lz");
static const u8 sSkarmoryAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_3_3.lz");
static const u8 sSkarmoryAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_3_4.lz");
static const u8 sSkarmoryAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_3_5.lz");
static const u8 sSkarmoryAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_3_6.lz");
static const u8 sSkarmoryAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_3_7.lz");
static const u8 sSkarmoryAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_3_8.lz");
static const u8 sSkarmoryAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_4_1.lz");
static const u8 sSkarmoryAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_4_2.lz");
static const u8 sSkarmoryAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_4_3.lz");
static const u8 sSkarmoryAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_4_4.lz");
static const u8 sSkarmoryAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_4_5.lz");
static const u8 sSkarmoryAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_4_6.lz");
static const u8 sSkarmoryAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_4_7.lz");
static const u8 sSkarmoryAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_4_8.lz");
static const u8 sSkarmoryAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_8_1.lz");
static const u8 sSkarmoryAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_8_2.lz");
static const u8 sSkarmoryAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_8_3.lz");
static const u8 sSkarmoryAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_8_4.lz");
static const u8 sSkarmoryAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_8_5.lz");
static const u8 sSkarmoryAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_8_6.lz");
static const u8 sSkarmoryAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_8_7.lz");
static const u8 sSkarmoryAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_8_8.lz");
static const u8 sSkarmoryAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_9_2.lz");
static const u8 sSkarmoryAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_9_3.lz");
static const u8 sSkarmoryAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_9_4.lz");
static const u8 sSkarmoryAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_9_5.lz");
static const u8 sSkarmoryAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_9_6.lz");
static const u8 sSkarmoryAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_9_7.lz");
static const u8 sSkarmoryAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_9_8.lz");
static const u8 sSkarmoryAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_11_1.lz");
static const u8 sSkarmoryAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_11_2.lz");
static const u8 sSkarmoryAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_11_3.lz");
static const u8 sSkarmoryAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_11_4.lz");
static const u8 sSkarmoryAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_11_5.lz");
static const u8 sSkarmoryAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_11_6.lz");
static const u8 sSkarmoryAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_11_7.lz");
static const u8 sSkarmoryAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_11_8.lz");
static const u8 sSkarmoryAnims_14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/skarmory/sSkarmoryAnims_14_1.lz");
static const ax_anim sSkarmoryAnims_15_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 180, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -26}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -30}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -35}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -40}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -46}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -52}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -59}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -66}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -74}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -82}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -90}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -98}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -106}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -114}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -122}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -130}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -138}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSkarmoryAnims_16_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -136}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -132}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -128}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -124}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -120}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -116}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -112}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -108}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -104}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -100}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -96}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -92}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -88}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -84}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -80}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -76}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -72}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -68}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -64}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -60}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -56}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -52}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -48}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -44}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -40}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -36}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -32}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -28}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -14}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -13}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -14}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sSkarmoryGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_1.4bpp.lz");
static const ax_sprite sSkarmorySprites1[] = {
	{sSkarmoryGfx1, ARRAY_COUNT(sSkarmoryGfx1)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_2.4bpp.lz");
static const ax_sprite sSkarmorySprites2[] = {
	{sSkarmoryGfx2, ARRAY_COUNT(sSkarmoryGfx2)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_3.4bpp.lz");
static const ax_sprite sSkarmorySprites3[] = {
	{sSkarmoryGfx3, ARRAY_COUNT(sSkarmoryGfx3)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_4.4bpp.lz");
static const ax_sprite sSkarmorySprites4[] = {
	{sSkarmoryGfx4, ARRAY_COUNT(sSkarmoryGfx4)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_5.4bpp.lz");
static const ax_sprite sSkarmorySprites5[] = {
	{sSkarmoryGfx5, ARRAY_COUNT(sSkarmoryGfx5)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_6.4bpp.lz");
static const ax_sprite sSkarmorySprites6[] = {
	{sSkarmoryGfx6, ARRAY_COUNT(sSkarmoryGfx6)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_7.4bpp.lz");
static const ax_sprite sSkarmorySprites7[] = {
	{sSkarmoryGfx7, ARRAY_COUNT(sSkarmoryGfx7)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_8.4bpp.lz");
static const ax_sprite sSkarmorySprites8[] = {
	{sSkarmoryGfx8, ARRAY_COUNT(sSkarmoryGfx8)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_9.4bpp.lz");
static const ax_sprite sSkarmorySprites9[] = {
	{sSkarmoryGfx9, ARRAY_COUNT(sSkarmoryGfx9)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_10.4bpp.lz");
static const ax_sprite sSkarmorySprites10[] = {
	{sSkarmoryGfx10, ARRAY_COUNT(sSkarmoryGfx10)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_11.4bpp.lz");
static const ax_sprite sSkarmorySprites11[] = {
	{sSkarmoryGfx11, ARRAY_COUNT(sSkarmoryGfx11)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_12.4bpp.lz");
static const ax_sprite sSkarmorySprites12[] = {
	{sSkarmoryGfx12, ARRAY_COUNT(sSkarmoryGfx12)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_13.4bpp.lz");
static const ax_sprite sSkarmorySprites13[] = {
	{sSkarmoryGfx13, ARRAY_COUNT(sSkarmoryGfx13)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_14.4bpp.lz");
static const ax_sprite sSkarmorySprites14[] = {
	{sSkarmoryGfx14, ARRAY_COUNT(sSkarmoryGfx14)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_15.4bpp.lz");
static const ax_sprite sSkarmorySprites15[] = {
	{sSkarmoryGfx15, ARRAY_COUNT(sSkarmoryGfx15)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_16.4bpp.lz");
static const ax_sprite sSkarmorySprites16[] = {
	{sSkarmoryGfx16, ARRAY_COUNT(sSkarmoryGfx16)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_17.4bpp.lz");
static const ax_sprite sSkarmorySprites17[] = {
	{sSkarmoryGfx17, ARRAY_COUNT(sSkarmoryGfx17)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_18.4bpp.lz");
static const ax_sprite sSkarmorySprites18[] = {
	{sSkarmoryGfx18, ARRAY_COUNT(sSkarmoryGfx18)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_19.4bpp.lz");
static const ax_sprite sSkarmorySprites19[] = {
	{sSkarmoryGfx19, ARRAY_COUNT(sSkarmoryGfx19)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_20.4bpp.lz");
static const ax_sprite sSkarmorySprites20[] = {
	{sSkarmoryGfx20, ARRAY_COUNT(sSkarmoryGfx20)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_21.4bpp.lz");
static const ax_sprite sSkarmorySprites21[] = {
	{sSkarmoryGfx21, ARRAY_COUNT(sSkarmoryGfx21)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_22.4bpp.lz");
static const ax_sprite sSkarmorySprites22[] = {
	{sSkarmoryGfx22, ARRAY_COUNT(sSkarmoryGfx22)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_23.4bpp.lz");
static const ax_sprite sSkarmorySprites23[] = {
	{sSkarmoryGfx23, ARRAY_COUNT(sSkarmoryGfx23)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_24.4bpp.lz");
static const ax_sprite sSkarmorySprites24[] = {
	{sSkarmoryGfx24, ARRAY_COUNT(sSkarmoryGfx24)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_25.4bpp.lz");
static const ax_sprite sSkarmorySprites25[] = {
	{sSkarmoryGfx25, ARRAY_COUNT(sSkarmoryGfx25)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_26.4bpp.lz");
static const ax_sprite sSkarmorySprites26[] = {
	{sSkarmoryGfx26, ARRAY_COUNT(sSkarmoryGfx26)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_27.4bpp.lz");
static const ax_sprite sSkarmorySprites27[] = {
	{sSkarmoryGfx27, ARRAY_COUNT(sSkarmoryGfx27)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_28.4bpp.lz");
static const ax_sprite sSkarmorySprites28[] = {
	{sSkarmoryGfx28, ARRAY_COUNT(sSkarmoryGfx28)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_29.4bpp.lz");
static const ax_sprite sSkarmorySprites29[] = {
	{sSkarmoryGfx29, ARRAY_COUNT(sSkarmoryGfx29)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_30.4bpp.lz");
static const ax_sprite sSkarmorySprites30[] = {
	{sSkarmoryGfx30, ARRAY_COUNT(sSkarmoryGfx30)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_31.4bpp.lz");
static const u8 sSkarmoryGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_31_1.4bpp.lz");
static const u8 sSkarmoryGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_31_2.4bpp.lz");
static const ax_sprite sSkarmorySprites31[] = {
	{NULL, 64}, 
	{sSkarmoryGfx31, ARRAY_COUNT(sSkarmoryGfx31)}, 
	{NULL, 32}, 
	{sSkarmoryGfx31_1, ARRAY_COUNT(sSkarmoryGfx31_1)}, 
	{NULL, 32}, 
	{sSkarmoryGfx31_2, ARRAY_COUNT(sSkarmoryGfx31_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_32.4bpp.lz");
static const u8 sSkarmoryGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_32_1.4bpp.lz");
static const ax_sprite sSkarmorySprites32[] = {
	{NULL, 128}, 
	{sSkarmoryGfx32, ARRAY_COUNT(sSkarmoryGfx32)}, 
	{NULL, 32}, 
	{sSkarmoryGfx32_1, ARRAY_COUNT(sSkarmoryGfx32_1)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_33.4bpp.lz");
static const u8 sSkarmoryGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_33_1.4bpp.lz");
static const ax_sprite sSkarmorySprites33[] = {
	{sSkarmoryGfx33, ARRAY_COUNT(sSkarmoryGfx33)}, 
	{NULL, 96}, 
	{sSkarmoryGfx33_1, ARRAY_COUNT(sSkarmoryGfx33_1)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_34.4bpp.lz");
static const ax_sprite sSkarmorySprites34[] = {
	{sSkarmoryGfx34, ARRAY_COUNT(sSkarmoryGfx34)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_35.4bpp.lz");
static const ax_sprite sSkarmorySprites35[] = {
	{sSkarmoryGfx35, ARRAY_COUNT(sSkarmoryGfx35)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_36.4bpp.lz");
static const ax_sprite sSkarmorySprites36[] = {
	{sSkarmoryGfx36, ARRAY_COUNT(sSkarmoryGfx36)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_37.4bpp.lz");
static const ax_sprite sSkarmorySprites37[] = {
	{sSkarmoryGfx37, ARRAY_COUNT(sSkarmoryGfx37)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_38.4bpp.lz");
static const ax_sprite sSkarmorySprites38[] = {
	{sSkarmoryGfx38, ARRAY_COUNT(sSkarmoryGfx38)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_39.4bpp.lz");
static const u8 sSkarmoryGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_39_1.4bpp.lz");
static const ax_sprite sSkarmorySprites39[] = {
	{sSkarmoryGfx39, ARRAY_COUNT(sSkarmoryGfx39)}, 
	{NULL, 32}, 
	{sSkarmoryGfx39_1, ARRAY_COUNT(sSkarmoryGfx39_1)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_40.4bpp.lz");
static const ax_sprite sSkarmorySprites40[] = {
	{NULL, 32}, 
	{sSkarmoryGfx40, ARRAY_COUNT(sSkarmoryGfx40)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_41.4bpp.lz");
static const ax_sprite sSkarmorySprites41[] = {
	{sSkarmoryGfx41, ARRAY_COUNT(sSkarmoryGfx41)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_42.4bpp.lz");
static const ax_sprite sSkarmorySprites42[] = {
	{sSkarmoryGfx42, ARRAY_COUNT(sSkarmoryGfx42)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_43.4bpp.lz");
static const ax_sprite sSkarmorySprites43[] = {
	{sSkarmoryGfx43, ARRAY_COUNT(sSkarmoryGfx43)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_44.4bpp.lz");
static const ax_sprite sSkarmorySprites44[] = {
	{sSkarmoryGfx44, ARRAY_COUNT(sSkarmoryGfx44)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_45.4bpp.lz");
static const ax_sprite sSkarmorySprites45[] = {
	{sSkarmoryGfx45, ARRAY_COUNT(sSkarmoryGfx45)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_46.4bpp.lz");
static const ax_sprite sSkarmorySprites46[] = {
	{sSkarmoryGfx46, ARRAY_COUNT(sSkarmoryGfx46)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_47.4bpp.lz");
static const u8 sSkarmoryGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_47_1.4bpp.lz");
static const u8 sSkarmoryGfx47_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_47_2.4bpp.lz");
static const ax_sprite sSkarmorySprites47[] = {
	{NULL, 32}, 
	{sSkarmoryGfx47, ARRAY_COUNT(sSkarmoryGfx47)}, 
	{NULL, 32}, 
	{sSkarmoryGfx47_1, ARRAY_COUNT(sSkarmoryGfx47_1)}, 
	{NULL, 32}, 
	{sSkarmoryGfx47_2, ARRAY_COUNT(sSkarmoryGfx47_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_48.4bpp.lz");
static const u8 sSkarmoryGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_48_1.4bpp.lz");
static const ax_sprite sSkarmorySprites48[] = {
	{sSkarmoryGfx48, ARRAY_COUNT(sSkarmoryGfx48)}, 
	{NULL, 64}, 
	{sSkarmoryGfx48_1, ARRAY_COUNT(sSkarmoryGfx48_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_49.4bpp.lz");
static const u8 sSkarmoryGfx49_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_49_1.4bpp.lz");
static const u8 sSkarmoryGfx49_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_49_2.4bpp.lz");
static const ax_sprite sSkarmorySprites49[] = {
	{sSkarmoryGfx49, ARRAY_COUNT(sSkarmoryGfx49)}, 
	{NULL, 32}, 
	{sSkarmoryGfx49_1, ARRAY_COUNT(sSkarmoryGfx49_1)}, 
	{NULL, 32}, 
	{sSkarmoryGfx49_2, ARRAY_COUNT(sSkarmoryGfx49_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_50.4bpp.lz");
static const u8 sSkarmoryGfx50_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_50_1.4bpp.lz");
static const ax_sprite sSkarmorySprites50[] = {
	{sSkarmoryGfx50, ARRAY_COUNT(sSkarmoryGfx50)}, 
	{NULL, 32}, 
	{sSkarmoryGfx50_1, ARRAY_COUNT(sSkarmoryGfx50_1)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_51.4bpp.lz");
static const ax_sprite sSkarmorySprites51[] = {
	{sSkarmoryGfx51, ARRAY_COUNT(sSkarmoryGfx51)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_52.4bpp.lz");
static const ax_sprite sSkarmorySprites52[] = {
	{sSkarmoryGfx52, ARRAY_COUNT(sSkarmoryGfx52)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_53.4bpp.lz");
static const ax_sprite sSkarmorySprites53[] = {
	{sSkarmoryGfx53, ARRAY_COUNT(sSkarmoryGfx53)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_54.4bpp.lz");
static const ax_sprite sSkarmorySprites54[] = {
	{sSkarmoryGfx54, ARRAY_COUNT(sSkarmoryGfx54)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_55.4bpp.lz");
static const u8 sSkarmoryGfx55_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_55_1.4bpp.lz");
static const u8 sSkarmoryGfx55_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_55_2.4bpp.lz");
static const ax_sprite sSkarmorySprites55[] = {
	{sSkarmoryGfx55, ARRAY_COUNT(sSkarmoryGfx55)}, 
	{NULL, 32}, 
	{sSkarmoryGfx55_1, ARRAY_COUNT(sSkarmoryGfx55_1)}, 
	{NULL, 32}, 
	{sSkarmoryGfx55_2, ARRAY_COUNT(sSkarmoryGfx55_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_56.4bpp.lz");
static const u8 sSkarmoryGfx56_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_56_1.4bpp.lz");
static const ax_sprite sSkarmorySprites56[] = {
	{NULL, 32}, 
	{sSkarmoryGfx56, ARRAY_COUNT(sSkarmoryGfx56)}, 
	{NULL, 32}, 
	{sSkarmoryGfx56_1, ARRAY_COUNT(sSkarmoryGfx56_1)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_57.4bpp.lz");
static const u8 sSkarmoryGfx57_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_57_1.4bpp.lz");
static const ax_sprite sSkarmorySprites57[] = {
	{sSkarmoryGfx57, ARRAY_COUNT(sSkarmoryGfx57)}, 
	{NULL, 32}, 
	{sSkarmoryGfx57_1, ARRAY_COUNT(sSkarmoryGfx57_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_58.4bpp.lz");
static const ax_sprite sSkarmorySprites58[] = {
	{sSkarmoryGfx58, ARRAY_COUNT(sSkarmoryGfx58)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_59.4bpp.lz");
static const ax_sprite sSkarmorySprites59[] = {
	{sSkarmoryGfx59, ARRAY_COUNT(sSkarmoryGfx59)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_60.4bpp.lz");
static const ax_sprite sSkarmorySprites60[] = {
	{sSkarmoryGfx60, ARRAY_COUNT(sSkarmoryGfx60)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_61.4bpp.lz");
static const ax_sprite sSkarmorySprites61[] = {
	{sSkarmoryGfx61, ARRAY_COUNT(sSkarmoryGfx61)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_62.4bpp.lz");
static const ax_sprite sSkarmorySprites62[] = {
	{sSkarmoryGfx62, ARRAY_COUNT(sSkarmoryGfx62)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_63.4bpp.lz");
static const ax_sprite sSkarmorySprites63[] = {
	{sSkarmoryGfx63, ARRAY_COUNT(sSkarmoryGfx63)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_64.4bpp.lz");
static const ax_sprite sSkarmorySprites64[] = {
	{sSkarmoryGfx64, ARRAY_COUNT(sSkarmoryGfx64)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_65.4bpp.lz");
static const ax_sprite sSkarmorySprites65[] = {
	{sSkarmoryGfx65, ARRAY_COUNT(sSkarmoryGfx65)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_66.4bpp.lz");
static const ax_sprite sSkarmorySprites66[] = {
	{sSkarmoryGfx66, ARRAY_COUNT(sSkarmoryGfx66)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_67.4bpp.lz");
static const ax_sprite sSkarmorySprites67[] = {
	{sSkarmoryGfx67, ARRAY_COUNT(sSkarmoryGfx67)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_68.4bpp.lz");
static const ax_sprite sSkarmorySprites68[] = {
	{sSkarmoryGfx68, ARRAY_COUNT(sSkarmoryGfx68)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_69.4bpp.lz");
static const ax_sprite sSkarmorySprites69[] = {
	{sSkarmoryGfx69, ARRAY_COUNT(sSkarmoryGfx69)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_70.4bpp.lz");
static const ax_sprite sSkarmorySprites70[] = {
	{sSkarmoryGfx70, ARRAY_COUNT(sSkarmoryGfx70)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_71.4bpp.lz");
static const ax_sprite sSkarmorySprites71[] = {
	{sSkarmoryGfx71, ARRAY_COUNT(sSkarmoryGfx71)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_72.4bpp.lz");
static const ax_sprite sSkarmorySprites72[] = {
	{sSkarmoryGfx72, ARRAY_COUNT(sSkarmoryGfx72)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_73.4bpp.lz");
static const ax_sprite sSkarmorySprites73[] = {
	{sSkarmoryGfx73, ARRAY_COUNT(sSkarmoryGfx73)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_74.4bpp.lz");
static const ax_sprite sSkarmorySprites74[] = {
	{sSkarmoryGfx74, ARRAY_COUNT(sSkarmoryGfx74)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_75.4bpp.lz");
static const ax_sprite sSkarmorySprites75[] = {
	{sSkarmoryGfx75, ARRAY_COUNT(sSkarmoryGfx75)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_76.4bpp.lz");
static const ax_sprite sSkarmorySprites76[] = {
	{sSkarmoryGfx76, ARRAY_COUNT(sSkarmoryGfx76)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_77.4bpp.lz");
static const ax_sprite sSkarmorySprites77[] = {
	{sSkarmoryGfx77, ARRAY_COUNT(sSkarmoryGfx77)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_78.4bpp.lz");
static const ax_sprite sSkarmorySprites78[] = {
	{sSkarmoryGfx78, ARRAY_COUNT(sSkarmoryGfx78)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_79.4bpp.lz");
static const ax_sprite sSkarmorySprites79[] = {
	{sSkarmoryGfx79, ARRAY_COUNT(sSkarmoryGfx79)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_80.4bpp.lz");
static const ax_sprite sSkarmorySprites80[] = {
	{sSkarmoryGfx80, ARRAY_COUNT(sSkarmoryGfx80)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_81.4bpp.lz");
static const ax_sprite sSkarmorySprites81[] = {
	{sSkarmoryGfx81, ARRAY_COUNT(sSkarmoryGfx81)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_82.4bpp.lz");
static const ax_sprite sSkarmorySprites82[] = {
	{sSkarmoryGfx82, ARRAY_COUNT(sSkarmoryGfx82)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_83.4bpp.lz");
static const ax_sprite sSkarmorySprites83[] = {
	{sSkarmoryGfx83, ARRAY_COUNT(sSkarmoryGfx83)}, 
	{NULL, 0}
};
static const u8 sSkarmoryGfx84[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/skarmory/sprite_84.4bpp.lz");
static const ax_sprite sSkarmorySprites84[] = {
	{sSkarmoryGfx84, ARRAY_COUNT(sSkarmoryGfx84)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSkarmory[] = {
	sSkarmoryPose1,
	sSkarmoryPose2,
	sSkarmoryPose3,
	sSkarmoryPose4,
	sSkarmoryPose5,
	sSkarmoryPose6,
	sSkarmoryPose7,
	sSkarmoryPose8,
	sSkarmoryPose9,
	sSkarmoryPose10,
	sSkarmoryPose11,
	sSkarmoryPose12,
	sSkarmoryPose13,
	sSkarmoryPose14,
	sSkarmoryPose15,
	sSkarmoryPose16,
	sSkarmoryPose1,
	sSkarmoryPose2,
	sSkarmoryPose19,
	sSkarmoryPose3,
	sSkarmoryPose4,
	sSkarmoryPose22,
	sSkarmoryPose5,
	sSkarmoryPose6,
	sSkarmoryPose25,
	sSkarmoryPose7,
	sSkarmoryPose8,
	sSkarmoryPose28,
	sSkarmoryPose9,
	sSkarmoryPose10,
	sSkarmoryPose31,
	sSkarmoryPose11,
	sSkarmoryPose12,
	sSkarmoryPose34,
	sSkarmoryPose13,
	sSkarmoryPose14,
	sSkarmoryPose37,
	sSkarmoryPose15,
	sSkarmoryPose16,
	sSkarmoryPose40,
	sSkarmoryPose1,
	sSkarmoryPose2,
	sSkarmoryPose19,
	sSkarmoryPose3,
	sSkarmoryPose4,
	sSkarmoryPose22,
	sSkarmoryPose5,
	sSkarmoryPose6,
	sSkarmoryPose25,
	sSkarmoryPose7,
	sSkarmoryPose8,
	sSkarmoryPose28,
	sSkarmoryPose9,
	sSkarmoryPose10,
	sSkarmoryPose31,
	sSkarmoryPose11,
	sSkarmoryPose12,
	sSkarmoryPose34,
	sSkarmoryPose13,
	sSkarmoryPose14,
	sSkarmoryPose37,
	sSkarmoryPose15,
	sSkarmoryPose16,
	sSkarmoryPose40,
	sSkarmoryPose65,
	sSkarmoryPose66,
	sSkarmoryPose67,
	sSkarmoryPose68,
	sSkarmoryPose69,
	sSkarmoryPose70,
	sSkarmoryPose71,
	sSkarmoryPose72,
	sSkarmoryPose73,
	sSkarmoryPose74,
	sSkarmoryPose75,
	sSkarmoryPose76,
	sSkarmoryPose77,
	sSkarmoryPose78,
	sSkarmoryPose79,
	sSkarmoryPose80,
	sSkarmoryPose65,
	sSkarmoryPose79,
	sSkarmoryPose77,
	sSkarmoryPose75,
	sSkarmoryPose73,
	sSkarmoryPose71,
	sSkarmoryPose69,
	sSkarmoryPose67,
	sSkarmoryPose89,
	sSkarmoryPose90,
	sSkarmoryPose91,
	sSkarmoryPose92,
	sSkarmoryPose93,
	sSkarmoryPose94,
	sSkarmoryPose95,
	sSkarmoryPose96,
	sSkarmoryPose97,
	sSkarmoryPose98,
	sSkarmoryPose65,
	sSkarmoryPose100,
	sSkarmoryPose101,
	sSkarmoryPose67,
	sSkarmoryPose103,
	sSkarmoryPose104,
	sSkarmoryPose69,
	sSkarmoryPose106,
	sSkarmoryPose107,
	sSkarmoryPose71,
	sSkarmoryPose109,
	sSkarmoryPose110,
	sSkarmoryPose73,
	sSkarmoryPose112,
	sSkarmoryPose113,
	sSkarmoryPose75,
	sSkarmoryPose115,
	sSkarmoryPose116,
	sSkarmoryPose77,
	sSkarmoryPose118,
	sSkarmoryPose119,
	sSkarmoryPose79,
	sSkarmoryPose121,
	sSkarmoryPose122,
	sSkarmoryPose66,
	sSkarmoryPose124,
	sSkarmoryPose125,
	sSkarmoryPose126,
	sSkarmoryPose74,
	sSkarmoryPose72,
	sSkarmoryPose70,
	sSkarmoryPose130,
	sSkarmoryPose66,
	sSkarmoryPose130,
	sSkarmoryPose70,
	sSkarmoryPose72,
	sSkarmoryPose74,
	sSkarmoryPose126,
	sSkarmoryPose125,
	sSkarmoryPose124,
	sSkarmoryPose65,
	sSkarmoryPose66,
	sSkarmoryPose141,
	sSkarmoryPose67,
	sSkarmoryPose68,
	sSkarmoryPose144,
	sSkarmoryPose69,
	sSkarmoryPose70,
	sSkarmoryPose147,
	sSkarmoryPose71,
	sSkarmoryPose72,
	sSkarmoryPose150,
	sSkarmoryPose73,
	sSkarmoryPose74,
	sSkarmoryPose153,
	sSkarmoryPose75,
	sSkarmoryPose76,
	sSkarmoryPose156,
	sSkarmoryPose77,
	sSkarmoryPose78,
	sSkarmoryPose159,
	sSkarmoryPose79,
	sSkarmoryPose80,
	sSkarmoryPose162,
	sSkarmoryPose66,
	sSkarmoryPose124,
	sSkarmoryPose125,
	sSkarmoryPose126,
	sSkarmoryPose74,
	sSkarmoryPose72,
	sSkarmoryPose70,
	sSkarmoryPose130,
	sSkarmoryPose65,
	sSkarmoryPose79,
	sSkarmoryPose77,
	sSkarmoryPose75,
	sSkarmoryPose73,
	sSkarmoryPose71,
	sSkarmoryPose69,
	sSkarmoryPose67,
	sSkarmoryPose179,
	sSkarmoryPose180,
	sSkarmoryPose181,
	sSkarmoryPose182,
	sSkarmoryPose179,
	sSkarmoryPose180,
	sSkarmoryPose1,
	sSkarmoryPose2,
	sSkarmoryPose181,
	sSkarmoryPose182,
	sSkarmoryPose179,
	sSkarmoryPose180,
	sSkarmoryPose1,
	sSkarmoryPose2,
};

static const struct PositionSets sAxPositionsSkarmory[] = {
	[0] = { .set = { {0, -17}, {-13, -24}, {13, -24}, {0, -14} } },
	[1] = { .set = { {0, -17}, {-12, -19}, {12, -19}, {0, -14} } },
	[2] = { .set = { {12, -18}, {1, -25}, {-13, -24}, {0, -14} } },
	[3] = { .set = { {12, -18}, {-2, -21}, {-13, -18}, {0, -13} } },
	[4] = { .set = { {15, -21}, {-8, -26}, {-12, -21}, {1, -14} } },
	[5] = { .set = { {15, -21}, {-11, -21}, {-13, -17}, {2, -15} } },
	[6] = { .set = { {12, -26}, {-12, -23}, {7, -17}, {1, -17} } },
	[7] = { .set = { {12, -26}, {-13, -18}, {5, -10}, {1, -16} } },
	[8] = { .set = { {0, -28}, {14, -20}, {-14, -20}, {0, -14} } },
	[9] = { .set = { {0, -28}, {13, -14}, {-14, -14}, {0, -16} } },
	[10] = { .set = { {-13, -26}, {11, -23}, {-8, -17}, {-2, -17} } },
	[11] = { .set = { {-13, -26}, {12, -18}, {-6, -10}, {-2, -16} } },
	[12] = { .set = { {-15, -21}, {8, -26}, {12, -21}, {-1, -14} } },
	[13] = { .set = { {-15, -21}, {11, -21}, {13, -17}, {-2, -15} } },
	[14] = { .set = { {-12, -18}, {-1, -25}, {13, -24}, {0, -14} } },
	[15] = { .set = { {-12, -18}, {2, -21}, {13, -18}, {0, -13} } },
	[16] = { .set = { {0, -17}, {-13, -24}, {13, -24}, {0, -14} } },
	[17] = { .set = { {0, -17}, {-12, -19}, {12, -19}, {0, -14} } },
	[18] = { .set = { {0, -7}, {-18, -10}, {18, -10}, {0, -10} } },
	[19] = { .set = { {12, -18}, {1, -25}, {-13, -24}, {0, -14} } },
	[20] = { .set = { {12, -18}, {-2, -21}, {-13, -18}, {0, -13} } },
	[21] = { .set = { {14, -7}, {8, -17}, {-12, -7}, {3, -9} } },
	[22] = { .set = { {15, -21}, {-8, -26}, {-12, -21}, {1, -14} } },
	[23] = { .set = { {15, -21}, {-11, -21}, {-13, -17}, {2, -15} } },
	[24] = { .set = { {14, -8}, {1, -15}, {-1, -4}, {0, -8} } },
	[25] = { .set = { {12, -26}, {-12, -23}, {7, -17}, {1, -17} } },
	[26] = { .set = { {12, -26}, {-13, -18}, {5, -10}, {1, -16} } },
	[27] = { .set = { {11, -11}, {-5, -16}, {13, -7}, {2, -9} } },
	[28] = { .set = { {0, -28}, {14, -20}, {-14, -20}, {0, -14} } },
	[29] = { .set = { {0, -28}, {13, -14}, {-14, -14}, {0, -16} } },
	[30] = { .set = { {0, -17}, {17, -13}, {-17, -13}, {0, -12} } },
	[31] = { .set = { {-13, -26}, {11, -23}, {-8, -17}, {-2, -17} } },
	[32] = { .set = { {-13, -26}, {12, -18}, {-6, -10}, {-2, -16} } },
	[33] = { .set = { {-12, -11}, {4, -16}, {-14, -7}, {-3, -9} } },
	[34] = { .set = { {-15, -21}, {8, -26}, {12, -21}, {-1, -14} } },
	[35] = { .set = { {-15, -21}, {11, -21}, {13, -17}, {-2, -15} } },
	[36] = { .set = { {-14, -8}, {-1, -15}, {1, -4}, {0, -8} } },
	[37] = { .set = { {-12, -18}, {-1, -25}, {13, -24}, {0, -14} } },
	[38] = { .set = { {-12, -18}, {2, -21}, {13, -18}, {0, -13} } },
	[39] = { .set = { {-12, -7}, {-6, -17}, {14, -7}, {-1, -9} } },
	[40] = { .set = { {0, -17}, {-13, -24}, {13, -24}, {0, -14} } },
	[41] = { .set = { {0, -17}, {-12, -19}, {12, -19}, {0, -14} } },
	[42] = { .set = { {0, -7}, {-18, -10}, {18, -10}, {0, -10} } },
	[43] = { .set = { {12, -18}, {1, -25}, {-13, -24}, {0, -14} } },
	[44] = { .set = { {12, -18}, {-2, -21}, {-13, -18}, {0, -13} } },
	[45] = { .set = { {14, -7}, {8, -17}, {-12, -7}, {3, -9} } },
	[46] = { .set = { {15, -21}, {-8, -26}, {-12, -21}, {1, -14} } },
	[47] = { .set = { {15, -21}, {-11, -21}, {-13, -17}, {2, -15} } },
	[48] = { .set = { {14, -8}, {1, -15}, {-1, -4}, {0, -8} } },
	[49] = { .set = { {12, -26}, {-12, -23}, {7, -17}, {1, -17} } },
	[50] = { .set = { {12, -26}, {-13, -18}, {5, -10}, {1, -16} } },
	[51] = { .set = { {11, -11}, {-5, -16}, {13, -7}, {2, -9} } },
	[52] = { .set = { {0, -28}, {14, -20}, {-14, -20}, {0, -14} } },
	[53] = { .set = { {0, -28}, {13, -14}, {-14, -14}, {0, -16} } },
	[54] = { .set = { {0, -17}, {17, -13}, {-17, -13}, {0, -12} } },
	[55] = { .set = { {-13, -26}, {11, -23}, {-8, -17}, {-2, -17} } },
	[56] = { .set = { {-13, -26}, {12, -18}, {-6, -10}, {-2, -16} } },
	[57] = { .set = { {-12, -11}, {4, -16}, {-14, -7}, {-3, -9} } },
	[58] = { .set = { {-15, -21}, {8, -26}, {12, -21}, {-1, -14} } },
	[59] = { .set = { {-15, -21}, {11, -21}, {13, -17}, {-2, -15} } },
	[60] = { .set = { {-14, -8}, {-1, -15}, {1, -4}, {0, -8} } },
	[61] = { .set = { {-12, -18}, {-1, -25}, {13, -24}, {0, -14} } },
	[62] = { .set = { {-12, -18}, {2, -21}, {13, -18}, {0, -13} } },
	[63] = { .set = { {-12, -7}, {-6, -17}, {14, -7}, {-1, -9} } },
	[64] = { .set = { {0, -14}, {-12, -24}, {12, -24}, {0, -11} } },
	[65] = { .set = { {0, -7}, {-17, -18}, {17, -18}, {0, -9} } },
	[66] = { .set = { {11, -15}, {1, -22}, {-11, -23}, {0, -10} } },
	[67] = { .set = { {10, -9}, {4, -20}, {-13, -18}, {1, -8} } },
	[68] = { .set = { {14, -18}, {-6, -25}, {-12, -21}, {0, -9} } },
	[69] = { .set = { {12, -11}, {-4, -20}, {-12, -16}, {2, -8} } },
	[70] = { .set = { {11, -21}, {-10, -24}, {7, -17}, {1, -12} } },
	[71] = { .set = { {12, -17}, {-13, -19}, {13, -14}, {0, -10} } },
	[72] = { .set = { {0, -23}, {13, -22}, {-13, -22}, {0, -11} } },
	[73] = { .set = { {0, -18}, {16, -17}, {-16, -17}, {0, -10} } },
	[74] = { .set = { {-12, -21}, {9, -24}, {-8, -17}, {-2, -12} } },
	[75] = { .set = { {-13, -17}, {12, -19}, {-14, -14}, {-1, -10} } },
	[76] = { .set = { {-14, -18}, {6, -25}, {12, -21}, {0, -9} } },
	[77] = { .set = { {-12, -11}, {4, -20}, {12, -16}, {-2, -8} } },
	[78] = { .set = { {-11, -15}, {-1, -22}, {11, -23}, {0, -10} } },
	[79] = { .set = { {-10, -9}, {-4, -20}, {13, -18}, {-1, -8} } },
	[80] = { .set = { {0, -14}, {-12, -24}, {12, -24}, {0, -11} } },
	[81] = { .set = { {-11, -15}, {-1, -22}, {11, -23}, {0, -10} } },
	[82] = { .set = { {-14, -18}, {6, -25}, {12, -21}, {0, -9} } },
	[83] = { .set = { {-12, -21}, {9, -24}, {-8, -17}, {-2, -12} } },
	[84] = { .set = { {0, -23}, {13, -22}, {-13, -22}, {0, -11} } },
	[85] = { .set = { {11, -21}, {-10, -24}, {7, -17}, {1, -12} } },
	[86] = { .set = { {14, -18}, {-6, -25}, {-12, -21}, {0, -9} } },
	[87] = { .set = { {11, -15}, {1, -22}, {-11, -23}, {0, -10} } },
	[88] = { .set = { {9, -16}, {-9, -11}, {-4, -11}, {-1, -10} } },
	[89] = { .set = { {10, -15}, {-9, -11}, {-4, -11}, {-1, -9} } },
	[90] = { .set = { {0, -24}, {-12, -21}, {12, -21}, {0, -12} } },
	[91] = { .set = { {-2, -26}, {7, -21}, {-15, -22}, {-2, -13} } },
	[92] = { .set = { {2, -25}, {-11, -21}, {-11, -18}, {1, -11} } },
	[93] = { .set = { {2, -24}, {-12, -21}, {6, -18}, {-2, -11} } },
	[94] = { .set = { {0, -24}, {13, -19}, {-13, -19}, {0, -11} } },
	[95] = { .set = { {-3, -24}, {11, -21}, {-7, -18}, {1, -11} } },
	[96] = { .set = { {-2, -25}, {11, -21}, {11, -18}, {-1, -11} } },
	[97] = { .set = { {1, -26}, {-8, -21}, {14, -22}, {1, -13} } },
	[98] = { .set = { {0, -14}, {-12, -24}, {12, -24}, {0, -11} } },
	[99] = { .set = { {0, -15}, {-13, -22}, {13, -22}, {0, -12} } },
	[100] = { .set = { {0, -15}, {-12, -17}, {12, -17}, {0, -12} } },
	[101] = { .set = { {11, -15}, {1, -22}, {-11, -23}, {0, -10} } },
	[102] = { .set = { {12, -16}, {1, -23}, {-13, -22}, {0, -12} } },
	[103] = { .set = { {12, -16}, {-2, -19}, {-13, -16}, {0, -11} } },
	[104] = { .set = { {14, -18}, {-6, -25}, {-12, -21}, {0, -9} } },
	[105] = { .set = { {15, -19}, {-8, -24}, {-12, -19}, {1, -12} } },
	[106] = { .set = { {15, -19}, {-11, -19}, {-13, -15}, {2, -13} } },
	[107] = { .set = { {11, -21}, {-10, -24}, {7, -17}, {1, -12} } },
	[108] = { .set = { {12, -24}, {-12, -21}, {7, -15}, {1, -15} } },
	[109] = { .set = { {12, -24}, {-13, -16}, {5, -8}, {1, -14} } },
	[110] = { .set = { {0, -23}, {13, -22}, {-13, -22}, {0, -11} } },
	[111] = { .set = { {0, -26}, {14, -18}, {-14, -18}, {0, -12} } },
	[112] = { .set = { {0, -26}, {13, -12}, {-14, -12}, {0, -14} } },
	[113] = { .set = { {-12, -21}, {9, -24}, {-8, -17}, {-2, -12} } },
	[114] = { .set = { {-13, -24}, {11, -21}, {-8, -15}, {-2, -15} } },
	[115] = { .set = { {-13, -24}, {12, -16}, {-6, -8}, {-2, -14} } },
	[116] = { .set = { {-14, -18}, {6, -25}, {12, -21}, {0, -9} } },
	[117] = { .set = { {-15, -19}, {8, -24}, {12, -19}, {-1, -12} } },
	[118] = { .set = { {-15, -19}, {11, -19}, {13, -15}, {-2, -13} } },
	[119] = { .set = { {-11, -15}, {-1, -22}, {11, -23}, {0, -10} } },
	[120] = { .set = { {-12, -16}, {-1, -23}, {13, -22}, {0, -12} } },
	[121] = { .set = { {-12, -16}, {2, -19}, {13, -16}, {0, -11} } },
	[122] = { .set = { {0, -7}, {-17, -18}, {17, -18}, {0, -9} } },
	[123] = { .set = { {-9, -9}, {-3, -20}, {14, -18}, {0, -8} } },
	[124] = { .set = { {-11, -11}, {5, -20}, {13, -16}, {-1, -8} } },
	[125] = { .set = { {-12, -17}, {13, -19}, {-13, -14}, {0, -10} } },
	[126] = { .set = { {0, -18}, {16, -17}, {-16, -17}, {0, -10} } },
	[127] = { .set = { {12, -17}, {-13, -19}, {13, -14}, {0, -10} } },
	[128] = { .set = { {12, -11}, {-4, -20}, {-12, -16}, {2, -8} } },
	[129] = { .set = { {9, -9}, {3, -20}, {-14, -18}, {0, -8} } },
	[130] = { .set = { {0, -7}, {-17, -18}, {17, -18}, {0, -9} } },
	[131] = { .set = { {9, -9}, {3, -20}, {-14, -18}, {0, -8} } },
	[132] = { .set = { {12, -11}, {-4, -20}, {-12, -16}, {2, -8} } },
	[133] = { .set = { {12, -17}, {-13, -19}, {13, -14}, {0, -10} } },
	[134] = { .set = { {0, -18}, {16, -17}, {-16, -17}, {0, -10} } },
	[135] = { .set = { {-12, -17}, {13, -19}, {-13, -14}, {0, -10} } },
	[136] = { .set = { {-11, -11}, {5, -20}, {13, -16}, {-1, -8} } },
	[137] = { .set = { {-9, -9}, {-3, -20}, {14, -18}, {0, -8} } },
	[138] = { .set = { {0, -14}, {-12, -24}, {12, -24}, {0, -11} } },
	[139] = { .set = { {0, -7}, {-17, -18}, {17, -18}, {0, -9} } },
	[140] = { .set = { {0, -14}, {-13, -21}, {13, -21}, {0, -11} } },
	[141] = { .set = { {11, -15}, {1, -22}, {-11, -23}, {0, -10} } },
	[142] = { .set = { {10, -9}, {4, -20}, {-13, -18}, {1, -8} } },
	[143] = { .set = { {12, -15}, {1, -22}, {-13, -21}, {0, -11} } },
	[144] = { .set = { {14, -18}, {-6, -25}, {-12, -21}, {0, -9} } },
	[145] = { .set = { {12, -11}, {-4, -20}, {-12, -16}, {2, -8} } },
	[146] = { .set = { {15, -18}, {-8, -23}, {-12, -18}, {1, -11} } },
	[147] = { .set = { {11, -21}, {-10, -24}, {7, -17}, {1, -12} } },
	[148] = { .set = { {12, -17}, {-13, -19}, {13, -14}, {0, -10} } },
	[149] = { .set = { {12, -23}, {-12, -20}, {7, -14}, {1, -14} } },
	[150] = { .set = { {0, -23}, {13, -22}, {-13, -22}, {0, -11} } },
	[151] = { .set = { {0, -18}, {16, -17}, {-16, -17}, {0, -10} } },
	[152] = { .set = { {0, -25}, {14, -17}, {-14, -17}, {0, -11} } },
	[153] = { .set = { {-12, -21}, {9, -24}, {-8, -17}, {-2, -12} } },
	[154] = { .set = { {-13, -17}, {12, -19}, {-14, -14}, {-1, -10} } },
	[155] = { .set = { {-13, -23}, {11, -20}, {-8, -14}, {-2, -14} } },
	[156] = { .set = { {-14, -18}, {6, -25}, {12, -21}, {0, -9} } },
	[157] = { .set = { {-12, -11}, {4, -20}, {12, -16}, {-2, -8} } },
	[158] = { .set = { {-15, -18}, {8, -23}, {12, -18}, {-1, -11} } },
	[159] = { .set = { {-11, -15}, {-1, -22}, {11, -23}, {0, -10} } },
	[160] = { .set = { {-10, -9}, {-4, -20}, {13, -18}, {-1, -8} } },
	[161] = { .set = { {-12, -15}, {-1, -22}, {13, -21}, {0, -11} } },
	[162] = { .set = { {0, -7}, {-17, -18}, {17, -18}, {0, -9} } },
	[163] = { .set = { {-9, -9}, {-3, -20}, {14, -18}, {0, -8} } },
	[164] = { .set = { {-11, -11}, {5, -20}, {13, -16}, {-1, -8} } },
	[165] = { .set = { {-12, -17}, {13, -19}, {-13, -14}, {0, -10} } },
	[166] = { .set = { {0, -18}, {16, -17}, {-16, -17}, {0, -10} } },
	[167] = { .set = { {12, -17}, {-13, -19}, {13, -14}, {0, -10} } },
	[168] = { .set = { {12, -11}, {-4, -20}, {-12, -16}, {2, -8} } },
	[169] = { .set = { {9, -9}, {3, -20}, {-14, -18}, {0, -8} } },
	[170] = { .set = { {0, -14}, {-12, -24}, {12, -24}, {0, -11} } },
	[171] = { .set = { {-11, -15}, {-1, -22}, {11, -23}, {0, -10} } },
	[172] = { .set = { {-14, -18}, {6, -25}, {12, -21}, {0, -9} } },
	[173] = { .set = { {-12, -21}, {9, -24}, {-8, -17}, {-2, -12} } },
	[174] = { .set = { {0, -23}, {13, -22}, {-13, -22}, {0, -11} } },
	[175] = { .set = { {11, -21}, {-10, -24}, {7, -17}, {1, -12} } },
	[176] = { .set = { {14, -18}, {-6, -25}, {-12, -21}, {0, -9} } },
	[177] = { .set = { {11, -15}, {1, -22}, {-11, -23}, {0, -10} } },
	[178] = { .set = { {0, -20}, {-12, -22}, {12, -22}, {0, -10} } },
	[179] = { .set = { {0, -19}, {-12, -24}, {12, -24}, {0, -10} } },
	[180] = { .set = { {0, -22}, {-13, -23}, {13, -23}, {0, -11} } },
	[181] = { .set = { {0, -22}, {-13, -18}, {13, -18}, {0, -11} } },
	[182] = { .set = { {0, -20}, {-12, -22}, {12, -22}, {0, -10} } },
	[183] = { .set = { {0, -19}, {-12, -24}, {12, -24}, {0, -10} } },
	[184] = { .set = { {0, -17}, {-13, -24}, {13, -24}, {0, -14} } },
	[185] = { .set = { {0, -17}, {-12, -19}, {12, -19}, {0, -14} } },
	[186] = { .set = { {0, -22}, {-13, -23}, {13, -23}, {0, -11} } },
	[187] = { .set = { {0, -22}, {-13, -18}, {13, -18}, {0, -11} } },
	[188] = { .set = { {0, -20}, {-12, -22}, {12, -22}, {0, -10} } },
	[189] = { .set = { {0, -19}, {-12, -24}, {12, -24}, {0, -10} } },
	[190] = { .set = { {0, -17}, {-13, -24}, {13, -24}, {0, -14} } },
	[191] = { .set = { {0, -17}, {-12, -19}, {12, -19}, {0, -14} } },
};

static const ax_anim *const sSkarmoryAnimTable1[] = {
	AX_ANIM_PTR(sSkarmoryAnims_1_1),
	AX_ANIM_PTR(sSkarmoryAnims_1_2),
	AX_ANIM_PTR(sSkarmoryAnims_1_3),
	AX_ANIM_PTR(sSkarmoryAnims_1_4),
	AX_ANIM_PTR(sSkarmoryAnims_1_5),
	AX_ANIM_PTR(sSkarmoryAnims_1_6),
	AX_ANIM_PTR(sSkarmoryAnims_1_7),
	AX_ANIM_PTR(sSkarmoryAnims_1_8),
};

static const ax_anim *const sSkarmoryAnimTable2[] = {
	AX_ANIM_PTR(sSkarmoryAnims_2_1),
	AX_ANIM_PTR(sSkarmoryAnims_2_2),
	AX_ANIM_PTR(sSkarmoryAnims_2_3),
	AX_ANIM_PTR(sSkarmoryAnims_2_4),
	AX_ANIM_PTR(sSkarmoryAnims_2_5),
	AX_ANIM_PTR(sSkarmoryAnims_2_6),
	AX_ANIM_PTR(sSkarmoryAnims_2_7),
	AX_ANIM_PTR(sSkarmoryAnims_2_8),
};

static const ax_anim *const sSkarmoryAnimTable3[] = {
	AX_ANIM_PTR(sSkarmoryAnims_3_1),
	AX_ANIM_PTR(sSkarmoryAnims_3_2),
	AX_ANIM_PTR(sSkarmoryAnims_3_3),
	AX_ANIM_PTR(sSkarmoryAnims_3_4),
	AX_ANIM_PTR(sSkarmoryAnims_3_5),
	AX_ANIM_PTR(sSkarmoryAnims_3_6),
	AX_ANIM_PTR(sSkarmoryAnims_3_7),
	AX_ANIM_PTR(sSkarmoryAnims_3_8),
};

static const ax_anim *const sSkarmoryAnimTable4[] = {
	AX_ANIM_PTR(sSkarmoryAnims_4_1),
	AX_ANIM_PTR(sSkarmoryAnims_4_2),
	AX_ANIM_PTR(sSkarmoryAnims_4_3),
	AX_ANIM_PTR(sSkarmoryAnims_4_4),
	AX_ANIM_PTR(sSkarmoryAnims_4_5),
	AX_ANIM_PTR(sSkarmoryAnims_4_6),
	AX_ANIM_PTR(sSkarmoryAnims_4_7),
	AX_ANIM_PTR(sSkarmoryAnims_4_8),
};

static const ax_anim *const sSkarmoryAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_02147),
	AX_ANIM_PTR(gAxSharedAnim_02206),
	AX_ANIM_PTR(gAxSharedAnim_02200),
	AX_ANIM_PTR(gAxSharedAnim_02192),
	AX_ANIM_PTR(gAxSharedAnim_02181),
	AX_ANIM_PTR(gAxSharedAnim_02171),
	AX_ANIM_PTR(gAxSharedAnim_02165),
	AX_ANIM_PTR(gAxSharedAnim_02156),
};

static const ax_anim *const sSkarmoryAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
	AX_ANIM_PTR(gAxSharedAnim_02405),
};

static const ax_anim *const sSkarmoryAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_02236),
	AX_ANIM_PTR(gAxSharedAnim_02244),
	AX_ANIM_PTR(gAxSharedAnim_02256),
	AX_ANIM_PTR(gAxSharedAnim_02265),
	AX_ANIM_PTR(gAxSharedAnim_02279),
	AX_ANIM_PTR(gAxSharedAnim_02290),
	AX_ANIM_PTR(gAxSharedAnim_02297),
	AX_ANIM_PTR(gAxSharedAnim_02303),
};

static const ax_anim *const sSkarmoryAnimTable8[] = {
	AX_ANIM_PTR(sSkarmoryAnims_8_1),
	AX_ANIM_PTR(sSkarmoryAnims_8_2),
	AX_ANIM_PTR(sSkarmoryAnims_8_3),
	AX_ANIM_PTR(sSkarmoryAnims_8_4),
	AX_ANIM_PTR(sSkarmoryAnims_8_5),
	AX_ANIM_PTR(sSkarmoryAnims_8_6),
	AX_ANIM_PTR(sSkarmoryAnims_8_7),
	AX_ANIM_PTR(sSkarmoryAnims_8_8),
};

static const ax_anim *const sSkarmoryAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00334),
	AX_ANIM_PTR(sSkarmoryAnims_9_2),
	AX_ANIM_PTR(sSkarmoryAnims_9_3),
	AX_ANIM_PTR(sSkarmoryAnims_9_4),
	AX_ANIM_PTR(sSkarmoryAnims_9_5),
	AX_ANIM_PTR(sSkarmoryAnims_9_6),
	AX_ANIM_PTR(sSkarmoryAnims_9_7),
	AX_ANIM_PTR(sSkarmoryAnims_9_8),
};

static const ax_anim *const sSkarmoryAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00400),
	AX_ANIM_PTR(gAxSharedAnim_00408),
	AX_ANIM_PTR(gAxSharedAnim_00417),
	AX_ANIM_PTR(gAxSharedAnim_00426),
	AX_ANIM_PTR(gAxSharedAnim_00432),
	AX_ANIM_PTR(gAxSharedAnim_00439),
	AX_ANIM_PTR(gAxSharedAnim_00447),
	AX_ANIM_PTR(gAxSharedAnim_00458),
};

static const ax_anim *const sSkarmoryAnimTable11[] = {
	AX_ANIM_PTR(sSkarmoryAnims_11_1),
	AX_ANIM_PTR(sSkarmoryAnims_11_2),
	AX_ANIM_PTR(sSkarmoryAnims_11_3),
	AX_ANIM_PTR(sSkarmoryAnims_11_4),
	AX_ANIM_PTR(sSkarmoryAnims_11_5),
	AX_ANIM_PTR(sSkarmoryAnims_11_6),
	AX_ANIM_PTR(sSkarmoryAnims_11_7),
	AX_ANIM_PTR(sSkarmoryAnims_11_8),
};

static const ax_anim *const sSkarmoryAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00707),
	AX_ANIM_PTR(gAxSharedAnim_00784),
	AX_ANIM_PTR(gAxSharedAnim_00765),
	AX_ANIM_PTR(gAxSharedAnim_00755),
	AX_ANIM_PTR(gAxSharedAnim_00754),
	AX_ANIM_PTR(gAxSharedAnim_00740),
	AX_ANIM_PTR(gAxSharedAnim_00719),
	AX_ANIM_PTR(gAxSharedAnim_00708),
};

static const ax_anim *const sSkarmoryAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_00803),
	AX_ANIM_PTR(gAxSharedAnim_00888),
	AX_ANIM_PTR(gAxSharedAnim_00881),
	AX_ANIM_PTR(gAxSharedAnim_00864),
	AX_ANIM_PTR(gAxSharedAnim_00851),
	AX_ANIM_PTR(gAxSharedAnim_00841),
	AX_ANIM_PTR(gAxSharedAnim_00830),
	AX_ANIM_PTR(gAxSharedAnim_00816),
};

static const ax_anim *const sSkarmoryAnimTable14[] = {
	AX_ANIM_PTR(sSkarmoryAnims_14_1),
	AX_ANIM_PTR(sSkarmoryAnims_14_1),
	AX_ANIM_PTR(sSkarmoryAnims_14_1),
	AX_ANIM_PTR(sSkarmoryAnims_14_1),
	AX_ANIM_PTR(sSkarmoryAnims_14_1),
	AX_ANIM_PTR(sSkarmoryAnims_14_1),
	AX_ANIM_PTR(sSkarmoryAnims_14_1),
	AX_ANIM_PTR(sSkarmoryAnims_14_1),
};

static const ax_anim *const sSkarmoryAnimTable15[] = {
	AX_ANIM_PTR(sSkarmoryAnims_15_1),
	AX_ANIM_PTR(sSkarmoryAnims_15_1),
	AX_ANIM_PTR(sSkarmoryAnims_15_1),
	AX_ANIM_PTR(sSkarmoryAnims_15_1),
	AX_ANIM_PTR(sSkarmoryAnims_15_1),
	AX_ANIM_PTR(sSkarmoryAnims_15_1),
	AX_ANIM_PTR(sSkarmoryAnims_15_1),
	AX_ANIM_PTR(sSkarmoryAnims_15_1),
};

static const ax_anim *const sSkarmoryAnimTable16[] = {
	AX_ANIM_PTR(sSkarmoryAnims_16_1),
	AX_ANIM_PTR(sSkarmoryAnims_16_1),
	AX_ANIM_PTR(sSkarmoryAnims_16_1),
	AX_ANIM_PTR(sSkarmoryAnims_16_1),
	AX_ANIM_PTR(sSkarmoryAnims_16_1),
	AX_ANIM_PTR(sSkarmoryAnims_16_1),
	AX_ANIM_PTR(sSkarmoryAnims_16_1),
	AX_ANIM_PTR(sSkarmoryAnims_16_1),
};

static const ax_anim *const *const sAxAnimationsSkarmory[] = {
	sSkarmoryAnimTable1,
	sSkarmoryAnimTable2,
	sSkarmoryAnimTable3,
	sSkarmoryAnimTable4,
	sSkarmoryAnimTable5,
	sSkarmoryAnimTable6,
	sSkarmoryAnimTable7,
	sSkarmoryAnimTable8,
	sSkarmoryAnimTable9,
	sSkarmoryAnimTable10,
	sSkarmoryAnimTable11,
	sSkarmoryAnimTable12,
	sSkarmoryAnimTable13,
	sSkarmoryAnimTable14,
	sSkarmoryAnimTable15,
	sSkarmoryAnimTable16,
};

static const ax_sprite *const sAxSpritesSkarmory[] = {
	sSkarmorySprites1,
	sSkarmorySprites2,
	sSkarmorySprites3,
	sSkarmorySprites4,
	sSkarmorySprites5,
	sSkarmorySprites6,
	sSkarmorySprites7,
	sSkarmorySprites8,
	sSkarmorySprites9,
	sSkarmorySprites10,
	sSkarmorySprites11,
	sSkarmorySprites12,
	sSkarmorySprites13,
	sSkarmorySprites14,
	sSkarmorySprites15,
	sSkarmorySprites16,
	sSkarmorySprites17,
	sSkarmorySprites18,
	sSkarmorySprites19,
	sSkarmorySprites20,
	sSkarmorySprites21,
	sSkarmorySprites22,
	sSkarmorySprites23,
	sSkarmorySprites24,
	sSkarmorySprites25,
	sSkarmorySprites26,
	sSkarmorySprites27,
	sSkarmorySprites28,
	sSkarmorySprites29,
	sSkarmorySprites30,
	sSkarmorySprites31,
	sSkarmorySprites32,
	sSkarmorySprites33,
	sSkarmorySprites34,
	sSkarmorySprites35,
	sSkarmorySprites36,
	sSkarmorySprites37,
	sSkarmorySprites38,
	sSkarmorySprites39,
	sSkarmorySprites40,
	sSkarmorySprites41,
	sSkarmorySprites42,
	sSkarmorySprites43,
	sSkarmorySprites44,
	sSkarmorySprites45,
	sSkarmorySprites46,
	sSkarmorySprites47,
	sSkarmorySprites48,
	sSkarmorySprites49,
	sSkarmorySprites50,
	sSkarmorySprites51,
	sSkarmorySprites52,
	sSkarmorySprites53,
	sSkarmorySprites54,
	sSkarmorySprites55,
	sSkarmorySprites56,
	sSkarmorySprites57,
	sSkarmorySprites58,
	sSkarmorySprites59,
	sSkarmorySprites60,
	sSkarmorySprites61,
	sSkarmorySprites62,
	sSkarmorySprites63,
	sSkarmorySprites64,
	sSkarmorySprites65,
	sSkarmorySprites66,
	sSkarmorySprites67,
	sSkarmorySprites68,
	sSkarmorySprites69,
	sSkarmorySprites70,
	sSkarmorySprites71,
	sSkarmorySprites72,
	sSkarmorySprites73,
	sSkarmorySprites74,
	sSkarmorySprites75,
	sSkarmorySprites76,
	sSkarmorySprites77,
	sSkarmorySprites78,
	sSkarmorySprites79,
	sSkarmorySprites80,
	sSkarmorySprites81,
	sSkarmorySprites82,
	sSkarmorySprites83,
	sSkarmorySprites84,
};

static const axmain sAxMainSkarmory = {
	.poses = sAxPosesSkarmory,
	.animations = sAxAnimationsSkarmory,
	.animCount = ARRAY_COUNT(sAxAnimationsSkarmory),
	.spriteData = sAxSpritesSkarmory,
	.positions = sAxPositionsSkarmory,
};
