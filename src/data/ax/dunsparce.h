/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainDunsparce;
const SiroArchive gAxDunsparce = {"SIRO", &sAxMainDunsparce};

static const ax_pose sDunsparcePose1[] = {
	AX_POSE(0, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose2[] = {
	AX_POSE(1, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose4[] = {
	AX_POSE(3, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose5[] = {
	AX_POSE(4, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose7[] = {
	AX_POSE(6, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose8[] = {
	AX_POSE(7, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose10[] = {
	AX_POSE(9, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose11[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose12[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose13[] = {
	AX_POSE(12, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose14[] = {
	AX_POSE(13, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose15[] = {
	AX_POSE(14, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose16[] = {
	AX_POSE(9, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose17[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose18[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose19[] = {
	AX_POSE(6, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose20[] = {
	AX_POSE(7, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose22[] = {
	AX_POSE(3, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose23[] = {
	AX_POSE(4, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose24[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose28[] = {
	AX_POSE(15, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose31[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose32[] = {
	AX_POSE(16, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(17, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose35[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose36[] = {
	AX_POSE(18, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(19, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose38[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose39[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose40[] = {
	AX_POSE(20, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(21, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose42[] = {
	AX_POSE(13, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose43[] = {
	AX_POSE(14, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose44[] = {
	AX_POSE(22, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose46[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose47[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose48[] = {
	AX_POSE(20, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(21, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose51[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose52[] = {
	AX_POSE(18, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(19, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose55[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose56[] = {
	AX_POSE(16, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(17, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose122[] = {
	AX_POSE(23, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(24, OAM1(246, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose123[] = {
	AX_POSE(25, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose125[] = {
	AX_POSE(26, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(27, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose126[] = {
	AX_POSE(28, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(29, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose128[] = {
	AX_POSE(30, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(31, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose129[] = {
	AX_POSE(32, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(33, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose131[] = {
	AX_POSE(34, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(35, OAM1(247, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose132[] = {
	AX_POSE(36, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(0, 3, 0)),
	AX_POSE(37, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(4, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose134[] = {
	AX_POSE(38, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose135[] = {
	AX_POSE(39, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose137[] = {
	AX_POSE(34, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(35, OAM1(247, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose138[] = {
	AX_POSE(36, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(37, OAM1(245, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(4, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose140[] = {
	AX_POSE(30, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(31, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose141[] = {
	AX_POSE(32, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(33, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose143[] = {
	AX_POSE(26, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(27, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose144[] = {
	AX_POSE(28, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(29, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose145[] = {
	AX_POSE(40, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose146[] = {
	AX_POSE(41, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose147[] = {
	AX_POSE(42, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose148[] = {
	AX_POSE(43, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose149[] = {
	AX_POSE(44, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose150[] = {
	AX_POSE(45, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose151[] = {
	AX_POSE(46, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose152[] = {
	AX_POSE(45, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose153[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose154[] = {
	AX_POSE(43, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose188[] = {
	AX_POSE(16, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(17, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose189[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(19, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose190[] = {
	AX_POSE(20, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(21, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose191[] = {
	AX_POSE(22, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose192[] = {
	AX_POSE(20, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(21, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose193[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(19, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose194[] = {
	AX_POSE(16, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(17, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose206[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose210[] = {
	AX_POSE(9, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose211[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose212[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose213[] = {
	AX_POSE(6, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose214[] = {
	AX_POSE(7, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose215[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose216[] = {
	AX_POSE(3, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose217[] = {
	AX_POSE(4, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDunsparcePose218[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sDunsparceAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_1_1.lz");
static const u8 sDunsparceAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_1_2.lz");
static const u8 sDunsparceAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_1_3.lz");
static const u8 sDunsparceAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_1_4.lz");
static const u8 sDunsparceAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_1_5.lz");
static const u8 sDunsparceAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_1_6.lz");
static const u8 sDunsparceAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_1_7.lz");
static const u8 sDunsparceAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_1_8.lz");
static const u8 sDunsparceAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_2_1.lz");
static const u8 sDunsparceAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_2_2.lz");
static const u8 sDunsparceAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_2_3.lz");
static const u8 sDunsparceAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_2_4.lz");
static const u8 sDunsparceAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_2_5.lz");
static const u8 sDunsparceAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_2_6.lz");
static const u8 sDunsparceAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_2_7.lz");
static const u8 sDunsparceAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_2_8.lz");
static const u8 sDunsparceAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_3_1.lz");
static const u8 sDunsparceAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_3_2.lz");
static const u8 sDunsparceAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_3_3.lz");
static const u8 sDunsparceAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_3_4.lz");
static const u8 sDunsparceAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_3_5.lz");
static const u8 sDunsparceAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_3_6.lz");
static const u8 sDunsparceAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_3_7.lz");
static const u8 sDunsparceAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_3_8.lz");
static const u8 sDunsparceAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_4_1.lz");
static const u8 sDunsparceAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_4_2.lz");
static const u8 sDunsparceAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_4_3.lz");
static const u8 sDunsparceAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_4_4.lz");
static const u8 sDunsparceAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_4_5.lz");
static const u8 sDunsparceAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_4_6.lz");
static const u8 sDunsparceAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_4_7.lz");
static const u8 sDunsparceAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_4_8.lz");
static const u8 sDunsparceAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_5_1.lz");
static const u8 sDunsparceAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_5_2.lz");
static const u8 sDunsparceAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_5_3.lz");
static const u8 sDunsparceAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_5_4.lz");
static const u8 sDunsparceAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_5_5.lz");
static const u8 sDunsparceAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_5_6.lz");
static const u8 sDunsparceAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_5_7.lz");
static const u8 sDunsparceAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_5_8.lz");
static const u8 sDunsparceAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_8_1.lz");
static const u8 sDunsparceAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_8_2.lz");
static const u8 sDunsparceAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_8_3.lz");
static const u8 sDunsparceAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_8_4.lz");
static const u8 sDunsparceAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_8_5.lz");
static const u8 sDunsparceAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_8_6.lz");
static const u8 sDunsparceAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_8_7.lz");
static const u8 sDunsparceAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_8_8.lz");
static const u8 sDunsparceAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_9_1.lz");
static const u8 sDunsparceAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_9_2.lz");
static const u8 sDunsparceAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_9_3.lz");
static const u8 sDunsparceAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_9_4.lz");
static const u8 sDunsparceAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_9_5.lz");
static const u8 sDunsparceAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_9_6.lz");
static const u8 sDunsparceAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_9_7.lz");
static const u8 sDunsparceAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_9_8.lz");
static const u8 sDunsparceAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_11_2.lz");
static const u8 sDunsparceAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_11_3.lz");
static const u8 sDunsparceAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_11_4.lz");
static const u8 sDunsparceAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_11_6.lz");
static const u8 sDunsparceAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_11_7.lz");
static const u8 sDunsparceAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/dunsparce/sDunsparceAnims_11_8.lz");

static const u8 sDunsparceGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_1.4bpp.lz");
static const ax_sprite sDunsparceSprites1[] = {
	{sDunsparceGfx1, ARRAY_COUNT(sDunsparceGfx1)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_2.4bpp.lz");
static const ax_sprite sDunsparceSprites2[] = {
	{sDunsparceGfx2, ARRAY_COUNT(sDunsparceGfx2)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_3.4bpp.lz");
static const ax_sprite sDunsparceSprites3[] = {
	{sDunsparceGfx3, ARRAY_COUNT(sDunsparceGfx3)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_4.4bpp.lz");
static const ax_sprite sDunsparceSprites4[] = {
	{sDunsparceGfx4, ARRAY_COUNT(sDunsparceGfx4)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_5.4bpp.lz");
static const ax_sprite sDunsparceSprites5[] = {
	{sDunsparceGfx5, ARRAY_COUNT(sDunsparceGfx5)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_6.4bpp.lz");
static const ax_sprite sDunsparceSprites6[] = {
	{sDunsparceGfx6, ARRAY_COUNT(sDunsparceGfx6)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_7.4bpp.lz");
static const ax_sprite sDunsparceSprites7[] = {
	{sDunsparceGfx7, ARRAY_COUNT(sDunsparceGfx7)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_8.4bpp.lz");
static const ax_sprite sDunsparceSprites8[] = {
	{sDunsparceGfx8, ARRAY_COUNT(sDunsparceGfx8)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_9.4bpp.lz");
static const ax_sprite sDunsparceSprites9[] = {
	{sDunsparceGfx9, ARRAY_COUNT(sDunsparceGfx9)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_10.4bpp.lz");
static const ax_sprite sDunsparceSprites10[] = {
	{sDunsparceGfx10, ARRAY_COUNT(sDunsparceGfx10)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_11.4bpp.lz");
static const ax_sprite sDunsparceSprites11[] = {
	{sDunsparceGfx11, ARRAY_COUNT(sDunsparceGfx11)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_12.4bpp.lz");
static const ax_sprite sDunsparceSprites12[] = {
	{sDunsparceGfx12, ARRAY_COUNT(sDunsparceGfx12)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_13.4bpp.lz");
static const ax_sprite sDunsparceSprites13[] = {
	{sDunsparceGfx13, ARRAY_COUNT(sDunsparceGfx13)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_14.4bpp.lz");
static const ax_sprite sDunsparceSprites14[] = {
	{sDunsparceGfx14, ARRAY_COUNT(sDunsparceGfx14)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_15.4bpp.lz");
static const ax_sprite sDunsparceSprites15[] = {
	{sDunsparceGfx15, ARRAY_COUNT(sDunsparceGfx15)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_16.4bpp.lz");
static const ax_sprite sDunsparceSprites16[] = {
	{sDunsparceGfx16, ARRAY_COUNT(sDunsparceGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_17.4bpp.lz");
static const ax_sprite sDunsparceSprites17[] = {
	{sDunsparceGfx17, ARRAY_COUNT(sDunsparceGfx17)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_18.4bpp.lz");
static const ax_sprite sDunsparceSprites18[] = {
	{sDunsparceGfx18, ARRAY_COUNT(sDunsparceGfx18)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_19.4bpp.lz");
static const ax_sprite sDunsparceSprites19[] = {
	{sDunsparceGfx19, ARRAY_COUNT(sDunsparceGfx19)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_20.4bpp.lz");
static const ax_sprite sDunsparceSprites20[] = {
	{sDunsparceGfx20, ARRAY_COUNT(sDunsparceGfx20)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_21.4bpp.lz");
static const ax_sprite sDunsparceSprites21[] = {
	{sDunsparceGfx21, ARRAY_COUNT(sDunsparceGfx21)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_22.4bpp.lz");
static const ax_sprite sDunsparceSprites22[] = {
	{sDunsparceGfx22, ARRAY_COUNT(sDunsparceGfx22)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_23.4bpp.lz");
static const ax_sprite sDunsparceSprites23[] = {
	{sDunsparceGfx23, ARRAY_COUNT(sDunsparceGfx23)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_24.4bpp.lz");
static const ax_sprite sDunsparceSprites24[] = {
	{sDunsparceGfx24, ARRAY_COUNT(sDunsparceGfx24)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_25.4bpp.lz");
static const ax_sprite sDunsparceSprites25[] = {
	{sDunsparceGfx25, ARRAY_COUNT(sDunsparceGfx25)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_26.4bpp.lz");
static const ax_sprite sDunsparceSprites26[] = {
	{sDunsparceGfx26, ARRAY_COUNT(sDunsparceGfx26)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_27.4bpp.lz");
static const ax_sprite sDunsparceSprites27[] = {
	{sDunsparceGfx27, ARRAY_COUNT(sDunsparceGfx27)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_28.4bpp.lz");
static const ax_sprite sDunsparceSprites28[] = {
	{sDunsparceGfx28, ARRAY_COUNT(sDunsparceGfx28)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_29.4bpp.lz");
static const ax_sprite sDunsparceSprites29[] = {
	{sDunsparceGfx29, ARRAY_COUNT(sDunsparceGfx29)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_30.4bpp.lz");
static const ax_sprite sDunsparceSprites30[] = {
	{sDunsparceGfx30, ARRAY_COUNT(sDunsparceGfx30)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_31.4bpp.lz");
static const ax_sprite sDunsparceSprites31[] = {
	{sDunsparceGfx31, ARRAY_COUNT(sDunsparceGfx31)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_32.4bpp.lz");
static const ax_sprite sDunsparceSprites32[] = {
	{sDunsparceGfx32, ARRAY_COUNT(sDunsparceGfx32)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_33.4bpp.lz");
static const ax_sprite sDunsparceSprites33[] = {
	{sDunsparceGfx33, ARRAY_COUNT(sDunsparceGfx33)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_34.4bpp.lz");
static const ax_sprite sDunsparceSprites34[] = {
	{sDunsparceGfx34, ARRAY_COUNT(sDunsparceGfx34)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_35.4bpp.lz");
static const ax_sprite sDunsparceSprites35[] = {
	{sDunsparceGfx35, ARRAY_COUNT(sDunsparceGfx35)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_36.4bpp.lz");
static const ax_sprite sDunsparceSprites36[] = {
	{sDunsparceGfx36, ARRAY_COUNT(sDunsparceGfx36)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_37.4bpp.lz");
static const ax_sprite sDunsparceSprites37[] = {
	{sDunsparceGfx37, ARRAY_COUNT(sDunsparceGfx37)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_38.4bpp.lz");
static const ax_sprite sDunsparceSprites38[] = {
	{sDunsparceGfx38, ARRAY_COUNT(sDunsparceGfx38)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_39.4bpp.lz");
static const ax_sprite sDunsparceSprites39[] = {
	{sDunsparceGfx39, ARRAY_COUNT(sDunsparceGfx39)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_40.4bpp.lz");
static const ax_sprite sDunsparceSprites40[] = {
	{sDunsparceGfx40, ARRAY_COUNT(sDunsparceGfx40)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_41.4bpp.lz");
static const ax_sprite sDunsparceSprites41[] = {
	{sDunsparceGfx41, ARRAY_COUNT(sDunsparceGfx41)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_42.4bpp.lz");
static const ax_sprite sDunsparceSprites42[] = {
	{sDunsparceGfx42, ARRAY_COUNT(sDunsparceGfx42)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_43.4bpp.lz");
static const ax_sprite sDunsparceSprites43[] = {
	{sDunsparceGfx43, ARRAY_COUNT(sDunsparceGfx43)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_44.4bpp.lz");
static const ax_sprite sDunsparceSprites44[] = {
	{sDunsparceGfx44, ARRAY_COUNT(sDunsparceGfx44)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_45.4bpp.lz");
static const ax_sprite sDunsparceSprites45[] = {
	{sDunsparceGfx45, ARRAY_COUNT(sDunsparceGfx45)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_46.4bpp.lz");
static const ax_sprite sDunsparceSprites46[] = {
	{sDunsparceGfx46, ARRAY_COUNT(sDunsparceGfx46)}, 
	{NULL, 0}
};
static const u8 sDunsparceGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/dunsparce/sprite_47.4bpp.lz");
static const ax_sprite sDunsparceSprites47[] = {
	{sDunsparceGfx47, ARRAY_COUNT(sDunsparceGfx47)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesDunsparce[] = {
	sDunsparcePose1,
	sDunsparcePose2,
	sDunsparcePose3,
	sDunsparcePose4,
	sDunsparcePose5,
	sDunsparcePose6,
	sDunsparcePose7,
	sDunsparcePose8,
	sDunsparcePose9,
	sDunsparcePose10,
	sDunsparcePose11,
	sDunsparcePose12,
	sDunsparcePose13,
	sDunsparcePose14,
	sDunsparcePose15,
	sDunsparcePose16,
	sDunsparcePose17,
	sDunsparcePose18,
	sDunsparcePose19,
	sDunsparcePose20,
	sDunsparcePose21,
	sDunsparcePose22,
	sDunsparcePose23,
	sDunsparcePose24,
	sDunsparcePose1,
	sDunsparcePose2,
	sDunsparcePose3,
	sDunsparcePose28,
	sDunsparcePose4,
	sDunsparcePose5,
	sDunsparcePose31,
	sDunsparcePose32,
	sDunsparcePose7,
	sDunsparcePose8,
	sDunsparcePose35,
	sDunsparcePose36,
	sDunsparcePose10,
	sDunsparcePose38,
	sDunsparcePose39,
	sDunsparcePose40,
	sDunsparcePose13,
	sDunsparcePose42,
	sDunsparcePose43,
	sDunsparcePose44,
	sDunsparcePose16,
	sDunsparcePose46,
	sDunsparcePose47,
	sDunsparcePose48,
	sDunsparcePose19,
	sDunsparcePose20,
	sDunsparcePose51,
	sDunsparcePose52,
	sDunsparcePose22,
	sDunsparcePose23,
	sDunsparcePose55,
	sDunsparcePose56,
	sDunsparcePose1,
	sDunsparcePose2,
	sDunsparcePose3,
	sDunsparcePose28,
	sDunsparcePose4,
	sDunsparcePose5,
	sDunsparcePose31,
	sDunsparcePose32,
	sDunsparcePose7,
	sDunsparcePose8,
	sDunsparcePose35,
	sDunsparcePose36,
	sDunsparcePose10,
	sDunsparcePose38,
	sDunsparcePose39,
	sDunsparcePose40,
	sDunsparcePose13,
	sDunsparcePose42,
	sDunsparcePose43,
	sDunsparcePose44,
	sDunsparcePose16,
	sDunsparcePose46,
	sDunsparcePose47,
	sDunsparcePose48,
	sDunsparcePose19,
	sDunsparcePose20,
	sDunsparcePose51,
	sDunsparcePose52,
	sDunsparcePose22,
	sDunsparcePose23,
	sDunsparcePose55,
	sDunsparcePose56,
	sDunsparcePose1,
	sDunsparcePose2,
	sDunsparcePose3,
	sDunsparcePose28,
	sDunsparcePose4,
	sDunsparcePose5,
	sDunsparcePose31,
	sDunsparcePose32,
	sDunsparcePose7,
	sDunsparcePose8,
	sDunsparcePose35,
	sDunsparcePose36,
	sDunsparcePose10,
	sDunsparcePose38,
	sDunsparcePose39,
	sDunsparcePose40,
	sDunsparcePose13,
	sDunsparcePose42,
	sDunsparcePose43,
	sDunsparcePose44,
	sDunsparcePose16,
	sDunsparcePose46,
	sDunsparcePose47,
	sDunsparcePose48,
	sDunsparcePose19,
	sDunsparcePose20,
	sDunsparcePose51,
	sDunsparcePose52,
	sDunsparcePose22,
	sDunsparcePose23,
	sDunsparcePose55,
	sDunsparcePose56,
	sDunsparcePose1,
	sDunsparcePose122,
	sDunsparcePose123,
	sDunsparcePose4,
	sDunsparcePose125,
	sDunsparcePose126,
	sDunsparcePose7,
	sDunsparcePose128,
	sDunsparcePose129,
	sDunsparcePose10,
	sDunsparcePose131,
	sDunsparcePose132,
	sDunsparcePose13,
	sDunsparcePose134,
	sDunsparcePose135,
	sDunsparcePose16,
	sDunsparcePose137,
	sDunsparcePose138,
	sDunsparcePose19,
	sDunsparcePose140,
	sDunsparcePose141,
	sDunsparcePose22,
	sDunsparcePose143,
	sDunsparcePose144,
	sDunsparcePose145,
	sDunsparcePose146,
	sDunsparcePose147,
	sDunsparcePose148,
	sDunsparcePose149,
	sDunsparcePose150,
	sDunsparcePose151,
	sDunsparcePose152,
	sDunsparcePose153,
	sDunsparcePose154,
	sDunsparcePose1,
	sDunsparcePose122,
	sDunsparcePose123,
	sDunsparcePose4,
	sDunsparcePose125,
	sDunsparcePose126,
	sDunsparcePose7,
	sDunsparcePose128,
	sDunsparcePose129,
	sDunsparcePose10,
	sDunsparcePose131,
	sDunsparcePose132,
	sDunsparcePose13,
	sDunsparcePose134,
	sDunsparcePose135,
	sDunsparcePose16,
	sDunsparcePose137,
	sDunsparcePose138,
	sDunsparcePose19,
	sDunsparcePose140,
	sDunsparcePose141,
	sDunsparcePose22,
	sDunsparcePose143,
	sDunsparcePose144,
	sDunsparcePose1,
	sDunsparcePose22,
	sDunsparcePose19,
	sDunsparcePose16,
	sDunsparcePose13,
	sDunsparcePose10,
	sDunsparcePose7,
	sDunsparcePose4,
	sDunsparcePose28,
	sDunsparcePose188,
	sDunsparcePose189,
	sDunsparcePose190,
	sDunsparcePose191,
	sDunsparcePose192,
	sDunsparcePose193,
	sDunsparcePose194,
	sDunsparcePose1,
	sDunsparcePose2,
	sDunsparcePose3,
	sDunsparcePose4,
	sDunsparcePose5,
	sDunsparcePose31,
	sDunsparcePose7,
	sDunsparcePose8,
	sDunsparcePose35,
	sDunsparcePose10,
	sDunsparcePose38,
	sDunsparcePose206,
	sDunsparcePose13,
	sDunsparcePose42,
	sDunsparcePose43,
	sDunsparcePose210,
	sDunsparcePose211,
	sDunsparcePose212,
	sDunsparcePose213,
	sDunsparcePose214,
	sDunsparcePose215,
	sDunsparcePose216,
	sDunsparcePose217,
	sDunsparcePose218,
	sDunsparcePose123,
	sDunsparcePose144,
	sDunsparcePose141,
	sDunsparcePose138,
	sDunsparcePose135,
	sDunsparcePose132,
	sDunsparcePose129,
	sDunsparcePose126,
	sDunsparcePose1,
	sDunsparcePose22,
	sDunsparcePose19,
	sDunsparcePose16,
	sDunsparcePose13,
	sDunsparcePose10,
	sDunsparcePose7,
	sDunsparcePose4,
};

static const struct PositionSets sAxPositionsDunsparce[] = {
	[0] = { .set = { {0, 4}, {-6, -7}, {6, -7}, {0, -3} } },
	[1] = { .set = { {0, 0}, {-4, -11}, {4, -11}, {0, -4} } },
	[2] = { .set = { {0, 6}, {-7, -6}, {7, -6}, {0, -1} } },
	[3] = { .set = { {8, 2}, {2, -9}, {-5, -3}, {0, -2} } },
	[4] = { .set = { {8, -5}, {-2, -12}, {-7, -7}, {-1, -5} } },
	[5] = { .set = { {9, 1}, {5, -10}, {-5, -3}, {1, -4} } },
	[6] = { .set = { {10, -1}, {-3, -9}, {-3, -1}, {1, -3} } },
	[7] = { .set = { {9, -8}, {-5, -7}, {-4, -3}, {0, -5} } },
	[8] = { .set = { {12, -2}, {1, -13}, {-2, -8}, {3, -6} } },
	[9] = { .set = { {8, -7}, {-5, -7}, {1, -1}, {0, -4} } },
	[10] = { .set = { {8, -11}, {-4, -9}, {1, -5}, {-1, -7} } },
	[11] = { .set = { {9, -6}, {-3, -11}, {4, -4}, {2, -7} } },
	[12] = { .set = { {0, -12}, {5, -5}, {-5, -5}, {0, -6} } },
	[13] = { .set = { {0, -12}, {4, -2}, {-4, -2}, {0, -4} } },
	[14] = { .set = { {0, -4}, {6, -1}, {-6, -1}, {0, -2} } },
	[15] = { .set = { {-8, -7}, {5, -7}, {-1, -1}, {0, -4} } },
	[16] = { .set = { {-8, -11}, {4, -9}, {-1, -5}, {1, -7} } },
	[17] = { .set = { {-9, -6}, {3, -11}, {-4, -4}, {-2, -7} } },
	[18] = { .set = { {-10, -1}, {3, -9}, {3, -1}, {-1, -3} } },
	[19] = { .set = { {-9, -8}, {5, -7}, {4, -3}, {0, -5} } },
	[20] = { .set = { {-12, -2}, {-1, -13}, {2, -8}, {-3, -6} } },
	[21] = { .set = { {-8, 2}, {-2, -9}, {5, -3}, {0, -2} } },
	[22] = { .set = { {-8, -5}, {2, -12}, {7, -7}, {1, -5} } },
	[23] = { .set = { {-9, 1}, {-5, -10}, {5, -3}, {-1, -4} } },
	[24] = { .set = { {0, 4}, {-6, -7}, {6, -7}, {0, -3} } },
	[25] = { .set = { {0, 0}, {-4, -11}, {4, -11}, {0, -4} } },
	[26] = { .set = { {0, 6}, {-7, -6}, {7, -6}, {0, -1} } },
	[27] = { .set = { {0, -12}, {-4, -16}, {4, -16}, {0, -7} } },
	[28] = { .set = { {8, 2}, {2, -9}, {-5, -3}, {0, -2} } },
	[29] = { .set = { {8, -5}, {-2, -12}, {-7, -7}, {-1, -5} } },
	[30] = { .set = { {9, 2}, {5, -9}, {-5, -2}, {1, -3} } },
	[31] = { .set = { {1, -15}, {-2, -10}, {-8, -7}, {0, -8} } },
	[32] = { .set = { {10, -1}, {-3, -9}, {-3, -1}, {1, -3} } },
	[33] = { .set = { {9, -8}, {-5, -7}, {-4, -3}, {0, -5} } },
	[34] = { .set = { {11, 0}, {0, -11}, {-3, -6}, {2, -4} } },
	[35] = { .set = { {3, -16}, {-7, -9}, {-5, -3}, {-1, -7} } },
	[36] = { .set = { {8, -7}, {-5, -7}, {1, -1}, {0, -4} } },
	[37] = { .set = { {8, -8}, {-4, -6}, {1, -2}, {-1, -4} } },
	[38] = { .set = { {7, -3}, {-5, -8}, {2, -1}, {0, -4} } },
	[39] = { .set = { {1, -15}, {-9, -9}, {-1, -7}, {-2, -6} } },
	[40] = { .set = { {0, -12}, {5, -5}, {-5, -5}, {0, -6} } },
	[41] = { .set = { {0, -14}, {4, -4}, {-4, -4}, {0, -6} } },
	[42] = { .set = { {0, -7}, {6, -4}, {-6, -4}, {0, -5} } },
	[43] = { .set = { {0, -15}, {5, -7}, {-5, -7}, {0, -6} } },
	[44] = { .set = { {-8, -7}, {5, -7}, {-1, -1}, {0, -4} } },
	[45] = { .set = { {-8, -8}, {4, -6}, {-1, -2}, {1, -4} } },
	[46] = { .set = { {-7, -3}, {5, -8}, {-2, -1}, {0, -4} } },
	[47] = { .set = { {-2, -15}, {8, -9}, {0, -7}, {1, -6} } },
	[48] = { .set = { {-10, -1}, {3, -9}, {3, -1}, {-1, -3} } },
	[49] = { .set = { {-9, -8}, {5, -7}, {4, -3}, {0, -5} } },
	[50] = { .set = { {-11, 0}, {0, -11}, {3, -6}, {-2, -4} } },
	[51] = { .set = { {-4, -16}, {6, -9}, {4, -3}, {0, -7} } },
	[52] = { .set = { {-8, 2}, {-2, -9}, {5, -3}, {0, -2} } },
	[53] = { .set = { {-8, -5}, {2, -12}, {7, -7}, {1, -5} } },
	[54] = { .set = { {-9, 2}, {-5, -9}, {5, -2}, {-1, -3} } },
	[55] = { .set = { {-2, -15}, {1, -10}, {7, -7}, {-1, -8} } },
	[56] = { .set = { {0, 4}, {-6, -7}, {6, -7}, {0, -3} } },
	[57] = { .set = { {0, 0}, {-4, -11}, {4, -11}, {0, -4} } },
	[58] = { .set = { {0, 6}, {-7, -6}, {7, -6}, {0, -1} } },
	[59] = { .set = { {0, -12}, {-4, -16}, {4, -16}, {0, -7} } },
	[60] = { .set = { {8, 2}, {2, -9}, {-5, -3}, {0, -2} } },
	[61] = { .set = { {8, -5}, {-2, -12}, {-7, -7}, {-1, -5} } },
	[62] = { .set = { {9, 2}, {5, -9}, {-5, -2}, {1, -3} } },
	[63] = { .set = { {1, -15}, {-2, -10}, {-8, -7}, {0, -8} } },
	[64] = { .set = { {10, -1}, {-3, -9}, {-3, -1}, {1, -3} } },
	[65] = { .set = { {9, -8}, {-5, -7}, {-4, -3}, {0, -5} } },
	[66] = { .set = { {11, 0}, {0, -11}, {-3, -6}, {2, -4} } },
	[67] = { .set = { {3, -16}, {-7, -9}, {-5, -3}, {-1, -7} } },
	[68] = { .set = { {8, -7}, {-5, -7}, {1, -1}, {0, -4} } },
	[69] = { .set = { {8, -8}, {-4, -6}, {1, -2}, {-1, -4} } },
	[70] = { .set = { {7, -3}, {-5, -8}, {2, -1}, {0, -4} } },
	[71] = { .set = { {1, -15}, {-9, -9}, {-1, -7}, {-2, -6} } },
	[72] = { .set = { {0, -12}, {5, -5}, {-5, -5}, {0, -6} } },
	[73] = { .set = { {0, -14}, {4, -4}, {-4, -4}, {0, -6} } },
	[74] = { .set = { {0, -7}, {6, -4}, {-6, -4}, {0, -5} } },
	[75] = { .set = { {0, -15}, {5, -7}, {-5, -7}, {0, -6} } },
	[76] = { .set = { {-8, -7}, {5, -7}, {-1, -1}, {0, -4} } },
	[77] = { .set = { {-8, -8}, {4, -6}, {-1, -2}, {1, -4} } },
	[78] = { .set = { {-7, -3}, {5, -8}, {-2, -1}, {0, -4} } },
	[79] = { .set = { {-2, -15}, {8, -9}, {0, -7}, {1, -6} } },
	[80] = { .set = { {-10, -1}, {3, -9}, {3, -1}, {-1, -3} } },
	[81] = { .set = { {-9, -8}, {5, -7}, {4, -3}, {0, -5} } },
	[82] = { .set = { {-11, 0}, {0, -11}, {3, -6}, {-2, -4} } },
	[83] = { .set = { {-4, -16}, {6, -9}, {4, -3}, {0, -7} } },
	[84] = { .set = { {-8, 2}, {-2, -9}, {5, -3}, {0, -2} } },
	[85] = { .set = { {-8, -5}, {2, -12}, {7, -7}, {1, -5} } },
	[86] = { .set = { {-9, 2}, {-5, -9}, {5, -2}, {-1, -3} } },
	[87] = { .set = { {-2, -15}, {1, -10}, {7, -7}, {-1, -8} } },
	[88] = { .set = { {0, 4}, {-6, -7}, {6, -7}, {0, -3} } },
	[89] = { .set = { {0, 0}, {-4, -11}, {4, -11}, {0, -4} } },
	[90] = { .set = { {0, 6}, {-7, -6}, {7, -6}, {0, -1} } },
	[91] = { .set = { {0, -12}, {-4, -16}, {4, -16}, {0, -7} } },
	[92] = { .set = { {8, 2}, {2, -9}, {-5, -3}, {0, -2} } },
	[93] = { .set = { {8, -5}, {-2, -12}, {-7, -7}, {-1, -5} } },
	[94] = { .set = { {9, 2}, {5, -9}, {-5, -2}, {1, -3} } },
	[95] = { .set = { {1, -15}, {-2, -10}, {-8, -7}, {0, -8} } },
	[96] = { .set = { {10, -1}, {-3, -9}, {-3, -1}, {1, -3} } },
	[97] = { .set = { {9, -8}, {-5, -7}, {-4, -3}, {0, -5} } },
	[98] = { .set = { {11, 0}, {0, -11}, {-3, -6}, {2, -4} } },
	[99] = { .set = { {3, -16}, {-7, -9}, {-5, -3}, {-1, -7} } },
	[100] = { .set = { {8, -7}, {-5, -7}, {1, -1}, {0, -4} } },
	[101] = { .set = { {8, -8}, {-4, -6}, {1, -2}, {-1, -4} } },
	[102] = { .set = { {7, -3}, {-5, -8}, {2, -1}, {0, -4} } },
	[103] = { .set = { {1, -15}, {-9, -9}, {-1, -7}, {-2, -6} } },
	[104] = { .set = { {0, -12}, {5, -5}, {-5, -5}, {0, -6} } },
	[105] = { .set = { {0, -14}, {4, -4}, {-4, -4}, {0, -6} } },
	[106] = { .set = { {0, -7}, {6, -4}, {-6, -4}, {0, -5} } },
	[107] = { .set = { {0, -15}, {5, -7}, {-5, -7}, {0, -6} } },
	[108] = { .set = { {-8, -7}, {5, -7}, {-1, -1}, {0, -4} } },
	[109] = { .set = { {-8, -8}, {4, -6}, {-1, -2}, {1, -4} } },
	[110] = { .set = { {-7, -3}, {5, -8}, {-2, -1}, {0, -4} } },
	[111] = { .set = { {-2, -15}, {8, -9}, {0, -7}, {1, -6} } },
	[112] = { .set = { {-10, -1}, {3, -9}, {3, -1}, {-1, -3} } },
	[113] = { .set = { {-9, -8}, {5, -7}, {4, -3}, {0, -5} } },
	[114] = { .set = { {-11, 0}, {0, -11}, {3, -6}, {-2, -4} } },
	[115] = { .set = { {-4, -16}, {6, -9}, {4, -3}, {0, -7} } },
	[116] = { .set = { {-8, 2}, {-2, -9}, {5, -3}, {0, -2} } },
	[117] = { .set = { {-8, -5}, {2, -12}, {7, -7}, {1, -5} } },
	[118] = { .set = { {-9, 2}, {-5, -9}, {5, -2}, {-1, -3} } },
	[119] = { .set = { {-2, -15}, {1, -10}, {7, -7}, {-1, -8} } },
	[120] = { .set = { {0, 4}, {-6, -7}, {6, -7}, {0, -3} } },
	[121] = { .set = { {0, 3}, {-8, -3}, {7, -3}, {0, -2} } },
	[122] = { .set = { {0, 5}, {-5, -7}, {5, -7}, {0, -2} } },
	[123] = { .set = { {8, 2}, {2, -9}, {-5, -3}, {0, -2} } },
	[124] = { .set = { {8, 1}, {4, -9}, {-5, 0}, {1, -3} } },
	[125] = { .set = { {8, 3}, {1, -9}, {-4, -5}, {-1, -2} } },
	[126] = { .set = { {10, -1}, {-3, -9}, {-3, -1}, {1, -3} } },
	[127] = { .set = { {10, -4}, {-2, -8}, {-3, 0}, {1, -4} } },
	[128] = { .set = { {10, 1}, {-1, -10}, {-1, -5}, {1, -2} } },
	[129] = { .set = { {8, -7}, {-5, -7}, {1, -1}, {0, -4} } },
	[130] = { .set = { {6, -10}, {-5, -6}, {2, -1}, {-1, -4} } },
	[131] = { .set = { {9, -5}, {-4, -9}, {2, -3}, {1, -4} } },
	[132] = { .set = { {0, -12}, {5, -5}, {-5, -5}, {0, -6} } },
	[133] = { .set = { {0, -12}, {5, -3}, {-5, -3}, {0, -5} } },
	[134] = { .set = { {0, -9}, {5, -7}, {-5, -7}, {0, -4} } },
	[135] = { .set = { {-8, -7}, {5, -7}, {-1, -1}, {0, -4} } },
	[136] = { .set = { {-6, -10}, {5, -6}, {-2, -1}, {1, -4} } },
	[137] = { .set = { {-9, -5}, {4, -9}, {-2, -3}, {-1, -4} } },
	[138] = { .set = { {-10, -1}, {3, -9}, {3, -1}, {-1, -3} } },
	[139] = { .set = { {-10, -4}, {2, -8}, {3, 0}, {-1, -4} } },
	[140] = { .set = { {-10, 1}, {1, -10}, {1, -5}, {-1, -2} } },
	[141] = { .set = { {-8, 2}, {-2, -9}, {5, -3}, {0, -2} } },
	[142] = { .set = { {-8, 1}, {-4, -9}, {5, 0}, {-1, -3} } },
	[143] = { .set = { {-8, 3}, {-1, -9}, {4, -5}, {1, -2} } },
	[144] = { .set = { {-9, 2}, {-4, -7}, {6, 0}, {0, -3} } },
	[145] = { .set = { {-9, 1}, {-4, -7}, {5, 0}, {0, -4} } },
	[146] = { .set = { {0, -11}, {-7, -11}, {7, -11}, {0, -10} } },
	[147] = { .set = { {8, -16}, {3, -18}, {-3, -14}, {1, -13} } },
	[148] = { .set = { {9, -19}, {-6, -16}, {-3, -12}, {1, -12} } },
	[149] = { .set = { {8, -19}, {-4, -14}, {2, -11}, {1, -11} } },
	[150] = { .set = { {0, -21}, {5, -11}, {-5, -11}, {0, -13} } },
	[151] = { .set = { {-9, -19}, {3, -14}, {-3, -11}, {-2, -11} } },
	[152] = { .set = { {-10, -17}, {5, -14}, {2, -10}, {-2, -10} } },
	[153] = { .set = { {-9, -14}, {-4, -16}, {2, -12}, {-2, -11} } },
	[154] = { .set = { {0, 4}, {-6, -7}, {6, -7}, {0, -3} } },
	[155] = { .set = { {0, 3}, {-8, -3}, {7, -3}, {0, -2} } },
	[156] = { .set = { {0, 5}, {-5, -7}, {5, -7}, {0, -2} } },
	[157] = { .set = { {8, 2}, {2, -9}, {-5, -3}, {0, -2} } },
	[158] = { .set = { {8, 1}, {4, -9}, {-5, 0}, {1, -3} } },
	[159] = { .set = { {8, 3}, {1, -9}, {-4, -5}, {-1, -2} } },
	[160] = { .set = { {10, -1}, {-3, -9}, {-3, -1}, {1, -3} } },
	[161] = { .set = { {10, -4}, {-2, -8}, {-3, 0}, {1, -4} } },
	[162] = { .set = { {10, 1}, {-1, -10}, {-1, -5}, {1, -2} } },
	[163] = { .set = { {8, -7}, {-5, -7}, {1, -1}, {0, -4} } },
	[164] = { .set = { {6, -10}, {-5, -6}, {2, -1}, {-1, -4} } },
	[165] = { .set = { {9, -5}, {-4, -9}, {2, -3}, {1, -4} } },
	[166] = { .set = { {0, -12}, {5, -5}, {-5, -5}, {0, -6} } },
	[167] = { .set = { {0, -12}, {5, -3}, {-5, -3}, {0, -5} } },
	[168] = { .set = { {0, -9}, {5, -7}, {-5, -7}, {0, -4} } },
	[169] = { .set = { {-8, -7}, {5, -7}, {-1, -1}, {0, -4} } },
	[170] = { .set = { {-6, -10}, {5, -6}, {-2, -1}, {1, -4} } },
	[171] = { .set = { {-9, -5}, {4, -9}, {-2, -3}, {-1, -4} } },
	[172] = { .set = { {-10, -1}, {3, -9}, {3, -1}, {-1, -3} } },
	[173] = { .set = { {-10, -4}, {2, -8}, {3, 0}, {-1, -4} } },
	[174] = { .set = { {-10, 1}, {1, -10}, {1, -5}, {-1, -2} } },
	[175] = { .set = { {-8, 2}, {-2, -9}, {5, -3}, {0, -2} } },
	[176] = { .set = { {-8, 1}, {-4, -9}, {5, 0}, {-1, -3} } },
	[177] = { .set = { {-8, 3}, {-1, -9}, {4, -5}, {1, -2} } },
	[178] = { .set = { {0, 4}, {-6, -7}, {6, -7}, {0, -3} } },
	[179] = { .set = { {-8, 2}, {-2, -9}, {5, -3}, {0, -2} } },
	[180] = { .set = { {-10, -1}, {3, -9}, {3, -1}, {-1, -3} } },
	[181] = { .set = { {-8, -7}, {5, -7}, {-1, -1}, {0, -4} } },
	[182] = { .set = { {0, -12}, {5, -5}, {-5, -5}, {0, -6} } },
	[183] = { .set = { {8, -7}, {-5, -7}, {1, -1}, {0, -4} } },
	[184] = { .set = { {10, -1}, {-3, -9}, {-3, -1}, {1, -3} } },
	[185] = { .set = { {8, 2}, {2, -9}, {-5, -3}, {0, -2} } },
	[186] = { .set = { {0, -12}, {-4, -16}, {4, -16}, {0, -7} } },
	[187] = { .set = { {2, -15}, {-1, -10}, {-7, -7}, {1, -8} } },
	[188] = { .set = { {5, -17}, {-5, -10}, {-3, -4}, {1, -8} } },
	[189] = { .set = { {3, -17}, {-7, -11}, {1, -9}, {0, -8} } },
	[190] = { .set = { {0, -17}, {5, -9}, {-5, -9}, {0, -8} } },
	[191] = { .set = { {-4, -17}, {6, -11}, {-2, -9}, {-1, -8} } },
	[192] = { .set = { {-6, -17}, {4, -10}, {2, -4}, {-2, -8} } },
	[193] = { .set = { {-3, -15}, {0, -10}, {6, -7}, {-2, -8} } },
	[194] = { .set = { {0, 4}, {-6, -7}, {6, -7}, {0, -3} } },
	[195] = { .set = { {0, 0}, {-4, -11}, {4, -11}, {0, -4} } },
	[196] = { .set = { {0, 6}, {-7, -6}, {7, -6}, {0, -1} } },
	[197] = { .set = { {8, 2}, {2, -9}, {-5, -3}, {0, -2} } },
	[198] = { .set = { {8, -5}, {-2, -12}, {-7, -7}, {-1, -5} } },
	[199] = { .set = { {9, 2}, {5, -9}, {-5, -2}, {1, -3} } },
	[200] = { .set = { {10, -1}, {-3, -9}, {-3, -1}, {1, -3} } },
	[201] = { .set = { {9, -8}, {-5, -7}, {-4, -3}, {0, -5} } },
	[202] = { .set = { {11, 0}, {0, -11}, {-3, -6}, {2, -4} } },
	[203] = { .set = { {8, -7}, {-5, -7}, {1, -1}, {0, -4} } },
	[204] = { .set = { {8, -8}, {-4, -6}, {1, -2}, {-1, -4} } },
	[205] = { .set = { {8, -3}, {-4, -8}, {3, -1}, {1, -4} } },
	[206] = { .set = { {0, -12}, {5, -5}, {-5, -5}, {0, -6} } },
	[207] = { .set = { {0, -14}, {4, -4}, {-4, -4}, {0, -6} } },
	[208] = { .set = { {0, -7}, {6, -4}, {-6, -4}, {0, -5} } },
	[209] = { .set = { {-9, -7}, {4, -7}, {-2, -1}, {-1, -4} } },
	[210] = { .set = { {-9, -8}, {3, -6}, {-2, -2}, {0, -4} } },
	[211] = { .set = { {-9, -3}, {3, -8}, {-4, -1}, {-2, -4} } },
	[212] = { .set = { {-11, -1}, {2, -9}, {2, -1}, {-2, -3} } },
	[213] = { .set = { {-10, -8}, {4, -7}, {3, -3}, {-1, -5} } },
	[214] = { .set = { {-12, 0}, {-1, -11}, {2, -6}, {-3, -4} } },
	[215] = { .set = { {-9, 2}, {-3, -9}, {4, -3}, {-1, -2} } },
	[216] = { .set = { {-9, -5}, {1, -12}, {6, -7}, {0, -5} } },
	[217] = { .set = { {-10, 2}, {-6, -9}, {4, -2}, {-2, -3} } },
	[218] = { .set = { {0, 5}, {-5, -7}, {5, -7}, {0, -2} } },
	[219] = { .set = { {-8, 3}, {-1, -9}, {4, -5}, {1, -2} } },
	[220] = { .set = { {-10, 1}, {1, -10}, {1, -5}, {-1, -2} } },
	[221] = { .set = { {-9, -5}, {4, -9}, {-2, -3}, {-1, -4} } },
	[222] = { .set = { {0, -9}, {5, -7}, {-5, -7}, {0, -4} } },
	[223] = { .set = { {9, -5}, {-4, -9}, {2, -3}, {1, -4} } },
	[224] = { .set = { {10, 1}, {-1, -10}, {-1, -5}, {1, -2} } },
	[225] = { .set = { {8, 3}, {1, -9}, {-4, -5}, {-1, -2} } },
	[226] = { .set = { {0, 4}, {-6, -7}, {6, -7}, {0, -3} } },
	[227] = { .set = { {-8, 2}, {-2, -9}, {5, -3}, {0, -2} } },
	[228] = { .set = { {-10, -1}, {3, -9}, {3, -1}, {-1, -3} } },
	[229] = { .set = { {-8, -7}, {5, -7}, {-1, -1}, {0, -4} } },
	[230] = { .set = { {0, -12}, {5, -5}, {-5, -5}, {0, -6} } },
	[231] = { .set = { {8, -7}, {-5, -7}, {1, -1}, {0, -4} } },
	[232] = { .set = { {10, -1}, {-3, -9}, {-3, -1}, {1, -3} } },
	[233] = { .set = { {8, 2}, {2, -9}, {-5, -3}, {0, -2} } },
};

static const ax_anim *const sDunsparceAnimTable1[] = {
	AX_ANIM_PTR(sDunsparceAnims_1_1),
	AX_ANIM_PTR(sDunsparceAnims_1_2),
	AX_ANIM_PTR(sDunsparceAnims_1_3),
	AX_ANIM_PTR(sDunsparceAnims_1_4),
	AX_ANIM_PTR(sDunsparceAnims_1_5),
	AX_ANIM_PTR(sDunsparceAnims_1_6),
	AX_ANIM_PTR(sDunsparceAnims_1_7),
	AX_ANIM_PTR(sDunsparceAnims_1_8),
};

static const ax_anim *const sDunsparceAnimTable2[] = {
	AX_ANIM_PTR(sDunsparceAnims_2_1),
	AX_ANIM_PTR(sDunsparceAnims_2_2),
	AX_ANIM_PTR(sDunsparceAnims_2_3),
	AX_ANIM_PTR(sDunsparceAnims_2_4),
	AX_ANIM_PTR(sDunsparceAnims_2_5),
	AX_ANIM_PTR(sDunsparceAnims_2_6),
	AX_ANIM_PTR(sDunsparceAnims_2_7),
	AX_ANIM_PTR(sDunsparceAnims_2_8),
};

static const ax_anim *const sDunsparceAnimTable3[] = {
	AX_ANIM_PTR(sDunsparceAnims_3_1),
	AX_ANIM_PTR(sDunsparceAnims_3_2),
	AX_ANIM_PTR(sDunsparceAnims_3_3),
	AX_ANIM_PTR(sDunsparceAnims_3_4),
	AX_ANIM_PTR(sDunsparceAnims_3_5),
	AX_ANIM_PTR(sDunsparceAnims_3_6),
	AX_ANIM_PTR(sDunsparceAnims_3_7),
	AX_ANIM_PTR(sDunsparceAnims_3_8),
};

static const ax_anim *const sDunsparceAnimTable4[] = {
	AX_ANIM_PTR(sDunsparceAnims_4_1),
	AX_ANIM_PTR(sDunsparceAnims_4_2),
	AX_ANIM_PTR(sDunsparceAnims_4_3),
	AX_ANIM_PTR(sDunsparceAnims_4_4),
	AX_ANIM_PTR(sDunsparceAnims_4_5),
	AX_ANIM_PTR(sDunsparceAnims_4_6),
	AX_ANIM_PTR(sDunsparceAnims_4_7),
	AX_ANIM_PTR(sDunsparceAnims_4_8),
};

static const ax_anim *const sDunsparceAnimTable5[] = {
	AX_ANIM_PTR(sDunsparceAnims_5_1),
	AX_ANIM_PTR(sDunsparceAnims_5_2),
	AX_ANIM_PTR(sDunsparceAnims_5_3),
	AX_ANIM_PTR(sDunsparceAnims_5_4),
	AX_ANIM_PTR(sDunsparceAnims_5_5),
	AX_ANIM_PTR(sDunsparceAnims_5_6),
	AX_ANIM_PTR(sDunsparceAnims_5_7),
	AX_ANIM_PTR(sDunsparceAnims_5_8),
};

static const ax_anim *const sDunsparceAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
};

static const ax_anim *const sDunsparceAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00532),
	AX_ANIM_PTR(gAxSharedAnim_00544),
	AX_ANIM_PTR(gAxSharedAnim_00552),
	AX_ANIM_PTR(gAxSharedAnim_00560),
	AX_ANIM_PTR(gAxSharedAnim_00578),
	AX_ANIM_PTR(gAxSharedAnim_00588),
	AX_ANIM_PTR(gAxSharedAnim_00597),
	AX_ANIM_PTR(gAxSharedAnim_00603),
};

static const ax_anim *const sDunsparceAnimTable8[] = {
	AX_ANIM_PTR(sDunsparceAnims_8_1),
	AX_ANIM_PTR(sDunsparceAnims_8_2),
	AX_ANIM_PTR(sDunsparceAnims_8_3),
	AX_ANIM_PTR(sDunsparceAnims_8_4),
	AX_ANIM_PTR(sDunsparceAnims_8_5),
	AX_ANIM_PTR(sDunsparceAnims_8_6),
	AX_ANIM_PTR(sDunsparceAnims_8_7),
	AX_ANIM_PTR(sDunsparceAnims_8_8),
};

static const ax_anim *const sDunsparceAnimTable9[] = {
	AX_ANIM_PTR(sDunsparceAnims_9_1),
	AX_ANIM_PTR(sDunsparceAnims_9_2),
	AX_ANIM_PTR(sDunsparceAnims_9_3),
	AX_ANIM_PTR(sDunsparceAnims_9_4),
	AX_ANIM_PTR(sDunsparceAnims_9_5),
	AX_ANIM_PTR(sDunsparceAnims_9_6),
	AX_ANIM_PTR(sDunsparceAnims_9_7),
	AX_ANIM_PTR(sDunsparceAnims_9_8),
};

static const ax_anim *const sDunsparceAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01016),
	AX_ANIM_PTR(gAxSharedAnim_01027),
	AX_ANIM_PTR(gAxSharedAnim_01046),
	AX_ANIM_PTR(gAxSharedAnim_01061),
	AX_ANIM_PTR(gAxSharedAnim_01078),
	AX_ANIM_PTR(gAxSharedAnim_01092),
	AX_ANIM_PTR(gAxSharedAnim_01110),
	AX_ANIM_PTR(gAxSharedAnim_01124),
};

static const ax_anim *const sDunsparceAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01137),
	AX_ANIM_PTR(sDunsparceAnims_11_2),
	AX_ANIM_PTR(sDunsparceAnims_11_3),
	AX_ANIM_PTR(sDunsparceAnims_11_4),
	AX_ANIM_PTR(gAxSharedAnim_01282),
	AX_ANIM_PTR(sDunsparceAnims_11_6),
	AX_ANIM_PTR(sDunsparceAnims_11_7),
	AX_ANIM_PTR(sDunsparceAnims_11_8),
};

static const ax_anim *const sDunsparceAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01423),
	AX_ANIM_PTR(gAxSharedAnim_01467),
	AX_ANIM_PTR(gAxSharedAnim_01458),
	AX_ANIM_PTR(gAxSharedAnim_01449),
	AX_ANIM_PTR(gAxSharedAnim_01448),
	AX_ANIM_PTR(gAxSharedAnim_01444),
	AX_ANIM_PTR(gAxSharedAnim_01432),
	AX_ANIM_PTR(gAxSharedAnim_01424),
};

static const ax_anim *const sDunsparceAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01471),
	AX_ANIM_PTR(gAxSharedAnim_01516),
	AX_ANIM_PTR(gAxSharedAnim_01511),
	AX_ANIM_PTR(gAxSharedAnim_01504),
	AX_ANIM_PTR(gAxSharedAnim_01497),
	AX_ANIM_PTR(gAxSharedAnim_01490),
	AX_ANIM_PTR(gAxSharedAnim_01486),
	AX_ANIM_PTR(gAxSharedAnim_01478),
};

static const ax_anim *const *const sAxAnimationsDunsparce[] = {
	sDunsparceAnimTable1,
	sDunsparceAnimTable2,
	sDunsparceAnimTable3,
	sDunsparceAnimTable4,
	sDunsparceAnimTable5,
	sDunsparceAnimTable6,
	sDunsparceAnimTable7,
	sDunsparceAnimTable8,
	sDunsparceAnimTable9,
	sDunsparceAnimTable10,
	sDunsparceAnimTable11,
	sDunsparceAnimTable12,
	sDunsparceAnimTable13,
};

static const ax_sprite *const sAxSpritesDunsparce[] = {
	sDunsparceSprites1,
	sDunsparceSprites2,
	sDunsparceSprites3,
	sDunsparceSprites4,
	sDunsparceSprites5,
	sDunsparceSprites6,
	sDunsparceSprites7,
	sDunsparceSprites8,
	sDunsparceSprites9,
	sDunsparceSprites10,
	sDunsparceSprites11,
	sDunsparceSprites12,
	sDunsparceSprites13,
	sDunsparceSprites14,
	sDunsparceSprites15,
	sDunsparceSprites16,
	sDunsparceSprites17,
	sDunsparceSprites18,
	sDunsparceSprites19,
	sDunsparceSprites20,
	sDunsparceSprites21,
	sDunsparceSprites22,
	sDunsparceSprites23,
	sDunsparceSprites24,
	sDunsparceSprites25,
	sDunsparceSprites26,
	sDunsparceSprites27,
	sDunsparceSprites28,
	sDunsparceSprites29,
	sDunsparceSprites30,
	sDunsparceSprites31,
	sDunsparceSprites32,
	sDunsparceSprites33,
	sDunsparceSprites34,
	sDunsparceSprites35,
	sDunsparceSprites36,
	sDunsparceSprites37,
	sDunsparceSprites38,
	sDunsparceSprites39,
	sDunsparceSprites40,
	sDunsparceSprites41,
	sDunsparceSprites42,
	sDunsparceSprites43,
	sDunsparceSprites44,
	sDunsparceSprites45,
	sDunsparceSprites46,
	sDunsparceSprites47,
};

static const axmain sAxMainDunsparce = {
	.poses = sAxPosesDunsparce,
	.animations = sAxAnimationsDunsparce,
	.animCount = ARRAY_COUNT(sAxAnimationsDunsparce),
	.spriteData = sAxSpritesDunsparce,
	.positions = sAxPositionsDunsparce,
};
