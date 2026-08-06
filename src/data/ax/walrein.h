/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainWalrein;
const SiroArchive gAxWalrein = {"SIRO", &sAxMainWalrein};

static const ax_pose sWalreinPose1[] = {
	AX_POSE(0, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose3[] = {
	AX_POSE(2, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose4[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose7[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose9[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose10[] = {
	AX_POSE(9, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose11[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose12[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose13[] = {
	AX_POSE(12, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose14[] = {
	AX_POSE(13, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose15[] = {
	AX_POSE(14, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose16[] = {
	AX_POSE(9, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose17[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose18[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose19[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose20[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose21[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose22[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose23[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose24[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose26[] = {
	AX_POSE(15, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose27[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose29[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose30[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose32[] = {
	AX_POSE(19, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(20, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(21, OAM1(247, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(22, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose33[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose35[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose36[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose38[] = {
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose39[] = {
	AX_POSE(27, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(28, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(29, OAM1(8, ST_OAM_SQUARE     , 2), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(30, OAM1(8, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE(31, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose41[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose42[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose44[] = {
	AX_POSE(19, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(20, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(21, OAM1(247, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(22, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose45[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose47[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose48[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose74[] = {
	AX_POSE(32, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose75[] = {
	AX_POSE(33, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose77[] = {
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose78[] = {
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose80[] = {
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose81[] = {
	AX_POSE(37, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(38, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(39, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(15, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(10, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose83[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose84[] = {
	AX_POSE(41, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose86[] = {
	AX_POSE(42, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(43, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(44, OAM1(7, ST_OAM_SQUARE     , 2), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(45, OAM1(7, ST_OAM_SQUARE     , 2), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(46, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose87[] = {
	AX_POSE(47, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose89[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose90[] = {
	AX_POSE(41, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose92[] = {
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose93[] = {
	AX_POSE(37, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(38, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(39, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose95[] = {
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose96[] = {
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose113[] = {
	AX_POSE(48, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose114[] = {
	AX_POSE(49, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose115[] = {
	AX_POSE(50, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose116[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose117[] = {
	AX_POSE(52, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose118[] = {
	AX_POSE(53, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose119[] = {
	AX_POSE(54, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose120[] = {
	AX_POSE(53, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose121[] = {
	AX_POSE(52, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose122[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose148[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose149[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose150[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose152[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose153[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose154[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose156[] = {
	AX_POSE(34, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose162[] = {
	AX_POSE(34, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose164[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose167[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose168[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose170[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose171[] = {
	AX_POSE(19, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(253, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(20, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(21, OAM1(247, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(22, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(13, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose174[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose177[] = {
	AX_POSE(26, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose180[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose182[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose183[] = {
	AX_POSE(19, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(20, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(21, OAM1(247, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(22, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose185[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose186[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose188[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWalreinPose194[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sWalreinAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_1_1.lz");
static const u8 sWalreinAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_1_2.lz");
static const u8 sWalreinAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_1_3.lz");
static const u8 sWalreinAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_1_4.lz");
static const u8 sWalreinAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_1_5.lz");
static const u8 sWalreinAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_1_6.lz");
static const u8 sWalreinAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_1_7.lz");
static const u8 sWalreinAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_1_8.lz");
static const u8 sWalreinAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_2_1.lz");
static const u8 sWalreinAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_2_2.lz");
static const u8 sWalreinAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_2_3.lz");
static const u8 sWalreinAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_2_4.lz");
static const u8 sWalreinAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_2_5.lz");
static const u8 sWalreinAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_2_6.lz");
static const u8 sWalreinAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_2_7.lz");
static const u8 sWalreinAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_2_8.lz");
static const u8 sWalreinAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_3_1.lz");
static const u8 sWalreinAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_3_2.lz");
static const u8 sWalreinAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_3_3.lz");
static const u8 sWalreinAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_3_4.lz");
static const u8 sWalreinAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_3_5.lz");
static const u8 sWalreinAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_3_6.lz");
static const u8 sWalreinAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_3_7.lz");
static const u8 sWalreinAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_3_8.lz");
static const u8 sWalreinAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_8_1.lz");
static const u8 sWalreinAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_8_2.lz");
static const u8 sWalreinAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_8_3.lz");
static const u8 sWalreinAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_8_4.lz");
static const u8 sWalreinAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_8_5.lz");
static const u8 sWalreinAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_8_6.lz");
static const u8 sWalreinAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_8_7.lz");
static const u8 sWalreinAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_8_8.lz");
static const u8 sWalreinAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_9_1.lz");
static const u8 sWalreinAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_9_2.lz");
static const u8 sWalreinAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_9_3.lz");
static const u8 sWalreinAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_9_4.lz");
static const u8 sWalreinAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_9_5.lz");
static const u8 sWalreinAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_9_6.lz");
static const u8 sWalreinAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_9_7.lz");
static const u8 sWalreinAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_9_8.lz");
static const u8 sWalreinAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_11_1.lz");
static const u8 sWalreinAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_11_2.lz");
static const u8 sWalreinAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_11_4.lz");
static const u8 sWalreinAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_11_5.lz");
static const u8 sWalreinAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_11_6.lz");
static const u8 sWalreinAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/walrein/sWalreinAnims_11_8.lz");

static const u8 sWalreinGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_1.4bpp.lz");
static const ax_sprite sWalreinSprites1[] = {
	{sWalreinGfx1, ARRAY_COUNT(sWalreinGfx1)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_2.4bpp.lz");
static const ax_sprite sWalreinSprites2[] = {
	{sWalreinGfx2, ARRAY_COUNT(sWalreinGfx2)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_3.4bpp.lz");
static const ax_sprite sWalreinSprites3[] = {
	{sWalreinGfx3, ARRAY_COUNT(sWalreinGfx3)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_4.4bpp.lz");
static const ax_sprite sWalreinSprites4[] = {
	{sWalreinGfx4, ARRAY_COUNT(sWalreinGfx4)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_5.4bpp.lz");
static const ax_sprite sWalreinSprites5[] = {
	{sWalreinGfx5, ARRAY_COUNT(sWalreinGfx5)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_6.4bpp.lz");
static const ax_sprite sWalreinSprites6[] = {
	{sWalreinGfx6, ARRAY_COUNT(sWalreinGfx6)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_7.4bpp.lz");
static const ax_sprite sWalreinSprites7[] = {
	{sWalreinGfx7, ARRAY_COUNT(sWalreinGfx7)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_8.4bpp.lz");
static const ax_sprite sWalreinSprites8[] = {
	{sWalreinGfx8, ARRAY_COUNT(sWalreinGfx8)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_9.4bpp.lz");
static const ax_sprite sWalreinSprites9[] = {
	{sWalreinGfx9, ARRAY_COUNT(sWalreinGfx9)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_10.4bpp.lz");
static const ax_sprite sWalreinSprites10[] = {
	{sWalreinGfx10, ARRAY_COUNT(sWalreinGfx10)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_11.4bpp.lz");
static const ax_sprite sWalreinSprites11[] = {
	{sWalreinGfx11, ARRAY_COUNT(sWalreinGfx11)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_12.4bpp.lz");
static const ax_sprite sWalreinSprites12[] = {
	{sWalreinGfx12, ARRAY_COUNT(sWalreinGfx12)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_13.4bpp.lz");
static const ax_sprite sWalreinSprites13[] = {
	{sWalreinGfx13, ARRAY_COUNT(sWalreinGfx13)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_14.4bpp.lz");
static const ax_sprite sWalreinSprites14[] = {
	{sWalreinGfx14, ARRAY_COUNT(sWalreinGfx14)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_15.4bpp.lz");
static const ax_sprite sWalreinSprites15[] = {
	{sWalreinGfx15, ARRAY_COUNT(sWalreinGfx15)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_16.4bpp.lz");
static const u8 sWalreinGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_16_1.4bpp.lz");
static const u8 sWalreinGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_16_2.4bpp.lz");
static const ax_sprite sWalreinSprites16[] = {
	{NULL, 32}, 
	{sWalreinGfx16, ARRAY_COUNT(sWalreinGfx16)}, 
	{NULL, 64}, 
	{sWalreinGfx16_1, ARRAY_COUNT(sWalreinGfx16_1)}, 
	{NULL, 32}, 
	{sWalreinGfx16_2, ARRAY_COUNT(sWalreinGfx16_2)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_17.4bpp.lz");
static const u8 sWalreinGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_17_1.4bpp.lz");
static const ax_sprite sWalreinSprites17[] = {
	{sWalreinGfx17, ARRAY_COUNT(sWalreinGfx17)}, 
	{NULL, 32}, 
	{sWalreinGfx17_1, ARRAY_COUNT(sWalreinGfx17_1)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_18.4bpp.lz");
static const ax_sprite sWalreinSprites18[] = {
	{NULL, 96}, 
	{sWalreinGfx18, ARRAY_COUNT(sWalreinGfx18)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_19.4bpp.lz");
static const u8 sWalreinGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_19_1.4bpp.lz");
static const ax_sprite sWalreinSprites19[] = {
	{sWalreinGfx19, ARRAY_COUNT(sWalreinGfx19)}, 
	{NULL, 32}, 
	{sWalreinGfx19_1, ARRAY_COUNT(sWalreinGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWalreinGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_20.4bpp.lz");
static const ax_sprite sWalreinSprites20[] = {
	{NULL, 64}, 
	{sWalreinGfx20, ARRAY_COUNT(sWalreinGfx20)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_21.4bpp.lz");
static const ax_sprite sWalreinSprites21[] = {
	{NULL, 32}, 
	{sWalreinGfx21, ARRAY_COUNT(sWalreinGfx21)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_22.4bpp.lz");
static const ax_sprite sWalreinSprites22[] = {
	{sWalreinGfx22, ARRAY_COUNT(sWalreinGfx22)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_23.4bpp.lz");
static const ax_sprite sWalreinSprites23[] = {
	{sWalreinGfx23, ARRAY_COUNT(sWalreinGfx23)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_24.4bpp.lz");
static const u8 sWalreinGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_24_1.4bpp.lz");
static const ax_sprite sWalreinSprites24[] = {
	{sWalreinGfx24, ARRAY_COUNT(sWalreinGfx24)}, 
	{NULL, 32}, 
	{sWalreinGfx24_1, ARRAY_COUNT(sWalreinGfx24_1)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_25.4bpp.lz");
static const u8 sWalreinGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_25_1.4bpp.lz");
static const u8 sWalreinGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_25_2.4bpp.lz");
static const ax_sprite sWalreinSprites25[] = {
	{sWalreinGfx25, ARRAY_COUNT(sWalreinGfx25)}, 
	{NULL, 32}, 
	{sWalreinGfx25_1, ARRAY_COUNT(sWalreinGfx25_1)}, 
	{NULL, 32}, 
	{sWalreinGfx25_2, ARRAY_COUNT(sWalreinGfx25_2)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_26.4bpp.lz");
static const u8 sWalreinGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_26_1.4bpp.lz");
static const ax_sprite sWalreinSprites26[] = {
	{NULL, 32}, 
	{sWalreinGfx26, ARRAY_COUNT(sWalreinGfx26)}, 
	{NULL, 32}, 
	{sWalreinGfx26_1, ARRAY_COUNT(sWalreinGfx26_1)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_27.4bpp.lz");
static const ax_sprite sWalreinSprites27[] = {
	{sWalreinGfx27, ARRAY_COUNT(sWalreinGfx27)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWalreinGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_28.4bpp.lz");
static const ax_sprite sWalreinSprites28[] = {
	{sWalreinGfx28, ARRAY_COUNT(sWalreinGfx28)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_29.4bpp.lz");
static const ax_sprite sWalreinSprites29[] = {
	{sWalreinGfx29, ARRAY_COUNT(sWalreinGfx29)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_30.4bpp.lz");
static const ax_sprite sWalreinSprites30[] = {
	{sWalreinGfx30, ARRAY_COUNT(sWalreinGfx30)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_31.4bpp.lz");
static const ax_sprite sWalreinSprites31[] = {
	{sWalreinGfx31, ARRAY_COUNT(sWalreinGfx31)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_32.4bpp.lz");
static const ax_sprite sWalreinSprites32[] = {
	{sWalreinGfx32, ARRAY_COUNT(sWalreinGfx32)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_33.4bpp.lz");
static const u8 sWalreinGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_33_1.4bpp.lz");
static const ax_sprite sWalreinSprites33[] = {
	{sWalreinGfx33, ARRAY_COUNT(sWalreinGfx33)}, 
	{NULL, 32}, 
	{sWalreinGfx33_1, ARRAY_COUNT(sWalreinGfx33_1)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_34.4bpp.lz");
static const u8 sWalreinGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_34_1.4bpp.lz");
static const u8 sWalreinGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_34_2.4bpp.lz");
static const ax_sprite sWalreinSprites34[] = {
	{NULL, 32}, 
	{sWalreinGfx34, ARRAY_COUNT(sWalreinGfx34)}, 
	{NULL, 32}, 
	{sWalreinGfx34_1, ARRAY_COUNT(sWalreinGfx34_1)}, 
	{NULL, 32}, 
	{sWalreinGfx34_2, ARRAY_COUNT(sWalreinGfx34_2)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_35.4bpp.lz");
static const u8 sWalreinGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_35_1.4bpp.lz");
static const ax_sprite sWalreinSprites35[] = {
	{sWalreinGfx35, ARRAY_COUNT(sWalreinGfx35)}, 
	{NULL, 32}, 
	{sWalreinGfx35_1, ARRAY_COUNT(sWalreinGfx35_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWalreinGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_36.4bpp.lz");
static const ax_sprite sWalreinSprites36[] = {
	{sWalreinGfx36, ARRAY_COUNT(sWalreinGfx36)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWalreinGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_37.4bpp.lz");
static const u8 sWalreinGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_37_1.4bpp.lz");
static const u8 sWalreinGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_37_2.4bpp.lz");
static const u8 sWalreinGfx37_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_37_3.4bpp.lz");
static const ax_sprite sWalreinSprites37[] = {
	{sWalreinGfx37, ARRAY_COUNT(sWalreinGfx37)}, 
	{NULL, 32}, 
	{sWalreinGfx37_1, ARRAY_COUNT(sWalreinGfx37_1)}, 
	{NULL, 32}, 
	{sWalreinGfx37_2, ARRAY_COUNT(sWalreinGfx37_2)}, 
	{NULL, 32}, 
	{sWalreinGfx37_3, ARRAY_COUNT(sWalreinGfx37_3)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_38.4bpp.lz");
static const ax_sprite sWalreinSprites38[] = {
	{sWalreinGfx38, ARRAY_COUNT(sWalreinGfx38)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_39.4bpp.lz");
static const ax_sprite sWalreinSprites39[] = {
	{sWalreinGfx39, ARRAY_COUNT(sWalreinGfx39)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_40.4bpp.lz");
static const ax_sprite sWalreinSprites40[] = {
	{sWalreinGfx40, ARRAY_COUNT(sWalreinGfx40)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_41.4bpp.lz");
static const u8 sWalreinGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_41_1.4bpp.lz");
static const u8 sWalreinGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_41_2.4bpp.lz");
static const ax_sprite sWalreinSprites41[] = {
	{sWalreinGfx41, ARRAY_COUNT(sWalreinGfx41)}, 
	{NULL, 32}, 
	{sWalreinGfx41_1, ARRAY_COUNT(sWalreinGfx41_1)}, 
	{NULL, 32}, 
	{sWalreinGfx41_2, ARRAY_COUNT(sWalreinGfx41_2)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_42.4bpp.lz");
static const u8 sWalreinGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_42_1.4bpp.lz");
static const u8 sWalreinGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_42_2.4bpp.lz");
static const ax_sprite sWalreinSprites42[] = {
	{sWalreinGfx42, ARRAY_COUNT(sWalreinGfx42)}, 
	{NULL, 32}, 
	{sWalreinGfx42_1, ARRAY_COUNT(sWalreinGfx42_1)}, 
	{NULL, 32}, 
	{sWalreinGfx42_2, ARRAY_COUNT(sWalreinGfx42_2)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_43.4bpp.lz");
static const ax_sprite sWalreinSprites43[] = {
	{sWalreinGfx43, ARRAY_COUNT(sWalreinGfx43)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_44.4bpp.lz");
static const ax_sprite sWalreinSprites44[] = {
	{sWalreinGfx44, ARRAY_COUNT(sWalreinGfx44)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_45.4bpp.lz");
static const ax_sprite sWalreinSprites45[] = {
	{sWalreinGfx45, ARRAY_COUNT(sWalreinGfx45)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_46.4bpp.lz");
static const ax_sprite sWalreinSprites46[] = {
	{sWalreinGfx46, ARRAY_COUNT(sWalreinGfx46)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_47.4bpp.lz");
static const ax_sprite sWalreinSprites47[] = {
	{sWalreinGfx47, ARRAY_COUNT(sWalreinGfx47)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_48.4bpp.lz");
static const u8 sWalreinGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_48_1.4bpp.lz");
static const ax_sprite sWalreinSprites48[] = {
	{sWalreinGfx48, ARRAY_COUNT(sWalreinGfx48)}, 
	{NULL, 32}, 
	{sWalreinGfx48_1, ARRAY_COUNT(sWalreinGfx48_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sWalreinGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_49.4bpp.lz");
static const ax_sprite sWalreinSprites49[] = {
	{sWalreinGfx49, ARRAY_COUNT(sWalreinGfx49)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_50.4bpp.lz");
static const ax_sprite sWalreinSprites50[] = {
	{sWalreinGfx50, ARRAY_COUNT(sWalreinGfx50)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_51.4bpp.lz");
static const ax_sprite sWalreinSprites51[] = {
	{sWalreinGfx51, ARRAY_COUNT(sWalreinGfx51)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_52.4bpp.lz");
static const ax_sprite sWalreinSprites52[] = {
	{sWalreinGfx52, ARRAY_COUNT(sWalreinGfx52)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_53.4bpp.lz");
static const ax_sprite sWalreinSprites53[] = {
	{sWalreinGfx53, ARRAY_COUNT(sWalreinGfx53)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_54.4bpp.lz");
static const ax_sprite sWalreinSprites54[] = {
	{sWalreinGfx54, ARRAY_COUNT(sWalreinGfx54)}, 
	{NULL, 0}
};
static const u8 sWalreinGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/walrein/sprite_55.4bpp.lz");
static const ax_sprite sWalreinSprites55[] = {
	{sWalreinGfx55, ARRAY_COUNT(sWalreinGfx55)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesWalrein[] = {
	sWalreinPose1,
	sWalreinPose2,
	sWalreinPose3,
	sWalreinPose4,
	sWalreinPose5,
	sWalreinPose6,
	sWalreinPose7,
	sWalreinPose8,
	sWalreinPose9,
	sWalreinPose10,
	sWalreinPose11,
	sWalreinPose12,
	sWalreinPose13,
	sWalreinPose14,
	sWalreinPose15,
	sWalreinPose16,
	sWalreinPose17,
	sWalreinPose18,
	sWalreinPose19,
	sWalreinPose20,
	sWalreinPose21,
	sWalreinPose22,
	sWalreinPose23,
	sWalreinPose24,
	sWalreinPose1,
	sWalreinPose26,
	sWalreinPose27,
	sWalreinPose4,
	sWalreinPose29,
	sWalreinPose30,
	sWalreinPose7,
	sWalreinPose32,
	sWalreinPose33,
	sWalreinPose10,
	sWalreinPose35,
	sWalreinPose36,
	sWalreinPose13,
	sWalreinPose38,
	sWalreinPose39,
	sWalreinPose16,
	sWalreinPose41,
	sWalreinPose42,
	sWalreinPose19,
	sWalreinPose44,
	sWalreinPose45,
	sWalreinPose22,
	sWalreinPose47,
	sWalreinPose48,
	sWalreinPose1,
	sWalreinPose26,
	sWalreinPose27,
	sWalreinPose4,
	sWalreinPose29,
	sWalreinPose30,
	sWalreinPose7,
	sWalreinPose32,
	sWalreinPose33,
	sWalreinPose10,
	sWalreinPose35,
	sWalreinPose36,
	sWalreinPose13,
	sWalreinPose38,
	sWalreinPose39,
	sWalreinPose16,
	sWalreinPose41,
	sWalreinPose42,
	sWalreinPose19,
	sWalreinPose44,
	sWalreinPose45,
	sWalreinPose22,
	sWalreinPose47,
	sWalreinPose48,
	sWalreinPose1,
	sWalreinPose74,
	sWalreinPose75,
	sWalreinPose4,
	sWalreinPose77,
	sWalreinPose78,
	sWalreinPose7,
	sWalreinPose80,
	sWalreinPose81,
	sWalreinPose10,
	sWalreinPose83,
	sWalreinPose84,
	sWalreinPose13,
	sWalreinPose86,
	sWalreinPose87,
	sWalreinPose16,
	sWalreinPose89,
	sWalreinPose90,
	sWalreinPose19,
	sWalreinPose92,
	sWalreinPose93,
	sWalreinPose22,
	sWalreinPose95,
	sWalreinPose96,
	sWalreinPose1,
	sWalreinPose27,
	sWalreinPose4,
	sWalreinPose30,
	sWalreinPose7,
	sWalreinPose33,
	sWalreinPose10,
	sWalreinPose36,
	sWalreinPose13,
	sWalreinPose39,
	sWalreinPose16,
	sWalreinPose42,
	sWalreinPose19,
	sWalreinPose45,
	sWalreinPose22,
	sWalreinPose48,
	sWalreinPose113,
	sWalreinPose114,
	sWalreinPose115,
	sWalreinPose116,
	sWalreinPose117,
	sWalreinPose118,
	sWalreinPose119,
	sWalreinPose120,
	sWalreinPose121,
	sWalreinPose122,
	sWalreinPose1,
	sWalreinPose74,
	sWalreinPose27,
	sWalreinPose4,
	sWalreinPose77,
	sWalreinPose30,
	sWalreinPose7,
	sWalreinPose80,
	sWalreinPose33,
	sWalreinPose10,
	sWalreinPose83,
	sWalreinPose36,
	sWalreinPose13,
	sWalreinPose86,
	sWalreinPose39,
	sWalreinPose16,
	sWalreinPose89,
	sWalreinPose42,
	sWalreinPose19,
	sWalreinPose92,
	sWalreinPose45,
	sWalreinPose22,
	sWalreinPose95,
	sWalreinPose48,
	sWalreinPose27,
	sWalreinPose148,
	sWalreinPose149,
	sWalreinPose150,
	sWalreinPose39,
	sWalreinPose152,
	sWalreinPose153,
	sWalreinPose154,
	sWalreinPose74,
	sWalreinPose156,
	sWalreinPose80,
	sWalreinPose83,
	sWalreinPose86,
	sWalreinPose89,
	sWalreinPose92,
	sWalreinPose162,
	sWalreinPose1,
	sWalreinPose164,
	sWalreinPose26,
	sWalreinPose4,
	sWalreinPose167,
	sWalreinPose168,
	sWalreinPose7,
	sWalreinPose170,
	sWalreinPose171,
	sWalreinPose10,
	sWalreinPose36,
	sWalreinPose174,
	sWalreinPose13,
	sWalreinPose39,
	sWalreinPose177,
	sWalreinPose16,
	sWalreinPose42,
	sWalreinPose180,
	sWalreinPose19,
	sWalreinPose182,
	sWalreinPose183,
	sWalreinPose22,
	sWalreinPose185,
	sWalreinPose186,
	sWalreinPose26,
	sWalreinPose188,
	sWalreinPose183,
	sWalreinPose41,
	sWalreinPose38,
	sWalreinPose35,
	sWalreinPose32,
	sWalreinPose194,
	sWalreinPose1,
	sWalreinPose22,
	sWalreinPose19,
	sWalreinPose16,
	sWalreinPose13,
	sWalreinPose10,
	sWalreinPose7,
	sWalreinPose4,
};

static const struct PositionSets sAxPositionsWalrein[] = {
	[0] = { .set = { {-1, -3}, {-11, 1}, {9, 1}, {-1, -5} } },
	[1] = { .set = { {-1, -8}, {-9, -3}, {8, -3}, {-1, -6} } },
	[2] = { .set = { {-1, -2}, {-10, 4}, {8, 4}, {-1, -3} } },
	[3] = { .set = { {8, -5}, {9, -1}, {-4, 3}, {-1, -5} } },
	[4] = { .set = { {10, -11}, {3, -6}, {-7, -1}, {0, -6} } },
	[5] = { .set = { {7, -4}, {10, -1}, {-2, 3}, {-1, -5} } },
	[6] = { .set = { {12, -10}, {3, -5}, {4, 1}, {-1, -6} } },
	[7] = { .set = { {12, -15}, {0, -5}, {-1, 1}, {-1, -5} } },
	[8] = { .set = { {8, -9}, {7, -2}, {6, 1}, {-2, -4} } },
	[9] = { .set = { {7, -15}, {-2, -7}, {8, 0}, {-2, -6} } },
	[10] = { .set = { {11, -16}, {-2, -7}, {5, 2}, {0, -6} } },
	[11] = { .set = { {5, -13}, {0, -8}, {9, -3}, {-3, -5} } },
	[12] = { .set = { {-1, -16}, {9, -4}, {-11, -4}, {-1, -6} } },
	[13] = { .set = { {-1, -17}, {9, -1}, {-11, -1}, {-1, -5} } },
	[14] = { .set = { {-1, -11}, {9, -7}, {-11, -7}, {-1, -3} } },
	[15] = { .set = { {-9, -15}, {0, -7}, {-10, 0}, {0, -6} } },
	[16] = { .set = { {-13, -16}, {0, -7}, {-7, 2}, {-2, -6} } },
	[17] = { .set = { {-7, -13}, {-2, -8}, {-11, -3}, {1, -5} } },
	[18] = { .set = { {-14, -10}, {-5, -5}, {-6, 1}, {-1, -6} } },
	[19] = { .set = { {-14, -15}, {-2, -5}, {-1, 1}, {-1, -5} } },
	[20] = { .set = { {-10, -9}, {-9, -2}, {-8, 1}, {0, -4} } },
	[21] = { .set = { {-10, -5}, {-11, -1}, {2, 3}, {-1, -5} } },
	[22] = { .set = { {-12, -11}, {-5, -6}, {5, -1}, {-2, -6} } },
	[23] = { .set = { {-9, -4}, {-12, -1}, {0, 3}, {-1, -5} } },
	[24] = { .set = { {-1, -3}, {-11, 1}, {9, 1}, {-1, -5} } },
	[25] = { .set = { {-1, 2}, {-11, 2}, {9, 2}, {-1, -6} } },
	[26] = { .set = { {-1, -19}, {-10, 1}, {8, 1}, {-1, -5} } },
	[27] = { .set = { {8, -5}, {9, -1}, {-4, 3}, {-1, -5} } },
	[28] = { .set = { {12, -1}, {6, -5}, {-4, 4}, {-2, -6} } },
	[29] = { .set = { {2, -19}, {8, -2}, {-4, 3}, {-1, -7} } },
	[30] = { .set = { {12, -10}, {3, -5}, {4, 1}, {-1, -6} } },
	[31] = { .set = { {16, -7}, {3, -5}, {4, 2}, {-2, -5} } },
	[32] = { .set = { {2, -19}, {2, -5}, {3, 1}, {-3, -5} } },
	[33] = { .set = { {7, -15}, {-2, -7}, {8, 0}, {-2, -6} } },
	[34] = { .set = { {10, -15}, {-1, -7}, {7, 0}, {-2, -6} } },
	[35] = { .set = { {0, -20}, {-3, -6}, {7, -1}, {-5, -5} } },
	[36] = { .set = { {-1, -16}, {9, -4}, {-11, -4}, {-1, -6} } },
	[37] = { .set = { {-1, -21}, {9, -5}, {-11, -5}, {-1, -8} } },
	[38] = { .set = { {-1, -21}, {8, -4}, {-10, -4}, {-1, -5} } },
	[39] = { .set = { {-9, -15}, {0, -7}, {-10, 0}, {0, -6} } },
	[40] = { .set = { {-12, -15}, {-1, -7}, {-9, 0}, {0, -6} } },
	[41] = { .set = { {-2, -20}, {1, -6}, {-9, -1}, {3, -5} } },
	[42] = { .set = { {-14, -10}, {-5, -5}, {-6, 1}, {-1, -6} } },
	[43] = { .set = { {-18, -7}, {-5, -5}, {-6, 2}, {0, -5} } },
	[44] = { .set = { {-4, -19}, {-4, -5}, {-5, 1}, {1, -5} } },
	[45] = { .set = { {-10, -5}, {-11, -1}, {2, 3}, {-1, -5} } },
	[46] = { .set = { {-14, -1}, {-8, -5}, {2, 4}, {0, -6} } },
	[47] = { .set = { {-4, -19}, {-10, -2}, {2, 3}, {-1, -7} } },
	[48] = { .set = { {-1, -3}, {-11, 1}, {9, 1}, {-1, -5} } },
	[49] = { .set = { {-1, 2}, {-11, 2}, {9, 2}, {-1, -6} } },
	[50] = { .set = { {-1, -19}, {-10, 1}, {8, 1}, {-1, -5} } },
	[51] = { .set = { {8, -5}, {9, -1}, {-4, 3}, {-1, -5} } },
	[52] = { .set = { {12, -1}, {6, -5}, {-4, 4}, {-2, -6} } },
	[53] = { .set = { {2, -19}, {8, -2}, {-4, 3}, {-1, -7} } },
	[54] = { .set = { {12, -10}, {3, -5}, {4, 1}, {-1, -6} } },
	[55] = { .set = { {16, -7}, {3, -5}, {4, 2}, {-2, -5} } },
	[56] = { .set = { {2, -19}, {2, -5}, {3, 1}, {-3, -5} } },
	[57] = { .set = { {7, -15}, {-2, -7}, {8, 0}, {-2, -6} } },
	[58] = { .set = { {10, -15}, {-1, -7}, {7, 0}, {-2, -6} } },
	[59] = { .set = { {0, -20}, {-3, -6}, {7, -1}, {-5, -5} } },
	[60] = { .set = { {-1, -16}, {9, -4}, {-11, -4}, {-1, -6} } },
	[61] = { .set = { {-1, -21}, {9, -5}, {-11, -5}, {-1, -8} } },
	[62] = { .set = { {-1, -21}, {8, -4}, {-10, -4}, {-1, -5} } },
	[63] = { .set = { {-9, -15}, {0, -7}, {-10, 0}, {0, -6} } },
	[64] = { .set = { {-12, -15}, {-1, -7}, {-9, 0}, {0, -6} } },
	[65] = { .set = { {-2, -20}, {1, -6}, {-9, -1}, {3, -5} } },
	[66] = { .set = { {-14, -10}, {-5, -5}, {-6, 1}, {-1, -6} } },
	[67] = { .set = { {-18, -7}, {-5, -5}, {-6, 2}, {0, -5} } },
	[68] = { .set = { {-4, -19}, {-4, -5}, {-5, 1}, {1, -5} } },
	[69] = { .set = { {-10, -5}, {-11, -1}, {2, 3}, {-1, -5} } },
	[70] = { .set = { {-14, -1}, {-8, -5}, {2, 4}, {0, -6} } },
	[71] = { .set = { {-4, -19}, {-10, -2}, {2, 3}, {-1, -7} } },
	[72] = { .set = { {-1, -3}, {-11, 1}, {9, 1}, {-1, -5} } },
	[73] = { .set = { {-1, -16}, {-10, 1}, {9, 1}, {-1, -4} } },
	[74] = { .set = { {-1, 0}, {-11, 1}, {9, 1}, {-1, -6} } },
	[75] = { .set = { {8, -5}, {9, -1}, {-4, 3}, {-1, -5} } },
	[76] = { .set = { {4, -17}, {9, -2}, {-5, 3}, {-1, -7} } },
	[77] = { .set = { {10, -2}, {7, -4}, {-5, 3}, {-1, -5} } },
	[78] = { .set = { {12, -10}, {3, -5}, {4, 1}, {-1, -6} } },
	[79] = { .set = { {5, -20}, {2, -4}, {4, 2}, {-3, -5} } },
	[80] = { .set = { {16, -9}, {4, -4}, {4, 2}, {0, -5} } },
	[81] = { .set = { {7, -15}, {-2, -7}, {8, 0}, {-2, -6} } },
	[82] = { .set = { {2, -22}, {-2, -6}, {7, 0}, {-4, -5} } },
	[83] = { .set = { {10, -17}, {0, -7}, {7, 0}, {-1, -6} } },
	[84] = { .set = { {-1, -16}, {9, -4}, {-11, -4}, {-1, -6} } },
	[85] = { .set = { {-1, -22}, {9, -4}, {-11, -4}, {-1, -6} } },
	[86] = { .set = { {-1, -19}, {9, -4}, {-11, -4}, {-1, -8} } },
	[87] = { .set = { {-9, -15}, {0, -7}, {-10, 0}, {0, -6} } },
	[88] = { .set = { {-4, -22}, {0, -6}, {-9, 0}, {2, -5} } },
	[89] = { .set = { {-12, -17}, {-2, -7}, {-9, 0}, {-1, -6} } },
	[90] = { .set = { {-14, -10}, {-5, -5}, {-6, 1}, {-1, -6} } },
	[91] = { .set = { {-7, -20}, {-4, -4}, {-6, 2}, {1, -5} } },
	[92] = { .set = { {-18, -9}, {-6, -4}, {-6, 2}, {-2, -5} } },
	[93] = { .set = { {-10, -5}, {-11, -1}, {2, 3}, {-1, -5} } },
	[94] = { .set = { {-6, -17}, {-11, -2}, {3, 3}, {-1, -7} } },
	[95] = { .set = { {-12, -2}, {-9, -4}, {3, 3}, {-1, -5} } },
	[96] = { .set = { {-1, -3}, {-11, 1}, {9, 1}, {-1, -5} } },
	[97] = { .set = { {-1, -19}, {-10, 1}, {8, 1}, {-1, -5} } },
	[98] = { .set = { {8, -5}, {9, -1}, {-4, 3}, {-1, -5} } },
	[99] = { .set = { {2, -19}, {8, -2}, {-4, 3}, {-1, -7} } },
	[100] = { .set = { {12, -10}, {3, -5}, {4, 1}, {-1, -6} } },
	[101] = { .set = { {2, -19}, {2, -5}, {3, 1}, {-3, -5} } },
	[102] = { .set = { {7, -15}, {-2, -7}, {8, 0}, {-2, -6} } },
	[103] = { .set = { {0, -20}, {-3, -6}, {7, -1}, {-5, -5} } },
	[104] = { .set = { {-1, -16}, {9, -4}, {-11, -4}, {-1, -6} } },
	[105] = { .set = { {-1, -21}, {8, -4}, {-10, -4}, {-1, -5} } },
	[106] = { .set = { {-9, -15}, {0, -7}, {-10, 0}, {0, -6} } },
	[107] = { .set = { {-2, -20}, {1, -6}, {-9, -1}, {3, -5} } },
	[108] = { .set = { {-14, -10}, {-5, -5}, {-6, 1}, {-1, -6} } },
	[109] = { .set = { {-4, -19}, {-4, -5}, {-5, 1}, {1, -5} } },
	[110] = { .set = { {-10, -5}, {-11, -1}, {2, 3}, {-1, -5} } },
	[111] = { .set = { {-4, -19}, {-10, -2}, {2, 3}, {-1, -7} } },
	[112] = { .set = { {-12, -2}, {-5, -5}, {5, -1}, {0, -7} } },
	[113] = { .set = { {-12, -2}, {-4, -5}, {5, 0}, {0, -7} } },
	[114] = { .set = { {0, -12}, {-9, -5}, {10, -5}, {0, -6} } },
	[115] = { .set = { {4, -14}, {11, -6}, {-4, -1}, {0, -6} } },
	[116] = { .set = { {7, -15}, {1, -4}, {2, -1}, {-1, -7} } },
	[117] = { .set = { {4, -19}, {-1, -11}, {10, -5}, {-2, -8} } },
	[118] = { .set = { {0, -19}, {10, -8}, {-10, -8}, {0, -5} } },
	[119] = { .set = { {-5, -19}, {0, -11}, {-11, -5}, {1, -8} } },
	[120] = { .set = { {-8, -15}, {-2, -4}, {-3, -1}, {0, -7} } },
	[121] = { .set = { {-5, -14}, {-12, -6}, {3, -1}, {-1, -6} } },
	[122] = { .set = { {-1, -3}, {-11, 1}, {9, 1}, {-1, -5} } },
	[123] = { .set = { {-1, -16}, {-10, 1}, {9, 1}, {-1, -4} } },
	[124] = { .set = { {-1, -19}, {-10, 1}, {8, 1}, {-1, -5} } },
	[125] = { .set = { {8, -5}, {9, -1}, {-4, 3}, {-1, -5} } },
	[126] = { .set = { {4, -17}, {9, -2}, {-5, 3}, {-1, -7} } },
	[127] = { .set = { {2, -19}, {8, -2}, {-4, 3}, {-1, -7} } },
	[128] = { .set = { {12, -10}, {3, -5}, {4, 1}, {-1, -6} } },
	[129] = { .set = { {5, -20}, {2, -4}, {4, 2}, {-3, -5} } },
	[130] = { .set = { {2, -19}, {2, -5}, {3, 1}, {-3, -5} } },
	[131] = { .set = { {7, -15}, {-2, -7}, {8, 0}, {-2, -6} } },
	[132] = { .set = { {2, -22}, {-2, -6}, {7, 0}, {-4, -5} } },
	[133] = { .set = { {0, -20}, {-3, -6}, {7, -1}, {-5, -5} } },
	[134] = { .set = { {-1, -16}, {9, -4}, {-11, -4}, {-1, -6} } },
	[135] = { .set = { {-1, -22}, {9, -4}, {-11, -4}, {-1, -6} } },
	[136] = { .set = { {-1, -21}, {8, -4}, {-10, -4}, {-1, -5} } },
	[137] = { .set = { {-9, -15}, {0, -7}, {-10, 0}, {0, -6} } },
	[138] = { .set = { {-4, -22}, {0, -6}, {-9, 0}, {2, -5} } },
	[139] = { .set = { {-2, -20}, {1, -6}, {-9, -1}, {3, -5} } },
	[140] = { .set = { {-14, -10}, {-5, -5}, {-6, 1}, {-1, -6} } },
	[141] = { .set = { {-7, -20}, {-4, -4}, {-6, 2}, {1, -5} } },
	[142] = { .set = { {-4, -19}, {-4, -5}, {-5, 1}, {1, -5} } },
	[143] = { .set = { {-10, -5}, {-11, -1}, {2, 3}, {-1, -5} } },
	[144] = { .set = { {-6, -17}, {-11, -2}, {3, 3}, {-1, -7} } },
	[145] = { .set = { {-4, -19}, {-10, -2}, {2, 3}, {-1, -7} } },
	[146] = { .set = { {-1, -19}, {-10, 1}, {8, 1}, {-1, -5} } },
	[147] = { .set = { {-4, -17}, {-10, 0}, {2, 5}, {-1, -5} } },
	[148] = { .set = { {-5, -18}, {-5, -4}, {-6, 2}, {0, -4} } },
	[149] = { .set = { {-3, -20}, {0, -6}, {-10, -1}, {2, -5} } },
	[150] = { .set = { {-1, -21}, {8, -4}, {-10, -4}, {-1, -5} } },
	[151] = { .set = { {1, -20}, {-2, -6}, {8, -1}, {-4, -5} } },
	[152] = { .set = { {3, -18}, {3, -4}, {4, 2}, {-2, -4} } },
	[153] = { .set = { {2, -17}, {8, 0}, {-4, 5}, {-1, -5} } },
	[154] = { .set = { {-1, -16}, {-10, 1}, {9, 1}, {-1, -4} } },
	[155] = { .set = { {4, -16}, {9, -1}, {-5, 4}, {-1, -6} } },
	[156] = { .set = { {5, -20}, {2, -4}, {4, 2}, {-3, -5} } },
	[157] = { .set = { {2, -22}, {-2, -6}, {7, 0}, {-4, -5} } },
	[158] = { .set = { {-1, -22}, {9, -4}, {-11, -4}, {-1, -6} } },
	[159] = { .set = { {-4, -22}, {0, -6}, {-9, 0}, {2, -5} } },
	[160] = { .set = { {-7, -20}, {-4, -4}, {-6, 2}, {1, -5} } },
	[161] = { .set = { {-6, -16}, {-11, -1}, {3, 4}, {-1, -6} } },
	[162] = { .set = { {-1, -3}, {-11, 1}, {9, 1}, {-1, -5} } },
	[163] = { .set = { {-1, -18}, {-10, 2}, {8, 2}, {-1, -4} } },
	[164] = { .set = { {-1, 2}, {-11, 2}, {9, 2}, {-1, -6} } },
	[165] = { .set = { {8, -5}, {9, -1}, {-4, 3}, {-1, -5} } },
	[166] = { .set = { {3, -19}, {9, -2}, {-3, 3}, {0, -7} } },
	[167] = { .set = { {11, -1}, {5, -5}, {-5, 4}, {-3, -6} } },
	[168] = { .set = { {12, -10}, {3, -5}, {4, 1}, {-1, -6} } },
	[169] = { .set = { {4, -19}, {4, -5}, {5, 1}, {-1, -5} } },
	[170] = { .set = { {15, -7}, {2, -5}, {3, 2}, {-3, -5} } },
	[171] = { .set = { {7, -15}, {-2, -7}, {8, 0}, {-2, -6} } },
	[172] = { .set = { {0, -20}, {-3, -6}, {7, -1}, {-5, -5} } },
	[173] = { .set = { {9, -15}, {-2, -7}, {6, 0}, {-3, -6} } },
	[174] = { .set = { {-1, -16}, {9, -4}, {-11, -4}, {-1, -6} } },
	[175] = { .set = { {-1, -21}, {8, -4}, {-10, -4}, {-1, -5} } },
	[176] = { .set = { {-1, -19}, {9, -3}, {-11, -3}, {-1, -6} } },
	[177] = { .set = { {-9, -15}, {0, -7}, {-10, 0}, {0, -6} } },
	[178] = { .set = { {-2, -20}, {1, -6}, {-9, -1}, {3, -5} } },
	[179] = { .set = { {-11, -15}, {0, -7}, {-8, 0}, {1, -6} } },
	[180] = { .set = { {-14, -10}, {-5, -5}, {-6, 1}, {-1, -6} } },
	[181] = { .set = { {-6, -19}, {-6, -5}, {-7, 1}, {-1, -5} } },
	[182] = { .set = { {-17, -7}, {-4, -5}, {-5, 2}, {1, -5} } },
	[183] = { .set = { {-10, -5}, {-11, -1}, {2, 3}, {-1, -5} } },
	[184] = { .set = { {-5, -19}, {-11, -2}, {1, 3}, {-2, -7} } },
	[185] = { .set = { {-13, -1}, {-7, -5}, {3, 4}, {1, -6} } },
	[186] = { .set = { {-1, 2}, {-11, 2}, {9, 2}, {-1, -6} } },
	[187] = { .set = { {-12, -1}, {-6, -5}, {4, 4}, {2, -6} } },
	[188] = { .set = { {-17, -7}, {-4, -5}, {-5, 2}, {1, -5} } },
	[189] = { .set = { {-12, -15}, {-1, -7}, {-9, 0}, {0, -6} } },
	[190] = { .set = { {-1, -21}, {9, -5}, {-11, -5}, {-1, -8} } },
	[191] = { .set = { {10, -15}, {-1, -7}, {7, 0}, {-2, -6} } },
	[192] = { .set = { {16, -7}, {3, -5}, {4, 2}, {-2, -5} } },
	[193] = { .set = { {10, -1}, {4, -5}, {-6, 4}, {-4, -6} } },
	[194] = { .set = { {-1, -3}, {-11, 1}, {9, 1}, {-1, -5} } },
	[195] = { .set = { {-10, -5}, {-11, -1}, {2, 3}, {-1, -5} } },
	[196] = { .set = { {-14, -10}, {-5, -5}, {-6, 1}, {-1, -6} } },
	[197] = { .set = { {-9, -15}, {0, -7}, {-10, 0}, {0, -6} } },
	[198] = { .set = { {-1, -16}, {9, -4}, {-11, -4}, {-1, -6} } },
	[199] = { .set = { {7, -15}, {-2, -7}, {8, 0}, {-2, -6} } },
	[200] = { .set = { {12, -10}, {3, -5}, {4, 1}, {-1, -6} } },
	[201] = { .set = { {8, -5}, {9, -1}, {-4, 3}, {-1, -5} } },
};

static const ax_anim *const sWalreinAnimTable1[] = {
	AX_ANIM_PTR(sWalreinAnims_1_1),
	AX_ANIM_PTR(sWalreinAnims_1_2),
	AX_ANIM_PTR(sWalreinAnims_1_3),
	AX_ANIM_PTR(sWalreinAnims_1_4),
	AX_ANIM_PTR(sWalreinAnims_1_5),
	AX_ANIM_PTR(sWalreinAnims_1_6),
	AX_ANIM_PTR(sWalreinAnims_1_7),
	AX_ANIM_PTR(sWalreinAnims_1_8),
};

static const ax_anim *const sWalreinAnimTable2[] = {
	AX_ANIM_PTR(sWalreinAnims_2_1),
	AX_ANIM_PTR(sWalreinAnims_2_2),
	AX_ANIM_PTR(sWalreinAnims_2_3),
	AX_ANIM_PTR(sWalreinAnims_2_4),
	AX_ANIM_PTR(sWalreinAnims_2_5),
	AX_ANIM_PTR(sWalreinAnims_2_6),
	AX_ANIM_PTR(sWalreinAnims_2_7),
	AX_ANIM_PTR(sWalreinAnims_2_8),
};

static const ax_anim *const sWalreinAnimTable3[] = {
	AX_ANIM_PTR(sWalreinAnims_3_1),
	AX_ANIM_PTR(sWalreinAnims_3_2),
	AX_ANIM_PTR(sWalreinAnims_3_3),
	AX_ANIM_PTR(sWalreinAnims_3_4),
	AX_ANIM_PTR(sWalreinAnims_3_5),
	AX_ANIM_PTR(sWalreinAnims_3_6),
	AX_ANIM_PTR(sWalreinAnims_3_7),
	AX_ANIM_PTR(sWalreinAnims_3_8),
};

static const ax_anim *const sWalreinAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02096),
	AX_ANIM_PTR(gAxSharedAnim_02114),
	AX_ANIM_PTR(gAxSharedAnim_02136),
	AX_ANIM_PTR(gAxSharedAnim_02159),
	AX_ANIM_PTR(gAxSharedAnim_02194),
	AX_ANIM_PTR(gAxSharedAnim_02222),
	AX_ANIM_PTR(gAxSharedAnim_02250),
	AX_ANIM_PTR(gAxSharedAnim_02280),
};

static const ax_anim *const sWalreinAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_02357),
	AX_ANIM_PTR(gAxSharedAnim_02359),
	AX_ANIM_PTR(gAxSharedAnim_02328),
	AX_ANIM_PTR(gAxSharedAnim_02330),
	AX_ANIM_PTR(gAxSharedAnim_02332),
	AX_ANIM_PTR(gAxSharedAnim_02333),
	AX_ANIM_PTR(gAxSharedAnim_02335),
	AX_ANIM_PTR(gAxSharedAnim_02337),
};

static const ax_anim *const sWalreinAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
};

static const ax_anim *const sWalreinAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00267),
	AX_ANIM_PTR(gAxSharedAnim_00274),
	AX_ANIM_PTR(gAxSharedAnim_00281),
	AX_ANIM_PTR(gAxSharedAnim_00291),
	AX_ANIM_PTR(gAxSharedAnim_00303),
	AX_ANIM_PTR(gAxSharedAnim_00316),
	AX_ANIM_PTR(gAxSharedAnim_00325),
	AX_ANIM_PTR(gAxSharedAnim_00329),
};

static const ax_anim *const sWalreinAnimTable8[] = {
	AX_ANIM_PTR(sWalreinAnims_8_1),
	AX_ANIM_PTR(sWalreinAnims_8_2),
	AX_ANIM_PTR(sWalreinAnims_8_3),
	AX_ANIM_PTR(sWalreinAnims_8_4),
	AX_ANIM_PTR(sWalreinAnims_8_5),
	AX_ANIM_PTR(sWalreinAnims_8_6),
	AX_ANIM_PTR(sWalreinAnims_8_7),
	AX_ANIM_PTR(sWalreinAnims_8_8),
};

static const ax_anim *const sWalreinAnimTable9[] = {
	AX_ANIM_PTR(sWalreinAnims_9_1),
	AX_ANIM_PTR(sWalreinAnims_9_2),
	AX_ANIM_PTR(sWalreinAnims_9_3),
	AX_ANIM_PTR(sWalreinAnims_9_4),
	AX_ANIM_PTR(sWalreinAnims_9_5),
	AX_ANIM_PTR(sWalreinAnims_9_6),
	AX_ANIM_PTR(sWalreinAnims_9_7),
	AX_ANIM_PTR(sWalreinAnims_9_8),
};

static const ax_anim *const sWalreinAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00612),
	AX_ANIM_PTR(gAxSharedAnim_00622),
	AX_ANIM_PTR(gAxSharedAnim_00632),
	AX_ANIM_PTR(gAxSharedAnim_00642),
	AX_ANIM_PTR(gAxSharedAnim_00651),
	AX_ANIM_PTR(gAxSharedAnim_00660),
	AX_ANIM_PTR(gAxSharedAnim_00675),
	AX_ANIM_PTR(gAxSharedAnim_00686),
};

static const ax_anim *const sWalreinAnimTable11[] = {
	AX_ANIM_PTR(sWalreinAnims_11_1),
	AX_ANIM_PTR(sWalreinAnims_11_2),
	AX_ANIM_PTR(gAxSharedAnim_00767),
	AX_ANIM_PTR(sWalreinAnims_11_4),
	AX_ANIM_PTR(sWalreinAnims_11_5),
	AX_ANIM_PTR(sWalreinAnims_11_6),
	AX_ANIM_PTR(gAxSharedAnim_00928),
	AX_ANIM_PTR(sWalreinAnims_11_8),
};

static const ax_anim *const sWalreinAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01018),
	AX_ANIM_PTR(gAxSharedAnim_01127),
	AX_ANIM_PTR(gAxSharedAnim_01099),
	AX_ANIM_PTR(gAxSharedAnim_01085),
	AX_ANIM_PTR(gAxSharedAnim_01084),
	AX_ANIM_PTR(gAxSharedAnim_01065),
	AX_ANIM_PTR(gAxSharedAnim_01034),
	AX_ANIM_PTR(gAxSharedAnim_01019),
};

static const ax_anim *const sWalreinAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01145),
	AX_ANIM_PTR(gAxSharedAnim_01227),
	AX_ANIM_PTR(gAxSharedAnim_01218),
	AX_ANIM_PTR(gAxSharedAnim_01201),
	AX_ANIM_PTR(gAxSharedAnim_01190),
	AX_ANIM_PTR(gAxSharedAnim_01179),
	AX_ANIM_PTR(gAxSharedAnim_01168),
	AX_ANIM_PTR(gAxSharedAnim_01157),
};

static const ax_anim *const *const sAxAnimationsWalrein[] = {
	sWalreinAnimTable1,
	sWalreinAnimTable2,
	sWalreinAnimTable3,
	sWalreinAnimTable4,
	sWalreinAnimTable5,
	sWalreinAnimTable6,
	sWalreinAnimTable7,
	sWalreinAnimTable8,
	sWalreinAnimTable9,
	sWalreinAnimTable10,
	sWalreinAnimTable11,
	sWalreinAnimTable12,
	sWalreinAnimTable13,
};

static const ax_sprite *const sAxSpritesWalrein[] = {
	sWalreinSprites1,
	sWalreinSprites2,
	sWalreinSprites3,
	sWalreinSprites4,
	sWalreinSprites5,
	sWalreinSprites6,
	sWalreinSprites7,
	sWalreinSprites8,
	sWalreinSprites9,
	sWalreinSprites10,
	sWalreinSprites11,
	sWalreinSprites12,
	sWalreinSprites13,
	sWalreinSprites14,
	sWalreinSprites15,
	sWalreinSprites16,
	sWalreinSprites17,
	sWalreinSprites18,
	sWalreinSprites19,
	sWalreinSprites20,
	sWalreinSprites21,
	sWalreinSprites22,
	sWalreinSprites23,
	sWalreinSprites24,
	sWalreinSprites25,
	sWalreinSprites26,
	sWalreinSprites27,
	sWalreinSprites28,
	sWalreinSprites29,
	sWalreinSprites30,
	sWalreinSprites31,
	sWalreinSprites32,
	sWalreinSprites33,
	sWalreinSprites34,
	sWalreinSprites35,
	sWalreinSprites36,
	sWalreinSprites37,
	sWalreinSprites38,
	sWalreinSprites39,
	sWalreinSprites40,
	sWalreinSprites41,
	sWalreinSprites42,
	sWalreinSprites43,
	sWalreinSprites44,
	sWalreinSprites45,
	sWalreinSprites46,
	sWalreinSprites47,
	sWalreinSprites48,
	sWalreinSprites49,
	sWalreinSprites50,
	sWalreinSprites51,
	sWalreinSprites52,
	sWalreinSprites53,
	sWalreinSprites54,
	sWalreinSprites55,
};

static const axmain sAxMainWalrein = {
	.poses = sAxPosesWalrein,
	.animations = sAxAnimationsWalrein,
	.animCount = ARRAY_COUNT(sAxAnimationsWalrein),
	.spriteData = sAxSpritesWalrein,
	.positions = sAxPositionsWalrein,
};
