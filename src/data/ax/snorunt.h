/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainSnorunt;
const SiroArchive gAxSnorunt = {"SIRO", &sAxMainSnorunt};

static const ax_pose sSnoruntPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose11[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose12[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose15[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose16[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose17[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose18[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose22[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose23[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose24[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose26[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose27[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose29[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose30[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose32[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose33[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose35[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose36[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose38[] = {
	AX_POSE(23, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose39[] = {
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose41[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose42[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose44[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose45[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose47[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose48[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose58[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose63[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose64[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose65[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose66[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose67[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose68[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose73[] = {
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose74[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose75[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose76[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose77[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose78[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose79[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose80[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose81[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose82[] = {
	AX_POSE(19, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose83[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose84[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose85[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose86[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose87[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose88[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose91[] = {
	AX_POSE(25, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose94[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose97[] = {
	AX_POSE(27, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose109[] = {
	AX_POSE(27, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose112[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose121[] = {
	AX_POSE(28, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose122[] = {
	AX_POSE(29, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose123[] = {
	AX_POSE(30, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose124[] = {
	AX_POSE(31, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose125[] = {
	AX_POSE(32, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose126[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose127[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose128[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose129[] = {
	AX_POSE(32, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose130[] = {
	AX_POSE(31, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose158[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose159[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose160[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose163[] = {
	AX_POSE(16, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose165[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose166[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose168[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose169[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose174[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose176[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose190[] = {
	AX_POSE(20, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose196[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose197[] = {
	AX_POSE(19, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose198[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose200[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose201[] = {
	AX_POSE(19, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSnoruntPose202[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sSnoruntAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 26, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 25, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 29, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {19, 20}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {19, 20}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 35, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {6, -5}, .shadow = {6, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {12, -11}, .shadow = {12, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {21, -17}, .shadow = {21, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {21, -17}, .shadow = {21, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 38, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 41, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 40, .offset = {-6, -5}, .shadow = {-6, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-12, -11}, .shadow = {-12, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 40, .offset = {-21, -17}, .shadow = {-21, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-21, -17}, .shadow = {-21, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 47, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_3_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 52, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 4}, .shadow = {0, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_3_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 57, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 57, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {21, 19}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 56, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {21, 19}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {21, 19}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {4, 4}, .shadow = {4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_3_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 62, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 62, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {20, 1}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 61, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {20, 1}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {20, 1}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {4, 0}, .shadow = {4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_3_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 67, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {7, -7}, .shadow = {7, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {22, -20}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 66, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {22, -20}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {22, -20}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {12, -12}, .shadow = {12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {4, -4}, .shadow = {4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_3_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 72, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 72, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {1, -19}, .shadow = {1, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {1, -19}, .shadow = {1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {1, -19}, .shadow = {1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_3_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 77, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 77, .offset = {-7, -7}, .shadow = {-7, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-22, -20}, .shadow = {-22, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 76, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-22, -20}, .shadow = {-22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-22, -20}, .shadow = {-22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {-4, -4}, .shadow = {-4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_3_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 82, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 82, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-20, 1}, .shadow = {-20, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 81, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-20, 1}, .shadow = {-20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-20, 1}, .shadow = {-20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-4, 0}, .shadow = {-4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_3_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 87, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 87, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-21, 19}, .shadow = {-21, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 86, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-21, 19}, .shadow = {-21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-21, 19}, .shadow = {-21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_8_1[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 130, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 132, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_8_2[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 133, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_8_3[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 136, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 138, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_8_4[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 139, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 141, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_8_5[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 142, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 144, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_8_6[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 145, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 147, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_8_7[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 148, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 150, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_8_8[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 151, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 153, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {9, 13}, .shadow = {9, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {7, 19}, .shadow = {7, 19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-7, 19}, .shadow = {-7, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-9, 13}, .shadow = {-9, 13} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {21, 6}, .shadow = {21, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {24, 17}, .shadow = {24, 17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {22, 21}, .shadow = {22, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {13, 21}, .shadow = {13, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {5, 15}, .shadow = {5, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {4, -5}, .shadow = {4, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {13, -7}, .shadow = {13, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {19, -5}, .shadow = {19, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 157, .offset = {18, 5}, .shadow = {18, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {11, 8}, .shadow = {11, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {3, -16}, .shadow = {3, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {11, -20}, .shadow = {11, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {21, -20}, .shadow = {21, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 156, .offset = {22, -12}, .shadow = {22, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {10, 2}, .shadow = {10, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {-7, -4}, .shadow = {-7, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-9, -10}, .shadow = {-9, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-7, -17}, .shadow = {-7, -17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 155, .offset = {7, -17}, .shadow = {7, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {7, -4}, .shadow = {7, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {-3, -16}, .shadow = {-3, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-11, -20}, .shadow = {-11, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {-21, -20}, .shadow = {-21, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 160, .offset = {-22, -12}, .shadow = {-22, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {-10, -2}, .shadow = {-10, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {-4, -5}, .shadow = {-4, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-13, -7}, .shadow = {-13, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-19, -5}, .shadow = {-19, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-18, 5}, .shadow = {-18, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {-11, 8}, .shadow = {-11, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSnoruntAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-21, 6}, .shadow = {-21, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-24, 17}, .shadow = {-24, 17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {-22, 21}, .shadow = {-22, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {-13, 21}, .shadow = {-13, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {-5, 15}, .shadow = {-5, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sSnoruntGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_1.4bpp.lz");
static const ax_sprite sSnoruntSprites1[] = {
	{sSnoruntGfx1, ARRAY_COUNT(sSnoruntGfx1)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_2.4bpp.lz");
static const ax_sprite sSnoruntSprites2[] = {
	{sSnoruntGfx2, ARRAY_COUNT(sSnoruntGfx2)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_3.4bpp.lz");
static const ax_sprite sSnoruntSprites3[] = {
	{sSnoruntGfx3, ARRAY_COUNT(sSnoruntGfx3)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_4.4bpp.lz");
static const ax_sprite sSnoruntSprites4[] = {
	{sSnoruntGfx4, ARRAY_COUNT(sSnoruntGfx4)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_5.4bpp.lz");
static const ax_sprite sSnoruntSprites5[] = {
	{sSnoruntGfx5, ARRAY_COUNT(sSnoruntGfx5)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_6.4bpp.lz");
static const ax_sprite sSnoruntSprites6[] = {
	{sSnoruntGfx6, ARRAY_COUNT(sSnoruntGfx6)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_7.4bpp.lz");
static const ax_sprite sSnoruntSprites7[] = {
	{sSnoruntGfx7, ARRAY_COUNT(sSnoruntGfx7)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_8.4bpp.lz");
static const ax_sprite sSnoruntSprites8[] = {
	{sSnoruntGfx8, ARRAY_COUNT(sSnoruntGfx8)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_9.4bpp.lz");
static const ax_sprite sSnoruntSprites9[] = {
	{sSnoruntGfx9, ARRAY_COUNT(sSnoruntGfx9)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_10.4bpp.lz");
static const ax_sprite sSnoruntSprites10[] = {
	{sSnoruntGfx10, ARRAY_COUNT(sSnoruntGfx10)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_11.4bpp.lz");
static const ax_sprite sSnoruntSprites11[] = {
	{sSnoruntGfx11, ARRAY_COUNT(sSnoruntGfx11)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_12.4bpp.lz");
static const ax_sprite sSnoruntSprites12[] = {
	{sSnoruntGfx12, ARRAY_COUNT(sSnoruntGfx12)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_13.4bpp.lz");
static const ax_sprite sSnoruntSprites13[] = {
	{sSnoruntGfx13, ARRAY_COUNT(sSnoruntGfx13)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_14.4bpp.lz");
static const ax_sprite sSnoruntSprites14[] = {
	{sSnoruntGfx14, ARRAY_COUNT(sSnoruntGfx14)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_15.4bpp.lz");
static const ax_sprite sSnoruntSprites15[] = {
	{sSnoruntGfx15, ARRAY_COUNT(sSnoruntGfx15)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_16.4bpp.lz");
static const u8 sSnoruntGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_16_1.4bpp.lz");
static const u8 sSnoruntGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_16_2.4bpp.lz");
static const ax_sprite sSnoruntSprites16[] = {
	{sSnoruntGfx16, ARRAY_COUNT(sSnoruntGfx16)}, 
	{NULL, 32}, 
	{sSnoruntGfx16_1, ARRAY_COUNT(sSnoruntGfx16_1)}, 
	{NULL, 32}, 
	{sSnoruntGfx16_2, ARRAY_COUNT(sSnoruntGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_17.4bpp.lz");
static const u8 sSnoruntGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_17_1.4bpp.lz");
static const u8 sSnoruntGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_17_2.4bpp.lz");
static const ax_sprite sSnoruntSprites17[] = {
	{sSnoruntGfx17, ARRAY_COUNT(sSnoruntGfx17)}, 
	{NULL, 32}, 
	{sSnoruntGfx17_1, ARRAY_COUNT(sSnoruntGfx17_1)}, 
	{NULL, 32}, 
	{sSnoruntGfx17_2, ARRAY_COUNT(sSnoruntGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_18.4bpp.lz");
static const u8 sSnoruntGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_18_1.4bpp.lz");
static const u8 sSnoruntGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_18_2.4bpp.lz");
static const ax_sprite sSnoruntSprites18[] = {
	{sSnoruntGfx18, ARRAY_COUNT(sSnoruntGfx18)}, 
	{NULL, 32}, 
	{sSnoruntGfx18_1, ARRAY_COUNT(sSnoruntGfx18_1)}, 
	{NULL, 32}, 
	{sSnoruntGfx18_2, ARRAY_COUNT(sSnoruntGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_19.4bpp.lz");
static const u8 sSnoruntGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_19_1.4bpp.lz");
static const u8 sSnoruntGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_19_2.4bpp.lz");
static const ax_sprite sSnoruntSprites19[] = {
	{NULL, 32}, 
	{sSnoruntGfx19, ARRAY_COUNT(sSnoruntGfx19)}, 
	{NULL, 32}, 
	{sSnoruntGfx19_1, ARRAY_COUNT(sSnoruntGfx19_1)}, 
	{NULL, 32}, 
	{sSnoruntGfx19_2, ARRAY_COUNT(sSnoruntGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_20.4bpp.lz");
static const u8 sSnoruntGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_20_1.4bpp.lz");
static const u8 sSnoruntGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_20_2.4bpp.lz");
static const ax_sprite sSnoruntSprites20[] = {
	{sSnoruntGfx20, ARRAY_COUNT(sSnoruntGfx20)}, 
	{NULL, 32}, 
	{sSnoruntGfx20_1, ARRAY_COUNT(sSnoruntGfx20_1)}, 
	{NULL, 32}, 
	{sSnoruntGfx20_2, ARRAY_COUNT(sSnoruntGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_21.4bpp.lz");
static const u8 sSnoruntGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_21_1.4bpp.lz");
static const u8 sSnoruntGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_21_2.4bpp.lz");
static const ax_sprite sSnoruntSprites21[] = {
	{NULL, 32}, 
	{sSnoruntGfx21, ARRAY_COUNT(sSnoruntGfx21)}, 
	{NULL, 32}, 
	{sSnoruntGfx21_1, ARRAY_COUNT(sSnoruntGfx21_1)}, 
	{NULL, 64}, 
	{sSnoruntGfx21_2, ARRAY_COUNT(sSnoruntGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_22.4bpp.lz");
static const u8 sSnoruntGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_22_1.4bpp.lz");
static const u8 sSnoruntGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_22_2.4bpp.lz");
static const ax_sprite sSnoruntSprites22[] = {
	{sSnoruntGfx22, ARRAY_COUNT(sSnoruntGfx22)}, 
	{NULL, 32}, 
	{sSnoruntGfx22_1, ARRAY_COUNT(sSnoruntGfx22_1)}, 
	{NULL, 32}, 
	{sSnoruntGfx22_2, ARRAY_COUNT(sSnoruntGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_23.4bpp.lz");
static const u8 sSnoruntGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_23_1.4bpp.lz");
static const u8 sSnoruntGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_23_2.4bpp.lz");
static const ax_sprite sSnoruntSprites23[] = {
	{sSnoruntGfx23, ARRAY_COUNT(sSnoruntGfx23)}, 
	{NULL, 32}, 
	{sSnoruntGfx23_1, ARRAY_COUNT(sSnoruntGfx23_1)}, 
	{NULL, 32}, 
	{sSnoruntGfx23_2, ARRAY_COUNT(sSnoruntGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_24.4bpp.lz");
static const u8 sSnoruntGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_24_1.4bpp.lz");
static const u8 sSnoruntGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_24_2.4bpp.lz");
static const ax_sprite sSnoruntSprites24[] = {
	{sSnoruntGfx24, ARRAY_COUNT(sSnoruntGfx24)}, 
	{NULL, 32}, 
	{sSnoruntGfx24_1, ARRAY_COUNT(sSnoruntGfx24_1)}, 
	{NULL, 32}, 
	{sSnoruntGfx24_2, ARRAY_COUNT(sSnoruntGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_25.4bpp.lz");
static const u8 sSnoruntGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_25_1.4bpp.lz");
static const u8 sSnoruntGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_25_2.4bpp.lz");
static const ax_sprite sSnoruntSprites25[] = {
	{sSnoruntGfx25, ARRAY_COUNT(sSnoruntGfx25)}, 
	{NULL, 32}, 
	{sSnoruntGfx25_1, ARRAY_COUNT(sSnoruntGfx25_1)}, 
	{NULL, 32}, 
	{sSnoruntGfx25_2, ARRAY_COUNT(sSnoruntGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_26.4bpp.lz");
static const u8 sSnoruntGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_26_1.4bpp.lz");
static const u8 sSnoruntGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_26_2.4bpp.lz");
static const ax_sprite sSnoruntSprites26[] = {
	{sSnoruntGfx26, ARRAY_COUNT(sSnoruntGfx26)}, 
	{NULL, 32}, 
	{sSnoruntGfx26_1, ARRAY_COUNT(sSnoruntGfx26_1)}, 
	{NULL, 32}, 
	{sSnoruntGfx26_2, ARRAY_COUNT(sSnoruntGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_27.4bpp.lz");
static const u8 sSnoruntGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_27_1.4bpp.lz");
static const u8 sSnoruntGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_27_2.4bpp.lz");
static const ax_sprite sSnoruntSprites27[] = {
	{sSnoruntGfx27, ARRAY_COUNT(sSnoruntGfx27)}, 
	{NULL, 32}, 
	{sSnoruntGfx27_1, ARRAY_COUNT(sSnoruntGfx27_1)}, 
	{NULL, 32}, 
	{sSnoruntGfx27_2, ARRAY_COUNT(sSnoruntGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_28.4bpp.lz");
static const u8 sSnoruntGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_28_1.4bpp.lz");
static const u8 sSnoruntGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_28_2.4bpp.lz");
static const ax_sprite sSnoruntSprites28[] = {
	{sSnoruntGfx28, ARRAY_COUNT(sSnoruntGfx28)}, 
	{NULL, 32}, 
	{sSnoruntGfx28_1, ARRAY_COUNT(sSnoruntGfx28_1)}, 
	{NULL, 32}, 
	{sSnoruntGfx28_2, ARRAY_COUNT(sSnoruntGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_29.4bpp.lz");
static const ax_sprite sSnoruntSprites29[] = {
	{sSnoruntGfx29, ARRAY_COUNT(sSnoruntGfx29)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_30.4bpp.lz");
static const ax_sprite sSnoruntSprites30[] = {
	{sSnoruntGfx30, ARRAY_COUNT(sSnoruntGfx30)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_31.4bpp.lz");
static const ax_sprite sSnoruntSprites31[] = {
	{sSnoruntGfx31, ARRAY_COUNT(sSnoruntGfx31)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_32.4bpp.lz");
static const ax_sprite sSnoruntSprites32[] = {
	{sSnoruntGfx32, ARRAY_COUNT(sSnoruntGfx32)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_33.4bpp.lz");
static const ax_sprite sSnoruntSprites33[] = {
	{sSnoruntGfx33, ARRAY_COUNT(sSnoruntGfx33)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_34.4bpp.lz");
static const ax_sprite sSnoruntSprites34[] = {
	{sSnoruntGfx34, ARRAY_COUNT(sSnoruntGfx34)}, 
	{NULL, 0}
};
static const u8 sSnoruntGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/snorunt/sprite_35.4bpp.lz");
static const ax_sprite sSnoruntSprites35[] = {
	{sSnoruntGfx35, ARRAY_COUNT(sSnoruntGfx35)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSnorunt[] = {
	sSnoruntPose1,
	sSnoruntPose2,
	sSnoruntPose3,
	sSnoruntPose4,
	sSnoruntPose5,
	sSnoruntPose6,
	sSnoruntPose7,
	sSnoruntPose8,
	sSnoruntPose9,
	sSnoruntPose10,
	sSnoruntPose11,
	sSnoruntPose12,
	sSnoruntPose13,
	sSnoruntPose14,
	sSnoruntPose15,
	sSnoruntPose16,
	sSnoruntPose17,
	sSnoruntPose18,
	sSnoruntPose19,
	sSnoruntPose20,
	sSnoruntPose21,
	sSnoruntPose22,
	sSnoruntPose23,
	sSnoruntPose24,
	sSnoruntPose1,
	sSnoruntPose26,
	sSnoruntPose27,
	sSnoruntPose4,
	sSnoruntPose29,
	sSnoruntPose30,
	sSnoruntPose7,
	sSnoruntPose32,
	sSnoruntPose33,
	sSnoruntPose10,
	sSnoruntPose35,
	sSnoruntPose36,
	sSnoruntPose13,
	sSnoruntPose38,
	sSnoruntPose39,
	sSnoruntPose16,
	sSnoruntPose41,
	sSnoruntPose42,
	sSnoruntPose19,
	sSnoruntPose44,
	sSnoruntPose45,
	sSnoruntPose22,
	sSnoruntPose47,
	sSnoruntPose48,
	sSnoruntPose1,
	sSnoruntPose2,
	sSnoruntPose3,
	sSnoruntPose26,
	sSnoruntPose27,
	sSnoruntPose4,
	sSnoruntPose5,
	sSnoruntPose6,
	sSnoruntPose29,
	sSnoruntPose58,
	sSnoruntPose7,
	sSnoruntPose8,
	sSnoruntPose9,
	sSnoruntPose32,
	sSnoruntPose63,
	sSnoruntPose64,
	sSnoruntPose65,
	sSnoruntPose66,
	sSnoruntPose67,
	sSnoruntPose68,
	sSnoruntPose13,
	sSnoruntPose14,
	sSnoruntPose15,
	sSnoruntPose38,
	sSnoruntPose73,
	sSnoruntPose74,
	sSnoruntPose75,
	sSnoruntPose76,
	sSnoruntPose77,
	sSnoruntPose78,
	sSnoruntPose79,
	sSnoruntPose80,
	sSnoruntPose81,
	sSnoruntPose82,
	sSnoruntPose83,
	sSnoruntPose84,
	sSnoruntPose85,
	sSnoruntPose86,
	sSnoruntPose87,
	sSnoruntPose88,
	sSnoruntPose1,
	sSnoruntPose27,
	sSnoruntPose91,
	sSnoruntPose4,
	sSnoruntPose30,
	sSnoruntPose94,
	sSnoruntPose7,
	sSnoruntPose33,
	sSnoruntPose97,
	sSnoruntPose10,
	sSnoruntPose36,
	sSnoruntPose35,
	sSnoruntPose13,
	sSnoruntPose39,
	sSnoruntPose38,
	sSnoruntPose16,
	sSnoruntPose42,
	sSnoruntPose41,
	sSnoruntPose19,
	sSnoruntPose45,
	sSnoruntPose109,
	sSnoruntPose22,
	sSnoruntPose48,
	sSnoruntPose112,
	sSnoruntPose1,
	sSnoruntPose22,
	sSnoruntPose19,
	sSnoruntPose16,
	sSnoruntPose13,
	sSnoruntPose10,
	sSnoruntPose7,
	sSnoruntPose4,
	sSnoruntPose121,
	sSnoruntPose122,
	sSnoruntPose123,
	sSnoruntPose124,
	sSnoruntPose125,
	sSnoruntPose126,
	sSnoruntPose127,
	sSnoruntPose128,
	sSnoruntPose129,
	sSnoruntPose130,
	sSnoruntPose1,
	sSnoruntPose2,
	sSnoruntPose3,
	sSnoruntPose4,
	sSnoruntPose5,
	sSnoruntPose6,
	sSnoruntPose7,
	sSnoruntPose8,
	sSnoruntPose9,
	sSnoruntPose10,
	sSnoruntPose11,
	sSnoruntPose12,
	sSnoruntPose13,
	sSnoruntPose14,
	sSnoruntPose15,
	sSnoruntPose16,
	sSnoruntPose17,
	sSnoruntPose18,
	sSnoruntPose19,
	sSnoruntPose20,
	sSnoruntPose21,
	sSnoruntPose22,
	sSnoruntPose23,
	sSnoruntPose24,
	sSnoruntPose26,
	sSnoruntPose87,
	sSnoruntPose82,
	sSnoruntPose158,
	sSnoruntPose159,
	sSnoruntPose160,
	sSnoruntPose32,
	sSnoruntPose29,
	sSnoruntPose163,
	sSnoruntPose58,
	sSnoruntPose165,
	sSnoruntPose166,
	sSnoruntPose73,
	sSnoruntPose168,
	sSnoruntPose169,
	sSnoruntPose88,
	sSnoruntPose1,
	sSnoruntPose27,
	sSnoruntPose26,
	sSnoruntPose174,
	sSnoruntPose58,
	sSnoruntPose176,
	sSnoruntPose7,
	sSnoruntPose63,
	sSnoruntPose32,
	sSnoruntPose64,
	sSnoruntPose68,
	sSnoruntPose67,
	sSnoruntPose13,
	sSnoruntPose73,
	sSnoruntPose38,
	sSnoruntPose74,
	sSnoruntPose78,
	sSnoruntPose77,
	sSnoruntPose79,
	sSnoruntPose190,
	sSnoruntPose82,
	sSnoruntPose84,
	sSnoruntPose88,
	sSnoruntPose87,
	sSnoruntPose26,
	sSnoruntPose196,
	sSnoruntPose197,
	sSnoruntPose198,
	sSnoruntPose159,
	sSnoruntPose200,
	sSnoruntPose201,
	sSnoruntPose202,
	sSnoruntPose1,
	sSnoruntPose22,
	sSnoruntPose19,
	sSnoruntPose16,
	sSnoruntPose13,
	sSnoruntPose10,
	sSnoruntPose7,
	sSnoruntPose4,
};

static const struct PositionSets sAxPositionsSnorunt[] = {
	[0] = { .set = { {-1, -6}, {-2, -2}, {1, -3}, {-1, -8} } },
	[1] = { .set = { {-2, -5}, {-3, -1}, {0, -2}, {-1, -7} } },
	[2] = { .set = { {0, -5}, {-1, -1}, {2, -2}, {-1, -7} } },
	[3] = { .set = { {2, -6}, {4, -2}, {2, -4}, {-1, -8} } },
	[4] = { .set = { {3, -5}, {5, -1}, {3, -3}, {-1, -7} } },
	[5] = { .set = { {1, -5}, {3, -1}, {1, -3}, {-1, -7} } },
	[6] = { .set = { {5, -7}, {7, -4}, {7, -5}, {-1, -8} } },
	[7] = { .set = { {5, -6}, {5, -4}, {7, -5}, {-1, -7} } },
	[8] = { .set = { {5, -6}, {6, -4}, {7, -5}, {0, -7} } },
	[9] = { .set = { {1, -9}, {3, -9}, {4, -8}, {-2, -9} } },
	[10] = { .set = { {0, -8}, {2, -8}, {3, -7}, {-2, -8} } },
	[11] = { .set = { {2, -8}, {4, -8}, {5, -7}, {-2, -8} } },
	[12] = { .set = { {-1, -10}, {1, -9}, {-2, -9}, {-1, -9} } },
	[13] = { .set = { {0, -9}, {1, -7}, {-1, -7}, {-2, -9} } },
	[14] = { .set = { {-2, -8}, {1, -7}, {-2, -7}, {0, -8} } },
	[15] = { .set = { {-3, -9}, {-5, -9}, {-6, -8}, {0, -9} } },
	[16] = { .set = { {-2, -8}, {-4, -8}, {-5, -7}, {0, -8} } },
	[17] = { .set = { {-4, -8}, {-6, -8}, {-7, -7}, {0, -8} } },
	[18] = { .set = { {-7, -7}, {-9, -4}, {-9, -5}, {-1, -8} } },
	[19] = { .set = { {-7, -6}, {-7, -4}, {-9, -5}, {-1, -7} } },
	[20] = { .set = { {-7, -6}, {-8, -4}, {-9, -5}, {-2, -7} } },
	[21] = { .set = { {-4, -6}, {-6, -2}, {-4, -4}, {-1, -8} } },
	[22] = { .set = { {-5, -5}, {-7, -1}, {-5, -3}, {-1, -7} } },
	[23] = { .set = { {-3, -5}, {-5, -1}, {-3, -3}, {-1, -7} } },
	[24] = { .set = { {-1, -6}, {-2, -2}, {1, -3}, {-1, -8} } },
	[25] = { .set = { {-1, -3}, {-2, 0}, {0, -1}, {-1, -7} } },
	[26] = { .set = { {-1, -11}, {-3, -7}, {1, -8}, {-1, -9} } },
	[27] = { .set = { {2, -6}, {4, -2}, {2, -4}, {-1, -8} } },
	[28] = { .set = { {3, -3}, {4, -2}, {3, -1}, {0, -8} } },
	[29] = { .set = { {-1, -11}, {2, -9}, {-1, -8}, {-5, -9} } },
	[30] = { .set = { {5, -7}, {7, -4}, {7, -5}, {-1, -8} } },
	[31] = { .set = { {4, -5}, {2, -3}, {4, -3}, {1, -10} } },
	[32] = { .set = { {0, -12}, {3, -8}, {4, -9}, {-5, -9} } },
	[33] = { .set = { {1, -9}, {3, -9}, {4, -8}, {-2, -9} } },
	[34] = { .set = { {2, -10}, {-1, -6}, {1, -7}, {0, -11} } },
	[35] = { .set = { {1, -15}, {0, -13}, {3, -13}, {-4, -10} } },
	[36] = { .set = { {-1, -10}, {1, -9}, {-2, -9}, {-1, -9} } },
	[37] = { .set = { {-1, -7}, {1, -6}, {-2, -5}, {-1, -10} } },
	[38] = { .set = { {-1, -13}, {1, -13}, {-3, -13}, {-1, -6} } },
	[39] = { .set = { {-3, -9}, {-5, -9}, {-6, -8}, {0, -9} } },
	[40] = { .set = { {-4, -10}, {-1, -6}, {-3, -7}, {-2, -11} } },
	[41] = { .set = { {-3, -15}, {-2, -13}, {-5, -13}, {2, -10} } },
	[42] = { .set = { {-7, -7}, {-9, -4}, {-9, -5}, {-1, -8} } },
	[43] = { .set = { {-6, -5}, {-4, -3}, {-6, -3}, {-3, -10} } },
	[44] = { .set = { {-2, -12}, {-5, -8}, {-6, -9}, {3, -9} } },
	[45] = { .set = { {-4, -6}, {-6, -2}, {-4, -4}, {-1, -8} } },
	[46] = { .set = { {-5, -3}, {-6, -2}, {-5, -1}, {-2, -8} } },
	[47] = { .set = { {-1, -11}, {-4, -9}, {-1, -8}, {3, -9} } },
	[48] = { .set = { {-1, -6}, {-2, -2}, {1, -3}, {-1, -8} } },
	[49] = { .set = { {-2, -5}, {-3, -1}, {0, -2}, {-1, -7} } },
	[50] = { .set = { {0, -5}, {-1, -1}, {2, -2}, {-1, -7} } },
	[51] = { .set = { {-1, -3}, {-2, 0}, {0, -1}, {-1, -7} } },
	[52] = { .set = { {-1, -11}, {-3, -7}, {1, -8}, {-1, -9} } },
	[53] = { .set = { {2, -6}, {4, -2}, {2, -4}, {-1, -8} } },
	[54] = { .set = { {3, -5}, {5, -1}, {3, -3}, {-1, -7} } },
	[55] = { .set = { {1, -5}, {3, -1}, {1, -3}, {-1, -7} } },
	[56] = { .set = { {3, -3}, {4, -2}, {3, -1}, {0, -8} } },
	[57] = { .set = { {1, -9}, {4, -7}, {1, -6}, {-3, -7} } },
	[58] = { .set = { {5, -7}, {7, -4}, {7, -5}, {-1, -8} } },
	[59] = { .set = { {5, -6}, {5, -4}, {7, -5}, {-1, -7} } },
	[60] = { .set = { {5, -6}, {6, -4}, {7, -5}, {0, -7} } },
	[61] = { .set = { {4, -5}, {2, -3}, {4, -3}, {1, -10} } },
	[62] = { .set = { {3, -12}, {6, -8}, {7, -9}, {-2, -9} } },
	[63] = { .set = { {1, -8}, {3, -8}, {4, -7}, {-2, -8} } },
	[64] = { .set = { {0, -7}, {2, -7}, {3, -6}, {-2, -7} } },
	[65] = { .set = { {2, -7}, {4, -7}, {5, -6}, {-2, -7} } },
	[66] = { .set = { {2, -8}, {-1, -4}, {1, -5}, {0, -9} } },
	[67] = { .set = { {3, -14}, {2, -12}, {5, -12}, {-2, -9} } },
	[68] = { .set = { {-1, -10}, {1, -9}, {-2, -9}, {-1, -9} } },
	[69] = { .set = { {0, -9}, {1, -7}, {-1, -7}, {-2, -9} } },
	[70] = { .set = { {-2, -8}, {1, -7}, {-2, -7}, {0, -8} } },
	[71] = { .set = { {-1, -7}, {1, -6}, {-2, -5}, {-1, -10} } },
	[72] = { .set = { {-1, -12}, {1, -12}, {-3, -12}, {-1, -5} } },
	[73] = { .set = { {-2, -8}, {-4, -8}, {-5, -7}, {1, -8} } },
	[74] = { .set = { {-1, -7}, {-3, -7}, {-4, -6}, {1, -7} } },
	[75] = { .set = { {-3, -7}, {-5, -7}, {-6, -6}, {1, -7} } },
	[76] = { .set = { {-3, -8}, {0, -4}, {-2, -5}, {-1, -9} } },
	[77] = { .set = { {-4, -14}, {-3, -12}, {-6, -12}, {1, -9} } },
	[78] = { .set = { {-6, -7}, {-8, -4}, {-8, -5}, {0, -8} } },
	[79] = { .set = { {-6, -6}, {-6, -4}, {-8, -5}, {0, -7} } },
	[80] = { .set = { {-6, -6}, {-7, -4}, {-8, -5}, {-1, -7} } },
	[81] = { .set = { {-5, -5}, {-3, -3}, {-5, -3}, {-2, -10} } },
	[82] = { .set = { {-4, -12}, {-7, -8}, {-8, -9}, {1, -9} } },
	[83] = { .set = { {-3, -6}, {-5, -2}, {-3, -4}, {0, -8} } },
	[84] = { .set = { {-4, -5}, {-6, -1}, {-4, -3}, {0, -7} } },
	[85] = { .set = { {-2, -5}, {-4, -1}, {-2, -3}, {0, -7} } },
	[86] = { .set = { {-4, -3}, {-5, -2}, {-4, -1}, {-1, -8} } },
	[87] = { .set = { {-2, -9}, {-5, -7}, {-2, -6}, {2, -7} } },
	[88] = { .set = { {-1, -6}, {-2, -2}, {1, -3}, {-1, -8} } },
	[89] = { .set = { {-1, -11}, {-3, -7}, {1, -8}, {-1, -9} } },
	[90] = { .set = { {-1, -3}, {-2, 0}, {0, -1}, {-1, -6} } },
	[91] = { .set = { {2, -6}, {4, -2}, {2, -4}, {-1, -8} } },
	[92] = { .set = { {-1, -11}, {2, -9}, {-1, -8}, {-5, -9} } },
	[93] = { .set = { {4, -3}, {4, -1}, {3, 0}, {0, -8} } },
	[94] = { .set = { {5, -7}, {7, -4}, {7, -5}, {-1, -8} } },
	[95] = { .set = { {0, -12}, {3, -8}, {4, -9}, {-5, -9} } },
	[96] = { .set = { {4, -5}, {2, -2}, {4, -3}, {1, -10} } },
	[97] = { .set = { {1, -9}, {3, -9}, {4, -8}, {-2, -9} } },
	[98] = { .set = { {1, -15}, {0, -13}, {3, -13}, {-4, -10} } },
	[99] = { .set = { {2, -10}, {-1, -6}, {1, -7}, {0, -11} } },
	[100] = { .set = { {-1, -10}, {1, -9}, {-2, -9}, {-1, -9} } },
	[101] = { .set = { {-1, -13}, {1, -13}, {-3, -13}, {-1, -6} } },
	[102] = { .set = { {-1, -7}, {1, -6}, {-2, -5}, {-1, -10} } },
	[103] = { .set = { {-3, -9}, {-5, -9}, {-6, -8}, {0, -9} } },
	[104] = { .set = { {-3, -15}, {-2, -13}, {-5, -13}, {2, -10} } },
	[105] = { .set = { {-4, -10}, {-1, -6}, {-3, -7}, {-2, -11} } },
	[106] = { .set = { {-7, -7}, {-9, -4}, {-9, -5}, {-1, -8} } },
	[107] = { .set = { {-2, -12}, {-5, -8}, {-6, -9}, {3, -9} } },
	[108] = { .set = { {-6, -5}, {-4, -2}, {-6, -3}, {-3, -10} } },
	[109] = { .set = { {-4, -6}, {-6, -2}, {-4, -4}, {-1, -8} } },
	[110] = { .set = { {-1, -11}, {-4, -9}, {-1, -8}, {3, -9} } },
	[111] = { .set = { {-6, -3}, {-6, -1}, {-5, 0}, {-2, -8} } },
	[112] = { .set = { {-1, -6}, {-2, -2}, {1, -3}, {-1, -8} } },
	[113] = { .set = { {-4, -6}, {-6, -2}, {-4, -4}, {-1, -8} } },
	[114] = { .set = { {-7, -7}, {-9, -4}, {-9, -5}, {-1, -8} } },
	[115] = { .set = { {-3, -9}, {-5, -9}, {-6, -8}, {0, -9} } },
	[116] = { .set = { {-1, -10}, {1, -9}, {-2, -9}, {-1, -9} } },
	[117] = { .set = { {1, -9}, {3, -9}, {4, -8}, {-2, -9} } },
	[118] = { .set = { {5, -7}, {7, -4}, {7, -5}, {-1, -8} } },
	[119] = { .set = { {2, -6}, {4, -2}, {2, -4}, {-1, -8} } },
	[120] = { .set = { {-3, -5}, {-6, -3}, {-3, -2}, {0, -6} } },
	[121] = { .set = { {-3, -4}, {-6, -2}, {-3, -1}, {0, -4} } },
	[122] = { .set = { {-1, -8}, {-2, -5}, {0, -7}, {-1, -10} } },
	[123] = { .set = { {-2, -9}, {1, -6}, {0, -7}, {-4, -10} } },
	[124] = { .set = { {1, -9}, {3, -8}, {4, -9}, {-5, -7} } },
	[125] = { .set = { {0, -7}, {2, -6}, {3, -7}, {-2, -5} } },
	[126] = { .set = { {-1, -7}, {1, -5}, {-2, -5}, {-1, -5} } },
	[127] = { .set = { {-1, -7}, {-3, -6}, {-4, -7}, {1, -5} } },
	[128] = { .set = { {-2, -9}, {-4, -8}, {-5, -9}, {4, -7} } },
	[129] = { .set = { {1, -9}, {-2, -6}, {-1, -7}, {3, -10} } },
	[130] = { .set = { {-1, -6}, {-2, -2}, {1, -3}, {-1, -8} } },
	[131] = { .set = { {-2, -5}, {-3, -1}, {0, -2}, {-1, -7} } },
	[132] = { .set = { {0, -5}, {-1, -1}, {2, -2}, {-1, -7} } },
	[133] = { .set = { {2, -6}, {4, -2}, {2, -4}, {-1, -8} } },
	[134] = { .set = { {3, -5}, {5, -1}, {3, -3}, {-1, -7} } },
	[135] = { .set = { {1, -5}, {3, -1}, {1, -3}, {-1, -7} } },
	[136] = { .set = { {5, -7}, {7, -4}, {7, -5}, {-1, -8} } },
	[137] = { .set = { {5, -6}, {5, -4}, {7, -5}, {-1, -7} } },
	[138] = { .set = { {5, -6}, {6, -4}, {7, -5}, {0, -7} } },
	[139] = { .set = { {1, -9}, {3, -9}, {4, -8}, {-2, -9} } },
	[140] = { .set = { {0, -8}, {2, -8}, {3, -7}, {-2, -8} } },
	[141] = { .set = { {2, -8}, {4, -8}, {5, -7}, {-2, -8} } },
	[142] = { .set = { {-1, -10}, {1, -9}, {-2, -9}, {-1, -9} } },
	[143] = { .set = { {0, -9}, {1, -7}, {-1, -7}, {-2, -9} } },
	[144] = { .set = { {-2, -8}, {1, -7}, {-2, -7}, {0, -8} } },
	[145] = { .set = { {-3, -9}, {-5, -9}, {-6, -8}, {0, -9} } },
	[146] = { .set = { {-2, -8}, {-4, -8}, {-5, -7}, {0, -8} } },
	[147] = { .set = { {-4, -8}, {-6, -8}, {-7, -7}, {0, -8} } },
	[148] = { .set = { {-7, -7}, {-9, -4}, {-9, -5}, {-1, -8} } },
	[149] = { .set = { {-7, -6}, {-7, -4}, {-9, -5}, {-1, -7} } },
	[150] = { .set = { {-7, -6}, {-8, -4}, {-9, -5}, {-2, -7} } },
	[151] = { .set = { {-4, -6}, {-6, -2}, {-4, -4}, {-1, -8} } },
	[152] = { .set = { {-5, -5}, {-7, -1}, {-5, -3}, {-1, -7} } },
	[153] = { .set = { {-3, -5}, {-5, -1}, {-3, -3}, {-1, -7} } },
	[154] = { .set = { {-1, -3}, {-2, 0}, {0, -1}, {-1, -7} } },
	[155] = { .set = { {-4, -3}, {-5, -2}, {-4, -1}, {-1, -8} } },
	[156] = { .set = { {-5, -5}, {-3, -3}, {-5, -3}, {-2, -10} } },
	[157] = { .set = { {-3, -9}, {0, -5}, {-2, -6}, {-1, -10} } },
	[158] = { .set = { {-1, -6}, {1, -5}, {-2, -4}, {-1, -9} } },
	[159] = { .set = { {2, -9}, {-1, -5}, {1, -6}, {0, -10} } },
	[160] = { .set = { {4, -5}, {2, -3}, {4, -3}, {1, -10} } },
	[161] = { .set = { {3, -3}, {4, -2}, {3, -1}, {0, -8} } },
	[162] = { .set = { {-1, -9}, {-3, -5}, {1, -6}, {-1, -7} } },
	[163] = { .set = { {1, -9}, {4, -7}, {1, -6}, {-3, -7} } },
	[164] = { .set = { {3, -11}, {6, -7}, {7, -8}, {-2, -8} } },
	[165] = { .set = { {3, -13}, {2, -11}, {5, -11}, {-2, -8} } },
	[166] = { .set = { {-1, -12}, {1, -12}, {-3, -12}, {-1, -5} } },
	[167] = { .set = { {-4, -13}, {-3, -11}, {-6, -11}, {1, -8} } },
	[168] = { .set = { {-4, -11}, {-7, -7}, {-8, -8}, {1, -8} } },
	[169] = { .set = { {-2, -9}, {-5, -7}, {-2, -6}, {2, -7} } },
	[170] = { .set = { {-1, -6}, {-2, -2}, {1, -3}, {-1, -8} } },
	[171] = { .set = { {-1, -11}, {-3, -7}, {1, -8}, {-1, -9} } },
	[172] = { .set = { {-1, -3}, {-2, 0}, {0, -1}, {-1, -7} } },
	[173] = { .set = { {2, -5}, {4, -1}, {2, -3}, {-1, -7} } },
	[174] = { .set = { {1, -9}, {4, -7}, {1, -6}, {-3, -7} } },
	[175] = { .set = { {4, -2}, {5, -1}, {4, 0}, {1, -7} } },
	[176] = { .set = { {5, -7}, {7, -4}, {7, -5}, {-1, -8} } },
	[177] = { .set = { {3, -12}, {6, -8}, {7, -9}, {-2, -9} } },
	[178] = { .set = { {4, -5}, {2, -3}, {4, -3}, {1, -10} } },
	[179] = { .set = { {1, -8}, {3, -8}, {4, -7}, {-2, -8} } },
	[180] = { .set = { {3, -14}, {2, -12}, {5, -12}, {-2, -9} } },
	[181] = { .set = { {2, -8}, {-1, -4}, {1, -5}, {0, -9} } },
	[182] = { .set = { {-1, -10}, {1, -9}, {-2, -9}, {-1, -9} } },
	[183] = { .set = { {-1, -12}, {1, -12}, {-3, -12}, {-1, -5} } },
	[184] = { .set = { {-1, -7}, {1, -6}, {-2, -5}, {-1, -10} } },
	[185] = { .set = { {-2, -8}, {-4, -8}, {-5, -7}, {1, -8} } },
	[186] = { .set = { {-4, -14}, {-3, -12}, {-6, -12}, {1, -9} } },
	[187] = { .set = { {-3, -8}, {0, -4}, {-2, -5}, {-1, -9} } },
	[188] = { .set = { {-6, -7}, {-8, -4}, {-8, -5}, {0, -8} } },
	[189] = { .set = { {-5, -12}, {-8, -8}, {-9, -9}, {0, -9} } },
	[190] = { .set = { {-5, -5}, {-3, -3}, {-5, -3}, {-2, -10} } },
	[191] = { .set = { {-3, -6}, {-5, -2}, {-3, -4}, {0, -8} } },
	[192] = { .set = { {-2, -9}, {-5, -7}, {-2, -6}, {2, -7} } },
	[193] = { .set = { {-4, -3}, {-5, -2}, {-4, -1}, {-1, -8} } },
	[194] = { .set = { {-1, -3}, {-2, 0}, {0, -1}, {-1, -7} } },
	[195] = { .set = { {-4, -2}, {-5, -1}, {-4, 0}, {-1, -7} } },
	[196] = { .set = { {-5, -3}, {-3, -1}, {-5, -1}, {-2, -8} } },
	[197] = { .set = { {-4, -8}, {-1, -4}, {-3, -5}, {-2, -9} } },
	[198] = { .set = { {-1, -6}, {1, -5}, {-2, -4}, {-1, -9} } },
	[199] = { .set = { {3, -8}, {0, -4}, {2, -5}, {1, -9} } },
	[200] = { .set = { {4, -3}, {2, -1}, {4, -1}, {1, -8} } },
	[201] = { .set = { {3, -2}, {4, -1}, {3, 0}, {0, -7} } },
	[202] = { .set = { {-1, -6}, {-2, -2}, {1, -3}, {-1, -8} } },
	[203] = { .set = { {-4, -6}, {-6, -2}, {-4, -4}, {-1, -8} } },
	[204] = { .set = { {-7, -7}, {-9, -4}, {-9, -5}, {-1, -8} } },
	[205] = { .set = { {-3, -9}, {-5, -9}, {-6, -8}, {0, -9} } },
	[206] = { .set = { {-1, -10}, {1, -9}, {-2, -9}, {-1, -9} } },
	[207] = { .set = { {1, -9}, {3, -9}, {4, -8}, {-2, -9} } },
	[208] = { .set = { {5, -7}, {7, -4}, {7, -5}, {-1, -8} } },
	[209] = { .set = { {2, -6}, {4, -2}, {2, -4}, {-1, -8} } },
};

static const ax_anim *const sSnoruntAnimTable1[] = {
	gAxSharedAnim_02602,
	gAxSharedAnim_02678,
	gAxSharedAnim_02687,
	gAxSharedAnim_02696,
	gAxSharedAnim_02614,
	gAxSharedAnim_02636,
	gAxSharedAnim_02649,
	gAxSharedAnim_02658,
};

static const ax_anim *const sSnoruntAnimTable2[] = {
	sSnoruntAnims_2_1,
	sSnoruntAnims_2_2,
	gAxSharedAnim_01834,
	sSnoruntAnims_2_4,
	sSnoruntAnims_2_5,
	sSnoruntAnims_2_6,
	gAxSharedAnim_01941,
	sSnoruntAnims_2_8,
};

static const ax_anim *const sSnoruntAnimTable3[] = {
	sSnoruntAnims_3_1,
	sSnoruntAnims_3_2,
	sSnoruntAnims_3_3,
	sSnoruntAnims_3_4,
	sSnoruntAnims_3_5,
	sSnoruntAnims_3_6,
	sSnoruntAnims_3_7,
	sSnoruntAnims_3_8,
};

static const ax_anim *const sSnoruntAnimTable4[] = {
	gAxSharedAnim_02226,
	gAxSharedAnim_02254,
	gAxSharedAnim_02282,
	gAxSharedAnim_02307,
	gAxSharedAnim_00160,
	gAxSharedAnim_00181,
	gAxSharedAnim_00206,
	gAxSharedAnim_00236,
};

static const ax_anim *const sSnoruntAnimTable5[] = {
	gAxSharedAnim_00249,
	gAxSharedAnim_00309,
	gAxSharedAnim_00301,
	gAxSharedAnim_00294,
	gAxSharedAnim_00285,
	gAxSharedAnim_00276,
	gAxSharedAnim_00270,
	gAxSharedAnim_00258,
};

static const ax_anim *const sSnoruntAnimTable6[] = {
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
};

static const ax_anim *const sSnoruntAnimTable7[] = {
	gAxSharedAnim_00330,
	gAxSharedAnim_00340,
	gAxSharedAnim_00348,
	gAxSharedAnim_00356,
	gAxSharedAnim_00368,
	gAxSharedAnim_00376,
	gAxSharedAnim_00383,
	gAxSharedAnim_00390,
};

static const ax_anim *const sSnoruntAnimTable8[] = {
	sSnoruntAnims_8_1,
	sSnoruntAnims_8_2,
	sSnoruntAnims_8_3,
	sSnoruntAnims_8_4,
	sSnoruntAnims_8_5,
	sSnoruntAnims_8_6,
	sSnoruntAnims_8_7,
	sSnoruntAnims_8_8,
};

static const ax_anim *const sSnoruntAnimTable9[] = {
	sSnoruntAnims_9_1,
	sSnoruntAnims_9_2,
	sSnoruntAnims_9_3,
	sSnoruntAnims_9_4,
	sSnoruntAnims_9_5,
	sSnoruntAnims_9_6,
	sSnoruntAnims_9_7,
	sSnoruntAnims_9_8,
};

static const ax_anim *const sSnoruntAnimTable10[] = {
	gAxSharedAnim_00705,
	gAxSharedAnim_00714,
	gAxSharedAnim_00725,
	gAxSharedAnim_00737,
	gAxSharedAnim_00750,
	gAxSharedAnim_00760,
	gAxSharedAnim_00772,
	gAxSharedAnim_00781,
};

static const ax_anim *const sSnoruntAnimTable11[] = {
	gAxSharedAnim_00792,
	gAxSharedAnim_00835,
	gAxSharedAnim_00872,
	gAxSharedAnim_00912,
	gAxSharedAnim_00950,
	gAxSharedAnim_00987,
	gAxSharedAnim_01042,
	gAxSharedAnim_01086,
};

static const ax_anim *const sSnoruntAnimTable12[] = {
	gAxSharedAnim_01147,
	gAxSharedAnim_01230,
	gAxSharedAnim_01208,
	gAxSharedAnim_01194,
	gAxSharedAnim_01193,
	gAxSharedAnim_01181,
	gAxSharedAnim_01161,
	gAxSharedAnim_01148,
};

static const ax_anim *const sSnoruntAnimTable13[] = {
	gAxSharedAnim_01242,
	gAxSharedAnim_01323,
	gAxSharedAnim_01314,
	gAxSharedAnim_01301,
	gAxSharedAnim_01286,
	gAxSharedAnim_01278,
	gAxSharedAnim_01267,
	gAxSharedAnim_01253,
};

static const ax_anim *const *const sAxAnimationsSnorunt[] = {
	sSnoruntAnimTable1,
	sSnoruntAnimTable2,
	sSnoruntAnimTable3,
	sSnoruntAnimTable4,
	sSnoruntAnimTable5,
	sSnoruntAnimTable6,
	sSnoruntAnimTable7,
	sSnoruntAnimTable8,
	sSnoruntAnimTable9,
	sSnoruntAnimTable10,
	sSnoruntAnimTable11,
	sSnoruntAnimTable12,
	sSnoruntAnimTable13,
};

static const ax_sprite *const sAxSpritesSnorunt[] = {
	sSnoruntSprites1,
	sSnoruntSprites2,
	sSnoruntSprites3,
	sSnoruntSprites4,
	sSnoruntSprites5,
	sSnoruntSprites6,
	sSnoruntSprites7,
	sSnoruntSprites8,
	sSnoruntSprites9,
	sSnoruntSprites10,
	sSnoruntSprites11,
	sSnoruntSprites12,
	sSnoruntSprites13,
	sSnoruntSprites14,
	sSnoruntSprites15,
	sSnoruntSprites16,
	sSnoruntSprites17,
	sSnoruntSprites18,
	sSnoruntSprites19,
	sSnoruntSprites20,
	sSnoruntSprites21,
	sSnoruntSprites22,
	sSnoruntSprites23,
	sSnoruntSprites24,
	sSnoruntSprites25,
	sSnoruntSprites26,
	sSnoruntSprites27,
	sSnoruntSprites28,
	sSnoruntSprites29,
	sSnoruntSprites30,
	sSnoruntSprites31,
	sSnoruntSprites32,
	sSnoruntSprites33,
	sSnoruntSprites34,
	sSnoruntSprites35,
};

static const axmain sAxMainSnorunt = {
	.poses = sAxPosesSnorunt,
	.animations = sAxAnimationsSnorunt,
	.animCount = ARRAY_COUNT(sAxAnimationsSnorunt),
	.spriteData = sAxSpritesSnorunt,
	.positions = sAxPositionsSnorunt,
};
