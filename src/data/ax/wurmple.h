/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainWurmple;
const SiroArchive gAxWurmple = {"SIRO", &sAxMainWurmple};

static const ax_pose sWurmplePose1[] = {
	AX_POSE(0, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose2[] = {
	AX_POSE(1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose4[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose5[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose6[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose7[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose8[] = {
	AX_POSE(7, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose9[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose10[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose11[] = {
	AX_POSE(10, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose12[] = {
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose13[] = {
	AX_POSE(12, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose14[] = {
	AX_POSE(13, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose15[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose16[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose17[] = {
	AX_POSE(10, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose18[] = {
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose19[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose20[] = {
	AX_POSE(7, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose21[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose22[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose23[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose24[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose33[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose36[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose39[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose42[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose45[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose74[] = {
	AX_POSE(15, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose76[] = {
	AX_POSE(16, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose78[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose80[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose82[] = {
	AX_POSE(19, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose84[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose86[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose88[] = {
	AX_POSE(16, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose97[] = {
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose98[] = {
	AX_POSE(21, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose99[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose100[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose101[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose102[] = {
	AX_POSE(25, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose103[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose104[] = {
	AX_POSE(25, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose105[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose106[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose114[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose118[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose123[] = {
	AX_POSE(15, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose124[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose125[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose126[] = {
	AX_POSE(18, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose127[] = {
	AX_POSE(19, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose128[] = {
	AX_POSE(18, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose129[] = {
	AX_POSE(17, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose130[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose131[] = {
	AX_POSE(1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose132[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose133[] = {
	AX_POSE(7, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose134[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose135[] = {
	AX_POSE(13, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose136[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose137[] = {
	AX_POSE(7, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose138[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose139[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose141[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose145[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose146[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose149[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose152[] = {
	AX_POSE(13, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose155[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose157[] = {
	AX_POSE(6, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose158[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose164[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose165[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose166[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose167[] = {
	AX_POSE(19, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose168[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose169[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWurmplePose170[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sWurmpleAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 11, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 17, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 19, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 20, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 23, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {6, 2}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 29, .offset = {15, 8}, .shadow = {15, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {18, 18}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {17, 19}, .shadow = {17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {18, 18}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {17, 19}, .shadow = {17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {4, -1}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 32, .offset = {10, -5}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, -1}, .shadow = {18, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, -1}, .shadow = {18, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {4, -10}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 35, .offset = {10, -18}, .shadow = {10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {20, -22}, .shadow = {20, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {20, -22}, .shadow = {20, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -3}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -9}, .shadow = {0, -7} },
	{ .frames = 2, .unkFlags = 2, .poseId = 38, .offset = {0, -18}, .shadow = {0, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-4, -10}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 41, .offset = {-10, -18}, .shadow = {-10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-20, -22}, .shadow = {-20, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 41, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-20, -22}, .shadow = {-20, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-4, -1}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {-10, -5}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, -1}, .shadow = {-18, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, -1}, .shadow = {-18, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-6, 2}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 47, .offset = {-15, 8}, .shadow = {-15, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 50, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 50, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {6, 2}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 53, .offset = {15, 8}, .shadow = {15, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {18, 18}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {17, 19}, .shadow = {17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {18, 18}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {17, 19}, .shadow = {17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {4, -1}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 56, .offset = {10, -5}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, -1}, .shadow = {18, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 56, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, -1}, .shadow = {18, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {4, -10}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 59, .offset = {10, -18}, .shadow = {10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {20, -22}, .shadow = {20, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {20, -22}, .shadow = {20, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -3}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -9}, .shadow = {0, -7} },
	{ .frames = 2, .unkFlags = 2, .poseId = 62, .offset = {0, -18}, .shadow = {0, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 62, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -21}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {1, -21}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-4, -10}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 65, .offset = {-10, -18}, .shadow = {-10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-20, -22}, .shadow = {-20, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 65, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-20, -22}, .shadow = {-20, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-4, -1}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 68, .offset = {-10, -5}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, -1}, .shadow = {-18, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, -1}, .shadow = {-18, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-6, 2}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 71, .offset = {-15, 8}, .shadow = {-15, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 72, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 73, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {-1, 3}, .shadow = {-1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {-1, 3}, .shadow = {-1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {-1, 3}, .shadow = {-1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 74, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 76, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 77, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 78, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 80, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 81, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 81, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 82, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 84, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 85, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 86, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_8_1[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_8_2[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_8_3[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_8_4[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_8_5[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_8_6[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 117, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 117, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 117, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_8_7[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_8_8[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 123, .offset = {7, 5}, .shadow = {7, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {10, 12}, .shadow = {10, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {9, 17}, .shadow = {9, 17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 127, .offset = {-9, 17}, .shadow = {-9, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {-10, 12}, .shadow = {-10, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {-7, 5}, .shadow = {-7, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 122, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {20, 3}, .shadow = {20, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {25, 12}, .shadow = {25, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 125, .offset = {23, 19}, .shadow = {23, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 126, .offset = {14, 20}, .shadow = {14, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {3, 16}, .shadow = {3, 16} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, 9}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {3, -4}, .shadow = {3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {12, -6}, .shadow = {12, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 124, .offset = {23, 1}, .shadow = {23, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 125, .offset = {20, 4}, .shadow = {20, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {13, 6}, .shadow = {13, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {6, 5}, .shadow = {6, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {6, -20}, .shadow = {6, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {16, -24}, .shadow = {16, -24} },
	{ .frames = 3, .unkFlags = 0, .poseId = 123, .offset = {23, -23}, .shadow = {23, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 124, .offset = {27, -16}, .shadow = {27, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {24, -6}, .shadow = {24, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {13, -1}, .shadow = {13, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {-10, -4}, .shadow = {-10, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {-13, -10}, .shadow = {-13, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-10, -19}, .shadow = {-10, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 122, .offset = {0, -23}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 123, .offset = {10, -19}, .shadow = {10, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {13, -10}, .shadow = {13, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {10, -4}, .shadow = {10, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 124, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {-6, -20}, .shadow = {-6, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {-16, -24}, .shadow = {-16, -24} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {-23, -23}, .shadow = {-23, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 128, .offset = {-27, -16}, .shadow = {-27, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {-24, -6}, .shadow = {-24, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {-13, -1}, .shadow = {-13, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 123, .offset = {-3, -4}, .shadow = {-3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {-12, -6}, .shadow = {-12, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 128, .offset = {-23, 1}, .shadow = {-23, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 127, .offset = {-20, 4}, .shadow = {-20, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {-13, 6}, .shadow = {-13, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {-6, 5}, .shadow = {-6, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 122, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-20, 3}, .shadow = {-20, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {-25, 12}, .shadow = {-25, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 127, .offset = {-23, 19}, .shadow = {-23, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 126, .offset = {-14, 20}, .shadow = {-14, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-3, 16}, .shadow = {-3, 16} },
	{ .frames = 1, .unkFlags = 0, .poseId = 124, .offset = {0, 9}, .shadow = {0, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 138, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 141, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 145, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 144, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 146, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 148, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 148, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 147, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 149, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 151, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 151, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 150, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 153, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 156, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWurmpleAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 159, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sWurmpleGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_1.4bpp.lz");
static const ax_sprite sWurmpleSprites1[] = {
	{sWurmpleGfx1, ARRAY_COUNT(sWurmpleGfx1)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_2.4bpp.lz");
static const ax_sprite sWurmpleSprites2[] = {
	{sWurmpleGfx2, ARRAY_COUNT(sWurmpleGfx2)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_3.4bpp.lz");
static const ax_sprite sWurmpleSprites3[] = {
	{sWurmpleGfx3, ARRAY_COUNT(sWurmpleGfx3)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_4.4bpp.lz");
static const ax_sprite sWurmpleSprites4[] = {
	{sWurmpleGfx4, ARRAY_COUNT(sWurmpleGfx4)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_5.4bpp.lz");
static const ax_sprite sWurmpleSprites5[] = {
	{sWurmpleGfx5, ARRAY_COUNT(sWurmpleGfx5)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_6.4bpp.lz");
static const ax_sprite sWurmpleSprites6[] = {
	{sWurmpleGfx6, ARRAY_COUNT(sWurmpleGfx6)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_7.4bpp.lz");
static const ax_sprite sWurmpleSprites7[] = {
	{sWurmpleGfx7, ARRAY_COUNT(sWurmpleGfx7)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_8.4bpp.lz");
static const ax_sprite sWurmpleSprites8[] = {
	{sWurmpleGfx8, ARRAY_COUNT(sWurmpleGfx8)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_9.4bpp.lz");
static const ax_sprite sWurmpleSprites9[] = {
	{sWurmpleGfx9, ARRAY_COUNT(sWurmpleGfx9)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_10.4bpp.lz");
static const ax_sprite sWurmpleSprites10[] = {
	{sWurmpleGfx10, ARRAY_COUNT(sWurmpleGfx10)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_11.4bpp.lz");
static const ax_sprite sWurmpleSprites11[] = {
	{sWurmpleGfx11, ARRAY_COUNT(sWurmpleGfx11)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_12.4bpp.lz");
static const ax_sprite sWurmpleSprites12[] = {
	{sWurmpleGfx12, ARRAY_COUNT(sWurmpleGfx12)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_13.4bpp.lz");
static const ax_sprite sWurmpleSprites13[] = {
	{sWurmpleGfx13, ARRAY_COUNT(sWurmpleGfx13)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_14.4bpp.lz");
static const ax_sprite sWurmpleSprites14[] = {
	{sWurmpleGfx14, ARRAY_COUNT(sWurmpleGfx14)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_15.4bpp.lz");
static const ax_sprite sWurmpleSprites15[] = {
	{sWurmpleGfx15, ARRAY_COUNT(sWurmpleGfx15)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_16.4bpp.lz");
static const ax_sprite sWurmpleSprites16[] = {
	{sWurmpleGfx16, ARRAY_COUNT(sWurmpleGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_17.4bpp.lz");
static const u8 sWurmpleGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_17_1.4bpp.lz");
static const u8 sWurmpleGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_17_2.4bpp.lz");
static const ax_sprite sWurmpleSprites17[] = {
	{NULL, 128}, 
	{sWurmpleGfx17, ARRAY_COUNT(sWurmpleGfx17)}, 
	{NULL, 32}, 
	{sWurmpleGfx17_1, ARRAY_COUNT(sWurmpleGfx17_1)}, 
	{NULL, 32}, 
	{sWurmpleGfx17_2, ARRAY_COUNT(sWurmpleGfx17_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_18.4bpp.lz");
static const u8 sWurmpleGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_18_1.4bpp.lz");
static const u8 sWurmpleGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_18_2.4bpp.lz");
static const ax_sprite sWurmpleSprites18[] = {
	{NULL, 32}, 
	{sWurmpleGfx18, ARRAY_COUNT(sWurmpleGfx18)}, 
	{NULL, 32}, 
	{sWurmpleGfx18_1, ARRAY_COUNT(sWurmpleGfx18_1)}, 
	{NULL, 32}, 
	{sWurmpleGfx18_2, ARRAY_COUNT(sWurmpleGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_19.4bpp.lz");
static const u8 sWurmpleGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_19_1.4bpp.lz");
static const u8 sWurmpleGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_19_2.4bpp.lz");
static const ax_sprite sWurmpleSprites19[] = {
	{sWurmpleGfx19, ARRAY_COUNT(sWurmpleGfx19)}, 
	{NULL, 32}, 
	{sWurmpleGfx19_1, ARRAY_COUNT(sWurmpleGfx19_1)}, 
	{NULL, 32}, 
	{sWurmpleGfx19_2, ARRAY_COUNT(sWurmpleGfx19_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_20.4bpp.lz");
static const ax_sprite sWurmpleSprites20[] = {
	{sWurmpleGfx20, ARRAY_COUNT(sWurmpleGfx20)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_21.4bpp.lz");
static const ax_sprite sWurmpleSprites21[] = {
	{sWurmpleGfx21, ARRAY_COUNT(sWurmpleGfx21)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_22.4bpp.lz");
static const ax_sprite sWurmpleSprites22[] = {
	{sWurmpleGfx22, ARRAY_COUNT(sWurmpleGfx22)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_23.4bpp.lz");
static const ax_sprite sWurmpleSprites23[] = {
	{sWurmpleGfx23, ARRAY_COUNT(sWurmpleGfx23)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_24.4bpp.lz");
static const ax_sprite sWurmpleSprites24[] = {
	{sWurmpleGfx24, ARRAY_COUNT(sWurmpleGfx24)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_25.4bpp.lz");
static const ax_sprite sWurmpleSprites25[] = {
	{sWurmpleGfx25, ARRAY_COUNT(sWurmpleGfx25)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_26.4bpp.lz");
static const ax_sprite sWurmpleSprites26[] = {
	{sWurmpleGfx26, ARRAY_COUNT(sWurmpleGfx26)}, 
	{NULL, 0}
};
static const u8 sWurmpleGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wurmple/sprite_27.4bpp.lz");
static const ax_sprite sWurmpleSprites27[] = {
	{sWurmpleGfx27, ARRAY_COUNT(sWurmpleGfx27)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesWurmple[] = {
	sWurmplePose1,
	sWurmplePose2,
	sWurmplePose3,
	sWurmplePose4,
	sWurmplePose5,
	sWurmplePose6,
	sWurmplePose7,
	sWurmplePose8,
	sWurmplePose9,
	sWurmplePose10,
	sWurmplePose11,
	sWurmplePose12,
	sWurmplePose13,
	sWurmplePose14,
	sWurmplePose15,
	sWurmplePose16,
	sWurmplePose17,
	sWurmplePose18,
	sWurmplePose19,
	sWurmplePose20,
	sWurmplePose21,
	sWurmplePose22,
	sWurmplePose23,
	sWurmplePose24,
	sWurmplePose1,
	sWurmplePose2,
	sWurmplePose3,
	sWurmplePose4,
	sWurmplePose5,
	sWurmplePose6,
	sWurmplePose7,
	sWurmplePose8,
	sWurmplePose33,
	sWurmplePose10,
	sWurmplePose11,
	sWurmplePose36,
	sWurmplePose13,
	sWurmplePose14,
	sWurmplePose39,
	sWurmplePose16,
	sWurmplePose17,
	sWurmplePose42,
	sWurmplePose19,
	sWurmplePose20,
	sWurmplePose45,
	sWurmplePose22,
	sWurmplePose23,
	sWurmplePose24,
	sWurmplePose1,
	sWurmplePose2,
	sWurmplePose3,
	sWurmplePose4,
	sWurmplePose5,
	sWurmplePose6,
	sWurmplePose7,
	sWurmplePose8,
	sWurmplePose33,
	sWurmplePose10,
	sWurmplePose11,
	sWurmplePose36,
	sWurmplePose13,
	sWurmplePose14,
	sWurmplePose39,
	sWurmplePose16,
	sWurmplePose17,
	sWurmplePose42,
	sWurmplePose19,
	sWurmplePose20,
	sWurmplePose45,
	sWurmplePose22,
	sWurmplePose23,
	sWurmplePose24,
	sWurmplePose1,
	sWurmplePose74,
	sWurmplePose4,
	sWurmplePose76,
	sWurmplePose7,
	sWurmplePose78,
	sWurmplePose10,
	sWurmplePose80,
	sWurmplePose13,
	sWurmplePose82,
	sWurmplePose16,
	sWurmplePose84,
	sWurmplePose19,
	sWurmplePose86,
	sWurmplePose22,
	sWurmplePose88,
	sWurmplePose1,
	sWurmplePose22,
	sWurmplePose19,
	sWurmplePose16,
	sWurmplePose13,
	sWurmplePose10,
	sWurmplePose7,
	sWurmplePose4,
	sWurmplePose97,
	sWurmplePose98,
	sWurmplePose99,
	sWurmplePose100,
	sWurmplePose101,
	sWurmplePose102,
	sWurmplePose103,
	sWurmplePose104,
	sWurmplePose105,
	sWurmplePose106,
	sWurmplePose1,
	sWurmplePose74,
	sWurmplePose4,
	sWurmplePose76,
	sWurmplePose7,
	sWurmplePose78,
	sWurmplePose10,
	sWurmplePose114,
	sWurmplePose13,
	sWurmplePose82,
	sWurmplePose16,
	sWurmplePose118,
	sWurmplePose19,
	sWurmplePose86,
	sWurmplePose22,
	sWurmplePose88,
	sWurmplePose123,
	sWurmplePose124,
	sWurmplePose125,
	sWurmplePose126,
	sWurmplePose127,
	sWurmplePose128,
	sWurmplePose129,
	sWurmplePose130,
	sWurmplePose131,
	sWurmplePose132,
	sWurmplePose133,
	sWurmplePose134,
	sWurmplePose135,
	sWurmplePose136,
	sWurmplePose137,
	sWurmplePose138,
	sWurmplePose139,
	sWurmplePose2,
	sWurmplePose141,
	sWurmplePose4,
	sWurmplePose132,
	sWurmplePose6,
	sWurmplePose145,
	sWurmplePose146,
	sWurmplePose33,
	sWurmplePose10,
	sWurmplePose149,
	sWurmplePose36,
	sWurmplePose13,
	sWurmplePose152,
	sWurmplePose39,
	sWurmplePose16,
	sWurmplePose155,
	sWurmplePose42,
	sWurmplePose157,
	sWurmplePose158,
	sWurmplePose45,
	sWurmplePose22,
	sWurmplePose138,
	sWurmplePose24,
	sWurmplePose123,
	sWurmplePose164,
	sWurmplePose165,
	sWurmplePose166,
	sWurmplePose167,
	sWurmplePose168,
	sWurmplePose169,
	sWurmplePose170,
	sWurmplePose1,
	sWurmplePose22,
	sWurmplePose19,
	sWurmplePose16,
	sWurmplePose13,
	sWurmplePose10,
	sWurmplePose7,
	sWurmplePose4,
};

static const struct PositionSets sAxPositionsWurmple[] = {
	[0] = { .set = { {0, -2}, {-2, 0}, {2, 0}, {0, -5} } },
	[1] = { .set = { {0, -6}, {-2, -3}, {2, -3}, {0, -9} } },
	[2] = { .set = { {0, 1}, {-3, 3}, {3, 3}, {0, -5} } },
	[3] = { .set = { {7, -4}, {7, -2}, {3, -1}, {-1, -6} } },
	[4] = { .set = { {7, -11}, {8, -9}, {3, -8}, {-1, -8} } },
	[5] = { .set = { {7, -2}, {6, 1}, {1, 2}, {0, -8} } },
	[6] = { .set = { {9, -5}, {6, -5}, {5, -2}, {-1, -4} } },
	[7] = { .set = { {8, -13}, {7, -10}, {6, -9}, {0, -9} } },
	[8] = { .set = { {10, -6}, {6, -5}, {5, -4}, {1, -7} } },
	[9] = { .set = { {8, -7}, {2, -7}, {7, -5}, {1, -6} } },
	[10] = { .set = { {8, -14}, {1, -12}, {7, -11}, {0, -9} } },
	[11] = { .set = { {5, -6}, {1, -6}, {5, -4}, {1, -8} } },
	[12] = { .set = { {0, -10}, {4, -5}, {-4, -5}, {0, -9} } },
	[13] = { .set = { {0, -13}, {4, -14}, {-4, -14}, {0, -12} } },
	[14] = { .set = { {0, -9}, {4, -7}, {-4, -7}, {0, -10} } },
	[15] = { .set = { {-9, -7}, {-3, -7}, {-8, -5}, {-2, -6} } },
	[16] = { .set = { {-9, -14}, {-2, -12}, {-8, -11}, {-1, -9} } },
	[17] = { .set = { {-6, -6}, {-2, -6}, {-6, -4}, {-2, -8} } },
	[18] = { .set = { {-10, -5}, {-7, -5}, {-6, -2}, {0, -4} } },
	[19] = { .set = { {-9, -13}, {-8, -10}, {-7, -9}, {-1, -9} } },
	[20] = { .set = { {-11, -6}, {-7, -5}, {-6, -4}, {-2, -7} } },
	[21] = { .set = { {-8, -4}, {-8, -2}, {-4, -1}, {0, -6} } },
	[22] = { .set = { {-8, -11}, {-9, -9}, {-4, -8}, {0, -8} } },
	[23] = { .set = { {-8, -2}, {-7, 1}, {-2, 2}, {-1, -8} } },
	[24] = { .set = { {0, -2}, {-2, 0}, {2, 0}, {0, -5} } },
	[25] = { .set = { {0, -6}, {-2, -3}, {2, -3}, {0, -9} } },
	[26] = { .set = { {0, 1}, {-3, 3}, {3, 3}, {0, -5} } },
	[27] = { .set = { {7, -4}, {7, -2}, {3, -1}, {-1, -6} } },
	[28] = { .set = { {7, -11}, {8, -9}, {3, -8}, {-1, -8} } },
	[29] = { .set = { {7, -2}, {6, 1}, {1, 2}, {0, -8} } },
	[30] = { .set = { {9, -5}, {6, -5}, {5, -2}, {-1, -4} } },
	[31] = { .set = { {8, -13}, {7, -10}, {6, -9}, {0, -9} } },
	[32] = { .set = { {10, -3}, {6, -2}, {5, -1}, {1, -4} } },
	[33] = { .set = { {8, -7}, {2, -7}, {7, -5}, {1, -6} } },
	[34] = { .set = { {8, -14}, {1, -12}, {7, -11}, {0, -9} } },
	[35] = { .set = { {5, -3}, {1, -3}, {5, -1}, {1, -5} } },
	[36] = { .set = { {0, -10}, {4, -5}, {-4, -5}, {0, -9} } },
	[37] = { .set = { {0, -13}, {4, -14}, {-4, -14}, {0, -12} } },
	[38] = { .set = { {0, -8}, {4, -6}, {-4, -6}, {0, -9} } },
	[39] = { .set = { {-9, -7}, {-3, -7}, {-8, -5}, {-2, -6} } },
	[40] = { .set = { {-9, -14}, {-2, -12}, {-8, -11}, {-1, -9} } },
	[41] = { .set = { {-6, -3}, {-2, -3}, {-6, -1}, {-2, -5} } },
	[42] = { .set = { {-10, -5}, {-7, -5}, {-6, -2}, {0, -4} } },
	[43] = { .set = { {-9, -13}, {-8, -10}, {-7, -9}, {-1, -9} } },
	[44] = { .set = { {-11, -3}, {-7, -2}, {-6, -1}, {-2, -4} } },
	[45] = { .set = { {-8, -4}, {-8, -2}, {-4, -1}, {0, -6} } },
	[46] = { .set = { {-8, -11}, {-9, -9}, {-4, -8}, {0, -8} } },
	[47] = { .set = { {-8, -2}, {-7, 1}, {-2, 2}, {-1, -8} } },
	[48] = { .set = { {0, -2}, {-2, 0}, {2, 0}, {0, -5} } },
	[49] = { .set = { {0, -6}, {-2, -3}, {2, -3}, {0, -9} } },
	[50] = { .set = { {0, 1}, {-3, 3}, {3, 3}, {0, -5} } },
	[51] = { .set = { {7, -4}, {7, -2}, {3, -1}, {-1, -6} } },
	[52] = { .set = { {7, -11}, {8, -9}, {3, -8}, {-1, -8} } },
	[53] = { .set = { {7, -2}, {6, 1}, {1, 2}, {0, -8} } },
	[54] = { .set = { {9, -5}, {6, -5}, {5, -2}, {-1, -4} } },
	[55] = { .set = { {8, -13}, {7, -10}, {6, -9}, {0, -9} } },
	[56] = { .set = { {10, -3}, {6, -2}, {5, -1}, {1, -4} } },
	[57] = { .set = { {8, -7}, {2, -7}, {7, -5}, {1, -6} } },
	[58] = { .set = { {8, -14}, {1, -12}, {7, -11}, {0, -9} } },
	[59] = { .set = { {5, -3}, {1, -3}, {5, -1}, {1, -5} } },
	[60] = { .set = { {0, -10}, {4, -5}, {-4, -5}, {0, -9} } },
	[61] = { .set = { {0, -13}, {4, -14}, {-4, -14}, {0, -12} } },
	[62] = { .set = { {0, -8}, {4, -6}, {-4, -6}, {0, -9} } },
	[63] = { .set = { {-9, -7}, {-3, -7}, {-8, -5}, {-2, -6} } },
	[64] = { .set = { {-9, -14}, {-2, -12}, {-8, -11}, {-1, -9} } },
	[65] = { .set = { {-6, -3}, {-2, -3}, {-6, -1}, {-2, -5} } },
	[66] = { .set = { {-10, -5}, {-7, -5}, {-6, -2}, {0, -4} } },
	[67] = { .set = { {-9, -13}, {-8, -10}, {-7, -9}, {-1, -9} } },
	[68] = { .set = { {-11, -3}, {-7, -2}, {-6, -1}, {-2, -4} } },
	[69] = { .set = { {-8, -4}, {-8, -2}, {-4, -1}, {0, -6} } },
	[70] = { .set = { {-8, -11}, {-9, -9}, {-4, -8}, {0, -8} } },
	[71] = { .set = { {-8, -2}, {-7, 1}, {-2, 2}, {-1, -8} } },
	[72] = { .set = { {0, -2}, {-2, 0}, {2, 0}, {0, -5} } },
	[73] = { .set = { {0, 3}, {-4, 3}, {4, 3}, {0, -4} } },
	[74] = { .set = { {7, -4}, {7, -2}, {3, -1}, {-1, -6} } },
	[75] = { .set = { {8, 1}, {5, 0}, {0, 2}, {1, -4} } },
	[76] = { .set = { {9, -5}, {6, -5}, {5, -2}, {-1, -4} } },
	[77] = { .set = { {9, -1}, {2, -5}, {2, -1}, {0, -5} } },
	[78] = { .set = { {8, -7}, {2, -7}, {7, -5}, {1, -6} } },
	[79] = { .set = { {6, -3}, {1, -1}, {4, -1}, {1, -7} } },
	[80] = { .set = { {0, -10}, {4, -5}, {-4, -5}, {0, -9} } },
	[81] = { .set = { {0, -3}, {4, -2}, {-4, -2}, {0, -8} } },
	[82] = { .set = { {-9, -7}, {-3, -7}, {-8, -5}, {-2, -6} } },
	[83] = { .set = { {-7, -3}, {-2, -1}, {-5, -1}, {-2, -7} } },
	[84] = { .set = { {-10, -5}, {-7, -5}, {-6, -2}, {0, -4} } },
	[85] = { .set = { {-10, -1}, {-3, -5}, {-3, -1}, {-1, -5} } },
	[86] = { .set = { {-8, -4}, {-8, -2}, {-4, -1}, {0, -6} } },
	[87] = { .set = { {-9, 1}, {-6, 0}, {-1, 2}, {-2, -4} } },
	[88] = { .set = { {0, -2}, {-2, 0}, {2, 0}, {0, -5} } },
	[89] = { .set = { {-8, -4}, {-8, -2}, {-4, -1}, {0, -6} } },
	[90] = { .set = { {-10, -5}, {-7, -5}, {-6, -2}, {0, -4} } },
	[91] = { .set = { {-9, -7}, {-3, -7}, {-8, -5}, {-2, -6} } },
	[92] = { .set = { {0, -10}, {4, -5}, {-4, -5}, {0, -9} } },
	[93] = { .set = { {8, -7}, {2, -7}, {7, -5}, {1, -6} } },
	[94] = { .set = { {9, -5}, {6, -5}, {5, -2}, {-1, -4} } },
	[95] = { .set = { {7, -4}, {7, -2}, {3, -1}, {-1, -6} } },
	[96] = { .set = { {-8, 1}, {-9, 2}, {-4, 4}, {1, -6} } },
	[97] = { .set = { {-8, 1}, {-9, 2}, {-4, 4}, {1, -6} } },
	[98] = { .set = { {0, 1}, {-5, 2}, {5, 2}, {0, -5} } },
	[99] = { .set = { {5, 0}, {3, -2}, {-2, 2}, {-1, -7} } },
	[100] = { .set = { {7, 1}, {1, 0}, {-1, 1}, {-3, -3} } },
	[101] = { .set = { {5, -1}, {-3, -1}, {4, 2}, {0, -4} } },
	[102] = { .set = { {0, -5}, {6, -2}, {-6, -2}, {0, -4} } },
	[103] = { .set = { {-6, -1}, {2, -1}, {-5, 2}, {-1, -4} } },
	[104] = { .set = { {-8, 1}, {-2, 0}, {0, 1}, {2, -3} } },
	[105] = { .set = { {-6, 0}, {-4, -2}, {1, 2}, {0, -7} } },
	[106] = { .set = { {0, -2}, {-2, 0}, {2, 0}, {0, -5} } },
	[107] = { .set = { {0, 3}, {-4, 3}, {4, 3}, {0, -4} } },
	[108] = { .set = { {7, -4}, {7, -2}, {3, -1}, {-1, -6} } },
	[109] = { .set = { {8, 1}, {5, 0}, {0, 2}, {1, -4} } },
	[110] = { .set = { {9, -5}, {6, -5}, {5, -2}, {-1, -4} } },
	[111] = { .set = { {9, -1}, {2, -5}, {2, -1}, {0, -5} } },
	[112] = { .set = { {8, -7}, {2, -7}, {7, -5}, {1, -6} } },
	[113] = { .set = { {7, -4}, {2, -2}, {5, -2}, {2, -8} } },
	[114] = { .set = { {0, -10}, {4, -5}, {-4, -5}, {0, -9} } },
	[115] = { .set = { {0, -3}, {4, -2}, {-4, -2}, {0, -8} } },
	[116] = { .set = { {-9, -7}, {-3, -7}, {-8, -5}, {-2, -6} } },
	[117] = { .set = { {-8, -4}, {-3, -2}, {-6, -2}, {-3, -8} } },
	[118] = { .set = { {-10, -5}, {-7, -5}, {-6, -2}, {0, -4} } },
	[119] = { .set = { {-10, -1}, {-3, -5}, {-3, -1}, {-1, -5} } },
	[120] = { .set = { {-8, -4}, {-8, -2}, {-4, -1}, {0, -6} } },
	[121] = { .set = { {-9, 1}, {-6, 0}, {-1, 2}, {-2, -4} } },
	[122] = { .set = { {-1, 1}, {-5, 1}, {3, 1}, {-1, -6} } },
	[123] = { .set = { {-7, 0}, {-4, -1}, {1, 1}, {0, -5} } },
	[124] = { .set = { {-9, 0}, {-2, -4}, {-2, 0}, {0, -4} } },
	[125] = { .set = { {-6, -1}, {-1, 1}, {-4, 1}, {-1, -5} } },
	[126] = { .set = { {-1, -1}, {3, 0}, {-5, 0}, {-1, -6} } },
	[127] = { .set = { {5, -1}, {0, 1}, {3, 1}, {0, -5} } },
	[128] = { .set = { {8, 0}, {1, -4}, {1, 0}, {-1, -4} } },
	[129] = { .set = { {6, 0}, {3, -1}, {-2, 1}, {-1, -5} } },
	[130] = { .set = { {0, -5}, {-2, -2}, {2, -2}, {0, -8} } },
	[131] = { .set = { {7, -7}, {8, -5}, {3, -4}, {-1, -4} } },
	[132] = { .set = { {8, -8}, {7, -5}, {6, -4}, {0, -4} } },
	[133] = { .set = { {7, -10}, {0, -8}, {6, -7}, {-1, -5} } },
	[134] = { .set = { {0, -8}, {4, -9}, {-4, -9}, {0, -7} } },
	[135] = { .set = { {-8, -10}, {-1, -8}, {-7, -7}, {0, -5} } },
	[136] = { .set = { {-9, -8}, {-8, -5}, {-7, -4}, {-1, -4} } },
	[137] = { .set = { {-8, -7}, {-9, -5}, {-4, -4}, {0, -4} } },
	[138] = { .set = { {0, -5}, {-2, -3}, {2, -3}, {0, -8} } },
	[139] = { .set = { {0, -6}, {-2, -3}, {2, -3}, {0, -9} } },
	[140] = { .set = { {0, -1}, {-3, 1}, {3, 1}, {0, -7} } },
	[141] = { .set = { {7, -4}, {7, -2}, {3, -1}, {-1, -6} } },
	[142] = { .set = { {7, -7}, {8, -5}, {3, -4}, {-1, -4} } },
	[143] = { .set = { {7, -2}, {6, 1}, {1, 2}, {0, -8} } },
	[144] = { .set = { {10, -5}, {7, -5}, {6, -2}, {0, -4} } },
	[145] = { .set = { {8, -9}, {7, -6}, {6, -5}, {0, -5} } },
	[146] = { .set = { {10, -3}, {6, -2}, {5, -1}, {1, -4} } },
	[147] = { .set = { {8, -7}, {2, -7}, {7, -5}, {1, -6} } },
	[148] = { .set = { {8, -10}, {1, -8}, {7, -7}, {0, -5} } },
	[149] = { .set = { {5, -3}, {1, -3}, {5, -1}, {1, -5} } },
	[150] = { .set = { {0, -10}, {4, -5}, {-4, -5}, {0, -9} } },
	[151] = { .set = { {0, -9}, {4, -10}, {-4, -10}, {0, -8} } },
	[152] = { .set = { {0, -8}, {4, -6}, {-4, -6}, {0, -9} } },
	[153] = { .set = { {-9, -7}, {-3, -7}, {-8, -5}, {-2, -6} } },
	[154] = { .set = { {-9, -10}, {-2, -8}, {-8, -7}, {-1, -5} } },
	[155] = { .set = { {-6, -3}, {-2, -3}, {-6, -1}, {-2, -5} } },
	[156] = { .set = { {-11, -5}, {-8, -5}, {-7, -2}, {-1, -4} } },
	[157] = { .set = { {-9, -9}, {-8, -6}, {-7, -5}, {-1, -5} } },
	[158] = { .set = { {-11, -3}, {-7, -2}, {-6, -1}, {-2, -4} } },
	[159] = { .set = { {-8, -4}, {-8, -2}, {-4, -1}, {0, -6} } },
	[160] = { .set = { {-8, -7}, {-9, -5}, {-4, -4}, {0, -4} } },
	[161] = { .set = { {-8, -2}, {-7, 1}, {-2, 2}, {-1, -8} } },
	[162] = { .set = { {-1, 1}, {-5, 1}, {3, 1}, {-1, -6} } },
	[163] = { .set = { {-8, 0}, {-5, -1}, {0, 1}, {-1, -5} } },
	[164] = { .set = { {-9, -1}, {-2, -5}, {-2, -1}, {0, -5} } },
	[165] = { .set = { {-5, -3}, {0, -1}, {-3, -1}, {0, -7} } },
	[166] = { .set = { {-1, -3}, {3, -2}, {-5, -2}, {-1, -8} } },
	[167] = { .set = { {5, -3}, {0, -1}, {3, -1}, {0, -7} } },
	[168] = { .set = { {8, -1}, {1, -5}, {1, -1}, {-1, -5} } },
	[169] = { .set = { {7, 0}, {4, -1}, {-1, 1}, {0, -5} } },
	[170] = { .set = { {0, -2}, {-2, 0}, {2, 0}, {0, -5} } },
	[171] = { .set = { {-8, -4}, {-8, -2}, {-4, -1}, {0, -6} } },
	[172] = { .set = { {-10, -5}, {-7, -5}, {-6, -2}, {0, -4} } },
	[173] = { .set = { {-9, -7}, {-3, -7}, {-8, -5}, {-2, -6} } },
	[174] = { .set = { {0, -10}, {4, -5}, {-4, -5}, {0, -9} } },
	[175] = { .set = { {8, -7}, {2, -7}, {7, -5}, {1, -6} } },
	[176] = { .set = { {9, -5}, {6, -5}, {5, -2}, {-1, -4} } },
	[177] = { .set = { {7, -4}, {7, -2}, {3, -1}, {-1, -6} } },
};

static const ax_anim *const sWurmpleAnimTable1[] = {
	sWurmpleAnims_1_1,
	sWurmpleAnims_1_2,
	sWurmpleAnims_1_3,
	sWurmpleAnims_1_4,
	sWurmpleAnims_1_5,
	sWurmpleAnims_1_6,
	sWurmpleAnims_1_7,
	sWurmpleAnims_1_8,
};

static const ax_anim *const sWurmpleAnimTable2[] = {
	sWurmpleAnims_2_1,
	sWurmpleAnims_2_2,
	sWurmpleAnims_2_3,
	sWurmpleAnims_2_4,
	sWurmpleAnims_2_5,
	sWurmpleAnims_2_6,
	sWurmpleAnims_2_7,
	sWurmpleAnims_2_8,
};

static const ax_anim *const sWurmpleAnimTable3[] = {
	sWurmpleAnims_3_1,
	sWurmpleAnims_3_2,
	sWurmpleAnims_3_3,
	sWurmpleAnims_3_4,
	sWurmpleAnims_3_5,
	sWurmpleAnims_3_6,
	sWurmpleAnims_3_7,
	sWurmpleAnims_3_8,
};

static const ax_anim *const sWurmpleAnimTable4[] = {
	sWurmpleAnims_4_1,
	sWurmpleAnims_4_2,
	sWurmpleAnims_4_3,
	sWurmpleAnims_4_4,
	sWurmpleAnims_4_5,
	sWurmpleAnims_4_6,
	sWurmpleAnims_4_7,
	sWurmpleAnims_4_8,
};

static const ax_anim *const sWurmpleAnimTable5[] = {
	gAxSharedAnim_02217,
	gAxSharedAnim_02284,
	gAxSharedAnim_02275,
	gAxSharedAnim_02268,
	gAxSharedAnim_02258,
	gAxSharedAnim_02246,
	gAxSharedAnim_02239,
	gAxSharedAnim_02229,
};

static const ax_anim *const sWurmpleAnimTable6[] = {
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
	gAxSharedAnim_02406,
};

static const ax_anim *const sWurmpleAnimTable7[] = {
	gAxSharedAnim_02309,
	gAxSharedAnim_02312,
	gAxSharedAnim_00152,
	gAxSharedAnim_00157,
	gAxSharedAnim_00164,
	gAxSharedAnim_00172,
	gAxSharedAnim_00179,
	gAxSharedAnim_00189,
};

static const ax_anim *const sWurmpleAnimTable8[] = {
	sWurmpleAnims_8_1,
	sWurmpleAnims_8_2,
	sWurmpleAnims_8_3,
	sWurmpleAnims_8_4,
	sWurmpleAnims_8_5,
	sWurmpleAnims_8_6,
	sWurmpleAnims_8_7,
	sWurmpleAnims_8_8,
};

static const ax_anim *const sWurmpleAnimTable9[] = {
	sWurmpleAnims_9_1,
	sWurmpleAnims_9_2,
	sWurmpleAnims_9_3,
	sWurmpleAnims_9_4,
	sWurmpleAnims_9_5,
	sWurmpleAnims_9_6,
	sWurmpleAnims_9_7,
	sWurmpleAnims_9_8,
};

static const ax_anim *const sWurmpleAnimTable10[] = {
	gAxSharedAnim_00400,
	gAxSharedAnim_00408,
	gAxSharedAnim_00417,
	gAxSharedAnim_00426,
	gAxSharedAnim_00432,
	gAxSharedAnim_00439,
	gAxSharedAnim_00447,
	gAxSharedAnim_00458,
};

static const ax_anim *const sWurmpleAnimTable11[] = {
	sWurmpleAnims_11_1,
	sWurmpleAnims_11_2,
	sWurmpleAnims_11_3,
	sWurmpleAnims_11_4,
	sWurmpleAnims_11_5,
	sWurmpleAnims_11_6,
	sWurmpleAnims_11_7,
	sWurmpleAnims_11_8,
};

static const ax_anim *const sWurmpleAnimTable12[] = {
	gAxSharedAnim_00707,
	gAxSharedAnim_00783,
	gAxSharedAnim_00765,
	gAxSharedAnim_00755,
	gAxSharedAnim_00754,
	gAxSharedAnim_00740,
	gAxSharedAnim_00719,
	gAxSharedAnim_00708,
};

static const ax_anim *const sWurmpleAnimTable13[] = {
	gAxSharedAnim_00803,
	gAxSharedAnim_00888,
	gAxSharedAnim_00881,
	gAxSharedAnim_00864,
	gAxSharedAnim_00851,
	gAxSharedAnim_00841,
	gAxSharedAnim_00830,
	gAxSharedAnim_00816,
};

static const ax_anim *const *const sAxAnimationsWurmple[] = {
	sWurmpleAnimTable1,
	sWurmpleAnimTable2,
	sWurmpleAnimTable3,
	sWurmpleAnimTable4,
	sWurmpleAnimTable5,
	sWurmpleAnimTable6,
	sWurmpleAnimTable7,
	sWurmpleAnimTable8,
	sWurmpleAnimTable9,
	sWurmpleAnimTable10,
	sWurmpleAnimTable11,
	sWurmpleAnimTable12,
	sWurmpleAnimTable13,
};

static const ax_sprite *const sAxSpritesWurmple[] = {
	sWurmpleSprites1,
	sWurmpleSprites2,
	sWurmpleSprites3,
	sWurmpleSprites4,
	sWurmpleSprites5,
	sWurmpleSprites6,
	sWurmpleSprites7,
	sWurmpleSprites8,
	sWurmpleSprites9,
	sWurmpleSprites10,
	sWurmpleSprites11,
	sWurmpleSprites12,
	sWurmpleSprites13,
	sWurmpleSprites14,
	sWurmpleSprites15,
	sWurmpleSprites16,
	sWurmpleSprites17,
	sWurmpleSprites18,
	sWurmpleSprites19,
	sWurmpleSprites20,
	sWurmpleSprites21,
	sWurmpleSprites22,
	sWurmpleSprites23,
	sWurmpleSprites24,
	sWurmpleSprites25,
	sWurmpleSprites26,
	sWurmpleSprites27,
};

static const axmain sAxMainWurmple = {
	.poses = sAxPosesWurmple,
	.animations = sAxAnimationsWurmple,
	.animCount = ARRAY_COUNT(sAxAnimationsWurmple),
	.spriteData = sAxSpritesWurmple,
	.positions = sAxPositionsWurmple,
};
