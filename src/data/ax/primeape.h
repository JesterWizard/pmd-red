/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainPrimeape;
const SiroArchive gAxPrimeape = {"SIRO", &sAxMainPrimeape};

static const ax_pose sPrimeapePose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose8[] = {
	AX_POSE(7, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose9[] = {
	AX_POSE(8, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose11[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose12[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose16[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose17[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose18[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose19[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose20[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose21[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose22[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose23[] = {
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose24[] = {
	AX_POSE(23, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose25[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose28[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose31[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose32[] = {
	AX_POSE(27, OAM1(247, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(7, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose34[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose37[] = {
	AX_POSE(29, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose40[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose43[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose46[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose52[] = {
	AX_POSE(32, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose53[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose58[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose59[] = {
	AX_POSE(35, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose60[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose64[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose65[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose70[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose71[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose72[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose76[] = {
	AX_POSE(41, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose77[] = {
	AX_POSE(42, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(29, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose78[] = {
	AX_POSE(29, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose82[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose83[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose84[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose88[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose89[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose90[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose94[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose95[] = {
	AX_POSE(35, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose96[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose102[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose108[] = {
	AX_POSE(43, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose110[] = {
	AX_POSE(43, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(44, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose111[] = {
	AX_POSE(44, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose115[] = {
	AX_POSE(45, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose117[] = {
	AX_POSE(46, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose118[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose122[] = {
	AX_POSE(47, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose124[] = {
	AX_POSE(48, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose125[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose129[] = {
	AX_POSE(49, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose131[] = {
	AX_POSE(50, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 6)),
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose132[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose136[] = {
	AX_POSE(51, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(29, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose138[] = {
	AX_POSE(51, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(52, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose139[] = {
	AX_POSE(52, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose143[] = {
	AX_POSE(49, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose145[] = {
	AX_POSE(50, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose146[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose150[] = {
	AX_POSE(47, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose152[] = {
	AX_POSE(48, OAM1(240, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose153[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose157[] = {
	AX_POSE(45, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose159[] = {
	AX_POSE(46, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose161[] = {
	AX_POSE(53, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose162[] = {
	AX_POSE(54, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose163[] = {
	AX_POSE(55, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose164[] = {
	AX_POSE(56, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose165[] = {
	AX_POSE(57, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose166[] = {
	AX_POSE(58, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose167[] = {
	AX_POSE(59, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose168[] = {
	AX_POSE(58, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose169[] = {
	AX_POSE(57, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose170[] = {
	AX_POSE(56, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose204[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose206[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose208[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPrimeapePose234[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_anim sPrimeapeAnims_1_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 25, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, -6}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 26, .offset = {0, -4}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 5}, .shadow = {0, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 24, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 10}, .shadow = {0, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 3}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 1}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 28, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {-1, -7}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 29, .offset = {3, -6}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {13, 2}, .shadow = {13, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {22, 19}, .shadow = {22, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {23, 18}, .shadow = {23, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {22, 19}, .shadow = {22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {23, 18}, .shadow = {23, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {22, 19}, .shadow = {22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {23, 18}, .shadow = {23, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {15, 10}, .shadow = {15, 14} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {7, 3}, .shadow = {7, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {3, 1}, .shadow = {3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 31, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {-1, -5}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 32, .offset = {3, -7}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {16, -8}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 30, .offset = {22, -1}, .shadow = {22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, -1}, .shadow = {22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, -1}, .shadow = {22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {15, -4}, .shadow = {15, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {7, -4}, .shadow = {7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {3, -3}, .shadow = {3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {-1, -6}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 35, .offset = {3, -14}, .shadow = {3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {11, -22}, .shadow = {11, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {19, -22}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {18, -23}, .shadow = {18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {19, -22}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {18, -23}, .shadow = {18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {19, -22}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {18, -23}, .shadow = {18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {13, -19}, .shadow = {13, -16} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {6, -10}, .shadow = {6, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {3, -6}, .shadow = {3, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 38, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -6}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {0, -14}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -20}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 36, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -19}, .shadow = {0, -17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -10}, .shadow = {0, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -6}, .shadow = {0, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 40, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {1, -6}, .shadow = {1, 1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 41, .offset = {-3, -14}, .shadow = {-3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-11, -22}, .shadow = {-11, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-19, -22}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {-18, -23}, .shadow = {-18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-19, -22}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-18, -23}, .shadow = {-18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-19, -22}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-18, -23}, .shadow = {-18, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-13, -19}, .shadow = {-13, -16} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-6, -10}, .shadow = {-6, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-3, -6}, .shadow = {-3, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 43, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 44, .offset = {-3, -7}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-16, -8}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 42, .offset = {-22, -1}, .shadow = {-22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-22, -1}, .shadow = {-22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-22, -1}, .shadow = {-22, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-15, -4}, .shadow = {-15, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-7, -4}, .shadow = {-7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-3, -3}, .shadow = {-3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 46, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {1, -7}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 47, .offset = {-3, -6}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-13, 2}, .shadow = {-13, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-22, 19}, .shadow = {-22, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 45, .offset = {-23, 18}, .shadow = {-23, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-22, 19}, .shadow = {-22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-23, 18}, .shadow = {-23, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-22, 19}, .shadow = {-22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-23, 18}, .shadow = {-23, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-15, 10}, .shadow = {-15, 14} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-7, 3}, .shadow = {-7, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-3, 1}, .shadow = {-3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 51, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 51, .offset = {0, 8}, .shadow = {0, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {-1, 19}, .shadow = {-1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-1, 19}, .shadow = {-1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-1, 19}, .shadow = {-1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 5}, .shadow = {0, 5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 57, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 57, .offset = {9, 8}, .shadow = {9, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {19, 18}, .shadow = {19, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {19, 18}, .shadow = {19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {19, 18}, .shadow = {19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {5, 5}, .shadow = {5, 5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 63, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 63, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 65, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {5, 0}, .shadow = {5, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 69, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 69, .offset = {9, -9}, .shadow = {9, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {17, -17}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {18, -16}, .shadow = {18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {17, -17}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {18, -16}, .shadow = {18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {17, -17}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {18, -16}, .shadow = {18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {12, -12}, .shadow = {12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {5, -5}, .shadow = {5, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 75, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 75, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 75, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 77, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -5}, .shadow = {0, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 81, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 81, .offset = {-9, -9}, .shadow = {-9, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-17, -17}, .shadow = {-17, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {-18, -16}, .shadow = {-18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-17, -17}, .shadow = {-17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-18, -16}, .shadow = {-18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-17, -17}, .shadow = {-17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-18, -16}, .shadow = {-18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-5, -5}, .shadow = {-5, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 87, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 87, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 87, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 89, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-5, 0}, .shadow = {-5, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 93, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 93, .offset = {-9, 8}, .shadow = {-9, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-5, 5}, .shadow = {-5, 5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 6, .unkFlags = 0, .poseId = 110, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 110, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 108, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {1, 15}, .shadow = {1, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 13}, .shadow = {0, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-1, 19}, .shadow = {-1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-1, 16}, .shadow = {-1, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 11}, .shadow = {0, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 3}, .shadow = {0, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 117, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {19, 17}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 115, .offset = {18, 19}, .shadow = {18, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {15, 15}, .shadow = {16, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {15, 14}, .shadow = {15, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {19, 17}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {22, 16}, .shadow = {22, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {17, 15}, .shadow = {17, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {11, 11}, .shadow = {11, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {3, 3}, .shadow = {3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 124, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 124, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 124, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {15, 0}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 122, .offset = {16, 2}, .shadow = {16, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {10, 2}, .shadow = {10, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {7, 0}, .shadow = {7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {15, 0}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {16, -2}, .shadow = {16, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {9, -2}, .shadow = {9, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {6, -1}, .shadow = {6, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {3, 0}, .shadow = {3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 131, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {6, -7}, .shadow = {6, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {17, -18}, .shadow = {17, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 129, .offset = {19, -18}, .shadow = {19, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {16, -14}, .shadow = {16, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {10, -11}, .shadow = {10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {17, -18}, .shadow = {17, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {17, -20}, .shadow = {17, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {10, -14}, .shadow = {10, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {6, -7}, .shadow = {6, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {3, -3}, .shadow = {3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 6, .unkFlags = 0, .poseId = 138, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 138, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 136, .offset = {-1, -20}, .shadow = {-1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {-1, -16}, .shadow = {-1, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {1, -10}, .shadow = {1, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 6, .unkFlags = 0, .poseId = 145, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 145, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {-6, -7}, .shadow = {-6, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {-17, -18}, .shadow = {-17, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 143, .offset = {-19, -18}, .shadow = {-19, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {-16, -14}, .shadow = {-16, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {-10, -11}, .shadow = {-10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-17, -18}, .shadow = {-17, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-17, -20}, .shadow = {-17, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-10, -14}, .shadow = {-10, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-6, -7}, .shadow = {-6, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-3, -3}, .shadow = {-3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 152, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {-15, 0}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 150, .offset = {-16, 2}, .shadow = {-16, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {-10, 2}, .shadow = {-10, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {-7, 0}, .shadow = {-7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-15, 0}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {-16, -2}, .shadow = {-16, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {-9, -2}, .shadow = {-9, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {-6, -1}, .shadow = {-6, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {-3, 0}, .shadow = {-3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 6, .unkFlags = 0, .poseId = 159, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 159, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {-19, 17}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 157, .offset = {-18, 19}, .shadow = {-18, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {-15, 15}, .shadow = {-16, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {-15, 14}, .shadow = {-15, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {-19, 17}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {-21, 16}, .shadow = {-21, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-17, 15}, .shadow = {-17, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-11, 11}, .shadow = {-11, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {-3, 3}, .shadow = {-3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_8_1[] = {
	{ .frames = 22, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 171, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 171, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 171, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 22, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 172, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_8_2[] = {
	{ .frames = 22, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 174, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 22, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 175, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_8_3[] = {
	{ .frames = 22, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 177, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 177, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 177, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 22, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 178, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_8_4[] = {
	{ .frames = 22, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 180, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 180, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 180, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 22, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 181, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 181, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 181, .offset = {0, -5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_8_5[] = {
	{ .frames = 22, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 183, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 22, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 184, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 184, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 184, .offset = {0, -5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_8_6[] = {
	{ .frames = 22, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 186, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 186, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 186, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 22, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 187, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_8_7[] = {
	{ .frames = 22, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 189, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 189, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 189, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 22, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 190, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_8_8[] = {
	{ .frames = 22, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 192, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 192, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 192, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 22, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 193, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 195, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {7, 16}, .shadow = {7, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 198, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 199, .offset = {-7, 16}, .shadow = {-7, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {19, 3}, .shadow = {19, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {23, 10}, .shadow = {23, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {22, 20}, .shadow = {22, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 198, .offset = {11, 19}, .shadow = {11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 196, .offset = {22, -2}, .shadow = {22, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 197, .offset = {18, 4}, .shadow = {18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 195, .offset = {21, -19}, .shadow = {21, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 196, .offset = {22, -11}, .shadow = {22, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 194, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 195, .offset = {7, -18}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 201, .offset = {-21, -19}, .shadow = {-21, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 200, .offset = {-22, -11}, .shadow = {-22, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 195, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 200, .offset = {-22, -2}, .shadow = {-22, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 199, .offset = {-18, 4}, .shadow = {-18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {-19, 3}, .shadow = {-19, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {-23, 10}, .shadow = {-23, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 199, .offset = {-22, 20}, .shadow = {-22, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 198, .offset = {-11, 19}, .shadow = {-11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 211, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 211, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 211, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 212, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 212, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 212, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 212, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 214, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 214, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 214, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 215, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 215, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 215, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 215, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 215, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 216, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 217, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 217, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 218, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 218, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 220, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 220, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 220, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 221, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 221, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 221, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 221, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 221, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 223, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 223, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 223, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 223, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 224, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 224, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 226, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 226, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 226, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 226, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 227, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 227, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 227, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 227, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 227, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 228, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 229, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 229, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 229, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 229, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 230, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 230, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 230, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 230, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 230, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPrimeapeAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 231, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 232, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 232, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 232, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 232, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 233, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 233, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 233, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 233, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sPrimeapeGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_1.4bpp.lz");
static const ax_sprite sPrimeapeSprites1[] = {
	{sPrimeapeGfx1, ARRAY_COUNT(sPrimeapeGfx1)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_2.4bpp.lz");
static const ax_sprite sPrimeapeSprites2[] = {
	{sPrimeapeGfx2, ARRAY_COUNT(sPrimeapeGfx2)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_3.4bpp.lz");
static const ax_sprite sPrimeapeSprites3[] = {
	{sPrimeapeGfx3, ARRAY_COUNT(sPrimeapeGfx3)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_4.4bpp.lz");
static const ax_sprite sPrimeapeSprites4[] = {
	{sPrimeapeGfx4, ARRAY_COUNT(sPrimeapeGfx4)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_5.4bpp.lz");
static const ax_sprite sPrimeapeSprites5[] = {
	{sPrimeapeGfx5, ARRAY_COUNT(sPrimeapeGfx5)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_6.4bpp.lz");
static const ax_sprite sPrimeapeSprites6[] = {
	{sPrimeapeGfx6, ARRAY_COUNT(sPrimeapeGfx6)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_7.4bpp.lz");
static const ax_sprite sPrimeapeSprites7[] = {
	{sPrimeapeGfx7, ARRAY_COUNT(sPrimeapeGfx7)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_8.4bpp.lz");
static const ax_sprite sPrimeapeSprites8[] = {
	{sPrimeapeGfx8, ARRAY_COUNT(sPrimeapeGfx8)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_9.4bpp.lz");
static const ax_sprite sPrimeapeSprites9[] = {
	{sPrimeapeGfx9, ARRAY_COUNT(sPrimeapeGfx9)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_10.4bpp.lz");
static const ax_sprite sPrimeapeSprites10[] = {
	{sPrimeapeGfx10, ARRAY_COUNT(sPrimeapeGfx10)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_11.4bpp.lz");
static const ax_sprite sPrimeapeSprites11[] = {
	{sPrimeapeGfx11, ARRAY_COUNT(sPrimeapeGfx11)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_12.4bpp.lz");
static const ax_sprite sPrimeapeSprites12[] = {
	{sPrimeapeGfx12, ARRAY_COUNT(sPrimeapeGfx12)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_13.4bpp.lz");
static const ax_sprite sPrimeapeSprites13[] = {
	{sPrimeapeGfx13, ARRAY_COUNT(sPrimeapeGfx13)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_14.4bpp.lz");
static const ax_sprite sPrimeapeSprites14[] = {
	{sPrimeapeGfx14, ARRAY_COUNT(sPrimeapeGfx14)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_15.4bpp.lz");
static const ax_sprite sPrimeapeSprites15[] = {
	{sPrimeapeGfx15, ARRAY_COUNT(sPrimeapeGfx15)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_16.4bpp.lz");
static const ax_sprite sPrimeapeSprites16[] = {
	{sPrimeapeGfx16, ARRAY_COUNT(sPrimeapeGfx16)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_17.4bpp.lz");
static const ax_sprite sPrimeapeSprites17[] = {
	{sPrimeapeGfx17, ARRAY_COUNT(sPrimeapeGfx17)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_18.4bpp.lz");
static const ax_sprite sPrimeapeSprites18[] = {
	{sPrimeapeGfx18, ARRAY_COUNT(sPrimeapeGfx18)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_19.4bpp.lz");
static const ax_sprite sPrimeapeSprites19[] = {
	{sPrimeapeGfx19, ARRAY_COUNT(sPrimeapeGfx19)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_20.4bpp.lz");
static const ax_sprite sPrimeapeSprites20[] = {
	{sPrimeapeGfx20, ARRAY_COUNT(sPrimeapeGfx20)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_21.4bpp.lz");
static const ax_sprite sPrimeapeSprites21[] = {
	{sPrimeapeGfx21, ARRAY_COUNT(sPrimeapeGfx21)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_22.4bpp.lz");
static const ax_sprite sPrimeapeSprites22[] = {
	{sPrimeapeGfx22, ARRAY_COUNT(sPrimeapeGfx22)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_23.4bpp.lz");
static const ax_sprite sPrimeapeSprites23[] = {
	{sPrimeapeGfx23, ARRAY_COUNT(sPrimeapeGfx23)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_24.4bpp.lz");
static const ax_sprite sPrimeapeSprites24[] = {
	{sPrimeapeGfx24, ARRAY_COUNT(sPrimeapeGfx24)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_25.4bpp.lz");
static const u8 sPrimeapeGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_25_1.4bpp.lz");
static const u8 sPrimeapeGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_25_2.4bpp.lz");
static const u8 sPrimeapeGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_25_3.4bpp.lz");
static const ax_sprite sPrimeapeSprites25[] = {
	{NULL, 32}, 
	{sPrimeapeGfx25, ARRAY_COUNT(sPrimeapeGfx25)}, 
	{NULL, 32}, 
	{sPrimeapeGfx25_1, ARRAY_COUNT(sPrimeapeGfx25_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx25_2, ARRAY_COUNT(sPrimeapeGfx25_2)}, 
	{NULL, 32}, 
	{sPrimeapeGfx25_3, ARRAY_COUNT(sPrimeapeGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_26.4bpp.lz");
static const u8 sPrimeapeGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_26_1.4bpp.lz");
static const u8 sPrimeapeGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_26_2.4bpp.lz");
static const ax_sprite sPrimeapeSprites26[] = {
	{NULL, 128}, 
	{sPrimeapeGfx26, ARRAY_COUNT(sPrimeapeGfx26)}, 
	{NULL, 32}, 
	{sPrimeapeGfx26_1, ARRAY_COUNT(sPrimeapeGfx26_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx26_2, ARRAY_COUNT(sPrimeapeGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_27.4bpp.lz");
static const u8 sPrimeapeGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_27_1.4bpp.lz");
static const u8 sPrimeapeGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_27_2.4bpp.lz");
static const ax_sprite sPrimeapeSprites27[] = {
	{NULL, 128}, 
	{sPrimeapeGfx27, ARRAY_COUNT(sPrimeapeGfx27)}, 
	{NULL, 32}, 
	{sPrimeapeGfx27_1, ARRAY_COUNT(sPrimeapeGfx27_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx27_2, ARRAY_COUNT(sPrimeapeGfx27_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_28.4bpp.lz");
static const ax_sprite sPrimeapeSprites28[] = {
	{sPrimeapeGfx28, ARRAY_COUNT(sPrimeapeGfx28)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_29.4bpp.lz");
static const u8 sPrimeapeGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_29_1.4bpp.lz");
static const u8 sPrimeapeGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_29_2.4bpp.lz");
static const ax_sprite sPrimeapeSprites29[] = {
	{NULL, 32}, 
	{sPrimeapeGfx29, ARRAY_COUNT(sPrimeapeGfx29)}, 
	{NULL, 32}, 
	{sPrimeapeGfx29_1, ARRAY_COUNT(sPrimeapeGfx29_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx29_2, ARRAY_COUNT(sPrimeapeGfx29_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_30.4bpp.lz");
static const u8 sPrimeapeGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_30_1.4bpp.lz");
static const u8 sPrimeapeGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_30_2.4bpp.lz");
static const ax_sprite sPrimeapeSprites30[] = {
	{sPrimeapeGfx30, ARRAY_COUNT(sPrimeapeGfx30)}, 
	{NULL, 32}, 
	{sPrimeapeGfx30_1, ARRAY_COUNT(sPrimeapeGfx30_1)}, 
	{NULL, 64}, 
	{sPrimeapeGfx30_2, ARRAY_COUNT(sPrimeapeGfx30_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_31.4bpp.lz");
static const u8 sPrimeapeGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_31_1.4bpp.lz");
static const u8 sPrimeapeGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_31_2.4bpp.lz");
static const u8 sPrimeapeGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_31_3.4bpp.lz");
static const ax_sprite sPrimeapeSprites31[] = {
	{NULL, 32}, 
	{sPrimeapeGfx31, ARRAY_COUNT(sPrimeapeGfx31)}, 
	{NULL, 32}, 
	{sPrimeapeGfx31_1, ARRAY_COUNT(sPrimeapeGfx31_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx31_2, ARRAY_COUNT(sPrimeapeGfx31_2)}, 
	{NULL, 32}, 
	{sPrimeapeGfx31_3, ARRAY_COUNT(sPrimeapeGfx31_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_32.4bpp.lz");
static const u8 sPrimeapeGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_32_1.4bpp.lz");
static const u8 sPrimeapeGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_32_2.4bpp.lz");
static const u8 sPrimeapeGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_32_3.4bpp.lz");
static const ax_sprite sPrimeapeSprites32[] = {
	{sPrimeapeGfx32, ARRAY_COUNT(sPrimeapeGfx32)}, 
	{NULL, 64}, 
	{sPrimeapeGfx32_1, ARRAY_COUNT(sPrimeapeGfx32_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx32_2, ARRAY_COUNT(sPrimeapeGfx32_2)}, 
	{NULL, 32}, 
	{sPrimeapeGfx32_3, ARRAY_COUNT(sPrimeapeGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_33.4bpp.lz");
static const u8 sPrimeapeGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_33_1.4bpp.lz");
static const u8 sPrimeapeGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_33_2.4bpp.lz");
static const u8 sPrimeapeGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_33_3.4bpp.lz");
static const ax_sprite sPrimeapeSprites33[] = {
	{sPrimeapeGfx33, ARRAY_COUNT(sPrimeapeGfx33)}, 
	{NULL, 32}, 
	{sPrimeapeGfx33_1, ARRAY_COUNT(sPrimeapeGfx33_1)}, 
	{NULL, 64}, 
	{sPrimeapeGfx33_2, ARRAY_COUNT(sPrimeapeGfx33_2)}, 
	{NULL, 96}, 
	{sPrimeapeGfx33_3, ARRAY_COUNT(sPrimeapeGfx33_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_34.4bpp.lz");
static const u8 sPrimeapeGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_34_1.4bpp.lz");
static const u8 sPrimeapeGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_34_2.4bpp.lz");
static const u8 sPrimeapeGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_34_3.4bpp.lz");
static const ax_sprite sPrimeapeSprites34[] = {
	{sPrimeapeGfx34, ARRAY_COUNT(sPrimeapeGfx34)}, 
	{NULL, 64}, 
	{sPrimeapeGfx34_1, ARRAY_COUNT(sPrimeapeGfx34_1)}, 
	{NULL, 96}, 
	{sPrimeapeGfx34_2, ARRAY_COUNT(sPrimeapeGfx34_2)}, 
	{NULL, 32}, 
	{sPrimeapeGfx34_3, ARRAY_COUNT(sPrimeapeGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_35.4bpp.lz");
static const u8 sPrimeapeGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_35_1.4bpp.lz");
static const u8 sPrimeapeGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_35_2.4bpp.lz");
static const u8 sPrimeapeGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_35_3.4bpp.lz");
static const ax_sprite sPrimeapeSprites35[] = {
	{sPrimeapeGfx35, ARRAY_COUNT(sPrimeapeGfx35)}, 
	{NULL, 32}, 
	{sPrimeapeGfx35_1, ARRAY_COUNT(sPrimeapeGfx35_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx35_2, ARRAY_COUNT(sPrimeapeGfx35_2)}, 
	{NULL, 64}, 
	{sPrimeapeGfx35_3, ARRAY_COUNT(sPrimeapeGfx35_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_36.4bpp.lz");
static const ax_sprite sPrimeapeSprites36[] = {
	{NULL, 32}, 
	{sPrimeapeGfx36, ARRAY_COUNT(sPrimeapeGfx36)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_37.4bpp.lz");
static const u8 sPrimeapeGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_37_1.4bpp.lz");
static const u8 sPrimeapeGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_37_2.4bpp.lz");
static const u8 sPrimeapeGfx37_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_37_3.4bpp.lz");
static const ax_sprite sPrimeapeSprites37[] = {
	{NULL, 32}, 
	{sPrimeapeGfx37, ARRAY_COUNT(sPrimeapeGfx37)}, 
	{NULL, 32}, 
	{sPrimeapeGfx37_1, ARRAY_COUNT(sPrimeapeGfx37_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx37_2, ARRAY_COUNT(sPrimeapeGfx37_2)}, 
	{NULL, 32}, 
	{sPrimeapeGfx37_3, ARRAY_COUNT(sPrimeapeGfx37_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_38.4bpp.lz");
static const u8 sPrimeapeGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_38_1.4bpp.lz");
static const u8 sPrimeapeGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_38_2.4bpp.lz");
static const ax_sprite sPrimeapeSprites38[] = {
	{sPrimeapeGfx38, ARRAY_COUNT(sPrimeapeGfx38)}, 
	{NULL, 64}, 
	{sPrimeapeGfx38_1, ARRAY_COUNT(sPrimeapeGfx38_1)}, 
	{NULL, 64}, 
	{sPrimeapeGfx38_2, ARRAY_COUNT(sPrimeapeGfx38_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_39.4bpp.lz");
static const u8 sPrimeapeGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_39_1.4bpp.lz");
static const ax_sprite sPrimeapeSprites39[] = {
	{NULL, 32}, 
	{sPrimeapeGfx39, ARRAY_COUNT(sPrimeapeGfx39)}, 
	{NULL, 64}, 
	{sPrimeapeGfx39_1, ARRAY_COUNT(sPrimeapeGfx39_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_40.4bpp.lz");
static const u8 sPrimeapeGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_40_1.4bpp.lz");
static const ax_sprite sPrimeapeSprites40[] = {
	{sPrimeapeGfx40, ARRAY_COUNT(sPrimeapeGfx40)}, 
	{NULL, 32}, 
	{sPrimeapeGfx40_1, ARRAY_COUNT(sPrimeapeGfx40_1)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_41.4bpp.lz");
static const u8 sPrimeapeGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_41_1.4bpp.lz");
static const u8 sPrimeapeGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_41_2.4bpp.lz");
static const u8 sPrimeapeGfx41_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_41_3.4bpp.lz");
static const ax_sprite sPrimeapeSprites41[] = {
	{NULL, 32}, 
	{sPrimeapeGfx41, ARRAY_COUNT(sPrimeapeGfx41)}, 
	{NULL, 64}, 
	{sPrimeapeGfx41_1, ARRAY_COUNT(sPrimeapeGfx41_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx41_2, ARRAY_COUNT(sPrimeapeGfx41_2)}, 
	{NULL, 64}, 
	{sPrimeapeGfx41_3, ARRAY_COUNT(sPrimeapeGfx41_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_42.4bpp.lz");
static const u8 sPrimeapeGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_42_1.4bpp.lz");
static const ax_sprite sPrimeapeSprites42[] = {
	{sPrimeapeGfx42, ARRAY_COUNT(sPrimeapeGfx42)}, 
	{NULL, 96}, 
	{sPrimeapeGfx42_1, ARRAY_COUNT(sPrimeapeGfx42_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_43.4bpp.lz");
static const u8 sPrimeapeGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_43_1.4bpp.lz");
static const u8 sPrimeapeGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_43_2.4bpp.lz");
static const u8 sPrimeapeGfx43_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_43_3.4bpp.lz");
static const ax_sprite sPrimeapeSprites43[] = {
	{sPrimeapeGfx43, ARRAY_COUNT(sPrimeapeGfx43)}, 
	{NULL, 32}, 
	{sPrimeapeGfx43_1, ARRAY_COUNT(sPrimeapeGfx43_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx43_2, ARRAY_COUNT(sPrimeapeGfx43_2)}, 
	{NULL, 32}, 
	{sPrimeapeGfx43_3, ARRAY_COUNT(sPrimeapeGfx43_3)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_44.4bpp.lz");
static const u8 sPrimeapeGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_44_1.4bpp.lz");
static const u8 sPrimeapeGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_44_2.4bpp.lz");
static const ax_sprite sPrimeapeSprites44[] = {
	{sPrimeapeGfx44, ARRAY_COUNT(sPrimeapeGfx44)}, 
	{NULL, 32}, 
	{sPrimeapeGfx44_1, ARRAY_COUNT(sPrimeapeGfx44_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx44_2, ARRAY_COUNT(sPrimeapeGfx44_2)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_45.4bpp.lz");
static const u8 sPrimeapeGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_45_1.4bpp.lz");
static const u8 sPrimeapeGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_45_2.4bpp.lz");
static const u8 sPrimeapeGfx45_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_45_3.4bpp.lz");
static const ax_sprite sPrimeapeSprites45[] = {
	{sPrimeapeGfx45, ARRAY_COUNT(sPrimeapeGfx45)}, 
	{NULL, 32}, 
	{sPrimeapeGfx45_1, ARRAY_COUNT(sPrimeapeGfx45_1)}, 
	{NULL, 64}, 
	{sPrimeapeGfx45_2, ARRAY_COUNT(sPrimeapeGfx45_2)}, 
	{NULL, 64}, 
	{sPrimeapeGfx45_3, ARRAY_COUNT(sPrimeapeGfx45_3)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_46.4bpp.lz");
static const u8 sPrimeapeGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_46_1.4bpp.lz");
static const ax_sprite sPrimeapeSprites46[] = {
	{NULL, 32}, 
	{sPrimeapeGfx46, ARRAY_COUNT(sPrimeapeGfx46)}, 
	{NULL, 32}, 
	{sPrimeapeGfx46_1, ARRAY_COUNT(sPrimeapeGfx46_1)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_47.4bpp.lz");
static const u8 sPrimeapeGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_47_1.4bpp.lz");
static const u8 sPrimeapeGfx47_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_47_2.4bpp.lz");
static const ax_sprite sPrimeapeSprites47[] = {
	{NULL, 192}, 
	{sPrimeapeGfx47, ARRAY_COUNT(sPrimeapeGfx47)}, 
	{NULL, 64}, 
	{sPrimeapeGfx47_1, ARRAY_COUNT(sPrimeapeGfx47_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx47_2, ARRAY_COUNT(sPrimeapeGfx47_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_48.4bpp.lz");
static const u8 sPrimeapeGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_48_1.4bpp.lz");
static const u8 sPrimeapeGfx48_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_48_2.4bpp.lz");
static const u8 sPrimeapeGfx48_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_48_3.4bpp.lz");
static const ax_sprite sPrimeapeSprites48[] = {
	{NULL, 32}, 
	{sPrimeapeGfx48, ARRAY_COUNT(sPrimeapeGfx48)}, 
	{NULL, 32}, 
	{sPrimeapeGfx48_1, ARRAY_COUNT(sPrimeapeGfx48_1)}, 
	{NULL, 64}, 
	{sPrimeapeGfx48_2, ARRAY_COUNT(sPrimeapeGfx48_2)}, 
	{NULL, 96}, 
	{sPrimeapeGfx48_3, ARRAY_COUNT(sPrimeapeGfx48_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_49.4bpp.lz");
static const ax_sprite sPrimeapeSprites49[] = {
	{sPrimeapeGfx49, ARRAY_COUNT(sPrimeapeGfx49)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_50.4bpp.lz");
static const u8 sPrimeapeGfx50_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_50_1.4bpp.lz");
static const ax_sprite sPrimeapeSprites50[] = {
	{sPrimeapeGfx50, ARRAY_COUNT(sPrimeapeGfx50)}, 
	{NULL, 32}, 
	{sPrimeapeGfx50_1, ARRAY_COUNT(sPrimeapeGfx50_1)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_51.4bpp.lz");
static const ax_sprite sPrimeapeSprites51[] = {
	{sPrimeapeGfx51, ARRAY_COUNT(sPrimeapeGfx51)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_52.4bpp.lz");
static const u8 sPrimeapeGfx52_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_52_1.4bpp.lz");
static const u8 sPrimeapeGfx52_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_52_2.4bpp.lz");
static const ax_sprite sPrimeapeSprites52[] = {
	{sPrimeapeGfx52, ARRAY_COUNT(sPrimeapeGfx52)}, 
	{NULL, 32}, 
	{sPrimeapeGfx52_1, ARRAY_COUNT(sPrimeapeGfx52_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx52_2, ARRAY_COUNT(sPrimeapeGfx52_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_53.4bpp.lz");
static const u8 sPrimeapeGfx53_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_53_1.4bpp.lz");
static const u8 sPrimeapeGfx53_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_53_2.4bpp.lz");
static const ax_sprite sPrimeapeSprites53[] = {
	{NULL, 32}, 
	{sPrimeapeGfx53, ARRAY_COUNT(sPrimeapeGfx53)}, 
	{NULL, 32}, 
	{sPrimeapeGfx53_1, ARRAY_COUNT(sPrimeapeGfx53_1)}, 
	{NULL, 32}, 
	{sPrimeapeGfx53_2, ARRAY_COUNT(sPrimeapeGfx53_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_54.4bpp.lz");
static const ax_sprite sPrimeapeSprites54[] = {
	{sPrimeapeGfx54, ARRAY_COUNT(sPrimeapeGfx54)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_55.4bpp.lz");
static const ax_sprite sPrimeapeSprites55[] = {
	{sPrimeapeGfx55, ARRAY_COUNT(sPrimeapeGfx55)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_56.4bpp.lz");
static const ax_sprite sPrimeapeSprites56[] = {
	{sPrimeapeGfx56, ARRAY_COUNT(sPrimeapeGfx56)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_57.4bpp.lz");
static const ax_sprite sPrimeapeSprites57[] = {
	{sPrimeapeGfx57, ARRAY_COUNT(sPrimeapeGfx57)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_58.4bpp.lz");
static const ax_sprite sPrimeapeSprites58[] = {
	{sPrimeapeGfx58, ARRAY_COUNT(sPrimeapeGfx58)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_59.4bpp.lz");
static const ax_sprite sPrimeapeSprites59[] = {
	{sPrimeapeGfx59, ARRAY_COUNT(sPrimeapeGfx59)}, 
	{NULL, 0}
};
static const u8 sPrimeapeGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/primeape/sprite_60.4bpp.lz");
static const ax_sprite sPrimeapeSprites60[] = {
	{sPrimeapeGfx60, ARRAY_COUNT(sPrimeapeGfx60)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesPrimeape[] = {
	sPrimeapePose1,
	sPrimeapePose2,
	sPrimeapePose3,
	sPrimeapePose4,
	sPrimeapePose5,
	sPrimeapePose6,
	sPrimeapePose7,
	sPrimeapePose8,
	sPrimeapePose9,
	sPrimeapePose10,
	sPrimeapePose11,
	sPrimeapePose12,
	sPrimeapePose13,
	sPrimeapePose14,
	sPrimeapePose15,
	sPrimeapePose16,
	sPrimeapePose17,
	sPrimeapePose18,
	sPrimeapePose19,
	sPrimeapePose20,
	sPrimeapePose21,
	sPrimeapePose22,
	sPrimeapePose23,
	sPrimeapePose24,
	sPrimeapePose25,
	sPrimeapePose2,
	sPrimeapePose3,
	sPrimeapePose28,
	sPrimeapePose5,
	sPrimeapePose6,
	sPrimeapePose31,
	sPrimeapePose32,
	sPrimeapePose9,
	sPrimeapePose34,
	sPrimeapePose11,
	sPrimeapePose12,
	sPrimeapePose37,
	sPrimeapePose14,
	sPrimeapePose15,
	sPrimeapePose40,
	sPrimeapePose17,
	sPrimeapePose18,
	sPrimeapePose43,
	sPrimeapePose20,
	sPrimeapePose21,
	sPrimeapePose46,
	sPrimeapePose23,
	sPrimeapePose24,
	sPrimeapePose1,
	sPrimeapePose2,
	sPrimeapePose3,
	sPrimeapePose52,
	sPrimeapePose53,
	sPrimeapePose25,
	sPrimeapePose4,
	sPrimeapePose5,
	sPrimeapePose6,
	sPrimeapePose58,
	sPrimeapePose59,
	sPrimeapePose60,
	sPrimeapePose7,
	sPrimeapePose8,
	sPrimeapePose9,
	sPrimeapePose64,
	sPrimeapePose65,
	sPrimeapePose31,
	sPrimeapePose10,
	sPrimeapePose11,
	sPrimeapePose12,
	sPrimeapePose70,
	sPrimeapePose71,
	sPrimeapePose72,
	sPrimeapePose13,
	sPrimeapePose14,
	sPrimeapePose15,
	sPrimeapePose76,
	sPrimeapePose77,
	sPrimeapePose78,
	sPrimeapePose16,
	sPrimeapePose17,
	sPrimeapePose18,
	sPrimeapePose82,
	sPrimeapePose83,
	sPrimeapePose84,
	sPrimeapePose19,
	sPrimeapePose20,
	sPrimeapePose21,
	sPrimeapePose88,
	sPrimeapePose89,
	sPrimeapePose90,
	sPrimeapePose22,
	sPrimeapePose23,
	sPrimeapePose24,
	sPrimeapePose94,
	sPrimeapePose95,
	sPrimeapePose96,
	sPrimeapePose1,
	sPrimeapePose22,
	sPrimeapePose19,
	sPrimeapePose16,
	sPrimeapePose13,
	sPrimeapePose102,
	sPrimeapePose7,
	sPrimeapePose4,
	sPrimeapePose1,
	sPrimeapePose2,
	sPrimeapePose3,
	sPrimeapePose108,
	sPrimeapePose25,
	sPrimeapePose110,
	sPrimeapePose111,
	sPrimeapePose4,
	sPrimeapePose5,
	sPrimeapePose6,
	sPrimeapePose115,
	sPrimeapePose60,
	sPrimeapePose117,
	sPrimeapePose118,
	sPrimeapePose7,
	sPrimeapePose8,
	sPrimeapePose9,
	sPrimeapePose122,
	sPrimeapePose31,
	sPrimeapePose124,
	sPrimeapePose125,
	sPrimeapePose10,
	sPrimeapePose11,
	sPrimeapePose12,
	sPrimeapePose129,
	sPrimeapePose72,
	sPrimeapePose131,
	sPrimeapePose132,
	sPrimeapePose13,
	sPrimeapePose14,
	sPrimeapePose15,
	sPrimeapePose136,
	sPrimeapePose78,
	sPrimeapePose138,
	sPrimeapePose139,
	sPrimeapePose16,
	sPrimeapePose17,
	sPrimeapePose18,
	sPrimeapePose143,
	sPrimeapePose84,
	sPrimeapePose145,
	sPrimeapePose146,
	sPrimeapePose19,
	sPrimeapePose20,
	sPrimeapePose21,
	sPrimeapePose150,
	sPrimeapePose90,
	sPrimeapePose152,
	sPrimeapePose153,
	sPrimeapePose22,
	sPrimeapePose23,
	sPrimeapePose24,
	sPrimeapePose157,
	sPrimeapePose96,
	sPrimeapePose159,
	sPrimeapePose46,
	sPrimeapePose161,
	sPrimeapePose162,
	sPrimeapePose163,
	sPrimeapePose164,
	sPrimeapePose165,
	sPrimeapePose166,
	sPrimeapePose167,
	sPrimeapePose168,
	sPrimeapePose169,
	sPrimeapePose170,
	sPrimeapePose1,
	sPrimeapePose2,
	sPrimeapePose3,
	sPrimeapePose4,
	sPrimeapePose5,
	sPrimeapePose6,
	sPrimeapePose7,
	sPrimeapePose8,
	sPrimeapePose9,
	sPrimeapePose10,
	sPrimeapePose11,
	sPrimeapePose12,
	sPrimeapePose13,
	sPrimeapePose14,
	sPrimeapePose15,
	sPrimeapePose16,
	sPrimeapePose17,
	sPrimeapePose18,
	sPrimeapePose19,
	sPrimeapePose20,
	sPrimeapePose21,
	sPrimeapePose22,
	sPrimeapePose23,
	sPrimeapePose24,
	sPrimeapePose1,
	sPrimeapePose22,
	sPrimeapePose19,
	sPrimeapePose16,
	sPrimeapePose13,
	sPrimeapePose102,
	sPrimeapePose7,
	sPrimeapePose4,
	sPrimeapePose25,
	sPrimeapePose204,
	sPrimeapePose31,
	sPrimeapePose206,
	sPrimeapePose78,
	sPrimeapePose208,
	sPrimeapePose90,
	sPrimeapePose96,
	sPrimeapePose1,
	sPrimeapePose3,
	sPrimeapePose25,
	sPrimeapePose4,
	sPrimeapePose6,
	sPrimeapePose204,
	sPrimeapePose7,
	sPrimeapePose9,
	sPrimeapePose31,
	sPrimeapePose10,
	sPrimeapePose12,
	sPrimeapePose72,
	sPrimeapePose13,
	sPrimeapePose15,
	sPrimeapePose78,
	sPrimeapePose16,
	sPrimeapePose18,
	sPrimeapePose84,
	sPrimeapePose19,
	sPrimeapePose21,
	sPrimeapePose90,
	sPrimeapePose22,
	sPrimeapePose24,
	sPrimeapePose234,
	sPrimeapePose1,
	sPrimeapePose22,
	sPrimeapePose19,
	sPrimeapePose16,
	sPrimeapePose13,
	sPrimeapePose102,
	sPrimeapePose7,
	sPrimeapePose4,
	sPrimeapePose1,
	sPrimeapePose22,
	sPrimeapePose19,
	sPrimeapePose16,
	sPrimeapePose13,
	sPrimeapePose102,
	sPrimeapePose7,
	sPrimeapePose4,
};

static const struct PositionSets sAxPositionsPrimeape[] = {
	[0] = { .set = { {-1, -6}, {-11, -18}, {11, -13}, {-1, -10} } },
	[1] = { .set = { {0, -4}, {-12, -18}, {9, -9}, {-1, -8} } },
	[2] = { .set = { {-2, -5}, {-12, -11}, {11, -16}, {-1, -9} } },
	[3] = { .set = { {1, -6}, {-11, -14}, {7, -16}, {-2, -10} } },
	[4] = { .set = { {0, -3}, {-12, -14}, {10, -10}, {-1, -8} } },
	[5] = { .set = { {2, -4}, {-6, -7}, {4, -18}, {0, -8} } },
	[6] = { .set = { {5, -8}, {-1, -11}, {1, -18}, {-1, -10} } },
	[7] = { .set = { {5, -6}, {-2, -11}, {4, -14}, {0, -8} } },
	[8] = { .set = { {5, -6}, {3, -7}, {2, -19}, {0, -8} } },
	[9] = { .set = { {3, -9}, {10, -16}, {-6, -17}, {0, -10} } },
	[10] = { .set = { {2, -8}, {11, -16}, {-6, -13}, {0, -9} } },
	[11] = { .set = { {3, -6}, {11, -8}, {-4, -19}, {0, -8} } },
	[12] = { .set = { {-1, -12}, {9, -18}, {-13, -13}, {-1, -11} } },
	[13] = { .set = { {-1, -10}, {10, -16}, {-12, -9}, {0, -9} } },
	[14] = { .set = { {0, -10}, {8, -12}, {-12, -15}, {-1, -9} } },
	[15] = { .set = { {-4, -10}, {4, -20}, {-11, -11}, {-1, -10} } },
	[16] = { .set = { {-3, -7}, {5, -20}, {-13, -10}, {0, -8} } },
	[17] = { .set = { {-3, -8}, {1, -13}, {-11, -12}, {0, -8} } },
	[18] = { .set = { {-6, -7}, {-2, -21}, {0, -8}, {0, -10} } },
	[19] = { .set = { {-6, -5}, {-1, -21}, {-2, -5}, {0, -8} } },
	[20] = { .set = { {-6, -6}, {-6, -16}, {2, -8}, {0, -8} } },
	[21] = { .set = { {-3, -6}, {-8, -20}, {9, -11}, {0, -9} } },
	[22] = { .set = { {-2, -3}, {-10, -19}, {8, -8}, {0, -7} } },
	[23] = { .set = { {-4, -4}, {-10, -13}, {10, -13}, {0, -7} } },
	[24] = { .set = { {2, -5}, {2, -1}, {8, -19}, {1, -10} } },
	[25] = { .set = { {0, -4}, {-12, -18}, {9, -9}, {-1, -8} } },
	[26] = { .set = { {-2, -5}, {-12, -11}, {11, -16}, {-1, -9} } },
	[27] = { .set = { {-1, -4}, {2, 0}, {-9, -17}, {-2, -10} } },
	[28] = { .set = { {0, -3}, {-12, -14}, {10, -10}, {-1, -8} } },
	[29] = { .set = { {2, -4}, {-6, -7}, {4, -18}, {0, -8} } },
	[30] = { .set = { {3, -5}, {7, -1}, {-7, -12}, {-1, -9} } },
	[31] = { .set = { {5, -6}, {-2, -11}, {4, -14}, {0, -8} } },
	[32] = { .set = { {5, -6}, {3, -7}, {2, -19}, {0, -8} } },
	[33] = { .set = { {2, -8}, {-9, -16}, {5, -8}, {0, -9} } },
	[34] = { .set = { {2, -8}, {11, -16}, {-6, -13}, {0, -9} } },
	[35] = { .set = { {3, -6}, {11, -8}, {-4, -19}, {0, -8} } },
	[36] = { .set = { {-2, -7}, {-3, -7}, {-8, -14}, {-1, -10} } },
	[37] = { .set = { {-1, -10}, {10, -16}, {-12, -9}, {0, -9} } },
	[38] = { .set = { {0, -10}, {8, -12}, {-12, -15}, {-1, -9} } },
	[39] = { .set = { {-2, -8}, {9, -16}, {-5, -8}, {0, -9} } },
	[40] = { .set = { {-3, -7}, {5, -20}, {-13, -10}, {0, -8} } },
	[41] = { .set = { {-3, -8}, {1, -13}, {-11, -12}, {0, -8} } },
	[42] = { .set = { {-8, -6}, {3, -20}, {-11, -3}, {-1, -11} } },
	[43] = { .set = { {-6, -5}, {-1, -21}, {-2, -5}, {0, -8} } },
	[44] = { .set = { {-6, -6}, {-6, -16}, {2, -8}, {0, -8} } },
	[45] = { .set = { {-4, -4}, {-5, -21}, {-5, 0}, {0, -10} } },
	[46] = { .set = { {-2, -3}, {-10, -19}, {8, -8}, {0, -7} } },
	[47] = { .set = { {-4, -4}, {-10, -13}, {10, -13}, {0, -7} } },
	[48] = { .set = { {-1, -6}, {-11, -18}, {11, -13}, {-1, -10} } },
	[49] = { .set = { {0, -4}, {-12, -18}, {9, -9}, {-1, -8} } },
	[50] = { .set = { {-2, -5}, {-12, -11}, {11, -16}, {-1, -9} } },
	[51] = { .set = { {-3, -9}, {-8, -21}, {2, -6}, {-2, -11} } },
	[52] = { .set = { {2, -5}, {2, -1}, {8, -19}, {1, -10} } },
	[53] = { .set = { {2, -5}, {2, -1}, {8, -19}, {1, -10} } },
	[54] = { .set = { {1, -6}, {-11, -14}, {7, -16}, {-2, -10} } },
	[55] = { .set = { {0, -3}, {-12, -14}, {10, -10}, {-1, -8} } },
	[56] = { .set = { {2, -4}, {-6, -7}, {4, -18}, {0, -8} } },
	[57] = { .set = { {2, -8}, {0, -23}, {0, -4}, {-1, -10} } },
	[58] = { .set = { {-2, -3}, {1, 1}, {-10, -16}, {-3, -9} } },
	[59] = { .set = { {-2, -3}, {1, 1}, {-10, -16}, {-3, -9} } },
	[60] = { .set = { {5, -8}, {-1, -11}, {1, -18}, {-1, -10} } },
	[61] = { .set = { {5, -6}, {-2, -11}, {4, -14}, {0, -8} } },
	[62] = { .set = { {5, -6}, {3, -7}, {2, -19}, {0, -8} } },
	[63] = { .set = { {4, -10}, {-5, -22}, {5, -7}, {-2, -11} } },
	[64] = { .set = { {3, -5}, {7, -1}, {-7, -12}, {-1, -9} } },
	[65] = { .set = { {3, -5}, {7, -1}, {-7, -12}, {-1, -9} } },
	[66] = { .set = { {3, -9}, {10, -16}, {-6, -17}, {0, -10} } },
	[67] = { .set = { {2, -8}, {11, -16}, {-6, -13}, {0, -9} } },
	[68] = { .set = { {3, -6}, {11, -8}, {-4, -19}, {0, -8} } },
	[69] = { .set = { {2, -11}, {-9, -18}, {11, -14}, {-1, -11} } },
	[70] = { .set = { {4, -8}, {6, -8}, {3, -16}, {1, -10} } },
	[71] = { .set = { {4, -8}, {6, -8}, {3, -16}, {1, -10} } },
	[72] = { .set = { {-1, -12}, {9, -18}, {-13, -13}, {-1, -11} } },
	[73] = { .set = { {-1, -10}, {10, -16}, {-12, -9}, {0, -9} } },
	[74] = { .set = { {0, -10}, {8, -12}, {-12, -15}, {-1, -9} } },
	[75] = { .set = { {0, -10}, {8, -12}, {-5, -14}, {-1, -9} } },
	[76] = { .set = { {-2, -8}, {-3, -8}, {-8, -15}, {-1, -11} } },
	[77] = { .set = { {-2, -8}, {-3, -8}, {-8, -15}, {-1, -11} } },
	[78] = { .set = { {-4, -10}, {4, -20}, {-11, -11}, {-1, -10} } },
	[79] = { .set = { {-3, -7}, {5, -20}, {-13, -10}, {0, -8} } },
	[80] = { .set = { {-3, -8}, {1, -13}, {-11, -12}, {0, -8} } },
	[81] = { .set = { {-3, -11}, {8, -18}, {-12, -14}, {0, -11} } },
	[82] = { .set = { {-5, -8}, {-7, -8}, {-4, -16}, {-2, -10} } },
	[83] = { .set = { {-5, -8}, {-7, -8}, {-4, -16}, {-2, -10} } },
	[84] = { .set = { {-6, -7}, {-2, -21}, {0, -8}, {0, -10} } },
	[85] = { .set = { {-6, -5}, {-1, -21}, {-2, -5}, {0, -8} } },
	[86] = { .set = { {-6, -6}, {-6, -16}, {2, -8}, {0, -8} } },
	[87] = { .set = { {-5, -10}, {4, -22}, {-6, -7}, {1, -11} } },
	[88] = { .set = { {-4, -5}, {-8, -1}, {6, -12}, {0, -9} } },
	[89] = { .set = { {-4, -5}, {-8, -1}, {6, -12}, {0, -9} } },
	[90] = { .set = { {-3, -6}, {-8, -20}, {9, -11}, {0, -9} } },
	[91] = { .set = { {-2, -3}, {-10, -19}, {8, -8}, {0, -7} } },
	[92] = { .set = { {-4, -4}, {-10, -13}, {10, -13}, {0, -7} } },
	[93] = { .set = { {-4, -8}, {-2, -23}, {-2, -4}, {-1, -10} } },
	[94] = { .set = { {0, -3}, {-3, 1}, {8, -16}, {1, -9} } },
	[95] = { .set = { {0, -3}, {-3, 1}, {8, -16}, {1, -9} } },
	[96] = { .set = { {-1, -6}, {-11, -18}, {11, -13}, {-1, -10} } },
	[97] = { .set = { {-3, -6}, {-8, -20}, {9, -11}, {0, -9} } },
	[98] = { .set = { {-6, -7}, {-2, -21}, {0, -8}, {0, -10} } },
	[99] = { .set = { {-4, -10}, {4, -20}, {-11, -11}, {-1, -10} } },
	[100] = { .set = { {-1, -12}, {9, -18}, {-13, -13}, {-1, -11} } },
	[101] = { .set = { {2, -9}, {9, -16}, {-7, -17}, {-1, -10} } },
	[102] = { .set = { {5, -8}, {-1, -11}, {1, -18}, {-1, -10} } },
	[103] = { .set = { {1, -6}, {-11, -14}, {7, -16}, {-2, -10} } },
	[104] = { .set = { {-1, -6}, {-11, -18}, {11, -13}, {-1, -10} } },
	[105] = { .set = { {0, -4}, {-12, -18}, {9, -9}, {-1, -8} } },
	[106] = { .set = { {-2, -5}, {-12, -11}, {11, -16}, {-1, -9} } },
	[107] = { .set = { {2, -5}, {2, -1}, {8, -19}, {1, -10} } },
	[108] = { .set = { {2, -5}, {2, -1}, {8, -19}, {1, -10} } },
	[109] = { .set = { {-3, -5}, {-9, -19}, {-2, -1}, {-1, -11} } },
	[110] = { .set = { {-3, -5}, {-9, -19}, {-2, -1}, {-1, -11} } },
	[111] = { .set = { {1, -6}, {-11, -14}, {7, -16}, {-2, -10} } },
	[112] = { .set = { {0, -3}, {-12, -14}, {10, -10}, {-1, -8} } },
	[113] = { .set = { {2, -4}, {-6, -7}, {4, -18}, {0, -8} } },
	[114] = { .set = { {-2, -3}, {1, 1}, {-10, -16}, {-3, -9} } },
	[115] = { .set = { {-2, -3}, {1, 1}, {-10, -16}, {-3, -9} } },
	[116] = { .set = { {2, -4}, {3, -21}, {3, 0}, {-2, -10} } },
	[117] = { .set = { {2, -4}, {3, -21}, {3, 0}, {-2, -10} } },
	[118] = { .set = { {5, -8}, {-1, -11}, {1, -18}, {-1, -10} } },
	[119] = { .set = { {5, -6}, {-2, -11}, {4, -14}, {0, -8} } },
	[120] = { .set = { {5, -6}, {3, -7}, {2, -19}, {0, -8} } },
	[121] = { .set = { {3, -5}, {7, -1}, {-7, -12}, {-1, -9} } },
	[122] = { .set = { {3, -5}, {7, -1}, {-7, -12}, {-1, -9} } },
	[123] = { .set = { {5, -6}, {-6, -20}, {8, -3}, {-2, -11} } },
	[124] = { .set = { {5, -6}, {-6, -20}, {8, -3}, {-2, -11} } },
	[125] = { .set = { {3, -9}, {10, -16}, {-6, -17}, {0, -10} } },
	[126] = { .set = { {2, -8}, {11, -16}, {-6, -13}, {0, -9} } },
	[127] = { .set = { {3, -6}, {11, -8}, {-4, -19}, {0, -8} } },
	[128] = { .set = { {4, -8}, {6, -8}, {3, -16}, {1, -10} } },
	[129] = { .set = { {4, -8}, {6, -8}, {3, -16}, {1, -10} } },
	[130] = { .set = { {3, -9}, {-8, -17}, {6, -9}, {1, -10} } },
	[131] = { .set = { {3, -9}, {-8, -17}, {6, -9}, {1, -10} } },
	[132] = { .set = { {-1, -12}, {9, -18}, {-13, -13}, {-1, -11} } },
	[133] = { .set = { {-1, -10}, {10, -16}, {-12, -9}, {0, -9} } },
	[134] = { .set = { {0, -10}, {8, -12}, {-12, -15}, {-1, -9} } },
	[135] = { .set = { {-2, -8}, {-3, -8}, {-8, -15}, {-1, -11} } },
	[136] = { .set = { {-2, -8}, {-3, -8}, {-8, -15}, {-1, -11} } },
	[137] = { .set = { {1, -8}, {7, -15}, {2, -8}, {0, -11} } },
	[138] = { .set = { {1, -8}, {7, -15}, {2, -8}, {0, -11} } },
	[139] = { .set = { {-4, -10}, {4, -20}, {-11, -11}, {-1, -10} } },
	[140] = { .set = { {-3, -7}, {5, -20}, {-13, -10}, {0, -8} } },
	[141] = { .set = { {-3, -8}, {1, -13}, {-11, -12}, {0, -8} } },
	[142] = { .set = { {-5, -8}, {-7, -8}, {-4, -16}, {-2, -10} } },
	[143] = { .set = { {-5, -8}, {-7, -8}, {-4, -16}, {-2, -10} } },
	[144] = { .set = { {-4, -9}, {7, -17}, {-7, -9}, {-2, -10} } },
	[145] = { .set = { {-4, -9}, {7, -17}, {-7, -9}, {-2, -10} } },
	[146] = { .set = { {-6, -7}, {-2, -21}, {0, -8}, {0, -10} } },
	[147] = { .set = { {-6, -5}, {-1, -21}, {-2, -5}, {0, -8} } },
	[148] = { .set = { {-6, -6}, {-6, -16}, {2, -8}, {0, -8} } },
	[149] = { .set = { {-4, -5}, {-8, -1}, {6, -12}, {0, -9} } },
	[150] = { .set = { {-4, -5}, {-8, -1}, {6, -12}, {0, -9} } },
	[151] = { .set = { {-6, -6}, {5, -20}, {-9, -3}, {1, -11} } },
	[152] = { .set = { {-6, -6}, {5, -20}, {-9, -3}, {1, -11} } },
	[153] = { .set = { {-3, -6}, {-8, -20}, {9, -11}, {0, -9} } },
	[154] = { .set = { {-2, -3}, {-10, -19}, {8, -8}, {0, -7} } },
	[155] = { .set = { {-4, -4}, {-10, -13}, {10, -13}, {0, -7} } },
	[156] = { .set = { {0, -3}, {-3, 1}, {8, -16}, {1, -9} } },
	[157] = { .set = { {0, -3}, {-3, 1}, {8, -16}, {1, -9} } },
	[158] = { .set = { {-4, -4}, {-5, -21}, {-5, 0}, {0, -10} } },
	[159] = { .set = { {-4, -4}, {-5, -21}, {-5, 0}, {0, -10} } },
	[160] = { .set = { {-2, -4}, {-8, -3}, {5, 1}, {0, -7} } },
	[161] = { .set = { {-2, -3}, {-8, -3}, {5, 2}, {0, -7} } },
	[162] = { .set = { {0, -6}, {-9, -17}, {15, -7}, {0, -7} } },
	[163] = { .set = { {1, -7}, {3, -21}, {-16, -4}, {-2, -6} } },
	[164] = { .set = { {3, -10}, {0, -18}, {-4, -1}, {-2, -7} } },
	[165] = { .set = { {-1, -10}, {-8, -15}, {6, 1}, {-1, -5} } },
	[166] = { .set = { {0, -8}, {10, -11}, {-14, -4}, {0, -5} } },
	[167] = { .set = { {0, -10}, {7, -15}, {-7, 1}, {0, -5} } },
	[168] = { .set = { {-4, -10}, {-1, -18}, {3, -1}, {1, -7} } },
	[169] = { .set = { {-2, -7}, {-4, -21}, {15, -4}, {1, -6} } },
	[170] = { .set = { {-1, -6}, {-11, -18}, {11, -13}, {-1, -10} } },
	[171] = { .set = { {0, -4}, {-12, -18}, {9, -9}, {-1, -8} } },
	[172] = { .set = { {-2, -5}, {-12, -11}, {11, -16}, {-1, -9} } },
	[173] = { .set = { {1, -6}, {-11, -14}, {7, -16}, {-2, -10} } },
	[174] = { .set = { {0, -3}, {-12, -14}, {10, -10}, {-1, -8} } },
	[175] = { .set = { {2, -4}, {-6, -7}, {4, -18}, {0, -8} } },
	[176] = { .set = { {5, -8}, {-1, -11}, {1, -18}, {-1, -10} } },
	[177] = { .set = { {5, -6}, {-2, -11}, {4, -14}, {0, -8} } },
	[178] = { .set = { {5, -6}, {3, -7}, {2, -19}, {0, -8} } },
	[179] = { .set = { {3, -9}, {10, -16}, {-6, -17}, {0, -10} } },
	[180] = { .set = { {2, -8}, {11, -16}, {-6, -13}, {0, -9} } },
	[181] = { .set = { {3, -6}, {11, -8}, {-4, -19}, {0, -8} } },
	[182] = { .set = { {-1, -12}, {9, -18}, {-13, -13}, {-1, -11} } },
	[183] = { .set = { {-1, -10}, {10, -16}, {-12, -9}, {0, -9} } },
	[184] = { .set = { {0, -10}, {8, -12}, {-12, -15}, {-1, -9} } },
	[185] = { .set = { {-4, -10}, {4, -20}, {-11, -11}, {-1, -10} } },
	[186] = { .set = { {-3, -7}, {5, -20}, {-13, -10}, {0, -8} } },
	[187] = { .set = { {-3, -8}, {1, -13}, {-11, -12}, {0, -8} } },
	[188] = { .set = { {-6, -7}, {-2, -21}, {0, -8}, {0, -10} } },
	[189] = { .set = { {-6, -5}, {-1, -21}, {-2, -5}, {0, -8} } },
	[190] = { .set = { {-6, -6}, {-6, -16}, {2, -8}, {0, -8} } },
	[191] = { .set = { {-3, -6}, {-8, -20}, {9, -11}, {0, -9} } },
	[192] = { .set = { {-2, -3}, {-10, -19}, {8, -8}, {0, -7} } },
	[193] = { .set = { {-4, -4}, {-10, -13}, {10, -13}, {0, -7} } },
	[194] = { .set = { {-1, -6}, {-11, -18}, {11, -13}, {-1, -10} } },
	[195] = { .set = { {-3, -6}, {-8, -20}, {9, -11}, {0, -9} } },
	[196] = { .set = { {-6, -7}, {-2, -21}, {0, -8}, {0, -10} } },
	[197] = { .set = { {-4, -10}, {4, -20}, {-11, -11}, {-1, -10} } },
	[198] = { .set = { {-1, -12}, {9, -18}, {-13, -13}, {-1, -11} } },
	[199] = { .set = { {2, -9}, {9, -16}, {-7, -17}, {-1, -10} } },
	[200] = { .set = { {5, -8}, {-1, -11}, {1, -18}, {-1, -10} } },
	[201] = { .set = { {1, -6}, {-11, -14}, {7, -16}, {-2, -10} } },
	[202] = { .set = { {2, -5}, {2, -1}, {8, -19}, {1, -10} } },
	[203] = { .set = { {0, -3}, {3, 1}, {-8, -16}, {-1, -9} } },
	[204] = { .set = { {3, -5}, {7, -1}, {-7, -12}, {-1, -9} } },
	[205] = { .set = { {2, -8}, {4, -8}, {1, -16}, {-1, -10} } },
	[206] = { .set = { {-2, -8}, {-3, -8}, {-8, -15}, {-1, -11} } },
	[207] = { .set = { {-4, -8}, {-6, -8}, {-3, -16}, {-1, -10} } },
	[208] = { .set = { {-4, -5}, {-8, -1}, {6, -12}, {0, -9} } },
	[209] = { .set = { {0, -3}, {-3, 1}, {8, -16}, {1, -9} } },
	[210] = { .set = { {-1, -6}, {-11, -18}, {11, -13}, {-1, -10} } },
	[211] = { .set = { {-2, -5}, {-12, -11}, {11, -16}, {-1, -9} } },
	[212] = { .set = { {2, -5}, {2, -1}, {8, -19}, {1, -10} } },
	[213] = { .set = { {1, -6}, {-11, -14}, {7, -16}, {-2, -10} } },
	[214] = { .set = { {2, -4}, {-6, -7}, {4, -18}, {0, -8} } },
	[215] = { .set = { {0, -3}, {3, 1}, {-8, -16}, {-1, -9} } },
	[216] = { .set = { {5, -8}, {-1, -11}, {1, -18}, {-1, -10} } },
	[217] = { .set = { {5, -6}, {3, -7}, {2, -19}, {0, -8} } },
	[218] = { .set = { {3, -5}, {7, -1}, {-7, -12}, {-1, -9} } },
	[219] = { .set = { {3, -9}, {10, -16}, {-6, -17}, {0, -10} } },
	[220] = { .set = { {3, -6}, {11, -8}, {-4, -19}, {0, -8} } },
	[221] = { .set = { {4, -8}, {6, -8}, {3, -16}, {1, -10} } },
	[222] = { .set = { {-1, -12}, {9, -18}, {-13, -13}, {-1, -11} } },
	[223] = { .set = { {0, -10}, {8, -12}, {-12, -15}, {-1, -9} } },
	[224] = { .set = { {-2, -8}, {-3, -8}, {-8, -15}, {-1, -11} } },
	[225] = { .set = { {-4, -10}, {4, -20}, {-11, -11}, {-1, -10} } },
	[226] = { .set = { {-3, -8}, {1, -13}, {-11, -12}, {0, -8} } },
	[227] = { .set = { {-5, -8}, {-7, -8}, {-4, -16}, {-2, -10} } },
	[228] = { .set = { {-6, -7}, {-2, -21}, {0, -8}, {0, -10} } },
	[229] = { .set = { {-6, -6}, {-6, -16}, {2, -8}, {0, -8} } },
	[230] = { .set = { {-4, -5}, {-8, -1}, {6, -12}, {0, -9} } },
	[231] = { .set = { {-3, -6}, {-8, -20}, {9, -11}, {0, -9} } },
	[232] = { .set = { {-4, -4}, {-10, -13}, {10, -13}, {0, -7} } },
	[233] = { .set = { {-1, -3}, {-4, 1}, {7, -16}, {0, -9} } },
	[234] = { .set = { {-1, -6}, {-11, -18}, {11, -13}, {-1, -10} } },
	[235] = { .set = { {-3, -6}, {-8, -20}, {9, -11}, {0, -9} } },
	[236] = { .set = { {-6, -7}, {-2, -21}, {0, -8}, {0, -10} } },
	[237] = { .set = { {-4, -10}, {4, -20}, {-11, -11}, {-1, -10} } },
	[238] = { .set = { {-1, -12}, {9, -18}, {-13, -13}, {-1, -11} } },
	[239] = { .set = { {2, -9}, {9, -16}, {-7, -17}, {-1, -10} } },
	[240] = { .set = { {5, -8}, {-1, -11}, {1, -18}, {-1, -10} } },
	[241] = { .set = { {1, -6}, {-11, -14}, {7, -16}, {-2, -10} } },
	[242] = { .set = { {-1, -6}, {-11, -18}, {11, -13}, {-1, -10} } },
	[243] = { .set = { {-3, -6}, {-8, -20}, {9, -11}, {0, -9} } },
	[244] = { .set = { {-6, -7}, {-2, -21}, {0, -8}, {0, -10} } },
	[245] = { .set = { {-4, -10}, {4, -20}, {-11, -11}, {-1, -10} } },
	[246] = { .set = { {-1, -12}, {9, -18}, {-13, -13}, {-1, -11} } },
	[247] = { .set = { {2, -9}, {9, -16}, {-7, -17}, {-1, -10} } },
	[248] = { .set = { {5, -8}, {-1, -11}, {1, -18}, {-1, -10} } },
	[249] = { .set = { {1, -6}, {-11, -14}, {7, -16}, {-2, -10} } },
};

static const ax_anim *const sPrimeapeAnimTable1[] = {
	sPrimeapeAnims_1_1,
	gAxSharedAnim_02542,
	gAxSharedAnim_02551,
	gAxSharedAnim_02559,
	gAxSharedAnim_02499,
	gAxSharedAnim_02519,
	gAxSharedAnim_02526,
	gAxSharedAnim_02535,
};

static const ax_anim *const sPrimeapeAnimTable2[] = {
	sPrimeapeAnims_2_1,
	sPrimeapeAnims_2_2,
	sPrimeapeAnims_2_3,
	sPrimeapeAnims_2_4,
	sPrimeapeAnims_2_5,
	sPrimeapeAnims_2_6,
	sPrimeapeAnims_2_7,
	sPrimeapeAnims_2_8,
};

static const ax_anim *const sPrimeapeAnimTable3[] = {
	sPrimeapeAnims_3_1,
	sPrimeapeAnims_3_2,
	sPrimeapeAnims_3_3,
	sPrimeapeAnims_3_4,
	sPrimeapeAnims_3_5,
	sPrimeapeAnims_3_6,
	sPrimeapeAnims_3_7,
	sPrimeapeAnims_3_8,
};

static const ax_anim *const sPrimeapeAnimTable4[] = {
	gAxSharedAnim_02294,
	gAxSharedAnim_00170,
	gAxSharedAnim_00161,
	gAxSharedAnim_00156,
	gAxSharedAnim_00155,
	gAxSharedAnim_02318,
	gAxSharedAnim_02308,
	gAxSharedAnim_02298,
};

static const ax_anim *const sPrimeapeAnimTable5[] = {
	sPrimeapeAnims_5_1,
	sPrimeapeAnims_5_2,
	sPrimeapeAnims_5_3,
	sPrimeapeAnims_5_4,
	sPrimeapeAnims_5_5,
	sPrimeapeAnims_5_6,
	sPrimeapeAnims_5_7,
	sPrimeapeAnims_5_8,
};

static const ax_anim *const sPrimeapeAnimTable6[] = {
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
	gAxSharedAnim_02371,
};

static const ax_anim *const sPrimeapeAnimTable7[] = {
	gAxSharedAnim_00694,
	gAxSharedAnim_00710,
	gAxSharedAnim_00718,
	gAxSharedAnim_00731,
	gAxSharedAnim_00753,
	gAxSharedAnim_00764,
	gAxSharedAnim_00776,
	gAxSharedAnim_00786,
};

static const ax_anim *const sPrimeapeAnimTable8[] = {
	sPrimeapeAnims_8_1,
	sPrimeapeAnims_8_2,
	sPrimeapeAnims_8_3,
	sPrimeapeAnims_8_4,
	sPrimeapeAnims_8_5,
	sPrimeapeAnims_8_6,
	sPrimeapeAnims_8_7,
	sPrimeapeAnims_8_8,
};

static const ax_anim *const sPrimeapeAnimTable9[] = {
	sPrimeapeAnims_9_1,
	sPrimeapeAnims_9_2,
	sPrimeapeAnims_9_3,
	sPrimeapeAnims_9_4,
	sPrimeapeAnims_9_5,
	sPrimeapeAnims_9_6,
	sPrimeapeAnims_9_7,
	sPrimeapeAnims_9_8,
};

static const ax_anim *const sPrimeapeAnimTable10[] = {
	gAxSharedAnim_01241,
	gAxSharedAnim_01252,
	gAxSharedAnim_01266,
	gAxSharedAnim_01277,
	gAxSharedAnim_01285,
	gAxSharedAnim_01300,
	gAxSharedAnim_01313,
	gAxSharedAnim_01324,
};

static const ax_anim *const sPrimeapeAnimTable11[] = {
	sPrimeapeAnims_11_1,
	sPrimeapeAnims_11_2,
	sPrimeapeAnims_11_3,
	sPrimeapeAnims_11_4,
	sPrimeapeAnims_11_5,
	sPrimeapeAnims_11_6,
	sPrimeapeAnims_11_7,
	sPrimeapeAnims_11_8,
};

static const ax_anim *const sPrimeapeAnimTable12[] = {
	gAxSharedAnim_01526,
	gAxSharedAnim_01581,
	gAxSharedAnim_01574,
	gAxSharedAnim_01551,
	gAxSharedAnim_01550,
	gAxSharedAnim_01545,
	gAxSharedAnim_01533,
	gAxSharedAnim_01527,
};

static const ax_anim *const sPrimeapeAnimTable13[] = {
	gAxSharedAnim_01586,
	gAxSharedAnim_01624,
	gAxSharedAnim_01620,
	gAxSharedAnim_01612,
	gAxSharedAnim_01605,
	gAxSharedAnim_01602,
	gAxSharedAnim_01597,
	gAxSharedAnim_01591,
};

static const ax_anim *const *const sAxAnimationsPrimeape[] = {
	sPrimeapeAnimTable1,
	sPrimeapeAnimTable2,
	sPrimeapeAnimTable3,
	sPrimeapeAnimTable4,
	sPrimeapeAnimTable5,
	sPrimeapeAnimTable6,
	sPrimeapeAnimTable7,
	sPrimeapeAnimTable8,
	sPrimeapeAnimTable9,
	sPrimeapeAnimTable10,
	sPrimeapeAnimTable11,
	sPrimeapeAnimTable12,
	sPrimeapeAnimTable13,
};

static const ax_sprite *const sAxSpritesPrimeape[] = {
	sPrimeapeSprites1,
	sPrimeapeSprites2,
	sPrimeapeSprites3,
	sPrimeapeSprites4,
	sPrimeapeSprites5,
	sPrimeapeSprites6,
	sPrimeapeSprites7,
	sPrimeapeSprites8,
	sPrimeapeSprites9,
	sPrimeapeSprites10,
	sPrimeapeSprites11,
	sPrimeapeSprites12,
	sPrimeapeSprites13,
	sPrimeapeSprites14,
	sPrimeapeSprites15,
	sPrimeapeSprites16,
	sPrimeapeSprites17,
	sPrimeapeSprites18,
	sPrimeapeSprites19,
	sPrimeapeSprites20,
	sPrimeapeSprites21,
	sPrimeapeSprites22,
	sPrimeapeSprites23,
	sPrimeapeSprites24,
	sPrimeapeSprites25,
	sPrimeapeSprites26,
	sPrimeapeSprites27,
	sPrimeapeSprites28,
	sPrimeapeSprites29,
	sPrimeapeSprites30,
	sPrimeapeSprites31,
	sPrimeapeSprites32,
	sPrimeapeSprites33,
	sPrimeapeSprites34,
	sPrimeapeSprites35,
	sPrimeapeSprites36,
	sPrimeapeSprites37,
	sPrimeapeSprites38,
	sPrimeapeSprites39,
	sPrimeapeSprites40,
	sPrimeapeSprites41,
	sPrimeapeSprites42,
	sPrimeapeSprites43,
	sPrimeapeSprites44,
	sPrimeapeSprites45,
	sPrimeapeSprites46,
	sPrimeapeSprites47,
	sPrimeapeSprites48,
	sPrimeapeSprites49,
	sPrimeapeSprites50,
	sPrimeapeSprites51,
	sPrimeapeSprites52,
	sPrimeapeSprites53,
	sPrimeapeSprites54,
	sPrimeapeSprites55,
	sPrimeapeSprites56,
	sPrimeapeSprites57,
	sPrimeapeSprites58,
	sPrimeapeSprites59,
	sPrimeapeSprites60,
};

static const axmain sAxMainPrimeape = {
	.poses = sAxPosesPrimeape,
	.animations = sAxAnimationsPrimeape,
	.animCount = ARRAY_COUNT(sAxAnimationsPrimeape),
	.spriteData = sAxSpritesPrimeape,
	.positions = sAxPositionsPrimeape,
};
