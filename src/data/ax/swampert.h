/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainSwampert;
const SiroArchive gAxSwampert = {"SIRO", &sAxMainSwampert};

static const ax_pose sSwampertPose1[] = {
	AX_POSE(0, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose3[] = {
	AX_POSE(2, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose4[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose5[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose7[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose8[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose9[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose10[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose12[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose13[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose15[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose16[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose18[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose19[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose20[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose21[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose22[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose23[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose27[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose30[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose33[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose36[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose39[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose42[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose45[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose48[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose80[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose88[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose92[] = {
	AX_POSE(19, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose96[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose100[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose104[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose108[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose111[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose112[] = {
	AX_POSE(21, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose113[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose114[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose115[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose116[] = {
	AX_POSE(22, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(23, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(25, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(26, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose117[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose118[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose119[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose120[] = {
	AX_POSE(27, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(28, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(29, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(30, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose121[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose124[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose125[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose126[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose127[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose128[] = {
	AX_POSE(27, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(28, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(29, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(30, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose129[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose130[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose131[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose132[] = {
	AX_POSE(22, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(23, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(24, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(25, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE(26, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose135[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose136[] = {
	AX_POSE(21, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose137[] = {
	AX_POSE(32, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose138[] = {
	AX_POSE(33, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose139[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose140[] = {
	AX_POSE(35, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose141[] = {
	AX_POSE(36, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose142[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose143[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose144[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose145[] = {
	AX_POSE(36, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose146[] = {
	AX_POSE(35, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose164[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose165[] = {
	AX_POSE(22, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(23, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(25, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE(26, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose169[] = {
	AX_POSE(22, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(23, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(25, OAM1(244, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(26, OAM1(220, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose170[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose189[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose195[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose201[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose204[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose205[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose209[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSwampertPose210[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sSwampertAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 25, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {16, 18}, .shadow = {16, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {17, 17}, .shadow = {17, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {16, 18}, .shadow = {16, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {17, 17}, .shadow = {17, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 31, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {15, 0}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {15, 1}, .shadow = {15, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {15, 0}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {15, 1}, .shadow = {15, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {10, -13}, .shadow = {10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {15, -20}, .shadow = {15, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {16, -19}, .shadow = {16, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {15, -20}, .shadow = {15, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {16, -19}, .shadow = {16, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-1, -2}, .shadow = {-1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-1, -2}, .shadow = {-1, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {0, -8}, .shadow = {0, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-4, -1}, .shadow = {-4, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-3, -2}, .shadow = {-3, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-4, -1}, .shadow = {-4, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-3, -2}, .shadow = {-3, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 40, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-10, -13}, .shadow = {-10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-15, -20}, .shadow = {-15, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 40, .offset = {-16, -19}, .shadow = {-16, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-15, -20}, .shadow = {-15, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-16, -19}, .shadow = {-16, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 43, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-15, 0}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {-15, 1}, .shadow = {-15, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-15, 0}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-15, 1}, .shadow = {-15, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-1, -2}, .shadow = {-1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-1, -2}, .shadow = {-1, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-16, 18}, .shadow = {-16, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {-17, 17}, .shadow = {-17, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-16, 18}, .shadow = {-16, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-17, 17}, .shadow = {-17, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 49, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 49, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 52, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {16, 18}, .shadow = {16, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {17, 17}, .shadow = {17, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {16, 18}, .shadow = {16, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {17, 17}, .shadow = {17, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 55, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {15, 0}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {15, 1}, .shadow = {15, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {15, 0}, .shadow = {15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {15, 1}, .shadow = {15, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 58, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {10, -13}, .shadow = {10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {15, -20}, .shadow = {15, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 58, .offset = {16, -19}, .shadow = {16, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {15, -20}, .shadow = {15, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {16, -19}, .shadow = {16, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-1, -2}, .shadow = {-1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-1, -2}, .shadow = {-1, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 61, .offset = {0, -8}, .shadow = {0, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 61, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-4, -1}, .shadow = {-4, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-3, -2}, .shadow = {-3, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-4, -1}, .shadow = {-4, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-3, -2}, .shadow = {-3, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 64, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-10, -13}, .shadow = {-10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-15, -20}, .shadow = {-15, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 64, .offset = {-16, -19}, .shadow = {-16, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-15, -20}, .shadow = {-15, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-16, -19}, .shadow = {-16, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 67, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-15, 0}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {-15, 1}, .shadow = {-15, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-15, 0}, .shadow = {-15, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-15, 1}, .shadow = {-15, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-1, -2}, .shadow = {-1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-1, -2}, .shadow = {-1, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 70, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-16, 18}, .shadow = {-16, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 70, .offset = {-17, 17}, .shadow = {-17, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-16, 18}, .shadow = {-16, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-17, 17}, .shadow = {-17, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 4, .unkFlags = 2, .poseId = 72, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {-1, 3}, .shadow = {-1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-1, 3}, .shadow = {-1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-1, 3}, .shadow = {-1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 2, .poseId = 76, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {2, 4}, .shadow = {2, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {2, 4}, .shadow = {2, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {2, 4}, .shadow = {2, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 80, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {5, -1}, .shadow = {5, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {5, -1}, .shadow = {5, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {5, -1}, .shadow = {5, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 4, .unkFlags = 2, .poseId = 84, .offset = {-4, 4}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 4, .unkFlags = 2, .poseId = 88, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 4, .unkFlags = 2, .poseId = 92, .offset = {4, 4}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 96, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {-5, -1}, .shadow = {-5, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-5, -1}, .shadow = {-5, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-5, -1}, .shadow = {-5, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 2, .poseId = 100, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {-2, 4}, .shadow = {-2, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, 4}, .shadow = {-2, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, 4}, .shadow = {-2, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_5_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_5_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_5_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 115, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 115, .offset = {-3, -1}, .shadow = {-3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-3, 0}, .shadow = {-3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_5_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 119, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-5, 1}, .shadow = {-5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-5, 1}, .shadow = {-5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 119, .offset = {-5, 1}, .shadow = {-5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {-4, 2}, .shadow = {-4, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_5_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 123, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 123, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_5_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 127, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {5, 1}, .shadow = {5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {5, 1}, .shadow = {5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 127, .offset = {5, 1}, .shadow = {5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {4, 2}, .shadow = {4, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_5_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 131, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 131, .offset = {3, -1}, .shadow = {3, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {3, 0}, .shadow = {3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_5_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 135, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_8_1[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 147, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_8_2[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_8_3[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 151, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_8_4[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 153, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_8_5[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 155, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_8_6[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_8_7[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 159, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_8_8[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 161, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {19, 10}, .shadow = {19, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {12, 19}, .shadow = {12, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-9, -10}, .shadow = {-9, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-7, -16}, .shadow = {-7, -16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 163, .offset = {7, -16}, .shadow = {7, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-19, 10}, .shadow = {-19, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {-12, 19}, .shadow = {-12, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 180, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 180, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 179, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 183, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 181, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 182, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 186, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 184, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 185, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 185, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 189, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 192, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 192, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 195, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 195, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 195, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 194, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 198, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 198, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 196, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 197, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sSwampertAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 201, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 201, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 200, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sSwampertGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_1.4bpp.lz");
static const ax_sprite sSwampertSprites1[] = {
	{sSwampertGfx1, ARRAY_COUNT(sSwampertGfx1)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_2.4bpp.lz");
static const ax_sprite sSwampertSprites2[] = {
	{sSwampertGfx2, ARRAY_COUNT(sSwampertGfx2)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_3.4bpp.lz");
static const ax_sprite sSwampertSprites3[] = {
	{sSwampertGfx3, ARRAY_COUNT(sSwampertGfx3)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_4.4bpp.lz");
static const ax_sprite sSwampertSprites4[] = {
	{sSwampertGfx4, ARRAY_COUNT(sSwampertGfx4)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_5.4bpp.lz");
static const ax_sprite sSwampertSprites5[] = {
	{sSwampertGfx5, ARRAY_COUNT(sSwampertGfx5)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_6.4bpp.lz");
static const ax_sprite sSwampertSprites6[] = {
	{sSwampertGfx6, ARRAY_COUNT(sSwampertGfx6)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_7.4bpp.lz");
static const ax_sprite sSwampertSprites7[] = {
	{sSwampertGfx7, ARRAY_COUNT(sSwampertGfx7)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_8.4bpp.lz");
static const ax_sprite sSwampertSprites8[] = {
	{sSwampertGfx8, ARRAY_COUNT(sSwampertGfx8)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_9.4bpp.lz");
static const ax_sprite sSwampertSprites9[] = {
	{sSwampertGfx9, ARRAY_COUNT(sSwampertGfx9)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_10.4bpp.lz");
static const ax_sprite sSwampertSprites10[] = {
	{sSwampertGfx10, ARRAY_COUNT(sSwampertGfx10)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_11.4bpp.lz");
static const ax_sprite sSwampertSprites11[] = {
	{sSwampertGfx11, ARRAY_COUNT(sSwampertGfx11)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_12.4bpp.lz");
static const ax_sprite sSwampertSprites12[] = {
	{sSwampertGfx12, ARRAY_COUNT(sSwampertGfx12)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_13.4bpp.lz");
static const ax_sprite sSwampertSprites13[] = {
	{sSwampertGfx13, ARRAY_COUNT(sSwampertGfx13)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_14.4bpp.lz");
static const ax_sprite sSwampertSprites14[] = {
	{sSwampertGfx14, ARRAY_COUNT(sSwampertGfx14)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_15.4bpp.lz");
static const ax_sprite sSwampertSprites15[] = {
	{sSwampertGfx15, ARRAY_COUNT(sSwampertGfx15)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_16.4bpp.lz");
static const u8 sSwampertGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_16_1.4bpp.lz");
static const u8 sSwampertGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_16_2.4bpp.lz");
static const ax_sprite sSwampertSprites16[] = {
	{NULL, 32}, 
	{sSwampertGfx16, ARRAY_COUNT(sSwampertGfx16)}, 
	{NULL, 64}, 
	{sSwampertGfx16_1, ARRAY_COUNT(sSwampertGfx16_1)}, 
	{NULL, 32}, 
	{sSwampertGfx16_2, ARRAY_COUNT(sSwampertGfx16_2)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_17.4bpp.lz");
static const ax_sprite sSwampertSprites17[] = {
	{NULL, 64}, 
	{sSwampertGfx17, ARRAY_COUNT(sSwampertGfx17)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_18.4bpp.lz");
static const u8 sSwampertGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_18_1.4bpp.lz");
static const ax_sprite sSwampertSprites18[] = {
	{NULL, 64}, 
	{sSwampertGfx18, ARRAY_COUNT(sSwampertGfx18)}, 
	{NULL, 32}, 
	{sSwampertGfx18_1, ARRAY_COUNT(sSwampertGfx18_1)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_19.4bpp.lz");
static const u8 sSwampertGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_19_1.4bpp.lz");
static const ax_sprite sSwampertSprites19[] = {
	{sSwampertGfx19, ARRAY_COUNT(sSwampertGfx19)}, 
	{NULL, 32}, 
	{sSwampertGfx19_1, ARRAY_COUNT(sSwampertGfx19_1)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_20.4bpp.lz");
static const u8 sSwampertGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_20_1.4bpp.lz");
static const ax_sprite sSwampertSprites20[] = {
	{NULL, 32}, 
	{sSwampertGfx20, ARRAY_COUNT(sSwampertGfx20)}, 
	{NULL, 32}, 
	{sSwampertGfx20_1, ARRAY_COUNT(sSwampertGfx20_1)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_21.4bpp.lz");
static const u8 sSwampertGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_21_1.4bpp.lz");
static const ax_sprite sSwampertSprites21[] = {
	{NULL, 32}, 
	{sSwampertGfx21, ARRAY_COUNT(sSwampertGfx21)}, 
	{NULL, 32}, 
	{sSwampertGfx21_1, ARRAY_COUNT(sSwampertGfx21_1)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_22.4bpp.lz");
static const u8 sSwampertGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_22_1.4bpp.lz");
static const ax_sprite sSwampertSprites22[] = {
	{sSwampertGfx22, ARRAY_COUNT(sSwampertGfx22)}, 
	{NULL, 32}, 
	{sSwampertGfx22_1, ARRAY_COUNT(sSwampertGfx22_1)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_23.4bpp.lz");
static const u8 sSwampertGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_23_1.4bpp.lz");
static const ax_sprite sSwampertSprites23[] = {
	{sSwampertGfx23, ARRAY_COUNT(sSwampertGfx23)}, 
	{NULL, 32}, 
	{sSwampertGfx23_1, ARRAY_COUNT(sSwampertGfx23_1)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_24.4bpp.lz");
static const ax_sprite sSwampertSprites24[] = {
	{sSwampertGfx24, ARRAY_COUNT(sSwampertGfx24)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_25.4bpp.lz");
static const ax_sprite sSwampertSprites25[] = {
	{sSwampertGfx25, ARRAY_COUNT(sSwampertGfx25)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_26.4bpp.lz");
static const ax_sprite sSwampertSprites26[] = {
	{sSwampertGfx26, ARRAY_COUNT(sSwampertGfx26)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_27.4bpp.lz");
static const ax_sprite sSwampertSprites27[] = {
	{sSwampertGfx27, ARRAY_COUNT(sSwampertGfx27)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_28.4bpp.lz");
static const u8 sSwampertGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_28_1.4bpp.lz");
static const ax_sprite sSwampertSprites28[] = {
	{sSwampertGfx28, ARRAY_COUNT(sSwampertGfx28)}, 
	{NULL, 32}, 
	{sSwampertGfx28_1, ARRAY_COUNT(sSwampertGfx28_1)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_29.4bpp.lz");
static const ax_sprite sSwampertSprites29[] = {
	{sSwampertGfx29, ARRAY_COUNT(sSwampertGfx29)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_30.4bpp.lz");
static const ax_sprite sSwampertSprites30[] = {
	{sSwampertGfx30, ARRAY_COUNT(sSwampertGfx30)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_31.4bpp.lz");
static const ax_sprite sSwampertSprites31[] = {
	{sSwampertGfx31, ARRAY_COUNT(sSwampertGfx31)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_32.4bpp.lz");
static const ax_sprite sSwampertSprites32[] = {
	{sSwampertGfx32, ARRAY_COUNT(sSwampertGfx32)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_33.4bpp.lz");
static const ax_sprite sSwampertSprites33[] = {
	{sSwampertGfx33, ARRAY_COUNT(sSwampertGfx33)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_34.4bpp.lz");
static const ax_sprite sSwampertSprites34[] = {
	{sSwampertGfx34, ARRAY_COUNT(sSwampertGfx34)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_35.4bpp.lz");
static const ax_sprite sSwampertSprites35[] = {
	{sSwampertGfx35, ARRAY_COUNT(sSwampertGfx35)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_36.4bpp.lz");
static const ax_sprite sSwampertSprites36[] = {
	{sSwampertGfx36, ARRAY_COUNT(sSwampertGfx36)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_37.4bpp.lz");
static const ax_sprite sSwampertSprites37[] = {
	{sSwampertGfx37, ARRAY_COUNT(sSwampertGfx37)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_38.4bpp.lz");
static const ax_sprite sSwampertSprites38[] = {
	{sSwampertGfx38, ARRAY_COUNT(sSwampertGfx38)}, 
	{NULL, 0}
};
static const u8 sSwampertGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/swampert/sprite_39.4bpp.lz");
static const ax_sprite sSwampertSprites39[] = {
	{sSwampertGfx39, ARRAY_COUNT(sSwampertGfx39)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSwampert[] = {
	sSwampertPose1,
	sSwampertPose2,
	sSwampertPose3,
	sSwampertPose4,
	sSwampertPose5,
	sSwampertPose6,
	sSwampertPose7,
	sSwampertPose8,
	sSwampertPose9,
	sSwampertPose10,
	sSwampertPose11,
	sSwampertPose12,
	sSwampertPose13,
	sSwampertPose14,
	sSwampertPose15,
	sSwampertPose16,
	sSwampertPose17,
	sSwampertPose18,
	sSwampertPose19,
	sSwampertPose20,
	sSwampertPose21,
	sSwampertPose22,
	sSwampertPose23,
	sSwampertPose24,
	sSwampertPose1,
	sSwampertPose2,
	sSwampertPose27,
	sSwampertPose4,
	sSwampertPose5,
	sSwampertPose30,
	sSwampertPose7,
	sSwampertPose8,
	sSwampertPose33,
	sSwampertPose10,
	sSwampertPose11,
	sSwampertPose36,
	sSwampertPose13,
	sSwampertPose14,
	sSwampertPose39,
	sSwampertPose16,
	sSwampertPose17,
	sSwampertPose42,
	sSwampertPose19,
	sSwampertPose20,
	sSwampertPose45,
	sSwampertPose22,
	sSwampertPose23,
	sSwampertPose48,
	sSwampertPose1,
	sSwampertPose2,
	sSwampertPose27,
	sSwampertPose4,
	sSwampertPose5,
	sSwampertPose30,
	sSwampertPose7,
	sSwampertPose8,
	sSwampertPose33,
	sSwampertPose10,
	sSwampertPose11,
	sSwampertPose36,
	sSwampertPose13,
	sSwampertPose14,
	sSwampertPose39,
	sSwampertPose16,
	sSwampertPose17,
	sSwampertPose42,
	sSwampertPose19,
	sSwampertPose20,
	sSwampertPose45,
	sSwampertPose22,
	sSwampertPose23,
	sSwampertPose48,
	sSwampertPose1,
	sSwampertPose2,
	sSwampertPose3,
	sSwampertPose27,
	sSwampertPose4,
	sSwampertPose5,
	sSwampertPose6,
	sSwampertPose80,
	sSwampertPose7,
	sSwampertPose8,
	sSwampertPose9,
	sSwampertPose33,
	sSwampertPose10,
	sSwampertPose11,
	sSwampertPose12,
	sSwampertPose88,
	sSwampertPose13,
	sSwampertPose14,
	sSwampertPose15,
	sSwampertPose92,
	sSwampertPose16,
	sSwampertPose17,
	sSwampertPose18,
	sSwampertPose96,
	sSwampertPose19,
	sSwampertPose20,
	sSwampertPose21,
	sSwampertPose100,
	sSwampertPose22,
	sSwampertPose23,
	sSwampertPose24,
	sSwampertPose104,
	sSwampertPose1,
	sSwampertPose2,
	sSwampertPose27,
	sSwampertPose108,
	sSwampertPose4,
	sSwampertPose5,
	sSwampertPose111,
	sSwampertPose112,
	sSwampertPose113,
	sSwampertPose114,
	sSwampertPose115,
	sSwampertPose116,
	sSwampertPose117,
	sSwampertPose118,
	sSwampertPose119,
	sSwampertPose120,
	sSwampertPose121,
	sSwampertPose14,
	sSwampertPose39,
	sSwampertPose124,
	sSwampertPose125,
	sSwampertPose126,
	sSwampertPose127,
	sSwampertPose128,
	sSwampertPose129,
	sSwampertPose130,
	sSwampertPose131,
	sSwampertPose132,
	sSwampertPose22,
	sSwampertPose23,
	sSwampertPose135,
	sSwampertPose136,
	sSwampertPose137,
	sSwampertPose138,
	sSwampertPose139,
	sSwampertPose140,
	sSwampertPose141,
	sSwampertPose142,
	sSwampertPose143,
	sSwampertPose144,
	sSwampertPose145,
	sSwampertPose146,
	sSwampertPose1,
	sSwampertPose108,
	sSwampertPose4,
	sSwampertPose112,
	sSwampertPose113,
	sSwampertPose116,
	sSwampertPose117,
	sSwampertPose120,
	sSwampertPose121,
	sSwampertPose124,
	sSwampertPose125,
	sSwampertPose128,
	sSwampertPose129,
	sSwampertPose132,
	sSwampertPose22,
	sSwampertPose136,
	sSwampertPose108,
	sSwampertPose164,
	sSwampertPose165,
	sSwampertPose128,
	sSwampertPose124,
	sSwampertPose120,
	sSwampertPose169,
	sSwampertPose170,
	sSwampertPose108,
	sSwampertPose170,
	sSwampertPose169,
	sSwampertPose120,
	sSwampertPose124,
	sSwampertPose128,
	sSwampertPose165,
	sSwampertPose164,
	sSwampertPose1,
	sSwampertPose27,
	sSwampertPose108,
	sSwampertPose4,
	sSwampertPose30,
	sSwampertPose112,
	sSwampertPose113,
	sSwampertPose33,
	sSwampertPose116,
	sSwampertPose117,
	sSwampertPose189,
	sSwampertPose120,
	sSwampertPose121,
	sSwampertPose39,
	sSwampertPose124,
	sSwampertPose125,
	sSwampertPose195,
	sSwampertPose128,
	sSwampertPose129,
	sSwampertPose100,
	sSwampertPose132,
	sSwampertPose22,
	sSwampertPose201,
	sSwampertPose136,
	sSwampertPose27,
	sSwampertPose204,
	sSwampertPose205,
	sSwampertPose127,
	sSwampertPose39,
	sSwampertPose119,
	sSwampertPose209,
	sSwampertPose210,
	sSwampertPose1,
	sSwampertPose22,
	sSwampertPose19,
	sSwampertPose16,
	sSwampertPose13,
	sSwampertPose10,
	sSwampertPose7,
	sSwampertPose4,
};

static const struct PositionSets sAxPositionsSwampert[] = {
	[0] = { .set = { {-1, -9}, {-9, -3}, {8, -3}, {-1, -8} } },
	[1] = { .set = { {-2, -7}, {-10, -3}, {5, 0}, {-2, -6} } },
	[2] = { .set = { {0, -7}, {-6, 0}, {9, -3}, {1, -6} } },
	[3] = { .set = { {7, -9}, {10, -4}, {0, -1}, {2, -8} } },
	[4] = { .set = { {8, -8}, {11, -6}, {1, 2}, {2, -7} } },
	[5] = { .set = { {6, -7}, {10, -1}, {-4, -1}, {1, -6} } },
	[6] = { .set = { {11, -12}, {8, -7}, {9, -3}, {1, -7} } },
	[7] = { .set = { {12, -10}, {2, -4}, {11, 1}, {0, -6} } },
	[8] = { .set = { {12, -9}, {12, -3}, {7, 0}, {0, -6} } },
	[9] = { .set = { {5, -15}, {-5, -9}, {11, -6}, {1, -9} } },
	[10] = { .set = { {4, -12}, {-4, -6}, {11, -4}, {0, -7} } },
	[11] = { .set = { {6, -13}, {5, -9}, {10, -3}, {2, -8} } },
	[12] = { .set = { {-1, -16}, {7, -10}, {-8, -10}, {0, -9} } },
	[13] = { .set = { {1, -14}, {8, -7}, {-8, -9}, {1, -8} } },
	[14] = { .set = { {-2, -14}, {5, -10}, {-10, -7}, {-2, -8} } },
	[15] = { .set = { {-6, -15}, {4, -9}, {-12, -6}, {-2, -9} } },
	[16] = { .set = { {-5, -12}, {3, -6}, {-12, -4}, {-1, -7} } },
	[17] = { .set = { {-7, -13}, {-6, -9}, {-11, -3}, {-3, -8} } },
	[18] = { .set = { {-12, -12}, {-9, -7}, {-10, -3}, {-2, -7} } },
	[19] = { .set = { {-13, -10}, {-3, -4}, {-12, 1}, {-1, -6} } },
	[20] = { .set = { {-13, -9}, {-13, -3}, {-8, 0}, {-1, -6} } },
	[21] = { .set = { {-8, -9}, {-11, -4}, {-1, -1}, {-3, -8} } },
	[22] = { .set = { {-9, -8}, {-12, -6}, {-2, 2}, {-3, -7} } },
	[23] = { .set = { {-7, -7}, {-11, -1}, {3, -1}, {-2, -6} } },
	[24] = { .set = { {-1, -9}, {-9, -3}, {8, -3}, {-1, -8} } },
	[25] = { .set = { {-2, -7}, {-10, -3}, {5, 0}, {-2, -6} } },
	[26] = { .set = { {-1, 0}, {-10, 2}, {9, 2}, {-1, -6} } },
	[27] = { .set = { {7, -9}, {10, -4}, {0, -1}, {2, -8} } },
	[28] = { .set = { {8, -8}, {11, -6}, {1, 2}, {2, -7} } },
	[29] = { .set = { {7, 0}, {13, -1}, {1, 4}, {-3, -5} } },
	[30] = { .set = { {11, -12}, {8, -7}, {9, -3}, {1, -7} } },
	[31] = { .set = { {12, -10}, {2, -4}, {11, 1}, {0, -6} } },
	[32] = { .set = { {11, -4}, {11, -3}, {9, 0}, {0, -5} } },
	[33] = { .set = { {5, -15}, {-5, -9}, {11, -6}, {1, -9} } },
	[34] = { .set = { {4, -12}, {-4, -6}, {11, -4}, {0, -7} } },
	[35] = { .set = { {8, -10}, {0, -10}, {12, -5}, {1, -6} } },
	[36] = { .set = { {-1, -16}, {7, -10}, {-8, -10}, {0, -9} } },
	[37] = { .set = { {1, -14}, {8, -7}, {-8, -9}, {1, -8} } },
	[38] = { .set = { {-1, -12}, {10, -8}, {-11, -8}, {0, -7} } },
	[39] = { .set = { {-6, -15}, {4, -9}, {-12, -6}, {-2, -9} } },
	[40] = { .set = { {-5, -12}, {3, -6}, {-12, -4}, {-1, -7} } },
	[41] = { .set = { {-8, -10}, {0, -10}, {-12, -5}, {-1, -6} } },
	[42] = { .set = { {-12, -12}, {-9, -7}, {-10, -3}, {-2, -7} } },
	[43] = { .set = { {-13, -10}, {-3, -4}, {-12, 1}, {-1, -6} } },
	[44] = { .set = { {-11, -4}, {-11, -3}, {-9, 0}, {0, -5} } },
	[45] = { .set = { {-8, -9}, {-11, -4}, {-1, -1}, {-3, -8} } },
	[46] = { .set = { {-9, -8}, {-12, -6}, {-2, 2}, {-3, -7} } },
	[47] = { .set = { {-8, -1}, {-14, -2}, {-2, 3}, {2, -6} } },
	[48] = { .set = { {-1, -9}, {-9, -3}, {8, -3}, {-1, -8} } },
	[49] = { .set = { {-2, -7}, {-10, -3}, {5, 0}, {-2, -6} } },
	[50] = { .set = { {-1, 0}, {-10, 2}, {9, 2}, {-1, -6} } },
	[51] = { .set = { {7, -9}, {10, -4}, {0, -1}, {2, -8} } },
	[52] = { .set = { {8, -8}, {11, -6}, {1, 2}, {2, -7} } },
	[53] = { .set = { {7, 0}, {13, -1}, {1, 4}, {-3, -5} } },
	[54] = { .set = { {11, -12}, {8, -7}, {9, -3}, {1, -7} } },
	[55] = { .set = { {12, -10}, {2, -4}, {11, 1}, {0, -6} } },
	[56] = { .set = { {11, -4}, {11, -3}, {9, 0}, {0, -5} } },
	[57] = { .set = { {5, -15}, {-5, -9}, {11, -6}, {1, -9} } },
	[58] = { .set = { {4, -12}, {-4, -6}, {11, -4}, {0, -7} } },
	[59] = { .set = { {8, -10}, {0, -10}, {12, -5}, {1, -6} } },
	[60] = { .set = { {-1, -16}, {7, -10}, {-8, -10}, {0, -9} } },
	[61] = { .set = { {1, -14}, {8, -7}, {-8, -9}, {1, -8} } },
	[62] = { .set = { {-1, -12}, {10, -8}, {-11, -8}, {0, -7} } },
	[63] = { .set = { {-6, -15}, {4, -9}, {-12, -6}, {-2, -9} } },
	[64] = { .set = { {-5, -12}, {3, -6}, {-12, -4}, {-1, -7} } },
	[65] = { .set = { {-8, -10}, {0, -10}, {-12, -5}, {-1, -6} } },
	[66] = { .set = { {-12, -12}, {-9, -7}, {-10, -3}, {-2, -7} } },
	[67] = { .set = { {-13, -10}, {-3, -4}, {-12, 1}, {-1, -6} } },
	[68] = { .set = { {-11, -4}, {-11, -3}, {-9, 0}, {0, -5} } },
	[69] = { .set = { {-8, -9}, {-11, -4}, {-1, -1}, {-3, -8} } },
	[70] = { .set = { {-9, -8}, {-12, -6}, {-2, 2}, {-3, -7} } },
	[71] = { .set = { {-8, -1}, {-14, -2}, {-2, 3}, {2, -6} } },
	[72] = { .set = { {-1, -9}, {-9, -3}, {8, -3}, {-1, -8} } },
	[73] = { .set = { {-2, -7}, {-10, -3}, {5, 0}, {-2, -6} } },
	[74] = { .set = { {0, -7}, {-6, 0}, {9, -3}, {1, -6} } },
	[75] = { .set = { {-1, 0}, {-10, 2}, {9, 2}, {-1, -6} } },
	[76] = { .set = { {7, -9}, {10, -4}, {0, -1}, {2, -8} } },
	[77] = { .set = { {8, -8}, {11, -6}, {1, 2}, {2, -7} } },
	[78] = { .set = { {6, -7}, {10, -1}, {-4, -1}, {1, -6} } },
	[79] = { .set = { {7, -2}, {13, -3}, {1, 2}, {-3, -7} } },
	[80] = { .set = { {11, -12}, {8, -7}, {9, -3}, {1, -7} } },
	[81] = { .set = { {12, -10}, {2, -4}, {11, 1}, {0, -6} } },
	[82] = { .set = { {12, -9}, {12, -3}, {7, 0}, {0, -6} } },
	[83] = { .set = { {11, -4}, {11, -3}, {9, 0}, {0, -5} } },
	[84] = { .set = { {5, -15}, {-5, -9}, {11, -6}, {1, -9} } },
	[85] = { .set = { {4, -12}, {-4, -6}, {11, -4}, {0, -7} } },
	[86] = { .set = { {6, -13}, {5, -9}, {10, -3}, {2, -8} } },
	[87] = { .set = { {8, -9}, {0, -9}, {12, -4}, {1, -5} } },
	[88] = { .set = { {-1, -16}, {7, -10}, {-8, -10}, {0, -9} } },
	[89] = { .set = { {1, -14}, {8, -7}, {-8, -9}, {1, -8} } },
	[90] = { .set = { {-2, -14}, {5, -10}, {-10, -7}, {-2, -8} } },
	[91] = { .set = { {-1, -15}, {10, -11}, {-11, -11}, {0, -10} } },
	[92] = { .set = { {-6, -15}, {4, -9}, {-12, -6}, {-2, -9} } },
	[93] = { .set = { {-5, -12}, {3, -6}, {-12, -4}, {-1, -7} } },
	[94] = { .set = { {-7, -13}, {-6, -9}, {-11, -3}, {-3, -8} } },
	[95] = { .set = { {-9, -9}, {-1, -9}, {-13, -4}, {-2, -5} } },
	[96] = { .set = { {-12, -12}, {-9, -7}, {-10, -3}, {-2, -7} } },
	[97] = { .set = { {-13, -10}, {-3, -4}, {-12, 1}, {-1, -6} } },
	[98] = { .set = { {-13, -9}, {-13, -3}, {-8, 0}, {-1, -6} } },
	[99] = { .set = { {-12, -4}, {-12, -3}, {-10, 0}, {-1, -5} } },
	[100] = { .set = { {-8, -9}, {-11, -4}, {-1, -1}, {-3, -8} } },
	[101] = { .set = { {-9, -8}, {-12, -6}, {-2, 2}, {-3, -7} } },
	[102] = { .set = { {-7, -7}, {-11, -1}, {3, -1}, {-2, -6} } },
	[103] = { .set = { {-8, -2}, {-14, -3}, {-2, 2}, {2, -7} } },
	[104] = { .set = { {-1, -9}, {-9, -3}, {8, -3}, {-1, -8} } },
	[105] = { .set = { {-2, -7}, {-10, -3}, {5, 0}, {-2, -6} } },
	[106] = { .set = { {-1, 0}, {-10, 2}, {9, 2}, {-1, -6} } },
	[107] = { .set = { {-1, -13}, {-12, -12}, {11, -12}, {-1, -10} } },
	[108] = { .set = { {7, -9}, {10, -4}, {0, -1}, {2, -8} } },
	[109] = { .set = { {8, -8}, {11, -6}, {1, 2}, {2, -7} } },
	[110] = { .set = { {9, 0}, {15, -1}, {3, 4}, {-1, -5} } },
	[111] = { .set = { {6, -14}, {12, -16}, {-2, -11}, {0, -10} } },
	[112] = { .set = { {9, -12}, {6, -7}, {7, -3}, {-1, -7} } },
	[113] = { .set = { {12, -11}, {2, -5}, {11, 0}, {0, -7} } },
	[114] = { .set = { {12, -4}, {12, -3}, {10, 0}, {1, -5} } },
	[115] = { .set = { {7, -17}, {9, -20}, {8, -12}, {-1, -10} } },
	[116] = { .set = { {4, -14}, {-6, -8}, {10, -5}, {0, -8} } },
	[117] = { .set = { {3, -13}, {-5, -7}, {10, -5}, {-1, -8} } },
	[118] = { .set = { {7, -9}, {-1, -9}, {11, -4}, {0, -5} } },
	[119] = { .set = { {6, -18}, {-2, -18}, {12, -13}, {0, -12} } },
	[120] = { .set = { {-1, -14}, {7, -8}, {-8, -8}, {0, -7} } },
	[121] = { .set = { {1, -14}, {8, -7}, {-8, -9}, {1, -8} } },
	[122] = { .set = { {-1, -12}, {10, -8}, {-11, -8}, {0, -7} } },
	[123] = { .set = { {-1, -18}, {11, -15}, {-12, -15}, {0, -11} } },
	[124] = { .set = { {-5, -14}, {5, -8}, {-11, -5}, {-1, -8} } },
	[125] = { .set = { {-4, -13}, {4, -7}, {-11, -5}, {0, -8} } },
	[126] = { .set = { {-8, -9}, {0, -9}, {-12, -4}, {-1, -5} } },
	[127] = { .set = { {-7, -18}, {1, -18}, {-13, -13}, {-1, -12} } },
	[128] = { .set = { {-10, -12}, {-7, -7}, {-8, -3}, {0, -7} } },
	[129] = { .set = { {-13, -11}, {-3, -5}, {-12, 0}, {-1, -7} } },
	[130] = { .set = { {-13, -4}, {-13, -3}, {-11, 0}, {-2, -5} } },
	[131] = { .set = { {-8, -17}, {-10, -20}, {-9, -12}, {0, -10} } },
	[132] = { .set = { {-8, -9}, {-11, -4}, {-1, -1}, {-3, -8} } },
	[133] = { .set = { {-9, -8}, {-12, -6}, {-2, 2}, {-3, -7} } },
	[134] = { .set = { {-10, 0}, {-16, -1}, {-4, 4}, {0, -5} } },
	[135] = { .set = { {-7, -14}, {-13, -16}, {1, -11}, {-1, -10} } },
	[136] = { .set = { {-8, 0}, {-11, 0}, {-3, 3}, {2, -5} } },
	[137] = { .set = { {-8, 1}, {-11, 0}, {-3, 3}, {2, -5} } },
	[138] = { .set = { {-1, 1}, {-12, -12}, {10, -15}, {-1, -8} } },
	[139] = { .set = { {7, 1}, {10, -19}, {-7, -15}, {-1, -8} } },
	[140] = { .set = { {10, 1}, {4, -15}, {0, -6}, {-3, -5} } },
	[141] = { .set = { {10, -9}, {-4, -18}, {10, -11}, {-1, -5} } },
	[142] = { .set = { {-1, -9}, {10, -11}, {-11, -11}, {-1, -6} } },
	[143] = { .set = { {-9, -9}, {5, -18}, {-9, -11}, {2, -5} } },
	[144] = { .set = { {-11, 1}, {-5, -15}, {-1, -6}, {2, -5} } },
	[145] = { .set = { {-8, 1}, {-11, -19}, {6, -15}, {0, -8} } },
	[146] = { .set = { {-1, -9}, {-9, -3}, {8, -3}, {-1, -8} } },
	[147] = { .set = { {-1, -13}, {-12, -12}, {11, -12}, {-1, -10} } },
	[148] = { .set = { {7, -9}, {10, -4}, {0, -1}, {2, -8} } },
	[149] = { .set = { {6, -14}, {12, -16}, {-2, -11}, {0, -10} } },
	[150] = { .set = { {9, -12}, {6, -7}, {7, -3}, {-1, -7} } },
	[151] = { .set = { {7, -17}, {9, -20}, {8, -12}, {-1, -10} } },
	[152] = { .set = { {4, -14}, {-6, -8}, {10, -5}, {0, -8} } },
	[153] = { .set = { {6, -18}, {-2, -18}, {12, -13}, {0, -12} } },
	[154] = { .set = { {-1, -14}, {7, -8}, {-8, -8}, {0, -7} } },
	[155] = { .set = { {-1, -18}, {11, -15}, {-12, -15}, {0, -11} } },
	[156] = { .set = { {-5, -14}, {5, -8}, {-11, -5}, {-1, -8} } },
	[157] = { .set = { {-7, -18}, {1, -18}, {-13, -13}, {-1, -12} } },
	[158] = { .set = { {-10, -12}, {-7, -7}, {-8, -3}, {0, -7} } },
	[159] = { .set = { {-8, -17}, {-10, -20}, {-9, -12}, {0, -10} } },
	[160] = { .set = { {-8, -9}, {-11, -4}, {-1, -1}, {-3, -8} } },
	[161] = { .set = { {-7, -14}, {-13, -16}, {1, -11}, {-1, -10} } },
	[162] = { .set = { {-1, -13}, {-12, -12}, {11, -12}, {-1, -10} } },
	[163] = { .set = { {-6, -13}, {-12, -15}, {2, -10}, {0, -9} } },
	[164] = { .set = { {-8, -16}, {-10, -19}, {-9, -11}, {0, -9} } },
	[165] = { .set = { {-7, -18}, {1, -18}, {-13, -13}, {-1, -12} } },
	[166] = { .set = { {-1, -18}, {11, -15}, {-12, -15}, {0, -11} } },
	[167] = { .set = { {6, -18}, {-2, -18}, {12, -13}, {0, -12} } },
	[168] = { .set = { {7, -16}, {9, -19}, {8, -11}, {-1, -9} } },
	[169] = { .set = { {5, -13}, {11, -15}, {-3, -10}, {-1, -9} } },
	[170] = { .set = { {-1, -13}, {-12, -12}, {11, -12}, {-1, -10} } },
	[171] = { .set = { {5, -13}, {11, -15}, {-3, -10}, {-1, -9} } },
	[172] = { .set = { {7, -16}, {9, -19}, {8, -11}, {-1, -9} } },
	[173] = { .set = { {6, -18}, {-2, -18}, {12, -13}, {0, -12} } },
	[174] = { .set = { {-1, -18}, {11, -15}, {-12, -15}, {0, -11} } },
	[175] = { .set = { {-7, -18}, {1, -18}, {-13, -13}, {-1, -12} } },
	[176] = { .set = { {-8, -16}, {-10, -19}, {-9, -11}, {0, -9} } },
	[177] = { .set = { {-6, -13}, {-12, -15}, {2, -10}, {0, -9} } },
	[178] = { .set = { {-1, -9}, {-9, -3}, {8, -3}, {-1, -8} } },
	[179] = { .set = { {-1, 0}, {-10, 2}, {9, 2}, {-1, -6} } },
	[180] = { .set = { {-1, -13}, {-12, -12}, {11, -12}, {-1, -10} } },
	[181] = { .set = { {7, -9}, {10, -4}, {0, -1}, {2, -8} } },
	[182] = { .set = { {7, 0}, {13, -1}, {1, 4}, {-3, -5} } },
	[183] = { .set = { {6, -14}, {12, -16}, {-2, -11}, {0, -10} } },
	[184] = { .set = { {9, -12}, {6, -7}, {7, -3}, {-1, -7} } },
	[185] = { .set = { {11, -4}, {11, -3}, {9, 0}, {0, -5} } },
	[186] = { .set = { {7, -17}, {9, -20}, {8, -12}, {-1, -10} } },
	[187] = { .set = { {4, -14}, {-6, -8}, {10, -5}, {0, -8} } },
	[188] = { .set = { {9, -9}, {1, -9}, {13, -4}, {2, -5} } },
	[189] = { .set = { {6, -18}, {-2, -18}, {12, -13}, {0, -12} } },
	[190] = { .set = { {-1, -14}, {7, -8}, {-8, -8}, {0, -7} } },
	[191] = { .set = { {-1, -12}, {10, -8}, {-11, -8}, {0, -7} } },
	[192] = { .set = { {-1, -18}, {11, -15}, {-12, -15}, {0, -11} } },
	[193] = { .set = { {-5, -14}, {5, -8}, {-11, -5}, {-1, -8} } },
	[194] = { .set = { {-10, -9}, {-2, -9}, {-14, -4}, {-3, -5} } },
	[195] = { .set = { {-7, -18}, {1, -18}, {-13, -13}, {-1, -12} } },
	[196] = { .set = { {-10, -12}, {-7, -7}, {-8, -3}, {0, -7} } },
	[197] = { .set = { {-12, -4}, {-12, -3}, {-10, 0}, {-1, -5} } },
	[198] = { .set = { {-8, -17}, {-10, -20}, {-9, -12}, {0, -10} } },
	[199] = { .set = { {-8, -9}, {-11, -4}, {-1, -1}, {-3, -8} } },
	[200] = { .set = { {-8, 0}, {-14, -1}, {-2, 4}, {2, -5} } },
	[201] = { .set = { {-7, -14}, {-13, -16}, {1, -11}, {-1, -10} } },
	[202] = { .set = { {-1, 0}, {-10, 2}, {9, 2}, {-1, -6} } },
	[203] = { .set = { {-7, 0}, {-13, -1}, {-1, 4}, {3, -5} } },
	[204] = { .set = { {-10, -4}, {-10, -3}, {-8, 0}, {1, -5} } },
	[205] = { .set = { {-8, -9}, {0, -9}, {-12, -4}, {-1, -5} } },
	[206] = { .set = { {-1, -12}, {10, -8}, {-11, -8}, {0, -7} } },
	[207] = { .set = { {7, -9}, {-1, -9}, {11, -4}, {0, -5} } },
	[208] = { .set = { {9, -4}, {9, -3}, {7, 0}, {-2, -5} } },
	[209] = { .set = { {6, 0}, {12, -1}, {0, 4}, {-4, -5} } },
	[210] = { .set = { {-1, -9}, {-9, -3}, {8, -3}, {-1, -8} } },
	[211] = { .set = { {-8, -9}, {-11, -4}, {-1, -1}, {-3, -8} } },
	[212] = { .set = { {-12, -12}, {-9, -7}, {-10, -3}, {-2, -7} } },
	[213] = { .set = { {-6, -15}, {4, -9}, {-12, -6}, {-2, -9} } },
	[214] = { .set = { {-1, -16}, {7, -10}, {-8, -10}, {0, -9} } },
	[215] = { .set = { {5, -15}, {-5, -9}, {11, -6}, {1, -9} } },
	[216] = { .set = { {11, -12}, {8, -7}, {9, -3}, {1, -7} } },
	[217] = { .set = { {7, -9}, {10, -4}, {0, -1}, {2, -8} } },
};

static const ax_anim *const sSwampertAnimTable1[] = {
	gAxSharedAnim_02602,
	gAxSharedAnim_02678,
	gAxSharedAnim_02687,
	gAxSharedAnim_02696,
	gAxSharedAnim_02614,
	gAxSharedAnim_02636,
	gAxSharedAnim_02649,
	gAxSharedAnim_02658,
};

static const ax_anim *const sSwampertAnimTable2[] = {
	sSwampertAnims_2_1,
	sSwampertAnims_2_2,
	sSwampertAnims_2_3,
	sSwampertAnims_2_4,
	sSwampertAnims_2_5,
	sSwampertAnims_2_6,
	sSwampertAnims_2_7,
	sSwampertAnims_2_8,
};

static const ax_anim *const sSwampertAnimTable3[] = {
	sSwampertAnims_3_1,
	sSwampertAnims_3_2,
	sSwampertAnims_3_3,
	sSwampertAnims_3_4,
	sSwampertAnims_3_5,
	sSwampertAnims_3_6,
	sSwampertAnims_3_7,
	sSwampertAnims_3_8,
};

static const ax_anim *const sSwampertAnimTable4[] = {
	sSwampertAnims_4_1,
	sSwampertAnims_4_2,
	sSwampertAnims_4_3,
	sSwampertAnims_4_4,
	sSwampertAnims_4_5,
	sSwampertAnims_4_6,
	sSwampertAnims_4_7,
	sSwampertAnims_4_8,
};

static const ax_anim *const sSwampertAnimTable5[] = {
	sSwampertAnims_5_1,
	sSwampertAnims_5_2,
	sSwampertAnims_5_3,
	sSwampertAnims_5_4,
	sSwampertAnims_5_5,
	sSwampertAnims_5_6,
	sSwampertAnims_5_7,
	sSwampertAnims_5_8,
};

static const ax_anim *const sSwampertAnimTable6[] = {
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
	gAxSharedAnim_02365,
};

static const ax_anim *const sSwampertAnimTable7[] = {
	gAxSharedAnim_00466,
	gAxSharedAnim_00479,
	gAxSharedAnim_00487,
	gAxSharedAnim_00496,
	gAxSharedAnim_00508,
	gAxSharedAnim_00517,
	gAxSharedAnim_00523,
	gAxSharedAnim_00529,
};

static const ax_anim *const sSwampertAnimTable8[] = {
	sSwampertAnims_8_1,
	sSwampertAnims_8_2,
	sSwampertAnims_8_3,
	sSwampertAnims_8_4,
	sSwampertAnims_8_5,
	sSwampertAnims_8_6,
	sSwampertAnims_8_7,
	sSwampertAnims_8_8,
};

static const ax_anim *const sSwampertAnimTable9[] = {
	gAxSharedAnim_00698,
	sSwampertAnims_9_2,
	gAxSharedAnim_00771,
	gAxSharedAnim_00757,
	sSwampertAnims_9_5,
	gAxSharedAnim_00734,
	gAxSharedAnim_00722,
	sSwampertAnims_9_8,
};

static const ax_anim *const sSwampertAnimTable10[] = {
	gAxSharedAnim_00801,
	gAxSharedAnim_00813,
	gAxSharedAnim_00827,
	gAxSharedAnim_00838,
	gAxSharedAnim_00849,
	gAxSharedAnim_00862,
	gAxSharedAnim_00879,
	gAxSharedAnim_00889,
};

static const ax_anim *const sSwampertAnimTable11[] = {
	sSwampertAnims_11_1,
	sSwampertAnims_11_2,
	sSwampertAnims_11_3,
	sSwampertAnims_11_4,
	sSwampertAnims_11_5,
	sSwampertAnims_11_6,
	sSwampertAnims_11_7,
	sSwampertAnims_11_8,
};

static const ax_anim *const sSwampertAnimTable12[] = {
	gAxSharedAnim_01243,
	gAxSharedAnim_01326,
	gAxSharedAnim_01308,
	gAxSharedAnim_01292,
	gAxSharedAnim_01291,
	gAxSharedAnim_01280,
	gAxSharedAnim_01260,
	gAxSharedAnim_01244,
};

static const ax_anim *const sSwampertAnimTable13[] = {
	gAxSharedAnim_01335,
	gAxSharedAnim_01409,
	gAxSharedAnim_01397,
	gAxSharedAnim_01386,
	gAxSharedAnim_01374,
	gAxSharedAnim_01366,
	gAxSharedAnim_01358,
	gAxSharedAnim_01348,
};

static const ax_anim *const *const sAxAnimationsSwampert[] = {
	sSwampertAnimTable1,
	sSwampertAnimTable2,
	sSwampertAnimTable3,
	sSwampertAnimTable4,
	sSwampertAnimTable5,
	sSwampertAnimTable6,
	sSwampertAnimTable7,
	sSwampertAnimTable8,
	sSwampertAnimTable9,
	sSwampertAnimTable10,
	sSwampertAnimTable11,
	sSwampertAnimTable12,
	sSwampertAnimTable13,
};

static const ax_sprite *const sAxSpritesSwampert[] = {
	sSwampertSprites1,
	sSwampertSprites2,
	sSwampertSprites3,
	sSwampertSprites4,
	sSwampertSprites5,
	sSwampertSprites6,
	sSwampertSprites7,
	sSwampertSprites8,
	sSwampertSprites9,
	sSwampertSprites10,
	sSwampertSprites11,
	sSwampertSprites12,
	sSwampertSprites13,
	sSwampertSprites14,
	sSwampertSprites15,
	sSwampertSprites16,
	sSwampertSprites17,
	sSwampertSprites18,
	sSwampertSprites19,
	sSwampertSprites20,
	sSwampertSprites21,
	sSwampertSprites22,
	sSwampertSprites23,
	sSwampertSprites24,
	sSwampertSprites25,
	sSwampertSprites26,
	sSwampertSprites27,
	sSwampertSprites28,
	sSwampertSprites29,
	sSwampertSprites30,
	sSwampertSprites31,
	sSwampertSprites32,
	sSwampertSprites33,
	sSwampertSprites34,
	sSwampertSprites35,
	sSwampertSprites36,
	sSwampertSprites37,
	sSwampertSprites38,
	sSwampertSprites39,
};

static const axmain sAxMainSwampert = {
	.poses = sAxPosesSwampert,
	.animations = sAxAnimationsSwampert,
	.animCount = ARRAY_COUNT(sAxAnimationsSwampert),
	.spriteData = sAxSpritesSwampert,
	.positions = sAxPositionsSwampert,
};
