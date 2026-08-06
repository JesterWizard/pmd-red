/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainKabuto;
const SiroArchive gAxKabuto = {"SIRO", &sAxMainKabuto};

static const ax_pose sKabutoPose1[] = {
	AX_POSE(0, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose2[] = {
	AX_POSE(1, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose3[] = {
	AX_POSE(2, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose4[] = {
	AX_POSE(3, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose5[] = {
	AX_POSE(4, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose6[] = {
	AX_POSE(5, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose7[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose8[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose9[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose10[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose12[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose13[] = {
	AX_POSE(12, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose14[] = {
	AX_POSE(13, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose15[] = {
	AX_POSE(14, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose16[] = {
	AX_POSE(9, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose17[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose18[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose19[] = {
	AX_POSE(6, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose20[] = {
	AX_POSE(7, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose21[] = {
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose22[] = {
	AX_POSE(3, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose23[] = {
	AX_POSE(4, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose24[] = {
	AX_POSE(5, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose28[] = {
	AX_POSE(15, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose29[] = {
	AX_POSE(16, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose33[] = {
	AX_POSE(17, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose34[] = {
	AX_POSE(18, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose38[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose39[] = {
	AX_POSE(20, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose43[] = {
	AX_POSE(21, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose44[] = {
	AX_POSE(22, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose48[] = {
	AX_POSE(23, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose49[] = {
	AX_POSE(24, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose53[] = {
	AX_POSE(21, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose54[] = {
	AX_POSE(22, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose58[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose59[] = {
	AX_POSE(20, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose63[] = {
	AX_POSE(17, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose64[] = {
	AX_POSE(18, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose107[] = {
	AX_POSE(25, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose110[] = {
	AX_POSE(26, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose113[] = {
	AX_POSE(27, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose116[] = {
	AX_POSE(28, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose119[] = {
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose122[] = {
	AX_POSE(28, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose125[] = {
	AX_POSE(27, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose128[] = {
	AX_POSE(26, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose137[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose138[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose139[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose140[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose141[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose142[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose143[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose144[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose145[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose146[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose147[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose148[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose149[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose150[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose151[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose152[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose153[] = {
	AX_POSE(34, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose154[] = {
	AX_POSE(35, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose155[] = {
	AX_POSE(36, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose156[] = {
	AX_POSE(37, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose157[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose158[] = {
	AX_POSE(39, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose159[] = {
	AX_POSE(40, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose160[] = {
	AX_POSE(39, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose161[] = {
	AX_POSE(38, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose162[] = {
	AX_POSE(37, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose243[] = {
	AX_POSE(16, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose244[] = {
	AX_POSE(18, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose245[] = {
	AX_POSE(20, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose246[] = {
	AX_POSE(22, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose247[] = {
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose248[] = {
	AX_POSE(22, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose249[] = {
	AX_POSE(20, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sKabutoPose250[] = {
	AX_POSE(18, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_anim sKabutoAnims_2_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 27, .offset = {0, 8}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 16}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {1, 16}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 16}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {1, 16}, .shadow = {1, 18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_2_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 29, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 32, .offset = {10, 8}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {18, 14}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {19, 13}, .shadow = {19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {18, 14}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {19, 13}, .shadow = {19, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 29, .offset = {8, 8}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_2_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 37, .offset = {10, -2}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {18, -4}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {18, -3}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {18, -4}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {18, -3}, .shadow = {18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_2_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 42, .offset = {10, -12}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {18, -21}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {19, -20}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {18, -21}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {19, -20}, .shadow = {19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_2_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 47, .offset = {0, -11}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -20}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 48, .offset = {1, -20}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -20}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, -20}, .shadow = {1, -18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_2_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 49, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {-10, -12}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-18, -21}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {-19, -20}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-18, -21}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-19, -20}, .shadow = {-19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 49, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_2_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 57, .offset = {-10, -2}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-18, -4}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 58, .offset = {-18, -3}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-18, -4}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-18, -3}, .shadow = {-18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_2_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 59, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 59, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 62, .offset = {-10, 8}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-17, 14}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {-18, 13}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-17, 14}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-17, 14}, .shadow = {-17, 19} },
	{ .frames = 4, .unkFlags = 0, .poseId = 59, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_3_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {0, 8}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 16}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {1, 16}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 16}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {1, 16}, .shadow = {1, 18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_3_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 72, .offset = {10, 8}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {18, 14}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 73, .offset = {19, 13}, .shadow = {19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {18, 14}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {19, 13}, .shadow = {19, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {8, 8}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_3_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 74, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 77, .offset = {10, -2}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {18, -4}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 78, .offset = {18, -3}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {18, -4}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {18, -3}, .shadow = {18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 74, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_3_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 79, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 82, .offset = {10, -12}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {18, -21}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {19, -20}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {18, -21}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {19, -20}, .shadow = {19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 79, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_3_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 87, .offset = {0, -11}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -20}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 88, .offset = {1, -20}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -20}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {1, -20}, .shadow = {1, -18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_3_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 92, .offset = {-10, -12}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-18, -21}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 93, .offset = {-19, -20}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-18, -21}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-19, -20}, .shadow = {-19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_3_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 97, .offset = {-10, -2}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-18, -4}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 98, .offset = {-18, -3}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-18, -4}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-18, -3}, .shadow = {-18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_3_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 102, .offset = {-10, 8}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-17, 14}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {-18, 13}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-17, 14}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-17, 14}, .shadow = {-17, 19} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_4_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -4}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 106, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_4_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-3, -4}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-2, -4}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 109, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_4_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, -1}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-2, -2}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-1, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 112, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_4_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {-2, 2}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {-1, -1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 115, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_4_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 116, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 116, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, -2}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 118, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_4_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {2, 2}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {1, -1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 121, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_4_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 122, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 122, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {3, -1}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {2, -2}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {1, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 124, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_4_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 125, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 125, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {3, -4}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {2, -4}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 127, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_8_1[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {-1, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_8_2[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {-1, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_8_3[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 168, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 168, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_8_4[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {-1, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {1, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_8_5[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {-1, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_8_6[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 165, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 165, .offset = {-1, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_8_7[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_8_8[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {-1, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {1, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {10, 9}, .shadow = {10, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {7, 15}, .shadow = {7, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 191, .offset = {-7, 15}, .shadow = {-7, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {-10, 9}, .shadow = {-10, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {24, 9}, .shadow = {24, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {23, 16}, .shadow = {23, 16} },
	{ .frames = 2, .unkFlags = 3, .poseId = 190, .offset = {11, 16}, .shadow = {11, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {4, 12}, .shadow = {4, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {6, -16}, .shadow = {6, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {11, -20}, .shadow = {11, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {16, -20}, .shadow = {16, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 188, .offset = {16, -15}, .shadow = {16, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {14, -6}, .shadow = {14, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {-8, -10}, .shadow = {-8, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {-7, -15}, .shadow = {-7, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {-1, -18}, .shadow = {-1, -16} },
	{ .frames = 2, .unkFlags = 3, .poseId = 187, .offset = {7, -15}, .shadow = {7, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {8, -9}, .shadow = {8, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {6, -4}, .shadow = {6, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {-6, -16}, .shadow = {-6, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {-11, -20}, .shadow = {-11, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {-16, -20}, .shadow = {-16, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 192, .offset = {-18, -15}, .shadow = {-16, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {-14, -6}, .shadow = {-14, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sKabutoAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {-24, 9}, .shadow = {-24, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {-23, 16}, .shadow = {-23, 16} },
	{ .frames = 2, .unkFlags = 3, .poseId = 190, .offset = {-11, 16}, .shadow = {-11, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {-4, 12}, .shadow = {-4, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sKabutoGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_1.4bpp.lz");
static const ax_sprite sKabutoSprites1[] = {
	{sKabutoGfx1, ARRAY_COUNT(sKabutoGfx1)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_2.4bpp.lz");
static const ax_sprite sKabutoSprites2[] = {
	{sKabutoGfx2, ARRAY_COUNT(sKabutoGfx2)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_3.4bpp.lz");
static const ax_sprite sKabutoSprites3[] = {
	{sKabutoGfx3, ARRAY_COUNT(sKabutoGfx3)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_4.4bpp.lz");
static const ax_sprite sKabutoSprites4[] = {
	{sKabutoGfx4, ARRAY_COUNT(sKabutoGfx4)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_5.4bpp.lz");
static const ax_sprite sKabutoSprites5[] = {
	{sKabutoGfx5, ARRAY_COUNT(sKabutoGfx5)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_6.4bpp.lz");
static const ax_sprite sKabutoSprites6[] = {
	{sKabutoGfx6, ARRAY_COUNT(sKabutoGfx6)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_7.4bpp.lz");
static const ax_sprite sKabutoSprites7[] = {
	{sKabutoGfx7, ARRAY_COUNT(sKabutoGfx7)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_8.4bpp.lz");
static const ax_sprite sKabutoSprites8[] = {
	{sKabutoGfx8, ARRAY_COUNT(sKabutoGfx8)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_9.4bpp.lz");
static const ax_sprite sKabutoSprites9[] = {
	{sKabutoGfx9, ARRAY_COUNT(sKabutoGfx9)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_10.4bpp.lz");
static const ax_sprite sKabutoSprites10[] = {
	{sKabutoGfx10, ARRAY_COUNT(sKabutoGfx10)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_11.4bpp.lz");
static const ax_sprite sKabutoSprites11[] = {
	{sKabutoGfx11, ARRAY_COUNT(sKabutoGfx11)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_12.4bpp.lz");
static const ax_sprite sKabutoSprites12[] = {
	{sKabutoGfx12, ARRAY_COUNT(sKabutoGfx12)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_13.4bpp.lz");
static const ax_sprite sKabutoSprites13[] = {
	{sKabutoGfx13, ARRAY_COUNT(sKabutoGfx13)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_14.4bpp.lz");
static const ax_sprite sKabutoSprites14[] = {
	{sKabutoGfx14, ARRAY_COUNT(sKabutoGfx14)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_15.4bpp.lz");
static const ax_sprite sKabutoSprites15[] = {
	{sKabutoGfx15, ARRAY_COUNT(sKabutoGfx15)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_16.4bpp.lz");
static const u8 sKabutoGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_16_1.4bpp.lz");
static const ax_sprite sKabutoSprites16[] = {
	{sKabutoGfx16, ARRAY_COUNT(sKabutoGfx16)}, 
	{NULL, 32}, 
	{sKabutoGfx16_1, ARRAY_COUNT(sKabutoGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKabutoGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_17.4bpp.lz");
static const u8 sKabutoGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_17_1.4bpp.lz");
static const ax_sprite sKabutoSprites17[] = {
	{sKabutoGfx17, ARRAY_COUNT(sKabutoGfx17)}, 
	{NULL, 32}, 
	{sKabutoGfx17_1, ARRAY_COUNT(sKabutoGfx17_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKabutoGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_18.4bpp.lz");
static const u8 sKabutoGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_18_1.4bpp.lz");
static const ax_sprite sKabutoSprites18[] = {
	{sKabutoGfx18, ARRAY_COUNT(sKabutoGfx18)}, 
	{NULL, 32}, 
	{sKabutoGfx18_1, ARRAY_COUNT(sKabutoGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKabutoGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_19.4bpp.lz");
static const u8 sKabutoGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_19_1.4bpp.lz");
static const u8 sKabutoGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_19_2.4bpp.lz");
static const ax_sprite sKabutoSprites19[] = {
	{sKabutoGfx19, ARRAY_COUNT(sKabutoGfx19)}, 
	{NULL, 32}, 
	{sKabutoGfx19_1, ARRAY_COUNT(sKabutoGfx19_1)}, 
	{NULL, 64}, 
	{sKabutoGfx19_2, ARRAY_COUNT(sKabutoGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKabutoGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_20.4bpp.lz");
static const u8 sKabutoGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_20_1.4bpp.lz");
static const u8 sKabutoGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_20_2.4bpp.lz");
static const ax_sprite sKabutoSprites20[] = {
	{sKabutoGfx20, ARRAY_COUNT(sKabutoGfx20)}, 
	{NULL, 64}, 
	{sKabutoGfx20_1, ARRAY_COUNT(sKabutoGfx20_1)}, 
	{NULL, 32}, 
	{sKabutoGfx20_2, ARRAY_COUNT(sKabutoGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKabutoGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_21.4bpp.lz");
static const ax_sprite sKabutoSprites21[] = {
	{sKabutoGfx21, ARRAY_COUNT(sKabutoGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKabutoGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_22.4bpp.lz");
static const u8 sKabutoGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_22_1.4bpp.lz");
static const u8 sKabutoGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_22_2.4bpp.lz");
static const ax_sprite sKabutoSprites22[] = {
	{NULL, 32}, 
	{sKabutoGfx22, ARRAY_COUNT(sKabutoGfx22)}, 
	{NULL, 32}, 
	{sKabutoGfx22_1, ARRAY_COUNT(sKabutoGfx22_1)}, 
	{NULL, 64}, 
	{sKabutoGfx22_2, ARRAY_COUNT(sKabutoGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKabutoGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_23.4bpp.lz");
static const u8 sKabutoGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_23_1.4bpp.lz");
static const u8 sKabutoGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_23_2.4bpp.lz");
static const ax_sprite sKabutoSprites23[] = {
	{NULL, 32}, 
	{sKabutoGfx23, ARRAY_COUNT(sKabutoGfx23)}, 
	{NULL, 32}, 
	{sKabutoGfx23_1, ARRAY_COUNT(sKabutoGfx23_1)}, 
	{NULL, 32}, 
	{sKabutoGfx23_2, ARRAY_COUNT(sKabutoGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKabutoGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_24.4bpp.lz");
static const u8 sKabutoGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_24_1.4bpp.lz");
static const u8 sKabutoGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_24_2.4bpp.lz");
static const ax_sprite sKabutoSprites24[] = {
	{sKabutoGfx24, ARRAY_COUNT(sKabutoGfx24)}, 
	{NULL, 32}, 
	{sKabutoGfx24_1, ARRAY_COUNT(sKabutoGfx24_1)}, 
	{NULL, 32}, 
	{sKabutoGfx24_2, ARRAY_COUNT(sKabutoGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKabutoGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_25.4bpp.lz");
static const u8 sKabutoGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_25_1.4bpp.lz");
static const u8 sKabutoGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_25_2.4bpp.lz");
static const ax_sprite sKabutoSprites25[] = {
	{sKabutoGfx25, ARRAY_COUNT(sKabutoGfx25)}, 
	{NULL, 32}, 
	{sKabutoGfx25_1, ARRAY_COUNT(sKabutoGfx25_1)}, 
	{NULL, 32}, 
	{sKabutoGfx25_2, ARRAY_COUNT(sKabutoGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKabutoGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_26.4bpp.lz");
static const u8 sKabutoGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_26_1.4bpp.lz");
static const ax_sprite sKabutoSprites26[] = {
	{sKabutoGfx26, ARRAY_COUNT(sKabutoGfx26)}, 
	{NULL, 32}, 
	{sKabutoGfx26_1, ARRAY_COUNT(sKabutoGfx26_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKabutoGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_27.4bpp.lz");
static const u8 sKabutoGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_27_1.4bpp.lz");
static const ax_sprite sKabutoSprites27[] = {
	{sKabutoGfx27, ARRAY_COUNT(sKabutoGfx27)}, 
	{NULL, 32}, 
	{sKabutoGfx27_1, ARRAY_COUNT(sKabutoGfx27_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sKabutoGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_28.4bpp.lz");
static const ax_sprite sKabutoSprites28[] = {
	{sKabutoGfx28, ARRAY_COUNT(sKabutoGfx28)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sKabutoGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_29.4bpp.lz");
static const u8 sKabutoGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_29_1.4bpp.lz");
static const u8 sKabutoGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_29_2.4bpp.lz");
static const ax_sprite sKabutoSprites29[] = {
	{sKabutoGfx29, ARRAY_COUNT(sKabutoGfx29)}, 
	{NULL, 32}, 
	{sKabutoGfx29_1, ARRAY_COUNT(sKabutoGfx29_1)}, 
	{NULL, 32}, 
	{sKabutoGfx29_2, ARRAY_COUNT(sKabutoGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKabutoGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_30.4bpp.lz");
static const u8 sKabutoGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_30_1.4bpp.lz");
static const u8 sKabutoGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_30_2.4bpp.lz");
static const ax_sprite sKabutoSprites30[] = {
	{sKabutoGfx30, ARRAY_COUNT(sKabutoGfx30)}, 
	{NULL, 32}, 
	{sKabutoGfx30_1, ARRAY_COUNT(sKabutoGfx30_1)}, 
	{NULL, 32}, 
	{sKabutoGfx30_2, ARRAY_COUNT(sKabutoGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sKabutoGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_31.4bpp.lz");
static const u8 sKabutoGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_31_1.4bpp.lz");
static const ax_sprite sKabutoSprites31[] = {
	{sKabutoGfx31, ARRAY_COUNT(sKabutoGfx31)}, 
	{NULL, 32}, 
	{sKabutoGfx31_1, ARRAY_COUNT(sKabutoGfx31_1)}, 
	{NULL, 288}, 
	{NULL, 0}
};
static const u8 sKabutoGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_32.4bpp.lz");
static const u8 sKabutoGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_32_1.4bpp.lz");
static const ax_sprite sKabutoSprites32[] = {
	{sKabutoGfx32, ARRAY_COUNT(sKabutoGfx32)}, 
	{NULL, 32}, 
	{sKabutoGfx32_1, ARRAY_COUNT(sKabutoGfx32_1)}, 
	{NULL, 288}, 
	{NULL, 0}
};
static const u8 sKabutoGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_33.4bpp.lz");
static const u8 sKabutoGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_33_1.4bpp.lz");
static const ax_sprite sKabutoSprites33[] = {
	{sKabutoGfx33, ARRAY_COUNT(sKabutoGfx33)}, 
	{NULL, 32}, 
	{sKabutoGfx33_1, ARRAY_COUNT(sKabutoGfx33_1)}, 
	{NULL, 288}, 
	{NULL, 0}
};
static const u8 sKabutoGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_34.4bpp.lz");
static const u8 sKabutoGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_34_1.4bpp.lz");
static const ax_sprite sKabutoSprites34[] = {
	{sKabutoGfx34, ARRAY_COUNT(sKabutoGfx34)}, 
	{NULL, 32}, 
	{sKabutoGfx34_1, ARRAY_COUNT(sKabutoGfx34_1)}, 
	{NULL, 288}, 
	{NULL, 0}
};
static const u8 sKabutoGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_35.4bpp.lz");
static const ax_sprite sKabutoSprites35[] = {
	{sKabutoGfx35, ARRAY_COUNT(sKabutoGfx35)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_36.4bpp.lz");
static const ax_sprite sKabutoSprites36[] = {
	{sKabutoGfx36, ARRAY_COUNT(sKabutoGfx36)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_37.4bpp.lz");
static const ax_sprite sKabutoSprites37[] = {
	{sKabutoGfx37, ARRAY_COUNT(sKabutoGfx37)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_38.4bpp.lz");
static const ax_sprite sKabutoSprites38[] = {
	{sKabutoGfx38, ARRAY_COUNT(sKabutoGfx38)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_39.4bpp.lz");
static const ax_sprite sKabutoSprites39[] = {
	{sKabutoGfx39, ARRAY_COUNT(sKabutoGfx39)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_40.4bpp.lz");
static const ax_sprite sKabutoSprites40[] = {
	{sKabutoGfx40, ARRAY_COUNT(sKabutoGfx40)}, 
	{NULL, 0}
};
static const u8 sKabutoGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/kabuto/sprite_41.4bpp.lz");
static const ax_sprite sKabutoSprites41[] = {
	{sKabutoGfx41, ARRAY_COUNT(sKabutoGfx41)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesKabuto[] = {
	sKabutoPose1,
	sKabutoPose2,
	sKabutoPose3,
	sKabutoPose4,
	sKabutoPose5,
	sKabutoPose6,
	sKabutoPose7,
	sKabutoPose8,
	sKabutoPose9,
	sKabutoPose10,
	sKabutoPose11,
	sKabutoPose12,
	sKabutoPose13,
	sKabutoPose14,
	sKabutoPose15,
	sKabutoPose16,
	sKabutoPose17,
	sKabutoPose18,
	sKabutoPose19,
	sKabutoPose20,
	sKabutoPose21,
	sKabutoPose22,
	sKabutoPose23,
	sKabutoPose24,
	sKabutoPose1,
	sKabutoPose2,
	sKabutoPose3,
	sKabutoPose28,
	sKabutoPose29,
	sKabutoPose4,
	sKabutoPose5,
	sKabutoPose6,
	sKabutoPose33,
	sKabutoPose34,
	sKabutoPose7,
	sKabutoPose8,
	sKabutoPose9,
	sKabutoPose38,
	sKabutoPose39,
	sKabutoPose10,
	sKabutoPose11,
	sKabutoPose12,
	sKabutoPose43,
	sKabutoPose44,
	sKabutoPose13,
	sKabutoPose14,
	sKabutoPose15,
	sKabutoPose48,
	sKabutoPose49,
	sKabutoPose16,
	sKabutoPose17,
	sKabutoPose18,
	sKabutoPose53,
	sKabutoPose54,
	sKabutoPose19,
	sKabutoPose20,
	sKabutoPose21,
	sKabutoPose58,
	sKabutoPose59,
	sKabutoPose22,
	sKabutoPose23,
	sKabutoPose24,
	sKabutoPose63,
	sKabutoPose64,
	sKabutoPose1,
	sKabutoPose2,
	sKabutoPose3,
	sKabutoPose28,
	sKabutoPose29,
	sKabutoPose4,
	sKabutoPose5,
	sKabutoPose6,
	sKabutoPose33,
	sKabutoPose34,
	sKabutoPose7,
	sKabutoPose8,
	sKabutoPose9,
	sKabutoPose38,
	sKabutoPose39,
	sKabutoPose10,
	sKabutoPose11,
	sKabutoPose12,
	sKabutoPose43,
	sKabutoPose44,
	sKabutoPose13,
	sKabutoPose14,
	sKabutoPose15,
	sKabutoPose48,
	sKabutoPose49,
	sKabutoPose16,
	sKabutoPose17,
	sKabutoPose18,
	sKabutoPose53,
	sKabutoPose54,
	sKabutoPose19,
	sKabutoPose20,
	sKabutoPose21,
	sKabutoPose58,
	sKabutoPose59,
	sKabutoPose22,
	sKabutoPose23,
	sKabutoPose24,
	sKabutoPose63,
	sKabutoPose64,
	sKabutoPose1,
	sKabutoPose28,
	sKabutoPose107,
	sKabutoPose4,
	sKabutoPose33,
	sKabutoPose110,
	sKabutoPose7,
	sKabutoPose38,
	sKabutoPose113,
	sKabutoPose10,
	sKabutoPose43,
	sKabutoPose116,
	sKabutoPose13,
	sKabutoPose48,
	sKabutoPose119,
	sKabutoPose16,
	sKabutoPose53,
	sKabutoPose122,
	sKabutoPose19,
	sKabutoPose58,
	sKabutoPose125,
	sKabutoPose22,
	sKabutoPose63,
	sKabutoPose128,
	sKabutoPose28,
	sKabutoPose63,
	sKabutoPose58,
	sKabutoPose53,
	sKabutoPose48,
	sKabutoPose43,
	sKabutoPose38,
	sKabutoPose33,
	sKabutoPose137,
	sKabutoPose138,
	sKabutoPose139,
	sKabutoPose140,
	sKabutoPose141,
	sKabutoPose142,
	sKabutoPose143,
	sKabutoPose144,
	sKabutoPose145,
	sKabutoPose146,
	sKabutoPose147,
	sKabutoPose148,
	sKabutoPose149,
	sKabutoPose150,
	sKabutoPose151,
	sKabutoPose152,
	sKabutoPose153,
	sKabutoPose154,
	sKabutoPose155,
	sKabutoPose156,
	sKabutoPose157,
	sKabutoPose158,
	sKabutoPose159,
	sKabutoPose160,
	sKabutoPose161,
	sKabutoPose162,
	sKabutoPose28,
	sKabutoPose63,
	sKabutoPose58,
	sKabutoPose53,
	sKabutoPose48,
	sKabutoPose43,
	sKabutoPose38,
	sKabutoPose33,
	sKabutoPose137,
	sKabutoPose138,
	sKabutoPose139,
	sKabutoPose140,
	sKabutoPose141,
	sKabutoPose142,
	sKabutoPose143,
	sKabutoPose144,
	sKabutoPose145,
	sKabutoPose146,
	sKabutoPose147,
	sKabutoPose148,
	sKabutoPose149,
	sKabutoPose150,
	sKabutoPose151,
	sKabutoPose152,
	sKabutoPose28,
	sKabutoPose63,
	sKabutoPose58,
	sKabutoPose53,
	sKabutoPose48,
	sKabutoPose43,
	sKabutoPose38,
	sKabutoPose33,
	sKabutoPose137,
	sKabutoPose138,
	sKabutoPose139,
	sKabutoPose140,
	sKabutoPose141,
	sKabutoPose142,
	sKabutoPose143,
	sKabutoPose144,
	sKabutoPose145,
	sKabutoPose146,
	sKabutoPose147,
	sKabutoPose148,
	sKabutoPose149,
	sKabutoPose150,
	sKabutoPose151,
	sKabutoPose152,
	sKabutoPose28,
	sKabutoPose33,
	sKabutoPose38,
	sKabutoPose43,
	sKabutoPose48,
	sKabutoPose53,
	sKabutoPose58,
	sKabutoPose63,
	sKabutoPose1,
	sKabutoPose29,
	sKabutoPose28,
	sKabutoPose4,
	sKabutoPose34,
	sKabutoPose33,
	sKabutoPose7,
	sKabutoPose39,
	sKabutoPose38,
	sKabutoPose10,
	sKabutoPose44,
	sKabutoPose43,
	sKabutoPose13,
	sKabutoPose49,
	sKabutoPose48,
	sKabutoPose16,
	sKabutoPose54,
	sKabutoPose53,
	sKabutoPose19,
	sKabutoPose59,
	sKabutoPose58,
	sKabutoPose22,
	sKabutoPose64,
	sKabutoPose63,
	sKabutoPose243,
	sKabutoPose244,
	sKabutoPose245,
	sKabutoPose246,
	sKabutoPose247,
	sKabutoPose248,
	sKabutoPose249,
	sKabutoPose250,
	sKabutoPose28,
	sKabutoPose63,
	sKabutoPose58,
	sKabutoPose53,
	sKabutoPose48,
	sKabutoPose43,
	sKabutoPose38,
	sKabutoPose33,
	sKabutoPose137,
	sKabutoPose138,
	sKabutoPose139,
	sKabutoPose140,
	sKabutoPose141,
	sKabutoPose142,
	sKabutoPose143,
	sKabutoPose144,
	sKabutoPose145,
	sKabutoPose146,
	sKabutoPose147,
	sKabutoPose148,
	sKabutoPose149,
	sKabutoPose150,
	sKabutoPose151,
	sKabutoPose152,
};

static const struct PositionSets sAxPositionsKabuto[] = {
	[0] = { .set = { {-1, -1}, {-7, 1}, {6, 1}, {0, -5} } },
	[1] = { .set = { {-2, 0}, {-9, 0}, {4, 2}, {0, -5} } },
	[2] = { .set = { {1, 0}, {-5, 2}, {8, 0}, {-1, -5} } },
	[3] = { .set = { {6, -2}, {10, -3}, {1, 2}, {0, -5} } },
	[4] = { .set = { {8, -2}, {10, -3}, {4, 4}, {1, -4} } },
	[5] = { .set = { {5, 0}, {6, -8}, {9, 0}, {1, -4} } },
	[6] = { .set = { {9, -5}, {7, -9}, {7, 1}, {1, -7} } },
	[7] = { .set = { {9, -7}, {3, -8}, {9, 0}, {1, -5} } },
	[8] = { .set = { {10, -6}, {10, -8}, {3, 2}, {1, -6} } },
	[9] = { .set = { {4, -11}, {0, -10}, {10, -4}, {1, -8} } },
	[10] = { .set = { {2, -10}, {-2, -9}, {10, -6}, {0, -6} } },
	[11] = { .set = { {6, -9}, {5, -11}, {9, 0}, {0, -7} } },
	[12] = { .set = { {-1, -10}, {8, -3}, {-9, -3}, {0, -6} } },
	[13] = { .set = { {1, -11}, {8, -2}, {-9, -9}, {-2, -7} } },
	[14] = { .set = { {-2, -11}, {8, -9}, {-9, -2}, {1, -7} } },
	[15] = { .set = { {-5, -10}, {-1, -9}, {-11, -3}, {-2, -7} } },
	[16] = { .set = { {-3, -9}, {1, -8}, {-11, -5}, {-1, -5} } },
	[17] = { .set = { {-7, -8}, {-6, -10}, {-10, 1}, {-1, -6} } },
	[18] = { .set = { {-10, -4}, {-8, -8}, {-8, 2}, {-2, -6} } },
	[19] = { .set = { {-10, -6}, {-4, -7}, {-10, 1}, {-2, -4} } },
	[20] = { .set = { {-11, -5}, {-11, -7}, {-4, 3}, {-2, -5} } },
	[21] = { .set = { {-7, -1}, {-11, -2}, {-2, 3}, {-1, -4} } },
	[22] = { .set = { {-9, -2}, {-11, -3}, {-5, 4}, {-2, -4} } },
	[23] = { .set = { {-6, 0}, {-7, -8}, {-10, 0}, {-2, -4} } },
	[24] = { .set = { {-1, -1}, {-7, 1}, {6, 1}, {0, -5} } },
	[25] = { .set = { {-2, 0}, {-9, 0}, {4, 2}, {0, -5} } },
	[26] = { .set = { {1, 0}, {-5, 2}, {8, 0}, {-1, -5} } },
	[27] = { .set = { {-1, -1}, {-2, 1}, {1, 1}, {-1, -5} } },
	[28] = { .set = { {0, -3}, {-8, 0}, {7, 0}, {-1, -5} } },
	[29] = { .set = { {6, -2}, {10, -3}, {1, 2}, {0, -5} } },
	[30] = { .set = { {8, -2}, {10, -3}, {4, 4}, {1, -4} } },
	[31] = { .set = { {5, 0}, {6, -8}, {9, 0}, {1, -4} } },
	[32] = { .set = { {5, -3}, {7, -3}, {4, -1}, {1, -5} } },
	[33] = { .set = { {4, -6}, {9, -5}, {0, 0}, {0, -6} } },
	[34] = { .set = { {9, -5}, {7, -9}, {7, 1}, {1, -7} } },
	[35] = { .set = { {9, -7}, {3, -8}, {9, 0}, {1, -5} } },
	[36] = { .set = { {10, -6}, {10, -8}, {3, 2}, {1, -6} } },
	[37] = { .set = { {8, -6}, {7, -5}, {6, -1}, {1, -5} } },
	[38] = { .set = { {4, -10}, {6, -11}, {4, -2}, {-2, -8} } },
	[39] = { .set = { {4, -11}, {0, -10}, {10, -4}, {1, -8} } },
	[40] = { .set = { {2, -10}, {-2, -9}, {10, -6}, {0, -6} } },
	[41] = { .set = { {6, -9}, {5, -11}, {9, 0}, {0, -7} } },
	[42] = { .set = { {3, -11}, {4, -12}, {5, -11}, {0, -6} } },
	[43] = { .set = { {1, -11}, {0, -13}, {10, -6}, {-1, -5} } },
	[44] = { .set = { {-1, -10}, {8, -3}, {-9, -3}, {0, -6} } },
	[45] = { .set = { {1, -11}, {8, -2}, {-9, -9}, {-2, -7} } },
	[46] = { .set = { {-2, -11}, {8, -9}, {-9, -2}, {1, -7} } },
	[47] = { .set = { {-1, -11}, {2, -11}, {-3, -11}, {-1, -7} } },
	[48] = { .set = { {0, -9}, {10, -8}, {-11, -8}, {0, -6} } },
	[49] = { .set = { {-5, -10}, {-1, -9}, {-11, -3}, {-2, -7} } },
	[50] = { .set = { {-3, -9}, {1, -8}, {-11, -5}, {-1, -5} } },
	[51] = { .set = { {-7, -8}, {-6, -10}, {-10, 1}, {-1, -6} } },
	[52] = { .set = { {-4, -11}, {-5, -12}, {-6, -11}, {-1, -6} } },
	[53] = { .set = { {-2, -11}, {-1, -13}, {-11, -6}, {0, -5} } },
	[54] = { .set = { {-10, -4}, {-8, -8}, {-8, 2}, {-2, -6} } },
	[55] = { .set = { {-10, -6}, {-4, -7}, {-10, 1}, {-2, -4} } },
	[56] = { .set = { {-11, -5}, {-11, -7}, {-4, 3}, {-2, -5} } },
	[57] = { .set = { {-9, -6}, {-8, -5}, {-7, -1}, {-2, -5} } },
	[58] = { .set = { {-5, -10}, {-7, -11}, {-5, -2}, {1, -8} } },
	[59] = { .set = { {-7, -1}, {-11, -2}, {-2, 3}, {-1, -4} } },
	[60] = { .set = { {-9, -2}, {-11, -3}, {-5, 4}, {-2, -4} } },
	[61] = { .set = { {-6, 0}, {-7, -8}, {-10, 0}, {-2, -4} } },
	[62] = { .set = { {-6, -3}, {-8, -3}, {-5, -1}, {-2, -5} } },
	[63] = { .set = { {-5, -6}, {-10, -5}, {-1, 0}, {-1, -6} } },
	[64] = { .set = { {-1, -1}, {-7, 1}, {6, 1}, {0, -5} } },
	[65] = { .set = { {-2, 0}, {-9, 0}, {4, 2}, {0, -5} } },
	[66] = { .set = { {1, 0}, {-5, 2}, {8, 0}, {-1, -5} } },
	[67] = { .set = { {-1, -1}, {-2, 1}, {1, 1}, {-1, -5} } },
	[68] = { .set = { {0, -3}, {-8, 0}, {7, 0}, {-1, -5} } },
	[69] = { .set = { {6, -2}, {10, -3}, {1, 2}, {0, -5} } },
	[70] = { .set = { {8, -2}, {10, -3}, {4, 4}, {1, -4} } },
	[71] = { .set = { {5, 0}, {6, -8}, {9, 0}, {1, -4} } },
	[72] = { .set = { {5, -3}, {7, -3}, {4, -1}, {1, -5} } },
	[73] = { .set = { {4, -6}, {9, -5}, {0, 0}, {0, -6} } },
	[74] = { .set = { {9, -5}, {7, -9}, {7, 1}, {1, -7} } },
	[75] = { .set = { {9, -7}, {3, -8}, {9, 0}, {1, -5} } },
	[76] = { .set = { {10, -6}, {10, -8}, {3, 2}, {1, -6} } },
	[77] = { .set = { {8, -6}, {7, -5}, {6, -1}, {1, -5} } },
	[78] = { .set = { {4, -10}, {6, -11}, {4, -2}, {-2, -8} } },
	[79] = { .set = { {4, -11}, {0, -10}, {10, -4}, {1, -8} } },
	[80] = { .set = { {2, -10}, {-2, -9}, {10, -6}, {0, -6} } },
	[81] = { .set = { {6, -9}, {5, -11}, {9, 0}, {0, -7} } },
	[82] = { .set = { {3, -11}, {4, -12}, {5, -11}, {0, -6} } },
	[83] = { .set = { {1, -11}, {0, -13}, {10, -6}, {-1, -5} } },
	[84] = { .set = { {-1, -10}, {8, -3}, {-9, -3}, {0, -6} } },
	[85] = { .set = { {1, -11}, {8, -2}, {-9, -9}, {-2, -7} } },
	[86] = { .set = { {-2, -11}, {8, -9}, {-9, -2}, {1, -7} } },
	[87] = { .set = { {-1, -11}, {2, -11}, {-3, -11}, {-1, -7} } },
	[88] = { .set = { {0, -9}, {10, -8}, {-11, -8}, {0, -6} } },
	[89] = { .set = { {-5, -10}, {-1, -9}, {-11, -3}, {-2, -7} } },
	[90] = { .set = { {-3, -9}, {1, -8}, {-11, -5}, {-1, -5} } },
	[91] = { .set = { {-7, -8}, {-6, -10}, {-10, 1}, {-1, -6} } },
	[92] = { .set = { {-4, -11}, {-5, -12}, {-6, -11}, {-1, -6} } },
	[93] = { .set = { {-2, -11}, {-1, -13}, {-11, -6}, {0, -5} } },
	[94] = { .set = { {-10, -4}, {-8, -8}, {-8, 2}, {-2, -6} } },
	[95] = { .set = { {-10, -6}, {-4, -7}, {-10, 1}, {-2, -4} } },
	[96] = { .set = { {-11, -5}, {-11, -7}, {-4, 3}, {-2, -5} } },
	[97] = { .set = { {-9, -6}, {-8, -5}, {-7, -1}, {-2, -5} } },
	[98] = { .set = { {-5, -10}, {-7, -11}, {-5, -2}, {1, -8} } },
	[99] = { .set = { {-7, -1}, {-11, -2}, {-2, 3}, {-1, -4} } },
	[100] = { .set = { {-9, -2}, {-11, -3}, {-5, 4}, {-2, -4} } },
	[101] = { .set = { {-6, 0}, {-7, -8}, {-10, 0}, {-2, -4} } },
	[102] = { .set = { {-6, -3}, {-8, -3}, {-5, -1}, {-2, -5} } },
	[103] = { .set = { {-5, -6}, {-10, -5}, {-1, 0}, {-1, -6} } },
	[104] = { .set = { {-1, -1}, {-7, 1}, {6, 1}, {0, -5} } },
	[105] = { .set = { {-1, -1}, {-2, 1}, {1, 1}, {-1, -5} } },
	[106] = { .set = { {-1, -7}, {-2, -5}, {1, -5}, {0, -6} } },
	[107] = { .set = { {6, -2}, {10, -3}, {1, 2}, {0, -5} } },
	[108] = { .set = { {5, -3}, {7, -3}, {4, -1}, {1, -5} } },
	[109] = { .set = { {3, -6}, {5, -5}, {1, -3}, {0, -6} } },
	[110] = { .set = { {9, -5}, {7, -9}, {7, 1}, {1, -7} } },
	[111] = { .set = { {8, -6}, {7, -5}, {6, -1}, {1, -5} } },
	[112] = { .set = { {6, -9}, {8, -9}, {7, -6}, {1, -7} } },
	[113] = { .set = { {4, -11}, {0, -10}, {10, -4}, {1, -8} } },
	[114] = { .set = { {3, -11}, {4, -12}, {5, -11}, {0, -6} } },
	[115] = { .set = { {2, -13}, {1, -13}, {4, -12}, {0, -8} } },
	[116] = { .set = { {-1, -10}, {8, -3}, {-9, -3}, {0, -6} } },
	[117] = { .set = { {-1, -11}, {2, -11}, {-3, -11}, {-1, -7} } },
	[118] = { .set = { {-1, -11}, {3, -11}, {-4, -11}, {0, -8} } },
	[119] = { .set = { {-5, -10}, {-1, -9}, {-11, -3}, {-2, -7} } },
	[120] = { .set = { {-4, -11}, {-5, -12}, {-6, -11}, {-1, -6} } },
	[121] = { .set = { {-3, -13}, {-2, -13}, {-5, -12}, {-1, -8} } },
	[122] = { .set = { {-10, -4}, {-8, -8}, {-8, 2}, {-2, -6} } },
	[123] = { .set = { {-9, -6}, {-8, -5}, {-7, -1}, {-2, -5} } },
	[124] = { .set = { {-7, -9}, {-9, -9}, {-8, -6}, {-2, -7} } },
	[125] = { .set = { {-7, -1}, {-11, -2}, {-2, 3}, {-1, -4} } },
	[126] = { .set = { {-6, -3}, {-8, -3}, {-5, -1}, {-2, -5} } },
	[127] = { .set = { {-4, -6}, {-6, -5}, {-2, -3}, {-1, -6} } },
	[128] = { .set = { {-1, -1}, {-2, 1}, {1, 1}, {-1, -5} } },
	[129] = { .set = { {-6, -3}, {-8, -3}, {-5, -1}, {-2, -5} } },
	[130] = { .set = { {-9, -6}, {-8, -5}, {-7, -1}, {-2, -5} } },
	[131] = { .set = { {-4, -11}, {-5, -12}, {-6, -11}, {-1, -6} } },
	[132] = { .set = { {-1, -11}, {2, -11}, {-3, -11}, {-1, -7} } },
	[133] = { .set = { {3, -11}, {4, -12}, {5, -11}, {0, -6} } },
	[134] = { .set = { {8, -6}, {7, -5}, {6, -1}, {1, -5} } },
	[135] = { .set = { {5, -3}, {7, -3}, {4, -1}, {1, -5} } },
	[136] = { .set = { {-5, -10}, {-6, -8}, {-3, -8}, {-5, -14} } },
	[137] = { .set = { {-8, -12}, {-10, -12}, {-7, -10}, {-4, -14} } },
	[138] = { .set = { {-11, -10}, {-10, -9}, {-9, -5}, {-4, -9} } },
	[139] = { .set = { {-4, -15}, {-5, -16}, {-6, -15}, {-1, -10} } },
	[140] = { .set = { {-5, -15}, {-2, -15}, {-7, -15}, {-5, -11} } },
	[141] = { .set = { {3, -15}, {4, -16}, {5, -15}, {0, -10} } },
	[142] = { .set = { {10, -10}, {9, -9}, {8, -5}, {3, -9} } },
	[143] = { .set = { {7, -12}, {9, -12}, {6, -10}, {3, -14} } },
	[144] = { .set = { {-5, -10}, {-11, -8}, {2, -8}, {-4, -14} } },
	[145] = { .set = { {-9, -12}, {-13, -13}, {-4, -8}, {-3, -15} } },
	[146] = { .set = { {-12, -8}, {-10, -12}, {-10, -2}, {-4, -10} } },
	[147] = { .set = { {-5, -14}, {-1, -13}, {-11, -7}, {-2, -11} } },
	[148] = { .set = { {-5, -15}, {4, -8}, {-13, -8}, {-4, -11} } },
	[149] = { .set = { {4, -14}, {0, -13}, {10, -7}, {1, -11} } },
	[150] = { .set = { {11, -8}, {9, -12}, {9, -2}, {3, -10} } },
	[151] = { .set = { {8, -12}, {12, -13}, {3, -8}, {2, -15} } },
	[152] = { .set = { {-6, 0}, {-9, -1}, {-3, 2}, {-1, -4} } },
	[153] = { .set = { {-5, 1}, {-8, -1}, {-4, 2}, {-1, -4} } },
	[154] = { .set = { {-1, -9}, {-5, -10}, {2, -9}, {-1, -7} } },
	[155] = { .set = { {-1, -10}, {2, -12}, {-1, -9}, {0, -7} } },
	[156] = { .set = { {-1, -9}, {0, -15}, {1, -9}, {-1, -8} } },
	[157] = { .set = { {-2, -9}, {-3, -15}, {4, -11}, {-1, -7} } },
	[158] = { .set = { {-1, -9}, {4, -13}, {-3, -13}, {0, -9} } },
	[159] = { .set = { {1, -9}, {2, -15}, {-5, -11}, {0, -7} } },
	[160] = { .set = { {0, -9}, {-1, -15}, {-2, -9}, {0, -8} } },
	[161] = { .set = { {0, -10}, {-3, -12}, {0, -9}, {-1, -7} } },
	[162] = { .set = { {-1, -1}, {-2, 1}, {1, 1}, {-1, -5} } },
	[163] = { .set = { {-6, -3}, {-8, -3}, {-5, -1}, {-2, -5} } },
	[164] = { .set = { {-9, -6}, {-8, -5}, {-7, -1}, {-2, -5} } },
	[165] = { .set = { {-4, -11}, {-5, -12}, {-6, -11}, {-1, -6} } },
	[166] = { .set = { {-1, -11}, {2, -11}, {-3, -11}, {-1, -7} } },
	[167] = { .set = { {3, -11}, {4, -12}, {5, -11}, {0, -6} } },
	[168] = { .set = { {8, -6}, {7, -5}, {6, -1}, {1, -5} } },
	[169] = { .set = { {5, -3}, {7, -3}, {4, -1}, {1, -5} } },
	[170] = { .set = { {-5, -10}, {-6, -8}, {-3, -8}, {-5, -14} } },
	[171] = { .set = { {-8, -12}, {-10, -12}, {-7, -10}, {-4, -14} } },
	[172] = { .set = { {-11, -10}, {-10, -9}, {-9, -5}, {-4, -9} } },
	[173] = { .set = { {-4, -15}, {-5, -16}, {-6, -15}, {-1, -10} } },
	[174] = { .set = { {-5, -15}, {-2, -15}, {-7, -15}, {-5, -11} } },
	[175] = { .set = { {3, -15}, {4, -16}, {5, -15}, {0, -10} } },
	[176] = { .set = { {10, -10}, {9, -9}, {8, -5}, {3, -9} } },
	[177] = { .set = { {7, -12}, {9, -12}, {6, -10}, {3, -14} } },
	[178] = { .set = { {-5, -10}, {-11, -8}, {2, -8}, {-4, -14} } },
	[179] = { .set = { {-9, -12}, {-13, -13}, {-4, -8}, {-3, -15} } },
	[180] = { .set = { {-12, -8}, {-10, -12}, {-10, -2}, {-4, -10} } },
	[181] = { .set = { {-5, -14}, {-1, -13}, {-11, -7}, {-2, -11} } },
	[182] = { .set = { {-5, -15}, {4, -8}, {-13, -8}, {-4, -11} } },
	[183] = { .set = { {4, -14}, {0, -13}, {10, -7}, {1, -11} } },
	[184] = { .set = { {11, -8}, {9, -12}, {9, -2}, {3, -10} } },
	[185] = { .set = { {8, -12}, {12, -13}, {3, -8}, {2, -15} } },
	[186] = { .set = { {-1, -1}, {-2, 1}, {1, 1}, {-1, -5} } },
	[187] = { .set = { {-6, -3}, {-8, -3}, {-5, -1}, {-2, -5} } },
	[188] = { .set = { {-9, -6}, {-8, -5}, {-7, -1}, {-2, -5} } },
	[189] = { .set = { {-4, -11}, {-5, -12}, {-6, -11}, {-1, -6} } },
	[190] = { .set = { {-1, -11}, {2, -11}, {-3, -11}, {-1, -7} } },
	[191] = { .set = { {3, -11}, {4, -12}, {5, -11}, {0, -6} } },
	[192] = { .set = { {8, -6}, {7, -5}, {6, -1}, {1, -5} } },
	[193] = { .set = { {5, -3}, {7, -3}, {4, -1}, {1, -5} } },
	[194] = { .set = { {-5, -10}, {-6, -8}, {-3, -8}, {-5, -14} } },
	[195] = { .set = { {-8, -12}, {-10, -12}, {-7, -10}, {-4, -14} } },
	[196] = { .set = { {-11, -10}, {-10, -9}, {-9, -5}, {-4, -9} } },
	[197] = { .set = { {-4, -15}, {-5, -16}, {-6, -15}, {-1, -10} } },
	[198] = { .set = { {-5, -15}, {-2, -15}, {-7, -15}, {-5, -11} } },
	[199] = { .set = { {3, -15}, {4, -16}, {5, -15}, {0, -10} } },
	[200] = { .set = { {10, -10}, {9, -9}, {8, -5}, {3, -9} } },
	[201] = { .set = { {7, -12}, {9, -12}, {6, -10}, {3, -14} } },
	[202] = { .set = { {-5, -10}, {-11, -8}, {2, -8}, {-4, -14} } },
	[203] = { .set = { {-9, -12}, {-13, -13}, {-4, -8}, {-3, -15} } },
	[204] = { .set = { {-12, -8}, {-10, -12}, {-10, -2}, {-4, -10} } },
	[205] = { .set = { {-5, -14}, {-1, -13}, {-11, -7}, {-2, -11} } },
	[206] = { .set = { {-5, -15}, {4, -8}, {-13, -8}, {-4, -11} } },
	[207] = { .set = { {4, -14}, {0, -13}, {10, -7}, {1, -11} } },
	[208] = { .set = { {11, -8}, {9, -12}, {9, -2}, {3, -10} } },
	[209] = { .set = { {8, -12}, {12, -13}, {3, -8}, {2, -15} } },
	[210] = { .set = { {-1, -1}, {-2, 1}, {1, 1}, {-1, -5} } },
	[211] = { .set = { {5, -3}, {7, -3}, {4, -1}, {1, -5} } },
	[212] = { .set = { {8, -6}, {7, -5}, {6, -1}, {1, -5} } },
	[213] = { .set = { {3, -11}, {4, -12}, {5, -11}, {0, -6} } },
	[214] = { .set = { {-1, -11}, {2, -11}, {-3, -11}, {-1, -7} } },
	[215] = { .set = { {-4, -11}, {-5, -12}, {-6, -11}, {-1, -6} } },
	[216] = { .set = { {-9, -6}, {-8, -5}, {-7, -1}, {-2, -5} } },
	[217] = { .set = { {-6, -3}, {-8, -3}, {-5, -1}, {-2, -5} } },
	[218] = { .set = { {-1, -1}, {-7, 1}, {6, 1}, {0, -5} } },
	[219] = { .set = { {0, -3}, {-8, 0}, {7, 0}, {-1, -5} } },
	[220] = { .set = { {-1, -1}, {-2, 1}, {1, 1}, {-1, -5} } },
	[221] = { .set = { {6, -2}, {10, -3}, {1, 2}, {0, -5} } },
	[222] = { .set = { {4, -6}, {9, -5}, {0, 0}, {0, -6} } },
	[223] = { .set = { {5, -3}, {7, -3}, {4, -1}, {1, -5} } },
	[224] = { .set = { {9, -5}, {7, -9}, {7, 1}, {1, -7} } },
	[225] = { .set = { {4, -10}, {6, -11}, {4, -2}, {-2, -8} } },
	[226] = { .set = { {8, -6}, {7, -5}, {6, -1}, {1, -5} } },
	[227] = { .set = { {4, -11}, {0, -10}, {10, -4}, {1, -8} } },
	[228] = { .set = { {1, -11}, {0, -13}, {10, -6}, {-1, -5} } },
	[229] = { .set = { {3, -11}, {4, -12}, {5, -11}, {0, -6} } },
	[230] = { .set = { {-1, -10}, {8, -3}, {-9, -3}, {0, -6} } },
	[231] = { .set = { {0, -9}, {10, -8}, {-11, -8}, {0, -6} } },
	[232] = { .set = { {-1, -11}, {2, -11}, {-3, -11}, {-1, -7} } },
	[233] = { .set = { {-5, -10}, {-1, -9}, {-11, -3}, {-2, -7} } },
	[234] = { .set = { {-2, -11}, {-1, -13}, {-11, -6}, {0, -5} } },
	[235] = { .set = { {-4, -11}, {-5, -12}, {-6, -11}, {-1, -6} } },
	[236] = { .set = { {-10, -4}, {-8, -8}, {-8, 2}, {-2, -6} } },
	[237] = { .set = { {-5, -10}, {-7, -11}, {-5, -2}, {1, -8} } },
	[238] = { .set = { {-9, -6}, {-8, -5}, {-7, -1}, {-2, -5} } },
	[239] = { .set = { {-7, -1}, {-11, -2}, {-2, 3}, {-1, -4} } },
	[240] = { .set = { {-5, -6}, {-10, -5}, {-1, 0}, {-1, -6} } },
	[241] = { .set = { {-6, -3}, {-8, -3}, {-5, -1}, {-2, -5} } },
	[242] = { .set = { {0, -6}, {-8, -3}, {7, -3}, {-1, -8} } },
	[243] = { .set = { {-5, -7}, {-10, -6}, {-1, -1}, {-1, -7} } },
	[244] = { .set = { {-5, -11}, {-7, -12}, {-5, -3}, {1, -9} } },
	[245] = { .set = { {-2, -13}, {-1, -15}, {-11, -8}, {0, -7} } },
	[246] = { .set = { {0, -11}, {10, -10}, {-11, -10}, {0, -8} } },
	[247] = { .set = { {1, -13}, {0, -15}, {10, -8}, {-1, -7} } },
	[248] = { .set = { {4, -11}, {6, -12}, {4, -3}, {-2, -9} } },
	[249] = { .set = { {4, -7}, {9, -6}, {0, -1}, {0, -7} } },
	[250] = { .set = { {-1, -1}, {-2, 1}, {1, 1}, {-1, -5} } },
	[251] = { .set = { {-6, -3}, {-8, -3}, {-5, -1}, {-2, -5} } },
	[252] = { .set = { {-9, -6}, {-8, -5}, {-7, -1}, {-2, -5} } },
	[253] = { .set = { {-4, -11}, {-5, -12}, {-6, -11}, {-1, -6} } },
	[254] = { .set = { {-1, -11}, {2, -11}, {-3, -11}, {-1, -7} } },
	[255] = { .set = { {3, -11}, {4, -12}, {5, -11}, {0, -6} } },
	[256] = { .set = { {8, -6}, {7, -5}, {6, -1}, {1, -5} } },
	[257] = { .set = { {5, -3}, {7, -3}, {4, -1}, {1, -5} } },
	[258] = { .set = { {-5, -10}, {-6, -8}, {-3, -8}, {-5, -14} } },
	[259] = { .set = { {-8, -12}, {-10, -12}, {-7, -10}, {-4, -14} } },
	[260] = { .set = { {-11, -10}, {-10, -9}, {-9, -5}, {-4, -9} } },
	[261] = { .set = { {-4, -15}, {-5, -16}, {-6, -15}, {-1, -10} } },
	[262] = { .set = { {-5, -15}, {-2, -15}, {-7, -15}, {-5, -11} } },
	[263] = { .set = { {3, -15}, {4, -16}, {5, -15}, {0, -10} } },
	[264] = { .set = { {10, -10}, {9, -9}, {8, -5}, {3, -9} } },
	[265] = { .set = { {7, -12}, {9, -12}, {6, -10}, {3, -14} } },
	[266] = { .set = { {-5, -10}, {-11, -8}, {2, -8}, {-4, -14} } },
	[267] = { .set = { {-9, -12}, {-13, -13}, {-4, -8}, {-3, -15} } },
	[268] = { .set = { {-12, -8}, {-10, -12}, {-10, -2}, {-4, -10} } },
	[269] = { .set = { {-5, -14}, {-1, -13}, {-11, -7}, {-2, -11} } },
	[270] = { .set = { {-5, -15}, {4, -8}, {-13, -8}, {-4, -11} } },
	[271] = { .set = { {4, -14}, {0, -13}, {10, -7}, {1, -11} } },
	[272] = { .set = { {11, -8}, {9, -12}, {9, -2}, {3, -10} } },
	[273] = { .set = { {8, -12}, {12, -13}, {3, -8}, {2, -15} } },
};

static const ax_anim *const sKabutoAnimTable1[] = {
	gAxSharedAnim_02602,
	gAxSharedAnim_02678,
	gAxSharedAnim_02687,
	gAxSharedAnim_02696,
	gAxSharedAnim_02614,
	gAxSharedAnim_02636,
	gAxSharedAnim_02649,
	gAxSharedAnim_02658,
};

static const ax_anim *const sKabutoAnimTable2[] = {
	sKabutoAnims_2_1,
	sKabutoAnims_2_2,
	sKabutoAnims_2_3,
	sKabutoAnims_2_4,
	sKabutoAnims_2_5,
	sKabutoAnims_2_6,
	sKabutoAnims_2_7,
	sKabutoAnims_2_8,
};

static const ax_anim *const sKabutoAnimTable3[] = {
	sKabutoAnims_3_1,
	sKabutoAnims_3_2,
	sKabutoAnims_3_3,
	sKabutoAnims_3_4,
	sKabutoAnims_3_5,
	sKabutoAnims_3_6,
	sKabutoAnims_3_7,
	sKabutoAnims_3_8,
};

static const ax_anim *const sKabutoAnimTable4[] = {
	sKabutoAnims_4_1,
	sKabutoAnims_4_2,
	sKabutoAnims_4_3,
	sKabutoAnims_4_4,
	sKabutoAnims_4_5,
	sKabutoAnims_4_6,
	sKabutoAnims_4_7,
	sKabutoAnims_4_8,
};

static const ax_anim *const sKabutoAnimTable5[] = {
	gAxSharedAnim_00381,
	gAxSharedAnim_00438,
	gAxSharedAnim_00433,
	gAxSharedAnim_00427,
	gAxSharedAnim_00418,
	gAxSharedAnim_00409,
	gAxSharedAnim_00401,
	gAxSharedAnim_00389,
};

static const ax_anim *const sKabutoAnimTable6[] = {
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
};

static const ax_anim *const sKabutoAnimTable7[] = {
	gAxSharedAnim_00606,
	gAxSharedAnim_00617,
	gAxSharedAnim_00626,
	gAxSharedAnim_00637,
	gAxSharedAnim_00654,
	gAxSharedAnim_00665,
	gAxSharedAnim_00680,
	gAxSharedAnim_00691,
};

static const ax_anim *const sKabutoAnimTable8[] = {
	sKabutoAnims_8_1,
	sKabutoAnims_8_2,
	sKabutoAnims_8_3,
	sKabutoAnims_8_4,
	sKabutoAnims_8_5,
	sKabutoAnims_8_6,
	sKabutoAnims_8_7,
	sKabutoAnims_8_8,
};

static const ax_anim *const sKabutoAnimTable9[] = {
	sKabutoAnims_9_1,
	sKabutoAnims_9_2,
	gAxSharedAnim_01107,
	sKabutoAnims_9_4,
	sKabutoAnims_9_5,
	sKabutoAnims_9_6,
	gAxSharedAnim_01035,
	sKabutoAnims_9_8,
};

static const ax_anim *const sKabutoAnimTable10[] = {
	gAxSharedAnim_01333,
	gAxSharedAnim_01347,
	gAxSharedAnim_01357,
	gAxSharedAnim_01365,
	gAxSharedAnim_01373,
	gAxSharedAnim_01384,
	gAxSharedAnim_01395,
	gAxSharedAnim_01410,
};

static const ax_anim *const sKabutoAnimTable11[] = {
	gAxSharedAnim_01417,
	gAxSharedAnim_01440,
	gAxSharedAnim_01459,
	gAxSharedAnim_01475,
	gAxSharedAnim_01495,
	gAxSharedAnim_01515,
	gAxSharedAnim_01535,
	gAxSharedAnim_01552,
};

static const ax_anim *const sKabutoAnimTable12[] = {
	gAxSharedAnim_01587,
	gAxSharedAnim_01628,
	gAxSharedAnim_01617,
	gAxSharedAnim_01610,
	gAxSharedAnim_01609,
	gAxSharedAnim_01603,
	gAxSharedAnim_01595,
	gAxSharedAnim_01588,
};

static const ax_anim *const sKabutoAnimTable13[] = {
	gAxSharedAnim_01637,
	gAxSharedAnim_01670,
	gAxSharedAnim_01667,
	gAxSharedAnim_01663,
	gAxSharedAnim_01658,
	gAxSharedAnim_01653,
	gAxSharedAnim_01649,
	gAxSharedAnim_01644,
};

static const ax_anim *const *const sAxAnimationsKabuto[] = {
	sKabutoAnimTable1,
	sKabutoAnimTable2,
	sKabutoAnimTable3,
	sKabutoAnimTable4,
	sKabutoAnimTable5,
	sKabutoAnimTable6,
	sKabutoAnimTable7,
	sKabutoAnimTable8,
	sKabutoAnimTable9,
	sKabutoAnimTable10,
	sKabutoAnimTable11,
	sKabutoAnimTable12,
	sKabutoAnimTable13,
};

static const ax_sprite *const sAxSpritesKabuto[] = {
	sKabutoSprites1,
	sKabutoSprites2,
	sKabutoSprites3,
	sKabutoSprites4,
	sKabutoSprites5,
	sKabutoSprites6,
	sKabutoSprites7,
	sKabutoSprites8,
	sKabutoSprites9,
	sKabutoSprites10,
	sKabutoSprites11,
	sKabutoSprites12,
	sKabutoSprites13,
	sKabutoSprites14,
	sKabutoSprites15,
	sKabutoSprites16,
	sKabutoSprites17,
	sKabutoSprites18,
	sKabutoSprites19,
	sKabutoSprites20,
	sKabutoSprites21,
	sKabutoSprites22,
	sKabutoSprites23,
	sKabutoSprites24,
	sKabutoSprites25,
	sKabutoSprites26,
	sKabutoSprites27,
	sKabutoSprites28,
	sKabutoSprites29,
	sKabutoSprites30,
	sKabutoSprites31,
	sKabutoSprites32,
	sKabutoSprites33,
	sKabutoSprites34,
	sKabutoSprites35,
	sKabutoSprites36,
	sKabutoSprites37,
	sKabutoSprites38,
	sKabutoSprites39,
	sKabutoSprites40,
	sKabutoSprites41,
};

static const axmain sAxMainKabuto = {
	.poses = sAxPosesKabuto,
	.animations = sAxAnimationsKabuto,
	.animCount = ARRAY_COUNT(sAxAnimationsKabuto),
	.spriteData = sAxSpritesKabuto,
	.positions = sAxPositionsKabuto,
};
