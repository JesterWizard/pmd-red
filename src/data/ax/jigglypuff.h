/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainJigglypuff;
const SiroArchive gAxJigglypuff = {"SIRO", &sAxMainJigglypuff};

static const ax_pose sJigglypuffPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose9[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose10[] = {
	AX_POSE(9, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose11[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose12[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose13[] = {
	AX_POSE(12, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose14[] = {
	AX_POSE(13, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose15[] = {
	AX_POSE(14, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose16[] = {
	AX_POSE(9, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose17[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose18[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose19[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose20[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose21[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose22[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose23[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose24[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose26[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose27[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose29[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose30[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose32[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose33[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose35[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose36[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose38[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose39[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose41[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose42[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose44[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose45[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose47[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose48[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose52[] = {
	AX_POSE(15, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose56[] = {
	AX_POSE(16, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose60[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose64[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose68[] = {
	AX_POSE(19, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose72[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose76[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose80[] = {
	AX_POSE(16, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose82[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose83[] = {
	AX_POSE(2, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose86[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose87[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose88[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose90[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose91[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose94[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose96[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose98[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose100[] = {
	AX_POSE(13, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose102[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose104[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose106[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose107[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose110[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose111[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose114[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose117[] = {
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose120[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose123[] = {
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose124[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose126[] = {
	AX_POSE(29, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose129[] = {
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose130[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose132[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose135[] = {
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose137[] = {
	AX_POSE(30, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose138[] = {
	AX_POSE(31, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose139[] = {
	AX_POSE(32, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose140[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose141[] = {
	AX_POSE(34, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose142[] = {
	AX_POSE(35, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose143[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose144[] = {
	AX_POSE(35, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose145[] = {
	AX_POSE(34, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose146[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose150[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose152[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose156[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose158[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose160[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose162[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose184[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose187[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose190[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose193[] = {
	AX_POSE(14, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose196[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose199[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sJigglypuffPose202[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const u8 sJigglypuffAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_1_1.lz");
static const u8 sJigglypuffAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_1_2.lz");
static const u8 sJigglypuffAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_1_3.lz");
static const u8 sJigglypuffAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_1_4.lz");
static const u8 sJigglypuffAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_1_5.lz");
static const u8 sJigglypuffAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_1_6.lz");
static const u8 sJigglypuffAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_1_7.lz");
static const u8 sJigglypuffAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_1_8.lz");
static const u8 sJigglypuffAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_2_1.lz");
static const u8 sJigglypuffAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_2_2.lz");
static const u8 sJigglypuffAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_2_3.lz");
static const u8 sJigglypuffAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_2_4.lz");
static const u8 sJigglypuffAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_2_5.lz");
static const u8 sJigglypuffAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_2_6.lz");
static const u8 sJigglypuffAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_2_7.lz");
static const u8 sJigglypuffAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_2_8.lz");
static const u8 sJigglypuffAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_3_1.lz");
static const u8 sJigglypuffAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_3_2.lz");
static const u8 sJigglypuffAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_3_3.lz");
static const u8 sJigglypuffAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_3_4.lz");
static const u8 sJigglypuffAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_3_5.lz");
static const u8 sJigglypuffAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_3_6.lz");
static const u8 sJigglypuffAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_3_7.lz");
static const u8 sJigglypuffAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_3_8.lz");
static const u8 sJigglypuffAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_4_1.lz");
static const u8 sJigglypuffAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_4_2.lz");
static const u8 sJigglypuffAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_4_3.lz");
static const u8 sJigglypuffAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_4_4.lz");
static const u8 sJigglypuffAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_4_5.lz");
static const u8 sJigglypuffAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_4_6.lz");
static const u8 sJigglypuffAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_4_7.lz");
static const u8 sJigglypuffAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_4_8.lz");
static const u8 sJigglypuffAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_5_1.lz");
static const u8 sJigglypuffAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_5_2.lz");
static const u8 sJigglypuffAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_5_3.lz");
static const u8 sJigglypuffAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_5_4.lz");
static const u8 sJigglypuffAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_5_5.lz");
static const u8 sJigglypuffAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_5_6.lz");
static const u8 sJigglypuffAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_5_7.lz");
static const u8 sJigglypuffAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_5_8.lz");
static const u8 sJigglypuffAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_8_1.lz");
static const u8 sJigglypuffAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_8_2.lz");
static const u8 sJigglypuffAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_8_3.lz");
static const u8 sJigglypuffAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_8_4.lz");
static const u8 sJigglypuffAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_8_5.lz");
static const u8 sJigglypuffAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_8_6.lz");
static const u8 sJigglypuffAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_8_7.lz");
static const u8 sJigglypuffAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_8_8.lz");
static const u8 sJigglypuffAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_9_2.lz");
static const u8 sJigglypuffAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_9_3.lz");
static const u8 sJigglypuffAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_9_5.lz");
static const u8 sJigglypuffAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_9_7.lz");
static const u8 sJigglypuffAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_9_8.lz");
static const u8 sJigglypuffAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_11_2.lz");
static const u8 sJigglypuffAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_11_3.lz");
static const u8 sJigglypuffAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_11_7.lz");
static const u8 sJigglypuffAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/jigglypuff/sJigglypuffAnims_11_8.lz");

static const u8 sJigglypuffGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_1.4bpp.lz");
static const ax_sprite sJigglypuffSprites1[] = {
	{sJigglypuffGfx1, ARRAY_COUNT(sJigglypuffGfx1)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_2.4bpp.lz");
static const ax_sprite sJigglypuffSprites2[] = {
	{sJigglypuffGfx2, ARRAY_COUNT(sJigglypuffGfx2)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_3.4bpp.lz");
static const ax_sprite sJigglypuffSprites3[] = {
	{sJigglypuffGfx3, ARRAY_COUNT(sJigglypuffGfx3)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_4.4bpp.lz");
static const ax_sprite sJigglypuffSprites4[] = {
	{sJigglypuffGfx4, ARRAY_COUNT(sJigglypuffGfx4)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_5.4bpp.lz");
static const ax_sprite sJigglypuffSprites5[] = {
	{sJigglypuffGfx5, ARRAY_COUNT(sJigglypuffGfx5)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_6.4bpp.lz");
static const ax_sprite sJigglypuffSprites6[] = {
	{sJigglypuffGfx6, ARRAY_COUNT(sJigglypuffGfx6)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_7.4bpp.lz");
static const ax_sprite sJigglypuffSprites7[] = {
	{sJigglypuffGfx7, ARRAY_COUNT(sJigglypuffGfx7)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_8.4bpp.lz");
static const ax_sprite sJigglypuffSprites8[] = {
	{sJigglypuffGfx8, ARRAY_COUNT(sJigglypuffGfx8)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_9.4bpp.lz");
static const ax_sprite sJigglypuffSprites9[] = {
	{sJigglypuffGfx9, ARRAY_COUNT(sJigglypuffGfx9)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_10.4bpp.lz");
static const ax_sprite sJigglypuffSprites10[] = {
	{sJigglypuffGfx10, ARRAY_COUNT(sJigglypuffGfx10)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_11.4bpp.lz");
static const ax_sprite sJigglypuffSprites11[] = {
	{sJigglypuffGfx11, ARRAY_COUNT(sJigglypuffGfx11)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_12.4bpp.lz");
static const ax_sprite sJigglypuffSprites12[] = {
	{sJigglypuffGfx12, ARRAY_COUNT(sJigglypuffGfx12)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_13.4bpp.lz");
static const ax_sprite sJigglypuffSprites13[] = {
	{sJigglypuffGfx13, ARRAY_COUNT(sJigglypuffGfx13)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_14.4bpp.lz");
static const ax_sprite sJigglypuffSprites14[] = {
	{sJigglypuffGfx14, ARRAY_COUNT(sJigglypuffGfx14)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_15.4bpp.lz");
static const ax_sprite sJigglypuffSprites15[] = {
	{sJigglypuffGfx15, ARRAY_COUNT(sJigglypuffGfx15)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_16.4bpp.lz");
static const u8 sJigglypuffGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_16_1.4bpp.lz");
static const u8 sJigglypuffGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_16_2.4bpp.lz");
static const ax_sprite sJigglypuffSprites16[] = {
	{sJigglypuffGfx16, ARRAY_COUNT(sJigglypuffGfx16)}, 
	{NULL, 32}, 
	{sJigglypuffGfx16_1, ARRAY_COUNT(sJigglypuffGfx16_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx16_2, ARRAY_COUNT(sJigglypuffGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_17.4bpp.lz");
static const u8 sJigglypuffGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_17_1.4bpp.lz");
static const u8 sJigglypuffGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_17_2.4bpp.lz");
static const ax_sprite sJigglypuffSprites17[] = {
	{sJigglypuffGfx17, ARRAY_COUNT(sJigglypuffGfx17)}, 
	{NULL, 32}, 
	{sJigglypuffGfx17_1, ARRAY_COUNT(sJigglypuffGfx17_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx17_2, ARRAY_COUNT(sJigglypuffGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_18.4bpp.lz");
static const u8 sJigglypuffGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_18_1.4bpp.lz");
static const u8 sJigglypuffGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_18_2.4bpp.lz");
static const ax_sprite sJigglypuffSprites18[] = {
	{sJigglypuffGfx18, ARRAY_COUNT(sJigglypuffGfx18)}, 
	{NULL, 32}, 
	{sJigglypuffGfx18_1, ARRAY_COUNT(sJigglypuffGfx18_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx18_2, ARRAY_COUNT(sJigglypuffGfx18_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_19.4bpp.lz");
static const u8 sJigglypuffGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_19_1.4bpp.lz");
static const u8 sJigglypuffGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_19_2.4bpp.lz");
static const u8 sJigglypuffGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_19_3.4bpp.lz");
static const ax_sprite sJigglypuffSprites19[] = {
	{sJigglypuffGfx19, ARRAY_COUNT(sJigglypuffGfx19)}, 
	{NULL, 32}, 
	{sJigglypuffGfx19_1, ARRAY_COUNT(sJigglypuffGfx19_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx19_2, ARRAY_COUNT(sJigglypuffGfx19_2)}, 
	{NULL, 64}, 
	{sJigglypuffGfx19_3, ARRAY_COUNT(sJigglypuffGfx19_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_20.4bpp.lz");
static const u8 sJigglypuffGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_20_1.4bpp.lz");
static const u8 sJigglypuffGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_20_2.4bpp.lz");
static const ax_sprite sJigglypuffSprites20[] = {
	{sJigglypuffGfx20, ARRAY_COUNT(sJigglypuffGfx20)}, 
	{NULL, 32}, 
	{sJigglypuffGfx20_1, ARRAY_COUNT(sJigglypuffGfx20_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx20_2, ARRAY_COUNT(sJigglypuffGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_21.4bpp.lz");
static const u8 sJigglypuffGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_21_1.4bpp.lz");
static const u8 sJigglypuffGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_21_2.4bpp.lz");
static const u8 sJigglypuffGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_21_3.4bpp.lz");
static const ax_sprite sJigglypuffSprites21[] = {
	{sJigglypuffGfx21, ARRAY_COUNT(sJigglypuffGfx21)}, 
	{NULL, 32}, 
	{sJigglypuffGfx21_1, ARRAY_COUNT(sJigglypuffGfx21_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx21_2, ARRAY_COUNT(sJigglypuffGfx21_2)}, 
	{NULL, 32}, 
	{sJigglypuffGfx21_3, ARRAY_COUNT(sJigglypuffGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_22.4bpp.lz");
static const u8 sJigglypuffGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_22_1.4bpp.lz");
static const u8 sJigglypuffGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_22_2.4bpp.lz");
static const u8 sJigglypuffGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_22_3.4bpp.lz");
static const ax_sprite sJigglypuffSprites22[] = {
	{NULL, 32}, 
	{sJigglypuffGfx22, ARRAY_COUNT(sJigglypuffGfx22)}, 
	{NULL, 32}, 
	{sJigglypuffGfx22_1, ARRAY_COUNT(sJigglypuffGfx22_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx22_2, ARRAY_COUNT(sJigglypuffGfx22_2)}, 
	{NULL, 64}, 
	{sJigglypuffGfx22_3, ARRAY_COUNT(sJigglypuffGfx22_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_23.4bpp.lz");
static const u8 sJigglypuffGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_23_1.4bpp.lz");
static const u8 sJigglypuffGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_23_2.4bpp.lz");
static const u8 sJigglypuffGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_23_3.4bpp.lz");
static const ax_sprite sJigglypuffSprites23[] = {
	{sJigglypuffGfx23, ARRAY_COUNT(sJigglypuffGfx23)}, 
	{NULL, 64}, 
	{sJigglypuffGfx23_1, ARRAY_COUNT(sJigglypuffGfx23_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx23_2, ARRAY_COUNT(sJigglypuffGfx23_2)}, 
	{NULL, 64}, 
	{sJigglypuffGfx23_3, ARRAY_COUNT(sJigglypuffGfx23_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_24.4bpp.lz");
static const u8 sJigglypuffGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_24_1.4bpp.lz");
static const u8 sJigglypuffGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_24_2.4bpp.lz");
static const u8 sJigglypuffGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_24_3.4bpp.lz");
static const ax_sprite sJigglypuffSprites24[] = {
	{sJigglypuffGfx24, ARRAY_COUNT(sJigglypuffGfx24)}, 
	{NULL, 32}, 
	{sJigglypuffGfx24_1, ARRAY_COUNT(sJigglypuffGfx24_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx24_2, ARRAY_COUNT(sJigglypuffGfx24_2)}, 
	{NULL, 32}, 
	{sJigglypuffGfx24_3, ARRAY_COUNT(sJigglypuffGfx24_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_25.4bpp.lz");
static const u8 sJigglypuffGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_25_1.4bpp.lz");
static const u8 sJigglypuffGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_25_2.4bpp.lz");
static const ax_sprite sJigglypuffSprites25[] = {
	{NULL, 32}, 
	{sJigglypuffGfx25, ARRAY_COUNT(sJigglypuffGfx25)}, 
	{NULL, 32}, 
	{sJigglypuffGfx25_1, ARRAY_COUNT(sJigglypuffGfx25_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx25_2, ARRAY_COUNT(sJigglypuffGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_26.4bpp.lz");
static const u8 sJigglypuffGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_26_1.4bpp.lz");
static const u8 sJigglypuffGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_26_2.4bpp.lz");
static const ax_sprite sJigglypuffSprites26[] = {
	{NULL, 128}, 
	{sJigglypuffGfx26, ARRAY_COUNT(sJigglypuffGfx26)}, 
	{NULL, 32}, 
	{sJigglypuffGfx26_1, ARRAY_COUNT(sJigglypuffGfx26_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx26_2, ARRAY_COUNT(sJigglypuffGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_27.4bpp.lz");
static const u8 sJigglypuffGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_27_1.4bpp.lz");
static const u8 sJigglypuffGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_27_2.4bpp.lz");
static const ax_sprite sJigglypuffSprites27[] = {
	{NULL, 128}, 
	{sJigglypuffGfx27, ARRAY_COUNT(sJigglypuffGfx27)}, 
	{NULL, 32}, 
	{sJigglypuffGfx27_1, ARRAY_COUNT(sJigglypuffGfx27_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx27_2, ARRAY_COUNT(sJigglypuffGfx27_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_28.4bpp.lz");
static const u8 sJigglypuffGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_28_1.4bpp.lz");
static const u8 sJigglypuffGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_28_2.4bpp.lz");
static const ax_sprite sJigglypuffSprites28[] = {
	{NULL, 128}, 
	{sJigglypuffGfx28, ARRAY_COUNT(sJigglypuffGfx28)}, 
	{NULL, 32}, 
	{sJigglypuffGfx28_1, ARRAY_COUNT(sJigglypuffGfx28_1)}, 
	{NULL, 64}, 
	{sJigglypuffGfx28_2, ARRAY_COUNT(sJigglypuffGfx28_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_29.4bpp.lz");
static const u8 sJigglypuffGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_29_1.4bpp.lz");
static const u8 sJigglypuffGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_29_2.4bpp.lz");
static const ax_sprite sJigglypuffSprites29[] = {
	{NULL, 128}, 
	{sJigglypuffGfx29, ARRAY_COUNT(sJigglypuffGfx29)}, 
	{NULL, 32}, 
	{sJigglypuffGfx29_1, ARRAY_COUNT(sJigglypuffGfx29_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx29_2, ARRAY_COUNT(sJigglypuffGfx29_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_30.4bpp.lz");
static const u8 sJigglypuffGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_30_1.4bpp.lz");
static const u8 sJigglypuffGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_30_2.4bpp.lz");
static const ax_sprite sJigglypuffSprites30[] = {
	{NULL, 128}, 
	{sJigglypuffGfx30, ARRAY_COUNT(sJigglypuffGfx30)}, 
	{NULL, 32}, 
	{sJigglypuffGfx30_1, ARRAY_COUNT(sJigglypuffGfx30_1)}, 
	{NULL, 32}, 
	{sJigglypuffGfx30_2, ARRAY_COUNT(sJigglypuffGfx30_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_31.4bpp.lz");
static const ax_sprite sJigglypuffSprites31[] = {
	{sJigglypuffGfx31, ARRAY_COUNT(sJigglypuffGfx31)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_32.4bpp.lz");
static const ax_sprite sJigglypuffSprites32[] = {
	{sJigglypuffGfx32, ARRAY_COUNT(sJigglypuffGfx32)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_33.4bpp.lz");
static const ax_sprite sJigglypuffSprites33[] = {
	{sJigglypuffGfx33, ARRAY_COUNT(sJigglypuffGfx33)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_34.4bpp.lz");
static const ax_sprite sJigglypuffSprites34[] = {
	{sJigglypuffGfx34, ARRAY_COUNT(sJigglypuffGfx34)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_35.4bpp.lz");
static const ax_sprite sJigglypuffSprites35[] = {
	{sJigglypuffGfx35, ARRAY_COUNT(sJigglypuffGfx35)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_36.4bpp.lz");
static const ax_sprite sJigglypuffSprites36[] = {
	{sJigglypuffGfx36, ARRAY_COUNT(sJigglypuffGfx36)}, 
	{NULL, 0}
};
static const u8 sJigglypuffGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/jigglypuff/sprite_37.4bpp.lz");
static const ax_sprite sJigglypuffSprites37[] = {
	{sJigglypuffGfx37, ARRAY_COUNT(sJigglypuffGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesJigglypuff[] = {
	sJigglypuffPose1,
	sJigglypuffPose2,
	sJigglypuffPose3,
	sJigglypuffPose4,
	sJigglypuffPose5,
	sJigglypuffPose6,
	sJigglypuffPose7,
	sJigglypuffPose8,
	sJigglypuffPose9,
	sJigglypuffPose10,
	sJigglypuffPose11,
	sJigglypuffPose12,
	sJigglypuffPose13,
	sJigglypuffPose14,
	sJigglypuffPose15,
	sJigglypuffPose16,
	sJigglypuffPose17,
	sJigglypuffPose18,
	sJigglypuffPose19,
	sJigglypuffPose20,
	sJigglypuffPose21,
	sJigglypuffPose22,
	sJigglypuffPose23,
	sJigglypuffPose24,
	sJigglypuffPose1,
	sJigglypuffPose26,
	sJigglypuffPose27,
	sJigglypuffPose4,
	sJigglypuffPose29,
	sJigglypuffPose30,
	sJigglypuffPose7,
	sJigglypuffPose32,
	sJigglypuffPose33,
	sJigglypuffPose10,
	sJigglypuffPose35,
	sJigglypuffPose36,
	sJigglypuffPose13,
	sJigglypuffPose38,
	sJigglypuffPose39,
	sJigglypuffPose16,
	sJigglypuffPose41,
	sJigglypuffPose42,
	sJigglypuffPose19,
	sJigglypuffPose44,
	sJigglypuffPose45,
	sJigglypuffPose22,
	sJigglypuffPose47,
	sJigglypuffPose48,
	sJigglypuffPose1,
	sJigglypuffPose2,
	sJigglypuffPose3,
	sJigglypuffPose52,
	sJigglypuffPose4,
	sJigglypuffPose5,
	sJigglypuffPose6,
	sJigglypuffPose56,
	sJigglypuffPose7,
	sJigglypuffPose8,
	sJigglypuffPose9,
	sJigglypuffPose60,
	sJigglypuffPose10,
	sJigglypuffPose11,
	sJigglypuffPose12,
	sJigglypuffPose64,
	sJigglypuffPose13,
	sJigglypuffPose14,
	sJigglypuffPose15,
	sJigglypuffPose68,
	sJigglypuffPose16,
	sJigglypuffPose17,
	sJigglypuffPose18,
	sJigglypuffPose72,
	sJigglypuffPose19,
	sJigglypuffPose20,
	sJigglypuffPose21,
	sJigglypuffPose76,
	sJigglypuffPose22,
	sJigglypuffPose23,
	sJigglypuffPose24,
	sJigglypuffPose80,
	sJigglypuffPose1,
	sJigglypuffPose82,
	sJigglypuffPose83,
	sJigglypuffPose26,
	sJigglypuffPose4,
	sJigglypuffPose86,
	sJigglypuffPose87,
	sJigglypuffPose88,
	sJigglypuffPose7,
	sJigglypuffPose90,
	sJigglypuffPose91,
	sJigglypuffPose32,
	sJigglypuffPose10,
	sJigglypuffPose94,
	sJigglypuffPose12,
	sJigglypuffPose96,
	sJigglypuffPose13,
	sJigglypuffPose98,
	sJigglypuffPose15,
	sJigglypuffPose100,
	sJigglypuffPose16,
	sJigglypuffPose102,
	sJigglypuffPose18,
	sJigglypuffPose104,
	sJigglypuffPose19,
	sJigglypuffPose106,
	sJigglypuffPose107,
	sJigglypuffPose44,
	sJigglypuffPose22,
	sJigglypuffPose110,
	sJigglypuffPose111,
	sJigglypuffPose47,
	sJigglypuffPose1,
	sJigglypuffPose114,
	sJigglypuffPose82,
	sJigglypuffPose4,
	sJigglypuffPose117,
	sJigglypuffPose86,
	sJigglypuffPose7,
	sJigglypuffPose120,
	sJigglypuffPose90,
	sJigglypuffPose10,
	sJigglypuffPose123,
	sJigglypuffPose124,
	sJigglypuffPose13,
	sJigglypuffPose126,
	sJigglypuffPose98,
	sJigglypuffPose16,
	sJigglypuffPose129,
	sJigglypuffPose130,
	sJigglypuffPose19,
	sJigglypuffPose132,
	sJigglypuffPose106,
	sJigglypuffPose22,
	sJigglypuffPose135,
	sJigglypuffPose110,
	sJigglypuffPose137,
	sJigglypuffPose138,
	sJigglypuffPose139,
	sJigglypuffPose140,
	sJigglypuffPose141,
	sJigglypuffPose142,
	sJigglypuffPose143,
	sJigglypuffPose144,
	sJigglypuffPose145,
	sJigglypuffPose146,
	sJigglypuffPose1,
	sJigglypuffPose26,
	sJigglypuffPose4,
	sJigglypuffPose150,
	sJigglypuffPose7,
	sJigglypuffPose152,
	sJigglypuffPose10,
	sJigglypuffPose96,
	sJigglypuffPose13,
	sJigglypuffPose156,
	sJigglypuffPose16,
	sJigglypuffPose158,
	sJigglypuffPose19,
	sJigglypuffPose160,
	sJigglypuffPose22,
	sJigglypuffPose162,
	sJigglypuffPose52,
	sJigglypuffPose80,
	sJigglypuffPose76,
	sJigglypuffPose72,
	sJigglypuffPose68,
	sJigglypuffPose64,
	sJigglypuffPose60,
	sJigglypuffPose56,
	sJigglypuffPose82,
	sJigglypuffPose86,
	sJigglypuffPose90,
	sJigglypuffPose124,
	sJigglypuffPose98,
	sJigglypuffPose130,
	sJigglypuffPose106,
	sJigglypuffPose110,
	sJigglypuffPose1,
	sJigglypuffPose26,
	sJigglypuffPose83,
	sJigglypuffPose4,
	sJigglypuffPose150,
	sJigglypuffPose184,
	sJigglypuffPose7,
	sJigglypuffPose32,
	sJigglypuffPose187,
	sJigglypuffPose10,
	sJigglypuffPose96,
	sJigglypuffPose190,
	sJigglypuffPose13,
	sJigglypuffPose156,
	sJigglypuffPose193,
	sJigglypuffPose16,
	sJigglypuffPose104,
	sJigglypuffPose196,
	sJigglypuffPose19,
	sJigglypuffPose44,
	sJigglypuffPose199,
	sJigglypuffPose22,
	sJigglypuffPose162,
	sJigglypuffPose202,
	sJigglypuffPose114,
	sJigglypuffPose135,
	sJigglypuffPose132,
	sJigglypuffPose129,
	sJigglypuffPose126,
	sJigglypuffPose123,
	sJigglypuffPose120,
	sJigglypuffPose117,
	sJigglypuffPose1,
	sJigglypuffPose22,
	sJigglypuffPose19,
	sJigglypuffPose16,
	sJigglypuffPose13,
	sJigglypuffPose10,
	sJigglypuffPose7,
	sJigglypuffPose4,
};

static const struct PositionSets sAxPositionsJigglypuff[] = {
	[0] = { .set = { {0, -4}, {-5, -3}, {5, -3}, {0, -7} } },
	[1] = { .set = { {0, -11}, {-6, -10}, {6, -10}, {0, -13} } },
	[2] = { .set = { {0, -1}, {-7, -1}, {7, -1}, {0, -4} } },
	[3] = { .set = { {4, -4}, {6, -5}, {-3, -3}, {1, -7} } },
	[4] = { .set = { {4, -10}, {6, -10}, {-2, -8}, {1, -13} } },
	[5] = { .set = { {4, -1}, {6, -2}, {-3, 0}, {1, -5} } },
	[6] = { .set = { {6, -4}, {2, -4}, {0, -3}, {0, -7} } },
	[7] = { .set = { {6, -10}, {2, -9}, {1, -8}, {0, -12} } },
	[8] = { .set = { {5, -1}, {1, -2}, {-1, -1}, {-1, -5} } },
	[9] = { .set = { {3, -8}, {-5, -8}, {7, -6}, {0, -7} } },
	[10] = { .set = { {3, -14}, {-6, -13}, {7, -12}, {0, -13} } },
	[11] = { .set = { {4, -7}, {-5, -7}, {8, -5}, {1, -6} } },
	[12] = { .set = { {0, -9}, {5, -6}, {-5, -6}, {0, -8} } },
	[13] = { .set = { {0, -15}, {6, -12}, {-6, -12}, {0, -13} } },
	[14] = { .set = { {0, -6}, {7, -5}, {-7, -5}, {0, -7} } },
	[15] = { .set = { {-3, -8}, {5, -8}, {-7, -6}, {0, -7} } },
	[16] = { .set = { {-3, -14}, {6, -13}, {-7, -12}, {0, -13} } },
	[17] = { .set = { {-4, -7}, {5, -7}, {-8, -5}, {-1, -6} } },
	[18] = { .set = { {-6, -4}, {-2, -4}, {0, -3}, {0, -7} } },
	[19] = { .set = { {-6, -10}, {-2, -9}, {-1, -8}, {0, -12} } },
	[20] = { .set = { {-5, -1}, {-1, -2}, {1, -1}, {1, -5} } },
	[21] = { .set = { {-4, -4}, {-6, -5}, {3, -3}, {-1, -7} } },
	[22] = { .set = { {-4, -10}, {-6, -10}, {2, -8}, {-1, -13} } },
	[23] = { .set = { {-4, -1}, {-6, -2}, {3, 0}, {-1, -5} } },
	[24] = { .set = { {0, -4}, {-5, -3}, {5, -3}, {0, -7} } },
	[25] = { .set = { {0, -7}, {-6, -6}, {6, -6}, {0, -9} } },
	[26] = { .set = { {0, -4}, {-8, -8}, {8, -8}, {0, -8} } },
	[27] = { .set = { {4, -4}, {6, -5}, {-3, -3}, {1, -7} } },
	[28] = { .set = { {4, -7}, {6, -7}, {-2, -5}, {1, -10} } },
	[29] = { .set = { {3, -4}, {9, -8}, {-1, -6}, {0, -9} } },
	[30] = { .set = { {6, -4}, {2, -4}, {0, -3}, {0, -7} } },
	[31] = { .set = { {6, -7}, {2, -6}, {1, -5}, {0, -9} } },
	[32] = { .set = { {4, -5}, {3, -8}, {1, -6}, {1, -9} } },
	[33] = { .set = { {3, -8}, {-5, -8}, {7, -6}, {0, -7} } },
	[34] = { .set = { {3, -11}, {-6, -10}, {7, -9}, {0, -10} } },
	[35] = { .set = { {3, -8}, {-3, -12}, {8, -6}, {1, -10} } },
	[36] = { .set = { {0, -9}, {5, -6}, {-5, -6}, {0, -8} } },
	[37] = { .set = { {0, -12}, {6, -9}, {-6, -9}, {0, -10} } },
	[38] = { .set = { {0, -9}, {7, -10}, {-7, -10}, {0, -12} } },
	[39] = { .set = { {-3, -8}, {5, -8}, {-7, -6}, {0, -7} } },
	[40] = { .set = { {-3, -11}, {6, -10}, {-7, -9}, {0, -10} } },
	[41] = { .set = { {-3, -8}, {3, -12}, {-8, -6}, {-1, -10} } },
	[42] = { .set = { {-6, -4}, {-2, -4}, {0, -3}, {0, -7} } },
	[43] = { .set = { {-6, -7}, {-2, -6}, {-1, -5}, {0, -9} } },
	[44] = { .set = { {-4, -5}, {-3, -8}, {-1, -6}, {-1, -9} } },
	[45] = { .set = { {-4, -4}, {-6, -5}, {3, -3}, {-1, -7} } },
	[46] = { .set = { {-4, -7}, {-6, -7}, {2, -5}, {-1, -10} } },
	[47] = { .set = { {-3, -4}, {-9, -8}, {1, -6}, {0, -9} } },
	[48] = { .set = { {0, -4}, {-5, -3}, {5, -3}, {0, -7} } },
	[49] = { .set = { {0, -11}, {-6, -10}, {6, -10}, {0, -13} } },
	[50] = { .set = { {0, -1}, {-7, -1}, {7, -1}, {0, -4} } },
	[51] = { .set = { {0, 0}, {-8, -4}, {8, -4}, {0, -4} } },
	[52] = { .set = { {4, -4}, {6, -5}, {-3, -3}, {1, -7} } },
	[53] = { .set = { {4, -10}, {6, -10}, {-2, -8}, {1, -13} } },
	[54] = { .set = { {4, -1}, {6, -2}, {-3, 0}, {1, -5} } },
	[55] = { .set = { {3, -1}, {9, -5}, {-1, -3}, {0, -6} } },
	[56] = { .set = { {6, -4}, {2, -4}, {0, -3}, {0, -7} } },
	[57] = { .set = { {6, -10}, {2, -9}, {1, -8}, {0, -12} } },
	[58] = { .set = { {5, -1}, {1, -2}, {-1, -1}, {-1, -5} } },
	[59] = { .set = { {3, -3}, {2, -6}, {0, -4}, {0, -7} } },
	[60] = { .set = { {3, -8}, {-5, -8}, {7, -6}, {0, -7} } },
	[61] = { .set = { {3, -14}, {-6, -13}, {7, -12}, {0, -13} } },
	[62] = { .set = { {4, -7}, {-5, -7}, {8, -5}, {1, -6} } },
	[63] = { .set = { {2, -5}, {-4, -9}, {7, -3}, {0, -7} } },
	[64] = { .set = { {0, -9}, {5, -6}, {-5, -6}, {0, -8} } },
	[65] = { .set = { {0, -15}, {6, -12}, {-6, -12}, {0, -13} } },
	[66] = { .set = { {0, -6}, {7, -5}, {-7, -5}, {0, -7} } },
	[67] = { .set = { {0, -6}, {7, -7}, {-7, -7}, {0, -9} } },
	[68] = { .set = { {-3, -8}, {5, -8}, {-7, -6}, {0, -7} } },
	[69] = { .set = { {-3, -14}, {6, -13}, {-7, -12}, {0, -13} } },
	[70] = { .set = { {-4, -7}, {5, -7}, {-8, -5}, {-1, -6} } },
	[71] = { .set = { {-2, -5}, {4, -9}, {-7, -3}, {0, -7} } },
	[72] = { .set = { {-6, -4}, {-2, -4}, {0, -3}, {0, -7} } },
	[73] = { .set = { {-6, -10}, {-2, -9}, {-1, -8}, {0, -12} } },
	[74] = { .set = { {-5, -1}, {-1, -2}, {1, -1}, {1, -5} } },
	[75] = { .set = { {-4, -3}, {-3, -6}, {-1, -4}, {-1, -7} } },
	[76] = { .set = { {-4, -4}, {-6, -5}, {3, -3}, {-1, -7} } },
	[77] = { .set = { {-4, -10}, {-6, -10}, {2, -8}, {-1, -13} } },
	[78] = { .set = { {-4, -1}, {-6, -2}, {3, 0}, {-1, -5} } },
	[79] = { .set = { {-3, -1}, {-9, -5}, {1, -3}, {0, -6} } },
	[80] = { .set = { {0, -4}, {-5, -3}, {5, -3}, {0, -7} } },
	[81] = { .set = { {0, -6}, {-7, -5}, {7, -5}, {0, -8} } },
	[82] = { .set = { {0, -3}, {-7, -3}, {7, -3}, {0, -6} } },
	[83] = { .set = { {0, -7}, {-6, -6}, {6, -6}, {0, -9} } },
	[84] = { .set = { {4, -4}, {6, -5}, {-3, -3}, {1, -7} } },
	[85] = { .set = { {3, -5}, {8, -7}, {-2, -5}, {0, -9} } },
	[86] = { .set = { {4, -2}, {6, -3}, {-3, -1}, {1, -6} } },
	[87] = { .set = { {3, -7}, {5, -7}, {-3, -5}, {0, -10} } },
	[88] = { .set = { {6, -4}, {2, -4}, {0, -3}, {0, -7} } },
	[89] = { .set = { {6, -6}, {3, -7}, {1, -5}, {0, -8} } },
	[90] = { .set = { {5, -2}, {1, -3}, {-1, -2}, {-1, -6} } },
	[91] = { .set = { {6, -7}, {2, -6}, {1, -5}, {0, -9} } },
	[92] = { .set = { {3, -8}, {-5, -8}, {7, -6}, {0, -7} } },
	[93] = { .set = { {3, -9}, {-4, -10}, {8, -8}, {0, -9} } },
	[94] = { .set = { {4, -7}, {-5, -7}, {8, -5}, {1, -6} } },
	[95] = { .set = { {3, -10}, {-6, -9}, {7, -8}, {0, -9} } },
	[96] = { .set = { {0, -9}, {5, -6}, {-5, -6}, {0, -8} } },
	[97] = { .set = { {0, -12}, {8, -11}, {-8, -11}, {0, -10} } },
	[98] = { .set = { {0, -6}, {7, -5}, {-7, -5}, {0, -7} } },
	[99] = { .set = { {0, -10}, {6, -7}, {-6, -7}, {0, -8} } },
	[100] = { .set = { {-3, -8}, {5, -8}, {-7, -6}, {0, -7} } },
	[101] = { .set = { {-3, -9}, {4, -10}, {-8, -8}, {0, -9} } },
	[102] = { .set = { {-4, -7}, {5, -7}, {-8, -5}, {-1, -6} } },
	[103] = { .set = { {-3, -10}, {6, -9}, {-7, -8}, {0, -9} } },
	[104] = { .set = { {-6, -4}, {-2, -4}, {0, -3}, {0, -7} } },
	[105] = { .set = { {-6, -6}, {-3, -7}, {-1, -5}, {0, -8} } },
	[106] = { .set = { {-5, -2}, {-1, -3}, {1, -2}, {1, -6} } },
	[107] = { .set = { {-6, -7}, {-2, -6}, {-1, -5}, {0, -9} } },
	[108] = { .set = { {-4, -4}, {-6, -5}, {3, -3}, {-1, -7} } },
	[109] = { .set = { {-3, -5}, {-8, -7}, {2, -5}, {0, -9} } },
	[110] = { .set = { {-4, -2}, {-6, -3}, {3, -1}, {-1, -6} } },
	[111] = { .set = { {-4, -7}, {-6, -7}, {2, -5}, {-1, -10} } },
	[112] = { .set = { {0, -4}, {-5, -3}, {5, -3}, {0, -7} } },
	[113] = { .set = { {0, -3}, {-4, -3}, {4, -3}, {0, -6} } },
	[114] = { .set = { {0, -6}, {-7, -5}, {7, -5}, {0, -8} } },
	[115] = { .set = { {4, -4}, {6, -5}, {-3, -3}, {1, -7} } },
	[116] = { .set = { {4, -3}, {7, -5}, {-1, -3}, {0, -6} } },
	[117] = { .set = { {3, -5}, {8, -7}, {-2, -5}, {0, -9} } },
	[118] = { .set = { {6, -4}, {2, -4}, {0, -3}, {0, -7} } },
	[119] = { .set = { {5, -3}, {4, -4}, {2, -2}, {0, -6} } },
	[120] = { .set = { {6, -6}, {3, -7}, {1, -5}, {0, -8} } },
	[121] = { .set = { {3, -8}, {-5, -8}, {7, -6}, {0, -7} } },
	[122] = { .set = { {3, -5}, {-4, -8}, {6, -5}, {0, -7} } },
	[123] = { .set = { {3, -10}, {-4, -11}, {8, -9}, {0, -10} } },
	[124] = { .set = { {0, -9}, {5, -6}, {-5, -6}, {0, -8} } },
	[125] = { .set = { {0, -6}, {6, -7}, {-6, -7}, {0, -7} } },
	[126] = { .set = { {0, -12}, {8, -11}, {-8, -11}, {0, -10} } },
	[127] = { .set = { {-3, -8}, {5, -8}, {-7, -6}, {0, -7} } },
	[128] = { .set = { {-3, -5}, {4, -8}, {-6, -5}, {0, -7} } },
	[129] = { .set = { {-3, -10}, {4, -11}, {-8, -9}, {0, -10} } },
	[130] = { .set = { {-6, -4}, {-2, -4}, {0, -3}, {0, -7} } },
	[131] = { .set = { {-5, -3}, {-4, -4}, {-2, -2}, {0, -6} } },
	[132] = { .set = { {-6, -6}, {-3, -7}, {-1, -5}, {0, -8} } },
	[133] = { .set = { {-4, -4}, {-6, -5}, {3, -3}, {-1, -7} } },
	[134] = { .set = { {-4, -3}, {-7, -5}, {1, -3}, {0, -6} } },
	[135] = { .set = { {-3, -5}, {-8, -7}, {2, -5}, {0, -9} } },
	[136] = { .set = { {-2, 0}, {-6, -3}, {4, -1}, {1, -6} } },
	[137] = { .set = { {-2, 0}, {-6, -2}, {4, 0}, {1, -5} } },
	[138] = { .set = { {0, -2}, {-9, -3}, {9, -3}, {0, -6} } },
	[139] = { .set = { {1, -2}, {8, -6}, {-9, -3}, {-1, -6} } },
	[140] = { .set = { {4, -2}, {2, -3}, {0, -1}, {-2, -5} } },
	[141] = { .set = { {4, -4}, {-5, -6}, {8, -1}, {-1, -4} } },
	[142] = { .set = { {0, -2}, {9, -1}, {-9, -1}, {0, -3} } },
	[143] = { .set = { {-5, -4}, {4, -6}, {-9, -1}, {0, -4} } },
	[144] = { .set = { {-5, -2}, {-3, -3}, {-1, -1}, {1, -5} } },
	[145] = { .set = { {-2, -2}, {-9, -6}, {8, -3}, {0, -6} } },
	[146] = { .set = { {0, -4}, {-5, -3}, {5, -3}, {0, -7} } },
	[147] = { .set = { {0, -7}, {-6, -6}, {6, -6}, {0, -9} } },
	[148] = { .set = { {4, -4}, {6, -5}, {-3, -3}, {1, -7} } },
	[149] = { .set = { {4, -6}, {6, -6}, {-2, -4}, {1, -9} } },
	[150] = { .set = { {6, -4}, {2, -4}, {0, -3}, {0, -7} } },
	[151] = { .set = { {6, -6}, {2, -5}, {1, -4}, {0, -8} } },
	[152] = { .set = { {3, -8}, {-5, -8}, {7, -6}, {0, -7} } },
	[153] = { .set = { {3, -10}, {-6, -9}, {7, -8}, {0, -9} } },
	[154] = { .set = { {0, -9}, {5, -6}, {-5, -6}, {0, -8} } },
	[155] = { .set = { {0, -11}, {6, -8}, {-6, -8}, {0, -9} } },
	[156] = { .set = { {-3, -8}, {5, -8}, {-7, -6}, {0, -7} } },
	[157] = { .set = { {-4, -10}, {5, -9}, {-8, -8}, {-1, -9} } },
	[158] = { .set = { {-6, -4}, {-2, -4}, {0, -3}, {0, -7} } },
	[159] = { .set = { {-6, -6}, {-2, -5}, {-1, -4}, {0, -8} } },
	[160] = { .set = { {-4, -4}, {-6, -5}, {3, -3}, {-1, -7} } },
	[161] = { .set = { {-4, -6}, {-6, -6}, {2, -4}, {-1, -9} } },
	[162] = { .set = { {0, 0}, {-8, -4}, {8, -4}, {0, -4} } },
	[163] = { .set = { {-3, -1}, {-9, -5}, {1, -3}, {0, -6} } },
	[164] = { .set = { {-4, -3}, {-3, -6}, {-1, -4}, {-1, -7} } },
	[165] = { .set = { {-2, -5}, {4, -9}, {-7, -3}, {0, -7} } },
	[166] = { .set = { {0, -6}, {7, -7}, {-7, -7}, {0, -9} } },
	[167] = { .set = { {2, -5}, {-4, -9}, {7, -3}, {0, -7} } },
	[168] = { .set = { {3, -3}, {2, -6}, {0, -4}, {0, -7} } },
	[169] = { .set = { {3, -1}, {9, -5}, {-1, -3}, {0, -6} } },
	[170] = { .set = { {0, -6}, {-7, -5}, {7, -5}, {0, -8} } },
	[171] = { .set = { {3, -5}, {8, -7}, {-2, -5}, {0, -9} } },
	[172] = { .set = { {6, -6}, {3, -7}, {1, -5}, {0, -8} } },
	[173] = { .set = { {3, -10}, {-4, -11}, {8, -9}, {0, -10} } },
	[174] = { .set = { {0, -12}, {8, -11}, {-8, -11}, {0, -10} } },
	[175] = { .set = { {-3, -10}, {4, -11}, {-8, -9}, {0, -10} } },
	[176] = { .set = { {-6, -6}, {-3, -7}, {-1, -5}, {0, -8} } },
	[177] = { .set = { {-3, -5}, {-8, -7}, {2, -5}, {0, -9} } },
	[178] = { .set = { {0, -4}, {-5, -3}, {5, -3}, {0, -7} } },
	[179] = { .set = { {0, -7}, {-6, -6}, {6, -6}, {0, -9} } },
	[180] = { .set = { {0, -3}, {-7, -3}, {7, -3}, {0, -6} } },
	[181] = { .set = { {4, -4}, {6, -5}, {-3, -3}, {1, -7} } },
	[182] = { .set = { {4, -6}, {6, -6}, {-2, -4}, {1, -9} } },
	[183] = { .set = { {4, -3}, {6, -4}, {-3, -2}, {1, -7} } },
	[184] = { .set = { {6, -4}, {2, -4}, {0, -3}, {0, -7} } },
	[185] = { .set = { {6, -7}, {2, -6}, {1, -5}, {0, -9} } },
	[186] = { .set = { {5, -3}, {1, -4}, {-1, -3}, {-1, -7} } },
	[187] = { .set = { {3, -8}, {-5, -8}, {7, -6}, {0, -7} } },
	[188] = { .set = { {3, -10}, {-6, -9}, {7, -8}, {0, -9} } },
	[189] = { .set = { {3, -9}, {-6, -9}, {7, -7}, {0, -8} } },
	[190] = { .set = { {0, -9}, {5, -6}, {-5, -6}, {0, -8} } },
	[191] = { .set = { {0, -11}, {6, -8}, {-6, -8}, {0, -9} } },
	[192] = { .set = { {0, -7}, {7, -6}, {-7, -6}, {0, -8} } },
	[193] = { .set = { {-3, -8}, {5, -8}, {-7, -6}, {0, -7} } },
	[194] = { .set = { {-3, -10}, {6, -9}, {-7, -8}, {0, -9} } },
	[195] = { .set = { {-3, -9}, {6, -9}, {-7, -7}, {0, -8} } },
	[196] = { .set = { {-6, -4}, {-2, -4}, {0, -3}, {0, -7} } },
	[197] = { .set = { {-6, -7}, {-2, -6}, {-1, -5}, {0, -9} } },
	[198] = { .set = { {-5, -3}, {-1, -4}, {1, -3}, {1, -7} } },
	[199] = { .set = { {-4, -4}, {-6, -5}, {3, -3}, {-1, -7} } },
	[200] = { .set = { {-4, -6}, {-6, -6}, {2, -4}, {-1, -9} } },
	[201] = { .set = { {-4, -3}, {-6, -4}, {3, -2}, {-1, -7} } },
	[202] = { .set = { {0, -3}, {-4, -3}, {4, -3}, {0, -6} } },
	[203] = { .set = { {-4, -3}, {-7, -5}, {1, -3}, {0, -6} } },
	[204] = { .set = { {-5, -3}, {-4, -4}, {-2, -2}, {0, -6} } },
	[205] = { .set = { {-3, -5}, {4, -8}, {-6, -5}, {0, -7} } },
	[206] = { .set = { {0, -6}, {6, -7}, {-6, -7}, {0, -7} } },
	[207] = { .set = { {3, -5}, {-4, -8}, {6, -5}, {0, -7} } },
	[208] = { .set = { {5, -3}, {4, -4}, {2, -2}, {0, -6} } },
	[209] = { .set = { {4, -3}, {7, -5}, {-1, -3}, {0, -6} } },
	[210] = { .set = { {0, -4}, {-5, -3}, {5, -3}, {0, -7} } },
	[211] = { .set = { {-4, -4}, {-6, -5}, {3, -3}, {-1, -7} } },
	[212] = { .set = { {-6, -4}, {-2, -4}, {0, -3}, {0, -7} } },
	[213] = { .set = { {-3, -8}, {5, -8}, {-7, -6}, {0, -7} } },
	[214] = { .set = { {0, -9}, {5, -6}, {-5, -6}, {0, -8} } },
	[215] = { .set = { {3, -8}, {-5, -8}, {7, -6}, {0, -7} } },
	[216] = { .set = { {6, -4}, {2, -4}, {0, -3}, {0, -7} } },
	[217] = { .set = { {4, -4}, {6, -5}, {-3, -3}, {1, -7} } },
};

static const ax_anim *const sJigglypuffAnimTable1[] = {
	AX_ANIM_PTR(sJigglypuffAnims_1_1),
	AX_ANIM_PTR(sJigglypuffAnims_1_2),
	AX_ANIM_PTR(sJigglypuffAnims_1_3),
	AX_ANIM_PTR(sJigglypuffAnims_1_4),
	AX_ANIM_PTR(sJigglypuffAnims_1_5),
	AX_ANIM_PTR(sJigglypuffAnims_1_6),
	AX_ANIM_PTR(sJigglypuffAnims_1_7),
	AX_ANIM_PTR(sJigglypuffAnims_1_8),
};

static const ax_anim *const sJigglypuffAnimTable2[] = {
	AX_ANIM_PTR(sJigglypuffAnims_2_1),
	AX_ANIM_PTR(sJigglypuffAnims_2_2),
	AX_ANIM_PTR(sJigglypuffAnims_2_3),
	AX_ANIM_PTR(sJigglypuffAnims_2_4),
	AX_ANIM_PTR(sJigglypuffAnims_2_5),
	AX_ANIM_PTR(sJigglypuffAnims_2_6),
	AX_ANIM_PTR(sJigglypuffAnims_2_7),
	AX_ANIM_PTR(sJigglypuffAnims_2_8),
};

static const ax_anim *const sJigglypuffAnimTable3[] = {
	AX_ANIM_PTR(sJigglypuffAnims_3_1),
	AX_ANIM_PTR(sJigglypuffAnims_3_2),
	AX_ANIM_PTR(sJigglypuffAnims_3_3),
	AX_ANIM_PTR(sJigglypuffAnims_3_4),
	AX_ANIM_PTR(sJigglypuffAnims_3_5),
	AX_ANIM_PTR(sJigglypuffAnims_3_6),
	AX_ANIM_PTR(sJigglypuffAnims_3_7),
	AX_ANIM_PTR(sJigglypuffAnims_3_8),
};

static const ax_anim *const sJigglypuffAnimTable4[] = {
	AX_ANIM_PTR(sJigglypuffAnims_4_1),
	AX_ANIM_PTR(sJigglypuffAnims_4_2),
	AX_ANIM_PTR(sJigglypuffAnims_4_3),
	AX_ANIM_PTR(sJigglypuffAnims_4_4),
	AX_ANIM_PTR(sJigglypuffAnims_4_5),
	AX_ANIM_PTR(sJigglypuffAnims_4_6),
	AX_ANIM_PTR(sJigglypuffAnims_4_7),
	AX_ANIM_PTR(sJigglypuffAnims_4_8),
};

static const ax_anim *const sJigglypuffAnimTable5[] = {
	AX_ANIM_PTR(sJigglypuffAnims_5_1),
	AX_ANIM_PTR(sJigglypuffAnims_5_2),
	AX_ANIM_PTR(sJigglypuffAnims_5_3),
	AX_ANIM_PTR(sJigglypuffAnims_5_4),
	AX_ANIM_PTR(sJigglypuffAnims_5_5),
	AX_ANIM_PTR(sJigglypuffAnims_5_6),
	AX_ANIM_PTR(sJigglypuffAnims_5_7),
	AX_ANIM_PTR(sJigglypuffAnims_5_8),
};

static const ax_anim *const sJigglypuffAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02408),
	AX_ANIM_PTR(gAxSharedAnim_02408),
	AX_ANIM_PTR(gAxSharedAnim_02408),
	AX_ANIM_PTR(gAxSharedAnim_02408),
	AX_ANIM_PTR(gAxSharedAnim_02408),
	AX_ANIM_PTR(gAxSharedAnim_02408),
	AX_ANIM_PTR(gAxSharedAnim_02408),
	AX_ANIM_PTR(gAxSharedAnim_02408),
};

static const ax_anim *const sJigglypuffAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00466),
	AX_ANIM_PTR(gAxSharedAnim_00479),
	AX_ANIM_PTR(gAxSharedAnim_00487),
	AX_ANIM_PTR(gAxSharedAnim_00496),
	AX_ANIM_PTR(gAxSharedAnim_00508),
	AX_ANIM_PTR(gAxSharedAnim_00517),
	AX_ANIM_PTR(gAxSharedAnim_00523),
	AX_ANIM_PTR(gAxSharedAnim_00529),
};

static const ax_anim *const sJigglypuffAnimTable8[] = {
	AX_ANIM_PTR(sJigglypuffAnims_8_1),
	AX_ANIM_PTR(sJigglypuffAnims_8_2),
	AX_ANIM_PTR(sJigglypuffAnims_8_3),
	AX_ANIM_PTR(sJigglypuffAnims_8_4),
	AX_ANIM_PTR(sJigglypuffAnims_8_5),
	AX_ANIM_PTR(sJigglypuffAnims_8_6),
	AX_ANIM_PTR(sJigglypuffAnims_8_7),
	AX_ANIM_PTR(sJigglypuffAnims_8_8),
};

static const ax_anim *const sJigglypuffAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_00700),
	AX_ANIM_PTR(sJigglypuffAnims_9_2),
	AX_ANIM_PTR(sJigglypuffAnims_9_3),
	AX_ANIM_PTR(gAxSharedAnim_00756),
	AX_ANIM_PTR(sJigglypuffAnims_9_5),
	AX_ANIM_PTR(gAxSharedAnim_00733),
	AX_ANIM_PTR(sJigglypuffAnims_9_7),
	AX_ANIM_PTR(sJigglypuffAnims_9_8),
};

static const ax_anim *const sJigglypuffAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00801),
	AX_ANIM_PTR(gAxSharedAnim_00813),
	AX_ANIM_PTR(gAxSharedAnim_00827),
	AX_ANIM_PTR(gAxSharedAnim_00838),
	AX_ANIM_PTR(gAxSharedAnim_00849),
	AX_ANIM_PTR(gAxSharedAnim_00862),
	AX_ANIM_PTR(gAxSharedAnim_00879),
	AX_ANIM_PTR(gAxSharedAnim_00889),
};

static const ax_anim *const sJigglypuffAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_00900),
	AX_ANIM_PTR(sJigglypuffAnims_11_2),
	AX_ANIM_PTR(sJigglypuffAnims_11_3),
	AX_ANIM_PTR(gAxSharedAnim_01026),
	AX_ANIM_PTR(gAxSharedAnim_01076),
	AX_ANIM_PTR(gAxSharedAnim_01122),
	AX_ANIM_PTR(sJigglypuffAnims_11_7),
	AX_ANIM_PTR(sJigglypuffAnims_11_8),
};

static const ax_anim *const sJigglypuffAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01243),
	AX_ANIM_PTR(gAxSharedAnim_01326),
	AX_ANIM_PTR(gAxSharedAnim_01308),
	AX_ANIM_PTR(gAxSharedAnim_01292),
	AX_ANIM_PTR(gAxSharedAnim_01291),
	AX_ANIM_PTR(gAxSharedAnim_01280),
	AX_ANIM_PTR(gAxSharedAnim_01260),
	AX_ANIM_PTR(gAxSharedAnim_01244),
};

static const ax_anim *const sJigglypuffAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01335),
	AX_ANIM_PTR(gAxSharedAnim_01409),
	AX_ANIM_PTR(gAxSharedAnim_01397),
	AX_ANIM_PTR(gAxSharedAnim_01386),
	AX_ANIM_PTR(gAxSharedAnim_01374),
	AX_ANIM_PTR(gAxSharedAnim_01366),
	AX_ANIM_PTR(gAxSharedAnim_01358),
	AX_ANIM_PTR(gAxSharedAnim_01348),
};

static const ax_anim *const *const sAxAnimationsJigglypuff[] = {
	sJigglypuffAnimTable1,
	sJigglypuffAnimTable2,
	sJigglypuffAnimTable3,
	sJigglypuffAnimTable4,
	sJigglypuffAnimTable5,
	sJigglypuffAnimTable6,
	sJigglypuffAnimTable7,
	sJigglypuffAnimTable8,
	sJigglypuffAnimTable9,
	sJigglypuffAnimTable10,
	sJigglypuffAnimTable11,
	sJigglypuffAnimTable12,
	sJigglypuffAnimTable13,
};

static const ax_sprite *const sAxSpritesJigglypuff[] = {
	sJigglypuffSprites1,
	sJigglypuffSprites2,
	sJigglypuffSprites3,
	sJigglypuffSprites4,
	sJigglypuffSprites5,
	sJigglypuffSprites6,
	sJigglypuffSprites7,
	sJigglypuffSprites8,
	sJigglypuffSprites9,
	sJigglypuffSprites10,
	sJigglypuffSprites11,
	sJigglypuffSprites12,
	sJigglypuffSprites13,
	sJigglypuffSprites14,
	sJigglypuffSprites15,
	sJigglypuffSprites16,
	sJigglypuffSprites17,
	sJigglypuffSprites18,
	sJigglypuffSprites19,
	sJigglypuffSprites20,
	sJigglypuffSprites21,
	sJigglypuffSprites22,
	sJigglypuffSprites23,
	sJigglypuffSprites24,
	sJigglypuffSprites25,
	sJigglypuffSprites26,
	sJigglypuffSprites27,
	sJigglypuffSprites28,
	sJigglypuffSprites29,
	sJigglypuffSprites30,
	sJigglypuffSprites31,
	sJigglypuffSprites32,
	sJigglypuffSprites33,
	sJigglypuffSprites34,
	sJigglypuffSprites35,
	sJigglypuffSprites36,
	sJigglypuffSprites37,
};

static const axmain sAxMainJigglypuff = {
	.poses = sAxPosesJigglypuff,
	.animations = sAxAnimationsJigglypuff,
	.animCount = ARRAY_COUNT(sAxAnimationsJigglypuff),
	.spriteData = sAxSpritesJigglypuff,
	.positions = sAxPositionsJigglypuff,
};
