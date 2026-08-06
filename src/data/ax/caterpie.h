/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainCaterpie;
const SiroArchive gAxCaterpie = {"SIRO", &sAxMainCaterpie};

static const ax_pose sCaterpiePose1[] = {
	AX_POSE(0, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose2[] = {
	AX_POSE(1, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose3[] = {
	AX_POSE(2, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose4[] = {
	AX_POSE(3, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose5[] = {
	AX_POSE(4, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose6[] = {
	AX_POSE(5, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose7[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose8[] = {
	AX_POSE(7, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose9[] = {
	AX_POSE(8, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose10[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose12[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose13[] = {
	AX_POSE(12, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose14[] = {
	AX_POSE(13, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose15[] = {
	AX_POSE(14, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose16[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose17[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose18[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose19[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose20[] = {
	AX_POSE(7, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose21[] = {
	AX_POSE(8, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose22[] = {
	AX_POSE(3, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose23[] = {
	AX_POSE(4, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose24[] = {
	AX_POSE(5, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose28[] = {
	AX_POSE(15, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose29[] = {
	AX_POSE(16, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose33[] = {
	AX_POSE(17, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose34[] = {
	AX_POSE(18, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose38[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose39[] = {
	AX_POSE(20, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose43[] = {
	AX_POSE(21, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose44[] = {
	AX_POSE(22, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose48[] = {
	AX_POSE(23, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose49[] = {
	AX_POSE(24, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose53[] = {
	AX_POSE(21, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose54[] = {
	AX_POSE(22, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose58[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose59[] = {
	AX_POSE(20, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose63[] = {
	AX_POSE(17, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose64[] = {
	AX_POSE(18, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose106[] = {
	AX_POSE(16, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose107[] = {
	AX_POSE(25, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose109[] = {
	AX_POSE(18, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose110[] = {
	AX_POSE(26, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose112[] = {
	AX_POSE(20, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose113[] = {
	AX_POSE(27, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose115[] = {
	AX_POSE(22, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose116[] = {
	AX_POSE(28, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose118[] = {
	AX_POSE(24, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose119[] = {
	AX_POSE(29, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose121[] = {
	AX_POSE(22, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose122[] = {
	AX_POSE(28, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose124[] = {
	AX_POSE(20, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose125[] = {
	AX_POSE(27, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose127[] = {
	AX_POSE(18, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose128[] = {
	AX_POSE(26, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose137[] = {
	AX_POSE(30, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose138[] = {
	AX_POSE(31, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose139[] = {
	AX_POSE(32, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose140[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose141[] = {
	AX_POSE(34, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose142[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose143[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose144[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose145[] = {
	AX_POSE(34, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose146[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose150[] = {
	AX_POSE(15, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose154[] = {
	AX_POSE(17, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose162[] = {
	AX_POSE(21, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose166[] = {
	AX_POSE(23, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose170[] = {
	AX_POSE(21, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose178[] = {
	AX_POSE(17, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose179[] = {
	AX_POSE(2, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose180[] = {
	AX_POSE(5, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose181[] = {
	AX_POSE(8, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose182[] = {
	AX_POSE(11, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose183[] = {
	AX_POSE(14, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose184[] = {
	AX_POSE(11, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose185[] = {
	AX_POSE(8, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose186[] = {
	AX_POSE(5, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose199[] = {
	AX_POSE(18, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose200[] = {
	AX_POSE(3, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose205[] = {
	AX_POSE(22, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose211[] = {
	AX_POSE(22, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose214[] = {
	AX_POSE(20, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose217[] = {
	AX_POSE(18, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCaterpiePose218[] = {
	AX_POSE(3, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_anim sCaterpieAnims_1_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_1_2[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_1_3[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_1_4[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_1_5[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 14, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_1_6[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 16, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_1_7[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 19, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_1_8[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 22, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_2_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 25, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 27, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 15}, .shadow = {0, 15} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {1, 15}, .shadow = {1, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 15}, .shadow = {0, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {1, 15}, .shadow = {1, 15} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_2_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 32, .offset = {8, 8}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {18, 18}, .shadow = {16, 17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {19, 17}, .shadow = {17, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {18, 18}, .shadow = {16, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {19, 17}, .shadow = {17, 16} },
	{ .frames = 4, .unkFlags = 0, .poseId = 29, .offset = {8, 8}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_2_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 35, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 37, .offset = {13, 0}, .shadow = {13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {21, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {21, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {21, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {21, 1}, .shadow = {18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_2_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 40, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 42, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {18, -18}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {19, -17}, .shadow = {18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {18, -18}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {19, -17}, .shadow = {18, -16} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_2_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 47, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 48, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_2_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 50, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 49, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_2_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 55, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 57, .offset = {-13, 0}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 58, .offset = {-21, 1}, .shadow = {-21, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-21, 1}, .shadow = {-21, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_2_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 59, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 62, .offset = {-8, 8}, .shadow = {-8, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {-19, 17}, .shadow = {-19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-19, 17}, .shadow = {-19, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 59, .offset = {-8, 8}, .shadow = {-8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_3_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 65, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 15}, .shadow = {0, 15} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {1, 15}, .shadow = {1, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 15}, .shadow = {0, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {1, 15}, .shadow = {1, 15} },
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_3_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 70, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 72, .offset = {8, 8}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {18, 18}, .shadow = {16, 17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 73, .offset = {19, 17}, .shadow = {17, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {18, 18}, .shadow = {16, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {19, 17}, .shadow = {17, 16} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {8, 8}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_3_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 75, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 77, .offset = {13, 0}, .shadow = {13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {21, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 78, .offset = {21, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {21, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {21, 1}, .shadow = {18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 74, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_3_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 80, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 82, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {18, -18}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {19, -17}, .shadow = {18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {18, -18}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {19, -17}, .shadow = {18, -16} },
	{ .frames = 4, .unkFlags = 0, .poseId = 79, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_3_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 85, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 87, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 88, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_3_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 92, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 93, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_3_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 97, .offset = {-13, 0}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 98, .offset = {-21, 1}, .shadow = {-21, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-21, 1}, .shadow = {-21, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_3_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 102, .offset = {-8, 8}, .shadow = {-8, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {-19, 17}, .shadow = {-19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-19, 17}, .shadow = {-19, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {-8, 8}, .shadow = {-8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 106, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 109, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 107, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 108, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 112, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 110, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 111, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 115, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 113, .offset = {0, 0}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 118, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 116, .offset = {0, 0}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 121, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 119, .offset = {0, 0}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 120, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 124, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 122, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 123, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 123, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 127, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 125, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 126, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_8_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 149, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_8_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 153, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_8_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 157, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_8_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 161, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_8_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 165, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_8_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 169, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_8_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 173, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_8_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 177, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {7, 13}, .shadow = {7, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 182, .offset = {1, 16}, .shadow = {1, 16} },
	{ .frames = 2, .unkFlags = 3, .poseId = 183, .offset = {-4, 14}, .shadow = {-4, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {-5, 8}, .shadow = {-5, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 185, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {24, 9}, .shadow = {24, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 181, .offset = {23, 16}, .shadow = {23, 16} },
	{ .frames = 2, .unkFlags = 3, .poseId = 182, .offset = {11, 16}, .shadow = {11, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {4, 12}, .shadow = {4, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {1, 7}, .shadow = {1, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {11, -20}, .shadow = {11, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 179, .offset = {16, -20}, .shadow = {16, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 180, .offset = {16, -15}, .shadow = {16, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {14, -6}, .shadow = {14, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {-8, -9}, .shadow = {-8, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {-7, -13}, .shadow = {-7, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 178, .offset = {-1, -16}, .shadow = {-1, -16} },
	{ .frames = 2, .unkFlags = 3, .poseId = 179, .offset = {4, -14}, .shadow = {4, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {5, -8}, .shadow = {5, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {-11, -20}, .shadow = {-11, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 185, .offset = {-16, -20}, .shadow = {-16, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 184, .offset = {-16, -15}, .shadow = {-16, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {-14, -6}, .shadow = {-14, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCaterpieAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {-24, 9}, .shadow = {-24, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 183, .offset = {-23, 16}, .shadow = {-23, 16} },
	{ .frames = 2, .unkFlags = 3, .poseId = 182, .offset = {-11, 16}, .shadow = {-11, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {-4, 12}, .shadow = {-4, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {-1, 7}, .shadow = {-1, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sCaterpieGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_1.4bpp.lz");
static const ax_sprite sCaterpieSprites1[] = {
	{sCaterpieGfx1, ARRAY_COUNT(sCaterpieGfx1)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_2.4bpp.lz");
static const ax_sprite sCaterpieSprites2[] = {
	{sCaterpieGfx2, ARRAY_COUNT(sCaterpieGfx2)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_3.4bpp.lz");
static const ax_sprite sCaterpieSprites3[] = {
	{sCaterpieGfx3, ARRAY_COUNT(sCaterpieGfx3)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_4.4bpp.lz");
static const ax_sprite sCaterpieSprites4[] = {
	{sCaterpieGfx4, ARRAY_COUNT(sCaterpieGfx4)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_5.4bpp.lz");
static const ax_sprite sCaterpieSprites5[] = {
	{sCaterpieGfx5, ARRAY_COUNT(sCaterpieGfx5)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_6.4bpp.lz");
static const ax_sprite sCaterpieSprites6[] = {
	{sCaterpieGfx6, ARRAY_COUNT(sCaterpieGfx6)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_7.4bpp.lz");
static const ax_sprite sCaterpieSprites7[] = {
	{sCaterpieGfx7, ARRAY_COUNT(sCaterpieGfx7)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_8.4bpp.lz");
static const ax_sprite sCaterpieSprites8[] = {
	{sCaterpieGfx8, ARRAY_COUNT(sCaterpieGfx8)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_9.4bpp.lz");
static const ax_sprite sCaterpieSprites9[] = {
	{sCaterpieGfx9, ARRAY_COUNT(sCaterpieGfx9)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_10.4bpp.lz");
static const ax_sprite sCaterpieSprites10[] = {
	{sCaterpieGfx10, ARRAY_COUNT(sCaterpieGfx10)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_11.4bpp.lz");
static const ax_sprite sCaterpieSprites11[] = {
	{sCaterpieGfx11, ARRAY_COUNT(sCaterpieGfx11)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_12.4bpp.lz");
static const ax_sprite sCaterpieSprites12[] = {
	{sCaterpieGfx12, ARRAY_COUNT(sCaterpieGfx12)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_13.4bpp.lz");
static const ax_sprite sCaterpieSprites13[] = {
	{sCaterpieGfx13, ARRAY_COUNT(sCaterpieGfx13)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_14.4bpp.lz");
static const ax_sprite sCaterpieSprites14[] = {
	{sCaterpieGfx14, ARRAY_COUNT(sCaterpieGfx14)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_15.4bpp.lz");
static const ax_sprite sCaterpieSprites15[] = {
	{sCaterpieGfx15, ARRAY_COUNT(sCaterpieGfx15)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_16.4bpp.lz");
static const ax_sprite sCaterpieSprites16[] = {
	{sCaterpieGfx16, ARRAY_COUNT(sCaterpieGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_17.4bpp.lz");
static const ax_sprite sCaterpieSprites17[] = {
	{sCaterpieGfx17, ARRAY_COUNT(sCaterpieGfx17)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_18.4bpp.lz");
static const ax_sprite sCaterpieSprites18[] = {
	{sCaterpieGfx18, ARRAY_COUNT(sCaterpieGfx18)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_19.4bpp.lz");
static const ax_sprite sCaterpieSprites19[] = {
	{sCaterpieGfx19, ARRAY_COUNT(sCaterpieGfx19)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_20.4bpp.lz");
static const u8 sCaterpieGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_20_1.4bpp.lz");
static const u8 sCaterpieGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_20_2.4bpp.lz");
static const ax_sprite sCaterpieSprites20[] = {
	{sCaterpieGfx20, ARRAY_COUNT(sCaterpieGfx20)}, 
	{NULL, 96}, 
	{sCaterpieGfx20_1, ARRAY_COUNT(sCaterpieGfx20_1)}, 
	{NULL, 64}, 
	{sCaterpieGfx20_2, ARRAY_COUNT(sCaterpieGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_21.4bpp.lz");
static const ax_sprite sCaterpieSprites21[] = {
	{sCaterpieGfx21, ARRAY_COUNT(sCaterpieGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_22.4bpp.lz");
static const ax_sprite sCaterpieSprites22[] = {
	{sCaterpieGfx22, ARRAY_COUNT(sCaterpieGfx22)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_23.4bpp.lz");
static const ax_sprite sCaterpieSprites23[] = {
	{sCaterpieGfx23, ARRAY_COUNT(sCaterpieGfx23)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_24.4bpp.lz");
static const ax_sprite sCaterpieSprites24[] = {
	{sCaterpieGfx24, ARRAY_COUNT(sCaterpieGfx24)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_25.4bpp.lz");
static const ax_sprite sCaterpieSprites25[] = {
	{sCaterpieGfx25, ARRAY_COUNT(sCaterpieGfx25)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_26.4bpp.lz");
static const ax_sprite sCaterpieSprites26[] = {
	{sCaterpieGfx26, ARRAY_COUNT(sCaterpieGfx26)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_27.4bpp.lz");
static const u8 sCaterpieGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_27_1.4bpp.lz");
static const ax_sprite sCaterpieSprites27[] = {
	{sCaterpieGfx27, ARRAY_COUNT(sCaterpieGfx27)}, 
	{NULL, 32}, 
	{sCaterpieGfx27_1, ARRAY_COUNT(sCaterpieGfx27_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_28.4bpp.lz");
static const u8 sCaterpieGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_28_1.4bpp.lz");
static const ax_sprite sCaterpieSprites28[] = {
	{sCaterpieGfx28, ARRAY_COUNT(sCaterpieGfx28)}, 
	{NULL, 32}, 
	{sCaterpieGfx28_1, ARRAY_COUNT(sCaterpieGfx28_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_29.4bpp.lz");
static const u8 sCaterpieGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_29_1.4bpp.lz");
static const ax_sprite sCaterpieSprites29[] = {
	{sCaterpieGfx29, ARRAY_COUNT(sCaterpieGfx29)}, 
	{NULL, 32}, 
	{sCaterpieGfx29_1, ARRAY_COUNT(sCaterpieGfx29_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_30.4bpp.lz");
static const ax_sprite sCaterpieSprites30[] = {
	{sCaterpieGfx30, ARRAY_COUNT(sCaterpieGfx30)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_31.4bpp.lz");
static const ax_sprite sCaterpieSprites31[] = {
	{sCaterpieGfx31, ARRAY_COUNT(sCaterpieGfx31)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_32.4bpp.lz");
static const ax_sprite sCaterpieSprites32[] = {
	{sCaterpieGfx32, ARRAY_COUNT(sCaterpieGfx32)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_33.4bpp.lz");
static const ax_sprite sCaterpieSprites33[] = {
	{sCaterpieGfx33, ARRAY_COUNT(sCaterpieGfx33)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_34.4bpp.lz");
static const ax_sprite sCaterpieSprites34[] = {
	{sCaterpieGfx34, ARRAY_COUNT(sCaterpieGfx34)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_35.4bpp.lz");
static const ax_sprite sCaterpieSprites35[] = {
	{sCaterpieGfx35, ARRAY_COUNT(sCaterpieGfx35)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_36.4bpp.lz");
static const ax_sprite sCaterpieSprites36[] = {
	{sCaterpieGfx36, ARRAY_COUNT(sCaterpieGfx36)}, 
	{NULL, 0}
};
static const u8 sCaterpieGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/caterpie/sprite_37.4bpp.lz");
static const ax_sprite sCaterpieSprites37[] = {
	{sCaterpieGfx37, ARRAY_COUNT(sCaterpieGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesCaterpie[] = {
	sCaterpiePose1,
	sCaterpiePose2,
	sCaterpiePose3,
	sCaterpiePose4,
	sCaterpiePose5,
	sCaterpiePose6,
	sCaterpiePose7,
	sCaterpiePose8,
	sCaterpiePose9,
	sCaterpiePose10,
	sCaterpiePose11,
	sCaterpiePose12,
	sCaterpiePose13,
	sCaterpiePose14,
	sCaterpiePose15,
	sCaterpiePose16,
	sCaterpiePose17,
	sCaterpiePose18,
	sCaterpiePose19,
	sCaterpiePose20,
	sCaterpiePose21,
	sCaterpiePose22,
	sCaterpiePose23,
	sCaterpiePose24,
	sCaterpiePose1,
	sCaterpiePose2,
	sCaterpiePose3,
	sCaterpiePose28,
	sCaterpiePose29,
	sCaterpiePose4,
	sCaterpiePose5,
	sCaterpiePose6,
	sCaterpiePose33,
	sCaterpiePose34,
	sCaterpiePose7,
	sCaterpiePose8,
	sCaterpiePose9,
	sCaterpiePose38,
	sCaterpiePose39,
	sCaterpiePose10,
	sCaterpiePose11,
	sCaterpiePose12,
	sCaterpiePose43,
	sCaterpiePose44,
	sCaterpiePose13,
	sCaterpiePose14,
	sCaterpiePose15,
	sCaterpiePose48,
	sCaterpiePose49,
	sCaterpiePose16,
	sCaterpiePose17,
	sCaterpiePose18,
	sCaterpiePose53,
	sCaterpiePose54,
	sCaterpiePose19,
	sCaterpiePose20,
	sCaterpiePose21,
	sCaterpiePose58,
	sCaterpiePose59,
	sCaterpiePose22,
	sCaterpiePose23,
	sCaterpiePose24,
	sCaterpiePose63,
	sCaterpiePose64,
	sCaterpiePose1,
	sCaterpiePose2,
	sCaterpiePose3,
	sCaterpiePose28,
	sCaterpiePose29,
	sCaterpiePose4,
	sCaterpiePose5,
	sCaterpiePose6,
	sCaterpiePose33,
	sCaterpiePose34,
	sCaterpiePose7,
	sCaterpiePose8,
	sCaterpiePose9,
	sCaterpiePose38,
	sCaterpiePose39,
	sCaterpiePose10,
	sCaterpiePose11,
	sCaterpiePose12,
	sCaterpiePose43,
	sCaterpiePose44,
	sCaterpiePose13,
	sCaterpiePose14,
	sCaterpiePose15,
	sCaterpiePose48,
	sCaterpiePose49,
	sCaterpiePose16,
	sCaterpiePose17,
	sCaterpiePose18,
	sCaterpiePose53,
	sCaterpiePose54,
	sCaterpiePose19,
	sCaterpiePose20,
	sCaterpiePose21,
	sCaterpiePose58,
	sCaterpiePose59,
	sCaterpiePose22,
	sCaterpiePose23,
	sCaterpiePose24,
	sCaterpiePose63,
	sCaterpiePose64,
	sCaterpiePose28,
	sCaterpiePose106,
	sCaterpiePose107,
	sCaterpiePose33,
	sCaterpiePose109,
	sCaterpiePose110,
	sCaterpiePose38,
	sCaterpiePose112,
	sCaterpiePose113,
	sCaterpiePose43,
	sCaterpiePose115,
	sCaterpiePose116,
	sCaterpiePose48,
	sCaterpiePose118,
	sCaterpiePose119,
	sCaterpiePose53,
	sCaterpiePose121,
	sCaterpiePose122,
	sCaterpiePose58,
	sCaterpiePose124,
	sCaterpiePose125,
	sCaterpiePose63,
	sCaterpiePose127,
	sCaterpiePose128,
	sCaterpiePose28,
	sCaterpiePose63,
	sCaterpiePose58,
	sCaterpiePose53,
	sCaterpiePose48,
	sCaterpiePose43,
	sCaterpiePose38,
	sCaterpiePose33,
	sCaterpiePose137,
	sCaterpiePose138,
	sCaterpiePose139,
	sCaterpiePose140,
	sCaterpiePose141,
	sCaterpiePose142,
	sCaterpiePose143,
	sCaterpiePose144,
	sCaterpiePose145,
	sCaterpiePose146,
	sCaterpiePose1,
	sCaterpiePose2,
	sCaterpiePose3,
	sCaterpiePose150,
	sCaterpiePose4,
	sCaterpiePose5,
	sCaterpiePose6,
	sCaterpiePose154,
	sCaterpiePose7,
	sCaterpiePose8,
	sCaterpiePose9,
	sCaterpiePose38,
	sCaterpiePose10,
	sCaterpiePose11,
	sCaterpiePose12,
	sCaterpiePose162,
	sCaterpiePose13,
	sCaterpiePose14,
	sCaterpiePose15,
	sCaterpiePose166,
	sCaterpiePose16,
	sCaterpiePose17,
	sCaterpiePose18,
	sCaterpiePose170,
	sCaterpiePose19,
	sCaterpiePose20,
	sCaterpiePose21,
	sCaterpiePose58,
	sCaterpiePose22,
	sCaterpiePose23,
	sCaterpiePose24,
	sCaterpiePose178,
	sCaterpiePose179,
	sCaterpiePose180,
	sCaterpiePose181,
	sCaterpiePose182,
	sCaterpiePose183,
	sCaterpiePose184,
	sCaterpiePose185,
	sCaterpiePose186,
	sCaterpiePose28,
	sCaterpiePose33,
	sCaterpiePose38,
	sCaterpiePose43,
	sCaterpiePose48,
	sCaterpiePose53,
	sCaterpiePose58,
	sCaterpiePose63,
	sCaterpiePose28,
	sCaterpiePose106,
	sCaterpiePose1,
	sCaterpiePose33,
	sCaterpiePose199,
	sCaterpiePose200,
	sCaterpiePose38,
	sCaterpiePose112,
	sCaterpiePose7,
	sCaterpiePose43,
	sCaterpiePose205,
	sCaterpiePose10,
	sCaterpiePose48,
	sCaterpiePose49,
	sCaterpiePose13,
	sCaterpiePose53,
	sCaterpiePose211,
	sCaterpiePose16,
	sCaterpiePose58,
	sCaterpiePose214,
	sCaterpiePose19,
	sCaterpiePose63,
	sCaterpiePose217,
	sCaterpiePose218,
	sCaterpiePose106,
	sCaterpiePose217,
	sCaterpiePose214,
	sCaterpiePose211,
	sCaterpiePose49,
	sCaterpiePose205,
	sCaterpiePose112,
	sCaterpiePose199,
	sCaterpiePose28,
	sCaterpiePose63,
	sCaterpiePose58,
	sCaterpiePose53,
	sCaterpiePose48,
	sCaterpiePose43,
	sCaterpiePose38,
	sCaterpiePose33,
};

static const struct PositionSets sAxPositionsCaterpie[] = {
	[0] = { .set = { {-1, 0}, {-3, 0}, {2, 0}, {0, -4} } },
	[1] = { .set = { {-1, 1}, {-3, 1}, {2, 1}, {0, -4} } },
	[2] = { .set = { {-1, 2}, {-3, 2}, {2, 2}, {0, -4} } },
	[3] = { .set = { {7, -2}, {3, 0}, {0, 1}, {0, -3} } },
	[4] = { .set = { {8, -1}, {3, 0}, {0, 1}, {0, -3} } },
	[5] = { .set = { {9, 0}, {5, 1}, {2, 2}, {0, -2} } },
	[6] = { .set = { {9, -5}, {3, -2}, {2, -1}, {0, -4} } },
	[7] = { .set = { {10, -4}, {3, -2}, {2, -1}, {0, -5} } },
	[8] = { .set = { {11, -4}, {5, -2}, {4, -1}, {0, -4} } },
	[9] = { .set = { {6, -6}, {0, -5}, {4, -2}, {-1, -3} } },
	[10] = { .set = { {7, -5}, {0, -5}, {4, -2}, {0, -6} } },
	[11] = { .set = { {8, -6}, {2, -5}, {6, -3}, {1, -4} } },
	[12] = { .set = { {-1, -10}, {2, -7}, {-3, -7}, {0, -4} } },
	[13] = { .set = { {0, -9}, {2, -6}, {-3, -6}, {0, -4} } },
	[14] = { .set = { {0, -13}, {2, -10}, {-3, -10}, {-1, -6} } },
	[15] = { .set = { {-7, -6}, {-1, -5}, {-5, -2}, {0, -3} } },
	[16] = { .set = { {-8, -5}, {-1, -5}, {-5, -2}, {-1, -6} } },
	[17] = { .set = { {-9, -6}, {-3, -5}, {-7, -3}, {-2, -4} } },
	[18] = { .set = { {-10, -5}, {-4, -2}, {-3, -1}, {-1, -4} } },
	[19] = { .set = { {-11, -4}, {-4, -2}, {-3, -1}, {-1, -5} } },
	[20] = { .set = { {-12, -4}, {-6, -2}, {-5, -1}, {-1, -4} } },
	[21] = { .set = { {-10, -2}, {-6, 0}, {-3, 1}, {-3, -3} } },
	[22] = { .set = { {-11, -1}, {-6, 0}, {-3, 1}, {-3, -3} } },
	[23] = { .set = { {-12, 0}, {-8, 1}, {-5, 2}, {-3, -2} } },
	[24] = { .set = { {-1, 0}, {-3, 0}, {2, 0}, {0, -4} } },
	[25] = { .set = { {-1, 1}, {-3, 1}, {2, 1}, {0, -4} } },
	[26] = { .set = { {-1, 2}, {-3, 2}, {2, 2}, {0, -4} } },
	[27] = { .set = { {-1, -5}, {-3, -3}, {1, -3}, {-1, -7} } },
	[28] = { .set = { {0, -10}, {-3, -7}, {1, -7}, {0, -7} } },
	[29] = { .set = { {7, -2}, {3, 0}, {0, 1}, {0, -3} } },
	[30] = { .set = { {8, -1}, {3, 0}, {0, 1}, {0, -3} } },
	[31] = { .set = { {9, 0}, {5, 1}, {2, 2}, {0, -2} } },
	[32] = { .set = { {5, -5}, {3, -3}, {0, -3}, {1, -6} } },
	[33] = { .set = { {1, -12}, {1, -6}, {-1, -6}, {-3, -8} } },
	[34] = { .set = { {9, -5}, {3, -2}, {2, -1}, {0, -4} } },
	[35] = { .set = { {10, -4}, {3, -2}, {2, -1}, {0, -5} } },
	[36] = { .set = { {11, -4}, {5, -2}, {4, -1}, {0, -4} } },
	[37] = { .set = { {8, -7}, {5, -4}, {4, -3}, {1, -5} } },
	[38] = { .set = { {0, -15}, {-2, -10}, {0, -7}, {-4, -7} } },
	[39] = { .set = { {6, -6}, {0, -5}, {4, -2}, {-1, -3} } },
	[40] = { .set = { {7, -5}, {0, -5}, {4, -2}, {0, -6} } },
	[41] = { .set = { {8, -6}, {2, -5}, {6, -3}, {1, -4} } },
	[42] = { .set = { {5, -8}, {-1, -6}, {2, -2}, {0, -6} } },
	[43] = { .set = { {1, -16}, {-4, -9}, {1, -6}, {-3, -6} } },
	[44] = { .set = { {-1, -10}, {2, -7}, {-3, -7}, {0, -4} } },
	[45] = { .set = { {0, -9}, {2, -6}, {-3, -6}, {0, -4} } },
	[46] = { .set = { {0, -13}, {2, -10}, {-3, -10}, {-1, -6} } },
	[47] = { .set = { {-1, -13}, {2, -9}, {-3, -9}, {0, -6} } },
	[48] = { .set = { {0, -15}, {1, -7}, {-2, -7}, {0, -6} } },
	[49] = { .set = { {-7, -6}, {-1, -5}, {-5, -2}, {0, -3} } },
	[50] = { .set = { {-8, -5}, {-1, -5}, {-5, -2}, {-1, -6} } },
	[51] = { .set = { {-9, -6}, {-3, -5}, {-7, -3}, {-2, -4} } },
	[52] = { .set = { {-6, -8}, {0, -6}, {-3, -2}, {-1, -6} } },
	[53] = { .set = { {-2, -16}, {3, -9}, {-2, -6}, {2, -6} } },
	[54] = { .set = { {-10, -5}, {-4, -2}, {-3, -1}, {-1, -4} } },
	[55] = { .set = { {-11, -4}, {-4, -2}, {-3, -1}, {-1, -5} } },
	[56] = { .set = { {-12, -4}, {-6, -2}, {-5, -1}, {-1, -4} } },
	[57] = { .set = { {-9, -7}, {-6, -4}, {-5, -3}, {-2, -5} } },
	[58] = { .set = { {-1, -15}, {1, -10}, {-1, -7}, {3, -7} } },
	[59] = { .set = { {-10, -2}, {-6, 0}, {-3, 1}, {-3, -3} } },
	[60] = { .set = { {-11, -1}, {-6, 0}, {-3, 1}, {-3, -3} } },
	[61] = { .set = { {-12, 0}, {-8, 1}, {-5, 2}, {-3, -2} } },
	[62] = { .set = { {-6, -5}, {-4, -3}, {-1, -3}, {-2, -6} } },
	[63] = { .set = { {-2, -12}, {-2, -6}, {0, -6}, {2, -8} } },
	[64] = { .set = { {-1, 0}, {-3, 0}, {2, 0}, {0, -4} } },
	[65] = { .set = { {-1, 1}, {-3, 1}, {2, 1}, {0, -4} } },
	[66] = { .set = { {-1, 2}, {-3, 2}, {2, 2}, {0, -4} } },
	[67] = { .set = { {-1, -5}, {-3, -3}, {1, -3}, {-1, -7} } },
	[68] = { .set = { {0, -10}, {-3, -7}, {1, -7}, {0, -7} } },
	[69] = { .set = { {7, -2}, {3, 0}, {0, 1}, {0, -3} } },
	[70] = { .set = { {8, -1}, {3, 0}, {0, 1}, {0, -3} } },
	[71] = { .set = { {9, 0}, {5, 1}, {2, 2}, {0, -2} } },
	[72] = { .set = { {5, -5}, {3, -3}, {0, -3}, {1, -6} } },
	[73] = { .set = { {1, -12}, {1, -6}, {-1, -6}, {-3, -8} } },
	[74] = { .set = { {9, -5}, {3, -2}, {2, -1}, {0, -4} } },
	[75] = { .set = { {10, -4}, {3, -2}, {2, -1}, {0, -5} } },
	[76] = { .set = { {11, -4}, {5, -2}, {4, -1}, {0, -4} } },
	[77] = { .set = { {8, -7}, {5, -4}, {4, -3}, {1, -5} } },
	[78] = { .set = { {0, -15}, {-2, -10}, {0, -7}, {-4, -7} } },
	[79] = { .set = { {6, -6}, {0, -5}, {4, -2}, {-1, -3} } },
	[80] = { .set = { {7, -5}, {0, -5}, {4, -2}, {0, -6} } },
	[81] = { .set = { {8, -6}, {2, -5}, {6, -3}, {1, -4} } },
	[82] = { .set = { {5, -8}, {-1, -6}, {2, -2}, {0, -6} } },
	[83] = { .set = { {1, -16}, {-4, -9}, {1, -6}, {-3, -6} } },
	[84] = { .set = { {-1, -10}, {2, -7}, {-3, -7}, {0, -4} } },
	[85] = { .set = { {0, -9}, {2, -6}, {-3, -6}, {0, -4} } },
	[86] = { .set = { {0, -13}, {2, -10}, {-3, -10}, {-1, -6} } },
	[87] = { .set = { {-1, -13}, {2, -9}, {-3, -9}, {0, -6} } },
	[88] = { .set = { {0, -15}, {1, -7}, {-2, -7}, {0, -6} } },
	[89] = { .set = { {-7, -6}, {-1, -5}, {-5, -2}, {0, -3} } },
	[90] = { .set = { {-8, -5}, {-1, -5}, {-5, -2}, {-1, -6} } },
	[91] = { .set = { {-9, -6}, {-3, -5}, {-7, -3}, {-2, -4} } },
	[92] = { .set = { {-6, -8}, {0, -6}, {-3, -2}, {-1, -6} } },
	[93] = { .set = { {-2, -16}, {3, -9}, {-2, -6}, {2, -6} } },
	[94] = { .set = { {-10, -5}, {-4, -2}, {-3, -1}, {-1, -4} } },
	[95] = { .set = { {-11, -4}, {-4, -2}, {-3, -1}, {-1, -5} } },
	[96] = { .set = { {-12, -4}, {-6, -2}, {-5, -1}, {-1, -4} } },
	[97] = { .set = { {-9, -7}, {-6, -4}, {-5, -3}, {-2, -5} } },
	[98] = { .set = { {-1, -15}, {1, -10}, {-1, -7}, {3, -7} } },
	[99] = { .set = { {-10, -2}, {-6, 0}, {-3, 1}, {-3, -3} } },
	[100] = { .set = { {-11, -1}, {-6, 0}, {-3, 1}, {-3, -3} } },
	[101] = { .set = { {-12, 0}, {-8, 1}, {-5, 2}, {-3, -2} } },
	[102] = { .set = { {-6, -5}, {-4, -3}, {-1, -3}, {-2, -6} } },
	[103] = { .set = { {-2, -12}, {-2, -6}, {0, -6}, {2, -8} } },
	[104] = { .set = { {-1, -5}, {-3, -3}, {1, -3}, {-1, -7} } },
	[105] = { .set = { {0, -11}, {-3, -8}, {1, -8}, {0, -8} } },
	[106] = { .set = { {-1, -4}, {-3, -2}, {2, -2}, {-1, -7} } },
	[107] = { .set = { {5, -5}, {3, -3}, {0, -3}, {1, -6} } },
	[108] = { .set = { {3, -11}, {3, -5}, {1, -5}, {-1, -7} } },
	[109] = { .set = { {2, 0}, {3, -2}, {-1, -1}, {0, -7} } },
	[110] = { .set = { {8, -7}, {5, -4}, {4, -3}, {1, -5} } },
	[111] = { .set = { {3, -15}, {1, -10}, {3, -7}, {-1, -7} } },
	[112] = { .set = { {0, -2}, {0, -4}, {-2, -2}, {0, -6} } },
	[113] = { .set = { {5, -8}, {-1, -6}, {2, -2}, {0, -6} } },
	[114] = { .set = { {3, -17}, {-2, -10}, {3, -7}, {-1, -7} } },
	[115] = { .set = { {4, -3}, {-1, -5}, {-1, -2}, {-2, -6} } },
	[116] = { .set = { {-1, -13}, {2, -9}, {-3, -9}, {0, -6} } },
	[117] = { .set = { {0, -17}, {1, -9}, {-2, -9}, {0, -8} } },
	[118] = { .set = { {0, -8}, {1, -6}, {-2, -6}, {-1, -2} } },
	[119] = { .set = { {-6, -8}, {0, -6}, {-3, -2}, {-1, -6} } },
	[120] = { .set = { {-5, -17}, {0, -10}, {-5, -7}, {-1, -7} } },
	[121] = { .set = { {-6, -3}, {-1, -5}, {-1, -2}, {0, -6} } },
	[122] = { .set = { {-9, -7}, {-6, -4}, {-5, -3}, {-2, -5} } },
	[123] = { .set = { {-5, -15}, {-3, -10}, {-5, -7}, {-1, -7} } },
	[124] = { .set = { {-1, -2}, {-1, -4}, {1, -2}, {-1, -6} } },
	[125] = { .set = { {-6, -5}, {-4, -3}, {-1, -3}, {-2, -6} } },
	[126] = { .set = { {-6, -11}, {-6, -5}, {-4, -5}, {-2, -7} } },
	[127] = { .set = { {-3, 0}, {-4, -2}, {0, -1}, {-1, -7} } },
	[128] = { .set = { {-1, -5}, {-3, -3}, {1, -3}, {-1, -7} } },
	[129] = { .set = { {-6, -5}, {-4, -3}, {-1, -3}, {-2, -6} } },
	[130] = { .set = { {-9, -7}, {-6, -4}, {-5, -3}, {-2, -5} } },
	[131] = { .set = { {-6, -8}, {0, -6}, {-3, -2}, {-1, -6} } },
	[132] = { .set = { {-1, -13}, {2, -9}, {-3, -9}, {0, -6} } },
	[133] = { .set = { {5, -8}, {-1, -6}, {2, -2}, {0, -6} } },
	[134] = { .set = { {8, -7}, {5, -4}, {4, -3}, {1, -5} } },
	[135] = { .set = { {5, -5}, {3, -3}, {0, -3}, {1, -6} } },
	[136] = { .set = { {-7, -2}, {-4, -1}, {-2, -1}, {0, -3} } },
	[137] = { .set = { {-7, -1}, {-4, 0}, {-1, 0}, {0, -2} } },
	[138] = { .set = { {0, -11}, {-5, -8}, {4, -8}, {0, -8} } },
	[139] = { .set = { {0, -11}, {2, -9}, {-1, -7}, {-3, -8} } },
	[140] = { .set = { {3, -13}, {2, -9}, {2, -6}, {-2, -7} } },
	[141] = { .set = { {0, -15}, {-1, -8}, {4, -6}, {-1, -6} } },
	[142] = { .set = { {0, -15}, {2, -7}, {-3, -7}, {0, -6} } },
	[143] = { .set = { {0, -15}, {1, -8}, {-4, -6}, {1, -6} } },
	[144] = { .set = { {-4, -13}, {-3, -9}, {-3, -6}, {1, -7} } },
	[145] = { .set = { {-1, -11}, {-3, -9}, {0, -7}, {2, -8} } },
	[146] = { .set = { {-1, 0}, {-3, 0}, {2, 0}, {0, -4} } },
	[147] = { .set = { {-1, 1}, {-3, 1}, {2, 1}, {0, -4} } },
	[148] = { .set = { {-1, 2}, {-3, 2}, {2, 2}, {0, -4} } },
	[149] = { .set = { {-1, -6}, {-3, -4}, {1, -4}, {-1, -8} } },
	[150] = { .set = { {7, -2}, {3, 0}, {0, 1}, {0, -3} } },
	[151] = { .set = { {8, -1}, {3, 0}, {0, 1}, {0, -3} } },
	[152] = { .set = { {9, 0}, {5, 1}, {2, 2}, {0, -2} } },
	[153] = { .set = { {6, -6}, {4, -4}, {1, -4}, {2, -7} } },
	[154] = { .set = { {9, -5}, {3, -2}, {2, -1}, {0, -4} } },
	[155] = { .set = { {10, -4}, {3, -2}, {2, -1}, {0, -5} } },
	[156] = { .set = { {11, -4}, {5, -2}, {4, -1}, {0, -4} } },
	[157] = { .set = { {8, -7}, {5, -4}, {4, -3}, {1, -5} } },
	[158] = { .set = { {6, -6}, {0, -5}, {4, -2}, {-1, -3} } },
	[159] = { .set = { {7, -5}, {0, -5}, {4, -2}, {0, -6} } },
	[160] = { .set = { {8, -6}, {2, -5}, {6, -3}, {1, -4} } },
	[161] = { .set = { {5, -9}, {-1, -7}, {2, -3}, {0, -7} } },
	[162] = { .set = { {-1, -10}, {2, -7}, {-3, -7}, {0, -4} } },
	[163] = { .set = { {0, -9}, {2, -6}, {-3, -6}, {0, -4} } },
	[164] = { .set = { {0, -13}, {2, -10}, {-3, -10}, {-1, -6} } },
	[165] = { .set = { {-1, -14}, {2, -10}, {-3, -10}, {0, -7} } },
	[166] = { .set = { {-7, -6}, {-1, -5}, {-5, -2}, {0, -3} } },
	[167] = { .set = { {-8, -5}, {-1, -5}, {-5, -2}, {-1, -6} } },
	[168] = { .set = { {-9, -6}, {-3, -5}, {-7, -3}, {-2, -4} } },
	[169] = { .set = { {-6, -9}, {0, -7}, {-3, -3}, {-1, -7} } },
	[170] = { .set = { {-10, -5}, {-4, -2}, {-3, -1}, {-1, -4} } },
	[171] = { .set = { {-11, -4}, {-4, -2}, {-3, -1}, {-1, -5} } },
	[172] = { .set = { {-12, -4}, {-6, -2}, {-5, -1}, {-1, -4} } },
	[173] = { .set = { {-9, -7}, {-6, -4}, {-5, -3}, {-2, -5} } },
	[174] = { .set = { {-10, -2}, {-6, 0}, {-3, 1}, {-3, -3} } },
	[175] = { .set = { {-11, -1}, {-6, 0}, {-3, 1}, {-3, -3} } },
	[176] = { .set = { {-12, 0}, {-8, 1}, {-5, 2}, {-3, -2} } },
	[177] = { .set = { {-5, -6}, {-3, -4}, {0, -4}, {-1, -7} } },
	[178] = { .set = { {-1, 3}, {-3, 3}, {2, 3}, {0, -3} } },
	[179] = { .set = { {-8, 1}, {-4, 2}, {-1, 3}, {1, -1} } },
	[180] = { .set = { {-10, -2}, {-4, 0}, {-3, 1}, {1, -2} } },
	[181] = { .set = { {-7, -4}, {-1, -3}, {-5, -1}, {0, -2} } },
	[182] = { .set = { {0, -9}, {2, -6}, {-3, -6}, {-1, -2} } },
	[183] = { .set = { {6, -4}, {0, -3}, {4, -1}, {-1, -2} } },
	[184] = { .set = { {8, -2}, {2, 0}, {1, 1}, {-3, -2} } },
	[185] = { .set = { {7, 1}, {3, 2}, {0, 3}, {-2, -1} } },
	[186] = { .set = { {-1, -5}, {-3, -3}, {1, -3}, {-1, -7} } },
	[187] = { .set = { {5, -5}, {3, -3}, {0, -3}, {1, -6} } },
	[188] = { .set = { {8, -7}, {5, -4}, {4, -3}, {1, -5} } },
	[189] = { .set = { {5, -8}, {-1, -6}, {2, -2}, {0, -6} } },
	[190] = { .set = { {-1, -13}, {2, -9}, {-3, -9}, {0, -6} } },
	[191] = { .set = { {-6, -8}, {0, -6}, {-3, -2}, {-1, -6} } },
	[192] = { .set = { {-9, -7}, {-6, -4}, {-5, -3}, {-2, -5} } },
	[193] = { .set = { {-6, -5}, {-4, -3}, {-1, -3}, {-2, -6} } },
	[194] = { .set = { {-1, -5}, {-3, -3}, {1, -3}, {-1, -7} } },
	[195] = { .set = { {0, -11}, {-3, -8}, {1, -8}, {0, -8} } },
	[196] = { .set = { {-1, 0}, {-3, 0}, {2, 0}, {0, -4} } },
	[197] = { .set = { {5, -5}, {3, -3}, {0, -3}, {1, -6} } },
	[198] = { .set = { {4, -12}, {4, -6}, {2, -6}, {0, -8} } },
	[199] = { .set = { {8, -2}, {4, 0}, {1, 1}, {1, -3} } },
	[200] = { .set = { {8, -7}, {5, -4}, {4, -3}, {1, -5} } },
	[201] = { .set = { {3, -15}, {1, -10}, {3, -7}, {-1, -7} } },
	[202] = { .set = { {9, -5}, {3, -2}, {2, -1}, {0, -4} } },
	[203] = { .set = { {5, -8}, {-1, -6}, {2, -2}, {0, -6} } },
	[204] = { .set = { {3, -16}, {-2, -9}, {3, -6}, {-1, -6} } },
	[205] = { .set = { {6, -6}, {0, -5}, {4, -2}, {-1, -3} } },
	[206] = { .set = { {-1, -13}, {2, -9}, {-3, -9}, {0, -6} } },
	[207] = { .set = { {0, -15}, {1, -7}, {-2, -7}, {0, -6} } },
	[208] = { .set = { {-1, -10}, {2, -7}, {-3, -7}, {0, -4} } },
	[209] = { .set = { {-6, -8}, {0, -6}, {-3, -2}, {-1, -6} } },
	[210] = { .set = { {-4, -16}, {1, -9}, {-4, -6}, {0, -6} } },
	[211] = { .set = { {-7, -6}, {-1, -5}, {-5, -2}, {0, -3} } },
	[212] = { .set = { {-9, -7}, {-6, -4}, {-5, -3}, {-2, -5} } },
	[213] = { .set = { {-4, -15}, {-2, -10}, {-4, -7}, {0, -7} } },
	[214] = { .set = { {-10, -5}, {-4, -2}, {-3, -1}, {-1, -4} } },
	[215] = { .set = { {-6, -5}, {-4, -3}, {-1, -3}, {-2, -6} } },
	[216] = { .set = { {-5, -12}, {-5, -6}, {-3, -6}, {-1, -8} } },
	[217] = { .set = { {-9, -2}, {-5, 0}, {-2, 1}, {-2, -3} } },
	[218] = { .set = { {0, -11}, {-3, -8}, {1, -8}, {0, -8} } },
	[219] = { .set = { {-5, -12}, {-5, -6}, {-3, -6}, {-1, -8} } },
	[220] = { .set = { {-4, -15}, {-2, -10}, {-4, -7}, {0, -7} } },
	[221] = { .set = { {-4, -16}, {1, -9}, {-4, -6}, {0, -6} } },
	[222] = { .set = { {0, -15}, {1, -7}, {-2, -7}, {0, -6} } },
	[223] = { .set = { {3, -16}, {-2, -9}, {3, -6}, {-1, -6} } },
	[224] = { .set = { {3, -15}, {1, -10}, {3, -7}, {-1, -7} } },
	[225] = { .set = { {4, -12}, {4, -6}, {2, -6}, {0, -8} } },
	[226] = { .set = { {-1, -5}, {-3, -3}, {1, -3}, {-1, -7} } },
	[227] = { .set = { {-6, -5}, {-4, -3}, {-1, -3}, {-2, -6} } },
	[228] = { .set = { {-9, -7}, {-6, -4}, {-5, -3}, {-2, -5} } },
	[229] = { .set = { {-6, -8}, {0, -6}, {-3, -2}, {-1, -6} } },
	[230] = { .set = { {-1, -13}, {2, -9}, {-3, -9}, {0, -6} } },
	[231] = { .set = { {5, -8}, {-1, -6}, {2, -2}, {0, -6} } },
	[232] = { .set = { {8, -7}, {5, -4}, {4, -3}, {1, -5} } },
	[233] = { .set = { {5, -5}, {3, -3}, {0, -3}, {1, -6} } },
};

static const ax_anim *const sCaterpieAnimTable1[] = {
	sCaterpieAnims_1_1,
	sCaterpieAnims_1_2,
	sCaterpieAnims_1_3,
	sCaterpieAnims_1_4,
	sCaterpieAnims_1_5,
	sCaterpieAnims_1_6,
	sCaterpieAnims_1_7,
	sCaterpieAnims_1_8,
};

static const ax_anim *const sCaterpieAnimTable2[] = {
	sCaterpieAnims_2_1,
	sCaterpieAnims_2_2,
	sCaterpieAnims_2_3,
	sCaterpieAnims_2_4,
	sCaterpieAnims_2_5,
	sCaterpieAnims_2_6,
	sCaterpieAnims_2_7,
	sCaterpieAnims_2_8,
};

static const ax_anim *const sCaterpieAnimTable3[] = {
	sCaterpieAnims_3_1,
	sCaterpieAnims_3_2,
	sCaterpieAnims_3_3,
	sCaterpieAnims_3_4,
	sCaterpieAnims_3_5,
	sCaterpieAnims_3_6,
	sCaterpieAnims_3_7,
	sCaterpieAnims_3_8,
};

static const ax_anim *const sCaterpieAnimTable4[] = {
	sCaterpieAnims_4_1,
	sCaterpieAnims_4_2,
	sCaterpieAnims_4_3,
	sCaterpieAnims_4_4,
	sCaterpieAnims_4_5,
	sCaterpieAnims_4_6,
	sCaterpieAnims_4_7,
	sCaterpieAnims_4_8,
};

static const ax_anim *const sCaterpieAnimTable5[] = {
	gAxSharedAnim_00381,
	gAxSharedAnim_00438,
	gAxSharedAnim_00433,
	gAxSharedAnim_00427,
	gAxSharedAnim_00418,
	gAxSharedAnim_00409,
	gAxSharedAnim_00401,
	gAxSharedAnim_00389,
};

static const ax_anim *const sCaterpieAnimTable6[] = {
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
};

static const ax_anim *const sCaterpieAnimTable7[] = {
	gAxSharedAnim_00466,
	gAxSharedAnim_00479,
	gAxSharedAnim_00487,
	gAxSharedAnim_00496,
	gAxSharedAnim_00508,
	gAxSharedAnim_00517,
	gAxSharedAnim_00523,
	gAxSharedAnim_00529,
};

static const ax_anim *const sCaterpieAnimTable8[] = {
	sCaterpieAnims_8_1,
	sCaterpieAnims_8_2,
	sCaterpieAnims_8_3,
	sCaterpieAnims_8_4,
	sCaterpieAnims_8_5,
	sCaterpieAnims_8_6,
	sCaterpieAnims_8_7,
	sCaterpieAnims_8_8,
};

static const ax_anim *const sCaterpieAnimTable9[] = {
	sCaterpieAnims_9_1,
	sCaterpieAnims_9_2,
	gAxSharedAnim_00977,
	sCaterpieAnims_9_4,
	sCaterpieAnims_9_5,
	sCaterpieAnims_9_6,
	gAxSharedAnim_00926,
	sCaterpieAnims_9_8,
};

static const ax_anim *const sCaterpieAnimTable10[] = {
	gAxSharedAnim_01016,
	gAxSharedAnim_01027,
	gAxSharedAnim_01046,
	gAxSharedAnim_01061,
	gAxSharedAnim_01078,
	gAxSharedAnim_01092,
	gAxSharedAnim_01110,
	gAxSharedAnim_01124,
};

static const ax_anim *const sCaterpieAnimTable11[] = {
	gAxSharedAnim_01140,
	gAxSharedAnim_01177,
	gAxSharedAnim_01214,
	gAxSharedAnim_01249,
	gAxSharedAnim_01284,
	gAxSharedAnim_01322,
	gAxSharedAnim_01356,
	gAxSharedAnim_01383,
};

static const ax_anim *const sCaterpieAnimTable12[] = {
	gAxSharedAnim_01423,
	gAxSharedAnim_01468,
	gAxSharedAnim_01458,
	gAxSharedAnim_01449,
	gAxSharedAnim_01448,
	gAxSharedAnim_01444,
	gAxSharedAnim_01432,
	gAxSharedAnim_01424,
};

static const ax_anim *const sCaterpieAnimTable13[] = {
	gAxSharedAnim_01471,
	gAxSharedAnim_01516,
	gAxSharedAnim_01511,
	gAxSharedAnim_01504,
	gAxSharedAnim_01497,
	gAxSharedAnim_01490,
	gAxSharedAnim_01486,
	gAxSharedAnim_01478,
};

static const ax_anim *const *const sAxAnimationsCaterpie[] = {
	sCaterpieAnimTable1,
	sCaterpieAnimTable2,
	sCaterpieAnimTable3,
	sCaterpieAnimTable4,
	sCaterpieAnimTable5,
	sCaterpieAnimTable6,
	sCaterpieAnimTable7,
	sCaterpieAnimTable8,
	sCaterpieAnimTable9,
	sCaterpieAnimTable10,
	sCaterpieAnimTable11,
	sCaterpieAnimTable12,
	sCaterpieAnimTable13,
};

static const ax_sprite *const sAxSpritesCaterpie[] = {
	sCaterpieSprites1,
	sCaterpieSprites2,
	sCaterpieSprites3,
	sCaterpieSprites4,
	sCaterpieSprites5,
	sCaterpieSprites6,
	sCaterpieSprites7,
	sCaterpieSprites8,
	sCaterpieSprites9,
	sCaterpieSprites10,
	sCaterpieSprites11,
	sCaterpieSprites12,
	sCaterpieSprites13,
	sCaterpieSprites14,
	sCaterpieSprites15,
	sCaterpieSprites16,
	sCaterpieSprites17,
	sCaterpieSprites18,
	sCaterpieSprites19,
	sCaterpieSprites20,
	sCaterpieSprites21,
	sCaterpieSprites22,
	sCaterpieSprites23,
	sCaterpieSprites24,
	sCaterpieSprites25,
	sCaterpieSprites26,
	sCaterpieSprites27,
	sCaterpieSprites28,
	sCaterpieSprites29,
	sCaterpieSprites30,
	sCaterpieSprites31,
	sCaterpieSprites32,
	sCaterpieSprites33,
	sCaterpieSprites34,
	sCaterpieSprites35,
	sCaterpieSprites36,
	sCaterpieSprites37,
};

static const axmain sAxMainCaterpie = {
	.poses = sAxPosesCaterpie,
	.animations = sAxAnimationsCaterpie,
	.animCount = ARRAY_COUNT(sAxAnimationsCaterpie),
	.spriteData = sAxSpritesCaterpie,
	.positions = sAxPositionsCaterpie,
};
