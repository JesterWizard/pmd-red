/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainJynx;
const SiroArchive gAxJynx = {"SIRO", &sAxMainJynx};

static const ax_pose sJynxPose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose3[] = {
	AX_POSE(2, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose13[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose15[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose16[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose17[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose18[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose19[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose20[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose21[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose22[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose23[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose24[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose28[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose32[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose36[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose40[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose44[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose48[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose52[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose56[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose60[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose61[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose62[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose66[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose67[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose68[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose72[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose73[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose74[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose78[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose79[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose80[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose84[] = {
	AX_POSE(41, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose85[] = {
	AX_POSE(42, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(43, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose86[] = {
	AX_POSE(43, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose90[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose91[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose92[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose96[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose97[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose98[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose102[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose103[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose104[] = {
	AX_POSE(34, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose106[] = {
	AX_POSE(44, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose108[] = {
	AX_POSE(45, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose110[] = {
	AX_POSE(46, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose112[] = {
	AX_POSE(47, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose114[] = {
	AX_POSE(48, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose116[] = {
	AX_POSE(49, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose118[] = {
	AX_POSE(50, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose120[] = {
	AX_POSE(51, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose122[] = {
	AX_POSE(52, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose124[] = {
	AX_POSE(53, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose126[] = {
	AX_POSE(50, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose128[] = {
	AX_POSE(51, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose130[] = {
	AX_POSE(48, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose132[] = {
	AX_POSE(49, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose134[] = {
	AX_POSE(46, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose136[] = {
	AX_POSE(47, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose145[] = {
	AX_POSE(54, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose146[] = {
	AX_POSE(55, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose147[] = {
	AX_POSE(56, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose148[] = {
	AX_POSE(57, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose149[] = {
	AX_POSE(58, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose150[] = {
	AX_POSE(59, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose151[] = {
	AX_POSE(60, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose152[] = {
	AX_POSE(59, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose153[] = {
	AX_POSE(58, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose154[] = {
	AX_POSE(57, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose180[] = {
	AX_POSE(25, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose181[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose182[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose183[] = {
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose184[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose185[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose186[] = {
	AX_POSE(25, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose188[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose225[] = {
	AX_POSE(48, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJynxPose226[] = {
	AX_POSE(46, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sJynxAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_2_2.lz");
static const u8 sJynxAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_2_5.lz");
static const u8 sJynxAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_2_8.lz");
static const u8 sJynxAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_3_1.lz");
static const u8 sJynxAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_3_2.lz");
static const u8 sJynxAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_3_3.lz");
static const u8 sJynxAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_3_4.lz");
static const u8 sJynxAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_3_5.lz");
static const u8 sJynxAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_3_6.lz");
static const u8 sJynxAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_3_7.lz");
static const u8 sJynxAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_3_8.lz");
static const u8 sJynxAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_4_1.lz");
static const u8 sJynxAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_4_2.lz");
static const u8 sJynxAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_4_3.lz");
static const u8 sJynxAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_4_4.lz");
static const u8 sJynxAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_4_5.lz");
static const u8 sJynxAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_4_6.lz");
static const u8 sJynxAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_4_7.lz");
static const u8 sJynxAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_4_8.lz");
static const u8 sJynxAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_8_1.lz");
static const u8 sJynxAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_8_2.lz");
static const u8 sJynxAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_8_3.lz");
static const u8 sJynxAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_8_4.lz");
static const u8 sJynxAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_8_5.lz");
static const u8 sJynxAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_8_6.lz");
static const u8 sJynxAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_8_7.lz");
static const u8 sJynxAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_8_8.lz");
static const u8 sJynxAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_9_2.lz");
static const u8 sJynxAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_9_3.lz");
static const u8 sJynxAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_9_4.lz");
static const u8 sJynxAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_9_6.lz");
static const u8 sJynxAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_9_7.lz");
static const u8 sJynxAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_9_8.lz");
static const u8 sJynxAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_11_2.lz");
static const u8 sJynxAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_11_3.lz");
static const u8 sJynxAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jynx/sJynxAnims_11_7.lz");

static const u8 sJynxGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_1.4bpp.lz");
static const ax_sprite sJynxSprites1[] = {
	{sJynxGfx1, ARRAY_COUNT(sJynxGfx1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_2.4bpp.lz");
static const ax_sprite sJynxSprites2[] = {
	{sJynxGfx2, ARRAY_COUNT(sJynxGfx2)}, 
	{NULL, 0}
};
static const u8 sJynxGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_3.4bpp.lz");
static const ax_sprite sJynxSprites3[] = {
	{sJynxGfx3, ARRAY_COUNT(sJynxGfx3)}, 
	{NULL, 0}
};
static const u8 sJynxGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_4.4bpp.lz");
static const ax_sprite sJynxSprites4[] = {
	{sJynxGfx4, ARRAY_COUNT(sJynxGfx4)}, 
	{NULL, 0}
};
static const u8 sJynxGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_5.4bpp.lz");
static const ax_sprite sJynxSprites5[] = {
	{sJynxGfx5, ARRAY_COUNT(sJynxGfx5)}, 
	{NULL, 0}
};
static const u8 sJynxGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_6.4bpp.lz");
static const ax_sprite sJynxSprites6[] = {
	{sJynxGfx6, ARRAY_COUNT(sJynxGfx6)}, 
	{NULL, 0}
};
static const u8 sJynxGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_7.4bpp.lz");
static const ax_sprite sJynxSprites7[] = {
	{sJynxGfx7, ARRAY_COUNT(sJynxGfx7)}, 
	{NULL, 0}
};
static const u8 sJynxGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_8.4bpp.lz");
static const ax_sprite sJynxSprites8[] = {
	{sJynxGfx8, ARRAY_COUNT(sJynxGfx8)}, 
	{NULL, 0}
};
static const u8 sJynxGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_9.4bpp.lz");
static const ax_sprite sJynxSprites9[] = {
	{sJynxGfx9, ARRAY_COUNT(sJynxGfx9)}, 
	{NULL, 0}
};
static const u8 sJynxGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_10.4bpp.lz");
static const ax_sprite sJynxSprites10[] = {
	{sJynxGfx10, ARRAY_COUNT(sJynxGfx10)}, 
	{NULL, 0}
};
static const u8 sJynxGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_11.4bpp.lz");
static const ax_sprite sJynxSprites11[] = {
	{sJynxGfx11, ARRAY_COUNT(sJynxGfx11)}, 
	{NULL, 0}
};
static const u8 sJynxGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_12.4bpp.lz");
static const ax_sprite sJynxSprites12[] = {
	{sJynxGfx12, ARRAY_COUNT(sJynxGfx12)}, 
	{NULL, 0}
};
static const u8 sJynxGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_13.4bpp.lz");
static const ax_sprite sJynxSprites13[] = {
	{sJynxGfx13, ARRAY_COUNT(sJynxGfx13)}, 
	{NULL, 0}
};
static const u8 sJynxGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_14.4bpp.lz");
static const ax_sprite sJynxSprites14[] = {
	{sJynxGfx14, ARRAY_COUNT(sJynxGfx14)}, 
	{NULL, 0}
};
static const u8 sJynxGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_15.4bpp.lz");
static const ax_sprite sJynxSprites15[] = {
	{sJynxGfx15, ARRAY_COUNT(sJynxGfx15)}, 
	{NULL, 0}
};
static const u8 sJynxGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_16.4bpp.lz");
static const ax_sprite sJynxSprites16[] = {
	{sJynxGfx16, ARRAY_COUNT(sJynxGfx16)}, 
	{NULL, 0}
};
static const u8 sJynxGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_17.4bpp.lz");
static const ax_sprite sJynxSprites17[] = {
	{sJynxGfx17, ARRAY_COUNT(sJynxGfx17)}, 
	{NULL, 0}
};
static const u8 sJynxGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_18.4bpp.lz");
static const ax_sprite sJynxSprites18[] = {
	{sJynxGfx18, ARRAY_COUNT(sJynxGfx18)}, 
	{NULL, 0}
};
static const u8 sJynxGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_19.4bpp.lz");
static const ax_sprite sJynxSprites19[] = {
	{sJynxGfx19, ARRAY_COUNT(sJynxGfx19)}, 
	{NULL, 0}
};
static const u8 sJynxGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_20.4bpp.lz");
static const ax_sprite sJynxSprites20[] = {
	{sJynxGfx20, ARRAY_COUNT(sJynxGfx20)}, 
	{NULL, 0}
};
static const u8 sJynxGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_21.4bpp.lz");
static const ax_sprite sJynxSprites21[] = {
	{sJynxGfx21, ARRAY_COUNT(sJynxGfx21)}, 
	{NULL, 0}
};
static const u8 sJynxGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_22.4bpp.lz");
static const ax_sprite sJynxSprites22[] = {
	{sJynxGfx22, ARRAY_COUNT(sJynxGfx22)}, 
	{NULL, 0}
};
static const u8 sJynxGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_23.4bpp.lz");
static const ax_sprite sJynxSprites23[] = {
	{sJynxGfx23, ARRAY_COUNT(sJynxGfx23)}, 
	{NULL, 0}
};
static const u8 sJynxGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_24.4bpp.lz");
static const ax_sprite sJynxSprites24[] = {
	{sJynxGfx24, ARRAY_COUNT(sJynxGfx24)}, 
	{NULL, 0}
};
static const u8 sJynxGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_25.4bpp.lz");
static const u8 sJynxGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_25_1.4bpp.lz");
static const ax_sprite sJynxSprites25[] = {
	{NULL, 32}, 
	{sJynxGfx25, ARRAY_COUNT(sJynxGfx25)}, 
	{NULL, 32}, 
	{sJynxGfx25_1, ARRAY_COUNT(sJynxGfx25_1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_26.4bpp.lz");
static const u8 sJynxGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_26_1.4bpp.lz");
static const ax_sprite sJynxSprites26[] = {
	{NULL, 32}, 
	{sJynxGfx26, ARRAY_COUNT(sJynxGfx26)}, 
	{NULL, 32}, 
	{sJynxGfx26_1, ARRAY_COUNT(sJynxGfx26_1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_27.4bpp.lz");
static const u8 sJynxGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_27_1.4bpp.lz");
static const u8 sJynxGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_27_2.4bpp.lz");
static const ax_sprite sJynxSprites27[] = {
	{sJynxGfx27, ARRAY_COUNT(sJynxGfx27)}, 
	{NULL, 32}, 
	{sJynxGfx27_1, ARRAY_COUNT(sJynxGfx27_1)}, 
	{NULL, 32}, 
	{sJynxGfx27_2, ARRAY_COUNT(sJynxGfx27_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJynxGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_28.4bpp.lz");
static const u8 sJynxGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_28_1.4bpp.lz");
static const ax_sprite sJynxSprites28[] = {
	{sJynxGfx28, ARRAY_COUNT(sJynxGfx28)}, 
	{NULL, 32}, 
	{sJynxGfx28_1, ARRAY_COUNT(sJynxGfx28_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJynxGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_29.4bpp.lz");
static const u8 sJynxGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_29_1.4bpp.lz");
static const ax_sprite sJynxSprites29[] = {
	{NULL, 32}, 
	{sJynxGfx29, ARRAY_COUNT(sJynxGfx29)}, 
	{NULL, 32}, 
	{sJynxGfx29_1, ARRAY_COUNT(sJynxGfx29_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJynxGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_30.4bpp.lz");
static const u8 sJynxGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_30_1.4bpp.lz");
static const ax_sprite sJynxSprites30[] = {
	{sJynxGfx30, ARRAY_COUNT(sJynxGfx30)}, 
	{NULL, 32}, 
	{sJynxGfx30_1, ARRAY_COUNT(sJynxGfx30_1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_31.4bpp.lz");
static const u8 sJynxGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_31_1.4bpp.lz");
static const u8 sJynxGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_31_2.4bpp.lz");
static const ax_sprite sJynxSprites31[] = {
	{sJynxGfx31, ARRAY_COUNT(sJynxGfx31)}, 
	{NULL, 96}, 
	{sJynxGfx31_1, ARRAY_COUNT(sJynxGfx31_1)}, 
	{NULL, 96}, 
	{sJynxGfx31_2, ARRAY_COUNT(sJynxGfx31_2)}, 
	{NULL, 0}
};
static const u8 sJynxGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_32.4bpp.lz");
static const u8 sJynxGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_32_1.4bpp.lz");
static const u8 sJynxGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_32_2.4bpp.lz");
static const ax_sprite sJynxSprites32[] = {
	{NULL, 32}, 
	{sJynxGfx32, ARRAY_COUNT(sJynxGfx32)}, 
	{NULL, 32}, 
	{sJynxGfx32_1, ARRAY_COUNT(sJynxGfx32_1)}, 
	{NULL, 32}, 
	{sJynxGfx32_2, ARRAY_COUNT(sJynxGfx32_2)}, 
	{NULL, 0}
};
static const u8 sJynxGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_33.4bpp.lz");
static const u8 sJynxGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_33_1.4bpp.lz");
static const ax_sprite sJynxSprites33[] = {
	{NULL, 32}, 
	{sJynxGfx33, ARRAY_COUNT(sJynxGfx33)}, 
	{NULL, 32}, 
	{sJynxGfx33_1, ARRAY_COUNT(sJynxGfx33_1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_34.4bpp.lz");
static const u8 sJynxGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_34_1.4bpp.lz");
static const u8 sJynxGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_34_2.4bpp.lz");
static const ax_sprite sJynxSprites34[] = {
	{sJynxGfx34, ARRAY_COUNT(sJynxGfx34)}, 
	{NULL, 64}, 
	{sJynxGfx34_1, ARRAY_COUNT(sJynxGfx34_1)}, 
	{NULL, 96}, 
	{sJynxGfx34_2, ARRAY_COUNT(sJynxGfx34_2)}, 
	{NULL, 0}
};
static const u8 sJynxGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_35.4bpp.lz");
static const u8 sJynxGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_35_1.4bpp.lz");
static const ax_sprite sJynxSprites35[] = {
	{NULL, 32}, 
	{sJynxGfx35, ARRAY_COUNT(sJynxGfx35)}, 
	{NULL, 32}, 
	{sJynxGfx35_1, ARRAY_COUNT(sJynxGfx35_1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_36.4bpp.lz");
static const ax_sprite sJynxSprites36[] = {
	{NULL, 32}, 
	{sJynxGfx36, ARRAY_COUNT(sJynxGfx36)}, 
	{NULL, 0}
};
static const u8 sJynxGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_37.4bpp.lz");
static const u8 sJynxGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_37_1.4bpp.lz");
static const u8 sJynxGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_37_2.4bpp.lz");
static const ax_sprite sJynxSprites37[] = {
	{NULL, 32}, 
	{sJynxGfx37, ARRAY_COUNT(sJynxGfx37)}, 
	{NULL, 64}, 
	{sJynxGfx37_1, ARRAY_COUNT(sJynxGfx37_1)}, 
	{NULL, 32}, 
	{sJynxGfx37_2, ARRAY_COUNT(sJynxGfx37_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJynxGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_38.4bpp.lz");
static const u8 sJynxGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_38_1.4bpp.lz");
static const ax_sprite sJynxSprites38[] = {
	{sJynxGfx38, ARRAY_COUNT(sJynxGfx38)}, 
	{NULL, 32}, 
	{sJynxGfx38_1, ARRAY_COUNT(sJynxGfx38_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJynxGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_39.4bpp.lz");
static const u8 sJynxGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_39_1.4bpp.lz");
static const ax_sprite sJynxSprites39[] = {
	{sJynxGfx39, ARRAY_COUNT(sJynxGfx39)}, 
	{NULL, 32}, 
	{sJynxGfx39_1, ARRAY_COUNT(sJynxGfx39_1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_40.4bpp.lz");
static const u8 sJynxGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_40_1.4bpp.lz");
static const ax_sprite sJynxSprites40[] = {
	{sJynxGfx40, ARRAY_COUNT(sJynxGfx40)}, 
	{NULL, 64}, 
	{sJynxGfx40_1, ARRAY_COUNT(sJynxGfx40_1)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sJynxGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_41.4bpp.lz");
static const u8 sJynxGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_41_1.4bpp.lz");
static const ax_sprite sJynxSprites41[] = {
	{NULL, 32}, 
	{sJynxGfx41, ARRAY_COUNT(sJynxGfx41)}, 
	{NULL, 32}, 
	{sJynxGfx41_1, ARRAY_COUNT(sJynxGfx41_1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_42.4bpp.lz");
static const u8 sJynxGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_42_1.4bpp.lz");
static const ax_sprite sJynxSprites42[] = {
	{sJynxGfx42, ARRAY_COUNT(sJynxGfx42)}, 
	{NULL, 32}, 
	{sJynxGfx42_1, ARRAY_COUNT(sJynxGfx42_1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_43.4bpp.lz");
static const u8 sJynxGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_43_1.4bpp.lz");
static const u8 sJynxGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_43_2.4bpp.lz");
static const u8 sJynxGfx43_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_43_3.4bpp.lz");
static const ax_sprite sJynxSprites43[] = {
	{sJynxGfx43, ARRAY_COUNT(sJynxGfx43)}, 
	{NULL, 32}, 
	{sJynxGfx43_1, ARRAY_COUNT(sJynxGfx43_1)}, 
	{NULL, 64}, 
	{sJynxGfx43_2, ARRAY_COUNT(sJynxGfx43_2)}, 
	{NULL, 96}, 
	{sJynxGfx43_3, ARRAY_COUNT(sJynxGfx43_3)}, 
	{NULL, 0}
};
static const u8 sJynxGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_44.4bpp.lz");
static const u8 sJynxGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_44_1.4bpp.lz");
static const ax_sprite sJynxSprites44[] = {
	{NULL, 32}, 
	{sJynxGfx44, ARRAY_COUNT(sJynxGfx44)}, 
	{NULL, 32}, 
	{sJynxGfx44_1, ARRAY_COUNT(sJynxGfx44_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJynxGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_45.4bpp.lz");
static const u8 sJynxGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_45_1.4bpp.lz");
static const ax_sprite sJynxSprites45[] = {
	{NULL, 32}, 
	{sJynxGfx45, ARRAY_COUNT(sJynxGfx45)}, 
	{NULL, 32}, 
	{sJynxGfx45_1, ARRAY_COUNT(sJynxGfx45_1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_46.4bpp.lz");
static const ax_sprite sJynxSprites46[] = {
	{sJynxGfx46, ARRAY_COUNT(sJynxGfx46)}, 
	{NULL, 0}
};
static const u8 sJynxGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_47.4bpp.lz");
static const u8 sJynxGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_47_1.4bpp.lz");
static const ax_sprite sJynxSprites47[] = {
	{NULL, 32}, 
	{sJynxGfx47, ARRAY_COUNT(sJynxGfx47)}, 
	{NULL, 32}, 
	{sJynxGfx47_1, ARRAY_COUNT(sJynxGfx47_1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_48.4bpp.lz");
static const ax_sprite sJynxSprites48[] = {
	{sJynxGfx48, ARRAY_COUNT(sJynxGfx48)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJynxGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_49.4bpp.lz");
static const u8 sJynxGfx49_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_49_1.4bpp.lz");
static const u8 sJynxGfx49_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_49_2.4bpp.lz");
static const ax_sprite sJynxSprites49[] = {
	{NULL, 32}, 
	{sJynxGfx49, ARRAY_COUNT(sJynxGfx49)}, 
	{NULL, 32}, 
	{sJynxGfx49_1, ARRAY_COUNT(sJynxGfx49_1)}, 
	{NULL, 32}, 
	{sJynxGfx49_2, ARRAY_COUNT(sJynxGfx49_2)}, 
	{NULL, 0}
};
static const u8 sJynxGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_50.4bpp.lz");
static const u8 sJynxGfx50_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_50_1.4bpp.lz");
static const u8 sJynxGfx50_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_50_2.4bpp.lz");
static const u8 sJynxGfx50_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_50_3.4bpp.lz");
static const ax_sprite sJynxSprites50[] = {
	{sJynxGfx50, ARRAY_COUNT(sJynxGfx50)}, 
	{NULL, 32}, 
	{sJynxGfx50_1, ARRAY_COUNT(sJynxGfx50_1)}, 
	{NULL, 32}, 
	{sJynxGfx50_2, ARRAY_COUNT(sJynxGfx50_2)}, 
	{NULL, 32}, 
	{sJynxGfx50_3, ARRAY_COUNT(sJynxGfx50_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJynxGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_51.4bpp.lz");
static const u8 sJynxGfx51_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_51_1.4bpp.lz");
static const ax_sprite sJynxSprites51[] = {
	{NULL, 32}, 
	{sJynxGfx51, ARRAY_COUNT(sJynxGfx51)}, 
	{NULL, 32}, 
	{sJynxGfx51_1, ARRAY_COUNT(sJynxGfx51_1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_52.4bpp.lz");
static const u8 sJynxGfx52_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_52_1.4bpp.lz");
static const u8 sJynxGfx52_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_52_2.4bpp.lz");
static const ax_sprite sJynxSprites52[] = {
	{sJynxGfx52, ARRAY_COUNT(sJynxGfx52)}, 
	{NULL, 32}, 
	{sJynxGfx52_1, ARRAY_COUNT(sJynxGfx52_1)}, 
	{NULL, 32}, 
	{sJynxGfx52_2, ARRAY_COUNT(sJynxGfx52_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJynxGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_53.4bpp.lz");
static const u8 sJynxGfx53_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_53_1.4bpp.lz");
static const ax_sprite sJynxSprites53[] = {
	{NULL, 32}, 
	{sJynxGfx53, ARRAY_COUNT(sJynxGfx53)}, 
	{NULL, 32}, 
	{sJynxGfx53_1, ARRAY_COUNT(sJynxGfx53_1)}, 
	{NULL, 0}
};
static const u8 sJynxGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_54.4bpp.lz");
static const u8 sJynxGfx54_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_54_1.4bpp.lz");
static const u8 sJynxGfx54_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_54_2.4bpp.lz");
static const ax_sprite sJynxSprites54[] = {
	{NULL, 32}, 
	{sJynxGfx54, ARRAY_COUNT(sJynxGfx54)}, 
	{NULL, 32}, 
	{sJynxGfx54_1, ARRAY_COUNT(sJynxGfx54_1)}, 
	{NULL, 32}, 
	{sJynxGfx54_2, ARRAY_COUNT(sJynxGfx54_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJynxGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_55.4bpp.lz");
static const ax_sprite sJynxSprites55[] = {
	{sJynxGfx55, ARRAY_COUNT(sJynxGfx55)}, 
	{NULL, 0}
};
static const u8 sJynxGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_56.4bpp.lz");
static const ax_sprite sJynxSprites56[] = {
	{sJynxGfx56, ARRAY_COUNT(sJynxGfx56)}, 
	{NULL, 0}
};
static const u8 sJynxGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_57.4bpp.lz");
static const ax_sprite sJynxSprites57[] = {
	{sJynxGfx57, ARRAY_COUNT(sJynxGfx57)}, 
	{NULL, 0}
};
static const u8 sJynxGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_58.4bpp.lz");
static const ax_sprite sJynxSprites58[] = {
	{sJynxGfx58, ARRAY_COUNT(sJynxGfx58)}, 
	{NULL, 0}
};
static const u8 sJynxGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_59.4bpp.lz");
static const ax_sprite sJynxSprites59[] = {
	{sJynxGfx59, ARRAY_COUNT(sJynxGfx59)}, 
	{NULL, 0}
};
static const u8 sJynxGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_60.4bpp.lz");
static const ax_sprite sJynxSprites60[] = {
	{sJynxGfx60, ARRAY_COUNT(sJynxGfx60)}, 
	{NULL, 0}
};
static const u8 sJynxGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jynx/sprite_61.4bpp.lz");
static const ax_sprite sJynxSprites61[] = {
	{sJynxGfx61, ARRAY_COUNT(sJynxGfx61)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesJynx[] = {
	sJynxPose1,
	sJynxPose2,
	sJynxPose3,
	sJynxPose4,
	sJynxPose5,
	sJynxPose6,
	sJynxPose7,
	sJynxPose8,
	sJynxPose9,
	sJynxPose10,
	sJynxPose11,
	sJynxPose12,
	sJynxPose13,
	sJynxPose14,
	sJynxPose15,
	sJynxPose16,
	sJynxPose17,
	sJynxPose18,
	sJynxPose19,
	sJynxPose20,
	sJynxPose21,
	sJynxPose22,
	sJynxPose23,
	sJynxPose24,
	sJynxPose1,
	sJynxPose2,
	sJynxPose3,
	sJynxPose28,
	sJynxPose4,
	sJynxPose5,
	sJynxPose6,
	sJynxPose32,
	sJynxPose7,
	sJynxPose8,
	sJynxPose9,
	sJynxPose36,
	sJynxPose10,
	sJynxPose11,
	sJynxPose12,
	sJynxPose40,
	sJynxPose13,
	sJynxPose14,
	sJynxPose15,
	sJynxPose44,
	sJynxPose16,
	sJynxPose17,
	sJynxPose18,
	sJynxPose48,
	sJynxPose19,
	sJynxPose20,
	sJynxPose21,
	sJynxPose52,
	sJynxPose22,
	sJynxPose23,
	sJynxPose24,
	sJynxPose56,
	sJynxPose1,
	sJynxPose2,
	sJynxPose3,
	sJynxPose60,
	sJynxPose61,
	sJynxPose62,
	sJynxPose4,
	sJynxPose5,
	sJynxPose6,
	sJynxPose66,
	sJynxPose67,
	sJynxPose68,
	sJynxPose7,
	sJynxPose8,
	sJynxPose9,
	sJynxPose72,
	sJynxPose73,
	sJynxPose74,
	sJynxPose10,
	sJynxPose11,
	sJynxPose12,
	sJynxPose78,
	sJynxPose79,
	sJynxPose80,
	sJynxPose13,
	sJynxPose14,
	sJynxPose15,
	sJynxPose84,
	sJynxPose85,
	sJynxPose86,
	sJynxPose16,
	sJynxPose17,
	sJynxPose18,
	sJynxPose90,
	sJynxPose91,
	sJynxPose92,
	sJynxPose19,
	sJynxPose20,
	sJynxPose21,
	sJynxPose96,
	sJynxPose97,
	sJynxPose98,
	sJynxPose22,
	sJynxPose23,
	sJynxPose24,
	sJynxPose102,
	sJynxPose103,
	sJynxPose104,
	sJynxPose1,
	sJynxPose106,
	sJynxPose28,
	sJynxPose108,
	sJynxPose4,
	sJynxPose110,
	sJynxPose32,
	sJynxPose112,
	sJynxPose7,
	sJynxPose114,
	sJynxPose36,
	sJynxPose116,
	sJynxPose10,
	sJynxPose118,
	sJynxPose40,
	sJynxPose120,
	sJynxPose13,
	sJynxPose122,
	sJynxPose44,
	sJynxPose124,
	sJynxPose16,
	sJynxPose126,
	sJynxPose48,
	sJynxPose128,
	sJynxPose19,
	sJynxPose130,
	sJynxPose52,
	sJynxPose132,
	sJynxPose22,
	sJynxPose134,
	sJynxPose56,
	sJynxPose136,
	sJynxPose1,
	sJynxPose22,
	sJynxPose19,
	sJynxPose16,
	sJynxPose13,
	sJynxPose10,
	sJynxPose7,
	sJynxPose4,
	sJynxPose145,
	sJynxPose146,
	sJynxPose147,
	sJynxPose148,
	sJynxPose149,
	sJynxPose150,
	sJynxPose151,
	sJynxPose152,
	sJynxPose153,
	sJynxPose154,
	sJynxPose1,
	sJynxPose2,
	sJynxPose3,
	sJynxPose4,
	sJynxPose5,
	sJynxPose6,
	sJynxPose7,
	sJynxPose8,
	sJynxPose9,
	sJynxPose10,
	sJynxPose11,
	sJynxPose12,
	sJynxPose13,
	sJynxPose14,
	sJynxPose15,
	sJynxPose16,
	sJynxPose17,
	sJynxPose18,
	sJynxPose19,
	sJynxPose20,
	sJynxPose21,
	sJynxPose22,
	sJynxPose23,
	sJynxPose24,
	sJynxPose28,
	sJynxPose180,
	sJynxPose181,
	sJynxPose182,
	sJynxPose183,
	sJynxPose184,
	sJynxPose185,
	sJynxPose186,
	sJynxPose60,
	sJynxPose188,
	sJynxPose72,
	sJynxPose78,
	sJynxPose84,
	sJynxPose90,
	sJynxPose96,
	sJynxPose102,
	sJynxPose1,
	sJynxPose106,
	sJynxPose28,
	sJynxPose4,
	sJynxPose110,
	sJynxPose32,
	sJynxPose7,
	sJynxPose114,
	sJynxPose185,
	sJynxPose10,
	sJynxPose118,
	sJynxPose184,
	sJynxPose13,
	sJynxPose122,
	sJynxPose44,
	sJynxPose16,
	sJynxPose126,
	sJynxPose182,
	sJynxPose19,
	sJynxPose130,
	sJynxPose181,
	sJynxPose22,
	sJynxPose134,
	sJynxPose56,
	sJynxPose106,
	sJynxPose134,
	sJynxPose130,
	sJynxPose126,
	sJynxPose122,
	sJynxPose118,
	sJynxPose225,
	sJynxPose226,
	sJynxPose1,
	sJynxPose22,
	sJynxPose19,
	sJynxPose16,
	sJynxPose13,
	sJynxPose10,
	sJynxPose7,
	sJynxPose4,
};

static const struct PositionSets sAxPositionsJynx[] = {
	[0] = { .set = { {-1, -11}, {-11, -9}, {5, -5}, {-1, -8} } },
	[1] = { .set = { {-2, -10}, {-13, -9}, {3, -4}, {-2, -7} } },
	[2] = { .set = { {0, -10}, {-9, -8}, {8, -6}, {0, -7} } },
	[3] = { .set = { {2, -12}, {-5, -8}, {8, -8}, {-1, -9} } },
	[4] = { .set = { {2, -11}, {-8, -8}, {6, -5}, {-1, -9} } },
	[5] = { .set = { {4, -11}, {-2, -6}, {9, -9}, {0, -9} } },
	[6] = { .set = { {7, -13}, {2, -8}, {7, -8}, {0, -10} } },
	[7] = { .set = { {6, -12}, {0, -8}, {7, -7}, {0, -9} } },
	[8] = { .set = { {7, -11}, {7, -5}, {7, -8}, {1, -9} } },
	[9] = { .set = { {4, -16}, {8, -9}, {-1, -16}, {0, -10} } },
	[10] = { .set = { {4, -15}, {6, -7}, {3, -11}, {0, -9} } },
	[11] = { .set = { {5, -14}, {10, -9}, {2, -13}, {-1, -9} } },
	[12] = { .set = { {-1, -17}, {9, -12}, {-5, -13}, {-1, -11} } },
	[13] = { .set = { {0, -17}, {10, -10}, {-1, -13}, {-1, -10} } },
	[14] = { .set = { {-2, -17}, {7, -13}, {-5, -11}, {-1, -10} } },
	[15] = { .set = { {-4, -15}, {5, -16}, {-8, -10}, {0, -10} } },
	[16] = { .set = { {-4, -14}, {7, -15}, {-8, -12}, {0, -9} } },
	[17] = { .set = { {-5, -14}, {1, -13}, {-10, -10}, {0, -10} } },
	[18] = { .set = { {-9, -13}, {-8, -11}, {-6, -6}, {-2, -8} } },
	[19] = { .set = { {-9, -12}, {-9, -11}, {-9, -5}, {-2, -8} } },
	[20] = { .set = { {-9, -12}, {-10, -11}, {-3, -4}, {-1, -8} } },
	[21] = { .set = { {-4, -12}, {-11, -11}, {-1, -4}, {-3, -9} } },
	[22] = { .set = { {-5, -11}, {-10, -12}, {-3, -4}, {-2, -7} } },
	[23] = { .set = { {-3, -11}, {-12, -8}, {2, -4}, {-1, -8} } },
	[24] = { .set = { {-1, -11}, {-11, -9}, {5, -5}, {-1, -8} } },
	[25] = { .set = { {-2, -10}, {-13, -9}, {3, -4}, {-2, -7} } },
	[26] = { .set = { {0, -10}, {-9, -8}, {8, -6}, {0, -7} } },
	[27] = { .set = { {-1, -8}, {-13, -10}, {11, -10}, {-1, -7} } },
	[28] = { .set = { {2, -12}, {-5, -8}, {8, -8}, {-1, -9} } },
	[29] = { .set = { {2, -11}, {-8, -8}, {6, -5}, {-1, -9} } },
	[30] = { .set = { {4, -11}, {-2, -6}, {9, -9}, {0, -9} } },
	[31] = { .set = { {3, -10}, {11, -13}, {-12, -9}, {0, -7} } },
	[32] = { .set = { {7, -13}, {2, -8}, {7, -8}, {0, -10} } },
	[33] = { .set = { {6, -12}, {0, -8}, {7, -7}, {0, -9} } },
	[34] = { .set = { {7, -11}, {7, -5}, {7, -8}, {1, -9} } },
	[35] = { .set = { {11, -11}, {0, -16}, {-3, -5}, {1, -8} } },
	[36] = { .set = { {4, -16}, {8, -9}, {-1, -16}, {0, -10} } },
	[37] = { .set = { {4, -15}, {6, -7}, {3, -11}, {0, -9} } },
	[38] = { .set = { {5, -14}, {10, -9}, {2, -13}, {-1, -9} } },
	[39] = { .set = { {6, -15}, {-7, -10}, {11, -5}, {0, -10} } },
	[40] = { .set = { {-1, -17}, {9, -12}, {-5, -13}, {-1, -11} } },
	[41] = { .set = { {0, -17}, {10, -10}, {-1, -13}, {-1, -10} } },
	[42] = { .set = { {-2, -17}, {7, -13}, {-5, -11}, {-1, -10} } },
	[43] = { .set = { {-1, -20}, {12, -10}, {-14, -10}, {-1, -14} } },
	[44] = { .set = { {-4, -15}, {5, -16}, {-8, -10}, {0, -10} } },
	[45] = { .set = { {-4, -14}, {7, -15}, {-8, -12}, {0, -9} } },
	[46] = { .set = { {-5, -14}, {1, -13}, {-10, -10}, {0, -10} } },
	[47] = { .set = { {-8, -15}, {5, -10}, {-13, -5}, {-2, -10} } },
	[48] = { .set = { {-9, -13}, {-8, -11}, {-6, -6}, {-2, -8} } },
	[49] = { .set = { {-9, -12}, {-9, -11}, {-9, -5}, {-2, -8} } },
	[50] = { .set = { {-9, -12}, {-10, -11}, {-3, -4}, {-1, -8} } },
	[51] = { .set = { {-13, -11}, {-2, -16}, {1, -5}, {-3, -8} } },
	[52] = { .set = { {-4, -12}, {-11, -11}, {-1, -4}, {-3, -9} } },
	[53] = { .set = { {-5, -11}, {-10, -12}, {-3, -4}, {-2, -7} } },
	[54] = { .set = { {-3, -11}, {-12, -8}, {2, -4}, {-1, -8} } },
	[55] = { .set = { {-5, -10}, {-13, -13}, {10, -9}, {-2, -7} } },
	[56] = { .set = { {-1, -11}, {-11, -9}, {5, -5}, {-1, -8} } },
	[57] = { .set = { {-2, -10}, {-13, -9}, {3, -4}, {-2, -7} } },
	[58] = { .set = { {0, -10}, {-9, -8}, {8, -6}, {0, -7} } },
	[59] = { .set = { {-1, -12}, {-9, -18}, {0, -6}, {1, -9} } },
	[60] = { .set = { {4, -11}, {9, -7}, {8, -12}, {1, -10} } },
	[61] = { .set = { {4, -11}, {9, -7}, {8, -12}, {1, -10} } },
	[62] = { .set = { {2, -12}, {-5, -8}, {8, -8}, {-1, -9} } },
	[63] = { .set = { {2, -11}, {-8, -8}, {6, -5}, {-1, -9} } },
	[64] = { .set = { {4, -11}, {-2, -6}, {9, -9}, {0, -9} } },
	[65] = { .set = { {2, -12}, {4, -21}, {5, -9}, {-2, -9} } },
	[66] = { .set = { {-2, -11}, {-7, -5}, {-10, -10}, {-2, -9} } },
	[67] = { .set = { {-2, -11}, {-7, -5}, {-10, -10}, {-2, -9} } },
	[68] = { .set = { {7, -13}, {2, -8}, {7, -8}, {0, -10} } },
	[69] = { .set = { {6, -12}, {0, -8}, {7, -7}, {0, -9} } },
	[70] = { .set = { {7, -11}, {7, -5}, {7, -8}, {1, -9} } },
	[71] = { .set = { {1, -14}, {-11, -20}, {8, -12}, {-1, -10} } },
	[72] = { .set = { {5, -12}, {3, -4}, {-9, -11}, {0, -9} } },
	[73] = { .set = { {5, -12}, {3, -4}, {-9, -11}, {0, -9} } },
	[74] = { .set = { {4, -16}, {8, -9}, {-1, -16}, {0, -10} } },
	[75] = { .set = { {4, -15}, {6, -7}, {3, -11}, {0, -9} } },
	[76] = { .set = { {5, -14}, {10, -9}, {2, -13}, {-1, -9} } },
	[77] = { .set = { {2, -15}, {-14, -15}, {4, -15}, {-1, -10} } },
	[78] = { .set = { {3, -14}, {10, -9}, {-1, -7}, {-3, -9} } },
	[79] = { .set = { {3, -14}, {10, -9}, {-1, -7}, {-3, -9} } },
	[80] = { .set = { {-1, -17}, {9, -12}, {-5, -13}, {-1, -11} } },
	[81] = { .set = { {0, -17}, {10, -10}, {-1, -13}, {-1, -10} } },
	[82] = { .set = { {-2, -17}, {7, -13}, {-5, -11}, {-1, -10} } },
	[83] = { .set = { {1, -13}, {10, -8}, {-2, -16}, {-4, -11} } },
	[84] = { .set = { {-5, -16}, {-10, -13}, {-5, -7}, {1, -11} } },
	[85] = { .set = { {-5, -16}, {-10, -13}, {-5, -7}, {1, -11} } },
	[86] = { .set = { {-4, -15}, {5, -16}, {-8, -10}, {0, -10} } },
	[87] = { .set = { {-4, -14}, {7, -15}, {-8, -12}, {0, -9} } },
	[88] = { .set = { {-5, -14}, {1, -13}, {-10, -10}, {0, -10} } },
	[89] = { .set = { {-4, -15}, {12, -15}, {-6, -15}, {-1, -10} } },
	[90] = { .set = { {-5, -14}, {-12, -9}, {-1, -7}, {1, -9} } },
	[91] = { .set = { {-5, -14}, {-12, -9}, {-1, -7}, {1, -9} } },
	[92] = { .set = { {-9, -13}, {-8, -11}, {-6, -6}, {-2, -8} } },
	[93] = { .set = { {-9, -12}, {-9, -11}, {-9, -5}, {-2, -8} } },
	[94] = { .set = { {-9, -12}, {-10, -11}, {-3, -4}, {-1, -8} } },
	[95] = { .set = { {-3, -14}, {9, -20}, {-10, -12}, {-1, -10} } },
	[96] = { .set = { {-7, -12}, {-5, -4}, {7, -11}, {-2, -9} } },
	[97] = { .set = { {-7, -12}, {-5, -4}, {7, -11}, {-2, -9} } },
	[98] = { .set = { {-4, -12}, {-11, -11}, {-1, -4}, {-3, -9} } },
	[99] = { .set = { {-5, -11}, {-10, -12}, {-3, -4}, {-2, -7} } },
	[100] = { .set = { {-3, -11}, {-12, -8}, {2, -4}, {-1, -8} } },
	[101] = { .set = { {-4, -12}, {-6, -21}, {-7, -9}, {0, -9} } },
	[102] = { .set = { {0, -11}, {5, -5}, {8, -10}, {0, -9} } },
	[103] = { .set = { {0, -11}, {5, -5}, {8, -10}, {0, -9} } },
	[104] = { .set = { {-1, -11}, {-11, -9}, {5, -5}, {-1, -8} } },
	[105] = { .set = { {-1, -13}, {-4, -13}, {2, -13}, {-1, -11} } },
	[106] = { .set = { {-1, -8}, {-13, -10}, {11, -10}, {-1, -7} } },
	[107] = { .set = { {-1, -6}, {-12, -11}, {10, -11}, {-1, -7} } },
	[108] = { .set = { {2, -12}, {-5, -8}, {8, -8}, {-1, -9} } },
	[109] = { .set = { {0, -13}, {3, -13}, {-2, -12}, {-1, -10} } },
	[110] = { .set = { {3, -10}, {11, -13}, {-12, -9}, {0, -7} } },
	[111] = { .set = { {5, -8}, {10, -15}, {-11, -10}, {1, -8} } },
	[112] = { .set = { {7, -13}, {2, -8}, {7, -8}, {0, -10} } },
	[113] = { .set = { {3, -14}, {6, -14}, {5, -13}, {-3, -10} } },
	[114] = { .set = { {11, -11}, {0, -16}, {-3, -5}, {1, -8} } },
	[115] = { .set = { {12, -10}, {0, -15}, {-3, -6}, {2, -7} } },
	[116] = { .set = { {4, -16}, {8, -9}, {-1, -16}, {0, -10} } },
	[117] = { .set = { {3, -15}, {1, -17}, {5, -15}, {-2, -10} } },
	[118] = { .set = { {6, -15}, {-7, -10}, {11, -5}, {0, -10} } },
	[119] = { .set = { {9, -16}, {-5, -11}, {10, -7}, {2, -10} } },
	[120] = { .set = { {-1, -17}, {9, -12}, {-5, -13}, {-1, -11} } },
	[121] = { .set = { {-1, -17}, {3, -17}, {-5, -17}, {-1, -10} } },
	[122] = { .set = { {-1, -20}, {12, -10}, {-14, -10}, {-1, -14} } },
	[123] = { .set = { {-1, -21}, {11, -12}, {-13, -12}, {-1, -15} } },
	[124] = { .set = { {-4, -15}, {5, -16}, {-8, -10}, {0, -10} } },
	[125] = { .set = { {-5, -15}, {-3, -17}, {-7, -15}, {0, -10} } },
	[126] = { .set = { {-8, -15}, {5, -10}, {-13, -5}, {-2, -10} } },
	[127] = { .set = { {-11, -16}, {3, -11}, {-12, -7}, {-4, -10} } },
	[128] = { .set = { {-9, -13}, {-8, -11}, {-6, -6}, {-2, -8} } },
	[129] = { .set = { {-5, -14}, {-8, -14}, {-7, -13}, {1, -10} } },
	[130] = { .set = { {-13, -11}, {-2, -16}, {1, -5}, {-3, -8} } },
	[131] = { .set = { {-14, -10}, {-2, -15}, {1, -6}, {-4, -7} } },
	[132] = { .set = { {-4, -12}, {-11, -11}, {-1, -4}, {-3, -9} } },
	[133] = { .set = { {-2, -13}, {-5, -13}, {0, -12}, {-1, -10} } },
	[134] = { .set = { {-5, -10}, {-13, -13}, {10, -9}, {-2, -7} } },
	[135] = { .set = { {-7, -8}, {-12, -15}, {9, -10}, {-3, -8} } },
	[136] = { .set = { {-1, -11}, {-11, -9}, {5, -5}, {-1, -8} } },
	[137] = { .set = { {-4, -12}, {-11, -11}, {-1, -4}, {-3, -9} } },
	[138] = { .set = { {-9, -13}, {-8, -11}, {-6, -6}, {-2, -8} } },
	[139] = { .set = { {-4, -15}, {5, -16}, {-8, -10}, {0, -10} } },
	[140] = { .set = { {-1, -17}, {9, -12}, {-5, -13}, {-1, -11} } },
	[141] = { .set = { {4, -16}, {8, -9}, {-1, -16}, {0, -10} } },
	[142] = { .set = { {7, -13}, {2, -8}, {7, -8}, {0, -10} } },
	[143] = { .set = { {2, -12}, {-5, -8}, {8, -8}, {-1, -9} } },
	[144] = { .set = { {-4, -11}, {-10, -6}, {1, 0}, {-1, -7} } },
	[145] = { .set = { {-5, -9}, {-10, -3}, {0, 1}, {-1, -7} } },
	[146] = { .set = { {-1, -13}, {-5, -12}, {5, -13}, {-1, -10} } },
	[147] = { .set = { {2, -13}, {7, -13}, {-2, -12}, {0, -10} } },
	[148] = { .set = { {5, -15}, {5, -16}, {2, -12}, {-2, -11} } },
	[149] = { .set = { {1, -17}, {-2, -19}, {7, -15}, {-2, -13} } },
	[150] = { .set = { {-1, -20}, {6, -17}, {-8, -17}, {-1, -14} } },
	[151] = { .set = { {-2, -17}, {1, -19}, {-8, -15}, {1, -13} } },
	[152] = { .set = { {-6, -15}, {-6, -16}, {-3, -12}, {1, -11} } },
	[153] = { .set = { {-3, -13}, {-8, -13}, {1, -12}, {-1, -10} } },
	[154] = { .set = { {-1, -11}, {-11, -9}, {5, -5}, {-1, -8} } },
	[155] = { .set = { {-2, -10}, {-13, -9}, {3, -4}, {-2, -7} } },
	[156] = { .set = { {0, -10}, {-9, -8}, {8, -6}, {0, -7} } },
	[157] = { .set = { {2, -12}, {-5, -8}, {8, -8}, {-1, -9} } },
	[158] = { .set = { {2, -11}, {-8, -8}, {6, -5}, {-1, -9} } },
	[159] = { .set = { {4, -11}, {-2, -6}, {9, -9}, {0, -9} } },
	[160] = { .set = { {7, -13}, {2, -8}, {7, -8}, {0, -10} } },
	[161] = { .set = { {6, -12}, {0, -8}, {7, -7}, {0, -9} } },
	[162] = { .set = { {7, -11}, {7, -5}, {7, -8}, {1, -9} } },
	[163] = { .set = { {4, -16}, {8, -9}, {-1, -16}, {0, -10} } },
	[164] = { .set = { {4, -15}, {6, -7}, {3, -11}, {0, -9} } },
	[165] = { .set = { {5, -14}, {10, -9}, {2, -13}, {-1, -9} } },
	[166] = { .set = { {-1, -17}, {9, -12}, {-5, -13}, {-1, -11} } },
	[167] = { .set = { {0, -17}, {10, -10}, {-1, -13}, {-1, -10} } },
	[168] = { .set = { {-2, -17}, {7, -13}, {-5, -11}, {-1, -10} } },
	[169] = { .set = { {-4, -15}, {5, -16}, {-8, -10}, {0, -10} } },
	[170] = { .set = { {-4, -14}, {7, -15}, {-8, -12}, {0, -9} } },
	[171] = { .set = { {-5, -14}, {1, -13}, {-10, -10}, {0, -10} } },
	[172] = { .set = { {-9, -13}, {-8, -11}, {-6, -6}, {-2, -8} } },
	[173] = { .set = { {-9, -12}, {-9, -11}, {-9, -5}, {-2, -8} } },
	[174] = { .set = { {-9, -12}, {-10, -11}, {-3, -4}, {-1, -8} } },
	[175] = { .set = { {-4, -12}, {-11, -11}, {-1, -4}, {-3, -9} } },
	[176] = { .set = { {-5, -11}, {-10, -12}, {-3, -4}, {-2, -7} } },
	[177] = { .set = { {-3, -11}, {-12, -8}, {2, -4}, {-1, -8} } },
	[178] = { .set = { {-1, -8}, {-13, -10}, {11, -10}, {-1, -7} } },
	[179] = { .set = { {-4, -9}, {-12, -12}, {11, -8}, {-1, -6} } },
	[180] = { .set = { {-11, -11}, {0, -16}, {3, -5}, {-1, -8} } },
	[181] = { .set = { {-6, -15}, {7, -10}, {-11, -5}, {0, -10} } },
	[182] = { .set = { {-1, -18}, {12, -8}, {-14, -8}, {-1, -12} } },
	[183] = { .set = { {4, -15}, {-9, -10}, {9, -5}, {-2, -10} } },
	[184] = { .set = { {9, -11}, {-2, -16}, {-5, -5}, {-1, -8} } },
	[185] = { .set = { {2, -9}, {10, -12}, {-13, -8}, {-1, -6} } },
	[186] = { .set = { {-1, -12}, {-9, -18}, {0, -6}, {1, -9} } },
	[187] = { .set = { {3, -12}, {5, -21}, {6, -9}, {-1, -9} } },
	[188] = { .set = { {1, -14}, {-11, -20}, {8, -12}, {-1, -10} } },
	[189] = { .set = { {2, -15}, {-14, -15}, {4, -15}, {-1, -10} } },
	[190] = { .set = { {1, -13}, {10, -8}, {-2, -16}, {-4, -11} } },
	[191] = { .set = { {-4, -15}, {12, -15}, {-6, -15}, {-1, -10} } },
	[192] = { .set = { {-3, -14}, {9, -20}, {-10, -12}, {-1, -10} } },
	[193] = { .set = { {-4, -12}, {-6, -21}, {-7, -9}, {0, -9} } },
	[194] = { .set = { {-1, -11}, {-11, -9}, {5, -5}, {-1, -8} } },
	[195] = { .set = { {-1, -13}, {-4, -13}, {2, -13}, {-1, -11} } },
	[196] = { .set = { {-1, -8}, {-13, -10}, {11, -10}, {-1, -7} } },
	[197] = { .set = { {2, -12}, {-5, -8}, {8, -8}, {-1, -9} } },
	[198] = { .set = { {0, -13}, {3, -13}, {-2, -12}, {-1, -10} } },
	[199] = { .set = { {3, -10}, {11, -13}, {-12, -9}, {0, -7} } },
	[200] = { .set = { {7, -13}, {2, -8}, {7, -8}, {0, -10} } },
	[201] = { .set = { {3, -14}, {6, -14}, {5, -13}, {-3, -10} } },
	[202] = { .set = { {9, -11}, {-2, -16}, {-5, -5}, {-1, -8} } },
	[203] = { .set = { {4, -16}, {8, -9}, {-1, -16}, {0, -10} } },
	[204] = { .set = { {3, -15}, {1, -17}, {5, -15}, {-2, -10} } },
	[205] = { .set = { {4, -15}, {-9, -10}, {9, -5}, {-2, -10} } },
	[206] = { .set = { {-1, -17}, {9, -12}, {-5, -13}, {-1, -11} } },
	[207] = { .set = { {-1, -17}, {3, -17}, {-5, -17}, {-1, -10} } },
	[208] = { .set = { {-1, -20}, {12, -10}, {-14, -10}, {-1, -14} } },
	[209] = { .set = { {-4, -15}, {5, -16}, {-8, -10}, {0, -10} } },
	[210] = { .set = { {-5, -15}, {-3, -17}, {-7, -15}, {0, -10} } },
	[211] = { .set = { {-6, -15}, {7, -10}, {-11, -5}, {0, -10} } },
	[212] = { .set = { {-9, -13}, {-8, -11}, {-6, -6}, {-2, -8} } },
	[213] = { .set = { {-5, -14}, {-8, -14}, {-7, -13}, {1, -10} } },
	[214] = { .set = { {-11, -11}, {0, -16}, {3, -5}, {-1, -8} } },
	[215] = { .set = { {-4, -12}, {-11, -11}, {-1, -4}, {-3, -9} } },
	[216] = { .set = { {-2, -13}, {-5, -13}, {0, -12}, {-1, -10} } },
	[217] = { .set = { {-5, -10}, {-13, -13}, {10, -9}, {-2, -7} } },
	[218] = { .set = { {-1, -13}, {-4, -13}, {2, -13}, {-1, -11} } },
	[219] = { .set = { {-2, -13}, {-5, -13}, {0, -12}, {-1, -10} } },
	[220] = { .set = { {-5, -14}, {-8, -14}, {-7, -13}, {1, -10} } },
	[221] = { .set = { {-5, -15}, {-3, -17}, {-7, -15}, {0, -10} } },
	[222] = { .set = { {-1, -17}, {3, -17}, {-5, -17}, {-1, -10} } },
	[223] = { .set = { {3, -15}, {1, -17}, {5, -15}, {-2, -10} } },
	[224] = { .set = { {4, -14}, {7, -14}, {6, -13}, {-2, -10} } },
	[225] = { .set = { {1, -13}, {4, -13}, {-1, -12}, {0, -10} } },
	[226] = { .set = { {-1, -11}, {-11, -9}, {5, -5}, {-1, -8} } },
	[227] = { .set = { {-4, -12}, {-11, -11}, {-1, -4}, {-3, -9} } },
	[228] = { .set = { {-9, -13}, {-8, -11}, {-6, -6}, {-2, -8} } },
	[229] = { .set = { {-4, -15}, {5, -16}, {-8, -10}, {0, -10} } },
	[230] = { .set = { {-1, -17}, {9, -12}, {-5, -13}, {-1, -11} } },
	[231] = { .set = { {4, -16}, {8, -9}, {-1, -16}, {0, -10} } },
	[232] = { .set = { {7, -13}, {2, -8}, {7, -8}, {0, -10} } },
	[233] = { .set = { {2, -12}, {-5, -8}, {8, -8}, {-1, -9} } },
};

static const ax_anim *const sJynxAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02603),
	AX_ANIM_PTR(gAxSharedAnim_02679),
	AX_ANIM_PTR(gAxSharedAnim_02688),
	AX_ANIM_PTR(gAxSharedAnim_02697),
	AX_ANIM_PTR(gAxSharedAnim_02615),
	AX_ANIM_PTR(gAxSharedAnim_02637),
	AX_ANIM_PTR(gAxSharedAnim_02650),
	AX_ANIM_PTR(gAxSharedAnim_02659),
};

static const ax_anim *const sJynxAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01566),
	AX_ANIM_PTR(sJynxAnims_2_2),
	AX_ANIM_PTR(gAxSharedAnim_01826),
	AX_ANIM_PTR(gAxSharedAnim_01883),
	AX_ANIM_PTR(sJynxAnims_2_5),
	AX_ANIM_PTR(gAxSharedAnim_01944),
	AX_ANIM_PTR(gAxSharedAnim_01967),
	AX_ANIM_PTR(sJynxAnims_2_8),
};

static const ax_anim *const sJynxAnimTable3[] = {
	AX_ANIM_PTR(sJynxAnims_3_1),
	AX_ANIM_PTR(sJynxAnims_3_2),
	AX_ANIM_PTR(sJynxAnims_3_3),
	AX_ANIM_PTR(sJynxAnims_3_4),
	AX_ANIM_PTR(sJynxAnims_3_5),
	AX_ANIM_PTR(sJynxAnims_3_6),
	AX_ANIM_PTR(sJynxAnims_3_7),
	AX_ANIM_PTR(sJynxAnims_3_8),
};

static const ax_anim *const sJynxAnimTable4[] = {
	AX_ANIM_PTR(sJynxAnims_4_1),
	AX_ANIM_PTR(sJynxAnims_4_2),
	AX_ANIM_PTR(sJynxAnims_4_3),
	AX_ANIM_PTR(sJynxAnims_4_4),
	AX_ANIM_PTR(sJynxAnims_4_5),
	AX_ANIM_PTR(sJynxAnims_4_6),
	AX_ANIM_PTR(sJynxAnims_4_7),
	AX_ANIM_PTR(sJynxAnims_4_8),
};

static const ax_anim *const sJynxAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00449),
	AX_ANIM_PTR(gAxSharedAnim_00513),
	AX_ANIM_PTR(gAxSharedAnim_00507),
	AX_ANIM_PTR(gAxSharedAnim_00501),
	AX_ANIM_PTR(gAxSharedAnim_00493),
	AX_ANIM_PTR(gAxSharedAnim_00484),
	AX_ANIM_PTR(gAxSharedAnim_00475),
	AX_ANIM_PTR(gAxSharedAnim_00460),
};

static const ax_anim *const sJynxAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
};

static const ax_anim *const sJynxAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00531),
	AX_ANIM_PTR(gAxSharedAnim_00543),
	AX_ANIM_PTR(gAxSharedAnim_00551),
	AX_ANIM_PTR(gAxSharedAnim_00559),
	AX_ANIM_PTR(gAxSharedAnim_00577),
	AX_ANIM_PTR(gAxSharedAnim_00587),
	AX_ANIM_PTR(gAxSharedAnim_00596),
	AX_ANIM_PTR(gAxSharedAnim_00602),
};

static const ax_anim *const sJynxAnimTable8[] = {
	AX_ANIM_PTR(sJynxAnims_8_1),
	AX_ANIM_PTR(sJynxAnims_8_2),
	AX_ANIM_PTR(sJynxAnims_8_3),
	AX_ANIM_PTR(sJynxAnims_8_4),
	AX_ANIM_PTR(sJynxAnims_8_5),
	AX_ANIM_PTR(sJynxAnims_8_6),
	AX_ANIM_PTR(sJynxAnims_8_7),
	AX_ANIM_PTR(sJynxAnims_8_8),
};

static const ax_anim *const sJynxAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00901),
	AX_ANIM_PTR(sJynxAnims_9_2),
	AX_ANIM_PTR(sJynxAnims_9_3),
	AX_ANIM_PTR(sJynxAnims_9_4),
	AX_ANIM_PTR(gAxSharedAnim_00949),
	AX_ANIM_PTR(sJynxAnims_9_6),
	AX_ANIM_PTR(sJynxAnims_9_7),
	AX_ANIM_PTR(sJynxAnims_9_8),
};

static const ax_anim *const sJynxAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01016),
	AX_ANIM_PTR(gAxSharedAnim_01027),
	AX_ANIM_PTR(gAxSharedAnim_01046),
	AX_ANIM_PTR(gAxSharedAnim_01061),
	AX_ANIM_PTR(gAxSharedAnim_01078),
	AX_ANIM_PTR(gAxSharedAnim_01092),
	AX_ANIM_PTR(gAxSharedAnim_01110),
	AX_ANIM_PTR(gAxSharedAnim_01124),
};

static const ax_anim *const sJynxAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01138),
	AX_ANIM_PTR(sJynxAnims_11_2),
	AX_ANIM_PTR(sJynxAnims_11_3),
	AX_ANIM_PTR(gAxSharedAnim_01248),
	AX_ANIM_PTR(gAxSharedAnim_01283),
	AX_ANIM_PTR(gAxSharedAnim_01321),
	AX_ANIM_PTR(sJynxAnims_11_7),
	AX_ANIM_PTR(gAxSharedAnim_01382),
};

static const ax_anim *const sJynxAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01423),
	AX_ANIM_PTR(gAxSharedAnim_01467),
	AX_ANIM_PTR(gAxSharedAnim_01458),
	AX_ANIM_PTR(gAxSharedAnim_01449),
	AX_ANIM_PTR(gAxSharedAnim_01448),
	AX_ANIM_PTR(gAxSharedAnim_01444),
	AX_ANIM_PTR(gAxSharedAnim_01432),
	AX_ANIM_PTR(gAxSharedAnim_01424),
};

static const ax_anim *const sJynxAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01471),
	AX_ANIM_PTR(gAxSharedAnim_01516),
	AX_ANIM_PTR(gAxSharedAnim_01511),
	AX_ANIM_PTR(gAxSharedAnim_01504),
	AX_ANIM_PTR(gAxSharedAnim_01497),
	AX_ANIM_PTR(gAxSharedAnim_01490),
	AX_ANIM_PTR(gAxSharedAnim_01486),
	AX_ANIM_PTR(gAxSharedAnim_01478),
};

static const ax_anim *const *const sAxAnimationsJynx[] = {
	sJynxAnimTable1,
	sJynxAnimTable2,
	sJynxAnimTable3,
	sJynxAnimTable4,
	sJynxAnimTable5,
	sJynxAnimTable6,
	sJynxAnimTable7,
	sJynxAnimTable8,
	sJynxAnimTable9,
	sJynxAnimTable10,
	sJynxAnimTable11,
	sJynxAnimTable12,
	sJynxAnimTable13,
};

static const ax_sprite *const sAxSpritesJynx[] = {
	sJynxSprites1,
	sJynxSprites2,
	sJynxSprites3,
	sJynxSprites4,
	sJynxSprites5,
	sJynxSprites6,
	sJynxSprites7,
	sJynxSprites8,
	sJynxSprites9,
	sJynxSprites10,
	sJynxSprites11,
	sJynxSprites12,
	sJynxSprites13,
	sJynxSprites14,
	sJynxSprites15,
	sJynxSprites16,
	sJynxSprites17,
	sJynxSprites18,
	sJynxSprites19,
	sJynxSprites20,
	sJynxSprites21,
	sJynxSprites22,
	sJynxSprites23,
	sJynxSprites24,
	sJynxSprites25,
	sJynxSprites26,
	sJynxSprites27,
	sJynxSprites28,
	sJynxSprites29,
	sJynxSprites30,
	sJynxSprites31,
	sJynxSprites32,
	sJynxSprites33,
	sJynxSprites34,
	sJynxSprites35,
	sJynxSprites36,
	sJynxSprites37,
	sJynxSprites38,
	sJynxSprites39,
	sJynxSprites40,
	sJynxSprites41,
	sJynxSprites42,
	sJynxSprites43,
	sJynxSprites44,
	sJynxSprites45,
	sJynxSprites46,
	sJynxSprites47,
	sJynxSprites48,
	sJynxSprites49,
	sJynxSprites50,
	sJynxSprites51,
	sJynxSprites52,
	sJynxSprites53,
	sJynxSprites54,
	sJynxSprites55,
	sJynxSprites56,
	sJynxSprites57,
	sJynxSprites58,
	sJynxSprites59,
	sJynxSprites60,
	sJynxSprites61,
};

static const axmain sAxMainJynx = {
	.poses = sAxPosesJynx,
	.animations = sAxAnimationsJynx,
	.animCount = ARRAY_COUNT(sAxAnimationsJynx),
	.spriteData = sAxSpritesJynx,
	.positions = sAxPositionsJynx,
};
