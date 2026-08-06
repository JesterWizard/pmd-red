/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainBagon;
const SiroArchive gAxBagon = {"SIRO", &sAxMainBagon};

static const ax_pose sBagonPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose5[] = {
	AX_POSE(4, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose6[] = {
	AX_POSE(5, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose12[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose15[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose16[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose17[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose18[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose19[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose22[] = {
	AX_POSE(3, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose23[] = {
	AX_POSE(4, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose24[] = {
	AX_POSE(5, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose28[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose29[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose33[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose34[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose38[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose39[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose43[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose44[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose48[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose49[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose53[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose54[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose58[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose59[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose63[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose64[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose70[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose76[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose82[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose88[] = {
	AX_POSE(28, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose94[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose100[] = {
	AX_POSE(28, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose106[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose112[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose115[] = {
	AX_POSE(30, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose118[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose121[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose124[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose127[] = {
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose130[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose133[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose136[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose161[] = {
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose162[] = {
	AX_POSE(36, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose163[] = {
	AX_POSE(37, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose164[] = {
	AX_POSE(38, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose165[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose166[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose167[] = {
	AX_POSE(41, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose168[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose169[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose170[] = {
	AX_POSE(38, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose195[] = {
	AX_POSE(0, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose196[] = {
	AX_POSE(3, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose197[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose198[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose199[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose200[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose201[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose202[] = {
	AX_POSE(3, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose205[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose206[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose207[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose208[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose209[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose213[] = {
	AX_POSE(15, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose219[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose222[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose225[] = {
	AX_POSE(23, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose228[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose231[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose236[] = {
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose237[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose238[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose239[] = {
	AX_POSE(34, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose240[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose241[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBagonPose242[] = {
	AX_POSE(31, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sBagonAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 28, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 33, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 30, .offset = {6, 7}, .shadow = {6, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {13, 15}, .shadow = {13, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {17, 20}, .shadow = {17, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {18, 20}, .shadow = {18, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {17, 20}, .shadow = {17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 20}, .shadow = {18, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {8, 9}, .shadow = {8, 9} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 38, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 35, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {13, 0}, .shadow = {13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {8, 0}, .shadow = {8, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-1, 2}, .shadow = {-1, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 43, .offset = {-1, 2}, .shadow = {-1, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 40, .offset = {6, -7}, .shadow = {6, -7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {10, -15}, .shadow = {11, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {14, -20}, .shadow = {15, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 42, .offset = {16, -20}, .shadow = {16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {15, -20}, .shadow = {15, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {16, -20}, .shadow = {16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {8, -9}, .shadow = {8, -9} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 48, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 45, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 53, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 50, .offset = {-6, -7}, .shadow = {-6, -7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {-10, -15}, .shadow = {-11, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-14, -20}, .shadow = {-15, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {-16, -20}, .shadow = {-16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-15, -20}, .shadow = {-15, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-16, -20}, .shadow = {-16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-8, -9}, .shadow = {-8, -9} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 58, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 55, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {-13, 0}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 57, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-8, 0}, .shadow = {-8, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 63, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 60, .offset = {-6, 7}, .shadow = {-6, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {-13, 15}, .shadow = {-13, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-18, 20}, .shadow = {-18, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 62, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-18, 20}, .shadow = {-18, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {-8, 9}, .shadow = {-8, 9} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 69, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, 3}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 69, .offset = {0, 7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {0, 14}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 75, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 75, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 2, .poseId = 75, .offset = {8, 8}, .shadow = {8, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {14, 14}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {19, 20}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 73, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {19, 20}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {7, 8}, .shadow = {7, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 81, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 81, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {14, 0}, .shadow = {14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {5, 0}, .shadow = {5, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 87, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 87, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 1, .unkFlags = 2, .poseId = 87, .offset = {6, -8}, .shadow = {6, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {11, -14}, .shadow = {11, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {16, -20}, .shadow = {16, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 85, .offset = {17, -19}, .shadow = {17, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {16, -20}, .shadow = {16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {17, -19}, .shadow = {17, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {6, -7}, .shadow = {6, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 93, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 2, .poseId = 93, .offset = {0, -7}, .shadow = {0, -7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {-1, -19}, .shadow = {-1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-1, -19}, .shadow = {-1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -5}, .shadow = {0, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 99, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 1, .unkFlags = 2, .poseId = 99, .offset = {-6, -8}, .shadow = {-6, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {-11, -14}, .shadow = {-11, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {-16, -20}, .shadow = {-16, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 97, .offset = {-17, -19}, .shadow = {-17, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {-16, -20}, .shadow = {-16, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {-17, -19}, .shadow = {-17, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-6, -7}, .shadow = {-6, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 105, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 105, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {-14, 0}, .shadow = {-14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-5, 0}, .shadow = {-5, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 111, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 2, .poseId = 111, .offset = {-8, 8}, .shadow = {-8, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-14, 14}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 109, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-7, 8}, .shadow = {-7, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, -1}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 113, .offset = {0, -2}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 114, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 116, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 117, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 119, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 120, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 122, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 123, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 125, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 126, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 128, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 129, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 131, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 132, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 134, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 135, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 146, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 149, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 152, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 155, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 158, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_8_1[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_8_2[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_8_3[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_8_4[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_8_5[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 184, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 184, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_8_6[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_8_7[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_8_8[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 195, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {9, 11}, .shadow = {9, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {7, 17}, .shadow = {7, 17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 198, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 199, .offset = {-7, 17}, .shadow = {-7, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {-9, 11}, .shadow = {-9, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {21, 12}, .shadow = {21, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 198, .offset = {11, 20}, .shadow = {11, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 196, .offset = {21, -2}, .shadow = {21, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 197, .offset = {18, 4}, .shadow = {18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {14, -21}, .shadow = {14, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 195, .offset = {21, -19}, .shadow = {21, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 196, .offset = {22, -13}, .shadow = {22, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {-7, -17}, .shadow = {-7, -17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 194, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 195, .offset = {7, -17}, .shadow = {7, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {-14, -21}, .shadow = {-14, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 201, .offset = {-21, -19}, .shadow = {-21, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 200, .offset = {-22, -13}, .shadow = {-22, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 195, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 200, .offset = {-21, -2}, .shadow = {-21, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 199, .offset = {-18, 4}, .shadow = {-18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {-21, 12}, .shadow = {-21, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 199, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 198, .offset = {-11, 20}, .shadow = {-11, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 211, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 211, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 211, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 210, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 212, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 212, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 212, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 214, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 214, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 214, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 213, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 215, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 215, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 215, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 215, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 216, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 217, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 217, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 216, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 218, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 220, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 220, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 220, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 219, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 221, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 221, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 221, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 221, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 223, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 223, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 223, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 223, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 222, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 224, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 226, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 226, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 226, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 226, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 225, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 227, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 227, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 227, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 227, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 228, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 229, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 229, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 229, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 229, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 228, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 230, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 230, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 230, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 230, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBagonAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 231, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 232, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 232, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 232, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 232, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 231, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 233, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 233, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 233, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sBagonGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_1.4bpp.lz");
static const ax_sprite sBagonSprites1[] = {
	{sBagonGfx1, ARRAY_COUNT(sBagonGfx1)}, 
	{NULL, 0}
};
static const u8 sBagonGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_2.4bpp.lz");
static const ax_sprite sBagonSprites2[] = {
	{sBagonGfx2, ARRAY_COUNT(sBagonGfx2)}, 
	{NULL, 0}
};
static const u8 sBagonGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_3.4bpp.lz");
static const ax_sprite sBagonSprites3[] = {
	{sBagonGfx3, ARRAY_COUNT(sBagonGfx3)}, 
	{NULL, 0}
};
static const u8 sBagonGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_4.4bpp.lz");
static const ax_sprite sBagonSprites4[] = {
	{sBagonGfx4, ARRAY_COUNT(sBagonGfx4)}, 
	{NULL, 0}
};
static const u8 sBagonGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_5.4bpp.lz");
static const ax_sprite sBagonSprites5[] = {
	{sBagonGfx5, ARRAY_COUNT(sBagonGfx5)}, 
	{NULL, 0}
};
static const u8 sBagonGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_6.4bpp.lz");
static const ax_sprite sBagonSprites6[] = {
	{sBagonGfx6, ARRAY_COUNT(sBagonGfx6)}, 
	{NULL, 0}
};
static const u8 sBagonGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_7.4bpp.lz");
static const ax_sprite sBagonSprites7[] = {
	{sBagonGfx7, ARRAY_COUNT(sBagonGfx7)}, 
	{NULL, 0}
};
static const u8 sBagonGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_8.4bpp.lz");
static const ax_sprite sBagonSprites8[] = {
	{sBagonGfx8, ARRAY_COUNT(sBagonGfx8)}, 
	{NULL, 0}
};
static const u8 sBagonGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_9.4bpp.lz");
static const ax_sprite sBagonSprites9[] = {
	{sBagonGfx9, ARRAY_COUNT(sBagonGfx9)}, 
	{NULL, 0}
};
static const u8 sBagonGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_10.4bpp.lz");
static const ax_sprite sBagonSprites10[] = {
	{sBagonGfx10, ARRAY_COUNT(sBagonGfx10)}, 
	{NULL, 0}
};
static const u8 sBagonGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_11.4bpp.lz");
static const ax_sprite sBagonSprites11[] = {
	{sBagonGfx11, ARRAY_COUNT(sBagonGfx11)}, 
	{NULL, 0}
};
static const u8 sBagonGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_12.4bpp.lz");
static const ax_sprite sBagonSprites12[] = {
	{sBagonGfx12, ARRAY_COUNT(sBagonGfx12)}, 
	{NULL, 0}
};
static const u8 sBagonGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_13.4bpp.lz");
static const ax_sprite sBagonSprites13[] = {
	{sBagonGfx13, ARRAY_COUNT(sBagonGfx13)}, 
	{NULL, 0}
};
static const u8 sBagonGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_14.4bpp.lz");
static const ax_sprite sBagonSprites14[] = {
	{sBagonGfx14, ARRAY_COUNT(sBagonGfx14)}, 
	{NULL, 0}
};
static const u8 sBagonGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_15.4bpp.lz");
static const ax_sprite sBagonSprites15[] = {
	{sBagonGfx15, ARRAY_COUNT(sBagonGfx15)}, 
	{NULL, 0}
};
static const u8 sBagonGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_16.4bpp.lz");
static const u8 sBagonGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_16_1.4bpp.lz");
static const u8 sBagonGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_16_2.4bpp.lz");
static const u8 sBagonGfx16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_16_3.4bpp.lz");
static const ax_sprite sBagonSprites16[] = {
	{NULL, 32}, 
	{sBagonGfx16, ARRAY_COUNT(sBagonGfx16)}, 
	{NULL, 64}, 
	{sBagonGfx16_1, ARRAY_COUNT(sBagonGfx16_1)}, 
	{NULL, 32}, 
	{sBagonGfx16_2, ARRAY_COUNT(sBagonGfx16_2)}, 
	{NULL, 32}, 
	{sBagonGfx16_3, ARRAY_COUNT(sBagonGfx16_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sBagonGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_17.4bpp.lz");
static const u8 sBagonGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_17_1.4bpp.lz");
static const u8 sBagonGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_17_2.4bpp.lz");
static const ax_sprite sBagonSprites17[] = {
	{sBagonGfx17, ARRAY_COUNT(sBagonGfx17)}, 
	{NULL, 32}, 
	{sBagonGfx17_1, ARRAY_COUNT(sBagonGfx17_1)}, 
	{NULL, 32}, 
	{sBagonGfx17_2, ARRAY_COUNT(sBagonGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBagonGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_18.4bpp.lz");
static const u8 sBagonGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_18_1.4bpp.lz");
static const u8 sBagonGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_18_2.4bpp.lz");
static const ax_sprite sBagonSprites18[] = {
	{NULL, 32}, 
	{sBagonGfx18, ARRAY_COUNT(sBagonGfx18)}, 
	{NULL, 64}, 
	{sBagonGfx18_1, ARRAY_COUNT(sBagonGfx18_1)}, 
	{NULL, 32}, 
	{sBagonGfx18_2, ARRAY_COUNT(sBagonGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBagonGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_19.4bpp.lz");
static const u8 sBagonGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_19_1.4bpp.lz");
static const u8 sBagonGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_19_2.4bpp.lz");
static const ax_sprite sBagonSprites19[] = {
	{sBagonGfx19, ARRAY_COUNT(sBagonGfx19)}, 
	{NULL, 32}, 
	{sBagonGfx19_1, ARRAY_COUNT(sBagonGfx19_1)}, 
	{NULL, 32}, 
	{sBagonGfx19_2, ARRAY_COUNT(sBagonGfx19_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sBagonGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_20.4bpp.lz");
static const u8 sBagonGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_20_1.4bpp.lz");
static const u8 sBagonGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_20_2.4bpp.lz");
static const ax_sprite sBagonSprites20[] = {
	{sBagonGfx20, ARRAY_COUNT(sBagonGfx20)}, 
	{NULL, 32}, 
	{sBagonGfx20_1, ARRAY_COUNT(sBagonGfx20_1)}, 
	{NULL, 32}, 
	{sBagonGfx20_2, ARRAY_COUNT(sBagonGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBagonGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_21.4bpp.lz");
static const u8 sBagonGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_21_1.4bpp.lz");
static const u8 sBagonGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_21_2.4bpp.lz");
static const u8 sBagonGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_21_3.4bpp.lz");
static const ax_sprite sBagonSprites21[] = {
	{NULL, 32}, 
	{sBagonGfx21, ARRAY_COUNT(sBagonGfx21)}, 
	{NULL, 32}, 
	{sBagonGfx21_1, ARRAY_COUNT(sBagonGfx21_1)}, 
	{NULL, 32}, 
	{sBagonGfx21_2, ARRAY_COUNT(sBagonGfx21_2)}, 
	{NULL, 64}, 
	{sBagonGfx21_3, ARRAY_COUNT(sBagonGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sBagonGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_22.4bpp.lz");
static const u8 sBagonGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_22_1.4bpp.lz");
static const u8 sBagonGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_22_2.4bpp.lz");
static const ax_sprite sBagonSprites22[] = {
	{sBagonGfx22, ARRAY_COUNT(sBagonGfx22)}, 
	{NULL, 64}, 
	{sBagonGfx22_1, ARRAY_COUNT(sBagonGfx22_1)}, 
	{NULL, 32}, 
	{sBagonGfx22_2, ARRAY_COUNT(sBagonGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBagonGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_23.4bpp.lz");
static const u8 sBagonGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_23_1.4bpp.lz");
static const u8 sBagonGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_23_2.4bpp.lz");
static const u8 sBagonGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_23_3.4bpp.lz");
static const ax_sprite sBagonSprites23[] = {
	{sBagonGfx23, ARRAY_COUNT(sBagonGfx23)}, 
	{NULL, 32}, 
	{sBagonGfx23_1, ARRAY_COUNT(sBagonGfx23_1)}, 
	{NULL, 64}, 
	{sBagonGfx23_2, ARRAY_COUNT(sBagonGfx23_2)}, 
	{NULL, 64}, 
	{sBagonGfx23_3, ARRAY_COUNT(sBagonGfx23_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sBagonGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_24.4bpp.lz");
static const u8 sBagonGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_24_1.4bpp.lz");
static const u8 sBagonGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_24_2.4bpp.lz");
static const u8 sBagonGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_24_3.4bpp.lz");
static const ax_sprite sBagonSprites24[] = {
	{sBagonGfx24, ARRAY_COUNT(sBagonGfx24)}, 
	{NULL, 32}, 
	{sBagonGfx24_1, ARRAY_COUNT(sBagonGfx24_1)}, 
	{NULL, 32}, 
	{sBagonGfx24_2, ARRAY_COUNT(sBagonGfx24_2)}, 
	{NULL, 32}, 
	{sBagonGfx24_3, ARRAY_COUNT(sBagonGfx24_3)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sBagonGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_25.4bpp.lz");
static const u8 sBagonGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_25_1.4bpp.lz");
static const u8 sBagonGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_25_2.4bpp.lz");
static const u8 sBagonGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_25_3.4bpp.lz");
static const ax_sprite sBagonSprites25[] = {
	{sBagonGfx25, ARRAY_COUNT(sBagonGfx25)}, 
	{NULL, 32}, 
	{sBagonGfx25_1, ARRAY_COUNT(sBagonGfx25_1)}, 
	{NULL, 32}, 
	{sBagonGfx25_2, ARRAY_COUNT(sBagonGfx25_2)}, 
	{NULL, 32}, 
	{sBagonGfx25_3, ARRAY_COUNT(sBagonGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sBagonGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_26.4bpp.lz");
static const u8 sBagonGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_26_1.4bpp.lz");
static const u8 sBagonGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_26_2.4bpp.lz");
static const ax_sprite sBagonSprites26[] = {
	{sBagonGfx26, ARRAY_COUNT(sBagonGfx26)}, 
	{NULL, 32}, 
	{sBagonGfx26_1, ARRAY_COUNT(sBagonGfx26_1)}, 
	{NULL, 32}, 
	{sBagonGfx26_2, ARRAY_COUNT(sBagonGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBagonGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_27.4bpp.lz");
static const u8 sBagonGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_27_1.4bpp.lz");
static const u8 sBagonGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_27_2.4bpp.lz");
static const u8 sBagonGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_27_3.4bpp.lz");
static const ax_sprite sBagonSprites27[] = {
	{sBagonGfx27, ARRAY_COUNT(sBagonGfx27)}, 
	{NULL, 32}, 
	{sBagonGfx27_1, ARRAY_COUNT(sBagonGfx27_1)}, 
	{NULL, 32}, 
	{sBagonGfx27_2, ARRAY_COUNT(sBagonGfx27_2)}, 
	{NULL, 96}, 
	{sBagonGfx27_3, ARRAY_COUNT(sBagonGfx27_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sBagonGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_28.4bpp.lz");
static const u8 sBagonGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_28_1.4bpp.lz");
static const u8 sBagonGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_28_2.4bpp.lz");
static const ax_sprite sBagonSprites28[] = {
	{NULL, 32}, 
	{sBagonGfx28, ARRAY_COUNT(sBagonGfx28)}, 
	{NULL, 32}, 
	{sBagonGfx28_1, ARRAY_COUNT(sBagonGfx28_1)}, 
	{NULL, 32}, 
	{sBagonGfx28_2, ARRAY_COUNT(sBagonGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBagonGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_29.4bpp.lz");
static const u8 sBagonGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_29_1.4bpp.lz");
static const u8 sBagonGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_29_2.4bpp.lz");
static const u8 sBagonGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_29_3.4bpp.lz");
static const ax_sprite sBagonSprites29[] = {
	{sBagonGfx29, ARRAY_COUNT(sBagonGfx29)}, 
	{NULL, 32}, 
	{sBagonGfx29_1, ARRAY_COUNT(sBagonGfx29_1)}, 
	{NULL, 64}, 
	{sBagonGfx29_2, ARRAY_COUNT(sBagonGfx29_2)}, 
	{NULL, 64}, 
	{sBagonGfx29_3, ARRAY_COUNT(sBagonGfx29_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sBagonGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_30.4bpp.lz");
static const u8 sBagonGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_30_1.4bpp.lz");
static const u8 sBagonGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_30_2.4bpp.lz");
static const ax_sprite sBagonSprites30[] = {
	{sBagonGfx30, ARRAY_COUNT(sBagonGfx30)}, 
	{NULL, 32}, 
	{sBagonGfx30_1, ARRAY_COUNT(sBagonGfx30_1)}, 
	{NULL, 32}, 
	{sBagonGfx30_2, ARRAY_COUNT(sBagonGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBagonGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_31.4bpp.lz");
static const u8 sBagonGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_31_1.4bpp.lz");
static const u8 sBagonGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_31_2.4bpp.lz");
static const ax_sprite sBagonSprites31[] = {
	{sBagonGfx31, ARRAY_COUNT(sBagonGfx31)}, 
	{NULL, 32}, 
	{sBagonGfx31_1, ARRAY_COUNT(sBagonGfx31_1)}, 
	{NULL, 32}, 
	{sBagonGfx31_2, ARRAY_COUNT(sBagonGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBagonGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_32.4bpp.lz");
static const u8 sBagonGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_32_1.4bpp.lz");
static const u8 sBagonGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_32_2.4bpp.lz");
static const ax_sprite sBagonSprites32[] = {
	{sBagonGfx32, ARRAY_COUNT(sBagonGfx32)}, 
	{NULL, 64}, 
	{sBagonGfx32_1, ARRAY_COUNT(sBagonGfx32_1)}, 
	{NULL, 32}, 
	{sBagonGfx32_2, ARRAY_COUNT(sBagonGfx32_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sBagonGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_33.4bpp.lz");
static const u8 sBagonGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_33_1.4bpp.lz");
static const ax_sprite sBagonSprites33[] = {
	{sBagonGfx33, ARRAY_COUNT(sBagonGfx33)}, 
	{NULL, 32}, 
	{sBagonGfx33_1, ARRAY_COUNT(sBagonGfx33_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sBagonGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_34.4bpp.lz");
static const u8 sBagonGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_34_1.4bpp.lz");
static const u8 sBagonGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_34_2.4bpp.lz");
static const u8 sBagonGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_34_3.4bpp.lz");
static const ax_sprite sBagonSprites34[] = {
	{sBagonGfx34, ARRAY_COUNT(sBagonGfx34)}, 
	{NULL, 32}, 
	{sBagonGfx34_1, ARRAY_COUNT(sBagonGfx34_1)}, 
	{NULL, 32}, 
	{sBagonGfx34_2, ARRAY_COUNT(sBagonGfx34_2)}, 
	{NULL, 64}, 
	{sBagonGfx34_3, ARRAY_COUNT(sBagonGfx34_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sBagonGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_35.4bpp.lz");
static const u8 sBagonGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_35_1.4bpp.lz");
static const u8 sBagonGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_35_2.4bpp.lz");
static const u8 sBagonGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_35_3.4bpp.lz");
static const u8 sBagonGfx35_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_35_4.4bpp.lz");
static const ax_sprite sBagonSprites35[] = {
	{sBagonGfx35, ARRAY_COUNT(sBagonGfx35)}, 
	{NULL, 32}, 
	{sBagonGfx35_1, ARRAY_COUNT(sBagonGfx35_1)}, 
	{NULL, 32}, 
	{sBagonGfx35_2, ARRAY_COUNT(sBagonGfx35_2)}, 
	{NULL, 32}, 
	{sBagonGfx35_3, ARRAY_COUNT(sBagonGfx35_3)}, 
	{NULL, 32}, 
	{sBagonGfx35_4, ARRAY_COUNT(sBagonGfx35_4)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sBagonGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_36.4bpp.lz");
static const ax_sprite sBagonSprites36[] = {
	{sBagonGfx36, ARRAY_COUNT(sBagonGfx36)}, 
	{NULL, 0}
};
static const u8 sBagonGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_37.4bpp.lz");
static const ax_sprite sBagonSprites37[] = {
	{sBagonGfx37, ARRAY_COUNT(sBagonGfx37)}, 
	{NULL, 0}
};
static const u8 sBagonGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_38.4bpp.lz");
static const ax_sprite sBagonSprites38[] = {
	{sBagonGfx38, ARRAY_COUNT(sBagonGfx38)}, 
	{NULL, 0}
};
static const u8 sBagonGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_39.4bpp.lz");
static const ax_sprite sBagonSprites39[] = {
	{sBagonGfx39, ARRAY_COUNT(sBagonGfx39)}, 
	{NULL, 0}
};
static const u8 sBagonGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_40.4bpp.lz");
static const ax_sprite sBagonSprites40[] = {
	{sBagonGfx40, ARRAY_COUNT(sBagonGfx40)}, 
	{NULL, 0}
};
static const u8 sBagonGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_41.4bpp.lz");
static const ax_sprite sBagonSprites41[] = {
	{sBagonGfx41, ARRAY_COUNT(sBagonGfx41)}, 
	{NULL, 0}
};
static const u8 sBagonGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/bagon/sprite_42.4bpp.lz");
static const ax_sprite sBagonSprites42[] = {
	{sBagonGfx42, ARRAY_COUNT(sBagonGfx42)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesBagon[] = {
	sBagonPose1,
	sBagonPose2,
	sBagonPose3,
	sBagonPose4,
	sBagonPose5,
	sBagonPose6,
	sBagonPose7,
	sBagonPose8,
	sBagonPose9,
	sBagonPose10,
	sBagonPose11,
	sBagonPose12,
	sBagonPose13,
	sBagonPose14,
	sBagonPose15,
	sBagonPose16,
	sBagonPose17,
	sBagonPose18,
	sBagonPose19,
	sBagonPose20,
	sBagonPose21,
	sBagonPose22,
	sBagonPose23,
	sBagonPose24,
	sBagonPose1,
	sBagonPose2,
	sBagonPose3,
	sBagonPose28,
	sBagonPose29,
	sBagonPose4,
	sBagonPose5,
	sBagonPose6,
	sBagonPose33,
	sBagonPose34,
	sBagonPose7,
	sBagonPose8,
	sBagonPose9,
	sBagonPose38,
	sBagonPose39,
	sBagonPose10,
	sBagonPose11,
	sBagonPose12,
	sBagonPose43,
	sBagonPose44,
	sBagonPose13,
	sBagonPose14,
	sBagonPose15,
	sBagonPose48,
	sBagonPose49,
	sBagonPose16,
	sBagonPose17,
	sBagonPose18,
	sBagonPose53,
	sBagonPose54,
	sBagonPose19,
	sBagonPose20,
	sBagonPose21,
	sBagonPose58,
	sBagonPose59,
	sBagonPose22,
	sBagonPose23,
	sBagonPose24,
	sBagonPose63,
	sBagonPose64,
	sBagonPose1,
	sBagonPose2,
	sBagonPose3,
	sBagonPose28,
	sBagonPose29,
	sBagonPose70,
	sBagonPose4,
	sBagonPose5,
	sBagonPose6,
	sBagonPose33,
	sBagonPose34,
	sBagonPose76,
	sBagonPose7,
	sBagonPose8,
	sBagonPose9,
	sBagonPose38,
	sBagonPose39,
	sBagonPose82,
	sBagonPose10,
	sBagonPose11,
	sBagonPose12,
	sBagonPose43,
	sBagonPose44,
	sBagonPose88,
	sBagonPose13,
	sBagonPose14,
	sBagonPose15,
	sBagonPose48,
	sBagonPose49,
	sBagonPose94,
	sBagonPose16,
	sBagonPose17,
	sBagonPose18,
	sBagonPose53,
	sBagonPose54,
	sBagonPose100,
	sBagonPose19,
	sBagonPose20,
	sBagonPose21,
	sBagonPose58,
	sBagonPose59,
	sBagonPose106,
	sBagonPose22,
	sBagonPose23,
	sBagonPose24,
	sBagonPose63,
	sBagonPose64,
	sBagonPose112,
	sBagonPose1,
	sBagonPose29,
	sBagonPose115,
	sBagonPose4,
	sBagonPose34,
	sBagonPose118,
	sBagonPose7,
	sBagonPose39,
	sBagonPose121,
	sBagonPose10,
	sBagonPose44,
	sBagonPose124,
	sBagonPose13,
	sBagonPose49,
	sBagonPose127,
	sBagonPose16,
	sBagonPose54,
	sBagonPose130,
	sBagonPose19,
	sBagonPose59,
	sBagonPose133,
	sBagonPose22,
	sBagonPose64,
	sBagonPose136,
	sBagonPose1,
	sBagonPose70,
	sBagonPose29,
	sBagonPose4,
	sBagonPose76,
	sBagonPose34,
	sBagonPose7,
	sBagonPose82,
	sBagonPose39,
	sBagonPose10,
	sBagonPose88,
	sBagonPose44,
	sBagonPose13,
	sBagonPose94,
	sBagonPose49,
	sBagonPose16,
	sBagonPose100,
	sBagonPose54,
	sBagonPose19,
	sBagonPose106,
	sBagonPose59,
	sBagonPose22,
	sBagonPose112,
	sBagonPose64,
	sBagonPose161,
	sBagonPose162,
	sBagonPose163,
	sBagonPose164,
	sBagonPose165,
	sBagonPose166,
	sBagonPose167,
	sBagonPose168,
	sBagonPose169,
	sBagonPose170,
	sBagonPose1,
	sBagonPose2,
	sBagonPose3,
	sBagonPose4,
	sBagonPose5,
	sBagonPose6,
	sBagonPose7,
	sBagonPose8,
	sBagonPose9,
	sBagonPose10,
	sBagonPose11,
	sBagonPose12,
	sBagonPose13,
	sBagonPose14,
	sBagonPose15,
	sBagonPose16,
	sBagonPose17,
	sBagonPose18,
	sBagonPose19,
	sBagonPose20,
	sBagonPose21,
	sBagonPose22,
	sBagonPose23,
	sBagonPose24,
	sBagonPose195,
	sBagonPose196,
	sBagonPose197,
	sBagonPose198,
	sBagonPose199,
	sBagonPose200,
	sBagonPose201,
	sBagonPose202,
	sBagonPose29,
	sBagonPose34,
	sBagonPose205,
	sBagonPose206,
	sBagonPose207,
	sBagonPose208,
	sBagonPose209,
	sBagonPose64,
	sBagonPose1,
	sBagonPose70,
	sBagonPose213,
	sBagonPose4,
	sBagonPose76,
	sBagonPose33,
	sBagonPose7,
	sBagonPose82,
	sBagonPose219,
	sBagonPose10,
	sBagonPose88,
	sBagonPose222,
	sBagonPose13,
	sBagonPose94,
	sBagonPose225,
	sBagonPose16,
	sBagonPose100,
	sBagonPose228,
	sBagonPose19,
	sBagonPose106,
	sBagonPose231,
	sBagonPose22,
	sBagonPose112,
	sBagonPose63,
	sBagonPose115,
	sBagonPose236,
	sBagonPose237,
	sBagonPose238,
	sBagonPose239,
	sBagonPose240,
	sBagonPose241,
	sBagonPose242,
	sBagonPose1,
	sBagonPose22,
	sBagonPose19,
	sBagonPose16,
	sBagonPose13,
	sBagonPose10,
	sBagonPose7,
	sBagonPose4,
};

static const struct PositionSets sAxPositionsBagon[] = {
	[0] = { .set = { {0, -6}, {-5, -5}, {5, -5}, {0, -9} } },
	[1] = { .set = { {1, -5}, {-7, -6}, {3, -4}, {0, -9} } },
	[2] = { .set = { {-1, -5}, {-3, -4}, {7, -6}, {0, -9} } },
	[3] = { .set = { {4, -7}, {6, -5}, {-2, -5}, {0, -7} } },
	[4] = { .set = { {3, -6}, {3, -5}, {-1, -5}, {0, -6} } },
	[5] = { .set = { {3, -6}, {4, -5}, {-5, -5}, {0, -6} } },
	[6] = { .set = { {8, -9}, {3, -7}, {2, -6}, {1, -7} } },
	[7] = { .set = { {6, -7}, {-1, -6}, {3, -5}, {0, -6} } },
	[8] = { .set = { {8, -9}, {6, -5}, {1, -4}, {-1, -6} } },
	[9] = { .set = { {5, -10}, {-4, -10}, {4, -6}, {-1, -7} } },
	[10] = { .set = { {6, -9}, {-5, -9}, {5, -6}, {-1, -6} } },
	[11] = { .set = { {4, -10}, {0, -10}, {2, -5}, {-1, -6} } },
	[12] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -8} } },
	[13] = { .set = { {-1, -12}, {6, -7}, {-4, -9}, {0, -7} } },
	[14] = { .set = { {1, -12}, {4, -9}, {-6, -7}, {0, -7} } },
	[15] = { .set = { {-5, -10}, {4, -10}, {-4, -6}, {1, -7} } },
	[16] = { .set = { {-6, -9}, {5, -9}, {-5, -6}, {1, -6} } },
	[17] = { .set = { {-4, -10}, {0, -10}, {-2, -5}, {1, -6} } },
	[18] = { .set = { {-8, -9}, {-3, -7}, {-2, -6}, {-1, -7} } },
	[19] = { .set = { {-6, -7}, {1, -6}, {-3, -5}, {0, -6} } },
	[20] = { .set = { {-8, -9}, {-6, -5}, {-1, -4}, {1, -6} } },
	[21] = { .set = { {-4, -7}, {-6, -5}, {2, -5}, {0, -7} } },
	[22] = { .set = { {-3, -6}, {-3, -5}, {1, -5}, {0, -6} } },
	[23] = { .set = { {-3, -6}, {-4, -5}, {5, -5}, {0, -6} } },
	[24] = { .set = { {0, -6}, {-5, -5}, {5, -5}, {0, -9} } },
	[25] = { .set = { {1, -5}, {-7, -6}, {3, -4}, {0, -9} } },
	[26] = { .set = { {-1, -5}, {-3, -4}, {7, -6}, {0, -9} } },
	[27] = { .set = { {0, 2}, {-7, -1}, {5, -1}, {0, -5} } },
	[28] = { .set = { {0, -13}, {-6, -9}, {6, -9}, {0, -7} } },
	[29] = { .set = { {4, -7}, {6, -5}, {-2, -5}, {0, -7} } },
	[30] = { .set = { {3, -6}, {3, -5}, {-1, -5}, {0, -6} } },
	[31] = { .set = { {3, -6}, {4, -5}, {-5, -5}, {0, -6} } },
	[32] = { .set = { {1, -1}, {5, -5}, {-2, -2}, {-1, -7} } },
	[33] = { .set = { {4, -13}, {5, -10}, {-4, -9}, {0, -6} } },
	[34] = { .set = { {8, -9}, {3, -7}, {2, -6}, {1, -7} } },
	[35] = { .set = { {6, -7}, {-1, -6}, {3, -5}, {0, -6} } },
	[36] = { .set = { {8, -9}, {6, -5}, {1, -4}, {-1, -6} } },
	[37] = { .set = { {5, -2}, {4, -6}, {2, -3}, {0, -6} } },
	[38] = { .set = { {4, -14}, {4, -11}, {2, -10}, {-2, -7} } },
	[39] = { .set = { {5, -10}, {-4, -10}, {4, -6}, {-1, -7} } },
	[40] = { .set = { {6, -9}, {-5, -9}, {5, -6}, {-1, -6} } },
	[41] = { .set = { {4, -10}, {0, -10}, {2, -5}, {-1, -6} } },
	[42] = { .set = { {6, -5}, {-1, -8}, {5, -3}, {2, -8} } },
	[43] = { .set = { {5, -15}, {-4, -13}, {4, -11}, {-2, -8} } },
	[44] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -8} } },
	[45] = { .set = { {-1, -12}, {6, -7}, {-4, -9}, {0, -7} } },
	[46] = { .set = { {1, -12}, {4, -9}, {-6, -7}, {0, -7} } },
	[47] = { .set = { {0, -8}, {5, -8}, {-5, -8}, {0, -7} } },
	[48] = { .set = { {0, -18}, {6, -11}, {-6, -11}, {0, -8} } },
	[49] = { .set = { {-5, -10}, {4, -10}, {-4, -6}, {1, -7} } },
	[50] = { .set = { {-6, -9}, {5, -9}, {-5, -6}, {1, -6} } },
	[51] = { .set = { {-4, -10}, {0, -10}, {-2, -5}, {1, -6} } },
	[52] = { .set = { {-6, -5}, {1, -8}, {-5, -3}, {-2, -8} } },
	[53] = { .set = { {-5, -15}, {4, -13}, {-4, -11}, {2, -8} } },
	[54] = { .set = { {-8, -9}, {-3, -7}, {-2, -6}, {-1, -7} } },
	[55] = { .set = { {-6, -7}, {1, -6}, {-3, -5}, {0, -6} } },
	[56] = { .set = { {-8, -9}, {-6, -5}, {-1, -4}, {1, -6} } },
	[57] = { .set = { {-5, -2}, {-4, -6}, {-2, -3}, {0, -6} } },
	[58] = { .set = { {-4, -14}, {-4, -11}, {-2, -10}, {2, -7} } },
	[59] = { .set = { {-4, -7}, {-6, -5}, {2, -5}, {0, -7} } },
	[60] = { .set = { {-3, -6}, {-3, -5}, {1, -5}, {0, -6} } },
	[61] = { .set = { {-3, -6}, {-4, -5}, {5, -5}, {0, -6} } },
	[62] = { .set = { {-1, -1}, {-5, -5}, {2, -2}, {1, -7} } },
	[63] = { .set = { {-4, -13}, {-5, -10}, {4, -9}, {0, -6} } },
	[64] = { .set = { {0, -6}, {-5, -5}, {5, -5}, {0, -9} } },
	[65] = { .set = { {1, -5}, {-7, -6}, {3, -4}, {0, -9} } },
	[66] = { .set = { {-1, -5}, {-3, -4}, {7, -6}, {0, -9} } },
	[67] = { .set = { {0, 2}, {-7, -1}, {5, -1}, {0, -5} } },
	[68] = { .set = { {0, -13}, {-6, -9}, {6, -9}, {0, -7} } },
	[69] = { .set = { {0, -15}, {-5, -12}, {5, -12}, {0, -7} } },
	[70] = { .set = { {4, -7}, {6, -5}, {-2, -5}, {0, -7} } },
	[71] = { .set = { {3, -6}, {3, -5}, {-1, -5}, {0, -6} } },
	[72] = { .set = { {3, -6}, {4, -5}, {-5, -5}, {0, -6} } },
	[73] = { .set = { {1, -1}, {5, -5}, {-2, -2}, {-1, -7} } },
	[74] = { .set = { {4, -13}, {5, -10}, {-4, -9}, {0, -6} } },
	[75] = { .set = { {-1, -15}, {4, -13}, {-4, -12}, {0, -8} } },
	[76] = { .set = { {8, -9}, {3, -7}, {2, -6}, {1, -7} } },
	[77] = { .set = { {6, -7}, {-1, -6}, {3, -5}, {0, -6} } },
	[78] = { .set = { {8, -9}, {6, -5}, {1, -4}, {-1, -6} } },
	[79] = { .set = { {5, -2}, {4, -6}, {2, -3}, {0, -6} } },
	[80] = { .set = { {4, -14}, {4, -11}, {2, -10}, {-2, -7} } },
	[81] = { .set = { {-2, -16}, {-1, -14}, {0, -12}, {-3, -8} } },
	[82] = { .set = { {5, -10}, {-4, -10}, {4, -6}, {-1, -7} } },
	[83] = { .set = { {6, -9}, {-5, -9}, {5, -6}, {-1, -6} } },
	[84] = { .set = { {4, -10}, {0, -10}, {2, -5}, {-1, -6} } },
	[85] = { .set = { {6, -5}, {-1, -8}, {5, -3}, {2, -8} } },
	[86] = { .set = { {5, -15}, {-4, -13}, {4, -11}, {-2, -8} } },
	[87] = { .set = { {3, -16}, {-6, -15}, {3, -13}, {-2, -9} } },
	[88] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -8} } },
	[89] = { .set = { {-1, -12}, {6, -7}, {-4, -9}, {0, -7} } },
	[90] = { .set = { {1, -12}, {4, -9}, {-6, -7}, {0, -7} } },
	[91] = { .set = { {0, -8}, {5, -8}, {-5, -8}, {0, -7} } },
	[92] = { .set = { {0, -18}, {6, -11}, {-6, -11}, {0, -8} } },
	[93] = { .set = { {0, -18}, {6, -12}, {-6, -12}, {0, -7} } },
	[94] = { .set = { {-5, -10}, {4, -10}, {-4, -6}, {1, -7} } },
	[95] = { .set = { {-6, -9}, {5, -9}, {-5, -6}, {1, -6} } },
	[96] = { .set = { {-4, -10}, {0, -10}, {-2, -5}, {1, -6} } },
	[97] = { .set = { {-6, -5}, {1, -8}, {-5, -3}, {-2, -8} } },
	[98] = { .set = { {-5, -15}, {4, -13}, {-4, -11}, {2, -8} } },
	[99] = { .set = { {-3, -16}, {6, -15}, {-3, -13}, {2, -9} } },
	[100] = { .set = { {-8, -9}, {-3, -7}, {-2, -6}, {-1, -7} } },
	[101] = { .set = { {-6, -7}, {1, -6}, {-3, -5}, {0, -6} } },
	[102] = { .set = { {-8, -9}, {-6, -5}, {-1, -4}, {1, -6} } },
	[103] = { .set = { {-5, -2}, {-4, -6}, {-2, -3}, {0, -6} } },
	[104] = { .set = { {-4, -14}, {-4, -11}, {-2, -10}, {2, -7} } },
	[105] = { .set = { {2, -16}, {1, -14}, {0, -12}, {3, -8} } },
	[106] = { .set = { {-4, -7}, {-6, -5}, {2, -5}, {0, -7} } },
	[107] = { .set = { {-3, -6}, {-3, -5}, {1, -5}, {0, -6} } },
	[108] = { .set = { {-3, -6}, {-4, -5}, {5, -5}, {0, -6} } },
	[109] = { .set = { {-1, -1}, {-5, -5}, {2, -2}, {1, -7} } },
	[110] = { .set = { {-4, -13}, {-5, -10}, {4, -9}, {0, -6} } },
	[111] = { .set = { {1, -15}, {-4, -13}, {4, -12}, {0, -8} } },
	[112] = { .set = { {0, -6}, {-5, -5}, {5, -5}, {0, -9} } },
	[113] = { .set = { {0, -13}, {-6, -9}, {6, -9}, {0, -7} } },
	[114] = { .set = { {0, -6}, {-5, -3}, {5, -3}, {0, -5} } },
	[115] = { .set = { {4, -7}, {6, -5}, {-2, -5}, {0, -7} } },
	[116] = { .set = { {4, -13}, {5, -10}, {-4, -9}, {0, -6} } },
	[117] = { .set = { {6, -7}, {8, -8}, {-1, -6}, {0, -8} } },
	[118] = { .set = { {8, -9}, {3, -7}, {2, -6}, {1, -7} } },
	[119] = { .set = { {4, -14}, {4, -11}, {2, -10}, {-2, -7} } },
	[120] = { .set = { {8, -8}, {4, -9}, {4, -5}, {1, -9} } },
	[121] = { .set = { {5, -10}, {-4, -10}, {4, -6}, {-1, -7} } },
	[122] = { .set = { {5, -15}, {-4, -13}, {4, -11}, {-2, -8} } },
	[123] = { .set = { {7, -11}, {-3, -10}, {6, -6}, {0, -8} } },
	[124] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -8} } },
	[125] = { .set = { {0, -18}, {6, -11}, {-6, -11}, {0, -8} } },
	[126] = { .set = { {0, -11}, {6, -8}, {-6, -8}, {0, -8} } },
	[127] = { .set = { {-5, -10}, {4, -10}, {-4, -6}, {1, -7} } },
	[128] = { .set = { {-5, -15}, {4, -13}, {-4, -11}, {2, -8} } },
	[129] = { .set = { {-7, -11}, {3, -10}, {-6, -6}, {0, -8} } },
	[130] = { .set = { {-8, -9}, {-3, -7}, {-2, -6}, {-1, -7} } },
	[131] = { .set = { {-4, -14}, {-4, -11}, {-2, -10}, {2, -7} } },
	[132] = { .set = { {-8, -8}, {-4, -9}, {-4, -5}, {-1, -9} } },
	[133] = { .set = { {-4, -7}, {-6, -5}, {2, -5}, {0, -7} } },
	[134] = { .set = { {-4, -13}, {-5, -10}, {4, -9}, {0, -6} } },
	[135] = { .set = { {-6, -7}, {-8, -8}, {1, -6}, {0, -8} } },
	[136] = { .set = { {0, -6}, {-5, -5}, {5, -5}, {0, -9} } },
	[137] = { .set = { {0, -15}, {-5, -12}, {5, -12}, {0, -7} } },
	[138] = { .set = { {0, -13}, {-6, -9}, {6, -9}, {0, -7} } },
	[139] = { .set = { {4, -7}, {6, -5}, {-2, -5}, {0, -7} } },
	[140] = { .set = { {-1, -15}, {4, -13}, {-4, -12}, {0, -8} } },
	[141] = { .set = { {4, -13}, {5, -10}, {-4, -9}, {0, -6} } },
	[142] = { .set = { {8, -9}, {3, -7}, {2, -6}, {1, -7} } },
	[143] = { .set = { {-2, -16}, {-1, -14}, {0, -12}, {-3, -8} } },
	[144] = { .set = { {4, -14}, {4, -11}, {2, -10}, {-2, -7} } },
	[145] = { .set = { {5, -10}, {-4, -10}, {4, -6}, {-1, -7} } },
	[146] = { .set = { {3, -16}, {-6, -15}, {3, -13}, {-2, -9} } },
	[147] = { .set = { {5, -15}, {-4, -13}, {4, -11}, {-2, -8} } },
	[148] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -8} } },
	[149] = { .set = { {0, -18}, {6, -12}, {-6, -12}, {0, -7} } },
	[150] = { .set = { {0, -18}, {6, -11}, {-6, -11}, {0, -8} } },
	[151] = { .set = { {-5, -10}, {4, -10}, {-4, -6}, {1, -7} } },
	[152] = { .set = { {-3, -16}, {6, -15}, {-3, -13}, {2, -9} } },
	[153] = { .set = { {-5, -15}, {4, -13}, {-4, -11}, {2, -8} } },
	[154] = { .set = { {-8, -9}, {-3, -7}, {-2, -6}, {-1, -7} } },
	[155] = { .set = { {2, -16}, {1, -14}, {0, -12}, {3, -8} } },
	[156] = { .set = { {-4, -14}, {-4, -11}, {-2, -10}, {2, -7} } },
	[157] = { .set = { {-4, -7}, {-6, -5}, {2, -5}, {0, -7} } },
	[158] = { .set = { {1, -15}, {-4, -13}, {4, -12}, {0, -8} } },
	[159] = { .set = { {-4, -13}, {-5, -10}, {4, -9}, {0, -6} } },
	[160] = { .set = { {-1, -9}, {-4, -5}, {7, -3}, {0, -4} } },
	[161] = { .set = { {-3, -9}, {-4, -5}, {7, -3}, {0, -4} } },
	[162] = { .set = { {-1, -12}, {-9, -8}, {7, -8}, {-1, -10} } },
	[163] = { .set = { {0, -14}, {3, -13}, {-9, -7}, {-3, -8} } },
	[164] = { .set = { {1, -13}, {-5, -8}, {-5, -6}, {-2, -7} } },
	[165] = { .set = { {0, -10}, {-7, -6}, {-1, -4}, {-3, -5} } },
	[166] = { .set = { {0, -10}, {7, -6}, {-7, -6}, {0, -6} } },
	[167] = { .set = { {-1, -10}, {6, -6}, {0, -4}, {2, -5} } },
	[168] = { .set = { {-2, -13}, {4, -8}, {4, -6}, {1, -7} } },
	[169] = { .set = { {-1, -14}, {-4, -13}, {8, -7}, {2, -8} } },
	[170] = { .set = { {0, -6}, {-5, -5}, {5, -5}, {0, -9} } },
	[171] = { .set = { {1, -5}, {-7, -6}, {3, -4}, {0, -9} } },
	[172] = { .set = { {-1, -5}, {-3, -4}, {7, -6}, {0, -9} } },
	[173] = { .set = { {4, -7}, {6, -5}, {-2, -5}, {0, -7} } },
	[174] = { .set = { {3, -6}, {3, -5}, {-1, -5}, {0, -6} } },
	[175] = { .set = { {3, -6}, {4, -5}, {-5, -5}, {0, -6} } },
	[176] = { .set = { {8, -9}, {3, -7}, {2, -6}, {1, -7} } },
	[177] = { .set = { {6, -7}, {-1, -6}, {3, -5}, {0, -6} } },
	[178] = { .set = { {8, -9}, {6, -5}, {1, -4}, {-1, -6} } },
	[179] = { .set = { {5, -10}, {-4, -10}, {4, -6}, {-1, -7} } },
	[180] = { .set = { {6, -9}, {-5, -9}, {5, -6}, {-1, -6} } },
	[181] = { .set = { {4, -10}, {0, -10}, {2, -5}, {-1, -6} } },
	[182] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -8} } },
	[183] = { .set = { {-1, -12}, {6, -7}, {-4, -9}, {0, -7} } },
	[184] = { .set = { {1, -12}, {4, -9}, {-6, -7}, {0, -7} } },
	[185] = { .set = { {-5, -10}, {4, -10}, {-4, -6}, {1, -7} } },
	[186] = { .set = { {-6, -9}, {5, -9}, {-5, -6}, {1, -6} } },
	[187] = { .set = { {-4, -10}, {0, -10}, {-2, -5}, {1, -6} } },
	[188] = { .set = { {-8, -9}, {-3, -7}, {-2, -6}, {-1, -7} } },
	[189] = { .set = { {-6, -7}, {1, -6}, {-3, -5}, {0, -6} } },
	[190] = { .set = { {-8, -9}, {-6, -5}, {-1, -4}, {1, -6} } },
	[191] = { .set = { {-4, -7}, {-6, -5}, {2, -5}, {0, -7} } },
	[192] = { .set = { {-3, -6}, {-3, -5}, {1, -5}, {0, -6} } },
	[193] = { .set = { {-3, -6}, {-4, -5}, {5, -5}, {0, -6} } },
	[194] = { .set = { {-1, -7}, {-6, -6}, {4, -6}, {-1, -10} } },
	[195] = { .set = { {-3, -7}, {-5, -5}, {3, -5}, {1, -7} } },
	[196] = { .set = { {-8, -8}, {-3, -6}, {-2, -5}, {-1, -6} } },
	[197] = { .set = { {-5, -9}, {4, -9}, {-4, -5}, {1, -6} } },
	[198] = { .set = { {0, -12}, {5, -8}, {-5, -8}, {0, -7} } },
	[199] = { .set = { {5, -9}, {-4, -9}, {4, -5}, {-1, -6} } },
	[200] = { .set = { {8, -8}, {3, -6}, {2, -5}, {1, -6} } },
	[201] = { .set = { {3, -8}, {5, -6}, {-3, -6}, {-1, -8} } },
	[202] = { .set = { {0, -13}, {-6, -9}, {6, -9}, {0, -7} } },
	[203] = { .set = { {4, -13}, {5, -10}, {-4, -9}, {0, -6} } },
	[204] = { .set = { {4, -13}, {4, -10}, {2, -9}, {-2, -6} } },
	[205] = { .set = { {5, -14}, {-4, -12}, {4, -10}, {-2, -7} } },
	[206] = { .set = { {0, -17}, {6, -10}, {-6, -10}, {0, -7} } },
	[207] = { .set = { {-5, -14}, {4, -12}, {-4, -10}, {2, -7} } },
	[208] = { .set = { {-4, -13}, {-4, -10}, {-2, -9}, {2, -6} } },
	[209] = { .set = { {-4, -13}, {-5, -10}, {4, -9}, {0, -6} } },
	[210] = { .set = { {0, -6}, {-5, -5}, {5, -5}, {0, -9} } },
	[211] = { .set = { {0, -15}, {-5, -12}, {5, -12}, {0, -7} } },
	[212] = { .set = { {0, 0}, {-7, -3}, {5, -3}, {0, -7} } },
	[213] = { .set = { {4, -7}, {6, -5}, {-2, -5}, {0, -7} } },
	[214] = { .set = { {-1, -15}, {4, -13}, {-4, -12}, {0, -8} } },
	[215] = { .set = { {1, -1}, {5, -5}, {-2, -2}, {-1, -7} } },
	[216] = { .set = { {8, -9}, {3, -7}, {2, -6}, {1, -7} } },
	[217] = { .set = { {-2, -16}, {-1, -14}, {0, -12}, {-3, -8} } },
	[218] = { .set = { {4, -2}, {3, -6}, {1, -3}, {-1, -6} } },
	[219] = { .set = { {5, -10}, {-4, -10}, {4, -6}, {-1, -7} } },
	[220] = { .set = { {3, -16}, {-6, -15}, {3, -13}, {-2, -9} } },
	[221] = { .set = { {5, -5}, {-2, -8}, {4, -3}, {1, -8} } },
	[222] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -8} } },
	[223] = { .set = { {0, -18}, {6, -12}, {-6, -12}, {0, -7} } },
	[224] = { .set = { {0, -7}, {5, -7}, {-5, -7}, {0, -6} } },
	[225] = { .set = { {-5, -10}, {4, -10}, {-4, -6}, {1, -7} } },
	[226] = { .set = { {-3, -16}, {6, -15}, {-3, -13}, {2, -9} } },
	[227] = { .set = { {-5, -5}, {2, -8}, {-4, -3}, {-1, -8} } },
	[228] = { .set = { {-8, -9}, {-3, -7}, {-2, -6}, {-1, -7} } },
	[229] = { .set = { {2, -16}, {1, -14}, {0, -12}, {3, -8} } },
	[230] = { .set = { {-4, -2}, {-3, -6}, {-1, -3}, {1, -6} } },
	[231] = { .set = { {-4, -7}, {-6, -5}, {2, -5}, {0, -7} } },
	[232] = { .set = { {1, -15}, {-4, -13}, {4, -12}, {0, -8} } },
	[233] = { .set = { {-1, -1}, {-5, -5}, {2, -2}, {1, -7} } },
	[234] = { .set = { {0, -6}, {-5, -3}, {5, -3}, {0, -5} } },
	[235] = { .set = { {-6, -6}, {-8, -7}, {1, -5}, {0, -7} } },
	[236] = { .set = { {-8, -6}, {-4, -7}, {-4, -3}, {-1, -7} } },
	[237] = { .set = { {-6, -10}, {4, -9}, {-5, -5}, {1, -7} } },
	[238] = { .set = { {0, -10}, {6, -7}, {-6, -7}, {0, -7} } },
	[239] = { .set = { {6, -10}, {-4, -9}, {5, -5}, {-1, -7} } },
	[240] = { .set = { {8, -6}, {4, -7}, {4, -3}, {1, -7} } },
	[241] = { .set = { {6, -6}, {8, -7}, {-1, -5}, {0, -7} } },
	[242] = { .set = { {0, -6}, {-5, -5}, {5, -5}, {0, -9} } },
	[243] = { .set = { {-4, -7}, {-6, -5}, {2, -5}, {0, -7} } },
	[244] = { .set = { {-8, -9}, {-3, -7}, {-2, -6}, {-1, -7} } },
	[245] = { .set = { {-5, -10}, {4, -10}, {-4, -6}, {1, -7} } },
	[246] = { .set = { {0, -13}, {5, -9}, {-5, -9}, {0, -8} } },
	[247] = { .set = { {5, -10}, {-4, -10}, {4, -6}, {-1, -7} } },
	[248] = { .set = { {8, -9}, {3, -7}, {2, -6}, {1, -7} } },
	[249] = { .set = { {4, -7}, {6, -5}, {-2, -5}, {0, -7} } },
};

static const ax_anim *const sBagonAnimTable1[] = {
	gAxSharedAnim_02602,
	gAxSharedAnim_02678,
	gAxSharedAnim_02687,
	gAxSharedAnim_02696,
	gAxSharedAnim_02614,
	gAxSharedAnim_02636,
	gAxSharedAnim_02649,
	gAxSharedAnim_02658,
};

static const ax_anim *const sBagonAnimTable2[] = {
	sBagonAnims_2_1,
	sBagonAnims_2_2,
	sBagonAnims_2_3,
	sBagonAnims_2_4,
	sBagonAnims_2_5,
	sBagonAnims_2_6,
	sBagonAnims_2_7,
	sBagonAnims_2_8,
};

static const ax_anim *const sBagonAnimTable3[] = {
	sBagonAnims_3_1,
	sBagonAnims_3_2,
	sBagonAnims_3_3,
	sBagonAnims_3_4,
	sBagonAnims_3_5,
	sBagonAnims_3_6,
	sBagonAnims_3_7,
	sBagonAnims_3_8,
};

static const ax_anim *const sBagonAnimTable4[] = {
	sBagonAnims_4_1,
	sBagonAnims_4_2,
	sBagonAnims_4_3,
	sBagonAnims_4_4,
	sBagonAnims_4_5,
	sBagonAnims_4_6,
	sBagonAnims_4_7,
	sBagonAnims_4_8,
};

static const ax_anim *const sBagonAnimTable5[] = {
	sBagonAnims_5_1,
	sBagonAnims_5_2,
	sBagonAnims_5_3,
	sBagonAnims_5_4,
	sBagonAnims_5_5,
	sBagonAnims_5_6,
	sBagonAnims_5_7,
	sBagonAnims_5_8,
};

static const ax_anim *const sBagonAnimTable6[] = {
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
};

static const ax_anim *const sBagonAnimTable7[] = {
	gAxSharedAnim_00693,
	gAxSharedAnim_00709,
	gAxSharedAnim_00717,
	gAxSharedAnim_00730,
	gAxSharedAnim_00752,
	gAxSharedAnim_00763,
	gAxSharedAnim_00775,
	gAxSharedAnim_00785,
};

static const ax_anim *const sBagonAnimTable8[] = {
	sBagonAnims_8_1,
	sBagonAnims_8_2,
	sBagonAnims_8_3,
	sBagonAnims_8_4,
	sBagonAnims_8_5,
	sBagonAnims_8_6,
	sBagonAnims_8_7,
	sBagonAnims_8_8,
};

static const ax_anim *const sBagonAnimTable9[] = {
	sBagonAnims_9_1,
	sBagonAnims_9_2,
	sBagonAnims_9_3,
	sBagonAnims_9_4,
	sBagonAnims_9_5,
	sBagonAnims_9_6,
	sBagonAnims_9_7,
	sBagonAnims_9_8,
};

static const ax_anim *const sBagonAnimTable10[] = {
	gAxSharedAnim_01241,
	gAxSharedAnim_01252,
	gAxSharedAnim_01266,
	gAxSharedAnim_01277,
	gAxSharedAnim_01285,
	gAxSharedAnim_01300,
	gAxSharedAnim_01313,
	gAxSharedAnim_01324,
};

static const ax_anim *const sBagonAnimTable11[] = {
	sBagonAnims_11_1,
	sBagonAnims_11_2,
	sBagonAnims_11_3,
	sBagonAnims_11_4,
	sBagonAnims_11_5,
	sBagonAnims_11_6,
	sBagonAnims_11_7,
	sBagonAnims_11_8,
};

static const ax_anim *const sBagonAnimTable12[] = {
	gAxSharedAnim_01526,
	gAxSharedAnim_01581,
	gAxSharedAnim_01574,
	gAxSharedAnim_01551,
	gAxSharedAnim_01550,
	gAxSharedAnim_01545,
	gAxSharedAnim_01533,
	gAxSharedAnim_01527,
};

static const ax_anim *const sBagonAnimTable13[] = {
	gAxSharedAnim_01586,
	gAxSharedAnim_01624,
	gAxSharedAnim_01620,
	gAxSharedAnim_01612,
	gAxSharedAnim_01605,
	gAxSharedAnim_01602,
	gAxSharedAnim_01597,
	gAxSharedAnim_01591,
};

static const ax_anim *const *const sAxAnimationsBagon[] = {
	sBagonAnimTable1,
	sBagonAnimTable2,
	sBagonAnimTable3,
	sBagonAnimTable4,
	sBagonAnimTable5,
	sBagonAnimTable6,
	sBagonAnimTable7,
	sBagonAnimTable8,
	sBagonAnimTable9,
	sBagonAnimTable10,
	sBagonAnimTable11,
	sBagonAnimTable12,
	sBagonAnimTable13,
};

static const ax_sprite *const sAxSpritesBagon[] = {
	sBagonSprites1,
	sBagonSprites2,
	sBagonSprites3,
	sBagonSprites4,
	sBagonSprites5,
	sBagonSprites6,
	sBagonSprites7,
	sBagonSprites8,
	sBagonSprites9,
	sBagonSprites10,
	sBagonSprites11,
	sBagonSprites12,
	sBagonSprites13,
	sBagonSprites14,
	sBagonSprites15,
	sBagonSprites16,
	sBagonSprites17,
	sBagonSprites18,
	sBagonSprites19,
	sBagonSprites20,
	sBagonSprites21,
	sBagonSprites22,
	sBagonSprites23,
	sBagonSprites24,
	sBagonSprites25,
	sBagonSprites26,
	sBagonSprites27,
	sBagonSprites28,
	sBagonSprites29,
	sBagonSprites30,
	sBagonSprites31,
	sBagonSprites32,
	sBagonSprites33,
	sBagonSprites34,
	sBagonSprites35,
	sBagonSprites36,
	sBagonSprites37,
	sBagonSprites38,
	sBagonSprites39,
	sBagonSprites40,
	sBagonSprites41,
	sBagonSprites42,
};

static const axmain sAxMainBagon = {
	.poses = sAxPosesBagon,
	.animations = sAxAnimationsBagon,
	.animCount = ARRAY_COUNT(sAxAnimationsBagon),
	.spriteData = sAxSpritesBagon,
	.positions = sAxPositionsBagon,
};
