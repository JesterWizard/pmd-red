/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainSlaking;
const SiroArchive gAxSlaking = {"SIRO", &sAxMainSlaking};

static const ax_pose sSlakingPose1[] = {
	AX_POSE(0, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose3[] = {
	AX_POSE(2, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose6[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose9[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose12[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose13[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose14[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose15[] = {
	AX_POSE(14, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose18[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose21[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose22[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose24[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose28[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose32[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose36[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose40[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose44[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose48[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose52[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose56[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose60[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose61[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose62[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose66[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose67[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose68[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose72[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose73[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose74[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose78[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose79[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose80[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose84[] = {
	AX_POSE(32, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose85[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose86[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose90[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose91[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose92[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose96[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose97[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose98[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose102[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose103[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose104[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose106[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose109[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose112[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose115[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose118[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose121[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose124[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose127[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose130[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose132[] = {
	AX_POSE(41, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose134[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose136[] = {
	AX_POSE(43, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose138[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose140[] = {
	AX_POSE(43, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose142[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose144[] = {
	AX_POSE(41, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose145[] = {
	AX_POSE(45, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose146[] = {
	AX_POSE(46, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose147[] = {
	AX_POSE(47, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose148[] = {
	AX_POSE(48, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose149[] = {
	AX_POSE(49, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose150[] = {
	AX_POSE(50, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose151[] = {
	AX_POSE(51, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose152[] = {
	AX_POSE(50, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose153[] = {
	AX_POSE(49, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose154[] = {
	AX_POSE(48, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose172[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose173[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose174[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose176[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose177[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose178[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose184[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSlakingPose192[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const u8 sSlakingAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_2_2.lz");
static const u8 sSlakingAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_2_4.lz");
static const u8 sSlakingAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_2_5.lz");
static const u8 sSlakingAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_2_6.lz");
static const u8 sSlakingAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_2_8.lz");
static const u8 sSlakingAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_3_1.lz");
static const u8 sSlakingAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_3_2.lz");
static const u8 sSlakingAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_3_3.lz");
static const u8 sSlakingAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_3_4.lz");
static const u8 sSlakingAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_3_5.lz");
static const u8 sSlakingAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_3_6.lz");
static const u8 sSlakingAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_3_7.lz");
static const u8 sSlakingAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_3_8.lz");
static const u8 sSlakingAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_8_1.lz");
static const u8 sSlakingAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_8_2.lz");
static const u8 sSlakingAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_8_3.lz");
static const u8 sSlakingAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_8_4.lz");
static const u8 sSlakingAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_8_5.lz");
static const u8 sSlakingAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_8_6.lz");
static const u8 sSlakingAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_8_7.lz");
static const u8 sSlakingAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_8_8.lz");
static const u8 sSlakingAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_9_1.lz");
static const u8 sSlakingAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_9_2.lz");
static const u8 sSlakingAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_9_3.lz");
static const u8 sSlakingAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_9_4.lz");
static const u8 sSlakingAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_9_5.lz");
static const u8 sSlakingAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_9_6.lz");
static const u8 sSlakingAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_9_7.lz");
static const u8 sSlakingAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_9_8.lz");
static const u8 sSlakingAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_11_1.lz");
static const u8 sSlakingAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_11_2.lz");
static const u8 sSlakingAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_11_3.lz");
static const u8 sSlakingAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_11_4.lz");
static const u8 sSlakingAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_11_5.lz");
static const u8 sSlakingAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_11_6.lz");
static const u8 sSlakingAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_11_7.lz");
static const u8 sSlakingAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/slaking/sSlakingAnims_11_8.lz");

static const u8 sSlakingGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_1.4bpp.lz");
static const ax_sprite sSlakingSprites1[] = {
	{sSlakingGfx1, ARRAY_COUNT(sSlakingGfx1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_2.4bpp.lz");
static const ax_sprite sSlakingSprites2[] = {
	{sSlakingGfx2, ARRAY_COUNT(sSlakingGfx2)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_3.4bpp.lz");
static const ax_sprite sSlakingSprites3[] = {
	{sSlakingGfx3, ARRAY_COUNT(sSlakingGfx3)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_4.4bpp.lz");
static const ax_sprite sSlakingSprites4[] = {
	{sSlakingGfx4, ARRAY_COUNT(sSlakingGfx4)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_5.4bpp.lz");
static const ax_sprite sSlakingSprites5[] = {
	{sSlakingGfx5, ARRAY_COUNT(sSlakingGfx5)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_6.4bpp.lz");
static const ax_sprite sSlakingSprites6[] = {
	{sSlakingGfx6, ARRAY_COUNT(sSlakingGfx6)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_7.4bpp.lz");
static const ax_sprite sSlakingSprites7[] = {
	{sSlakingGfx7, ARRAY_COUNT(sSlakingGfx7)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_8.4bpp.lz");
static const ax_sprite sSlakingSprites8[] = {
	{sSlakingGfx8, ARRAY_COUNT(sSlakingGfx8)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_9.4bpp.lz");
static const ax_sprite sSlakingSprites9[] = {
	{sSlakingGfx9, ARRAY_COUNT(sSlakingGfx9)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_10.4bpp.lz");
static const ax_sprite sSlakingSprites10[] = {
	{sSlakingGfx10, ARRAY_COUNT(sSlakingGfx10)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_11.4bpp.lz");
static const ax_sprite sSlakingSprites11[] = {
	{sSlakingGfx11, ARRAY_COUNT(sSlakingGfx11)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_12.4bpp.lz");
static const ax_sprite sSlakingSprites12[] = {
	{sSlakingGfx12, ARRAY_COUNT(sSlakingGfx12)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_13.4bpp.lz");
static const ax_sprite sSlakingSprites13[] = {
	{sSlakingGfx13, ARRAY_COUNT(sSlakingGfx13)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_14.4bpp.lz");
static const ax_sprite sSlakingSprites14[] = {
	{sSlakingGfx14, ARRAY_COUNT(sSlakingGfx14)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_15.4bpp.lz");
static const ax_sprite sSlakingSprites15[] = {
	{sSlakingGfx15, ARRAY_COUNT(sSlakingGfx15)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_16.4bpp.lz");
static const u8 sSlakingGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_16_1.4bpp.lz");
static const ax_sprite sSlakingSprites16[] = {
	{NULL, 32}, 
	{sSlakingGfx16, ARRAY_COUNT(sSlakingGfx16)}, 
	{NULL, 64}, 
	{sSlakingGfx16_1, ARRAY_COUNT(sSlakingGfx16_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_17.4bpp.lz");
static const u8 sSlakingGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_17_1.4bpp.lz");
static const ax_sprite sSlakingSprites17[] = {
	{NULL, 32}, 
	{sSlakingGfx17, ARRAY_COUNT(sSlakingGfx17)}, 
	{NULL, 64}, 
	{sSlakingGfx17_1, ARRAY_COUNT(sSlakingGfx17_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_18.4bpp.lz");
static const u8 sSlakingGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_18_1.4bpp.lz");
static const ax_sprite sSlakingSprites18[] = {
	{sSlakingGfx18, ARRAY_COUNT(sSlakingGfx18)}, 
	{NULL, 64}, 
	{sSlakingGfx18_1, ARRAY_COUNT(sSlakingGfx18_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_19.4bpp.lz");
static const u8 sSlakingGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_19_1.4bpp.lz");
static const u8 sSlakingGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_19_2.4bpp.lz");
static const ax_sprite sSlakingSprites19[] = {
	{sSlakingGfx19, ARRAY_COUNT(sSlakingGfx19)}, 
	{NULL, 64}, 
	{sSlakingGfx19_1, ARRAY_COUNT(sSlakingGfx19_1)}, 
	{NULL, 32}, 
	{sSlakingGfx19_2, ARRAY_COUNT(sSlakingGfx19_2)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_20.4bpp.lz");
static const u8 sSlakingGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_20_1.4bpp.lz");
static const ax_sprite sSlakingSprites20[] = {
	{NULL, 32}, 
	{sSlakingGfx20, ARRAY_COUNT(sSlakingGfx20)}, 
	{NULL, 32}, 
	{sSlakingGfx20_1, ARRAY_COUNT(sSlakingGfx20_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_21.4bpp.lz");
static const u8 sSlakingGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_21_1.4bpp.lz");
static const u8 sSlakingGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_21_2.4bpp.lz");
static const u8 sSlakingGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_21_3.4bpp.lz");
static const ax_sprite sSlakingSprites21[] = {
	{sSlakingGfx21, ARRAY_COUNT(sSlakingGfx21)}, 
	{NULL, 32}, 
	{sSlakingGfx21_1, ARRAY_COUNT(sSlakingGfx21_1)}, 
	{NULL, 32}, 
	{sSlakingGfx21_2, ARRAY_COUNT(sSlakingGfx21_2)}, 
	{NULL, 32}, 
	{sSlakingGfx21_3, ARRAY_COUNT(sSlakingGfx21_3)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_22.4bpp.lz");
static const u8 sSlakingGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_22_1.4bpp.lz");
static const u8 sSlakingGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_22_2.4bpp.lz");
static const u8 sSlakingGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_22_3.4bpp.lz");
static const ax_sprite sSlakingSprites22[] = {
	{sSlakingGfx22, ARRAY_COUNT(sSlakingGfx22)}, 
	{NULL, 96}, 
	{sSlakingGfx22_1, ARRAY_COUNT(sSlakingGfx22_1)}, 
	{NULL, 96}, 
	{sSlakingGfx22_2, ARRAY_COUNT(sSlakingGfx22_2)}, 
	{NULL, 32}, 
	{sSlakingGfx22_3, ARRAY_COUNT(sSlakingGfx22_3)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_23.4bpp.lz");
static const ax_sprite sSlakingSprites23[] = {
	{NULL, 64}, 
	{sSlakingGfx23, ARRAY_COUNT(sSlakingGfx23)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_24.4bpp.lz");
static const u8 sSlakingGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_24_1.4bpp.lz");
static const ax_sprite sSlakingSprites24[] = {
	{NULL, 32}, 
	{sSlakingGfx24, ARRAY_COUNT(sSlakingGfx24)}, 
	{NULL, 32}, 
	{sSlakingGfx24_1, ARRAY_COUNT(sSlakingGfx24_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_25.4bpp.lz");
static const u8 sSlakingGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_25_1.4bpp.lz");
static const u8 sSlakingGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_25_2.4bpp.lz");
static const u8 sSlakingGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_25_3.4bpp.lz");
static const u8 sSlakingGfx25_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_25_4.4bpp.lz");
static const ax_sprite sSlakingSprites25[] = {
	{sSlakingGfx25, ARRAY_COUNT(sSlakingGfx25)}, 
	{NULL, 64}, 
	{sSlakingGfx25_1, ARRAY_COUNT(sSlakingGfx25_1)}, 
	{NULL, 96}, 
	{sSlakingGfx25_2, ARRAY_COUNT(sSlakingGfx25_2)}, 
	{NULL, 32}, 
	{sSlakingGfx25_3, ARRAY_COUNT(sSlakingGfx25_3)}, 
	{NULL, 32}, 
	{sSlakingGfx25_4, ARRAY_COUNT(sSlakingGfx25_4)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_26.4bpp.lz");
static const u8 sSlakingGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_26_1.4bpp.lz");
static const u8 sSlakingGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_26_2.4bpp.lz");
static const ax_sprite sSlakingSprites26[] = {
	{NULL, 32}, 
	{sSlakingGfx26, ARRAY_COUNT(sSlakingGfx26)}, 
	{NULL, 32}, 
	{sSlakingGfx26_1, ARRAY_COUNT(sSlakingGfx26_1)}, 
	{NULL, 32}, 
	{sSlakingGfx26_2, ARRAY_COUNT(sSlakingGfx26_2)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_27.4bpp.lz");
static const u8 sSlakingGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_27_1.4bpp.lz");
static const ax_sprite sSlakingSprites27[] = {
	{NULL, 32}, 
	{sSlakingGfx27, ARRAY_COUNT(sSlakingGfx27)}, 
	{NULL, 32}, 
	{sSlakingGfx27_1, ARRAY_COUNT(sSlakingGfx27_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_28.4bpp.lz");
static const u8 sSlakingGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_28_1.4bpp.lz");
static const u8 sSlakingGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_28_2.4bpp.lz");
static const ax_sprite sSlakingSprites28[] = {
	{sSlakingGfx28, ARRAY_COUNT(sSlakingGfx28)}, 
	{NULL, 64}, 
	{sSlakingGfx28_1, ARRAY_COUNT(sSlakingGfx28_1)}, 
	{NULL, 32}, 
	{sSlakingGfx28_2, ARRAY_COUNT(sSlakingGfx28_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSlakingGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_29.4bpp.lz");
static const u8 sSlakingGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_29_1.4bpp.lz");
static const ax_sprite sSlakingSprites29[] = {
	{NULL, 32}, 
	{sSlakingGfx29, ARRAY_COUNT(sSlakingGfx29)}, 
	{NULL, 32}, 
	{sSlakingGfx29_1, ARRAY_COUNT(sSlakingGfx29_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_30.4bpp.lz");
static const ax_sprite sSlakingSprites30[] = {
	{NULL, 32}, 
	{sSlakingGfx30, ARRAY_COUNT(sSlakingGfx30)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_31.4bpp.lz");
static const u8 sSlakingGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_31_1.4bpp.lz");
static const u8 sSlakingGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_31_2.4bpp.lz");
static const ax_sprite sSlakingSprites31[] = {
	{sSlakingGfx31, ARRAY_COUNT(sSlakingGfx31)}, 
	{NULL, 64}, 
	{sSlakingGfx31_1, ARRAY_COUNT(sSlakingGfx31_1)}, 
	{NULL, 64}, 
	{sSlakingGfx31_2, ARRAY_COUNT(sSlakingGfx31_2)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sSlakingGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_32.4bpp.lz");
static const u8 sSlakingGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_32_1.4bpp.lz");
static const ax_sprite sSlakingSprites32[] = {
	{NULL, 32}, 
	{sSlakingGfx32, ARRAY_COUNT(sSlakingGfx32)}, 
	{NULL, 64}, 
	{sSlakingGfx32_1, ARRAY_COUNT(sSlakingGfx32_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_33.4bpp.lz");
static const u8 sSlakingGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_33_1.4bpp.lz");
static const ax_sprite sSlakingSprites33[] = {
	{NULL, 32}, 
	{sSlakingGfx33, ARRAY_COUNT(sSlakingGfx33)}, 
	{NULL, 32}, 
	{sSlakingGfx33_1, ARRAY_COUNT(sSlakingGfx33_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSlakingGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_34.4bpp.lz");
static const ax_sprite sSlakingSprites34[] = {
	{sSlakingGfx34, ARRAY_COUNT(sSlakingGfx34)}, 
	{NULL, 224}, 
	{NULL, 0}
};
static const u8 sSlakingGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_35.4bpp.lz");
static const u8 sSlakingGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_35_1.4bpp.lz");
static const u8 sSlakingGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_35_2.4bpp.lz");
static const ax_sprite sSlakingSprites35[] = {
	{sSlakingGfx35, ARRAY_COUNT(sSlakingGfx35)}, 
	{NULL, 64}, 
	{sSlakingGfx35_1, ARRAY_COUNT(sSlakingGfx35_1)}, 
	{NULL, 32}, 
	{sSlakingGfx35_2, ARRAY_COUNT(sSlakingGfx35_2)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_36.4bpp.lz");
static const u8 sSlakingGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_36_1.4bpp.lz");
static const ax_sprite sSlakingSprites36[] = {
	{NULL, 32}, 
	{sSlakingGfx36, ARRAY_COUNT(sSlakingGfx36)}, 
	{NULL, 32}, 
	{sSlakingGfx36_1, ARRAY_COUNT(sSlakingGfx36_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_37.4bpp.lz");
static const u8 sSlakingGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_37_1.4bpp.lz");
static const u8 sSlakingGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_37_2.4bpp.lz");
static const ax_sprite sSlakingSprites37[] = {
	{NULL, 32}, 
	{sSlakingGfx37, ARRAY_COUNT(sSlakingGfx37)}, 
	{NULL, 32}, 
	{sSlakingGfx37_1, ARRAY_COUNT(sSlakingGfx37_1)}, 
	{NULL, 32}, 
	{sSlakingGfx37_2, ARRAY_COUNT(sSlakingGfx37_2)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_38.4bpp.lz");
static const u8 sSlakingGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_38_1.4bpp.lz");
static const u8 sSlakingGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_38_2.4bpp.lz");
static const ax_sprite sSlakingSprites38[] = {
	{NULL, 32}, 
	{sSlakingGfx38, ARRAY_COUNT(sSlakingGfx38)}, 
	{NULL, 32}, 
	{sSlakingGfx38_1, ARRAY_COUNT(sSlakingGfx38_1)}, 
	{NULL, 32}, 
	{sSlakingGfx38_2, ARRAY_COUNT(sSlakingGfx38_2)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_39.4bpp.lz");
static const u8 sSlakingGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_39_1.4bpp.lz");
static const u8 sSlakingGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_39_2.4bpp.lz");
static const ax_sprite sSlakingSprites39[] = {
	{NULL, 32}, 
	{sSlakingGfx39, ARRAY_COUNT(sSlakingGfx39)}, 
	{NULL, 32}, 
	{sSlakingGfx39_1, ARRAY_COUNT(sSlakingGfx39_1)}, 
	{NULL, 32}, 
	{sSlakingGfx39_2, ARRAY_COUNT(sSlakingGfx39_2)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_40.4bpp.lz");
static const u8 sSlakingGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_40_1.4bpp.lz");
static const ax_sprite sSlakingSprites40[] = {
	{NULL, 32}, 
	{sSlakingGfx40, ARRAY_COUNT(sSlakingGfx40)}, 
	{NULL, 32}, 
	{sSlakingGfx40_1, ARRAY_COUNT(sSlakingGfx40_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_41.4bpp.lz");
static const ax_sprite sSlakingSprites41[] = {
	{NULL, 32}, 
	{sSlakingGfx41, ARRAY_COUNT(sSlakingGfx41)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_42.4bpp.lz");
static const u8 sSlakingGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_42_1.4bpp.lz");
static const ax_sprite sSlakingSprites42[] = {
	{NULL, 32}, 
	{sSlakingGfx42, ARRAY_COUNT(sSlakingGfx42)}, 
	{NULL, 32}, 
	{sSlakingGfx42_1, ARRAY_COUNT(sSlakingGfx42_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_43.4bpp.lz");
static const u8 sSlakingGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_43_1.4bpp.lz");
static const u8 sSlakingGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_43_2.4bpp.lz");
static const ax_sprite sSlakingSprites43[] = {
	{sSlakingGfx43, ARRAY_COUNT(sSlakingGfx43)}, 
	{NULL, 32}, 
	{sSlakingGfx43_1, ARRAY_COUNT(sSlakingGfx43_1)}, 
	{NULL, 32}, 
	{sSlakingGfx43_2, ARRAY_COUNT(sSlakingGfx43_2)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_44.4bpp.lz");
static const u8 sSlakingGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_44_1.4bpp.lz");
static const ax_sprite sSlakingSprites44[] = {
	{sSlakingGfx44, ARRAY_COUNT(sSlakingGfx44)}, 
	{NULL, 32}, 
	{sSlakingGfx44_1, ARRAY_COUNT(sSlakingGfx44_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_45.4bpp.lz");
static const u8 sSlakingGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_45_1.4bpp.lz");
static const ax_sprite sSlakingSprites45[] = {
	{NULL, 32}, 
	{sSlakingGfx45, ARRAY_COUNT(sSlakingGfx45)}, 
	{NULL, 32}, 
	{sSlakingGfx45_1, ARRAY_COUNT(sSlakingGfx45_1)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_46.4bpp.lz");
static const ax_sprite sSlakingSprites46[] = {
	{sSlakingGfx46, ARRAY_COUNT(sSlakingGfx46)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_47.4bpp.lz");
static const ax_sprite sSlakingSprites47[] = {
	{sSlakingGfx47, ARRAY_COUNT(sSlakingGfx47)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_48.4bpp.lz");
static const ax_sprite sSlakingSprites48[] = {
	{sSlakingGfx48, ARRAY_COUNT(sSlakingGfx48)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_49.4bpp.lz");
static const ax_sprite sSlakingSprites49[] = {
	{sSlakingGfx49, ARRAY_COUNT(sSlakingGfx49)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_50.4bpp.lz");
static const ax_sprite sSlakingSprites50[] = {
	{sSlakingGfx50, ARRAY_COUNT(sSlakingGfx50)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_51.4bpp.lz");
static const ax_sprite sSlakingSprites51[] = {
	{sSlakingGfx51, ARRAY_COUNT(sSlakingGfx51)}, 
	{NULL, 0}
};
static const u8 sSlakingGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/slaking/sprite_52.4bpp.lz");
static const ax_sprite sSlakingSprites52[] = {
	{sSlakingGfx52, ARRAY_COUNT(sSlakingGfx52)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSlaking[] = {
	sSlakingPose1,
	sSlakingPose2,
	sSlakingPose3,
	sSlakingPose4,
	sSlakingPose5,
	sSlakingPose6,
	sSlakingPose7,
	sSlakingPose8,
	sSlakingPose9,
	sSlakingPose10,
	sSlakingPose11,
	sSlakingPose12,
	sSlakingPose13,
	sSlakingPose14,
	sSlakingPose15,
	sSlakingPose16,
	sSlakingPose17,
	sSlakingPose18,
	sSlakingPose19,
	sSlakingPose20,
	sSlakingPose21,
	sSlakingPose22,
	sSlakingPose23,
	sSlakingPose24,
	sSlakingPose1,
	sSlakingPose2,
	sSlakingPose3,
	sSlakingPose28,
	sSlakingPose4,
	sSlakingPose5,
	sSlakingPose6,
	sSlakingPose32,
	sSlakingPose7,
	sSlakingPose8,
	sSlakingPose9,
	sSlakingPose36,
	sSlakingPose10,
	sSlakingPose11,
	sSlakingPose12,
	sSlakingPose40,
	sSlakingPose13,
	sSlakingPose14,
	sSlakingPose15,
	sSlakingPose44,
	sSlakingPose16,
	sSlakingPose17,
	sSlakingPose18,
	sSlakingPose48,
	sSlakingPose19,
	sSlakingPose20,
	sSlakingPose21,
	sSlakingPose52,
	sSlakingPose22,
	sSlakingPose23,
	sSlakingPose24,
	sSlakingPose56,
	sSlakingPose1,
	sSlakingPose2,
	sSlakingPose3,
	sSlakingPose60,
	sSlakingPose61,
	sSlakingPose62,
	sSlakingPose4,
	sSlakingPose5,
	sSlakingPose6,
	sSlakingPose66,
	sSlakingPose67,
	sSlakingPose68,
	sSlakingPose7,
	sSlakingPose8,
	sSlakingPose9,
	sSlakingPose72,
	sSlakingPose73,
	sSlakingPose74,
	sSlakingPose10,
	sSlakingPose11,
	sSlakingPose12,
	sSlakingPose78,
	sSlakingPose79,
	sSlakingPose80,
	sSlakingPose13,
	sSlakingPose14,
	sSlakingPose15,
	sSlakingPose84,
	sSlakingPose85,
	sSlakingPose86,
	sSlakingPose16,
	sSlakingPose17,
	sSlakingPose18,
	sSlakingPose90,
	sSlakingPose91,
	sSlakingPose92,
	sSlakingPose19,
	sSlakingPose20,
	sSlakingPose21,
	sSlakingPose96,
	sSlakingPose97,
	sSlakingPose98,
	sSlakingPose22,
	sSlakingPose23,
	sSlakingPose24,
	sSlakingPose102,
	sSlakingPose103,
	sSlakingPose104,
	sSlakingPose1,
	sSlakingPose106,
	sSlakingPose28,
	sSlakingPose4,
	sSlakingPose109,
	sSlakingPose32,
	sSlakingPose7,
	sSlakingPose112,
	sSlakingPose36,
	sSlakingPose10,
	sSlakingPose115,
	sSlakingPose40,
	sSlakingPose13,
	sSlakingPose118,
	sSlakingPose44,
	sSlakingPose16,
	sSlakingPose121,
	sSlakingPose48,
	sSlakingPose19,
	sSlakingPose124,
	sSlakingPose52,
	sSlakingPose22,
	sSlakingPose127,
	sSlakingPose56,
	sSlakingPose1,
	sSlakingPose130,
	sSlakingPose4,
	sSlakingPose132,
	sSlakingPose7,
	sSlakingPose134,
	sSlakingPose10,
	sSlakingPose136,
	sSlakingPose13,
	sSlakingPose138,
	sSlakingPose16,
	sSlakingPose140,
	sSlakingPose19,
	sSlakingPose142,
	sSlakingPose22,
	sSlakingPose144,
	sSlakingPose145,
	sSlakingPose146,
	sSlakingPose147,
	sSlakingPose148,
	sSlakingPose149,
	sSlakingPose150,
	sSlakingPose151,
	sSlakingPose152,
	sSlakingPose153,
	sSlakingPose154,
	sSlakingPose1,
	sSlakingPose22,
	sSlakingPose19,
	sSlakingPose16,
	sSlakingPose13,
	sSlakingPose10,
	sSlakingPose7,
	sSlakingPose4,
	sSlakingPose28,
	sSlakingPose56,
	sSlakingPose52,
	sSlakingPose48,
	sSlakingPose44,
	sSlakingPose40,
	sSlakingPose36,
	sSlakingPose32,
	sSlakingPose106,
	sSlakingPose172,
	sSlakingPose173,
	sSlakingPose174,
	sSlakingPose118,
	sSlakingPose176,
	sSlakingPose177,
	sSlakingPose178,
	sSlakingPose1,
	sSlakingPose130,
	sSlakingPose4,
	sSlakingPose132,
	sSlakingPose7,
	sSlakingPose184,
	sSlakingPose10,
	sSlakingPose136,
	sSlakingPose13,
	sSlakingPose138,
	sSlakingPose16,
	sSlakingPose140,
	sSlakingPose19,
	sSlakingPose192,
	sSlakingPose22,
	sSlakingPose144,
	sSlakingPose28,
	sSlakingPose56,
	sSlakingPose52,
	sSlakingPose48,
	sSlakingPose44,
	sSlakingPose40,
	sSlakingPose36,
	sSlakingPose32,
	sSlakingPose1,
	sSlakingPose22,
	sSlakingPose19,
	sSlakingPose16,
	sSlakingPose13,
	sSlakingPose10,
	sSlakingPose7,
	sSlakingPose4,
};

static const struct PositionSets sAxPositionsSlaking[] = {
	[0] = { .set = { {0, -9}, {-7, 0}, {7, 0}, {0, -8} } },
	[1] = { .set = { {-1, -8}, {-8, 3}, {8, 1}, {-1, -7} } },
	[2] = { .set = { {1, -8}, {-8, 1}, {9, 3}, {1, -7} } },
	[3] = { .set = { {6, -9}, {10, -2}, {0, 1}, {-1, -11} } },
	[4] = { .set = { {7, -8}, {12, 0}, {-2, 1}, {0, -10} } },
	[5] = { .set = { {6, -7}, {6, -1}, {1, 3}, {-1, -9} } },
	[6] = { .set = { {8, -11}, {4, -4}, {4, 0}, {-1, -11} } },
	[7] = { .set = { {9, -11}, {10, -4}, {2, 0}, {0, -11} } },
	[8] = { .set = { {9, -10}, {2, -4}, {8, 0}, {0, -10} } },
	[9] = { .set = { {3, -14}, {-8, -8}, {7, -2}, {-2, -13} } },
	[10] = { .set = { {2, -14}, {-2, -11}, {6, -1}, {-3, -13} } },
	[11] = { .set = { {5, -14}, {-8, -6}, {10, -3}, {-1, -12} } },
	[12] = { .set = { {0, -14}, {10, -5}, {-10, -5}, {0, -11} } },
	[13] = { .set = { {1, -14}, {10, -6}, {-10, -3}, {0, -10} } },
	[14] = { .set = { {-1, -14}, {10, -3}, {-10, -6}, {0, -10} } },
	[15] = { .set = { {-3, -14}, {8, -8}, {-7, -2}, {2, -13} } },
	[16] = { .set = { {-2, -14}, {2, -11}, {-6, -1}, {3, -13} } },
	[17] = { .set = { {-5, -14}, {8, -6}, {-10, -3}, {1, -12} } },
	[18] = { .set = { {-8, -11}, {-4, -4}, {-4, 0}, {1, -11} } },
	[19] = { .set = { {-9, -11}, {-10, -4}, {-2, 0}, {0, -11} } },
	[20] = { .set = { {-9, -10}, {-2, -4}, {-8, 0}, {0, -10} } },
	[21] = { .set = { {-6, -9}, {-10, -2}, {0, 1}, {1, -11} } },
	[22] = { .set = { {-7, -8}, {-12, 0}, {2, 1}, {0, -10} } },
	[23] = { .set = { {-6, -7}, {-6, -1}, {-1, 3}, {1, -9} } },
	[24] = { .set = { {0, -9}, {-7, 0}, {7, 0}, {0, -8} } },
	[25] = { .set = { {-1, -8}, {-8, 3}, {8, 1}, {-1, -7} } },
	[26] = { .set = { {1, -8}, {-8, 1}, {9, 3}, {1, -7} } },
	[27] = { .set = { {0, -5}, {-9, 1}, {9, 1}, {0, -7} } },
	[28] = { .set = { {6, -9}, {10, -2}, {0, 1}, {-1, -11} } },
	[29] = { .set = { {7, -8}, {12, 0}, {-2, 1}, {0, -10} } },
	[30] = { .set = { {6, -7}, {6, -1}, {1, 3}, {-1, -9} } },
	[31] = { .set = { {6, -7}, {11, -1}, {-1, 2}, {0, -11} } },
	[32] = { .set = { {8, -11}, {4, -4}, {4, 0}, {-1, -11} } },
	[33] = { .set = { {9, -11}, {10, -4}, {2, 0}, {0, -11} } },
	[34] = { .set = { {9, -10}, {2, -4}, {8, 0}, {0, -10} } },
	[35] = { .set = { {9, -9}, {5, -3}, {5, 1}, {1, -10} } },
	[36] = { .set = { {3, -14}, {-8, -8}, {7, -2}, {-2, -13} } },
	[37] = { .set = { {2, -14}, {-2, -11}, {6, -1}, {-3, -13} } },
	[38] = { .set = { {5, -14}, {-8, -6}, {10, -3}, {-1, -12} } },
	[39] = { .set = { {6, -13}, {-6, -8}, {8, -2}, {0, -13} } },
	[40] = { .set = { {0, -14}, {10, -5}, {-10, -5}, {0, -11} } },
	[41] = { .set = { {1, -14}, {10, -6}, {-10, -3}, {0, -10} } },
	[42] = { .set = { {-1, -14}, {10, -3}, {-10, -6}, {0, -10} } },
	[43] = { .set = { {0, -14}, {11, -5}, {-11, -5}, {0, -12} } },
	[44] = { .set = { {-3, -14}, {8, -8}, {-7, -2}, {2, -13} } },
	[45] = { .set = { {-2, -14}, {2, -11}, {-6, -1}, {3, -13} } },
	[46] = { .set = { {-5, -14}, {8, -6}, {-10, -3}, {1, -12} } },
	[47] = { .set = { {-6, -13}, {6, -8}, {-8, -2}, {0, -13} } },
	[48] = { .set = { {-8, -11}, {-4, -4}, {-4, 0}, {1, -11} } },
	[49] = { .set = { {-9, -11}, {-10, -4}, {-2, 0}, {0, -11} } },
	[50] = { .set = { {-9, -10}, {-2, -4}, {-8, 0}, {0, -10} } },
	[51] = { .set = { {-9, -9}, {-5, -3}, {-5, 1}, {-1, -10} } },
	[52] = { .set = { {-6, -9}, {-10, -2}, {0, 1}, {1, -11} } },
	[53] = { .set = { {-7, -8}, {-12, 0}, {2, 1}, {0, -10} } },
	[54] = { .set = { {-6, -7}, {-6, -1}, {-1, 3}, {1, -9} } },
	[55] = { .set = { {-6, -7}, {-11, -1}, {1, 2}, {0, -11} } },
	[56] = { .set = { {0, -9}, {-7, 0}, {7, 0}, {0, -8} } },
	[57] = { .set = { {-1, -8}, {-8, 3}, {8, 1}, {-1, -7} } },
	[58] = { .set = { {1, -8}, {-8, 1}, {9, 3}, {1, -7} } },
	[59] = { .set = { {-5, -10}, {-8, -23}, {-3, -1}, {2, -12} } },
	[60] = { .set = { {7, -8}, {10, -2}, {11, -16}, {-2, -9} } },
	[61] = { .set = { {7, -8}, {10, -2}, {11, -16}, {-2, -9} } },
	[62] = { .set = { {6, -9}, {10, -2}, {0, 1}, {-1, -11} } },
	[63] = { .set = { {7, -8}, {12, 0}, {-2, 1}, {0, -10} } },
	[64] = { .set = { {6, -7}, {6, -1}, {1, 3}, {-1, -9} } },
	[65] = { .set = { {7, -12}, {-4, -24}, {7, -3}, {-2, -13} } },
	[66] = { .set = { {-1, -8}, {-3, 1}, {-12, -13}, {-1, -7} } },
	[67] = { .set = { {-1, -8}, {-3, 1}, {-12, -13}, {-1, -7} } },
	[68] = { .set = { {8, -11}, {4, -4}, {4, 0}, {-1, -11} } },
	[69] = { .set = { {9, -11}, {10, -4}, {2, 0}, {0, -11} } },
	[70] = { .set = { {9, -10}, {2, -4}, {8, 0}, {0, -10} } },
	[71] = { .set = { {4, -15}, {-8, -23}, {5, -7}, {-2, -14} } },
	[72] = { .set = { {5, -7}, {2, 0}, {-10, -10}, {-1, -9} } },
	[73] = { .set = { {5, -7}, {2, 0}, {-10, -10}, {-1, -9} } },
	[74] = { .set = { {3, -14}, {-8, -8}, {7, -2}, {-2, -13} } },
	[75] = { .set = { {2, -14}, {-2, -11}, {6, -1}, {-3, -13} } },
	[76] = { .set = { {5, -14}, {-8, -6}, {10, -3}, {-1, -12} } },
	[77] = { .set = { {-1, -15}, {-12, -20}, {4, -7}, {-1, -11} } },
	[78] = { .set = { {7, -10}, {11, -2}, {-3, -8}, {-2, -10} } },
	[79] = { .set = { {7, -10}, {11, -2}, {-3, -8}, {-2, -10} } },
	[80] = { .set = { {0, -14}, {10, -5}, {-10, -5}, {0, -11} } },
	[81] = { .set = { {1, -14}, {10, -6}, {-10, -3}, {0, -10} } },
	[82] = { .set = { {-1, -14}, {10, -3}, {-10, -6}, {0, -10} } },
	[83] = { .set = { {2, -15}, {9, -20}, {-3, -7}, {-3, -11} } },
	[84] = { .set = { {-6, -12}, {-13, -6}, {-5, -1}, {-1, -12} } },
	[85] = { .set = { {-6, -12}, {-13, -6}, {-5, -1}, {-1, -12} } },
	[86] = { .set = { {-3, -14}, {8, -8}, {-7, -2}, {2, -13} } },
	[87] = { .set = { {-2, -14}, {2, -11}, {-6, -1}, {3, -13} } },
	[88] = { .set = { {-5, -14}, {8, -6}, {-10, -3}, {1, -12} } },
	[89] = { .set = { {1, -15}, {12, -20}, {-4, -7}, {1, -11} } },
	[90] = { .set = { {-7, -10}, {-11, -2}, {3, -8}, {2, -10} } },
	[91] = { .set = { {-7, -10}, {-11, -2}, {3, -8}, {2, -10} } },
	[92] = { .set = { {-8, -11}, {-4, -4}, {-4, 0}, {1, -11} } },
	[93] = { .set = { {-9, -11}, {-10, -4}, {-2, 0}, {0, -11} } },
	[94] = { .set = { {-9, -10}, {-2, -4}, {-8, 0}, {0, -10} } },
	[95] = { .set = { {-4, -15}, {8, -23}, {-5, -7}, {2, -14} } },
	[96] = { .set = { {-5, -7}, {-2, 0}, {10, -10}, {1, -9} } },
	[97] = { .set = { {-5, -7}, {-2, 0}, {10, -10}, {1, -9} } },
	[98] = { .set = { {-6, -9}, {-10, -2}, {0, 1}, {1, -11} } },
	[99] = { .set = { {-7, -8}, {-12, 0}, {2, 1}, {0, -10} } },
	[100] = { .set = { {-6, -7}, {-6, -1}, {-1, 3}, {1, -9} } },
	[101] = { .set = { {-7, -12}, {4, -24}, {-7, -3}, {2, -13} } },
	[102] = { .set = { {1, -8}, {3, 1}, {12, -13}, {1, -7} } },
	[103] = { .set = { {1, -8}, {3, 1}, {12, -13}, {1, -7} } },
	[104] = { .set = { {0, -9}, {-7, 0}, {7, 0}, {0, -8} } },
	[105] = { .set = { {0, -13}, {-12, -7}, {12, -7}, {0, -12} } },
	[106] = { .set = { {0, -5}, {-9, 1}, {9, 1}, {0, -7} } },
	[107] = { .set = { {6, -9}, {10, -2}, {0, 1}, {-1, -11} } },
	[108] = { .set = { {6, -14}, {11, -10}, {-4, -5}, {-1, -13} } },
	[109] = { .set = { {6, -7}, {11, -1}, {-1, 2}, {0, -11} } },
	[110] = { .set = { {8, -11}, {4, -4}, {4, 0}, {-1, -11} } },
	[111] = { .set = { {6, -14}, {8, -11}, {4, -6}, {-2, -13} } },
	[112] = { .set = { {9, -9}, {5, -3}, {5, 1}, {1, -10} } },
	[113] = { .set = { {3, -14}, {-8, -8}, {7, -2}, {-2, -13} } },
	[114] = { .set = { {2, -16}, {-5, -15}, {8, -10}, {-4, -14} } },
	[115] = { .set = { {6, -13}, {-6, -8}, {8, -2}, {0, -13} } },
	[116] = { .set = { {0, -14}, {10, -5}, {-10, -5}, {0, -11} } },
	[117] = { .set = { {0, -16}, {11, -13}, {-11, -13}, {0, -11} } },
	[118] = { .set = { {0, -14}, {11, -5}, {-11, -5}, {0, -12} } },
	[119] = { .set = { {-3, -14}, {8, -8}, {-7, -2}, {2, -13} } },
	[120] = { .set = { {-2, -16}, {5, -15}, {-8, -10}, {4, -14} } },
	[121] = { .set = { {-6, -13}, {6, -8}, {-8, -2}, {0, -13} } },
	[122] = { .set = { {-8, -11}, {-4, -4}, {-4, 0}, {1, -11} } },
	[123] = { .set = { {-6, -14}, {-8, -11}, {-4, -6}, {2, -13} } },
	[124] = { .set = { {-9, -9}, {-5, -3}, {-5, 1}, {-1, -10} } },
	[125] = { .set = { {-6, -9}, {-10, -2}, {0, 1}, {1, -11} } },
	[126] = { .set = { {-6, -14}, {-11, -10}, {4, -5}, {1, -13} } },
	[127] = { .set = { {-6, -7}, {-11, -1}, {1, 2}, {0, -11} } },
	[128] = { .set = { {0, -9}, {-7, 0}, {7, 0}, {0, -8} } },
	[129] = { .set = { {0, -13}, {-10, -4}, {10, -4}, {0, -12} } },
	[130] = { .set = { {6, -9}, {10, -2}, {0, 1}, {-1, -11} } },
	[131] = { .set = { {6, -14}, {9, -7}, {-7, -2}, {-2, -15} } },
	[132] = { .set = { {8, -11}, {4, -4}, {4, 0}, {-1, -11} } },
	[133] = { .set = { {6, -14}, {0, -8}, {0, -2}, {-3, -14} } },
	[134] = { .set = { {3, -14}, {-8, -8}, {7, -2}, {-2, -13} } },
	[135] = { .set = { {3, -18}, {-7, -14}, {8, -5}, {-3, -14} } },
	[136] = { .set = { {0, -14}, {10, -5}, {-10, -5}, {0, -11} } },
	[137] = { .set = { {0, -18}, {10, -7}, {-10, -7}, {0, -13} } },
	[138] = { .set = { {-3, -14}, {8, -8}, {-7, -2}, {2, -13} } },
	[139] = { .set = { {-3, -18}, {7, -14}, {-8, -5}, {3, -14} } },
	[140] = { .set = { {-8, -11}, {-4, -4}, {-4, 0}, {1, -11} } },
	[141] = { .set = { {-6, -14}, {0, -8}, {0, -2}, {3, -14} } },
	[142] = { .set = { {-6, -9}, {-10, -2}, {0, 1}, {1, -11} } },
	[143] = { .set = { {-6, -14}, {-9, -7}, {7, -2}, {2, -15} } },
	[144] = { .set = { {0, -6}, {-9, -9}, {10, -7}, {-2, -7} } },
	[145] = { .set = { {-1, -6}, {-9, -8}, {9, -7}, {-3, -7} } },
	[146] = { .set = { {0, -12}, {-11, -11}, {12, -16}, {0, -11} } },
	[147] = { .set = { {-1, -16}, {10, -17}, {-13, -10}, {1, -12} } },
	[148] = { .set = { {2, -14}, {7, -19}, {-7, -10}, {1, -11} } },
	[149] = { .set = { {-1, -15}, {-3, -22}, {8, -16}, {-2, -10} } },
	[150] = { .set = { {0, -14}, {10, -17}, {-8, -20}, {0, -10} } },
	[151] = { .set = { {1, -15}, {3, -22}, {-8, -16}, {2, -10} } },
	[152] = { .set = { {-3, -14}, {-8, -19}, {6, -10}, {-2, -11} } },
	[153] = { .set = { {0, -16}, {-11, -17}, {12, -10}, {-2, -12} } },
	[154] = { .set = { {0, -9}, {-7, 0}, {7, 0}, {0, -8} } },
	[155] = { .set = { {-6, -9}, {-10, -2}, {0, 1}, {1, -11} } },
	[156] = { .set = { {-8, -11}, {-4, -4}, {-4, 0}, {1, -11} } },
	[157] = { .set = { {-3, -14}, {8, -8}, {-7, -2}, {2, -13} } },
	[158] = { .set = { {0, -14}, {10, -5}, {-10, -5}, {0, -11} } },
	[159] = { .set = { {3, -14}, {-8, -8}, {7, -2}, {-2, -13} } },
	[160] = { .set = { {8, -11}, {4, -4}, {4, 0}, {-1, -11} } },
	[161] = { .set = { {6, -9}, {10, -2}, {0, 1}, {-1, -11} } },
	[162] = { .set = { {0, -5}, {-9, 1}, {9, 1}, {0, -7} } },
	[163] = { .set = { {-6, -7}, {-11, -1}, {1, 2}, {0, -11} } },
	[164] = { .set = { {-9, -9}, {-5, -3}, {-5, 1}, {-1, -10} } },
	[165] = { .set = { {-6, -13}, {6, -8}, {-8, -2}, {0, -13} } },
	[166] = { .set = { {0, -14}, {11, -5}, {-11, -5}, {0, -12} } },
	[167] = { .set = { {6, -13}, {-6, -8}, {8, -2}, {0, -13} } },
	[168] = { .set = { {9, -9}, {5, -3}, {5, 1}, {1, -10} } },
	[169] = { .set = { {6, -7}, {11, -1}, {-1, 2}, {0, -11} } },
	[170] = { .set = { {0, -13}, {-12, -7}, {12, -7}, {0, -12} } },
	[171] = { .set = { {7, -13}, {12, -9}, {-3, -4}, {0, -12} } },
	[172] = { .set = { {8, -13}, {10, -10}, {6, -5}, {0, -12} } },
	[173] = { .set = { {4, -15}, {-3, -14}, {10, -9}, {-2, -13} } },
	[174] = { .set = { {0, -16}, {11, -13}, {-11, -13}, {0, -11} } },
	[175] = { .set = { {-4, -15}, {3, -14}, {-10, -9}, {2, -13} } },
	[176] = { .set = { {-8, -13}, {-10, -10}, {-6, -5}, {0, -12} } },
	[177] = { .set = { {-7, -13}, {-12, -9}, {3, -4}, {0, -12} } },
	[178] = { .set = { {0, -9}, {-7, 0}, {7, 0}, {0, -8} } },
	[179] = { .set = { {0, -13}, {-10, -4}, {10, -4}, {0, -12} } },
	[180] = { .set = { {6, -9}, {10, -2}, {0, 1}, {-1, -11} } },
	[181] = { .set = { {6, -14}, {9, -7}, {-7, -2}, {-2, -15} } },
	[182] = { .set = { {8, -11}, {4, -4}, {4, 0}, {-1, -11} } },
	[183] = { .set = { {8, -14}, {2, -8}, {2, -2}, {-1, -14} } },
	[184] = { .set = { {3, -14}, {-8, -8}, {7, -2}, {-2, -13} } },
	[185] = { .set = { {3, -18}, {-7, -14}, {8, -5}, {-3, -14} } },
	[186] = { .set = { {0, -14}, {10, -5}, {-10, -5}, {0, -11} } },
	[187] = { .set = { {0, -18}, {10, -7}, {-10, -7}, {0, -13} } },
	[188] = { .set = { {-3, -14}, {8, -8}, {-7, -2}, {2, -13} } },
	[189] = { .set = { {-3, -18}, {7, -14}, {-8, -5}, {3, -14} } },
	[190] = { .set = { {-8, -11}, {-4, -4}, {-4, 0}, {1, -11} } },
	[191] = { .set = { {-8, -14}, {-2, -8}, {-2, -2}, {1, -14} } },
	[192] = { .set = { {-6, -9}, {-10, -2}, {0, 1}, {1, -11} } },
	[193] = { .set = { {-6, -14}, {-9, -7}, {7, -2}, {2, -15} } },
	[194] = { .set = { {0, -5}, {-9, 1}, {9, 1}, {0, -7} } },
	[195] = { .set = { {-6, -7}, {-11, -1}, {1, 2}, {0, -11} } },
	[196] = { .set = { {-9, -9}, {-5, -3}, {-5, 1}, {-1, -10} } },
	[197] = { .set = { {-6, -13}, {6, -8}, {-8, -2}, {0, -13} } },
	[198] = { .set = { {0, -14}, {11, -5}, {-11, -5}, {0, -12} } },
	[199] = { .set = { {6, -13}, {-6, -8}, {8, -2}, {0, -13} } },
	[200] = { .set = { {9, -9}, {5, -3}, {5, 1}, {1, -10} } },
	[201] = { .set = { {6, -7}, {11, -1}, {-1, 2}, {0, -11} } },
	[202] = { .set = { {0, -9}, {-7, 0}, {7, 0}, {0, -8} } },
	[203] = { .set = { {-6, -9}, {-10, -2}, {0, 1}, {1, -11} } },
	[204] = { .set = { {-8, -11}, {-4, -4}, {-4, 0}, {1, -11} } },
	[205] = { .set = { {-3, -14}, {8, -8}, {-7, -2}, {2, -13} } },
	[206] = { .set = { {0, -14}, {10, -5}, {-10, -5}, {0, -11} } },
	[207] = { .set = { {3, -14}, {-8, -8}, {7, -2}, {-2, -13} } },
	[208] = { .set = { {8, -11}, {4, -4}, {4, 0}, {-1, -11} } },
	[209] = { .set = { {6, -9}, {10, -2}, {0, 1}, {-1, -11} } },
};

static const ax_anim *const sSlakingAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_00038),
	AX_ANIM_PTR(gAxSharedAnim_00082),
	AX_ANIM_PTR(gAxSharedAnim_00087),
	AX_ANIM_PTR(gAxSharedAnim_00092),
	AX_ANIM_PTR(gAxSharedAnim_00043),
	AX_ANIM_PTR(gAxSharedAnim_00057),
	AX_ANIM_PTR(gAxSharedAnim_00063),
	AX_ANIM_PTR(gAxSharedAnim_00068),
};

static const ax_anim *const sSlakingAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01564),
	AX_ANIM_PTR(sSlakingAnims_2_2),
	AX_ANIM_PTR(gAxSharedAnim_01826),
	AX_ANIM_PTR(sSlakingAnims_2_4),
	AX_ANIM_PTR(sSlakingAnims_2_5),
	AX_ANIM_PTR(sSlakingAnims_2_6),
	AX_ANIM_PTR(gAxSharedAnim_01967),
	AX_ANIM_PTR(sSlakingAnims_2_8),
};

static const ax_anim *const sSlakingAnimTable3[] = {
	AX_ANIM_PTR(sSlakingAnims_3_1),
	AX_ANIM_PTR(sSlakingAnims_3_2),
	AX_ANIM_PTR(sSlakingAnims_3_3),
	AX_ANIM_PTR(sSlakingAnims_3_4),
	AX_ANIM_PTR(sSlakingAnims_3_5),
	AX_ANIM_PTR(sSlakingAnims_3_6),
	AX_ANIM_PTR(sSlakingAnims_3_7),
	AX_ANIM_PTR(sSlakingAnims_3_8),
};

static const ax_anim *const sSlakingAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_00185),
	AX_ANIM_PTR(gAxSharedAnim_00208),
	AX_ANIM_PTR(gAxSharedAnim_00239),
	AX_ANIM_PTR(gAxSharedAnim_00262),
	AX_ANIM_PTR(gAxSharedAnim_00295),
	AX_ANIM_PTR(gAxSharedAnim_00323),
	AX_ANIM_PTR(gAxSharedAnim_00346),
	AX_ANIM_PTR(gAxSharedAnim_00371),
};

static const ax_anim *const sSlakingAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00014),
	AX_ANIM_PTR(gAxSharedAnim_00016),
	AX_ANIM_PTR(gAxSharedAnim_00018),
	AX_ANIM_PTR(gAxSharedAnim_00020),
	AX_ANIM_PTR(gAxSharedAnim_00022),
	AX_ANIM_PTR(gAxSharedAnim_00024),
	AX_ANIM_PTR(gAxSharedAnim_00025),
	AX_ANIM_PTR(gAxSharedAnim_00028),
};

static const ax_anim *const sSlakingAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
};

static const ax_anim *const sSlakingAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00532),
	AX_ANIM_PTR(gAxSharedAnim_00544),
	AX_ANIM_PTR(gAxSharedAnim_00552),
	AX_ANIM_PTR(gAxSharedAnim_00560),
	AX_ANIM_PTR(gAxSharedAnim_00578),
	AX_ANIM_PTR(gAxSharedAnim_00588),
	AX_ANIM_PTR(gAxSharedAnim_00597),
	AX_ANIM_PTR(gAxSharedAnim_00603),
};

static const ax_anim *const sSlakingAnimTable8[] = {
	AX_ANIM_PTR(sSlakingAnims_8_1),
	AX_ANIM_PTR(sSlakingAnims_8_2),
	AX_ANIM_PTR(sSlakingAnims_8_3),
	AX_ANIM_PTR(sSlakingAnims_8_4),
	AX_ANIM_PTR(sSlakingAnims_8_5),
	AX_ANIM_PTR(sSlakingAnims_8_6),
	AX_ANIM_PTR(sSlakingAnims_8_7),
	AX_ANIM_PTR(sSlakingAnims_8_8),
};

static const ax_anim *const sSlakingAnimTable9[] = {
	AX_ANIM_PTR(sSlakingAnims_9_1),
	AX_ANIM_PTR(sSlakingAnims_9_2),
	AX_ANIM_PTR(sSlakingAnims_9_3),
	AX_ANIM_PTR(sSlakingAnims_9_4),
	AX_ANIM_PTR(sSlakingAnims_9_5),
	AX_ANIM_PTR(sSlakingAnims_9_6),
	AX_ANIM_PTR(sSlakingAnims_9_7),
	AX_ANIM_PTR(sSlakingAnims_9_8),
};

static const ax_anim *const sSlakingAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00801),
	AX_ANIM_PTR(gAxSharedAnim_00813),
	AX_ANIM_PTR(gAxSharedAnim_00827),
	AX_ANIM_PTR(gAxSharedAnim_00838),
	AX_ANIM_PTR(gAxSharedAnim_00849),
	AX_ANIM_PTR(gAxSharedAnim_00862),
	AX_ANIM_PTR(gAxSharedAnim_00879),
	AX_ANIM_PTR(gAxSharedAnim_00889),
};

static const ax_anim *const sSlakingAnimTable11[] = {
	AX_ANIM_PTR(sSlakingAnims_11_1),
	AX_ANIM_PTR(sSlakingAnims_11_2),
	AX_ANIM_PTR(sSlakingAnims_11_3),
	AX_ANIM_PTR(sSlakingAnims_11_4),
	AX_ANIM_PTR(sSlakingAnims_11_5),
	AX_ANIM_PTR(sSlakingAnims_11_6),
	AX_ANIM_PTR(sSlakingAnims_11_7),
	AX_ANIM_PTR(sSlakingAnims_11_8),
};

static const ax_anim *const sSlakingAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01147),
	AX_ANIM_PTR(gAxSharedAnim_01230),
	AX_ANIM_PTR(gAxSharedAnim_01208),
	AX_ANIM_PTR(gAxSharedAnim_01194),
	AX_ANIM_PTR(gAxSharedAnim_01193),
	AX_ANIM_PTR(gAxSharedAnim_01181),
	AX_ANIM_PTR(gAxSharedAnim_01161),
	AX_ANIM_PTR(gAxSharedAnim_01148),
};

static const ax_anim *const sSlakingAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01242),
	AX_ANIM_PTR(gAxSharedAnim_01323),
	AX_ANIM_PTR(gAxSharedAnim_01314),
	AX_ANIM_PTR(gAxSharedAnim_01301),
	AX_ANIM_PTR(gAxSharedAnim_01286),
	AX_ANIM_PTR(gAxSharedAnim_01278),
	AX_ANIM_PTR(gAxSharedAnim_01267),
	AX_ANIM_PTR(gAxSharedAnim_01253),
};

static const ax_anim *const *const sAxAnimationsSlaking[] = {
	sSlakingAnimTable1,
	sSlakingAnimTable2,
	sSlakingAnimTable3,
	sSlakingAnimTable4,
	sSlakingAnimTable5,
	sSlakingAnimTable6,
	sSlakingAnimTable7,
	sSlakingAnimTable8,
	sSlakingAnimTable9,
	sSlakingAnimTable10,
	sSlakingAnimTable11,
	sSlakingAnimTable12,
	sSlakingAnimTable13,
};

static const ax_sprite *const sAxSpritesSlaking[] = {
	sSlakingSprites1,
	sSlakingSprites2,
	sSlakingSprites3,
	sSlakingSprites4,
	sSlakingSprites5,
	sSlakingSprites6,
	sSlakingSprites7,
	sSlakingSprites8,
	sSlakingSprites9,
	sSlakingSprites10,
	sSlakingSprites11,
	sSlakingSprites12,
	sSlakingSprites13,
	sSlakingSprites14,
	sSlakingSprites15,
	sSlakingSprites16,
	sSlakingSprites17,
	sSlakingSprites18,
	sSlakingSprites19,
	sSlakingSprites20,
	sSlakingSprites21,
	sSlakingSprites22,
	sSlakingSprites23,
	sSlakingSprites24,
	sSlakingSprites25,
	sSlakingSprites26,
	sSlakingSprites27,
	sSlakingSprites28,
	sSlakingSprites29,
	sSlakingSprites30,
	sSlakingSprites31,
	sSlakingSprites32,
	sSlakingSprites33,
	sSlakingSprites34,
	sSlakingSprites35,
	sSlakingSprites36,
	sSlakingSprites37,
	sSlakingSprites38,
	sSlakingSprites39,
	sSlakingSprites40,
	sSlakingSprites41,
	sSlakingSprites42,
	sSlakingSprites43,
	sSlakingSprites44,
	sSlakingSprites45,
	sSlakingSprites46,
	sSlakingSprites47,
	sSlakingSprites48,
	sSlakingSprites49,
	sSlakingSprites50,
	sSlakingSprites51,
	sSlakingSprites52,
};

static const axmain sAxMainSlaking = {
	.poses = sAxPosesSlaking,
	.animations = sAxAnimationsSlaking,
	.animCount = ARRAY_COUNT(sAxAnimationsSlaking),
	.spriteData = sAxSpritesSlaking,
	.positions = sAxPositionsSlaking,
};
