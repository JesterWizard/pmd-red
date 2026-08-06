/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainScyther;
const SiroArchive gAxScyther = {"SIRO", &sAxMainScyther};

static const ax_pose sScytherPose1[] = {
	AX_POSE(0, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose3[] = {
	AX_POSE(2, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose6[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose9[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose12[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose13[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose14[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose15[] = {
	AX_POSE(14, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose18[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose21[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose22[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose24[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose28[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose32[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose36[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose40[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose44[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose48[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose52[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose56[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose58[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose59[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(-1, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose62[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose63[] = {
	AX_POSE(23, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(32, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose66[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose67[] = {
	AX_POSE(26, OAM1(249, ST_OAM_V_RECTANGLE, 1), OAM2(18, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 8)),
	AX_POSE(27, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(2, 3, 8)),
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(10, 3, 8)),
	AX_POSE(28, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(26, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose70[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose71[] = {
	AX_POSE(30, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(31, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 8)),
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(12, 3, 8)),
	AX_POSE(32, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(28, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose74[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose75[] = {
	AX_POSE(34, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 8)),
	AX_POSE(-1, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 8)),
	AX_POSE(35, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(18, 3, 8)),
	AX_POSE(-1, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(18, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose78[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose79[] = {
	AX_POSE(30, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(31, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 8)),
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(12, 3, 8)),
	AX_POSE(32, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(28, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose82[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose83[] = {
	AX_POSE(26, OAM1(249, ST_OAM_V_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(27, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 8)),
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(10, 3, 8)),
	AX_POSE(28, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(229, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(26, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose86[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose87[] = {
	AX_POSE(23, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 8)),
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(32, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose90[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose93[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose96[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose99[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose102[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose103[] = {
	AX_POSE(41, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose105[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose108[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose111[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose121[] = {
	AX_POSE(42, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose122[] = {
	AX_POSE(43, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose123[] = {
	AX_POSE(44, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose124[] = {
	AX_POSE(45, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose125[] = {
	AX_POSE(46, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose126[] = {
	AX_POSE(47, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose127[] = {
	AX_POSE(48, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose128[] = {
	AX_POSE(47, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose129[] = {
	AX_POSE(46, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose130[] = {
	AX_POSE(45, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose157[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose158[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose159[] = {
	AX_POSE(41, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose160[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose161[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose164[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose165[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose166[] = {
	AX_POSE(39, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose167[] = {
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose168[] = {
	AX_POSE(39, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose169[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose170[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose176[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose178[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose181[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose187[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose190[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose194[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose195[] = {
	AX_POSE(20, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose196[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose197[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose198[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose199[] = {
	AX_POSE(33, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose200[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose201[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScytherPose202[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const u8 sScytherAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_2_1.lz");
static const u8 sScytherAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_2_2.lz");
static const u8 sScytherAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_2_3.lz");
static const u8 sScytherAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_2_4.lz");
static const u8 sScytherAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_2_5.lz");
static const u8 sScytherAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_2_6.lz");
static const u8 sScytherAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_2_7.lz");
static const u8 sScytherAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_2_8.lz");
static const u8 sScytherAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_3_1.lz");
static const u8 sScytherAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_3_2.lz");
static const u8 sScytherAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_3_3.lz");
static const u8 sScytherAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_3_4.lz");
static const u8 sScytherAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_3_5.lz");
static const u8 sScytherAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_3_6.lz");
static const u8 sScytherAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_3_7.lz");
static const u8 sScytherAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_3_8.lz");
static const u8 sScytherAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_4_1.lz");
static const u8 sScytherAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_4_2.lz");
static const u8 sScytherAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_4_3.lz");
static const u8 sScytherAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_4_4.lz");
static const u8 sScytherAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_4_5.lz");
static const u8 sScytherAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_4_6.lz");
static const u8 sScytherAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_4_7.lz");
static const u8 sScytherAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_4_8.lz");
static const u8 sScytherAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_8_1.lz");
static const u8 sScytherAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_8_2.lz");
static const u8 sScytherAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_8_3.lz");
static const u8 sScytherAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_8_4.lz");
static const u8 sScytherAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_8_5.lz");
static const u8 sScytherAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_8_6.lz");
static const u8 sScytherAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_8_7.lz");
static const u8 sScytherAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_8_8.lz");
static const u8 sScytherAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_9_2.lz");
static const u8 sScytherAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_9_3.lz");
static const u8 sScytherAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_9_4.lz");
static const u8 sScytherAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_9_6.lz");
static const u8 sScytherAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_9_7.lz");
static const u8 sScytherAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_9_8.lz");
static const u8 sScytherAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_11_1.lz");
static const u8 sScytherAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_11_2.lz");
static const u8 sScytherAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_11_3.lz");
static const u8 sScytherAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_11_4.lz");
static const u8 sScytherAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_11_6.lz");
static const u8 sScytherAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_11_7.lz");
static const u8 sScytherAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scyther/sScytherAnims_11_8.lz");

static const u8 sScytherGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_1.4bpp.lz");
static const ax_sprite sScytherSprites1[] = {
	{sScytherGfx1, ARRAY_COUNT(sScytherGfx1)}, 
	{NULL, 0}
};
static const u8 sScytherGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_2.4bpp.lz");
static const ax_sprite sScytherSprites2[] = {
	{sScytherGfx2, ARRAY_COUNT(sScytherGfx2)}, 
	{NULL, 0}
};
static const u8 sScytherGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_3.4bpp.lz");
static const ax_sprite sScytherSprites3[] = {
	{sScytherGfx3, ARRAY_COUNT(sScytherGfx3)}, 
	{NULL, 0}
};
static const u8 sScytherGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_4.4bpp.lz");
static const ax_sprite sScytherSprites4[] = {
	{sScytherGfx4, ARRAY_COUNT(sScytherGfx4)}, 
	{NULL, 0}
};
static const u8 sScytherGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_5.4bpp.lz");
static const ax_sprite sScytherSprites5[] = {
	{sScytherGfx5, ARRAY_COUNT(sScytherGfx5)}, 
	{NULL, 0}
};
static const u8 sScytherGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_6.4bpp.lz");
static const ax_sprite sScytherSprites6[] = {
	{sScytherGfx6, ARRAY_COUNT(sScytherGfx6)}, 
	{NULL, 0}
};
static const u8 sScytherGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_7.4bpp.lz");
static const ax_sprite sScytherSprites7[] = {
	{sScytherGfx7, ARRAY_COUNT(sScytherGfx7)}, 
	{NULL, 0}
};
static const u8 sScytherGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_8.4bpp.lz");
static const ax_sprite sScytherSprites8[] = {
	{sScytherGfx8, ARRAY_COUNT(sScytherGfx8)}, 
	{NULL, 0}
};
static const u8 sScytherGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_9.4bpp.lz");
static const ax_sprite sScytherSprites9[] = {
	{sScytherGfx9, ARRAY_COUNT(sScytherGfx9)}, 
	{NULL, 0}
};
static const u8 sScytherGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_10.4bpp.lz");
static const ax_sprite sScytherSprites10[] = {
	{sScytherGfx10, ARRAY_COUNT(sScytherGfx10)}, 
	{NULL, 0}
};
static const u8 sScytherGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_11.4bpp.lz");
static const ax_sprite sScytherSprites11[] = {
	{sScytherGfx11, ARRAY_COUNT(sScytherGfx11)}, 
	{NULL, 0}
};
static const u8 sScytherGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_12.4bpp.lz");
static const ax_sprite sScytherSprites12[] = {
	{sScytherGfx12, ARRAY_COUNT(sScytherGfx12)}, 
	{NULL, 0}
};
static const u8 sScytherGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_13.4bpp.lz");
static const ax_sprite sScytherSprites13[] = {
	{sScytherGfx13, ARRAY_COUNT(sScytherGfx13)}, 
	{NULL, 0}
};
static const u8 sScytherGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_14.4bpp.lz");
static const ax_sprite sScytherSprites14[] = {
	{sScytherGfx14, ARRAY_COUNT(sScytherGfx14)}, 
	{NULL, 0}
};
static const u8 sScytherGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_15.4bpp.lz");
static const ax_sprite sScytherSprites15[] = {
	{sScytherGfx15, ARRAY_COUNT(sScytherGfx15)}, 
	{NULL, 0}
};
static const u8 sScytherGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_16.4bpp.lz");
static const u8 sScytherGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_16_1.4bpp.lz");
static const ax_sprite sScytherSprites16[] = {
	{NULL, 32}, 
	{sScytherGfx16, ARRAY_COUNT(sScytherGfx16)}, 
	{NULL, 32}, 
	{sScytherGfx16_1, ARRAY_COUNT(sScytherGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScytherGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_17.4bpp.lz");
static const u8 sScytherGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_17_1.4bpp.lz");
static const ax_sprite sScytherSprites17[] = {
	{NULL, 32}, 
	{sScytherGfx17, ARRAY_COUNT(sScytherGfx17)}, 
	{NULL, 32}, 
	{sScytherGfx17_1, ARRAY_COUNT(sScytherGfx17_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScytherGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_18.4bpp.lz");
static const u8 sScytherGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_18_1.4bpp.lz");
static const u8 sScytherGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_18_2.4bpp.lz");
static const ax_sprite sScytherSprites18[] = {
	{NULL, 32}, 
	{sScytherGfx18, ARRAY_COUNT(sScytherGfx18)}, 
	{NULL, 32}, 
	{sScytherGfx18_1, ARRAY_COUNT(sScytherGfx18_1)}, 
	{NULL, 32}, 
	{sScytherGfx18_2, ARRAY_COUNT(sScytherGfx18_2)}, 
	{NULL, 0}
};
static const u8 sScytherGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_19.4bpp.lz");
static const u8 sScytherGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_19_1.4bpp.lz");
static const ax_sprite sScytherSprites19[] = {
	{NULL, 32}, 
	{sScytherGfx19, ARRAY_COUNT(sScytherGfx19)}, 
	{NULL, 32}, 
	{sScytherGfx19_1, ARRAY_COUNT(sScytherGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScytherGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_20.4bpp.lz");
static const u8 sScytherGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_20_1.4bpp.lz");
static const u8 sScytherGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_20_2.4bpp.lz");
static const ax_sprite sScytherSprites20[] = {
	{NULL, 32}, 
	{sScytherGfx20, ARRAY_COUNT(sScytherGfx20)}, 
	{NULL, 32}, 
	{sScytherGfx20_1, ARRAY_COUNT(sScytherGfx20_1)}, 
	{NULL, 32}, 
	{sScytherGfx20_2, ARRAY_COUNT(sScytherGfx20_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScytherGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_21.4bpp.lz");
static const u8 sScytherGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_21_1.4bpp.lz");
static const ax_sprite sScytherSprites21[] = {
	{sScytherGfx21, ARRAY_COUNT(sScytherGfx21)}, 
	{NULL, 64}, 
	{sScytherGfx21_1, ARRAY_COUNT(sScytherGfx21_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScytherGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_22.4bpp.lz");
static const u8 sScytherGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_22_1.4bpp.lz");
static const ax_sprite sScytherSprites22[] = {
	{NULL, 192}, 
	{sScytherGfx22, ARRAY_COUNT(sScytherGfx22)}, 
	{NULL, 32}, 
	{sScytherGfx22_1, ARRAY_COUNT(sScytherGfx22_1)}, 
	{NULL, 0}
};
static const u8 sScytherGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_23.4bpp.lz");
static const u8 sScytherGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_23_1.4bpp.lz");
static const ax_sprite sScytherSprites23[] = {
	{NULL, 32}, 
	{sScytherGfx23, ARRAY_COUNT(sScytherGfx23)}, 
	{NULL, 64}, 
	{sScytherGfx23_1, ARRAY_COUNT(sScytherGfx23_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScytherGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_24.4bpp.lz");
static const u8 sScytherGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_24_1.4bpp.lz");
static const u8 sScytherGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_24_2.4bpp.lz");
static const ax_sprite sScytherSprites24[] = {
	{NULL, 64}, 
	{sScytherGfx24, ARRAY_COUNT(sScytherGfx24)}, 
	{NULL, 64}, 
	{sScytherGfx24_1, ARRAY_COUNT(sScytherGfx24_1)}, 
	{NULL, 32}, 
	{sScytherGfx24_2, ARRAY_COUNT(sScytherGfx24_2)}, 
	{NULL, 0}
};
static const u8 sScytherGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_25.4bpp.lz");
static const u8 sScytherGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_25_1.4bpp.lz");
static const u8 sScytherGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_25_2.4bpp.lz");
static const u8 sScytherGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_25_3.4bpp.lz");
static const ax_sprite sScytherSprites25[] = {
	{sScytherGfx25, ARRAY_COUNT(sScytherGfx25)}, 
	{NULL, 32}, 
	{sScytherGfx25_1, ARRAY_COUNT(sScytherGfx25_1)}, 
	{NULL, 32}, 
	{sScytherGfx25_2, ARRAY_COUNT(sScytherGfx25_2)}, 
	{NULL, 64}, 
	{sScytherGfx25_3, ARRAY_COUNT(sScytherGfx25_3)}, 
	{NULL, 0}
};
static const u8 sScytherGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_26.4bpp.lz");
static const u8 sScytherGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_26_1.4bpp.lz");
static const u8 sScytherGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_26_2.4bpp.lz");
static const ax_sprite sScytherSprites26[] = {
	{NULL, 32}, 
	{sScytherGfx26, ARRAY_COUNT(sScytherGfx26)}, 
	{NULL, 32}, 
	{sScytherGfx26_1, ARRAY_COUNT(sScytherGfx26_1)}, 
	{NULL, 32}, 
	{sScytherGfx26_2, ARRAY_COUNT(sScytherGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScytherGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_27.4bpp.lz");
static const ax_sprite sScytherSprites27[] = {
	{sScytherGfx27, ARRAY_COUNT(sScytherGfx27)}, 
	{NULL, 0}
};
static const u8 sScytherGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_28.4bpp.lz");
static const u8 sScytherGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_28_1.4bpp.lz");
static const ax_sprite sScytherSprites28[] = {
	{sScytherGfx28, ARRAY_COUNT(sScytherGfx28)}, 
	{NULL, 32}, 
	{sScytherGfx28_1, ARRAY_COUNT(sScytherGfx28_1)}, 
	{NULL, 0}
};
static const u8 sScytherGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_29.4bpp.lz");
static const u8 sScytherGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_29_1.4bpp.lz");
static const ax_sprite sScytherSprites29[] = {
	{sScytherGfx29, ARRAY_COUNT(sScytherGfx29)}, 
	{NULL, 32}, 
	{sScytherGfx29_1, ARRAY_COUNT(sScytherGfx29_1)}, 
	{NULL, 0}
};
static const u8 sScytherGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_30.4bpp.lz");
static const u8 sScytherGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_30_1.4bpp.lz");
static const ax_sprite sScytherSprites30[] = {
	{NULL, 32}, 
	{sScytherGfx30, ARRAY_COUNT(sScytherGfx30)}, 
	{NULL, 32}, 
	{sScytherGfx30_1, ARRAY_COUNT(sScytherGfx30_1)}, 
	{NULL, 0}
};
static const u8 sScytherGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_31.4bpp.lz");
static const ax_sprite sScytherSprites31[] = {
	{sScytherGfx31, ARRAY_COUNT(sScytherGfx31)}, 
	{NULL, 0}
};
static const u8 sScytherGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_32.4bpp.lz");
static const ax_sprite sScytherSprites32[] = {
	{sScytherGfx32, ARRAY_COUNT(sScytherGfx32)}, 
	{NULL, 0}
};
static const u8 sScytherGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_33.4bpp.lz");
static const u8 sScytherGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_33_1.4bpp.lz");
static const ax_sprite sScytherSprites33[] = {
	{sScytherGfx33, ARRAY_COUNT(sScytherGfx33)}, 
	{NULL, 32}, 
	{sScytherGfx33_1, ARRAY_COUNT(sScytherGfx33_1)}, 
	{NULL, 0}
};
static const u8 sScytherGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_34.4bpp.lz");
static const u8 sScytherGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_34_1.4bpp.lz");
static const ax_sprite sScytherSprites34[] = {
	{NULL, 128}, 
	{sScytherGfx34, ARRAY_COUNT(sScytherGfx34)}, 
	{NULL, 32}, 
	{sScytherGfx34_1, ARRAY_COUNT(sScytherGfx34_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScytherGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_35.4bpp.lz");
static const ax_sprite sScytherSprites35[] = {
	{sScytherGfx35, ARRAY_COUNT(sScytherGfx35)}, 
	{NULL, 0}
};
static const u8 sScytherGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_36.4bpp.lz");
static const ax_sprite sScytherSprites36[] = {
	{sScytherGfx36, ARRAY_COUNT(sScytherGfx36)}, 
	{NULL, 0}
};
static const u8 sScytherGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_37.4bpp.lz");
static const ax_sprite sScytherSprites37[] = {
	{sScytherGfx37, ARRAY_COUNT(sScytherGfx37)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScytherGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_38.4bpp.lz");
static const u8 sScytherGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_38_1.4bpp.lz");
static const u8 sScytherGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_38_2.4bpp.lz");
static const ax_sprite sScytherSprites38[] = {
	{sScytherGfx38, ARRAY_COUNT(sScytherGfx38)}, 
	{NULL, 32}, 
	{sScytherGfx38_1, ARRAY_COUNT(sScytherGfx38_1)}, 
	{NULL, 32}, 
	{sScytherGfx38_2, ARRAY_COUNT(sScytherGfx38_2)}, 
	{NULL, 0}
};
static const u8 sScytherGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_39.4bpp.lz");
static const u8 sScytherGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_39_1.4bpp.lz");
static const u8 sScytherGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_39_2.4bpp.lz");
static const u8 sScytherGfx39_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_39_3.4bpp.lz");
static const ax_sprite sScytherSprites39[] = {
	{NULL, 32}, 
	{sScytherGfx39, ARRAY_COUNT(sScytherGfx39)}, 
	{NULL, 64}, 
	{sScytherGfx39_1, ARRAY_COUNT(sScytherGfx39_1)}, 
	{NULL, 32}, 
	{sScytherGfx39_2, ARRAY_COUNT(sScytherGfx39_2)}, 
	{NULL, 32}, 
	{sScytherGfx39_3, ARRAY_COUNT(sScytherGfx39_3)}, 
	{NULL, 0}
};
static const u8 sScytherGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_40.4bpp.lz");
static const u8 sScytherGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_40_1.4bpp.lz");
static const ax_sprite sScytherSprites40[] = {
	{sScytherGfx40, ARRAY_COUNT(sScytherGfx40)}, 
	{NULL, 32}, 
	{sScytherGfx40_1, ARRAY_COUNT(sScytherGfx40_1)}, 
	{NULL, 0}
};
static const u8 sScytherGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_41.4bpp.lz");
static const ax_sprite sScytherSprites41[] = {
	{sScytherGfx41, ARRAY_COUNT(sScytherGfx41)}, 
	{NULL, 0}
};
static const u8 sScytherGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_42.4bpp.lz");
static const u8 sScytherGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_42_1.4bpp.lz");
static const ax_sprite sScytherSprites42[] = {
	{sScytherGfx42, ARRAY_COUNT(sScytherGfx42)}, 
	{NULL, 32}, 
	{sScytherGfx42_1, ARRAY_COUNT(sScytherGfx42_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScytherGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_43.4bpp.lz");
static const ax_sprite sScytherSprites43[] = {
	{sScytherGfx43, ARRAY_COUNT(sScytherGfx43)}, 
	{NULL, 0}
};
static const u8 sScytherGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_44.4bpp.lz");
static const ax_sprite sScytherSprites44[] = {
	{sScytherGfx44, ARRAY_COUNT(sScytherGfx44)}, 
	{NULL, 0}
};
static const u8 sScytherGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_45.4bpp.lz");
static const ax_sprite sScytherSprites45[] = {
	{sScytherGfx45, ARRAY_COUNT(sScytherGfx45)}, 
	{NULL, 0}
};
static const u8 sScytherGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_46.4bpp.lz");
static const ax_sprite sScytherSprites46[] = {
	{sScytherGfx46, ARRAY_COUNT(sScytherGfx46)}, 
	{NULL, 0}
};
static const u8 sScytherGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_47.4bpp.lz");
static const ax_sprite sScytherSprites47[] = {
	{sScytherGfx47, ARRAY_COUNT(sScytherGfx47)}, 
	{NULL, 0}
};
static const u8 sScytherGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_48.4bpp.lz");
static const ax_sprite sScytherSprites48[] = {
	{sScytherGfx48, ARRAY_COUNT(sScytherGfx48)}, 
	{NULL, 0}
};
static const u8 sScytherGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scyther/sprite_49.4bpp.lz");
static const ax_sprite sScytherSprites49[] = {
	{sScytherGfx49, ARRAY_COUNT(sScytherGfx49)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesScyther[] = {
	sScytherPose1,
	sScytherPose2,
	sScytherPose3,
	sScytherPose4,
	sScytherPose5,
	sScytherPose6,
	sScytherPose7,
	sScytherPose8,
	sScytherPose9,
	sScytherPose10,
	sScytherPose11,
	sScytherPose12,
	sScytherPose13,
	sScytherPose14,
	sScytherPose15,
	sScytherPose16,
	sScytherPose17,
	sScytherPose18,
	sScytherPose19,
	sScytherPose20,
	sScytherPose21,
	sScytherPose22,
	sScytherPose23,
	sScytherPose24,
	sScytherPose1,
	sScytherPose2,
	sScytherPose3,
	sScytherPose28,
	sScytherPose4,
	sScytherPose5,
	sScytherPose6,
	sScytherPose32,
	sScytherPose7,
	sScytherPose8,
	sScytherPose9,
	sScytherPose36,
	sScytherPose10,
	sScytherPose11,
	sScytherPose12,
	sScytherPose40,
	sScytherPose13,
	sScytherPose14,
	sScytherPose15,
	sScytherPose44,
	sScytherPose16,
	sScytherPose17,
	sScytherPose18,
	sScytherPose48,
	sScytherPose19,
	sScytherPose20,
	sScytherPose21,
	sScytherPose52,
	sScytherPose22,
	sScytherPose23,
	sScytherPose24,
	sScytherPose56,
	sScytherPose1,
	sScytherPose58,
	sScytherPose59,
	sScytherPose28,
	sScytherPose4,
	sScytherPose62,
	sScytherPose63,
	sScytherPose32,
	sScytherPose7,
	sScytherPose66,
	sScytherPose67,
	sScytherPose36,
	sScytherPose10,
	sScytherPose70,
	sScytherPose71,
	sScytherPose40,
	sScytherPose13,
	sScytherPose74,
	sScytherPose75,
	sScytherPose44,
	sScytherPose16,
	sScytherPose78,
	sScytherPose79,
	sScytherPose48,
	sScytherPose19,
	sScytherPose82,
	sScytherPose83,
	sScytherPose52,
	sScytherPose22,
	sScytherPose86,
	sScytherPose87,
	sScytherPose56,
	sScytherPose1,
	sScytherPose90,
	sScytherPose28,
	sScytherPose4,
	sScytherPose93,
	sScytherPose32,
	sScytherPose7,
	sScytherPose96,
	sScytherPose36,
	sScytherPose10,
	sScytherPose99,
	sScytherPose40,
	sScytherPose13,
	sScytherPose102,
	sScytherPose103,
	sScytherPose16,
	sScytherPose105,
	sScytherPose48,
	sScytherPose19,
	sScytherPose108,
	sScytherPose52,
	sScytherPose22,
	sScytherPose111,
	sScytherPose56,
	sScytherPose1,
	sScytherPose22,
	sScytherPose19,
	sScytherPose16,
	sScytherPose13,
	sScytherPose10,
	sScytherPose7,
	sScytherPose4,
	sScytherPose121,
	sScytherPose122,
	sScytherPose123,
	sScytherPose124,
	sScytherPose125,
	sScytherPose126,
	sScytherPose127,
	sScytherPose128,
	sScytherPose129,
	sScytherPose130,
	sScytherPose1,
	sScytherPose2,
	sScytherPose3,
	sScytherPose4,
	sScytherPose5,
	sScytherPose6,
	sScytherPose7,
	sScytherPose8,
	sScytherPose9,
	sScytherPose10,
	sScytherPose11,
	sScytherPose12,
	sScytherPose13,
	sScytherPose14,
	sScytherPose15,
	sScytherPose16,
	sScytherPose17,
	sScytherPose18,
	sScytherPose19,
	sScytherPose20,
	sScytherPose21,
	sScytherPose22,
	sScytherPose23,
	sScytherPose24,
	sScytherPose28,
	sScytherPose56,
	sScytherPose157,
	sScytherPose158,
	sScytherPose159,
	sScytherPose160,
	sScytherPose161,
	sScytherPose32,
	sScytherPose90,
	sScytherPose164,
	sScytherPose165,
	sScytherPose166,
	sScytherPose167,
	sScytherPose168,
	sScytherPose169,
	sScytherPose170,
	sScytherPose1,
	sScytherPose90,
	sScytherPose28,
	sScytherPose4,
	sScytherPose164,
	sScytherPose176,
	sScytherPose7,
	sScytherPose178,
	sScytherPose36,
	sScytherPose10,
	sScytherPose181,
	sScytherPose40,
	sScytherPose13,
	sScytherPose102,
	sScytherPose103,
	sScytherPose16,
	sScytherPose187,
	sScytherPose48,
	sScytherPose19,
	sScytherPose190,
	sScytherPose52,
	sScytherPose22,
	sScytherPose170,
	sScytherPose194,
	sScytherPose195,
	sScytherPose196,
	sScytherPose197,
	sScytherPose198,
	sScytherPose199,
	sScytherPose200,
	sScytherPose201,
	sScytherPose202,
	sScytherPose1,
	sScytherPose22,
	sScytherPose19,
	sScytherPose16,
	sScytherPose13,
	sScytherPose10,
	sScytherPose7,
	sScytherPose4,
};

static const struct PositionSets sAxPositionsScyther[] = {
	[0] = { .set = { {-1, -10}, {-12, -8}, {11, -8}, {0, -10} } },
	[1] = { .set = { {0, -9}, {-11, -5}, {11, -10}, {-1, -9} } },
	[2] = { .set = { {-1, -9}, {-12, -10}, {10, -4}, {0, -9} } },
	[3] = { .set = { {4, -10}, {13, -10}, {0, -3}, {-2, -11} } },
	[4] = { .set = { {4, -9}, {11, -8}, {1, -4}, {0, -10} } },
	[5] = { .set = { {4, -9}, {14, -12}, {-1, -1}, {0, -9} } },
	[6] = { .set = { {9, -13}, {3, -19}, {10, -6}, {-1, -11} } },
	[7] = { .set = { {9, -12}, {7, -11}, {11, -6}, {-1, -10} } },
	[8] = { .set = { {9, -12}, {12, -14}, {9, -2}, {-1, -10} } },
	[9] = { .set = { {5, -16}, {-1, -16}, {13, -9}, {-2, -12} } },
	[10] = { .set = { {5, -15}, {2, -10}, {14, -10}, {-1, -10} } },
	[11] = { .set = { {5, -15}, {3, -17}, {12, -6}, {-1, -10} } },
	[12] = { .set = { {0, -16}, {10, -9}, {-12, -9}, {-1, -13} } },
	[13] = { .set = { {0, -15}, {10, -7}, {-12, -11}, {-1, -12} } },
	[14] = { .set = { {0, -15}, {11, -11}, {-11, -8}, {-1, -12} } },
	[15] = { .set = { {-5, -16}, {1, -16}, {-13, -9}, {2, -12} } },
	[16] = { .set = { {-5, -15}, {-2, -10}, {-14, -10}, {1, -10} } },
	[17] = { .set = { {-5, -15}, {-3, -17}, {-12, -6}, {1, -10} } },
	[18] = { .set = { {-9, -13}, {-3, -19}, {-10, -6}, {1, -11} } },
	[19] = { .set = { {-9, -12}, {-7, -11}, {-11, -6}, {1, -10} } },
	[20] = { .set = { {-9, -12}, {-12, -14}, {-9, -2}, {1, -10} } },
	[21] = { .set = { {-4, -10}, {-13, -10}, {0, -3}, {2, -11} } },
	[22] = { .set = { {-4, -9}, {-11, -8}, {-1, -4}, {0, -10} } },
	[23] = { .set = { {-4, -9}, {-14, -12}, {1, -1}, {0, -9} } },
	[24] = { .set = { {-1, -10}, {-12, -8}, {11, -8}, {0, -10} } },
	[25] = { .set = { {0, -9}, {-11, -5}, {11, -10}, {-1, -9} } },
	[26] = { .set = { {-1, -9}, {-12, -10}, {10, -4}, {0, -9} } },
	[27] = { .set = { {0, 1}, {-12, -11}, {11, -11}, {-1, -6} } },
	[28] = { .set = { {4, -10}, {13, -10}, {0, -3}, {-2, -11} } },
	[29] = { .set = { {4, -9}, {11, -8}, {1, -4}, {0, -10} } },
	[30] = { .set = { {4, -9}, {14, -12}, {-1, -1}, {0, -9} } },
	[31] = { .set = { {7, -1}, {12, -13}, {-13, -8}, {3, -8} } },
	[32] = { .set = { {9, -13}, {3, -19}, {10, -6}, {-1, -11} } },
	[33] = { .set = { {9, -12}, {7, -11}, {11, -6}, {-1, -10} } },
	[34] = { .set = { {9, -12}, {12, -14}, {9, -2}, {-1, -10} } },
	[35] = { .set = { {9, -5}, {-2, -14}, {-12, -4}, {0, -8} } },
	[36] = { .set = { {5, -16}, {-1, -16}, {13, -9}, {-2, -12} } },
	[37] = { .set = { {5, -15}, {2, -10}, {14, -10}, {-1, -10} } },
	[38] = { .set = { {5, -15}, {3, -17}, {12, -6}, {-1, -10} } },
	[39] = { .set = { {7, -13}, {-12, -16}, {10, -3}, {-1, -12} } },
	[40] = { .set = { {0, -16}, {10, -9}, {-12, -9}, {-1, -13} } },
	[41] = { .set = { {0, -15}, {10, -7}, {-12, -11}, {-1, -12} } },
	[42] = { .set = { {0, -15}, {11, -11}, {-11, -8}, {-1, -12} } },
	[43] = { .set = { {0, -15}, {13, -9}, {-14, -9}, {0, -12} } },
	[44] = { .set = { {-5, -16}, {1, -16}, {-13, -9}, {2, -12} } },
	[45] = { .set = { {-5, -15}, {-2, -10}, {-14, -10}, {1, -10} } },
	[46] = { .set = { {-5, -15}, {-3, -17}, {-12, -6}, {1, -10} } },
	[47] = { .set = { {-8, -13}, {11, -16}, {-11, -3}, {0, -12} } },
	[48] = { .set = { {-9, -13}, {-3, -19}, {-10, -6}, {1, -11} } },
	[49] = { .set = { {-9, -12}, {-7, -11}, {-11, -6}, {1, -10} } },
	[50] = { .set = { {-9, -12}, {-12, -14}, {-9, -2}, {1, -10} } },
	[51] = { .set = { {-10, -5}, {1, -14}, {11, -4}, {-1, -8} } },
	[52] = { .set = { {-4, -10}, {-13, -10}, {0, -3}, {2, -11} } },
	[53] = { .set = { {-4, -9}, {-11, -8}, {-1, -4}, {0, -10} } },
	[54] = { .set = { {-4, -9}, {-14, -12}, {1, -1}, {0, -9} } },
	[55] = { .set = { {-7, -1}, {-12, -13}, {13, -8}, {-3, -8} } },
	[56] = { .set = { {-1, -10}, {-12, -8}, {11, -8}, {0, -10} } },
	[57] = { .set = { {0, -13}, {-5, -10}, {1, -10}, {-1, -13} } },
	[58] = { .set = { {0, 1}, {-12, -11}, {11, -11}, {-1, -6} } },
	[59] = { .set = { {0, 1}, {-12, -11}, {11, -11}, {-1, -6} } },
	[60] = { .set = { {4, -10}, {13, -10}, {0, -3}, {-2, -11} } },
	[61] = { .set = { {4, -12}, {8, -10}, {4, -7}, {0, -12} } },
	[62] = { .set = { {7, -1}, {12, -13}, {-13, -8}, {3, -8} } },
	[63] = { .set = { {7, -1}, {12, -13}, {-13, -8}, {3, -8} } },
	[64] = { .set = { {9, -13}, {3, -19}, {10, -6}, {-1, -11} } },
	[65] = { .set = { {4, -13}, {6, -12}, {5, -11}, {-4, -10} } },
	[66] = { .set = { {9, -5}, {-2, -14}, {-12, -4}, {0, -8} } },
	[67] = { .set = { {9, -5}, {-2, -14}, {-12, -4}, {0, -8} } },
	[68] = { .set = { {5, -16}, {-1, -16}, {13, -9}, {-2, -12} } },
	[69] = { .set = { {2, -15}, {4, -16}, {6, -14}, {-3, -12} } },
	[70] = { .set = { {7, -13}, {-12, -16}, {10, -3}, {-1, -12} } },
	[71] = { .set = { {7, -13}, {-12, -16}, {10, -3}, {-1, -12} } },
	[72] = { .set = { {0, -16}, {10, -9}, {-12, -9}, {-1, -13} } },
	[73] = { .set = { {0, -13}, {5, -14}, {-6, -14}, {0, -8} } },
	[74] = { .set = { {0, -15}, {13, -9}, {-14, -9}, {0, -12} } },
	[75] = { .set = { {0, -15}, {13, -9}, {-14, -9}, {0, -12} } },
	[76] = { .set = { {-5, -16}, {1, -16}, {-13, -9}, {2, -12} } },
	[77] = { .set = { {-3, -15}, {-5, -16}, {-7, -14}, {2, -12} } },
	[78] = { .set = { {-8, -13}, {11, -16}, {-11, -3}, {0, -12} } },
	[79] = { .set = { {-8, -13}, {11, -16}, {-11, -3}, {0, -12} } },
	[80] = { .set = { {-9, -13}, {-3, -19}, {-10, -6}, {1, -11} } },
	[81] = { .set = { {-5, -13}, {-7, -12}, {-6, -11}, {3, -10} } },
	[82] = { .set = { {-10, -5}, {1, -14}, {11, -4}, {-1, -8} } },
	[83] = { .set = { {-10, -5}, {1, -14}, {11, -4}, {-1, -8} } },
	[84] = { .set = { {-4, -10}, {-13, -10}, {0, -3}, {2, -11} } },
	[85] = { .set = { {-4, -12}, {-8, -10}, {-4, -7}, {0, -12} } },
	[86] = { .set = { {-8, -1}, {-13, -13}, {12, -8}, {-4, -8} } },
	[87] = { .set = { {-7, -1}, {-12, -13}, {13, -8}, {-3, -8} } },
	[88] = { .set = { {-1, -10}, {-12, -8}, {11, -8}, {0, -10} } },
	[89] = { .set = { {0, -23}, {-12, -22}, {11, -21}, {0, -14} } },
	[90] = { .set = { {0, 1}, {-12, -11}, {11, -11}, {-1, -6} } },
	[91] = { .set = { {4, -10}, {13, -10}, {0, -3}, {-2, -11} } },
	[92] = { .set = { {-1, -23}, {10, -24}, {-10, -20}, {-2, -12} } },
	[93] = { .set = { {7, -1}, {12, -13}, {-13, -8}, {3, -8} } },
	[94] = { .set = { {9, -13}, {3, -19}, {10, -6}, {-1, -11} } },
	[95] = { .set = { {-2, -19}, {3, -23}, {-1, -20}, {-3, -9} } },
	[96] = { .set = { {9, -5}, {-2, -14}, {-12, -4}, {0, -8} } },
	[97] = { .set = { {5, -16}, {-1, -16}, {13, -9}, {-2, -12} } },
	[98] = { .set = { {0, -19}, {-9, -24}, {8, -18}, {-4, -8} } },
	[99] = { .set = { {7, -13}, {-12, -16}, {10, -3}, {-1, -12} } },
	[100] = { .set = { {0, -16}, {10, -9}, {-12, -9}, {-1, -13} } },
	[101] = { .set = { {0, -16}, {12, -18}, {-13, -18}, {0, -9} } },
	[102] = { .set = { {0, -15}, {12, -7}, {-13, -6}, {0, -11} } },
	[103] = { .set = { {-5, -16}, {1, -16}, {-13, -9}, {2, -12} } },
	[104] = { .set = { {-1, -19}, {8, -24}, {-9, -18}, {3, -8} } },
	[105] = { .set = { {-8, -13}, {11, -16}, {-11, -3}, {0, -12} } },
	[106] = { .set = { {-9, -13}, {-3, -19}, {-10, -6}, {1, -11} } },
	[107] = { .set = { {1, -19}, {-4, -23}, {0, -20}, {2, -9} } },
	[108] = { .set = { {-10, -5}, {1, -14}, {11, -4}, {-1, -8} } },
	[109] = { .set = { {-4, -10}, {-13, -10}, {0, -3}, {2, -11} } },
	[110] = { .set = { {1, -23}, {-10, -24}, {10, -20}, {2, -12} } },
	[111] = { .set = { {-7, -1}, {-12, -13}, {13, -8}, {-3, -8} } },
	[112] = { .set = { {-1, -10}, {-12, -8}, {11, -8}, {0, -10} } },
	[113] = { .set = { {-4, -10}, {-13, -10}, {0, -3}, {2, -11} } },
	[114] = { .set = { {-9, -13}, {-3, -19}, {-10, -6}, {1, -11} } },
	[115] = { .set = { {-5, -16}, {1, -16}, {-13, -9}, {2, -12} } },
	[116] = { .set = { {0, -16}, {10, -9}, {-12, -9}, {-1, -13} } },
	[117] = { .set = { {5, -16}, {-1, -16}, {13, -9}, {-2, -12} } },
	[118] = { .set = { {9, -13}, {3, -19}, {10, -6}, {-1, -11} } },
	[119] = { .set = { {4, -10}, {13, -10}, {0, -3}, {-2, -11} } },
	[120] = { .set = { {-4, -6}, {-10, -4}, {-3, 1}, {1, -6} } },
	[121] = { .set = { {-4, -5}, {-10, -2}, {-3, 2}, {2, -5} } },
	[122] = { .set = { {0, -15}, {-14, -13}, {15, -6}, {1, -11} } },
	[123] = { .set = { {0, -15}, {8, -23}, {-13, -2}, {-1, -11} } },
	[124] = { .set = { {3, -18}, {9, -26}, {1, -3}, {-3, -11} } },
	[125] = { .set = { {3, -17}, {-5, -23}, {8, -4}, {-1, -11} } },
	[126] = { .set = { {1, -20}, {11, -20}, {-10, -5}, {0, -10} } },
	[127] = { .set = { {-4, -17}, {4, -23}, {-9, -4}, {0, -11} } },
	[128] = { .set = { {-4, -18}, {-10, -26}, {-2, -3}, {2, -11} } },
	[129] = { .set = { {-1, -15}, {-9, -23}, {12, -2}, {0, -11} } },
	[130] = { .set = { {-1, -10}, {-12, -8}, {11, -8}, {0, -10} } },
	[131] = { .set = { {0, -9}, {-11, -5}, {11, -10}, {-1, -9} } },
	[132] = { .set = { {-1, -9}, {-12, -10}, {10, -4}, {0, -9} } },
	[133] = { .set = { {4, -10}, {13, -10}, {0, -3}, {-2, -11} } },
	[134] = { .set = { {4, -9}, {11, -8}, {1, -4}, {0, -10} } },
	[135] = { .set = { {4, -9}, {14, -12}, {-1, -1}, {0, -9} } },
	[136] = { .set = { {9, -13}, {3, -19}, {10, -6}, {-1, -11} } },
	[137] = { .set = { {9, -12}, {7, -11}, {11, -6}, {-1, -10} } },
	[138] = { .set = { {9, -12}, {12, -14}, {9, -2}, {-1, -10} } },
	[139] = { .set = { {5, -16}, {-1, -16}, {13, -9}, {-2, -12} } },
	[140] = { .set = { {5, -15}, {2, -10}, {14, -10}, {-1, -10} } },
	[141] = { .set = { {5, -15}, {3, -17}, {12, -6}, {-1, -10} } },
	[142] = { .set = { {0, -16}, {10, -9}, {-12, -9}, {-1, -13} } },
	[143] = { .set = { {0, -15}, {10, -7}, {-12, -11}, {-1, -12} } },
	[144] = { .set = { {0, -15}, {11, -11}, {-11, -8}, {-1, -12} } },
	[145] = { .set = { {-5, -16}, {1, -16}, {-13, -9}, {2, -12} } },
	[146] = { .set = { {-5, -15}, {-2, -10}, {-14, -10}, {1, -10} } },
	[147] = { .set = { {-5, -15}, {-3, -17}, {-12, -6}, {1, -10} } },
	[148] = { .set = { {-9, -13}, {-3, -19}, {-10, -6}, {1, -11} } },
	[149] = { .set = { {-9, -12}, {-7, -11}, {-11, -6}, {1, -10} } },
	[150] = { .set = { {-9, -12}, {-12, -14}, {-9, -2}, {1, -10} } },
	[151] = { .set = { {-4, -10}, {-13, -10}, {0, -3}, {2, -11} } },
	[152] = { .set = { {-4, -9}, {-11, -8}, {-1, -4}, {0, -10} } },
	[153] = { .set = { {-4, -9}, {-14, -12}, {1, -1}, {0, -9} } },
	[154] = { .set = { {0, 1}, {-12, -11}, {11, -11}, {-1, -6} } },
	[155] = { .set = { {-7, -1}, {-12, -13}, {13, -8}, {-3, -8} } },
	[156] = { .set = { {-10, -6}, {1, -15}, {11, -5}, {-1, -9} } },
	[157] = { .set = { {-8, -11}, {11, -14}, {-11, -1}, {0, -10} } },
	[158] = { .set = { {0, -14}, {12, -6}, {-13, -5}, {0, -10} } },
	[159] = { .set = { {7, -11}, {-12, -14}, {10, -1}, {-1, -10} } },
	[160] = { .set = { {9, -6}, {-2, -15}, {-12, -5}, {0, -9} } },
	[161] = { .set = { {7, -1}, {12, -13}, {-13, -8}, {3, -8} } },
	[162] = { .set = { {0, -23}, {-12, -22}, {11, -21}, {0, -14} } },
	[163] = { .set = { {0, -23}, {11, -24}, {-9, -20}, {-1, -12} } },
	[164] = { .set = { {0, -20}, {5, -24}, {1, -21}, {-1, -10} } },
	[165] = { .set = { {2, -21}, {-7, -26}, {10, -20}, {-2, -10} } },
	[166] = { .set = { {0, -19}, {12, -21}, {-13, -21}, {0, -12} } },
	[167] = { .set = { {-3, -21}, {6, -26}, {-11, -20}, {1, -10} } },
	[168] = { .set = { {-1, -20}, {-6, -24}, {-2, -21}, {0, -10} } },
	[169] = { .set = { {0, -23}, {-11, -24}, {9, -20}, {1, -12} } },
	[170] = { .set = { {-1, -10}, {-12, -8}, {11, -8}, {0, -10} } },
	[171] = { .set = { {0, -23}, {-12, -22}, {11, -21}, {0, -14} } },
	[172] = { .set = { {0, 1}, {-12, -11}, {11, -11}, {-1, -6} } },
	[173] = { .set = { {4, -10}, {13, -10}, {0, -3}, {-2, -11} } },
	[174] = { .set = { {0, -23}, {11, -24}, {-9, -20}, {-1, -12} } },
	[175] = { .set = { {5, -1}, {10, -13}, {-15, -8}, {1, -8} } },
	[176] = { .set = { {9, -13}, {3, -19}, {10, -6}, {-1, -11} } },
	[177] = { .set = { {0, -19}, {5, -23}, {1, -20}, {-1, -9} } },
	[178] = { .set = { {9, -5}, {-2, -14}, {-12, -4}, {0, -8} } },
	[179] = { .set = { {5, -16}, {-1, -16}, {13, -9}, {-2, -12} } },
	[180] = { .set = { {2, -19}, {-7, -24}, {10, -18}, {-2, -8} } },
	[181] = { .set = { {7, -13}, {-12, -16}, {10, -3}, {-1, -12} } },
	[182] = { .set = { {0, -16}, {10, -9}, {-12, -9}, {-1, -13} } },
	[183] = { .set = { {0, -16}, {12, -18}, {-13, -18}, {0, -9} } },
	[184] = { .set = { {0, -15}, {12, -7}, {-13, -6}, {0, -11} } },
	[185] = { .set = { {-5, -16}, {1, -16}, {-13, -9}, {2, -12} } },
	[186] = { .set = { {-3, -19}, {6, -24}, {-11, -18}, {1, -8} } },
	[187] = { .set = { {-8, -13}, {11, -16}, {-11, -3}, {0, -12} } },
	[188] = { .set = { {-9, -13}, {-3, -19}, {-10, -6}, {1, -11} } },
	[189] = { .set = { {-1, -19}, {-6, -23}, {-2, -20}, {0, -9} } },
	[190] = { .set = { {-10, -5}, {1, -14}, {11, -4}, {-1, -8} } },
	[191] = { .set = { {-4, -10}, {-13, -10}, {0, -3}, {2, -11} } },
	[192] = { .set = { {0, -23}, {-11, -24}, {9, -20}, {1, -12} } },
	[193] = { .set = { {-5, -1}, {-10, -13}, {15, -8}, {-1, -8} } },
	[194] = { .set = { {0, -11}, {-5, -8}, {1, -8}, {-1, -11} } },
	[195] = { .set = { {-4, -11}, {-8, -9}, {-4, -6}, {0, -11} } },
	[196] = { .set = { {-6, -13}, {-8, -12}, {-7, -11}, {2, -10} } },
	[197] = { .set = { {-5, -15}, {-7, -16}, {-9, -14}, {0, -12} } },
	[198] = { .set = { {1, -15}, {6, -16}, {-5, -16}, {1, -10} } },
	[199] = { .set = { {5, -15}, {7, -16}, {9, -14}, {0, -12} } },
	[200] = { .set = { {5, -12}, {7, -11}, {6, -10}, {-3, -9} } },
	[201] = { .set = { {2, -11}, {6, -9}, {2, -6}, {-2, -11} } },
	[202] = { .set = { {-1, -10}, {-12, -8}, {11, -8}, {0, -10} } },
	[203] = { .set = { {-4, -10}, {-13, -10}, {0, -3}, {2, -11} } },
	[204] = { .set = { {-9, -13}, {-3, -19}, {-10, -6}, {1, -11} } },
	[205] = { .set = { {-5, -16}, {1, -16}, {-13, -9}, {2, -12} } },
	[206] = { .set = { {0, -16}, {10, -9}, {-12, -9}, {-1, -13} } },
	[207] = { .set = { {5, -16}, {-1, -16}, {13, -9}, {-2, -12} } },
	[208] = { .set = { {9, -13}, {3, -19}, {10, -6}, {-1, -11} } },
	[209] = { .set = { {4, -10}, {13, -10}, {0, -3}, {-2, -11} } },
};

static const ax_anim *const sScytherAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sScytherAnimTable2[] = {
	AX_ANIM_PTR(sScytherAnims_2_1),
	AX_ANIM_PTR(sScytherAnims_2_2),
	AX_ANIM_PTR(sScytherAnims_2_3),
	AX_ANIM_PTR(sScytherAnims_2_4),
	AX_ANIM_PTR(sScytherAnims_2_5),
	AX_ANIM_PTR(sScytherAnims_2_6),
	AX_ANIM_PTR(sScytherAnims_2_7),
	AX_ANIM_PTR(sScytherAnims_2_8),
};

static const ax_anim *const sScytherAnimTable3[] = {
	AX_ANIM_PTR(sScytherAnims_3_1),
	AX_ANIM_PTR(sScytherAnims_3_2),
	AX_ANIM_PTR(sScytherAnims_3_3),
	AX_ANIM_PTR(sScytherAnims_3_4),
	AX_ANIM_PTR(sScytherAnims_3_5),
	AX_ANIM_PTR(sScytherAnims_3_6),
	AX_ANIM_PTR(sScytherAnims_3_7),
	AX_ANIM_PTR(sScytherAnims_3_8),
};

static const ax_anim *const sScytherAnimTable4[] = {
	AX_ANIM_PTR(sScytherAnims_4_1),
	AX_ANIM_PTR(sScytherAnims_4_2),
	AX_ANIM_PTR(sScytherAnims_4_3),
	AX_ANIM_PTR(sScytherAnims_4_4),
	AX_ANIM_PTR(sScytherAnims_4_5),
	AX_ANIM_PTR(sScytherAnims_4_6),
	AX_ANIM_PTR(sScytherAnims_4_7),
	AX_ANIM_PTR(sScytherAnims_4_8),
};

static const ax_anim *const sScytherAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00249),
	AX_ANIM_PTR(gAxSharedAnim_00309),
	AX_ANIM_PTR(gAxSharedAnim_00301),
	AX_ANIM_PTR(gAxSharedAnim_00294),
	AX_ANIM_PTR(gAxSharedAnim_00285),
	AX_ANIM_PTR(gAxSharedAnim_00276),
	AX_ANIM_PTR(gAxSharedAnim_00270),
	AX_ANIM_PTR(gAxSharedAnim_00258),
};

static const ax_anim *const sScytherAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
	AX_ANIM_PTR(gAxSharedAnim_02362),
};

static const ax_anim *const sScytherAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00332),
	AX_ANIM_PTR(gAxSharedAnim_00342),
	AX_ANIM_PTR(gAxSharedAnim_00350),
	AX_ANIM_PTR(gAxSharedAnim_00358),
	AX_ANIM_PTR(gAxSharedAnim_00370),
	AX_ANIM_PTR(gAxSharedAnim_00378),
	AX_ANIM_PTR(gAxSharedAnim_00385),
	AX_ANIM_PTR(gAxSharedAnim_00392),
};

static const ax_anim *const sScytherAnimTable8[] = {
	AX_ANIM_PTR(sScytherAnims_8_1),
	AX_ANIM_PTR(sScytherAnims_8_2),
	AX_ANIM_PTR(sScytherAnims_8_3),
	AX_ANIM_PTR(sScytherAnims_8_4),
	AX_ANIM_PTR(sScytherAnims_8_5),
	AX_ANIM_PTR(sScytherAnims_8_6),
	AX_ANIM_PTR(sScytherAnims_8_7),
	AX_ANIM_PTR(sScytherAnims_8_8),
};

static const ax_anim *const sScytherAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00609),
	AX_ANIM_PTR(sScytherAnims_9_2),
	AX_ANIM_PTR(sScytherAnims_9_3),
	AX_ANIM_PTR(sScytherAnims_9_4),
	AX_ANIM_PTR(gAxSharedAnim_00648),
	AX_ANIM_PTR(sScytherAnims_9_6),
	AX_ANIM_PTR(sScytherAnims_9_7),
	AX_ANIM_PTR(sScytherAnims_9_8),
};

static const ax_anim *const sScytherAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00705),
	AX_ANIM_PTR(gAxSharedAnim_00714),
	AX_ANIM_PTR(gAxSharedAnim_00725),
	AX_ANIM_PTR(gAxSharedAnim_00737),
	AX_ANIM_PTR(gAxSharedAnim_00750),
	AX_ANIM_PTR(gAxSharedAnim_00760),
	AX_ANIM_PTR(gAxSharedAnim_00772),
	AX_ANIM_PTR(gAxSharedAnim_00781),
};

static const ax_anim *const sScytherAnimTable11[] = {
	AX_ANIM_PTR(sScytherAnims_11_1),
	AX_ANIM_PTR(sScytherAnims_11_2),
	AX_ANIM_PTR(sScytherAnims_11_3),
	AX_ANIM_PTR(sScytherAnims_11_4),
	AX_ANIM_PTR(gAxSharedAnim_00951),
	AX_ANIM_PTR(sScytherAnims_11_6),
	AX_ANIM_PTR(sScytherAnims_11_7),
	AX_ANIM_PTR(sScytherAnims_11_8),
};

static const ax_anim *const sScytherAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01147),
	AX_ANIM_PTR(gAxSharedAnim_01230),
	AX_ANIM_PTR(gAxSharedAnim_01208),
	AX_ANIM_PTR(gAxSharedAnim_01194),
	AX_ANIM_PTR(gAxSharedAnim_01193),
	AX_ANIM_PTR(gAxSharedAnim_01181),
	AX_ANIM_PTR(gAxSharedAnim_01161),
	AX_ANIM_PTR(gAxSharedAnim_01148),
};

static const ax_anim *const sScytherAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01242),
	AX_ANIM_PTR(gAxSharedAnim_01323),
	AX_ANIM_PTR(gAxSharedAnim_01314),
	AX_ANIM_PTR(gAxSharedAnim_01301),
	AX_ANIM_PTR(gAxSharedAnim_01286),
	AX_ANIM_PTR(gAxSharedAnim_01278),
	AX_ANIM_PTR(gAxSharedAnim_01267),
	AX_ANIM_PTR(gAxSharedAnim_01253),
};

static const ax_anim *const *const sAxAnimationsScyther[] = {
	sScytherAnimTable1,
	sScytherAnimTable2,
	sScytherAnimTable3,
	sScytherAnimTable4,
	sScytherAnimTable5,
	sScytherAnimTable6,
	sScytherAnimTable7,
	sScytherAnimTable8,
	sScytherAnimTable9,
	sScytherAnimTable10,
	sScytherAnimTable11,
	sScytherAnimTable12,
	sScytherAnimTable13,
};

static const ax_sprite *const sAxSpritesScyther[] = {
	sScytherSprites1,
	sScytherSprites2,
	sScytherSprites3,
	sScytherSprites4,
	sScytherSprites5,
	sScytherSprites6,
	sScytherSprites7,
	sScytherSprites8,
	sScytherSprites9,
	sScytherSprites10,
	sScytherSprites11,
	sScytherSprites12,
	sScytherSprites13,
	sScytherSprites14,
	sScytherSprites15,
	sScytherSprites16,
	sScytherSprites17,
	sScytherSprites18,
	sScytherSprites19,
	sScytherSprites20,
	sScytherSprites21,
	sScytherSprites22,
	sScytherSprites23,
	sScytherSprites24,
	sScytherSprites25,
	sScytherSprites26,
	sScytherSprites27,
	sScytherSprites28,
	sScytherSprites29,
	sScytherSprites30,
	sScytherSprites31,
	sScytherSprites32,
	sScytherSprites33,
	sScytherSprites34,
	sScytherSprites35,
	sScytherSprites36,
	sScytherSprites37,
	sScytherSprites38,
	sScytherSprites39,
	sScytherSprites40,
	sScytherSprites41,
	sScytherSprites42,
	sScytherSprites43,
	sScytherSprites44,
	sScytherSprites45,
	sScytherSprites46,
	sScytherSprites47,
	sScytherSprites48,
	sScytherSprites49,
};

static const axmain sAxMainScyther = {
	.poses = sAxPosesScyther,
	.animations = sAxAnimationsScyther,
	.animCount = ARRAY_COUNT(sAxAnimationsScyther),
	.spriteData = sAxSpritesScyther,
	.positions = sAxPositionsScyther,
};
