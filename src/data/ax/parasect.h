/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainParasect;
const SiroArchive gAxParasect = {"SIRO", &sAxMainParasect};

static const ax_pose sParasectPose1[] = {
	AX_POSE(0, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose2[] = {
	AX_POSE(1, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose3[] = {
	AX_POSE(2, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose4[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose5[] = {
	AX_POSE(4, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose6[] = {
	AX_POSE(5, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose7[] = {
	AX_POSE(6, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose8[] = {
	AX_POSE(7, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose9[] = {
	AX_POSE(8, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose10[] = {
	AX_POSE(9, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose11[] = {
	AX_POSE(10, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose12[] = {
	AX_POSE(11, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose13[] = {
	AX_POSE(12, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose14[] = {
	AX_POSE(13, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose15[] = {
	AX_POSE(14, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose16[] = {
	AX_POSE(9, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose17[] = {
	AX_POSE(10, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose18[] = {
	AX_POSE(11, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose19[] = {
	AX_POSE(6, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose20[] = {
	AX_POSE(7, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose21[] = {
	AX_POSE(8, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose22[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose23[] = {
	AX_POSE(4, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose24[] = {
	AX_POSE(5, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose26[] = {
	AX_POSE(15, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose27[] = {
	AX_POSE(16, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose28[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose29[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose30[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose31[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose32[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose33[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose34[] = {
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose36[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose46[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose56[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose66[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose76[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose86[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose96[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose108[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose109[] = {
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose110[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose114[] = {
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose115[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose116[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose120[] = {
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose121[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(33, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose122[] = {
	AX_POSE(33, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose126[] = {
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose127[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(36, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose128[] = {
	AX_POSE(36, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose132[] = {
	AX_POSE(37, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose133[] = {
	AX_POSE(38, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(39, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose134[] = {
	AX_POSE(38, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose138[] = {
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose139[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(36, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose140[] = {
	AX_POSE(36, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose144[] = {
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose145[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(33, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose146[] = {
	AX_POSE(33, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose150[] = {
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose151[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose152[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose155[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose158[] = {
	AX_POSE(41, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose161[] = {
	AX_POSE(42, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose164[] = {
	AX_POSE(43, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose167[] = {
	AX_POSE(44, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose170[] = {
	AX_POSE(43, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose173[] = {
	AX_POSE(42, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose176[] = {
	AX_POSE(41, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose185[] = {
	AX_POSE(45, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose186[] = {
	AX_POSE(46, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose187[] = {
	AX_POSE(47, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose188[] = {
	AX_POSE(48, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose189[] = {
	AX_POSE(49, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose190[] = {
	AX_POSE(50, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose191[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose192[] = {
	AX_POSE(50, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose193[] = {
	AX_POSE(49, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose194[] = {
	AX_POSE(48, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose203[] = {
	AX_POSE(40, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose204[] = {
	AX_POSE(41, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose210[] = {
	AX_POSE(41, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose220[] = {
	AX_POSE(40, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose221[] = {
	AX_POSE(15, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose244[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose246[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose247[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose248[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sParasectPose250[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_anim sParasectAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 30, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {0, 13}, .shadow = {0, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 39, .offset = {1, -5}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {13, 10}, .shadow = {13, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 42, .offset = {19, 21}, .shadow = {19, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {19, 21}, .shadow = {19, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {12, 10}, .shadow = {12, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {3, -1}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 48, .offset = {1, -6}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {13, -3}, .shadow = {13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {20, -2}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {20, -1}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {20, -2}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {20, -1}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {20, -2}, .shadow = {20, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {12, -2}, .shadow = {12, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {3, -3}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 57, .offset = {1, -8}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {13, -20}, .shadow = {13, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {20, -25}, .shadow = {20, -25} },
	{ .frames = 2, .unkFlags = 1, .poseId = 60, .offset = {20, -24}, .shadow = {20, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {20, -25}, .shadow = {20, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {20, -24}, .shadow = {20, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {20, -25}, .shadow = {20, -25} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {12, -16}, .shadow = {12, -15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {3, -8}, .shadow = {3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 72, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 66, .offset = {0, -8}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {0, -20}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, -25}, .shadow = {0, -25} },
	{ .frames = 2, .unkFlags = 1, .poseId = 69, .offset = {1, -25}, .shadow = {1, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, -25}, .shadow = {0, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {1, -25}, .shadow = {1, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -25}, .shadow = {0, -25} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, -16}, .shadow = {0, -14} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, -8}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 79, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 80, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 83, .offset = {-1, -8}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {-13, -20}, .shadow = {-13, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-20, -25}, .shadow = {-20, -25} },
	{ .frames = 2, .unkFlags = 1, .poseId = 78, .offset = {-20, -24}, .shadow = {-20, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-20, -25}, .shadow = {-20, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-20, -24}, .shadow = {-20, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-20, -25}, .shadow = {-20, -25} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {-12, -16}, .shadow = {-12, -15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {-3, -8}, .shadow = {-3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 92, .offset = {-1, -6}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {-13, -3}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-20, -2}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {-20, -1}, .shadow = {-20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {-20, -2}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-20, -1}, .shadow = {-20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-20, -2}, .shadow = {-20, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {-12, -2}, .shadow = {-12, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {-3, -3}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 101, .offset = {-1, -5}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {-13, 10}, .shadow = {-13, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 96, .offset = {-19, 21}, .shadow = {-19, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-19, 21}, .shadow = {-19, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {-12, 10}, .shadow = {-12, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {-3, -1}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 6, .unkFlags = 0, .poseId = 107, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 107, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 14}, .shadow = {0, 14} },
	{ .frames = 2, .unkFlags = 1, .poseId = 151, .offset = {0, 17}, .shadow = {0, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {1, 17}, .shadow = {1, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 17}, .shadow = {0, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {1, 17}, .shadow = {1, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 17}, .shadow = {0, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 8}, .shadow = {0, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 3}, .shadow = {0, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 6, .unkFlags = 0, .poseId = 113, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 113, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {14, 14}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 1, .poseId = 121, .offset = {18, 16}, .shadow = {18, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {19, 15}, .shadow = {19, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {18, 16}, .shadow = {18, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {19, 15}, .shadow = {19, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {18, 16}, .shadow = {18, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {8, 8}, .shadow = {8, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {3, 3}, .shadow = {3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 119, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 127, .offset = {15, 0}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {15, 1}, .shadow = {15, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {15, 0}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {15, 1}, .shadow = {15, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {15, 0}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {3, 0}, .shadow = {3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 6, .unkFlags = 0, .poseId = 125, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 125, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {5, -8}, .shadow = {5, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {13, -18}, .shadow = {13, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 133, .offset = {14, -21}, .shadow = {14, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {15, -20}, .shadow = {15, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {14, -21}, .shadow = {14, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {15, -20}, .shadow = {15, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {14, -21}, .shadow = {14, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {7, -10}, .shadow = {7, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {2, -4}, .shadow = {2, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 131, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {0, -8}, .shadow = {0, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, -16}, .shadow = {0, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 127, .offset = {0, -21}, .shadow = {0, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {1, -21}, .shadow = {1, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -21}, .shadow = {0, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {1, -21}, .shadow = {1, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -21}, .shadow = {0, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 137, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {-5, -8}, .shadow = {-5, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-13, -18}, .shadow = {-13, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 133, .offset = {-16, -21}, .shadow = {-16, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {-17, -20}, .shadow = {-17, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {-16, -21}, .shadow = {-16, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {-17, -20}, .shadow = {-17, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {-16, -21}, .shadow = {-16, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {-7, -10}, .shadow = {-7, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {-2, -4}, .shadow = {-2, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 143, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 139, .offset = {-15, 0}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-15, 1}, .shadow = {-15, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-15, 0}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-15, 1}, .shadow = {-15, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-15, 0}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {-3, 0}, .shadow = {-3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 2, .poseId = 149, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {-14, 14}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 1, .poseId = 145, .offset = {-18, 16}, .shadow = {-18, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-19, 15}, .shadow = {-19, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-18, 16}, .shadow = {-18, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-19, 15}, .shadow = {-19, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-18, 16}, .shadow = {-18, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {-8, 8}, .shadow = {-8, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {-3, 3}, .shadow = {-3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 153, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 154, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 156, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 157, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 159, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {-1, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 160, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 162, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 163, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 165, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 166, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 168, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 169, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 171, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 172, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 174, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 175, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_8_1[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 194, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_8_2[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 201, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_8_3[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 200, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_8_4[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 199, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_8_5[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 198, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_8_6[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 197, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 197, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_8_7[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 196, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 196, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_8_8[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 195, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 203, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {7, 16}, .shadow = {7, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 206, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 207, .offset = {-7, 16}, .shadow = {-7, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 208, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 209, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 202, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 202, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 203, .offset = {19, 3}, .shadow = {19, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {23, 10}, .shadow = {23, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 205, .offset = {19, 20}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 206, .offset = {11, 19}, .shadow = {11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 207, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 208, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 209, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 208, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 209, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 203, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 204, .offset = {20, -2}, .shadow = {20, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 205, .offset = {18, 4}, .shadow = {18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 206, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 207, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 208, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 208, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 203, .offset = {20, -21}, .shadow = {20, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 204, .offset = {22, -13}, .shadow = {22, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 206, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 206, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 207, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 208, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {-7, -17}, .shadow = {-7, -17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 202, .offset = {0, -21}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 203, .offset = {7, -17}, .shadow = {7, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 205, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 206, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 204, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 203, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 209, .offset = {-20, -21}, .shadow = {-20, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 208, .offset = {-22, -13}, .shadow = {-22, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 207, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 206, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 205, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 203, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 208, .offset = {-20, -2}, .shadow = {-20, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 207, .offset = {-18, 4}, .shadow = {-18, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 206, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 205, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 203, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 202, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {-19, 3}, .shadow = {-19, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 208, .offset = {-23, 10}, .shadow = {-23, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 207, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 206, .offset = {-11, 19}, .shadow = {-11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 204, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 203, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 219, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 219, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 220, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 220, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 220, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 221, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 222, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 222, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 222, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 223, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 223, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 223, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 223, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 221, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 225, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 225, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 226, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 226, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 226, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 226, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 227, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 228, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 228, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 228, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 228, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 229, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 229, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 229, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 229, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 227, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 230, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 231, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 231, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 231, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 231, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 232, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 232, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 232, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 232, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 230, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 233, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 234, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 234, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 234, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 235, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 235, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 235, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 233, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 236, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 237, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 237, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 237, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 237, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 238, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 238, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 238, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 238, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 236, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sParasectAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 239, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 240, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 240, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 240, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 241, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 241, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 241, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 239, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sParasectGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_1.4bpp.lz");
static const ax_sprite sParasectSprites1[] = {
	{sParasectGfx1, ARRAY_COUNT(sParasectGfx1)}, 
	{NULL, 0}
};
static const u8 sParasectGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_2.4bpp.lz");
static const ax_sprite sParasectSprites2[] = {
	{sParasectGfx2, ARRAY_COUNT(sParasectGfx2)}, 
	{NULL, 0}
};
static const u8 sParasectGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_3.4bpp.lz");
static const ax_sprite sParasectSprites3[] = {
	{sParasectGfx3, ARRAY_COUNT(sParasectGfx3)}, 
	{NULL, 0}
};
static const u8 sParasectGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_4.4bpp.lz");
static const ax_sprite sParasectSprites4[] = {
	{sParasectGfx4, ARRAY_COUNT(sParasectGfx4)}, 
	{NULL, 0}
};
static const u8 sParasectGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_5.4bpp.lz");
static const ax_sprite sParasectSprites5[] = {
	{sParasectGfx5, ARRAY_COUNT(sParasectGfx5)}, 
	{NULL, 0}
};
static const u8 sParasectGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_6.4bpp.lz");
static const ax_sprite sParasectSprites6[] = {
	{sParasectGfx6, ARRAY_COUNT(sParasectGfx6)}, 
	{NULL, 0}
};
static const u8 sParasectGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_7.4bpp.lz");
static const ax_sprite sParasectSprites7[] = {
	{sParasectGfx7, ARRAY_COUNT(sParasectGfx7)}, 
	{NULL, 0}
};
static const u8 sParasectGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_8.4bpp.lz");
static const ax_sprite sParasectSprites8[] = {
	{sParasectGfx8, ARRAY_COUNT(sParasectGfx8)}, 
	{NULL, 0}
};
static const u8 sParasectGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_9.4bpp.lz");
static const ax_sprite sParasectSprites9[] = {
	{sParasectGfx9, ARRAY_COUNT(sParasectGfx9)}, 
	{NULL, 0}
};
static const u8 sParasectGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_10.4bpp.lz");
static const ax_sprite sParasectSprites10[] = {
	{sParasectGfx10, ARRAY_COUNT(sParasectGfx10)}, 
	{NULL, 0}
};
static const u8 sParasectGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_11.4bpp.lz");
static const ax_sprite sParasectSprites11[] = {
	{sParasectGfx11, ARRAY_COUNT(sParasectGfx11)}, 
	{NULL, 0}
};
static const u8 sParasectGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_12.4bpp.lz");
static const ax_sprite sParasectSprites12[] = {
	{sParasectGfx12, ARRAY_COUNT(sParasectGfx12)}, 
	{NULL, 0}
};
static const u8 sParasectGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_13.4bpp.lz");
static const ax_sprite sParasectSprites13[] = {
	{sParasectGfx13, ARRAY_COUNT(sParasectGfx13)}, 
	{NULL, 0}
};
static const u8 sParasectGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_14.4bpp.lz");
static const ax_sprite sParasectSprites14[] = {
	{sParasectGfx14, ARRAY_COUNT(sParasectGfx14)}, 
	{NULL, 0}
};
static const u8 sParasectGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_15.4bpp.lz");
static const ax_sprite sParasectSprites15[] = {
	{sParasectGfx15, ARRAY_COUNT(sParasectGfx15)}, 
	{NULL, 0}
};
static const u8 sParasectGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_16.4bpp.lz");
static const u8 sParasectGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_16_1.4bpp.lz");
static const u8 sParasectGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_16_2.4bpp.lz");
static const ax_sprite sParasectSprites16[] = {
	{NULL, 32}, 
	{sParasectGfx16, ARRAY_COUNT(sParasectGfx16)}, 
	{NULL, 32}, 
	{sParasectGfx16_1, ARRAY_COUNT(sParasectGfx16_1)}, 
	{NULL, 32}, 
	{sParasectGfx16_2, ARRAY_COUNT(sParasectGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasectGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_17.4bpp.lz");
static const ax_sprite sParasectSprites17[] = {
	{NULL, 128}, 
	{sParasectGfx17, ARRAY_COUNT(sParasectGfx17)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sParasectGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_18.4bpp.lz");
static const u8 sParasectGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_18_1.4bpp.lz");
static const ax_sprite sParasectSprites18[] = {
	{NULL, 128}, 
	{sParasectGfx18, ARRAY_COUNT(sParasectGfx18)}, 
	{NULL, 32}, 
	{sParasectGfx18_1, ARRAY_COUNT(sParasectGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasectGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_19.4bpp.lz");
static const u8 sParasectGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_19_1.4bpp.lz");
static const ax_sprite sParasectSprites19[] = {
	{NULL, 128}, 
	{sParasectGfx19, ARRAY_COUNT(sParasectGfx19)}, 
	{NULL, 32}, 
	{sParasectGfx19_1, ARRAY_COUNT(sParasectGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasectGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_20.4bpp.lz");
static const u8 sParasectGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_20_1.4bpp.lz");
static const ax_sprite sParasectSprites20[] = {
	{NULL, 128}, 
	{sParasectGfx20, ARRAY_COUNT(sParasectGfx20)}, 
	{NULL, 32}, 
	{sParasectGfx20_1, ARRAY_COUNT(sParasectGfx20_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sParasectGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_21.4bpp.lz");
static const ax_sprite sParasectSprites21[] = {
	{NULL, 128}, 
	{sParasectGfx21, ARRAY_COUNT(sParasectGfx21)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sParasectGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_22.4bpp.lz");
static const u8 sParasectGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_22_1.4bpp.lz");
static const ax_sprite sParasectSprites22[] = {
	{NULL, 32}, 
	{sParasectGfx22, ARRAY_COUNT(sParasectGfx22)}, 
	{NULL, 64}, 
	{sParasectGfx22_1, ARRAY_COUNT(sParasectGfx22_1)}, 
	{NULL, 0}
};
static const u8 sParasectGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_23.4bpp.lz");
static const u8 sParasectGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_23_1.4bpp.lz");
static const u8 sParasectGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_23_2.4bpp.lz");
static const ax_sprite sParasectSprites23[] = {
	{NULL, 32}, 
	{sParasectGfx23, ARRAY_COUNT(sParasectGfx23)}, 
	{NULL, 64}, 
	{sParasectGfx23_1, ARRAY_COUNT(sParasectGfx23_1)}, 
	{NULL, 32}, 
	{sParasectGfx23_2, ARRAY_COUNT(sParasectGfx23_2)}, 
	{NULL, 0}
};
static const u8 sParasectGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_24.4bpp.lz");
static const u8 sParasectGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_24_1.4bpp.lz");
static const u8 sParasectGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_24_2.4bpp.lz");
static const ax_sprite sParasectSprites24[] = {
	{NULL, 32}, 
	{sParasectGfx24, ARRAY_COUNT(sParasectGfx24)}, 
	{NULL, 64}, 
	{sParasectGfx24_1, ARRAY_COUNT(sParasectGfx24_1)}, 
	{NULL, 32}, 
	{sParasectGfx24_2, ARRAY_COUNT(sParasectGfx24_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sParasectGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_25.4bpp.lz");
static const u8 sParasectGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_25_1.4bpp.lz");
static const ax_sprite sParasectSprites25[] = {
	{NULL, 32}, 
	{sParasectGfx25, ARRAY_COUNT(sParasectGfx25)}, 
	{NULL, 32}, 
	{sParasectGfx25_1, ARRAY_COUNT(sParasectGfx25_1)}, 
	{NULL, 0}
};
static const u8 sParasectGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_26.4bpp.lz");
static const ax_sprite sParasectSprites26[] = {
	{NULL, 32}, 
	{sParasectGfx26, ARRAY_COUNT(sParasectGfx26)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sParasectGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_27.4bpp.lz");
static const u8 sParasectGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_27_1.4bpp.lz");
static const u8 sParasectGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_27_2.4bpp.lz");
static const u8 sParasectGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_27_3.4bpp.lz");
static const ax_sprite sParasectSprites27[] = {
	{NULL, 96}, 
	{sParasectGfx27, ARRAY_COUNT(sParasectGfx27)}, 
	{NULL, 64}, 
	{sParasectGfx27_1, ARRAY_COUNT(sParasectGfx27_1)}, 
	{NULL, 64}, 
	{sParasectGfx27_2, ARRAY_COUNT(sParasectGfx27_2)}, 
	{NULL, 32}, 
	{sParasectGfx27_3, ARRAY_COUNT(sParasectGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasectGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_28.4bpp.lz");
static const u8 sParasectGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_28_1.4bpp.lz");
static const ax_sprite sParasectSprites28[] = {
	{NULL, 32}, 
	{sParasectGfx28, ARRAY_COUNT(sParasectGfx28)}, 
	{NULL, 32}, 
	{sParasectGfx28_1, ARRAY_COUNT(sParasectGfx28_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasectGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_29.4bpp.lz");
static const u8 sParasectGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_29_1.4bpp.lz");
static const u8 sParasectGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_29_2.4bpp.lz");
static const ax_sprite sParasectSprites29[] = {
	{NULL, 32}, 
	{sParasectGfx29, ARRAY_COUNT(sParasectGfx29)}, 
	{NULL, 32}, 
	{sParasectGfx29_1, ARRAY_COUNT(sParasectGfx29_1)}, 
	{NULL, 64}, 
	{sParasectGfx29_2, ARRAY_COUNT(sParasectGfx29_2)}, 
	{NULL, 0}
};
static const u8 sParasectGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_30.4bpp.lz");
static const u8 sParasectGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_30_1.4bpp.lz");
static const u8 sParasectGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_30_2.4bpp.lz");
static const u8 sParasectGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_30_3.4bpp.lz");
static const ax_sprite sParasectSprites30[] = {
	{NULL, 64}, 
	{sParasectGfx30, ARRAY_COUNT(sParasectGfx30)}, 
	{NULL, 64}, 
	{sParasectGfx30_1, ARRAY_COUNT(sParasectGfx30_1)}, 
	{NULL, 32}, 
	{sParasectGfx30_2, ARRAY_COUNT(sParasectGfx30_2)}, 
	{NULL, 32}, 
	{sParasectGfx30_3, ARRAY_COUNT(sParasectGfx30_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sParasectGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_31.4bpp.lz");
static const u8 sParasectGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_31_1.4bpp.lz");
static const ax_sprite sParasectSprites31[] = {
	{NULL, 32}, 
	{sParasectGfx31, ARRAY_COUNT(sParasectGfx31)}, 
	{NULL, 32}, 
	{sParasectGfx31_1, ARRAY_COUNT(sParasectGfx31_1)}, 
	{NULL, 0}
};
static const u8 sParasectGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_32.4bpp.lz");
static const u8 sParasectGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_32_1.4bpp.lz");
static const u8 sParasectGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_32_2.4bpp.lz");
static const ax_sprite sParasectSprites32[] = {
	{NULL, 32}, 
	{sParasectGfx32, ARRAY_COUNT(sParasectGfx32)}, 
	{NULL, 64}, 
	{sParasectGfx32_1, ARRAY_COUNT(sParasectGfx32_1)}, 
	{NULL, 64}, 
	{sParasectGfx32_2, ARRAY_COUNT(sParasectGfx32_2)}, 
	{NULL, 0}
};
static const u8 sParasectGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_33.4bpp.lz");
static const u8 sParasectGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_33_1.4bpp.lz");
static const u8 sParasectGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_33_2.4bpp.lz");
static const u8 sParasectGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_33_3.4bpp.lz");
static const ax_sprite sParasectSprites33[] = {
	{NULL, 32}, 
	{sParasectGfx33, ARRAY_COUNT(sParasectGfx33)}, 
	{NULL, 32}, 
	{sParasectGfx33_1, ARRAY_COUNT(sParasectGfx33_1)}, 
	{NULL, 32}, 
	{sParasectGfx33_2, ARRAY_COUNT(sParasectGfx33_2)}, 
	{NULL, 96}, 
	{sParasectGfx33_3, ARRAY_COUNT(sParasectGfx33_3)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sParasectGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_34.4bpp.lz");
static const u8 sParasectGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_34_1.4bpp.lz");
static const ax_sprite sParasectSprites34[] = {
	{NULL, 32}, 
	{sParasectGfx34, ARRAY_COUNT(sParasectGfx34)}, 
	{NULL, 64}, 
	{sParasectGfx34_1, ARRAY_COUNT(sParasectGfx34_1)}, 
	{NULL, 0}
};
static const u8 sParasectGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_35.4bpp.lz");
static const u8 sParasectGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_35_1.4bpp.lz");
static const u8 sParasectGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_35_2.4bpp.lz");
static const ax_sprite sParasectSprites35[] = {
	{sParasectGfx35, ARRAY_COUNT(sParasectGfx35)}, 
	{NULL, 32}, 
	{sParasectGfx35_1, ARRAY_COUNT(sParasectGfx35_1)}, 
	{NULL, 32}, 
	{sParasectGfx35_2, ARRAY_COUNT(sParasectGfx35_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sParasectGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_36.4bpp.lz");
static const u8 sParasectGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_36_1.4bpp.lz");
static const u8 sParasectGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_36_2.4bpp.lz");
static const ax_sprite sParasectSprites36[] = {
	{sParasectGfx36, ARRAY_COUNT(sParasectGfx36)}, 
	{NULL, 64}, 
	{sParasectGfx36_1, ARRAY_COUNT(sParasectGfx36_1)}, 
	{NULL, 64}, 
	{sParasectGfx36_2, ARRAY_COUNT(sParasectGfx36_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sParasectGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_37.4bpp.lz");
static const u8 sParasectGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_37_1.4bpp.lz");
static const u8 sParasectGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_37_2.4bpp.lz");
static const ax_sprite sParasectSprites37[] = {
	{NULL, 32}, 
	{sParasectGfx37, ARRAY_COUNT(sParasectGfx37)}, 
	{NULL, 32}, 
	{sParasectGfx37_1, ARRAY_COUNT(sParasectGfx37_1)}, 
	{NULL, 32}, 
	{sParasectGfx37_2, ARRAY_COUNT(sParasectGfx37_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sParasectGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_38.4bpp.lz");
static const u8 sParasectGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_38_1.4bpp.lz");
static const ax_sprite sParasectSprites38[] = {
	{sParasectGfx38, ARRAY_COUNT(sParasectGfx38)}, 
	{NULL, 32}, 
	{sParasectGfx38_1, ARRAY_COUNT(sParasectGfx38_1)}, 
	{NULL, 0}
};
static const u8 sParasectGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_39.4bpp.lz");
static const u8 sParasectGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_39_1.4bpp.lz");
static const ax_sprite sParasectSprites39[] = {
	{NULL, 32}, 
	{sParasectGfx39, ARRAY_COUNT(sParasectGfx39)}, 
	{NULL, 32}, 
	{sParasectGfx39_1, ARRAY_COUNT(sParasectGfx39_1)}, 
	{NULL, 0}
};
static const u8 sParasectGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_40.4bpp.lz");
static const u8 sParasectGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_40_1.4bpp.lz");
static const u8 sParasectGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_40_2.4bpp.lz");
static const ax_sprite sParasectSprites40[] = {
	{sParasectGfx40, ARRAY_COUNT(sParasectGfx40)}, 
	{NULL, 64}, 
	{sParasectGfx40_1, ARRAY_COUNT(sParasectGfx40_1)}, 
	{NULL, 32}, 
	{sParasectGfx40_2, ARRAY_COUNT(sParasectGfx40_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sParasectGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_41.4bpp.lz");
static const ax_sprite sParasectSprites41[] = {
	{sParasectGfx41, ARRAY_COUNT(sParasectGfx41)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sParasectGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_42.4bpp.lz");
static const u8 sParasectGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_42_1.4bpp.lz");
static const ax_sprite sParasectSprites42[] = {
	{sParasectGfx42, ARRAY_COUNT(sParasectGfx42)}, 
	{NULL, 64}, 
	{sParasectGfx42_1, ARRAY_COUNT(sParasectGfx42_1)}, 
	{NULL, 0}
};
static const u8 sParasectGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_43.4bpp.lz");
static const u8 sParasectGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_43_1.4bpp.lz");
static const u8 sParasectGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_43_2.4bpp.lz");
static const ax_sprite sParasectSprites43[] = {
	{NULL, 32}, 
	{sParasectGfx43, ARRAY_COUNT(sParasectGfx43)}, 
	{NULL, 32}, 
	{sParasectGfx43_1, ARRAY_COUNT(sParasectGfx43_1)}, 
	{NULL, 64}, 
	{sParasectGfx43_2, ARRAY_COUNT(sParasectGfx43_2)}, 
	{NULL, 0}
};
static const u8 sParasectGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_44.4bpp.lz");
static const u8 sParasectGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_44_1.4bpp.lz");
static const u8 sParasectGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_44_2.4bpp.lz");
static const u8 sParasectGfx44_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_44_3.4bpp.lz");
static const ax_sprite sParasectSprites44[] = {
	{sParasectGfx44, ARRAY_COUNT(sParasectGfx44)}, 
	{NULL, 32}, 
	{sParasectGfx44_1, ARRAY_COUNT(sParasectGfx44_1)}, 
	{NULL, 32}, 
	{sParasectGfx44_2, ARRAY_COUNT(sParasectGfx44_2)}, 
	{NULL, 32}, 
	{sParasectGfx44_3, ARRAY_COUNT(sParasectGfx44_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sParasectGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_45.4bpp.lz");
static const ax_sprite sParasectSprites45[] = {
	{sParasectGfx45, ARRAY_COUNT(sParasectGfx45)}, 
	{NULL, 0}
};
static const u8 sParasectGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_46.4bpp.lz");
static const ax_sprite sParasectSprites46[] = {
	{sParasectGfx46, ARRAY_COUNT(sParasectGfx46)}, 
	{NULL, 0}
};
static const u8 sParasectGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_47.4bpp.lz");
static const ax_sprite sParasectSprites47[] = {
	{sParasectGfx47, ARRAY_COUNT(sParasectGfx47)}, 
	{NULL, 0}
};
static const u8 sParasectGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_48.4bpp.lz");
static const ax_sprite sParasectSprites48[] = {
	{sParasectGfx48, ARRAY_COUNT(sParasectGfx48)}, 
	{NULL, 0}
};
static const u8 sParasectGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_49.4bpp.lz");
static const ax_sprite sParasectSprites49[] = {
	{sParasectGfx49, ARRAY_COUNT(sParasectGfx49)}, 
	{NULL, 0}
};
static const u8 sParasectGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_50.4bpp.lz");
static const ax_sprite sParasectSprites50[] = {
	{sParasectGfx50, ARRAY_COUNT(sParasectGfx50)}, 
	{NULL, 0}
};
static const u8 sParasectGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_51.4bpp.lz");
static const ax_sprite sParasectSprites51[] = {
	{sParasectGfx51, ARRAY_COUNT(sParasectGfx51)}, 
	{NULL, 0}
};
static const u8 sParasectGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/parasect/sprite_52.4bpp.lz");
static const ax_sprite sParasectSprites52[] = {
	{sParasectGfx52, ARRAY_COUNT(sParasectGfx52)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesParasect[] = {
	sParasectPose1,
	sParasectPose2,
	sParasectPose3,
	sParasectPose4,
	sParasectPose5,
	sParasectPose6,
	sParasectPose7,
	sParasectPose8,
	sParasectPose9,
	sParasectPose10,
	sParasectPose11,
	sParasectPose12,
	sParasectPose13,
	sParasectPose14,
	sParasectPose15,
	sParasectPose16,
	sParasectPose17,
	sParasectPose18,
	sParasectPose19,
	sParasectPose20,
	sParasectPose21,
	sParasectPose22,
	sParasectPose23,
	sParasectPose24,
	sParasectPose1,
	sParasectPose26,
	sParasectPose27,
	sParasectPose28,
	sParasectPose29,
	sParasectPose30,
	sParasectPose31,
	sParasectPose32,
	sParasectPose33,
	sParasectPose34,
	sParasectPose4,
	sParasectPose36,
	sParasectPose27,
	sParasectPose28,
	sParasectPose29,
	sParasectPose30,
	sParasectPose31,
	sParasectPose32,
	sParasectPose33,
	sParasectPose34,
	sParasectPose7,
	sParasectPose46,
	sParasectPose27,
	sParasectPose28,
	sParasectPose29,
	sParasectPose30,
	sParasectPose31,
	sParasectPose32,
	sParasectPose33,
	sParasectPose34,
	sParasectPose10,
	sParasectPose56,
	sParasectPose27,
	sParasectPose28,
	sParasectPose29,
	sParasectPose30,
	sParasectPose31,
	sParasectPose32,
	sParasectPose33,
	sParasectPose34,
	sParasectPose13,
	sParasectPose66,
	sParasectPose27,
	sParasectPose28,
	sParasectPose29,
	sParasectPose30,
	sParasectPose31,
	sParasectPose32,
	sParasectPose33,
	sParasectPose34,
	sParasectPose16,
	sParasectPose76,
	sParasectPose27,
	sParasectPose28,
	sParasectPose29,
	sParasectPose30,
	sParasectPose31,
	sParasectPose32,
	sParasectPose33,
	sParasectPose34,
	sParasectPose19,
	sParasectPose86,
	sParasectPose27,
	sParasectPose28,
	sParasectPose29,
	sParasectPose30,
	sParasectPose31,
	sParasectPose32,
	sParasectPose33,
	sParasectPose34,
	sParasectPose22,
	sParasectPose96,
	sParasectPose27,
	sParasectPose28,
	sParasectPose29,
	sParasectPose30,
	sParasectPose31,
	sParasectPose32,
	sParasectPose33,
	sParasectPose34,
	sParasectPose1,
	sParasectPose2,
	sParasectPose3,
	sParasectPose108,
	sParasectPose109,
	sParasectPose110,
	sParasectPose4,
	sParasectPose5,
	sParasectPose6,
	sParasectPose114,
	sParasectPose115,
	sParasectPose116,
	sParasectPose7,
	sParasectPose8,
	sParasectPose9,
	sParasectPose120,
	sParasectPose121,
	sParasectPose122,
	sParasectPose10,
	sParasectPose11,
	sParasectPose12,
	sParasectPose126,
	sParasectPose127,
	sParasectPose128,
	sParasectPose13,
	sParasectPose14,
	sParasectPose15,
	sParasectPose132,
	sParasectPose133,
	sParasectPose134,
	sParasectPose16,
	sParasectPose17,
	sParasectPose18,
	sParasectPose138,
	sParasectPose139,
	sParasectPose140,
	sParasectPose19,
	sParasectPose20,
	sParasectPose21,
	sParasectPose144,
	sParasectPose145,
	sParasectPose146,
	sParasectPose22,
	sParasectPose23,
	sParasectPose24,
	sParasectPose150,
	sParasectPose151,
	sParasectPose152,
	sParasectPose1,
	sParasectPose26,
	sParasectPose155,
	sParasectPose4,
	sParasectPose36,
	sParasectPose158,
	sParasectPose7,
	sParasectPose46,
	sParasectPose161,
	sParasectPose10,
	sParasectPose56,
	sParasectPose164,
	sParasectPose13,
	sParasectPose66,
	sParasectPose167,
	sParasectPose16,
	sParasectPose76,
	sParasectPose170,
	sParasectPose19,
	sParasectPose86,
	sParasectPose173,
	sParasectPose22,
	sParasectPose96,
	sParasectPose176,
	sParasectPose1,
	sParasectPose22,
	sParasectPose19,
	sParasectPose16,
	sParasectPose13,
	sParasectPose10,
	sParasectPose7,
	sParasectPose4,
	sParasectPose185,
	sParasectPose186,
	sParasectPose187,
	sParasectPose188,
	sParasectPose189,
	sParasectPose190,
	sParasectPose191,
	sParasectPose192,
	sParasectPose193,
	sParasectPose194,
	sParasectPose1,
	sParasectPose22,
	sParasectPose19,
	sParasectPose16,
	sParasectPose13,
	sParasectPose10,
	sParasectPose7,
	sParasectPose4,
	sParasectPose203,
	sParasectPose204,
	sParasectPose173,
	sParasectPose170,
	sParasectPose167,
	sParasectPose164,
	sParasectPose161,
	sParasectPose210,
	sParasectPose203,
	sParasectPose210,
	sParasectPose161,
	sParasectPose164,
	sParasectPose167,
	sParasectPose170,
	sParasectPose173,
	sParasectPose204,
	sParasectPose1,
	sParasectPose220,
	sParasectPose221,
	sParasectPose4,
	sParasectPose158,
	sParasectPose36,
	sParasectPose7,
	sParasectPose161,
	sParasectPose46,
	sParasectPose10,
	sParasectPose164,
	sParasectPose56,
	sParasectPose13,
	sParasectPose167,
	sParasectPose66,
	sParasectPose16,
	sParasectPose170,
	sParasectPose76,
	sParasectPose19,
	sParasectPose173,
	sParasectPose86,
	sParasectPose22,
	sParasectPose176,
	sParasectPose96,
	sParasectPose221,
	sParasectPose244,
	sParasectPose86,
	sParasectPose246,
	sParasectPose247,
	sParasectPose248,
	sParasectPose46,
	sParasectPose250,
	sParasectPose1,
	sParasectPose22,
	sParasectPose19,
	sParasectPose16,
	sParasectPose13,
	sParasectPose10,
	sParasectPose7,
	sParasectPose4,
};

static const struct PositionSets sAxPositionsParasect[] = {
	[0] = { .set = { {0, -2}, {-6, 2}, {5, 2}, {-1, -9} } },
	[1] = { .set = { {1, -1}, {-5, 5}, {6, 2}, {0, -8} } },
	[2] = { .set = { {-1, -1}, {-7, 2}, {4, 5}, {-1, -8} } },
	[3] = { .set = { {5, -2}, {10, -2}, {1, 3}, {0, -9} } },
	[4] = { .set = { {4, -1}, {11, 0}, {0, 4}, {0, -8} } },
	[5] = { .set = { {6, -2}, {10, -3}, {3, 5}, {-1, -8} } },
	[6] = { .set = { {9, -3}, {8, -2}, {8, 2}, {0, -9} } },
	[7] = { .set = { {8, -1}, {12, -1}, {7, 3}, {-1, -8} } },
	[8] = { .set = { {9, -3}, {6, -1}, {11, 3}, {0, -8} } },
	[9] = { .set = { {5, -7}, {1, -5}, {10, -2}, {-1, -9} } },
	[10] = { .set = { {5, -6}, {1, -5}, {10, -1}, {-1, -8} } },
	[11] = { .set = { {4, -8}, {0, -4}, {12, -3}, {-1, -8} } },
	[12] = { .set = { {-1, -10}, {6, -11}, {-7, -11}, {-1, -9} } },
	[13] = { .set = { {-1, -9}, {5, -8}, {-8, -12}, {0, -8} } },
	[14] = { .set = { {0, -9}, {7, -12}, {-7, -8}, {-1, -8} } },
	[15] = { .set = { {-6, -7}, {-2, -5}, {-11, -2}, {0, -9} } },
	[16] = { .set = { {-6, -6}, {-2, -5}, {-11, -1}, {0, -8} } },
	[17] = { .set = { {-5, -8}, {-1, -4}, {-13, -3}, {0, -8} } },
	[18] = { .set = { {-10, -3}, {-9, -2}, {-9, 2}, {-1, -9} } },
	[19] = { .set = { {-9, -1}, {-13, -1}, {-8, 3}, {0, -8} } },
	[20] = { .set = { {-10, -3}, {-7, -1}, {-12, 3}, {-1, -8} } },
	[21] = { .set = { {-6, -2}, {-11, -2}, {-2, 3}, {-1, -9} } },
	[22] = { .set = { {-5, -1}, {-12, 0}, {-1, 4}, {-1, -8} } },
	[23] = { .set = { {-7, -2}, {-11, -3}, {-4, 5}, {0, -8} } },
	[24] = { .set = { {0, -2}, {-6, 2}, {5, 2}, {-1, -9} } },
	[25] = { .set = { {0, -2}, {1, 0}, {-3, -1}, {0, -8} } },
	[26] = { .set = { {0, -2}, {-5, -2}, {5, -2}, {0, -8} } },
	[27] = { .set = { {-7, -3}, {-10, -4}, {-5, -2}, {0, -8} } },
	[28] = { .set = { {-11, -4}, {-11, -7}, {-11, -5}, {1, -8} } },
	[29] = { .set = { {-5, -8}, {-3, -9}, {-8, -8}, {1, -8} } },
	[30] = { .set = { {0, -7}, {3, -9}, {-3, -9}, {0, -8} } },
	[31] = { .set = { {4, -8}, {2, -9}, {7, -8}, {-2, -8} } },
	[32] = { .set = { {10, -4}, {10, -7}, {10, -5}, {-2, -8} } },
	[33] = { .set = { {6, -3}, {9, -4}, {4, -2}, {-1, -8} } },
	[34] = { .set = { {5, -2}, {10, -2}, {1, 3}, {0, -9} } },
	[35] = { .set = { {5, -2}, {5, -1}, {7, -2}, {0, -8} } },
	[36] = { .set = { {0, -2}, {-5, -2}, {5, -2}, {0, -8} } },
	[37] = { .set = { {-7, -3}, {-10, -4}, {-5, -2}, {0, -8} } },
	[38] = { .set = { {-11, -4}, {-11, -7}, {-11, -5}, {1, -8} } },
	[39] = { .set = { {-5, -8}, {-3, -9}, {-8, -8}, {1, -8} } },
	[40] = { .set = { {0, -7}, {3, -9}, {-3, -9}, {0, -8} } },
	[41] = { .set = { {4, -8}, {2, -9}, {7, -8}, {-2, -8} } },
	[42] = { .set = { {10, -4}, {10, -7}, {10, -5}, {-2, -8} } },
	[43] = { .set = { {6, -3}, {9, -4}, {4, -2}, {-1, -8} } },
	[44] = { .set = { {9, -3}, {8, -2}, {8, 2}, {0, -9} } },
	[45] = { .set = { {8, -2}, {8, -1}, {9, -4}, {1, -8} } },
	[46] = { .set = { {0, -2}, {-5, -2}, {5, -2}, {0, -8} } },
	[47] = { .set = { {-7, -3}, {-10, -4}, {-5, -2}, {0, -8} } },
	[48] = { .set = { {-11, -4}, {-11, -7}, {-11, -5}, {1, -8} } },
	[49] = { .set = { {-5, -8}, {-3, -9}, {-8, -8}, {1, -8} } },
	[50] = { .set = { {0, -7}, {3, -9}, {-3, -9}, {0, -8} } },
	[51] = { .set = { {4, -8}, {2, -9}, {7, -8}, {-2, -8} } },
	[52] = { .set = { {10, -4}, {10, -7}, {10, -5}, {-2, -8} } },
	[53] = { .set = { {6, -3}, {9, -4}, {4, -2}, {-1, -8} } },
	[54] = { .set = { {5, -7}, {1, -5}, {10, -2}, {-1, -9} } },
	[55] = { .set = { {2, -6}, {4, -6}, {0, -7}, {-1, -9} } },
	[56] = { .set = { {0, -2}, {-5, -2}, {5, -2}, {0, -8} } },
	[57] = { .set = { {-7, -3}, {-10, -4}, {-5, -2}, {0, -8} } },
	[58] = { .set = { {-11, -4}, {-11, -7}, {-11, -5}, {1, -8} } },
	[59] = { .set = { {-5, -8}, {-3, -9}, {-8, -8}, {1, -8} } },
	[60] = { .set = { {0, -7}, {3, -9}, {-3, -9}, {0, -8} } },
	[61] = { .set = { {4, -8}, {2, -9}, {7, -8}, {-2, -8} } },
	[62] = { .set = { {10, -4}, {10, -7}, {10, -5}, {-2, -8} } },
	[63] = { .set = { {6, -3}, {9, -4}, {4, -2}, {-1, -8} } },
	[64] = { .set = { {-1, -10}, {6, -11}, {-7, -11}, {-1, -9} } },
	[65] = { .set = { {-1, -6}, {-4, -6}, {1, -6}, {0, -10} } },
	[66] = { .set = { {0, -2}, {-5, -2}, {5, -2}, {0, -8} } },
	[67] = { .set = { {-7, -3}, {-10, -4}, {-5, -2}, {0, -8} } },
	[68] = { .set = { {-11, -4}, {-11, -7}, {-11, -5}, {1, -8} } },
	[69] = { .set = { {-5, -8}, {-3, -9}, {-8, -8}, {1, -8} } },
	[70] = { .set = { {0, -7}, {3, -9}, {-3, -9}, {0, -8} } },
	[71] = { .set = { {4, -8}, {2, -9}, {7, -8}, {-2, -8} } },
	[72] = { .set = { {10, -4}, {10, -7}, {10, -5}, {-2, -8} } },
	[73] = { .set = { {6, -3}, {9, -4}, {4, -2}, {-1, -8} } },
	[74] = { .set = { {-6, -7}, {-2, -5}, {-11, -2}, {0, -9} } },
	[75] = { .set = { {-3, -6}, {-5, -6}, {-1, -7}, {0, -9} } },
	[76] = { .set = { {0, -2}, {-5, -2}, {5, -2}, {0, -8} } },
	[77] = { .set = { {-7, -3}, {-10, -4}, {-5, -2}, {0, -8} } },
	[78] = { .set = { {-11, -4}, {-11, -7}, {-11, -5}, {1, -8} } },
	[79] = { .set = { {-5, -8}, {-3, -9}, {-8, -8}, {1, -8} } },
	[80] = { .set = { {0, -7}, {3, -9}, {-3, -9}, {0, -8} } },
	[81] = { .set = { {4, -8}, {2, -9}, {7, -8}, {-2, -8} } },
	[82] = { .set = { {10, -4}, {10, -7}, {10, -5}, {-2, -8} } },
	[83] = { .set = { {6, -3}, {9, -4}, {4, -2}, {-1, -8} } },
	[84] = { .set = { {-10, -3}, {-9, -2}, {-9, 2}, {-1, -9} } },
	[85] = { .set = { {-9, -2}, {-9, -1}, {-10, -4}, {-2, -8} } },
	[86] = { .set = { {0, -2}, {-5, -2}, {5, -2}, {0, -8} } },
	[87] = { .set = { {-7, -3}, {-10, -4}, {-5, -2}, {0, -8} } },
	[88] = { .set = { {-11, -4}, {-11, -7}, {-11, -5}, {1, -8} } },
	[89] = { .set = { {-5, -8}, {-3, -9}, {-8, -8}, {1, -8} } },
	[90] = { .set = { {0, -7}, {3, -9}, {-3, -9}, {0, -8} } },
	[91] = { .set = { {4, -8}, {2, -9}, {7, -8}, {-2, -8} } },
	[92] = { .set = { {10, -4}, {10, -7}, {10, -5}, {-2, -8} } },
	[93] = { .set = { {6, -3}, {9, -4}, {4, -2}, {-1, -8} } },
	[94] = { .set = { {-6, -2}, {-11, -2}, {-2, 3}, {-1, -9} } },
	[95] = { .set = { {-6, -2}, {-6, -1}, {-8, -2}, {-1, -8} } },
	[96] = { .set = { {0, -2}, {-5, -2}, {5, -2}, {0, -8} } },
	[97] = { .set = { {-7, -3}, {-10, -4}, {-5, -2}, {0, -8} } },
	[98] = { .set = { {-11, -4}, {-11, -7}, {-11, -5}, {1, -8} } },
	[99] = { .set = { {-5, -8}, {-3, -9}, {-8, -8}, {1, -8} } },
	[100] = { .set = { {0, -7}, {3, -9}, {-3, -9}, {0, -8} } },
	[101] = { .set = { {4, -8}, {2, -9}, {7, -8}, {-2, -8} } },
	[102] = { .set = { {10, -4}, {10, -7}, {10, -5}, {-2, -8} } },
	[103] = { .set = { {6, -3}, {9, -4}, {4, -2}, {-1, -8} } },
	[104] = { .set = { {0, -2}, {-6, 2}, {5, 2}, {-1, -9} } },
	[105] = { .set = { {1, -1}, {-5, 5}, {6, 2}, {0, -8} } },
	[106] = { .set = { {-1, -1}, {-7, 2}, {4, 5}, {-1, -8} } },
	[107] = { .set = { {-1, -4}, {-5, 1}, {10, -19}, {-2, -11} } },
	[108] = { .set = { {-3, -1}, {-7, 2}, {-5, 5}, {0, -9} } },
	[109] = { .set = { {-3, -1}, {-7, 2}, {-5, 5}, {0, -9} } },
	[110] = { .set = { {5, -2}, {10, -2}, {1, 3}, {0, -9} } },
	[111] = { .set = { {4, -1}, {11, 0}, {0, 4}, {0, -8} } },
	[112] = { .set = { {6, -2}, {10, -3}, {3, 5}, {-1, -8} } },
	[113] = { .set = { {4, -4}, {9, -2}, {-3, -17}, {0, -11} } },
	[114] = { .set = { {6, -2}, {10, -2}, {9, 2}, {0, -9} } },
	[115] = { .set = { {6, -2}, {10, -2}, {9, 2}, {0, -9} } },
	[116] = { .set = { {9, -3}, {8, -2}, {8, 2}, {0, -9} } },
	[117] = { .set = { {8, -1}, {12, -1}, {7, 3}, {-1, -8} } },
	[118] = { .set = { {9, -3}, {6, -1}, {11, 3}, {0, -8} } },
	[119] = { .set = { {9, -4}, {9, -3}, {5, -16}, {0, -10} } },
	[120] = { .set = { {11, -2}, {11, -3}, {15, -1}, {1, -9} } },
	[121] = { .set = { {11, -2}, {11, -3}, {15, -1}, {1, -9} } },
	[122] = { .set = { {5, -7}, {1, -5}, {10, -2}, {-1, -9} } },
	[123] = { .set = { {5, -6}, {1, -5}, {10, -1}, {-1, -8} } },
	[124] = { .set = { {4, -8}, {0, -4}, {12, -3}, {-1, -8} } },
	[125] = { .set = { {2, -7}, {-1, -8}, {10, -18}, {-2, -11} } },
	[126] = { .set = { {3, -7}, {2, -7}, {5, -8}, {0, -11} } },
	[127] = { .set = { {3, -7}, {2, -7}, {5, -8}, {0, -11} } },
	[128] = { .set = { {-1, -10}, {6, -11}, {-7, -11}, {-1, -9} } },
	[129] = { .set = { {-1, -9}, {5, -8}, {-8, -12}, {0, -8} } },
	[130] = { .set = { {0, -9}, {7, -12}, {-7, -8}, {-1, -8} } },
	[131] = { .set = { {-1, -10}, {5, -11}, {-11, -20}, {1, -10} } },
	[132] = { .set = { {3, -10}, {2, -11}, {5, -10}, {-1, -10} } },
	[133] = { .set = { {3, -10}, {2, -11}, {5, -10}, {-1, -10} } },
	[134] = { .set = { {-6, -7}, {-2, -5}, {-11, -2}, {0, -9} } },
	[135] = { .set = { {-6, -6}, {-2, -5}, {-11, -1}, {0, -8} } },
	[136] = { .set = { {-5, -8}, {-1, -4}, {-13, -3}, {0, -8} } },
	[137] = { .set = { {-3, -7}, {0, -8}, {-11, -18}, {1, -11} } },
	[138] = { .set = { {-4, -7}, {-3, -7}, {-6, -8}, {-1, -11} } },
	[139] = { .set = { {-4, -7}, {-3, -7}, {-6, -8}, {-1, -11} } },
	[140] = { .set = { {-10, -3}, {-9, -2}, {-9, 2}, {-1, -9} } },
	[141] = { .set = { {-9, -1}, {-13, -1}, {-8, 3}, {0, -8} } },
	[142] = { .set = { {-10, -3}, {-7, -1}, {-12, 3}, {-1, -8} } },
	[143] = { .set = { {-10, -4}, {-10, -3}, {-6, -16}, {-1, -10} } },
	[144] = { .set = { {-12, -2}, {-12, -3}, {-16, -1}, {-2, -9} } },
	[145] = { .set = { {-12, -2}, {-12, -3}, {-16, -1}, {-2, -9} } },
	[146] = { .set = { {-6, -2}, {-11, -2}, {-2, 3}, {-1, -9} } },
	[147] = { .set = { {-5, -1}, {-12, 0}, {-1, 4}, {-1, -8} } },
	[148] = { .set = { {-7, -2}, {-11, -3}, {-4, 5}, {0, -8} } },
	[149] = { .set = { {-5, -4}, {-10, -2}, {2, -17}, {-1, -11} } },
	[150] = { .set = { {-7, -2}, {-11, -2}, {-10, 2}, {-1, -9} } },
	[151] = { .set = { {-7, -2}, {-11, -2}, {-10, 2}, {-1, -9} } },
	[152] = { .set = { {0, -2}, {-6, 2}, {5, 2}, {-1, -9} } },
	[153] = { .set = { {0, -2}, {1, 0}, {-3, -1}, {0, -8} } },
	[154] = { .set = { {0, -7}, {-10, -19}, {9, -19}, {0, -15} } },
	[155] = { .set = { {5, -2}, {10, -2}, {1, 3}, {0, -9} } },
	[156] = { .set = { {5, -2}, {5, -1}, {7, -2}, {0, -8} } },
	[157] = { .set = { {5, -8}, {12, -21}, {-1, -16}, {-2, -13} } },
	[158] = { .set = { {9, -3}, {8, -2}, {8, 2}, {0, -9} } },
	[159] = { .set = { {8, -2}, {8, -1}, {9, -4}, {1, -8} } },
	[160] = { .set = { {9, -10}, {6, -22}, {8, -16}, {-2, -10} } },
	[161] = { .set = { {5, -7}, {1, -5}, {10, -2}, {-1, -9} } },
	[162] = { .set = { {2, -6}, {4, -6}, {0, -7}, {-1, -9} } },
	[163] = { .set = { {3, -15}, {-5, -23}, {12, -20}, {-2, -10} } },
	[164] = { .set = { {-1, -10}, {6, -11}, {-7, -11}, {-1, -9} } },
	[165] = { .set = { {-1, -6}, {-4, -6}, {1, -6}, {0, -10} } },
	[166] = { .set = { {0, -15}, {10, -21}, {-11, -21}, {0, -10} } },
	[167] = { .set = { {-6, -7}, {-2, -5}, {-11, -2}, {0, -9} } },
	[168] = { .set = { {-3, -6}, {-5, -6}, {-1, -7}, {0, -9} } },
	[169] = { .set = { {-4, -15}, {4, -23}, {-13, -20}, {1, -10} } },
	[170] = { .set = { {-10, -3}, {-9, -2}, {-9, 2}, {-1, -9} } },
	[171] = { .set = { {-9, -2}, {-9, -1}, {-10, -4}, {-2, -8} } },
	[172] = { .set = { {-10, -10}, {-7, -22}, {-9, -16}, {1, -10} } },
	[173] = { .set = { {-6, -2}, {-11, -2}, {-2, 3}, {-1, -9} } },
	[174] = { .set = { {-6, -2}, {-6, -1}, {-8, -2}, {-1, -8} } },
	[175] = { .set = { {-6, -8}, {-13, -21}, {0, -16}, {1, -13} } },
	[176] = { .set = { {0, -2}, {-6, 2}, {5, 2}, {-1, -9} } },
	[177] = { .set = { {-6, -2}, {-11, -2}, {-2, 3}, {-1, -9} } },
	[178] = { .set = { {-10, -3}, {-9, -2}, {-9, 2}, {-1, -9} } },
	[179] = { .set = { {-6, -7}, {-2, -5}, {-11, -2}, {0, -9} } },
	[180] = { .set = { {-1, -10}, {6, -11}, {-7, -11}, {-1, -9} } },
	[181] = { .set = { {5, -7}, {1, -5}, {10, -2}, {-1, -9} } },
	[182] = { .set = { {9, -3}, {8, -2}, {8, 2}, {0, -9} } },
	[183] = { .set = { {5, -2}, {10, -2}, {1, 3}, {0, -9} } },
	[184] = { .set = { {0, 0}, {-3, 1}, {2, 1}, {0, -7} } },
	[185] = { .set = { {0, 1}, {-3, 1}, {2, 1}, {0, -6} } },
	[186] = { .set = { {0, -17}, {-11, -23}, {10, -23}, {0, -11} } },
	[187] = { .set = { {-3, -14}, {3, -22}, {-12, -20}, {-1, -9} } },
	[188] = { .set = { {-6, -13}, {-8, -23}, {-12, -14}, {0, -9} } },
	[189] = { .set = { {-4, -9}, {-13, -16}, {3, -15}, {-1, -10} } },
	[190] = { .set = { {0, -8}, {10, -16}, {-11, -16}, {0, -11} } },
	[191] = { .set = { {3, -9}, {12, -16}, {-4, -15}, {0, -10} } },
	[192] = { .set = { {5, -13}, {7, -23}, {11, -14}, {-1, -9} } },
	[193] = { .set = { {2, -14}, {-4, -22}, {11, -20}, {0, -9} } },
	[194] = { .set = { {0, -2}, {-6, 2}, {5, 2}, {-1, -9} } },
	[195] = { .set = { {-6, -2}, {-11, -2}, {-2, 3}, {-1, -9} } },
	[196] = { .set = { {-10, -3}, {-9, -2}, {-9, 2}, {-1, -9} } },
	[197] = { .set = { {-6, -7}, {-2, -5}, {-11, -2}, {0, -9} } },
	[198] = { .set = { {-1, -10}, {6, -11}, {-7, -11}, {-1, -9} } },
	[199] = { .set = { {5, -7}, {1, -5}, {10, -2}, {-1, -9} } },
	[200] = { .set = { {9, -3}, {8, -2}, {8, 2}, {0, -9} } },
	[201] = { .set = { {5, -2}, {10, -2}, {1, 3}, {0, -9} } },
	[202] = { .set = { {0, -5}, {-10, -17}, {9, -17}, {0, -13} } },
	[203] = { .set = { {-6, -6}, {-13, -19}, {0, -14}, {1, -11} } },
	[204] = { .set = { {-10, -10}, {-7, -22}, {-9, -16}, {1, -10} } },
	[205] = { .set = { {-4, -15}, {4, -23}, {-13, -20}, {1, -10} } },
	[206] = { .set = { {0, -15}, {10, -21}, {-11, -21}, {0, -10} } },
	[207] = { .set = { {3, -15}, {-5, -23}, {12, -20}, {-2, -10} } },
	[208] = { .set = { {9, -10}, {6, -22}, {8, -16}, {-2, -10} } },
	[209] = { .set = { {5, -6}, {12, -19}, {-1, -14}, {-2, -11} } },
	[210] = { .set = { {0, -5}, {-10, -17}, {9, -17}, {0, -13} } },
	[211] = { .set = { {5, -6}, {12, -19}, {-1, -14}, {-2, -11} } },
	[212] = { .set = { {9, -10}, {6, -22}, {8, -16}, {-2, -10} } },
	[213] = { .set = { {3, -15}, {-5, -23}, {12, -20}, {-2, -10} } },
	[214] = { .set = { {0, -15}, {10, -21}, {-11, -21}, {0, -10} } },
	[215] = { .set = { {-4, -15}, {4, -23}, {-13, -20}, {1, -10} } },
	[216] = { .set = { {-10, -10}, {-7, -22}, {-9, -16}, {1, -10} } },
	[217] = { .set = { {-6, -6}, {-13, -19}, {0, -14}, {1, -11} } },
	[218] = { .set = { {0, -2}, {-6, 2}, {5, 2}, {-1, -9} } },
	[219] = { .set = { {0, -6}, {-10, -18}, {9, -18}, {0, -14} } },
	[220] = { .set = { {0, -1}, {1, 1}, {-3, 0}, {0, -7} } },
	[221] = { .set = { {5, -2}, {10, -2}, {1, 3}, {0, -9} } },
	[222] = { .set = { {5, -8}, {12, -21}, {-1, -16}, {-2, -13} } },
	[223] = { .set = { {5, -2}, {5, -1}, {7, -2}, {0, -8} } },
	[224] = { .set = { {9, -3}, {8, -2}, {8, 2}, {0, -9} } },
	[225] = { .set = { {9, -10}, {6, -22}, {8, -16}, {-2, -10} } },
	[226] = { .set = { {8, -2}, {8, -1}, {9, -4}, {1, -8} } },
	[227] = { .set = { {5, -7}, {1, -5}, {10, -2}, {-1, -9} } },
	[228] = { .set = { {3, -15}, {-5, -23}, {12, -20}, {-2, -10} } },
	[229] = { .set = { {2, -6}, {4, -6}, {0, -7}, {-1, -9} } },
	[230] = { .set = { {-1, -10}, {6, -11}, {-7, -11}, {-1, -9} } },
	[231] = { .set = { {0, -15}, {10, -21}, {-11, -21}, {0, -10} } },
	[232] = { .set = { {-1, -6}, {-4, -6}, {1, -6}, {0, -10} } },
	[233] = { .set = { {-6, -7}, {-2, -5}, {-11, -2}, {0, -9} } },
	[234] = { .set = { {-4, -15}, {4, -23}, {-13, -20}, {1, -10} } },
	[235] = { .set = { {-3, -6}, {-5, -6}, {-1, -7}, {0, -9} } },
	[236] = { .set = { {-10, -3}, {-9, -2}, {-9, 2}, {-1, -9} } },
	[237] = { .set = { {-10, -10}, {-7, -22}, {-9, -16}, {1, -10} } },
	[238] = { .set = { {-9, -2}, {-9, -1}, {-10, -4}, {-2, -8} } },
	[239] = { .set = { {-6, -2}, {-11, -2}, {-2, 3}, {-1, -9} } },
	[240] = { .set = { {-6, -8}, {-13, -21}, {0, -16}, {1, -13} } },
	[241] = { .set = { {-6, -2}, {-6, -1}, {-8, -2}, {-1, -8} } },
	[242] = { .set = { {0, -1}, {1, 1}, {-3, 0}, {0, -7} } },
	[243] = { .set = { {-6, -1}, {-6, 0}, {-8, -1}, {-1, -7} } },
	[244] = { .set = { {-9, -2}, {-9, -1}, {-10, -4}, {-2, -8} } },
	[245] = { .set = { {-3, -5}, {-5, -5}, {-1, -6}, {0, -8} } },
	[246] = { .set = { {-1, -5}, {-4, -5}, {1, -5}, {0, -9} } },
	[247] = { .set = { {2, -5}, {4, -5}, {0, -6}, {-1, -8} } },
	[248] = { .set = { {8, -2}, {8, -1}, {9, -4}, {1, -8} } },
	[249] = { .set = { {5, -1}, {5, 0}, {7, -1}, {0, -7} } },
	[250] = { .set = { {0, -2}, {-6, 2}, {5, 2}, {-1, -9} } },
	[251] = { .set = { {-6, -2}, {-11, -2}, {-2, 3}, {-1, -9} } },
	[252] = { .set = { {-10, -3}, {-9, -2}, {-9, 2}, {-1, -9} } },
	[253] = { .set = { {-6, -7}, {-2, -5}, {-11, -2}, {0, -9} } },
	[254] = { .set = { {-1, -10}, {6, -11}, {-7, -11}, {-1, -9} } },
	[255] = { .set = { {5, -7}, {1, -5}, {10, -2}, {-1, -9} } },
	[256] = { .set = { {9, -3}, {8, -2}, {8, 2}, {0, -9} } },
	[257] = { .set = { {5, -2}, {10, -2}, {1, 3}, {0, -9} } },
};

static const ax_anim *const sParasectAnimTable1[] = {
	gAxSharedAnim_02602,
	gAxSharedAnim_02678,
	gAxSharedAnim_02687,
	gAxSharedAnim_02696,
	gAxSharedAnim_02614,
	gAxSharedAnim_02636,
	gAxSharedAnim_02649,
	gAxSharedAnim_02658,
};

static const ax_anim *const sParasectAnimTable2[] = {
	sParasectAnims_2_1,
	sParasectAnims_2_2,
	sParasectAnims_2_3,
	sParasectAnims_2_4,
	sParasectAnims_2_5,
	sParasectAnims_2_6,
	sParasectAnims_2_7,
	sParasectAnims_2_8,
};

static const ax_anim *const sParasectAnimTable3[] = {
	sParasectAnims_3_1,
	sParasectAnims_3_2,
	sParasectAnims_3_3,
	sParasectAnims_3_4,
	sParasectAnims_3_5,
	sParasectAnims_3_6,
	sParasectAnims_3_7,
	sParasectAnims_3_8,
};

static const ax_anim *const sParasectAnimTable4[] = {
	sParasectAnims_4_1,
	sParasectAnims_4_2,
	sParasectAnims_4_3,
	sParasectAnims_4_4,
	sParasectAnims_4_5,
	sParasectAnims_4_6,
	sParasectAnims_4_7,
	sParasectAnims_4_8,
};

static const ax_anim *const sParasectAnimTable5[] = {
	sParasectAnims_5_1,
	sParasectAnims_5_2,
	sParasectAnims_5_3,
	sParasectAnims_5_4,
	sParasectAnims_5_5,
	sParasectAnims_5_6,
	sParasectAnims_5_7,
	sParasectAnims_5_8,
};

static const ax_anim *const sParasectAnimTable6[] = {
	gAxSharedAnim_02383,
	gAxSharedAnim_02383,
	gAxSharedAnim_02383,
	gAxSharedAnim_02383,
	gAxSharedAnim_02383,
	gAxSharedAnim_02383,
	gAxSharedAnim_02383,
	gAxSharedAnim_02383,
};

static const ax_anim *const sParasectAnimTable7[] = {
	gAxSharedAnim_01002,
	gAxSharedAnim_01021,
	gAxSharedAnim_01033,
	gAxSharedAnim_01051,
	gAxSharedAnim_01082,
	gAxSharedAnim_01097,
	gAxSharedAnim_01115,
	gAxSharedAnim_01130,
};

static const ax_anim *const sParasectAnimTable8[] = {
	sParasectAnims_8_1,
	sParasectAnims_8_2,
	sParasectAnims_8_3,
	sParasectAnims_8_4,
	sParasectAnims_8_5,
	sParasectAnims_8_6,
	sParasectAnims_8_7,
	sParasectAnims_8_8,
};

static const ax_anim *const sParasectAnimTable9[] = {
	sParasectAnims_9_1,
	sParasectAnims_9_2,
	sParasectAnims_9_3,
	sParasectAnims_9_4,
	sParasectAnims_9_5,
	sParasectAnims_9_6,
	sParasectAnims_9_7,
	sParasectAnims_9_8,
};

static const ax_anim *const sParasectAnimTable10[] = {
	gAxSharedAnim_01333,
	gAxSharedAnim_01347,
	gAxSharedAnim_01357,
	gAxSharedAnim_01365,
	gAxSharedAnim_01373,
	gAxSharedAnim_01384,
	gAxSharedAnim_01395,
	gAxSharedAnim_01410,
};

static const ax_anim *const sParasectAnimTable11[] = {
	sParasectAnims_11_1,
	sParasectAnims_11_2,
	sParasectAnims_11_3,
	sParasectAnims_11_4,
	sParasectAnims_11_5,
	sParasectAnims_11_6,
	sParasectAnims_11_7,
	sParasectAnims_11_8,
};

static const ax_anim *const sParasectAnimTable12[] = {
	gAxSharedAnim_01587,
	gAxSharedAnim_01627,
	gAxSharedAnim_01617,
	gAxSharedAnim_01610,
	gAxSharedAnim_01609,
	gAxSharedAnim_01603,
	gAxSharedAnim_01595,
	gAxSharedAnim_01588,
};

static const ax_anim *const sParasectAnimTable13[] = {
	gAxSharedAnim_01637,
	gAxSharedAnim_01670,
	gAxSharedAnim_01667,
	gAxSharedAnim_01663,
	gAxSharedAnim_01658,
	gAxSharedAnim_01653,
	gAxSharedAnim_01649,
	gAxSharedAnim_01644,
};

static const ax_anim *const *const sAxAnimationsParasect[] = {
	sParasectAnimTable1,
	sParasectAnimTable2,
	sParasectAnimTable3,
	sParasectAnimTable4,
	sParasectAnimTable5,
	sParasectAnimTable6,
	sParasectAnimTable7,
	sParasectAnimTable8,
	sParasectAnimTable9,
	sParasectAnimTable10,
	sParasectAnimTable11,
	sParasectAnimTable12,
	sParasectAnimTable13,
};

static const ax_sprite *const sAxSpritesParasect[] = {
	sParasectSprites1,
	sParasectSprites2,
	sParasectSprites3,
	sParasectSprites4,
	sParasectSprites5,
	sParasectSprites6,
	sParasectSprites7,
	sParasectSprites8,
	sParasectSprites9,
	sParasectSprites10,
	sParasectSprites11,
	sParasectSprites12,
	sParasectSprites13,
	sParasectSprites14,
	sParasectSprites15,
	sParasectSprites16,
	sParasectSprites17,
	sParasectSprites18,
	sParasectSprites19,
	sParasectSprites20,
	sParasectSprites21,
	sParasectSprites22,
	sParasectSprites23,
	sParasectSprites24,
	sParasectSprites25,
	sParasectSprites26,
	sParasectSprites27,
	sParasectSprites28,
	sParasectSprites29,
	sParasectSprites30,
	sParasectSprites31,
	sParasectSprites32,
	sParasectSprites33,
	sParasectSprites34,
	sParasectSprites35,
	sParasectSprites36,
	sParasectSprites37,
	sParasectSprites38,
	sParasectSprites39,
	sParasectSprites40,
	sParasectSprites41,
	sParasectSprites42,
	sParasectSprites43,
	sParasectSprites44,
	sParasectSprites45,
	sParasectSprites46,
	sParasectSprites47,
	sParasectSprites48,
	sParasectSprites49,
	sParasectSprites50,
	sParasectSprites51,
	sParasectSprites52,
};

static const axmain sAxMainParasect = {
	.poses = sAxPosesParasect,
	.animations = sAxAnimationsParasect,
	.animCount = ARRAY_COUNT(sAxAnimationsParasect),
	.spriteData = sAxSpritesParasect,
	.positions = sAxPositionsParasect,
};
