/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainScizor;
const SiroArchive gAxScizor = {"SIRO", &sAxMainScizor};

static const ax_pose sScizorPose1[] = {
	AX_POSE(0, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose3[] = {
	AX_POSE(2, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose6[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose9[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose12[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose13[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose14[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose15[] = {
	AX_POSE(14, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose18[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose21[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose22[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose24[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose28[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose29[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose33[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose34[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose38[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose39[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose43[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose44[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose48[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose49[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose53[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose54[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose58[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose59[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose63[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose64[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose68[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose69[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose70[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose71[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose75[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose76[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose77[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose78[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose82[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose83[] = {
	AX_POSE(32, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose84[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose85[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose89[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose90[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose91[] = {
	AX_POSE(37, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose92[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose96[] = {
	AX_POSE(39, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose97[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose98[] = {
	AX_POSE(39, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose99[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose103[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose104[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose105[] = {
	AX_POSE(37, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose106[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose110[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(32, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose111[] = {
	AX_POSE(32, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose112[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose113[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose117[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose118[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose119[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose120[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose122[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose123[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose124[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose125[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose126[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose127[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose128[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose153[] = {
	AX_POSE(41, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose154[] = {
	AX_POSE(42, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose155[] = {
	AX_POSE(43, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose156[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose157[] = {
	AX_POSE(45, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose158[] = {
	AX_POSE(46, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose159[] = {
	AX_POSE(47, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose160[] = {
	AX_POSE(46, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose161[] = {
	AX_POSE(45, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose162[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose164[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose189[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose190[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose191[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose192[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose193[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose194[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose208[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose210[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose213[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose219[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose222[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose223[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose225[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sScizorPose226[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sScizorAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_2_1.lz");
static const u8 sScizorAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_2_2.lz");
static const u8 sScizorAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_2_3.lz");
static const u8 sScizorAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_2_4.lz");
static const u8 sScizorAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_2_5.lz");
static const u8 sScizorAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_2_6.lz");
static const u8 sScizorAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_2_7.lz");
static const u8 sScizorAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_2_8.lz");
static const u8 sScizorAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_3_1.lz");
static const u8 sScizorAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_3_2.lz");
static const u8 sScizorAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_3_3.lz");
static const u8 sScizorAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_3_4.lz");
static const u8 sScizorAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_3_5.lz");
static const u8 sScizorAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_3_6.lz");
static const u8 sScizorAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_3_7.lz");
static const u8 sScizorAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_3_8.lz");
static const u8 sScizorAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_4_1.lz");
static const u8 sScizorAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_4_2.lz");
static const u8 sScizorAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_4_3.lz");
static const u8 sScizorAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_4_4.lz");
static const u8 sScizorAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_4_5.lz");
static const u8 sScizorAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_4_6.lz");
static const u8 sScizorAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_4_7.lz");
static const u8 sScizorAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_4_8.lz");
static const u8 sScizorAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_5_1.lz");
static const u8 sScizorAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_5_2.lz");
static const u8 sScizorAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_5_3.lz");
static const u8 sScizorAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_5_4.lz");
static const u8 sScizorAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_5_5.lz");
static const u8 sScizorAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_5_6.lz");
static const u8 sScizorAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_5_7.lz");
static const u8 sScizorAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_5_8.lz");
static const u8 sScizorAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_8_1.lz");
static const u8 sScizorAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_8_2.lz");
static const u8 sScizorAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_8_3.lz");
static const u8 sScizorAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_8_4.lz");
static const u8 sScizorAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_8_5.lz");
static const u8 sScizorAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_8_6.lz");
static const u8 sScizorAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_8_7.lz");
static const u8 sScizorAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_8_8.lz");
static const u8 sScizorAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_9_2.lz");
static const u8 sScizorAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_9_3.lz");
static const u8 sScizorAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_9_4.lz");
static const u8 sScizorAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_9_6.lz");
static const u8 sScizorAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_9_7.lz");
static const u8 sScizorAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_9_8.lz");
static const u8 sScizorAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_11_2.lz");
static const u8 sScizorAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/scizor/sScizorAnims_11_8.lz");

static const u8 sScizorGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_1.4bpp.lz");
static const ax_sprite sScizorSprites1[] = {
	{sScizorGfx1, ARRAY_COUNT(sScizorGfx1)}, 
	{NULL, 0}
};
static const u8 sScizorGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_2.4bpp.lz");
static const ax_sprite sScizorSprites2[] = {
	{sScizorGfx2, ARRAY_COUNT(sScizorGfx2)}, 
	{NULL, 0}
};
static const u8 sScizorGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_3.4bpp.lz");
static const ax_sprite sScizorSprites3[] = {
	{sScizorGfx3, ARRAY_COUNT(sScizorGfx3)}, 
	{NULL, 0}
};
static const u8 sScizorGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_4.4bpp.lz");
static const ax_sprite sScizorSprites4[] = {
	{sScizorGfx4, ARRAY_COUNT(sScizorGfx4)}, 
	{NULL, 0}
};
static const u8 sScizorGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_5.4bpp.lz");
static const ax_sprite sScizorSprites5[] = {
	{sScizorGfx5, ARRAY_COUNT(sScizorGfx5)}, 
	{NULL, 0}
};
static const u8 sScizorGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_6.4bpp.lz");
static const ax_sprite sScizorSprites6[] = {
	{sScizorGfx6, ARRAY_COUNT(sScizorGfx6)}, 
	{NULL, 0}
};
static const u8 sScizorGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_7.4bpp.lz");
static const ax_sprite sScizorSprites7[] = {
	{sScizorGfx7, ARRAY_COUNT(sScizorGfx7)}, 
	{NULL, 0}
};
static const u8 sScizorGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_8.4bpp.lz");
static const ax_sprite sScizorSprites8[] = {
	{sScizorGfx8, ARRAY_COUNT(sScizorGfx8)}, 
	{NULL, 0}
};
static const u8 sScizorGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_9.4bpp.lz");
static const ax_sprite sScizorSprites9[] = {
	{sScizorGfx9, ARRAY_COUNT(sScizorGfx9)}, 
	{NULL, 0}
};
static const u8 sScizorGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_10.4bpp.lz");
static const ax_sprite sScizorSprites10[] = {
	{sScizorGfx10, ARRAY_COUNT(sScizorGfx10)}, 
	{NULL, 0}
};
static const u8 sScizorGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_11.4bpp.lz");
static const ax_sprite sScizorSprites11[] = {
	{sScizorGfx11, ARRAY_COUNT(sScizorGfx11)}, 
	{NULL, 0}
};
static const u8 sScizorGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_12.4bpp.lz");
static const ax_sprite sScizorSprites12[] = {
	{sScizorGfx12, ARRAY_COUNT(sScizorGfx12)}, 
	{NULL, 0}
};
static const u8 sScizorGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_13.4bpp.lz");
static const ax_sprite sScizorSprites13[] = {
	{sScizorGfx13, ARRAY_COUNT(sScizorGfx13)}, 
	{NULL, 0}
};
static const u8 sScizorGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_14.4bpp.lz");
static const ax_sprite sScizorSprites14[] = {
	{sScizorGfx14, ARRAY_COUNT(sScizorGfx14)}, 
	{NULL, 0}
};
static const u8 sScizorGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_15.4bpp.lz");
static const ax_sprite sScizorSprites15[] = {
	{sScizorGfx15, ARRAY_COUNT(sScizorGfx15)}, 
	{NULL, 0}
};
static const u8 sScizorGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_16.4bpp.lz");
static const u8 sScizorGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_16_1.4bpp.lz");
static const ax_sprite sScizorSprites16[] = {
	{sScizorGfx16, ARRAY_COUNT(sScizorGfx16)}, 
	{NULL, 32}, 
	{sScizorGfx16_1, ARRAY_COUNT(sScizorGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_17.4bpp.lz");
static const ax_sprite sScizorSprites17[] = {
	{sScizorGfx17, ARRAY_COUNT(sScizorGfx17)}, 
	{NULL, 0}
};
static const u8 sScizorGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_18.4bpp.lz");
static const u8 sScizorGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_18_1.4bpp.lz");
static const u8 sScizorGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_18_2.4bpp.lz");
static const ax_sprite sScizorSprites18[] = {
	{NULL, 32}, 
	{sScizorGfx18, ARRAY_COUNT(sScizorGfx18)}, 
	{NULL, 32}, 
	{sScizorGfx18_1, ARRAY_COUNT(sScizorGfx18_1)}, 
	{NULL, 32}, 
	{sScizorGfx18_2, ARRAY_COUNT(sScizorGfx18_2)}, 
	{NULL, 0}
};
static const u8 sScizorGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_19.4bpp.lz");
static const u8 sScizorGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_19_1.4bpp.lz");
static const ax_sprite sScizorSprites19[] = {
	{NULL, 32}, 
	{sScizorGfx19, ARRAY_COUNT(sScizorGfx19)}, 
	{NULL, 96}, 
	{sScizorGfx19_1, ARRAY_COUNT(sScizorGfx19_1)}, 
	{NULL, 0}
};
static const u8 sScizorGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_20.4bpp.lz");
static const u8 sScizorGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_20_1.4bpp.lz");
static const u8 sScizorGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_20_2.4bpp.lz");
static const ax_sprite sScizorSprites20[] = {
	{NULL, 32}, 
	{sScizorGfx20, ARRAY_COUNT(sScizorGfx20)}, 
	{NULL, 32}, 
	{sScizorGfx20_1, ARRAY_COUNT(sScizorGfx20_1)}, 
	{NULL, 32}, 
	{sScizorGfx20_2, ARRAY_COUNT(sScizorGfx20_2)}, 
	{NULL, 0}
};
static const u8 sScizorGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_21.4bpp.lz");
static const u8 sScizorGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_21_1.4bpp.lz");
static const u8 sScizorGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_21_2.4bpp.lz");
static const ax_sprite sScizorSprites21[] = {
	{NULL, 32}, 
	{sScizorGfx21, ARRAY_COUNT(sScizorGfx21)}, 
	{NULL, 32}, 
	{sScizorGfx21_1, ARRAY_COUNT(sScizorGfx21_1)}, 
	{NULL, 32}, 
	{sScizorGfx21_2, ARRAY_COUNT(sScizorGfx21_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_22.4bpp.lz");
static const u8 sScizorGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_22_1.4bpp.lz");
static const u8 sScizorGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_22_2.4bpp.lz");
static const ax_sprite sScizorSprites22[] = {
	{NULL, 32}, 
	{sScizorGfx22, ARRAY_COUNT(sScizorGfx22)}, 
	{NULL, 32}, 
	{sScizorGfx22_1, ARRAY_COUNT(sScizorGfx22_1)}, 
	{NULL, 32}, 
	{sScizorGfx22_2, ARRAY_COUNT(sScizorGfx22_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_23.4bpp.lz");
static const ax_sprite sScizorSprites23[] = {
	{sScizorGfx23, ARRAY_COUNT(sScizorGfx23)}, 
	{NULL, 0}
};
static const u8 sScizorGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_24.4bpp.lz");
static const u8 sScizorGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_24_1.4bpp.lz");
static const u8 sScizorGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_24_2.4bpp.lz");
static const ax_sprite sScizorSprites24[] = {
	{NULL, 32}, 
	{sScizorGfx24, ARRAY_COUNT(sScizorGfx24)}, 
	{NULL, 32}, 
	{sScizorGfx24_1, ARRAY_COUNT(sScizorGfx24_1)}, 
	{NULL, 32}, 
	{sScizorGfx24_2, ARRAY_COUNT(sScizorGfx24_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_25.4bpp.lz");
static const u8 sScizorGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_25_1.4bpp.lz");
static const ax_sprite sScizorSprites25[] = {
	{sScizorGfx25, ARRAY_COUNT(sScizorGfx25)}, 
	{NULL, 64}, 
	{sScizorGfx25_1, ARRAY_COUNT(sScizorGfx25_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_26.4bpp.lz");
static const u8 sScizorGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_26_1.4bpp.lz");
static const u8 sScizorGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_26_2.4bpp.lz");
static const ax_sprite sScizorSprites26[] = {
	{sScizorGfx26, ARRAY_COUNT(sScizorGfx26)}, 
	{NULL, 32}, 
	{sScizorGfx26_1, ARRAY_COUNT(sScizorGfx26_1)}, 
	{NULL, 32}, 
	{sScizorGfx26_2, ARRAY_COUNT(sScizorGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_27.4bpp.lz");
static const u8 sScizorGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_27_1.4bpp.lz");
static const ax_sprite sScizorSprites27[] = {
	{NULL, 32}, 
	{sScizorGfx27, ARRAY_COUNT(sScizorGfx27)}, 
	{NULL, 32}, 
	{sScizorGfx27_1, ARRAY_COUNT(sScizorGfx27_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_28.4bpp.lz");
static const ax_sprite sScizorSprites28[] = {
	{NULL, 128}, 
	{sScizorGfx28, ARRAY_COUNT(sScizorGfx28)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_29.4bpp.lz");
static const u8 sScizorGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_29_1.4bpp.lz");
static const u8 sScizorGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_29_2.4bpp.lz");
static const ax_sprite sScizorSprites29[] = {
	{NULL, 32}, 
	{sScizorGfx29, ARRAY_COUNT(sScizorGfx29)}, 
	{NULL, 32}, 
	{sScizorGfx29_1, ARRAY_COUNT(sScizorGfx29_1)}, 
	{NULL, 32}, 
	{sScizorGfx29_2, ARRAY_COUNT(sScizorGfx29_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_30.4bpp.lz");
static const u8 sScizorGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_30_1.4bpp.lz");
static const ax_sprite sScizorSprites30[] = {
	{NULL, 128}, 
	{sScizorGfx30, ARRAY_COUNT(sScizorGfx30)}, 
	{NULL, 32}, 
	{sScizorGfx30_1, ARRAY_COUNT(sScizorGfx30_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_31.4bpp.lz");
static const u8 sScizorGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_31_1.4bpp.lz");
static const u8 sScizorGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_31_2.4bpp.lz");
static const ax_sprite sScizorSprites31[] = {
	{NULL, 32}, 
	{sScizorGfx31, ARRAY_COUNT(sScizorGfx31)}, 
	{NULL, 32}, 
	{sScizorGfx31_1, ARRAY_COUNT(sScizorGfx31_1)}, 
	{NULL, 64}, 
	{sScizorGfx31_2, ARRAY_COUNT(sScizorGfx31_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_32.4bpp.lz");
static const u8 sScizorGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_32_1.4bpp.lz");
static const ax_sprite sScizorSprites32[] = {
	{NULL, 128}, 
	{sScizorGfx32, ARRAY_COUNT(sScizorGfx32)}, 
	{NULL, 64}, 
	{sScizorGfx32_1, ARRAY_COUNT(sScizorGfx32_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sScizorGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_33.4bpp.lz");
static const u8 sScizorGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_33_1.4bpp.lz");
static const ax_sprite sScizorSprites33[] = {
	{NULL, 32}, 
	{sScizorGfx33, ARRAY_COUNT(sScizorGfx33)}, 
	{NULL, 32}, 
	{sScizorGfx33_1, ARRAY_COUNT(sScizorGfx33_1)}, 
	{NULL, 0}
};
static const u8 sScizorGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_34.4bpp.lz");
static const u8 sScizorGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_34_1.4bpp.lz");
static const u8 sScizorGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_34_2.4bpp.lz");
static const ax_sprite sScizorSprites34[] = {
	{sScizorGfx34, ARRAY_COUNT(sScizorGfx34)}, 
	{NULL, 64}, 
	{sScizorGfx34_1, ARRAY_COUNT(sScizorGfx34_1)}, 
	{NULL, 64}, 
	{sScizorGfx34_2, ARRAY_COUNT(sScizorGfx34_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_35.4bpp.lz");
static const u8 sScizorGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_35_1.4bpp.lz");
static const u8 sScizorGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_35_2.4bpp.lz");
static const ax_sprite sScizorSprites35[] = {
	{sScizorGfx35, ARRAY_COUNT(sScizorGfx35)}, 
	{NULL, 32}, 
	{sScizorGfx35_1, ARRAY_COUNT(sScizorGfx35_1)}, 
	{NULL, 32}, 
	{sScizorGfx35_2, ARRAY_COUNT(sScizorGfx35_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_36.4bpp.lz");
static const u8 sScizorGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_36_1.4bpp.lz");
static const u8 sScizorGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_36_2.4bpp.lz");
static const ax_sprite sScizorSprites36[] = {
	{sScizorGfx36, ARRAY_COUNT(sScizorGfx36)}, 
	{NULL, 32}, 
	{sScizorGfx36_1, ARRAY_COUNT(sScizorGfx36_1)}, 
	{NULL, 96}, 
	{sScizorGfx36_2, ARRAY_COUNT(sScizorGfx36_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sScizorGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_37.4bpp.lz");
static const u8 sScizorGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_37_1.4bpp.lz");
static const u8 sScizorGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_37_2.4bpp.lz");
static const ax_sprite sScizorSprites37[] = {
	{sScizorGfx37, ARRAY_COUNT(sScizorGfx37)}, 
	{NULL, 32}, 
	{sScizorGfx37_1, ARRAY_COUNT(sScizorGfx37_1)}, 
	{NULL, 64}, 
	{sScizorGfx37_2, ARRAY_COUNT(sScizorGfx37_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_38.4bpp.lz");
static const u8 sScizorGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_38_1.4bpp.lz");
static const u8 sScizorGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_38_2.4bpp.lz");
static const u8 sScizorGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_38_3.4bpp.lz");
static const ax_sprite sScizorSprites38[] = {
	{sScizorGfx38, ARRAY_COUNT(sScizorGfx38)}, 
	{NULL, 32}, 
	{sScizorGfx38_1, ARRAY_COUNT(sScizorGfx38_1)}, 
	{NULL, 64}, 
	{sScizorGfx38_2, ARRAY_COUNT(sScizorGfx38_2)}, 
	{NULL, 96}, 
	{sScizorGfx38_3, ARRAY_COUNT(sScizorGfx38_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sScizorGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_39.4bpp.lz");
static const u8 sScizorGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_39_1.4bpp.lz");
static const u8 sScizorGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_39_2.4bpp.lz");
static const ax_sprite sScizorSprites39[] = {
	{NULL, 32}, 
	{sScizorGfx39, ARRAY_COUNT(sScizorGfx39)}, 
	{NULL, 32}, 
	{sScizorGfx39_1, ARRAY_COUNT(sScizorGfx39_1)}, 
	{NULL, 32}, 
	{sScizorGfx39_2, ARRAY_COUNT(sScizorGfx39_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_40.4bpp.lz");
static const u8 sScizorGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_40_1.4bpp.lz");
static const u8 sScizorGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_40_2.4bpp.lz");
static const u8 sScizorGfx40_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_40_3.4bpp.lz");
static const ax_sprite sScizorSprites40[] = {
	{sScizorGfx40, ARRAY_COUNT(sScizorGfx40)}, 
	{NULL, 32}, 
	{sScizorGfx40_1, ARRAY_COUNT(sScizorGfx40_1)}, 
	{NULL, 96}, 
	{sScizorGfx40_2, ARRAY_COUNT(sScizorGfx40_2)}, 
	{NULL, 64}, 
	{sScizorGfx40_3, ARRAY_COUNT(sScizorGfx40_3)}, 
	{NULL, 0}
};
static const u8 sScizorGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_41.4bpp.lz");
static const u8 sScizorGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_41_1.4bpp.lz");
static const u8 sScizorGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_41_2.4bpp.lz");
static const ax_sprite sScizorSprites41[] = {
	{sScizorGfx41, ARRAY_COUNT(sScizorGfx41)}, 
	{NULL, 32}, 
	{sScizorGfx41_1, ARRAY_COUNT(sScizorGfx41_1)}, 
	{NULL, 64}, 
	{sScizorGfx41_2, ARRAY_COUNT(sScizorGfx41_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sScizorGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_42.4bpp.lz");
static const ax_sprite sScizorSprites42[] = {
	{sScizorGfx42, ARRAY_COUNT(sScizorGfx42)}, 
	{NULL, 0}
};
static const u8 sScizorGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_43.4bpp.lz");
static const ax_sprite sScizorSprites43[] = {
	{sScizorGfx43, ARRAY_COUNT(sScizorGfx43)}, 
	{NULL, 0}
};
static const u8 sScizorGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_44.4bpp.lz");
static const ax_sprite sScizorSprites44[] = {
	{sScizorGfx44, ARRAY_COUNT(sScizorGfx44)}, 
	{NULL, 0}
};
static const u8 sScizorGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_45.4bpp.lz");
static const ax_sprite sScizorSprites45[] = {
	{sScizorGfx45, ARRAY_COUNT(sScizorGfx45)}, 
	{NULL, 0}
};
static const u8 sScizorGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_46.4bpp.lz");
static const ax_sprite sScizorSprites46[] = {
	{sScizorGfx46, ARRAY_COUNT(sScizorGfx46)}, 
	{NULL, 0}
};
static const u8 sScizorGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_47.4bpp.lz");
static const ax_sprite sScizorSprites47[] = {
	{sScizorGfx47, ARRAY_COUNT(sScizorGfx47)}, 
	{NULL, 0}
};
static const u8 sScizorGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/scizor/sprite_48.4bpp.lz");
static const ax_sprite sScizorSprites48[] = {
	{sScizorGfx48, ARRAY_COUNT(sScizorGfx48)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesScizor[] = {
	sScizorPose1,
	sScizorPose2,
	sScizorPose3,
	sScizorPose4,
	sScizorPose5,
	sScizorPose6,
	sScizorPose7,
	sScizorPose8,
	sScizorPose9,
	sScizorPose10,
	sScizorPose11,
	sScizorPose12,
	sScizorPose13,
	sScizorPose14,
	sScizorPose15,
	sScizorPose16,
	sScizorPose17,
	sScizorPose18,
	sScizorPose19,
	sScizorPose20,
	sScizorPose21,
	sScizorPose22,
	sScizorPose23,
	sScizorPose24,
	sScizorPose1,
	sScizorPose2,
	sScizorPose3,
	sScizorPose28,
	sScizorPose29,
	sScizorPose4,
	sScizorPose5,
	sScizorPose6,
	sScizorPose33,
	sScizorPose34,
	sScizorPose7,
	sScizorPose8,
	sScizorPose9,
	sScizorPose38,
	sScizorPose39,
	sScizorPose10,
	sScizorPose11,
	sScizorPose12,
	sScizorPose43,
	sScizorPose44,
	sScizorPose13,
	sScizorPose14,
	sScizorPose15,
	sScizorPose48,
	sScizorPose49,
	sScizorPose16,
	sScizorPose17,
	sScizorPose18,
	sScizorPose53,
	sScizorPose54,
	sScizorPose19,
	sScizorPose20,
	sScizorPose21,
	sScizorPose58,
	sScizorPose59,
	sScizorPose22,
	sScizorPose23,
	sScizorPose24,
	sScizorPose63,
	sScizorPose64,
	sScizorPose1,
	sScizorPose2,
	sScizorPose3,
	sScizorPose68,
	sScizorPose69,
	sScizorPose70,
	sScizorPose71,
	sScizorPose4,
	sScizorPose5,
	sScizorPose6,
	sScizorPose75,
	sScizorPose76,
	sScizorPose77,
	sScizorPose78,
	sScizorPose7,
	sScizorPose8,
	sScizorPose9,
	sScizorPose82,
	sScizorPose83,
	sScizorPose84,
	sScizorPose85,
	sScizorPose10,
	sScizorPose11,
	sScizorPose12,
	sScizorPose89,
	sScizorPose90,
	sScizorPose91,
	sScizorPose92,
	sScizorPose13,
	sScizorPose14,
	sScizorPose15,
	sScizorPose96,
	sScizorPose97,
	sScizorPose98,
	sScizorPose99,
	sScizorPose16,
	sScizorPose17,
	sScizorPose18,
	sScizorPose103,
	sScizorPose104,
	sScizorPose105,
	sScizorPose106,
	sScizorPose19,
	sScizorPose20,
	sScizorPose21,
	sScizorPose110,
	sScizorPose111,
	sScizorPose112,
	sScizorPose113,
	sScizorPose22,
	sScizorPose23,
	sScizorPose24,
	sScizorPose117,
	sScizorPose118,
	sScizorPose119,
	sScizorPose120,
	sScizorPose28,
	sScizorPose122,
	sScizorPose123,
	sScizorPose124,
	sScizorPose125,
	sScizorPose126,
	sScizorPose127,
	sScizorPose128,
	sScizorPose1,
	sScizorPose28,
	sScizorPose29,
	sScizorPose4,
	sScizorPose33,
	sScizorPose34,
	sScizorPose7,
	sScizorPose38,
	sScizorPose39,
	sScizorPose10,
	sScizorPose43,
	sScizorPose44,
	sScizorPose13,
	sScizorPose48,
	sScizorPose49,
	sScizorPose16,
	sScizorPose53,
	sScizorPose54,
	sScizorPose19,
	sScizorPose58,
	sScizorPose59,
	sScizorPose22,
	sScizorPose63,
	sScizorPose64,
	sScizorPose153,
	sScizorPose154,
	sScizorPose155,
	sScizorPose156,
	sScizorPose157,
	sScizorPose158,
	sScizorPose159,
	sScizorPose160,
	sScizorPose161,
	sScizorPose162,
	sScizorPose1,
	sScizorPose164,
	sScizorPose3,
	sScizorPose4,
	sScizorPose34,
	sScizorPose6,
	sScizorPose7,
	sScizorPose39,
	sScizorPose9,
	sScizorPose10,
	sScizorPose44,
	sScizorPose12,
	sScizorPose13,
	sScizorPose49,
	sScizorPose15,
	sScizorPose54,
	sScizorPose17,
	sScizorPose18,
	sScizorPose59,
	sScizorPose20,
	sScizorPose21,
	sScizorPose22,
	sScizorPose64,
	sScizorPose24,
	sScizorPose29,
	sScizorPose64,
	sScizorPose189,
	sScizorPose190,
	sScizorPose191,
	sScizorPose192,
	sScizorPose193,
	sScizorPose194,
	sScizorPose29,
	sScizorPose194,
	sScizorPose193,
	sScizorPose192,
	sScizorPose191,
	sScizorPose190,
	sScizorPose189,
	sScizorPose64,
	sScizorPose1,
	sScizorPose28,
	sScizorPose29,
	sScizorPose4,
	sScizorPose128,
	sScizorPose208,
	sScizorPose7,
	sScizorPose210,
	sScizorPose193,
	sScizorPose10,
	sScizorPose213,
	sScizorPose44,
	sScizorPose13,
	sScizorPose48,
	sScizorPose191,
	sScizorPose16,
	sScizorPose219,
	sScizorPose54,
	sScizorPose19,
	sScizorPose222,
	sScizorPose223,
	sScizorPose22,
	sScizorPose225,
	sScizorPose226,
	sScizorPose28,
	sScizorPose122,
	sScizorPose123,
	sScizorPose124,
	sScizorPose125,
	sScizorPose126,
	sScizorPose127,
	sScizorPose128,
	sScizorPose1,
	sScizorPose22,
	sScizorPose19,
	sScizorPose16,
	sScizorPose13,
	sScizorPose10,
	sScizorPose7,
	sScizorPose4,
};

static const struct PositionSets sAxPositionsScizor[] = {
	[0] = { .set = { {-1, -10}, {-12, -5}, {10, -5}, {-1, -11} } },
	[1] = { .set = { {-1, -8}, {-13, -7}, {6, -2}, {-1, -9} } },
	[2] = { .set = { {-1, -8}, {-8, -2}, {11, -7}, {-1, -9} } },
	[3] = { .set = { {4, -12}, {9, -10}, {-5, -3}, {-1, -10} } },
	[4] = { .set = { {4, -10}, {6, -11}, {-2, -1}, {-2, -9} } },
	[5] = { .set = { {4, -10}, {10, -7}, {-9, -3}, {1, -7} } },
	[6] = { .set = { {5, -13}, {6, -14}, {3, -3}, {-1, -9} } },
	[7] = { .set = { {5, -11}, {-1, -13}, {6, -5}, {-2, -8} } },
	[8] = { .set = { {5, -11}, {8, -12}, {-4, -1}, {-1, -8} } },
	[9] = { .set = { {3, -17}, {-2, -11}, {10, -8}, {-2, -10} } },
	[10] = { .set = { {2, -13}, {-10, -6}, {11, -10}, {-2, -11} } },
	[11] = { .set = { {3, -13}, {1, -12}, {6, -3}, {-2, -10} } },
	[12] = { .set = { {-1, -17}, {10, -12}, {-12, -12}, {-1, -11} } },
	[13] = { .set = { {-1, -16}, {11, -8}, {-10, -14}, {-1, -10} } },
	[14] = { .set = { {-1, -16}, {8, -14}, {-13, -8}, {-1, -10} } },
	[15] = { .set = { {-5, -17}, {0, -11}, {-12, -8}, {0, -10} } },
	[16] = { .set = { {-4, -13}, {8, -6}, {-13, -10}, {0, -11} } },
	[17] = { .set = { {-5, -13}, {-3, -12}, {-8, -3}, {0, -10} } },
	[18] = { .set = { {-7, -13}, {-8, -14}, {-5, -3}, {-1, -9} } },
	[19] = { .set = { {-7, -11}, {-1, -13}, {-8, -5}, {0, -8} } },
	[20] = { .set = { {-7, -11}, {-10, -12}, {2, -1}, {-1, -8} } },
	[21] = { .set = { {-6, -12}, {-11, -10}, {3, -3}, {-1, -10} } },
	[22] = { .set = { {-6, -10}, {-8, -11}, {0, -1}, {0, -9} } },
	[23] = { .set = { {-6, -10}, {-12, -7}, {7, -3}, {-3, -7} } },
	[24] = { .set = { {-1, -10}, {-12, -5}, {10, -5}, {-1, -11} } },
	[25] = { .set = { {-1, -8}, {-13, -7}, {6, -2}, {-1, -9} } },
	[26] = { .set = { {-1, -8}, {-8, -2}, {11, -7}, {-1, -9} } },
	[27] = { .set = { {-1, -12}, {5, -12}, {-7, -12}, {-1, -11} } },
	[28] = { .set = { {-1, -8}, {-8, -3}, {7, -2}, {-1, -7} } },
	[29] = { .set = { {4, -12}, {9, -10}, {-5, -3}, {-1, -10} } },
	[30] = { .set = { {4, -10}, {6, -11}, {-2, -1}, {-2, -9} } },
	[31] = { .set = { {4, -10}, {10, -7}, {-9, -3}, {1, -7} } },
	[32] = { .set = { {-1, -13}, {-6, -9}, {3, -13}, {-4, -12} } },
	[33] = { .set = { {2, -8}, {9, -7}, {-1, -4}, {-4, -9} } },
	[34] = { .set = { {5, -13}, {6, -14}, {3, -3}, {-1, -9} } },
	[35] = { .set = { {5, -11}, {-1, -13}, {6, -5}, {-2, -8} } },
	[36] = { .set = { {5, -11}, {8, -12}, {-4, -1}, {-1, -8} } },
	[37] = { .set = { {1, -11}, {2, -6}, {4, -15}, {-5, -10} } },
	[38] = { .set = { {7, -10}, {10, -13}, {9, -4}, {0, -8} } },
	[39] = { .set = { {3, -17}, {-2, -11}, {10, -8}, {-2, -10} } },
	[40] = { .set = { {2, -13}, {-10, -6}, {11, -10}, {-2, -11} } },
	[41] = { .set = { {3, -13}, {1, -12}, {6, -3}, {-2, -10} } },
	[42] = { .set = { {0, -12}, {9, -13}, {-7, -17}, {-3, -11} } },
	[43] = { .set = { {4, -17}, {-3, -20}, {11, -17}, {-3, -12} } },
	[44] = { .set = { {-1, -17}, {10, -12}, {-12, -12}, {-1, -11} } },
	[45] = { .set = { {-1, -16}, {11, -8}, {-10, -14}, {-1, -10} } },
	[46] = { .set = { {-1, -16}, {8, -14}, {-13, -8}, {-1, -10} } },
	[47] = { .set = { {-1, -14}, {6, -15}, {-8, -15}, {-1, -9} } },
	[48] = { .set = { {-1, -18}, {8, -22}, {-10, -22}, {-1, -13} } },
	[49] = { .set = { {-5, -17}, {0, -11}, {-12, -8}, {0, -10} } },
	[50] = { .set = { {-4, -13}, {8, -6}, {-13, -10}, {0, -11} } },
	[51] = { .set = { {-5, -13}, {-3, -12}, {-8, -3}, {0, -10} } },
	[52] = { .set = { {-2, -12}, {-11, -13}, {5, -17}, {1, -11} } },
	[53] = { .set = { {-6, -17}, {1, -20}, {-13, -17}, {1, -12} } },
	[54] = { .set = { {-7, -13}, {-8, -14}, {-5, -3}, {-1, -9} } },
	[55] = { .set = { {-7, -11}, {-1, -13}, {-8, -5}, {0, -8} } },
	[56] = { .set = { {-7, -11}, {-10, -12}, {2, -1}, {-1, -8} } },
	[57] = { .set = { {-3, -11}, {-4, -6}, {-6, -15}, {3, -10} } },
	[58] = { .set = { {-9, -10}, {-12, -13}, {-11, -4}, {-2, -8} } },
	[59] = { .set = { {-6, -12}, {-11, -10}, {3, -3}, {-1, -10} } },
	[60] = { .set = { {-6, -10}, {-8, -11}, {0, -1}, {0, -9} } },
	[61] = { .set = { {-6, -10}, {-12, -7}, {7, -3}, {-3, -7} } },
	[62] = { .set = { {-1, -13}, {4, -9}, {-5, -13}, {2, -12} } },
	[63] = { .set = { {-4, -8}, {-11, -7}, {-1, -4}, {2, -9} } },
	[64] = { .set = { {-1, -10}, {-12, -5}, {10, -5}, {-1, -11} } },
	[65] = { .set = { {-1, -8}, {-13, -7}, {6, -2}, {-1, -9} } },
	[66] = { .set = { {-1, -8}, {-8, -2}, {11, -7}, {-1, -9} } },
	[67] = { .set = { {6, -9}, {6, -10}, {6, -18}, {1, -9} } },
	[68] = { .set = { {6, -9}, {6, -10}, {6, -18}, {1, -9} } },
	[69] = { .set = { {-7, -9}, {-7, -10}, {-7, -18}, {-2, -9} } },
	[70] = { .set = { {-7, -9}, {-7, -10}, {-7, -18}, {-2, -9} } },
	[71] = { .set = { {4, -12}, {9, -10}, {-5, -3}, {-1, -10} } },
	[72] = { .set = { {4, -10}, {6, -11}, {-2, -1}, {-2, -9} } },
	[73] = { .set = { {4, -10}, {10, -7}, {-9, -3}, {1, -7} } },
	[74] = { .set = { {-3, -9}, {-3, -10}, {-8, -14}, {0, -8} } },
	[75] = { .set = { {-3, -9}, {-3, -10}, {-8, -14}, {0, -8} } },
	[76] = { .set = { {10, -13}, {9, -13}, {-3, -17}, {-2, -10} } },
	[77] = { .set = { {10, -13}, {9, -13}, {-3, -17}, {-2, -10} } },
	[78] = { .set = { {5, -13}, {6, -14}, {3, -3}, {-1, -9} } },
	[79] = { .set = { {5, -11}, {-1, -13}, {6, -5}, {-2, -8} } },
	[80] = { .set = { {5, -11}, {8, -12}, {-4, -1}, {-1, -8} } },
	[81] = { .set = { {9, -14}, {10, -14}, {-11, -13}, {0, -10} } },
	[82] = { .set = { {9, -14}, {10, -14}, {-11, -13}, {0, -10} } },
	[83] = { .set = { {12, -17}, {11, -17}, {-8, -14}, {2, -10} } },
	[84] = { .set = { {12, -17}, {11, -17}, {-8, -14}, {2, -10} } },
	[85] = { .set = { {3, -17}, {-2, -11}, {10, -8}, {-2, -10} } },
	[86] = { .set = { {2, -13}, {-10, -6}, {11, -10}, {-2, -11} } },
	[87] = { .set = { {3, -13}, {1, -12}, {6, -3}, {-2, -10} } },
	[88] = { .set = { {11, -16}, {10, -16}, {1, -5}, {0, -10} } },
	[89] = { .set = { {11, -16}, {10, -16}, {1, -5}, {0, -10} } },
	[90] = { .set = { {-4, -22}, {-2, -22}, {-6, -7}, {0, -10} } },
	[91] = { .set = { {-4, -22}, {-2, -22}, {-6, -7}, {0, -10} } },
	[92] = { .set = { {-1, -17}, {10, -12}, {-12, -12}, {-1, -11} } },
	[93] = { .set = { {-1, -16}, {11, -8}, {-10, -14}, {-1, -10} } },
	[94] = { .set = { {-1, -16}, {8, -14}, {-13, -8}, {-1, -10} } },
	[95] = { .set = { {-9, -20}, {-8, -20}, {-7, -9}, {-2, -12} } },
	[96] = { .set = { {-9, -20}, {-8, -20}, {-7, -9}, {-2, -12} } },
	[97] = { .set = { {8, -20}, {7, -20}, {6, -9}, {1, -12} } },
	[98] = { .set = { {8, -20}, {7, -20}, {6, -9}, {1, -12} } },
	[99] = { .set = { {-5, -17}, {0, -11}, {-12, -8}, {0, -10} } },
	[100] = { .set = { {-4, -13}, {8, -6}, {-13, -10}, {0, -11} } },
	[101] = { .set = { {-5, -13}, {-3, -12}, {-8, -3}, {0, -10} } },
	[102] = { .set = { {-13, -16}, {-12, -16}, {-3, -5}, {-2, -10} } },
	[103] = { .set = { {-13, -16}, {-12, -16}, {-3, -5}, {-2, -10} } },
	[104] = { .set = { {2, -22}, {0, -22}, {4, -7}, {-2, -10} } },
	[105] = { .set = { {2, -22}, {0, -22}, {4, -7}, {-2, -10} } },
	[106] = { .set = { {-7, -13}, {-8, -14}, {-5, -3}, {-1, -9} } },
	[107] = { .set = { {-7, -11}, {-1, -13}, {-8, -5}, {0, -8} } },
	[108] = { .set = { {-7, -11}, {-10, -12}, {2, -1}, {-1, -8} } },
	[109] = { .set = { {-11, -14}, {-12, -14}, {9, -13}, {-2, -10} } },
	[110] = { .set = { {-11, -14}, {-12, -14}, {9, -13}, {-2, -10} } },
	[111] = { .set = { {-14, -17}, {-13, -17}, {6, -14}, {-4, -10} } },
	[112] = { .set = { {-14, -17}, {-13, -17}, {6, -14}, {-4, -10} } },
	[113] = { .set = { {-6, -12}, {-11, -10}, {3, -3}, {-1, -10} } },
	[114] = { .set = { {-6, -10}, {-8, -11}, {0, -1}, {0, -9} } },
	[115] = { .set = { {-6, -10}, {-12, -7}, {7, -3}, {-3, -7} } },
	[116] = { .set = { {1, -9}, {1, -10}, {6, -14}, {-2, -8} } },
	[117] = { .set = { {1, -9}, {1, -10}, {6, -14}, {-2, -8} } },
	[118] = { .set = { {-12, -13}, {-11, -13}, {1, -17}, {0, -10} } },
	[119] = { .set = { {-12, -13}, {-11, -13}, {1, -17}, {0, -10} } },
	[120] = { .set = { {-1, -12}, {5, -12}, {-7, -12}, {-1, -11} } },
	[121] = { .set = { {-3, -13}, {2, -9}, {-7, -13}, {0, -12} } },
	[122] = { .set = { {-4, -12}, {-5, -7}, {-7, -16}, {2, -11} } },
	[123] = { .set = { {-2, -13}, {-11, -14}, {5, -18}, {1, -12} } },
	[124] = { .set = { {-1, -16}, {6, -17}, {-8, -17}, {-1, -11} } },
	[125] = { .set = { {1, -13}, {10, -14}, {-6, -18}, {-2, -12} } },
	[126] = { .set = { {3, -12}, {4, -7}, {6, -16}, {-3, -11} } },
	[127] = { .set = { {2, -13}, {-3, -9}, {6, -13}, {-1, -12} } },
	[128] = { .set = { {-1, -10}, {-12, -5}, {10, -5}, {-1, -11} } },
	[129] = { .set = { {-1, -12}, {5, -12}, {-7, -12}, {-1, -11} } },
	[130] = { .set = { {-1, -8}, {-8, -3}, {7, -2}, {-1, -7} } },
	[131] = { .set = { {4, -12}, {9, -10}, {-5, -3}, {-1, -10} } },
	[132] = { .set = { {-1, -13}, {-6, -9}, {3, -13}, {-4, -12} } },
	[133] = { .set = { {2, -8}, {9, -7}, {-1, -4}, {-4, -9} } },
	[134] = { .set = { {5, -13}, {6, -14}, {3, -3}, {-1, -9} } },
	[135] = { .set = { {1, -11}, {2, -6}, {4, -15}, {-5, -10} } },
	[136] = { .set = { {7, -10}, {10, -13}, {9, -4}, {0, -8} } },
	[137] = { .set = { {3, -17}, {-2, -11}, {10, -8}, {-2, -10} } },
	[138] = { .set = { {0, -12}, {9, -13}, {-7, -17}, {-3, -11} } },
	[139] = { .set = { {4, -17}, {-3, -20}, {11, -17}, {-3, -12} } },
	[140] = { .set = { {-1, -17}, {10, -12}, {-12, -12}, {-1, -11} } },
	[141] = { .set = { {-1, -14}, {6, -15}, {-8, -15}, {-1, -9} } },
	[142] = { .set = { {-1, -18}, {8, -22}, {-10, -22}, {-1, -13} } },
	[143] = { .set = { {-5, -17}, {0, -11}, {-12, -8}, {0, -10} } },
	[144] = { .set = { {-2, -12}, {-11, -13}, {5, -17}, {1, -11} } },
	[145] = { .set = { {-6, -17}, {1, -20}, {-13, -17}, {1, -12} } },
	[146] = { .set = { {-7, -13}, {-8, -14}, {-5, -3}, {-1, -9} } },
	[147] = { .set = { {-3, -11}, {-4, -6}, {-6, -15}, {3, -10} } },
	[148] = { .set = { {-9, -10}, {-12, -13}, {-11, -4}, {-2, -8} } },
	[149] = { .set = { {-6, -12}, {-11, -10}, {3, -3}, {-1, -10} } },
	[150] = { .set = { {-1, -13}, {4, -9}, {-5, -13}, {2, -12} } },
	[151] = { .set = { {-4, -8}, {-11, -7}, {-1, -4}, {2, -9} } },
	[152] = { .set = { {-3, -8}, {-7, -8}, {6, -2}, {1, -8} } },
	[153] = { .set = { {-4, -7}, {-7, -7}, {6, -1}, {2, -9} } },
	[154] = { .set = { {1, -8}, {-5, -6}, {8, -2}, {1, -9} } },
	[155] = { .set = { {2, -10}, {6, -8}, {-3, -1}, {-1, -9} } },
	[156] = { .set = { {4, -11}, {6, -7}, {3, -2}, {-1, -9} } },
	[157] = { .set = { {3, -11}, {-3, -7}, {5, -4}, {-3, -9} } },
	[158] = { .set = { {0, -9}, {4, -6}, {-8, -2}, {0, -6} } },
	[159] = { .set = { {-4, -11}, {2, -7}, {-6, -4}, {2, -9} } },
	[160] = { .set = { {-5, -11}, {-7, -7}, {-4, -2}, {0, -9} } },
	[161] = { .set = { {-3, -10}, {-7, -8}, {2, -1}, {0, -9} } },
	[162] = { .set = { {-1, -10}, {-12, -5}, {10, -5}, {-1, -11} } },
	[163] = { .set = { {-2, -8}, {-9, -3}, {6, -2}, {-2, -7} } },
	[164] = { .set = { {-1, -8}, {-8, -2}, {11, -7}, {-1, -9} } },
	[165] = { .set = { {4, -12}, {9, -10}, {-5, -3}, {-1, -10} } },
	[166] = { .set = { {2, -8}, {9, -7}, {-1, -4}, {-4, -9} } },
	[167] = { .set = { {4, -10}, {10, -7}, {-9, -3}, {1, -7} } },
	[168] = { .set = { {5, -13}, {6, -14}, {3, -3}, {-1, -9} } },
	[169] = { .set = { {7, -10}, {10, -13}, {9, -4}, {0, -8} } },
	[170] = { .set = { {5, -11}, {8, -12}, {-4, -1}, {-1, -8} } },
	[171] = { .set = { {3, -17}, {-2, -11}, {10, -8}, {-2, -10} } },
	[172] = { .set = { {4, -17}, {-3, -20}, {11, -17}, {-3, -12} } },
	[173] = { .set = { {3, -13}, {1, -12}, {6, -3}, {-2, -10} } },
	[174] = { .set = { {-1, -17}, {10, -12}, {-12, -12}, {-1, -11} } },
	[175] = { .set = { {-1, -18}, {8, -22}, {-10, -22}, {-1, -13} } },
	[176] = { .set = { {-1, -16}, {8, -14}, {-13, -8}, {-1, -10} } },
	[177] = { .set = { {-6, -17}, {1, -20}, {-13, -17}, {1, -12} } },
	[178] = { .set = { {-4, -13}, {8, -6}, {-13, -10}, {0, -11} } },
	[179] = { .set = { {-5, -13}, {-3, -12}, {-8, -3}, {0, -10} } },
	[180] = { .set = { {-9, -10}, {-12, -13}, {-11, -4}, {-2, -8} } },
	[181] = { .set = { {-7, -11}, {-1, -13}, {-8, -5}, {0, -8} } },
	[182] = { .set = { {-7, -11}, {-10, -12}, {2, -1}, {-1, -8} } },
	[183] = { .set = { {-6, -12}, {-11, -10}, {3, -3}, {-1, -10} } },
	[184] = { .set = { {-4, -8}, {-11, -7}, {-1, -4}, {2, -9} } },
	[185] = { .set = { {-6, -10}, {-12, -7}, {7, -3}, {-3, -7} } },
	[186] = { .set = { {-1, -8}, {-8, -3}, {7, -2}, {-1, -7} } },
	[187] = { .set = { {-4, -8}, {-11, -7}, {-1, -4}, {2, -9} } },
	[188] = { .set = { {-7, -10}, {-10, -13}, {-9, -4}, {0, -8} } },
	[189] = { .set = { {-6, -16}, {1, -19}, {-13, -16}, {1, -11} } },
	[190] = { .set = { {-1, -16}, {8, -20}, {-10, -20}, {-1, -11} } },
	[191] = { .set = { {5, -16}, {-2, -19}, {12, -16}, {-2, -11} } },
	[192] = { .set = { {6, -10}, {9, -13}, {8, -4}, {-1, -8} } },
	[193] = { .set = { {4, -9}, {11, -8}, {1, -5}, {-2, -10} } },
	[194] = { .set = { {-1, -8}, {-8, -3}, {7, -2}, {-1, -7} } },
	[195] = { .set = { {4, -9}, {11, -8}, {1, -5}, {-2, -10} } },
	[196] = { .set = { {6, -10}, {9, -13}, {8, -4}, {-1, -8} } },
	[197] = { .set = { {5, -16}, {-2, -19}, {12, -16}, {-2, -11} } },
	[198] = { .set = { {-1, -16}, {8, -20}, {-10, -20}, {-1, -11} } },
	[199] = { .set = { {-6, -16}, {1, -19}, {-13, -16}, {1, -11} } },
	[200] = { .set = { {-7, -10}, {-10, -13}, {-9, -4}, {0, -8} } },
	[201] = { .set = { {-4, -8}, {-11, -7}, {-1, -4}, {2, -9} } },
	[202] = { .set = { {-1, -10}, {-12, -5}, {10, -5}, {-1, -11} } },
	[203] = { .set = { {-1, -12}, {5, -12}, {-7, -12}, {-1, -11} } },
	[204] = { .set = { {-1, -8}, {-8, -3}, {7, -2}, {-1, -7} } },
	[205] = { .set = { {4, -12}, {9, -10}, {-5, -3}, {-1, -10} } },
	[206] = { .set = { {2, -13}, {-3, -9}, {6, -13}, {-1, -12} } },
	[207] = { .set = { {4, -8}, {11, -7}, {1, -4}, {-2, -9} } },
	[208] = { .set = { {5, -13}, {6, -14}, {3, -3}, {-1, -9} } },
	[209] = { .set = { {3, -11}, {4, -6}, {6, -15}, {-3, -10} } },
	[210] = { .set = { {6, -10}, {9, -13}, {8, -4}, {-1, -8} } },
	[211] = { .set = { {3, -17}, {-2, -11}, {10, -8}, {-2, -10} } },
	[212] = { .set = { {2, -12}, {11, -13}, {-5, -17}, {-1, -11} } },
	[213] = { .set = { {4, -17}, {-3, -20}, {11, -17}, {-3, -12} } },
	[214] = { .set = { {-1, -17}, {10, -12}, {-12, -12}, {-1, -11} } },
	[215] = { .set = { {-1, -14}, {6, -15}, {-8, -15}, {-1, -9} } },
	[216] = { .set = { {-1, -16}, {8, -20}, {-10, -20}, {-1, -11} } },
	[217] = { .set = { {-5, -17}, {0, -11}, {-12, -8}, {0, -10} } },
	[218] = { .set = { {-4, -12}, {-13, -13}, {3, -17}, {-1, -11} } },
	[219] = { .set = { {-6, -17}, {1, -20}, {-13, -17}, {1, -12} } },
	[220] = { .set = { {-7, -13}, {-8, -14}, {-5, -3}, {-1, -9} } },
	[221] = { .set = { {-5, -11}, {-6, -6}, {-8, -15}, {1, -10} } },
	[222] = { .set = { {-8, -10}, {-11, -13}, {-10, -4}, {-1, -8} } },
	[223] = { .set = { {-6, -12}, {-11, -10}, {3, -3}, {-1, -10} } },
	[224] = { .set = { {-4, -13}, {1, -9}, {-8, -13}, {-1, -12} } },
	[225] = { .set = { {-6, -8}, {-13, -7}, {-3, -4}, {0, -9} } },
	[226] = { .set = { {-1, -12}, {5, -12}, {-7, -12}, {-1, -11} } },
	[227] = { .set = { {-3, -13}, {2, -9}, {-7, -13}, {0, -12} } },
	[228] = { .set = { {-4, -12}, {-5, -7}, {-7, -16}, {2, -11} } },
	[229] = { .set = { {-2, -13}, {-11, -14}, {5, -18}, {1, -12} } },
	[230] = { .set = { {-1, -16}, {6, -17}, {-8, -17}, {-1, -11} } },
	[231] = { .set = { {1, -13}, {10, -14}, {-6, -18}, {-2, -12} } },
	[232] = { .set = { {3, -12}, {4, -7}, {6, -16}, {-3, -11} } },
	[233] = { .set = { {2, -13}, {-3, -9}, {6, -13}, {-1, -12} } },
	[234] = { .set = { {-1, -10}, {-12, -5}, {10, -5}, {-1, -11} } },
	[235] = { .set = { {-6, -12}, {-11, -10}, {3, -3}, {-1, -10} } },
	[236] = { .set = { {-7, -13}, {-8, -14}, {-5, -3}, {-1, -9} } },
	[237] = { .set = { {-5, -17}, {0, -11}, {-12, -8}, {0, -10} } },
	[238] = { .set = { {-1, -17}, {10, -12}, {-12, -12}, {-1, -11} } },
	[239] = { .set = { {3, -17}, {-2, -11}, {10, -8}, {-2, -10} } },
	[240] = { .set = { {5, -13}, {6, -14}, {3, -3}, {-1, -9} } },
	[241] = { .set = { {4, -12}, {9, -10}, {-5, -3}, {-1, -10} } },
};

static const ax_anim *const sScizorAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sScizorAnimTable2[] = {
	AX_ANIM_PTR(sScizorAnims_2_1),
	AX_ANIM_PTR(sScizorAnims_2_2),
	AX_ANIM_PTR(sScizorAnims_2_3),
	AX_ANIM_PTR(sScizorAnims_2_4),
	AX_ANIM_PTR(sScizorAnims_2_5),
	AX_ANIM_PTR(sScizorAnims_2_6),
	AX_ANIM_PTR(sScizorAnims_2_7),
	AX_ANIM_PTR(sScizorAnims_2_8),
};

static const ax_anim *const sScizorAnimTable3[] = {
	AX_ANIM_PTR(sScizorAnims_3_1),
	AX_ANIM_PTR(sScizorAnims_3_2),
	AX_ANIM_PTR(sScizorAnims_3_3),
	AX_ANIM_PTR(sScizorAnims_3_4),
	AX_ANIM_PTR(sScizorAnims_3_5),
	AX_ANIM_PTR(sScizorAnims_3_6),
	AX_ANIM_PTR(sScizorAnims_3_7),
	AX_ANIM_PTR(sScizorAnims_3_8),
};

static const ax_anim *const sScizorAnimTable4[] = {
	AX_ANIM_PTR(sScizorAnims_4_1),
	AX_ANIM_PTR(sScizorAnims_4_2),
	AX_ANIM_PTR(sScizorAnims_4_3),
	AX_ANIM_PTR(sScizorAnims_4_4),
	AX_ANIM_PTR(sScizorAnims_4_5),
	AX_ANIM_PTR(sScizorAnims_4_6),
	AX_ANIM_PTR(sScizorAnims_4_7),
	AX_ANIM_PTR(sScizorAnims_4_8),
};

static const ax_anim *const sScizorAnimTable5[] = {
	AX_ANIM_PTR(sScizorAnims_5_1),
	AX_ANIM_PTR(sScizorAnims_5_2),
	AX_ANIM_PTR(sScizorAnims_5_3),
	AX_ANIM_PTR(sScizorAnims_5_4),
	AX_ANIM_PTR(sScizorAnims_5_5),
	AX_ANIM_PTR(sScizorAnims_5_6),
	AX_ANIM_PTR(sScizorAnims_5_7),
	AX_ANIM_PTR(sScizorAnims_5_8),
};

static const ax_anim *const sScizorAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
};

static const ax_anim *const sScizorAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00606),
	AX_ANIM_PTR(gAxSharedAnim_00617),
	AX_ANIM_PTR(gAxSharedAnim_00626),
	AX_ANIM_PTR(gAxSharedAnim_00637),
	AX_ANIM_PTR(gAxSharedAnim_00654),
	AX_ANIM_PTR(gAxSharedAnim_00665),
	AX_ANIM_PTR(gAxSharedAnim_00680),
	AX_ANIM_PTR(gAxSharedAnim_00691),
};

static const ax_anim *const sScizorAnimTable8[] = {
	AX_ANIM_PTR(sScizorAnims_8_1),
	AX_ANIM_PTR(sScizorAnims_8_2),
	AX_ANIM_PTR(sScizorAnims_8_3),
	AX_ANIM_PTR(sScizorAnims_8_4),
	AX_ANIM_PTR(sScizorAnims_8_5),
	AX_ANIM_PTR(sScizorAnims_8_6),
	AX_ANIM_PTR(sScizorAnims_8_7),
	AX_ANIM_PTR(sScizorAnims_8_8),
};

static const ax_anim *const sScizorAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_01010),
	AX_ANIM_PTR(sScizorAnims_9_2),
	AX_ANIM_PTR(sScizorAnims_9_3),
	AX_ANIM_PTR(sScizorAnims_9_4),
	AX_ANIM_PTR(gAxSharedAnim_01072),
	AX_ANIM_PTR(sScizorAnims_9_6),
	AX_ANIM_PTR(sScizorAnims_9_7),
	AX_ANIM_PTR(sScizorAnims_9_8),
};

static const ax_anim *const sScizorAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01143),
	AX_ANIM_PTR(gAxSharedAnim_01156),
	AX_ANIM_PTR(gAxSharedAnim_01167),
	AX_ANIM_PTR(gAxSharedAnim_01178),
	AX_ANIM_PTR(gAxSharedAnim_01189),
	AX_ANIM_PTR(gAxSharedAnim_01200),
	AX_ANIM_PTR(gAxSharedAnim_01217),
	AX_ANIM_PTR(gAxSharedAnim_01228),
};

static const ax_anim *const sScizorAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01239),
	AX_ANIM_PTR(sScizorAnims_11_2),
	AX_ANIM_PTR(gAxSharedAnim_01311),
	AX_ANIM_PTR(gAxSharedAnim_01343),
	AX_ANIM_PTR(gAxSharedAnim_01371),
	AX_ANIM_PTR(gAxSharedAnim_01405),
	AX_ANIM_PTR(gAxSharedAnim_01434),
	AX_ANIM_PTR(sScizorAnims_11_8),
};

static const ax_anim *const sScizorAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01472),
	AX_ANIM_PTR(gAxSharedAnim_01520),
	AX_ANIM_PTR(gAxSharedAnim_01507),
	AX_ANIM_PTR(gAxSharedAnim_01500),
	AX_ANIM_PTR(gAxSharedAnim_01499),
	AX_ANIM_PTR(gAxSharedAnim_01491),
	AX_ANIM_PTR(gAxSharedAnim_01481),
	AX_ANIM_PTR(gAxSharedAnim_01473),
};

static const ax_anim *const sScizorAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01525),
	AX_ANIM_PTR(gAxSharedAnim_01579),
	AX_ANIM_PTR(gAxSharedAnim_01577),
	AX_ANIM_PTR(gAxSharedAnim_01555),
	AX_ANIM_PTR(gAxSharedAnim_01549),
	AX_ANIM_PTR(gAxSharedAnim_01544),
	AX_ANIM_PTR(gAxSharedAnim_01539),
	AX_ANIM_PTR(gAxSharedAnim_01531),
};

static const ax_anim *const *const sAxAnimationsScizor[] = {
	sScizorAnimTable1,
	sScizorAnimTable2,
	sScizorAnimTable3,
	sScizorAnimTable4,
	sScizorAnimTable5,
	sScizorAnimTable6,
	sScizorAnimTable7,
	sScizorAnimTable8,
	sScizorAnimTable9,
	sScizorAnimTable10,
	sScizorAnimTable11,
	sScizorAnimTable12,
	sScizorAnimTable13,
};

static const ax_sprite *const sAxSpritesScizor[] = {
	sScizorSprites1,
	sScizorSprites2,
	sScizorSprites3,
	sScizorSprites4,
	sScizorSprites5,
	sScizorSprites6,
	sScizorSprites7,
	sScizorSprites8,
	sScizorSprites9,
	sScizorSprites10,
	sScizorSprites11,
	sScizorSprites12,
	sScizorSprites13,
	sScizorSprites14,
	sScizorSprites15,
	sScizorSprites16,
	sScizorSprites17,
	sScizorSprites18,
	sScizorSprites19,
	sScizorSprites20,
	sScizorSprites21,
	sScizorSprites22,
	sScizorSprites23,
	sScizorSprites24,
	sScizorSprites25,
	sScizorSprites26,
	sScizorSprites27,
	sScizorSprites28,
	sScizorSprites29,
	sScizorSprites30,
	sScizorSprites31,
	sScizorSprites32,
	sScizorSprites33,
	sScizorSprites34,
	sScizorSprites35,
	sScizorSprites36,
	sScizorSprites37,
	sScizorSprites38,
	sScizorSprites39,
	sScizorSprites40,
	sScizorSprites41,
	sScizorSprites42,
	sScizorSprites43,
	sScizorSprites44,
	sScizorSprites45,
	sScizorSprites46,
	sScizorSprites47,
	sScizorSprites48,
};

static const axmain sAxMainScizor = {
	.poses = sAxPosesScizor,
	.animations = sAxAnimationsScizor,
	.animCount = ARRAY_COUNT(sAxAnimationsScizor),
	.spriteData = sAxSpritesScizor,
	.positions = sAxPositionsScizor,
};
