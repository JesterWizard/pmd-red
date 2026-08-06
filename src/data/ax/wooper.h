/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainWooper;
const SiroArchive gAxWooper = {"SIRO", &sAxMainWooper};

static const ax_pose sWooperPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose5[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose6[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose8[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose9[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose12[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose16[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose17[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose18[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose19[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose20[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose21[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose22[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose23[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose24[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose28[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose32[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose36[] = {
	AX_POSE(26, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose40[] = {
	AX_POSE(27, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose44[] = {
	AX_POSE(28, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose48[] = {
	AX_POSE(27, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose52[] = {
	AX_POSE(26, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose56[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose91[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose94[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose97[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose100[] = {
	AX_POSE(32, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose103[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose106[] = {
	AX_POSE(32, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose109[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose112[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose124[] = {
	AX_POSE(32, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose130[] = {
	AX_POSE(32, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose137[] = {
	AX_POSE(34, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose138[] = {
	AX_POSE(35, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose139[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose140[] = {
	AX_POSE(37, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose141[] = {
	AX_POSE(38, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose142[] = {
	AX_POSE(39, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose143[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose144[] = {
	AX_POSE(39, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose145[] = {
	AX_POSE(38, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose146[] = {
	AX_POSE(37, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose148[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose150[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose151[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose152[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose154[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose155[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose158[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose161[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose163[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose166[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose167[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose169[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose173[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose177[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose178[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose190[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose192[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose193[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose194[] = {
	AX_POSE(26, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose195[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose196[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose198[] = {
	AX_POSE(32, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose206[] = {
	AX_POSE(26, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose207[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose210[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose214[] = {
	AX_POSE(27, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWooperPose216[] = {
	AX_POSE(27, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_anim sWooperAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {1, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {-1, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {-1, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {-1, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {1, -2}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {-1, -1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {-1, -2}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {-1, -1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {-1, -2}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {1, -1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {1, -2}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {1, -1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {-1, -1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {-1, -2}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {-1, -1}, .shadow = {-1, 1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {1, -2}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {1, -1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {1, -2}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {1, -1}, .shadow = {1, 1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {-1, -2}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 28, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 29, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {11, 10}, .shadow = {11, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {23, 20}, .shadow = {23, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {24, 19}, .shadow = {24, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {23, 20}, .shadow = {23, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {24, 19}, .shadow = {24, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 32, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 33, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {24, 0}, .shadow = {24, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {24, 1}, .shadow = {24, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {24, 0}, .shadow = {24, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {24, 1}, .shadow = {24, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 36, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {22, -23}, .shadow = {22, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {23, -22}, .shadow = {23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {22, -23}, .shadow = {22, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {23, -22}, .shadow = {23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 40, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 41, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -23}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {1, -23}, .shadow = {1, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -23}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {1, -23}, .shadow = {1, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 44, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 45, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-22, -23}, .shadow = {-22, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-23, -22}, .shadow = {-23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-22, -23}, .shadow = {-22, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-23, -22}, .shadow = {-23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 48, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 49, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-24, 0}, .shadow = {-24, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {-24, 1}, .shadow = {-24, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-24, 0}, .shadow = {-24, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-24, 1}, .shadow = {-24, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 52, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 53, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {-11, 10}, .shadow = {-11, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-23, 20}, .shadow = {-23, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {-24, 19}, .shadow = {-24, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-23, 20}, .shadow = {-23, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-24, 19}, .shadow = {-24, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 60, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 61, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {11, 10}, .shadow = {11, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {23, 20}, .shadow = {23, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {24, 19}, .shadow = {24, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {23, 20}, .shadow = {23, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {24, 19}, .shadow = {24, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 64, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 65, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {24, 0}, .shadow = {24, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {24, 1}, .shadow = {24, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {24, 0}, .shadow = {24, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {24, 1}, .shadow = {24, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 68, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 69, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {22, -23}, .shadow = {22, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {23, -22}, .shadow = {23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {22, -23}, .shadow = {22, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {23, -22}, .shadow = {23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 72, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 73, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 74, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -23}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {1, -23}, .shadow = {1, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -23}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, -23}, .shadow = {1, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 76, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 78, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 77, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 78, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-22, -23}, .shadow = {-22, -23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {-23, -22}, .shadow = {-23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-22, -23}, .shadow = {-22, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-23, -22}, .shadow = {-23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 80, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 81, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-24, 0}, .shadow = {-24, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {-24, 1}, .shadow = {-24, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-24, 0}, .shadow = {-24, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-24, 1}, .shadow = {-24, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 84, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 85, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {-11, 10}, .shadow = {-11, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-23, 20}, .shadow = {-23, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {-24, 19}, .shadow = {-24, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-23, 20}, .shadow = {-23, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-24, 19}, .shadow = {-24, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 89, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 90, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 1}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 92, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 93, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 95, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 96, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 98, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 101, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 102, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 104, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 105, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 107, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 108, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 110, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 113, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 116, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 119, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 122, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 125, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 128, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 131, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 134, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 1, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_8_1[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_8_2[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_8_3[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_8_4[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_8_5[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_8_6[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_8_7[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_8_8[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {10, 1}, .shadow = {10, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {19, 5}, .shadow = {19, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {23, 13}, .shadow = {23, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {15, 21}, .shadow = {15, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {6, 18}, .shadow = {6, 18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {1, 9}, .shadow = {1, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {12, -6}, .shadow = {12, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {21, -2}, .shadow = {21, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 173, .offset = {18, 4}, .shadow = {18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {13, 5}, .shadow = {13, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {11, -23}, .shadow = {11, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {21, -23}, .shadow = {21, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 172, .offset = {22, -15}, .shadow = {22, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-7, -19}, .shadow = {-7, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -24}, .shadow = {0, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 171, .offset = {7, -19}, .shadow = {7, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {9, -12}, .shadow = {9, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-11, -23}, .shadow = {-11, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {-21, -23}, .shadow = {-21, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 176, .offset = {-22, -15}, .shadow = {-22, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-12, -6}, .shadow = {-12, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {-21, -2}, .shadow = {-21, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-18, 4}, .shadow = {-18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {-13, 5}, .shadow = {-13, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWooperAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {-10, 1}, .shadow = {-10, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-19, 5}, .shadow = {-19, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-23, 13}, .shadow = {-23, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {-21, 20}, .shadow = {-21, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {-15, 21}, .shadow = {-15, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {-6, 18}, .shadow = {-6, 18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {-1, 9}, .shadow = {-1, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sWooperGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_1.4bpp.lz");
static const ax_sprite sWooperSprites1[] = {
	{sWooperGfx1, ARRAY_COUNT(sWooperGfx1)}, 
	{NULL, 0}
};
static const u8 sWooperGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_2.4bpp.lz");
static const ax_sprite sWooperSprites2[] = {
	{sWooperGfx2, ARRAY_COUNT(sWooperGfx2)}, 
	{NULL, 0}
};
static const u8 sWooperGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_3.4bpp.lz");
static const ax_sprite sWooperSprites3[] = {
	{sWooperGfx3, ARRAY_COUNT(sWooperGfx3)}, 
	{NULL, 0}
};
static const u8 sWooperGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_4.4bpp.lz");
static const ax_sprite sWooperSprites4[] = {
	{sWooperGfx4, ARRAY_COUNT(sWooperGfx4)}, 
	{NULL, 0}
};
static const u8 sWooperGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_5.4bpp.lz");
static const ax_sprite sWooperSprites5[] = {
	{sWooperGfx5, ARRAY_COUNT(sWooperGfx5)}, 
	{NULL, 0}
};
static const u8 sWooperGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_6.4bpp.lz");
static const ax_sprite sWooperSprites6[] = {
	{sWooperGfx6, ARRAY_COUNT(sWooperGfx6)}, 
	{NULL, 0}
};
static const u8 sWooperGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_7.4bpp.lz");
static const ax_sprite sWooperSprites7[] = {
	{sWooperGfx7, ARRAY_COUNT(sWooperGfx7)}, 
	{NULL, 0}
};
static const u8 sWooperGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_8.4bpp.lz");
static const ax_sprite sWooperSprites8[] = {
	{sWooperGfx8, ARRAY_COUNT(sWooperGfx8)}, 
	{NULL, 0}
};
static const u8 sWooperGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_9.4bpp.lz");
static const ax_sprite sWooperSprites9[] = {
	{sWooperGfx9, ARRAY_COUNT(sWooperGfx9)}, 
	{NULL, 0}
};
static const u8 sWooperGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_10.4bpp.lz");
static const ax_sprite sWooperSprites10[] = {
	{sWooperGfx10, ARRAY_COUNT(sWooperGfx10)}, 
	{NULL, 0}
};
static const u8 sWooperGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_11.4bpp.lz");
static const ax_sprite sWooperSprites11[] = {
	{sWooperGfx11, ARRAY_COUNT(sWooperGfx11)}, 
	{NULL, 0}
};
static const u8 sWooperGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_12.4bpp.lz");
static const ax_sprite sWooperSprites12[] = {
	{sWooperGfx12, ARRAY_COUNT(sWooperGfx12)}, 
	{NULL, 0}
};
static const u8 sWooperGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_13.4bpp.lz");
static const ax_sprite sWooperSprites13[] = {
	{sWooperGfx13, ARRAY_COUNT(sWooperGfx13)}, 
	{NULL, 0}
};
static const u8 sWooperGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_14.4bpp.lz");
static const ax_sprite sWooperSprites14[] = {
	{sWooperGfx14, ARRAY_COUNT(sWooperGfx14)}, 
	{NULL, 0}
};
static const u8 sWooperGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_15.4bpp.lz");
static const ax_sprite sWooperSprites15[] = {
	{sWooperGfx15, ARRAY_COUNT(sWooperGfx15)}, 
	{NULL, 0}
};
static const u8 sWooperGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_16.4bpp.lz");
static const ax_sprite sWooperSprites16[] = {
	{sWooperGfx16, ARRAY_COUNT(sWooperGfx16)}, 
	{NULL, 0}
};
static const u8 sWooperGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_17.4bpp.lz");
static const ax_sprite sWooperSprites17[] = {
	{sWooperGfx17, ARRAY_COUNT(sWooperGfx17)}, 
	{NULL, 0}
};
static const u8 sWooperGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_18.4bpp.lz");
static const ax_sprite sWooperSprites18[] = {
	{sWooperGfx18, ARRAY_COUNT(sWooperGfx18)}, 
	{NULL, 0}
};
static const u8 sWooperGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_19.4bpp.lz");
static const ax_sprite sWooperSprites19[] = {
	{sWooperGfx19, ARRAY_COUNT(sWooperGfx19)}, 
	{NULL, 0}
};
static const u8 sWooperGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_20.4bpp.lz");
static const ax_sprite sWooperSprites20[] = {
	{sWooperGfx20, ARRAY_COUNT(sWooperGfx20)}, 
	{NULL, 0}
};
static const u8 sWooperGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_21.4bpp.lz");
static const ax_sprite sWooperSprites21[] = {
	{sWooperGfx21, ARRAY_COUNT(sWooperGfx21)}, 
	{NULL, 0}
};
static const u8 sWooperGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_22.4bpp.lz");
static const ax_sprite sWooperSprites22[] = {
	{sWooperGfx22, ARRAY_COUNT(sWooperGfx22)}, 
	{NULL, 0}
};
static const u8 sWooperGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_23.4bpp.lz");
static const ax_sprite sWooperSprites23[] = {
	{sWooperGfx23, ARRAY_COUNT(sWooperGfx23)}, 
	{NULL, 0}
};
static const u8 sWooperGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_24.4bpp.lz");
static const ax_sprite sWooperSprites24[] = {
	{sWooperGfx24, ARRAY_COUNT(sWooperGfx24)}, 
	{NULL, 0}
};
static const u8 sWooperGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_25.4bpp.lz");
static const u8 sWooperGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_25_1.4bpp.lz");
static const u8 sWooperGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_25_2.4bpp.lz");
static const ax_sprite sWooperSprites25[] = {
	{sWooperGfx25, ARRAY_COUNT(sWooperGfx25)}, 
	{NULL, 32}, 
	{sWooperGfx25_1, ARRAY_COUNT(sWooperGfx25_1)}, 
	{NULL, 64}, 
	{sWooperGfx25_2, ARRAY_COUNT(sWooperGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sWooperGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_26.4bpp.lz");
static const u8 sWooperGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_26_1.4bpp.lz");
static const u8 sWooperGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_26_2.4bpp.lz");
static const ax_sprite sWooperSprites26[] = {
	{sWooperGfx26, ARRAY_COUNT(sWooperGfx26)}, 
	{NULL, 32}, 
	{sWooperGfx26_1, ARRAY_COUNT(sWooperGfx26_1)}, 
	{NULL, 64}, 
	{sWooperGfx26_2, ARRAY_COUNT(sWooperGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sWooperGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_27.4bpp.lz");
static const ax_sprite sWooperSprites27[] = {
	{sWooperGfx27, ARRAY_COUNT(sWooperGfx27)}, 
	{NULL, 0}
};
static const u8 sWooperGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_28.4bpp.lz");
static const ax_sprite sWooperSprites28[] = {
	{sWooperGfx28, ARRAY_COUNT(sWooperGfx28)}, 
	{NULL, 0}
};
static const u8 sWooperGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_29.4bpp.lz");
static const u8 sWooperGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_29_1.4bpp.lz");
static const u8 sWooperGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_29_2.4bpp.lz");
static const u8 sWooperGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_29_3.4bpp.lz");
static const ax_sprite sWooperSprites29[] = {
	{NULL, 32}, 
	{sWooperGfx29, ARRAY_COUNT(sWooperGfx29)}, 
	{NULL, 32}, 
	{sWooperGfx29_1, ARRAY_COUNT(sWooperGfx29_1)}, 
	{NULL, 32}, 
	{sWooperGfx29_2, ARRAY_COUNT(sWooperGfx29_2)}, 
	{NULL, 64}, 
	{sWooperGfx29_3, ARRAY_COUNT(sWooperGfx29_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWooperGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_30.4bpp.lz");
static const u8 sWooperGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_30_1.4bpp.lz");
static const u8 sWooperGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_30_2.4bpp.lz");
static const ax_sprite sWooperSprites30[] = {
	{NULL, 32}, 
	{sWooperGfx30, ARRAY_COUNT(sWooperGfx30)}, 
	{NULL, 64}, 
	{sWooperGfx30_1, ARRAY_COUNT(sWooperGfx30_1)}, 
	{NULL, 32}, 
	{sWooperGfx30_2, ARRAY_COUNT(sWooperGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sWooperGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_31.4bpp.lz");
static const u8 sWooperGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_31_1.4bpp.lz");
static const u8 sWooperGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_31_2.4bpp.lz");
static const ax_sprite sWooperSprites31[] = {
	{sWooperGfx31, ARRAY_COUNT(sWooperGfx31)}, 
	{NULL, 64}, 
	{sWooperGfx31_1, ARRAY_COUNT(sWooperGfx31_1)}, 
	{NULL, 32}, 
	{sWooperGfx31_2, ARRAY_COUNT(sWooperGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sWooperGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_32.4bpp.lz");
static const u8 sWooperGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_32_1.4bpp.lz");
static const u8 sWooperGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_32_2.4bpp.lz");
static const ax_sprite sWooperSprites32[] = {
	{sWooperGfx32, ARRAY_COUNT(sWooperGfx32)}, 
	{NULL, 64}, 
	{sWooperGfx32_1, ARRAY_COUNT(sWooperGfx32_1)}, 
	{NULL, 32}, 
	{sWooperGfx32_2, ARRAY_COUNT(sWooperGfx32_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sWooperGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_33.4bpp.lz");
static const ax_sprite sWooperSprites33[] = {
	{sWooperGfx33, ARRAY_COUNT(sWooperGfx33)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWooperGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_34.4bpp.lz");
static const u8 sWooperGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_34_1.4bpp.lz");
static const u8 sWooperGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_34_2.4bpp.lz");
static const ax_sprite sWooperSprites34[] = {
	{NULL, 32}, 
	{sWooperGfx34, ARRAY_COUNT(sWooperGfx34)}, 
	{NULL, 32}, 
	{sWooperGfx34_1, ARRAY_COUNT(sWooperGfx34_1)}, 
	{NULL, 32}, 
	{sWooperGfx34_2, ARRAY_COUNT(sWooperGfx34_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sWooperGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_35.4bpp.lz");
static const ax_sprite sWooperSprites35[] = {
	{sWooperGfx35, ARRAY_COUNT(sWooperGfx35)}, 
	{NULL, 0}
};
static const u8 sWooperGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_36.4bpp.lz");
static const ax_sprite sWooperSprites36[] = {
	{sWooperGfx36, ARRAY_COUNT(sWooperGfx36)}, 
	{NULL, 0}
};
static const u8 sWooperGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_37.4bpp.lz");
static const ax_sprite sWooperSprites37[] = {
	{sWooperGfx37, ARRAY_COUNT(sWooperGfx37)}, 
	{NULL, 0}
};
static const u8 sWooperGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_38.4bpp.lz");
static const ax_sprite sWooperSprites38[] = {
	{sWooperGfx38, ARRAY_COUNT(sWooperGfx38)}, 
	{NULL, 0}
};
static const u8 sWooperGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_39.4bpp.lz");
static const ax_sprite sWooperSprites39[] = {
	{sWooperGfx39, ARRAY_COUNT(sWooperGfx39)}, 
	{NULL, 0}
};
static const u8 sWooperGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_40.4bpp.lz");
static const ax_sprite sWooperSprites40[] = {
	{sWooperGfx40, ARRAY_COUNT(sWooperGfx40)}, 
	{NULL, 0}
};
static const u8 sWooperGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wooper/sprite_41.4bpp.lz");
static const ax_sprite sWooperSprites41[] = {
	{sWooperGfx41, ARRAY_COUNT(sWooperGfx41)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesWooper[] = {
	sWooperPose1,
	sWooperPose2,
	sWooperPose3,
	sWooperPose4,
	sWooperPose5,
	sWooperPose6,
	sWooperPose7,
	sWooperPose8,
	sWooperPose9,
	sWooperPose10,
	sWooperPose11,
	sWooperPose12,
	sWooperPose13,
	sWooperPose14,
	sWooperPose15,
	sWooperPose16,
	sWooperPose17,
	sWooperPose18,
	sWooperPose19,
	sWooperPose20,
	sWooperPose21,
	sWooperPose22,
	sWooperPose23,
	sWooperPose24,
	sWooperPose1,
	sWooperPose2,
	sWooperPose3,
	sWooperPose28,
	sWooperPose4,
	sWooperPose5,
	sWooperPose6,
	sWooperPose32,
	sWooperPose7,
	sWooperPose8,
	sWooperPose9,
	sWooperPose36,
	sWooperPose10,
	sWooperPose11,
	sWooperPose12,
	sWooperPose40,
	sWooperPose13,
	sWooperPose14,
	sWooperPose15,
	sWooperPose44,
	sWooperPose16,
	sWooperPose17,
	sWooperPose18,
	sWooperPose48,
	sWooperPose19,
	sWooperPose20,
	sWooperPose21,
	sWooperPose52,
	sWooperPose22,
	sWooperPose23,
	sWooperPose24,
	sWooperPose56,
	sWooperPose1,
	sWooperPose2,
	sWooperPose3,
	sWooperPose28,
	sWooperPose4,
	sWooperPose5,
	sWooperPose6,
	sWooperPose32,
	sWooperPose7,
	sWooperPose8,
	sWooperPose9,
	sWooperPose36,
	sWooperPose10,
	sWooperPose11,
	sWooperPose12,
	sWooperPose40,
	sWooperPose13,
	sWooperPose14,
	sWooperPose15,
	sWooperPose44,
	sWooperPose16,
	sWooperPose17,
	sWooperPose18,
	sWooperPose48,
	sWooperPose19,
	sWooperPose20,
	sWooperPose21,
	sWooperPose52,
	sWooperPose22,
	sWooperPose23,
	sWooperPose24,
	sWooperPose56,
	sWooperPose1,
	sWooperPose28,
	sWooperPose91,
	sWooperPose4,
	sWooperPose32,
	sWooperPose94,
	sWooperPose7,
	sWooperPose36,
	sWooperPose97,
	sWooperPose10,
	sWooperPose40,
	sWooperPose100,
	sWooperPose13,
	sWooperPose44,
	sWooperPose103,
	sWooperPose16,
	sWooperPose48,
	sWooperPose106,
	sWooperPose19,
	sWooperPose52,
	sWooperPose109,
	sWooperPose22,
	sWooperPose56,
	sWooperPose112,
	sWooperPose1,
	sWooperPose28,
	sWooperPose91,
	sWooperPose4,
	sWooperPose32,
	sWooperPose94,
	sWooperPose7,
	sWooperPose36,
	sWooperPose97,
	sWooperPose10,
	sWooperPose40,
	sWooperPose124,
	sWooperPose13,
	sWooperPose44,
	sWooperPose103,
	sWooperPose16,
	sWooperPose48,
	sWooperPose130,
	sWooperPose19,
	sWooperPose52,
	sWooperPose109,
	sWooperPose22,
	sWooperPose56,
	sWooperPose112,
	sWooperPose137,
	sWooperPose138,
	sWooperPose139,
	sWooperPose140,
	sWooperPose141,
	sWooperPose142,
	sWooperPose143,
	sWooperPose144,
	sWooperPose145,
	sWooperPose146,
	sWooperPose1,
	sWooperPose148,
	sWooperPose3,
	sWooperPose150,
	sWooperPose151,
	sWooperPose152,
	sWooperPose7,
	sWooperPose154,
	sWooperPose155,
	sWooperPose10,
	sWooperPose11,
	sWooperPose158,
	sWooperPose13,
	sWooperPose14,
	sWooperPose161,
	sWooperPose16,
	sWooperPose163,
	sWooperPose18,
	sWooperPose19,
	sWooperPose166,
	sWooperPose167,
	sWooperPose22,
	sWooperPose169,
	sWooperPose24,
	sWooperPose91,
	sWooperPose112,
	sWooperPose173,
	sWooperPose130,
	sWooperPose103,
	sWooperPose124,
	sWooperPose177,
	sWooperPose178,
	sWooperPose91,
	sWooperPose178,
	sWooperPose177,
	sWooperPose124,
	sWooperPose103,
	sWooperPose130,
	sWooperPose173,
	sWooperPose112,
	sWooperPose1,
	sWooperPose28,
	sWooperPose91,
	sWooperPose190,
	sWooperPose32,
	sWooperPose192,
	sWooperPose193,
	sWooperPose194,
	sWooperPose195,
	sWooperPose196,
	sWooperPose40,
	sWooperPose198,
	sWooperPose13,
	sWooperPose44,
	sWooperPose103,
	sWooperPose16,
	sWooperPose48,
	sWooperPose106,
	sWooperPose19,
	sWooperPose206,
	sWooperPose207,
	sWooperPose22,
	sWooperPose56,
	sWooperPose210,
	sWooperPose28,
	sWooperPose56,
	sWooperPose206,
	sWooperPose214,
	sWooperPose44,
	sWooperPose216,
	sWooperPose36,
	sWooperPose32,
	sWooperPose1,
	sWooperPose22,
	sWooperPose19,
	sWooperPose16,
	sWooperPose13,
	sWooperPose10,
	sWooperPose7,
	sWooperPose4,
};

static const struct PositionSets sAxPositionsWooper[] = {
	[0] = { .set = { {0, -8}, {-9, -10}, {8, -11}, {0, -6} } },
	[1] = { .set = { {0, -9}, {-9, -14}, {7, -10}, {0, -7} } },
	[2] = { .set = { {0, -9}, {-8, -10}, {8, -14}, {1, -7} } },
	[3] = { .set = { {3, -8}, {-6, -9}, {6, -12}, {0, -6} } },
	[4] = { .set = { {2, -10}, {-6, -12}, {7, -12}, {0, -8} } },
	[5] = { .set = { {2, -10}, {-7, -10}, {5, -15}, {0, -8} } },
	[6] = { .set = { {5, -9}, {-3, -6}, {0, -11}, {0, -5} } },
	[7] = { .set = { {6, -13}, {-2, -12}, {1, -13}, {0, -8} } },
	[8] = { .set = { {5, -10}, {-3, -8}, {1, -15}, {0, -8} } },
	[9] = { .set = { {2, -10}, {5, -8}, {-6, -13}, {0, -6} } },
	[10] = { .set = { {1, -12}, {4, -12}, {-7, -14}, {0, -7} } },
	[11] = { .set = { {2, -12}, {5, -8}, {-5, -16}, {1, -8} } },
	[12] = { .set = { {0, -10}, {8, -10}, {-8, -10}, {0, -6} } },
	[13] = { .set = { {-1, -13}, {7, -14}, {-9, -11}, {-1, -8} } },
	[14] = { .set = { {1, -13}, {9, -11}, {-7, -14}, {1, -8} } },
	[15] = { .set = { {-3, -10}, {7, -14}, {-4, -8}, {1, -6} } },
	[16] = { .set = { {-3, -10}, {5, -16}, {-5, -8}, {0, -8} } },
	[17] = { .set = { {-1, -11}, {8, -14}, {-4, -12}, {1, -8} } },
	[18] = { .set = { {-6, -9}, {-1, -12}, {3, -7}, {0, -6} } },
	[19] = { .set = { {-5, -10}, {1, -14}, {3, -8}, {0, -8} } },
	[20] = { .set = { {-6, -13}, {-1, -13}, {3, -12}, {0, -8} } },
	[21] = { .set = { {-3, -8}, {-7, -13}, {6, -9}, {0, -6} } },
	[22] = { .set = { {-2, -10}, {-5, -15}, {7, -10}, {1, -8} } },
	[23] = { .set = { {-2, -10}, {-7, -11}, {6, -12}, {0, -8} } },
	[24] = { .set = { {0, -8}, {-9, -10}, {8, -11}, {0, -6} } },
	[25] = { .set = { {0, -9}, {-9, -14}, {7, -10}, {0, -7} } },
	[26] = { .set = { {0, -9}, {-8, -10}, {8, -14}, {1, -7} } },
	[27] = { .set = { {0, -10}, {-8, -12}, {8, -12}, {0, -7} } },
	[28] = { .set = { {3, -8}, {-6, -9}, {6, -12}, {0, -6} } },
	[29] = { .set = { {2, -10}, {-6, -12}, {7, -12}, {0, -8} } },
	[30] = { .set = { {2, -10}, {-7, -10}, {5, -15}, {0, -8} } },
	[31] = { .set = { {2, -10}, {5, -13}, {-7, -10}, {0, -7} } },
	[32] = { .set = { {5, -9}, {-3, -6}, {0, -11}, {0, -5} } },
	[33] = { .set = { {6, -13}, {-2, -12}, {1, -13}, {0, -8} } },
	[34] = { .set = { {5, -10}, {-3, -8}, {1, -15}, {0, -8} } },
	[35] = { .set = { {3, -11}, {-4, -12}, {-6, -8}, {-2, -7} } },
	[36] = { .set = { {2, -10}, {5, -8}, {-6, -13}, {0, -6} } },
	[37] = { .set = { {1, -12}, {4, -12}, {-7, -14}, {0, -7} } },
	[38] = { .set = { {2, -12}, {5, -8}, {-5, -16}, {1, -8} } },
	[39] = { .set = { {1, -10}, {-7, -12}, {3, -7}, {-1, -4} } },
	[40] = { .set = { {0, -10}, {8, -10}, {-8, -10}, {0, -6} } },
	[41] = { .set = { {-1, -13}, {7, -14}, {-9, -11}, {-1, -8} } },
	[42] = { .set = { {1, -13}, {9, -11}, {-7, -14}, {1, -8} } },
	[43] = { .set = { {0, -10}, {8, -11}, {-8, -11}, {0, -5} } },
	[44] = { .set = { {-3, -10}, {7, -14}, {-4, -8}, {1, -6} } },
	[45] = { .set = { {-3, -10}, {5, -16}, {-5, -8}, {0, -8} } },
	[46] = { .set = { {-1, -11}, {8, -14}, {-4, -12}, {1, -8} } },
	[47] = { .set = { {-1, -10}, {7, -12}, {-3, -7}, {1, -4} } },
	[48] = { .set = { {-6, -9}, {-1, -12}, {3, -7}, {0, -6} } },
	[49] = { .set = { {-5, -10}, {1, -14}, {3, -8}, {0, -8} } },
	[50] = { .set = { {-6, -13}, {-1, -13}, {3, -12}, {0, -8} } },
	[51] = { .set = { {-3, -11}, {4, -12}, {6, -8}, {2, -7} } },
	[52] = { .set = { {-3, -8}, {-7, -13}, {6, -9}, {0, -6} } },
	[53] = { .set = { {-2, -10}, {-5, -15}, {7, -10}, {1, -8} } },
	[54] = { .set = { {-2, -10}, {-7, -11}, {6, -12}, {0, -8} } },
	[55] = { .set = { {-2, -10}, {-5, -13}, {7, -10}, {0, -7} } },
	[56] = { .set = { {0, -8}, {-9, -10}, {8, -11}, {0, -6} } },
	[57] = { .set = { {0, -9}, {-9, -14}, {7, -10}, {0, -7} } },
	[58] = { .set = { {0, -9}, {-8, -10}, {8, -14}, {1, -7} } },
	[59] = { .set = { {0, -10}, {-8, -12}, {8, -12}, {0, -7} } },
	[60] = { .set = { {3, -8}, {-6, -9}, {6, -12}, {0, -6} } },
	[61] = { .set = { {2, -10}, {-6, -12}, {7, -12}, {0, -8} } },
	[62] = { .set = { {2, -10}, {-7, -10}, {5, -15}, {0, -8} } },
	[63] = { .set = { {2, -10}, {5, -13}, {-7, -10}, {0, -7} } },
	[64] = { .set = { {5, -9}, {-3, -6}, {0, -11}, {0, -5} } },
	[65] = { .set = { {6, -13}, {-2, -12}, {1, -13}, {0, -8} } },
	[66] = { .set = { {5, -10}, {-3, -8}, {1, -15}, {0, -8} } },
	[67] = { .set = { {3, -11}, {-4, -12}, {-6, -8}, {-2, -7} } },
	[68] = { .set = { {2, -10}, {5, -8}, {-6, -13}, {0, -6} } },
	[69] = { .set = { {1, -12}, {4, -12}, {-7, -14}, {0, -7} } },
	[70] = { .set = { {2, -12}, {5, -8}, {-5, -16}, {1, -8} } },
	[71] = { .set = { {1, -10}, {-7, -12}, {3, -7}, {-1, -4} } },
	[72] = { .set = { {0, -10}, {8, -10}, {-8, -10}, {0, -6} } },
	[73] = { .set = { {-1, -13}, {7, -14}, {-9, -11}, {-1, -8} } },
	[74] = { .set = { {1, -13}, {9, -11}, {-7, -14}, {1, -8} } },
	[75] = { .set = { {0, -10}, {8, -11}, {-8, -11}, {0, -5} } },
	[76] = { .set = { {-3, -10}, {7, -14}, {-4, -8}, {1, -6} } },
	[77] = { .set = { {-3, -10}, {5, -16}, {-5, -8}, {0, -8} } },
	[78] = { .set = { {-1, -11}, {8, -14}, {-4, -12}, {1, -8} } },
	[79] = { .set = { {-1, -10}, {7, -12}, {-3, -7}, {1, -4} } },
	[80] = { .set = { {-6, -9}, {-1, -12}, {3, -7}, {0, -6} } },
	[81] = { .set = { {-5, -10}, {1, -14}, {3, -8}, {0, -8} } },
	[82] = { .set = { {-6, -13}, {-1, -13}, {3, -12}, {0, -8} } },
	[83] = { .set = { {-3, -11}, {4, -12}, {6, -8}, {2, -7} } },
	[84] = { .set = { {-3, -8}, {-7, -13}, {6, -9}, {0, -6} } },
	[85] = { .set = { {-2, -10}, {-5, -15}, {7, -10}, {1, -8} } },
	[86] = { .set = { {-2, -10}, {-7, -11}, {6, -12}, {0, -8} } },
	[87] = { .set = { {-2, -10}, {-5, -13}, {7, -10}, {0, -7} } },
	[88] = { .set = { {0, -8}, {-9, -10}, {8, -11}, {0, -6} } },
	[89] = { .set = { {0, -10}, {-8, -12}, {8, -12}, {0, -7} } },
	[90] = { .set = { {0, -6}, {-8, -9}, {8, -9}, {0, -5} } },
	[91] = { .set = { {3, -8}, {-6, -9}, {6, -12}, {0, -6} } },
	[92] = { .set = { {2, -10}, {5, -13}, {-7, -10}, {0, -7} } },
	[93] = { .set = { {5, -8}, {9, -11}, {-3, -8}, {1, -5} } },
	[94] = { .set = { {5, -9}, {-3, -6}, {0, -11}, {0, -5} } },
	[95] = { .set = { {3, -11}, {-4, -12}, {-6, -8}, {-2, -7} } },
	[96] = { .set = { {9, -9}, {2, -12}, {1, -7}, {2, -6} } },
	[97] = { .set = { {2, -10}, {5, -8}, {-6, -13}, {0, -6} } },
	[98] = { .set = { {1, -10}, {-7, -12}, {3, -7}, {-1, -4} } },
	[99] = { .set = { {4, -10}, {-4, -14}, {6, -9}, {1, -7} } },
	[100] = { .set = { {0, -10}, {8, -10}, {-8, -10}, {0, -6} } },
	[101] = { .set = { {0, -10}, {8, -11}, {-8, -11}, {0, -5} } },
	[102] = { .set = { {0, -10}, {9, -10}, {-8, -10}, {-1, -6} } },
	[103] = { .set = { {-3, -10}, {7, -14}, {-4, -8}, {1, -6} } },
	[104] = { .set = { {-1, -10}, {7, -12}, {-3, -7}, {1, -4} } },
	[105] = { .set = { {-4, -10}, {4, -14}, {-6, -9}, {-1, -7} } },
	[106] = { .set = { {-6, -9}, {-1, -12}, {3, -7}, {0, -6} } },
	[107] = { .set = { {-3, -11}, {4, -12}, {6, -8}, {2, -7} } },
	[108] = { .set = { {-9, -9}, {-2, -12}, {-1, -7}, {-2, -6} } },
	[109] = { .set = { {-3, -8}, {-7, -13}, {6, -9}, {0, -6} } },
	[110] = { .set = { {-2, -10}, {-5, -13}, {7, -10}, {0, -7} } },
	[111] = { .set = { {-5, -8}, {-9, -11}, {3, -8}, {-1, -5} } },
	[112] = { .set = { {0, -8}, {-9, -10}, {8, -11}, {0, -6} } },
	[113] = { .set = { {0, -10}, {-8, -12}, {8, -12}, {0, -7} } },
	[114] = { .set = { {0, -6}, {-8, -9}, {8, -9}, {0, -5} } },
	[115] = { .set = { {3, -8}, {-6, -9}, {6, -12}, {0, -6} } },
	[116] = { .set = { {2, -10}, {5, -13}, {-7, -10}, {0, -7} } },
	[117] = { .set = { {5, -8}, {9, -11}, {-3, -8}, {1, -5} } },
	[118] = { .set = { {5, -9}, {-3, -6}, {0, -11}, {0, -5} } },
	[119] = { .set = { {3, -11}, {-4, -12}, {-6, -8}, {-2, -7} } },
	[120] = { .set = { {9, -9}, {2, -12}, {1, -7}, {2, -6} } },
	[121] = { .set = { {2, -10}, {5, -8}, {-6, -13}, {0, -6} } },
	[122] = { .set = { {1, -10}, {-7, -12}, {3, -7}, {-1, -4} } },
	[123] = { .set = { {4, -9}, {-4, -13}, {6, -8}, {1, -6} } },
	[124] = { .set = { {0, -10}, {8, -10}, {-8, -10}, {0, -6} } },
	[125] = { .set = { {0, -10}, {8, -11}, {-8, -11}, {0, -5} } },
	[126] = { .set = { {0, -10}, {9, -10}, {-8, -10}, {-1, -6} } },
	[127] = { .set = { {-3, -10}, {7, -14}, {-4, -8}, {1, -6} } },
	[128] = { .set = { {-1, -10}, {7, -12}, {-3, -7}, {1, -4} } },
	[129] = { .set = { {-4, -9}, {4, -13}, {-6, -8}, {-1, -6} } },
	[130] = { .set = { {-6, -9}, {-1, -12}, {3, -7}, {0, -6} } },
	[131] = { .set = { {-3, -11}, {4, -12}, {6, -8}, {2, -7} } },
	[132] = { .set = { {-9, -9}, {-2, -12}, {-1, -7}, {-2, -6} } },
	[133] = { .set = { {-3, -8}, {-7, -13}, {6, -9}, {0, -6} } },
	[134] = { .set = { {-2, -10}, {-5, -13}, {7, -10}, {0, -7} } },
	[135] = { .set = { {-5, -8}, {-9, -11}, {3, -8}, {-1, -5} } },
	[136] = { .set = { {-1, -6}, {-6, -10}, {7, -9}, {1, -5} } },
	[137] = { .set = { {-1, -4}, {-7, -9}, {6, -8}, {1, -4} } },
	[138] = { .set = { {0, -11}, {-8, -6}, {7, -6}, {0, -6} } },
	[139] = { .set = { {-6, -7}, {1, -6}, {-7, -2}, {-3, -6} } },
	[140] = { .set = { {-6, -11}, {-5, -6}, {-1, -6}, {0, -9} } },
	[141] = { .set = { {-1, -9}, {-8, -6}, {2, -2}, {1, -7} } },
	[142] = { .set = { {0, -7}, {7, -4}, {-8, -4}, {0, -9} } },
	[143] = { .set = { {0, -9}, {7, -6}, {-3, -2}, {-2, -7} } },
	[144] = { .set = { {5, -11}, {4, -6}, {0, -6}, {-1, -9} } },
	[145] = { .set = { {5, -7}, {-2, -6}, {6, -2}, {2, -6} } },
	[146] = { .set = { {0, -8}, {-9, -10}, {8, -11}, {0, -6} } },
	[147] = { .set = { {1, -8}, {-8, -13}, {8, -9}, {1, -6} } },
	[148] = { .set = { {0, -9}, {-8, -10}, {8, -14}, {1, -7} } },
	[149] = { .set = { {2, -8}, {-7, -9}, {5, -12}, {-1, -6} } },
	[150] = { .set = { {4, -10}, {-4, -12}, {9, -12}, {2, -8} } },
	[151] = { .set = { {2, -9}, {-7, -9}, {5, -14}, {0, -7} } },
	[152] = { .set = { {5, -9}, {-3, -6}, {0, -11}, {0, -5} } },
	[153] = { .set = { {7, -13}, {-1, -12}, {2, -13}, {1, -8} } },
	[154] = { .set = { {6, -9}, {-2, -7}, {2, -14}, {1, -7} } },
	[155] = { .set = { {2, -10}, {5, -8}, {-6, -13}, {0, -6} } },
	[156] = { .set = { {1, -12}, {4, -12}, {-7, -14}, {0, -7} } },
	[157] = { .set = { {2, -11}, {5, -7}, {-5, -15}, {1, -7} } },
	[158] = { .set = { {0, -10}, {8, -10}, {-8, -10}, {0, -6} } },
	[159] = { .set = { {-1, -13}, {7, -14}, {-9, -11}, {-1, -8} } },
	[160] = { .set = { {1, -12}, {9, -10}, {-7, -13}, {1, -7} } },
	[161] = { .set = { {-3, -10}, {7, -14}, {-4, -8}, {1, -6} } },
	[162] = { .set = { {-2, -9}, {6, -15}, {-4, -7}, {1, -7} } },
	[163] = { .set = { {-1, -11}, {8, -14}, {-4, -12}, {1, -8} } },
	[164] = { .set = { {-6, -9}, {-1, -12}, {3, -7}, {0, -6} } },
	[165] = { .set = { {-5, -9}, {1, -13}, {3, -7}, {0, -7} } },
	[166] = { .set = { {-6, -12}, {-1, -12}, {3, -11}, {0, -7} } },
	[167] = { .set = { {-3, -8}, {-7, -13}, {6, -9}, {0, -6} } },
	[168] = { .set = { {-3, -9}, {-6, -14}, {6, -9}, {0, -7} } },
	[169] = { .set = { {-2, -10}, {-7, -11}, {6, -12}, {0, -8} } },
	[170] = { .set = { {0, -6}, {-8, -9}, {8, -9}, {0, -5} } },
	[171] = { .set = { {-5, -8}, {-9, -11}, {3, -8}, {-1, -5} } },
	[172] = { .set = { {-8, -9}, {-1, -12}, {0, -7}, {-1, -6} } },
	[173] = { .set = { {-4, -9}, {4, -13}, {-6, -8}, {-1, -6} } },
	[174] = { .set = { {0, -10}, {9, -10}, {-8, -10}, {-1, -6} } },
	[175] = { .set = { {4, -9}, {-4, -13}, {6, -8}, {1, -6} } },
	[176] = { .set = { {8, -9}, {1, -12}, {0, -7}, {1, -6} } },
	[177] = { .set = { {4, -8}, {8, -11}, {-4, -8}, {0, -5} } },
	[178] = { .set = { {0, -6}, {-8, -9}, {8, -9}, {0, -5} } },
	[179] = { .set = { {4, -8}, {8, -11}, {-4, -8}, {0, -5} } },
	[180] = { .set = { {8, -9}, {1, -12}, {0, -7}, {1, -6} } },
	[181] = { .set = { {4, -9}, {-4, -13}, {6, -8}, {1, -6} } },
	[182] = { .set = { {0, -10}, {9, -10}, {-8, -10}, {-1, -6} } },
	[183] = { .set = { {-4, -9}, {4, -13}, {-6, -8}, {-1, -6} } },
	[184] = { .set = { {-8, -9}, {-1, -12}, {0, -7}, {-1, -6} } },
	[185] = { .set = { {-5, -8}, {-9, -11}, {3, -8}, {-1, -5} } },
	[186] = { .set = { {0, -8}, {-9, -10}, {8, -11}, {0, -6} } },
	[187] = { .set = { {0, -10}, {-8, -12}, {8, -12}, {0, -7} } },
	[188] = { .set = { {0, -6}, {-8, -9}, {8, -9}, {0, -5} } },
	[189] = { .set = { {2, -8}, {6, -13}, {-7, -9}, {-1, -6} } },
	[190] = { .set = { {2, -10}, {5, -13}, {-7, -10}, {0, -7} } },
	[191] = { .set = { {3, -8}, {7, -11}, {-5, -8}, {-1, -5} } },
	[192] = { .set = { {6, -9}, {1, -12}, {-3, -7}, {0, -6} } },
	[193] = { .set = { {4, -11}, {-3, -12}, {-5, -8}, {-1, -7} } },
	[194] = { .set = { {6, -9}, {-1, -12}, {-2, -7}, {-1, -6} } },
	[195] = { .set = { {3, -10}, {-7, -14}, {4, -8}, {-1, -6} } },
	[196] = { .set = { {1, -10}, {-7, -12}, {3, -7}, {-1, -4} } },
	[197] = { .set = { {3, -10}, {-5, -14}, {5, -9}, {0, -7} } },
	[198] = { .set = { {0, -10}, {8, -10}, {-8, -10}, {0, -6} } },
	[199] = { .set = { {0, -10}, {8, -11}, {-8, -11}, {0, -5} } },
	[200] = { .set = { {0, -10}, {9, -10}, {-8, -10}, {-1, -6} } },
	[201] = { .set = { {-3, -10}, {7, -14}, {-4, -8}, {1, -6} } },
	[202] = { .set = { {-1, -10}, {7, -12}, {-3, -7}, {1, -4} } },
	[203] = { .set = { {-4, -10}, {4, -14}, {-6, -9}, {-1, -7} } },
	[204] = { .set = { {-6, -9}, {-1, -12}, {3, -7}, {0, -6} } },
	[205] = { .set = { {-4, -11}, {3, -12}, {5, -8}, {1, -7} } },
	[206] = { .set = { {-6, -9}, {1, -12}, {2, -7}, {1, -6} } },
	[207] = { .set = { {-3, -8}, {-7, -13}, {6, -9}, {0, -6} } },
	[208] = { .set = { {-2, -10}, {-5, -13}, {7, -10}, {0, -7} } },
	[209] = { .set = { {-3, -8}, {-7, -11}, {5, -8}, {1, -5} } },
	[210] = { .set = { {0, -10}, {-8, -12}, {8, -12}, {0, -7} } },
	[211] = { .set = { {-2, -10}, {-5, -13}, {7, -10}, {0, -7} } },
	[212] = { .set = { {-4, -11}, {3, -12}, {5, -8}, {1, -7} } },
	[213] = { .set = { {-1, -11}, {7, -13}, {-3, -8}, {1, -5} } },
	[214] = { .set = { {0, -10}, {8, -11}, {-8, -11}, {0, -5} } },
	[215] = { .set = { {1, -11}, {-7, -13}, {3, -8}, {-1, -5} } },
	[216] = { .set = { {3, -11}, {-4, -12}, {-6, -8}, {-2, -7} } },
	[217] = { .set = { {2, -10}, {5, -13}, {-7, -10}, {0, -7} } },
	[218] = { .set = { {0, -8}, {-9, -10}, {8, -11}, {0, -6} } },
	[219] = { .set = { {-3, -8}, {-7, -13}, {6, -9}, {0, -6} } },
	[220] = { .set = { {-6, -9}, {-1, -12}, {3, -7}, {0, -6} } },
	[221] = { .set = { {-3, -10}, {7, -14}, {-4, -8}, {1, -6} } },
	[222] = { .set = { {0, -10}, {8, -10}, {-8, -10}, {0, -6} } },
	[223] = { .set = { {2, -10}, {5, -8}, {-6, -13}, {0, -6} } },
	[224] = { .set = { {5, -9}, {-3, -6}, {0, -11}, {0, -5} } },
	[225] = { .set = { {3, -8}, {-6, -9}, {6, -12}, {0, -6} } },
};

static const ax_anim *const sWooperAnimTable1[] = {
	sWooperAnims_1_1,
	sWooperAnims_1_2,
	sWooperAnims_1_3,
	sWooperAnims_1_4,
	sWooperAnims_1_5,
	sWooperAnims_1_6,
	sWooperAnims_1_7,
	sWooperAnims_1_8,
};

static const ax_anim *const sWooperAnimTable2[] = {
	gAxSharedAnim_01569,
	sWooperAnims_2_2,
	sWooperAnims_2_3,
	sWooperAnims_2_4,
	sWooperAnims_2_5,
	sWooperAnims_2_6,
	sWooperAnims_2_7,
	sWooperAnims_2_8,
};

static const ax_anim *const sWooperAnimTable3[] = {
	gAxSharedAnim_02005,
	sWooperAnims_3_2,
	sWooperAnims_3_3,
	sWooperAnims_3_4,
	sWooperAnims_3_5,
	sWooperAnims_3_6,
	sWooperAnims_3_7,
	sWooperAnims_3_8,
};

static const ax_anim *const sWooperAnimTable4[] = {
	sWooperAnims_4_1,
	sWooperAnims_4_2,
	sWooperAnims_4_3,
	sWooperAnims_4_4,
	sWooperAnims_4_5,
	sWooperAnims_4_6,
	sWooperAnims_4_7,
	sWooperAnims_4_8,
};

static const ax_anim *const sWooperAnimTable5[] = {
	sWooperAnims_5_1,
	sWooperAnims_5_2,
	sWooperAnims_5_3,
	sWooperAnims_5_4,
	sWooperAnims_5_5,
	sWooperAnims_5_6,
	sWooperAnims_5_7,
	sWooperAnims_5_8,
};

static const ax_anim *const sWooperAnimTable6[] = {
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
};

static const ax_anim *const sWooperAnimTable7[] = {
	gAxSharedAnim_00467,
	gAxSharedAnim_00480,
	gAxSharedAnim_00488,
	gAxSharedAnim_00497,
	gAxSharedAnim_00509,
	gAxSharedAnim_00518,
	gAxSharedAnim_00524,
	gAxSharedAnim_00530,
};

static const ax_anim *const sWooperAnimTable8[] = {
	sWooperAnims_8_1,
	sWooperAnims_8_2,
	sWooperAnims_8_3,
	sWooperAnims_8_4,
	sWooperAnims_8_5,
	sWooperAnims_8_6,
	sWooperAnims_8_7,
	sWooperAnims_8_8,
};

static const ax_anim *const sWooperAnimTable9[] = {
	gAxSharedAnim_00798,
	sWooperAnims_9_2,
	sWooperAnims_9_3,
	sWooperAnims_9_4,
	sWooperAnims_9_5,
	sWooperAnims_9_6,
	sWooperAnims_9_7,
	sWooperAnims_9_8,
};

static const ax_anim *const sWooperAnimTable10[] = {
	gAxSharedAnim_00905,
	gAxSharedAnim_00918,
	gAxSharedAnim_00930,
	gAxSharedAnim_00942,
	gAxSharedAnim_00955,
	gAxSharedAnim_00965,
	gAxSharedAnim_00978,
	gAxSharedAnim_00993,
};

static const ax_anim *const sWooperAnimTable11[] = {
	gAxSharedAnim_01005,
	gAxSharedAnim_01056,
	gAxSharedAnim_01103,
	gAxSharedAnim_01151,
	gAxSharedAnim_01186,
	gAxSharedAnim_01224,
	gAxSharedAnim_01262,
	gAxSharedAnim_01294,
};

static const ax_anim *const sWooperAnimTable12[] = {
	gAxSharedAnim_01337,
	gAxSharedAnim_01414,
	gAxSharedAnim_01392,
	gAxSharedAnim_01380,
	gAxSharedAnim_01379,
	gAxSharedAnim_01368,
	gAxSharedAnim_01354,
	gAxSharedAnim_01338,
};

static const ax_anim *const sWooperAnimTable13[] = {
	gAxSharedAnim_01422,
	gAxSharedAnim_01464,
	gAxSharedAnim_01461,
	gAxSharedAnim_01456,
	gAxSharedAnim_01446,
	gAxSharedAnim_01443,
	gAxSharedAnim_01438,
	gAxSharedAnim_01429,
};

static const ax_anim *const *const sAxAnimationsWooper[] = {
	sWooperAnimTable1,
	sWooperAnimTable2,
	sWooperAnimTable3,
	sWooperAnimTable4,
	sWooperAnimTable5,
	sWooperAnimTable6,
	sWooperAnimTable7,
	sWooperAnimTable8,
	sWooperAnimTable9,
	sWooperAnimTable10,
	sWooperAnimTable11,
	sWooperAnimTable12,
	sWooperAnimTable13,
};

static const ax_sprite *const sAxSpritesWooper[] = {
	sWooperSprites1,
	sWooperSprites2,
	sWooperSprites3,
	sWooperSprites4,
	sWooperSprites5,
	sWooperSprites6,
	sWooperSprites7,
	sWooperSprites8,
	sWooperSprites9,
	sWooperSprites10,
	sWooperSprites11,
	sWooperSprites12,
	sWooperSprites13,
	sWooperSprites14,
	sWooperSprites15,
	sWooperSprites16,
	sWooperSprites17,
	sWooperSprites18,
	sWooperSprites19,
	sWooperSprites20,
	sWooperSprites21,
	sWooperSprites22,
	sWooperSprites23,
	sWooperSprites24,
	sWooperSprites25,
	sWooperSprites26,
	sWooperSprites27,
	sWooperSprites28,
	sWooperSprites29,
	sWooperSprites30,
	sWooperSprites31,
	sWooperSprites32,
	sWooperSprites33,
	sWooperSprites34,
	sWooperSprites35,
	sWooperSprites36,
	sWooperSprites37,
	sWooperSprites38,
	sWooperSprites39,
	sWooperSprites40,
	sWooperSprites41,
};

static const axmain sAxMainWooper = {
	.poses = sAxPosesWooper,
	.animations = sAxAnimationsWooper,
	.animCount = ARRAY_COUNT(sAxAnimationsWooper),
	.spriteData = sAxSpritesWooper,
	.positions = sAxPositionsWooper,
};
