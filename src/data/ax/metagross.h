/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainMetagross;
const SiroArchive gAxMetagross = {"SIRO", &sAxMainMetagross};

static const ax_pose sMetagrossPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose2[] = {
	AX_POSE(2, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose3[] = {
	AX_POSE(4, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose4[] = {
	AX_POSE(6, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(7, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose5[] = {
	AX_POSE(8, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose6[] = {
	AX_POSE(10, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose7[] = {
	AX_POSE(12, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(13, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose8[] = {
	AX_POSE(14, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(15, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose9[] = {
	AX_POSE(16, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose10[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(19, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose11[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(21, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose12[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(23, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose13[] = {
	AX_POSE(24, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose14[] = {
	AX_POSE(26, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose15[] = {
	AX_POSE(28, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(29, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose16[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(19, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose17[] = {
	AX_POSE(20, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(21, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose18[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(23, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose19[] = {
	AX_POSE(12, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(13, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose20[] = {
	AX_POSE(14, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(15, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose21[] = {
	AX_POSE(16, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(17, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose22[] = {
	AX_POSE(6, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(7, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose23[] = {
	AX_POSE(8, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose24[] = {
	AX_POSE(10, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose26[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(31, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose28[] = {
	AX_POSE(32, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(33, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose30[] = {
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(35, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose32[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(37, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose34[] = {
	AX_POSE(38, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(39, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose36[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(37, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose38[] = {
	AX_POSE(34, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(35, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose40[] = {
	AX_POSE(32, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(33, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose58[] = {
	AX_POSE(40, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(41, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose60[] = {
	AX_POSE(42, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(43, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose62[] = {
	AX_POSE(44, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(45, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose64[] = {
	AX_POSE(46, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(47, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose66[] = {
	AX_POSE(48, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(49, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose68[] = {
	AX_POSE(46, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(47, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose70[] = {
	AX_POSE(44, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(45, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose72[] = {
	AX_POSE(42, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(43, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose81[] = {
	AX_POSE(50, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(51, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose82[] = {
	AX_POSE(52, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(51, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose83[] = {
	AX_POSE(53, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(54, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose84[] = {
	AX_POSE(55, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(56, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(229, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose85[] = {
	AX_POSE(57, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(58, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose86[] = {
	AX_POSE(59, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(60, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose87[] = {
	AX_POSE(61, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(62, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose88[] = {
	AX_POSE(59, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(60, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose89[] = {
	AX_POSE(57, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(58, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose90[] = {
	AX_POSE(55, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(56, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(11, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose118[] = {
	AX_POSE(46, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 11)),
	AX_POSE(47, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose119[] = {
	AX_POSE(48, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(49, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetagrossPose120[] = {
	AX_POSE(46, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(47, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE_TERMINATOR
};
static const u8 sMetagrossAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_2_1.lz");
static const u8 sMetagrossAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_2_2.lz");
static const u8 sMetagrossAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_2_3.lz");
static const u8 sMetagrossAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_2_4.lz");
static const u8 sMetagrossAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_2_5.lz");
static const u8 sMetagrossAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_2_6.lz");
static const u8 sMetagrossAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_2_7.lz");
static const u8 sMetagrossAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_2_8.lz");
static const u8 sMetagrossAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_3_1.lz");
static const u8 sMetagrossAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_3_2.lz");
static const u8 sMetagrossAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_3_3.lz");
static const u8 sMetagrossAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_3_4.lz");
static const u8 sMetagrossAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_3_5.lz");
static const u8 sMetagrossAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_3_6.lz");
static const u8 sMetagrossAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_3_7.lz");
static const u8 sMetagrossAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_3_8.lz");
static const u8 sMetagrossAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_4_1.lz");
static const u8 sMetagrossAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_4_2.lz");
static const u8 sMetagrossAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_4_3.lz");
static const u8 sMetagrossAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_4_4.lz");
static const u8 sMetagrossAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_4_5.lz");
static const u8 sMetagrossAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_4_6.lz");
static const u8 sMetagrossAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_4_7.lz");
static const u8 sMetagrossAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_4_8.lz");
static const u8 sMetagrossAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_8_1.lz");
static const u8 sMetagrossAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_8_2.lz");
static const u8 sMetagrossAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_8_3.lz");
static const u8 sMetagrossAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_8_4.lz");
static const u8 sMetagrossAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_8_5.lz");
static const u8 sMetagrossAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_8_6.lz");
static const u8 sMetagrossAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_8_7.lz");
static const u8 sMetagrossAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_8_8.lz");
static const u8 sMetagrossAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_9_1.lz");
static const u8 sMetagrossAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_9_2.lz");
static const u8 sMetagrossAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_9_3.lz");
static const u8 sMetagrossAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_9_4.lz");
static const u8 sMetagrossAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_9_5.lz");
static const u8 sMetagrossAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_9_6.lz");
static const u8 sMetagrossAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_9_7.lz");
static const u8 sMetagrossAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_9_8.lz");
static const u8 sMetagrossAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_11_1.lz");
static const u8 sMetagrossAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_11_2.lz");
static const u8 sMetagrossAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_11_3.lz");
static const u8 sMetagrossAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_11_4.lz");
static const u8 sMetagrossAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_11_5.lz");
static const u8 sMetagrossAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_11_6.lz");
static const u8 sMetagrossAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_11_7.lz");
static const u8 sMetagrossAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metagross/sMetagrossAnims_11_8.lz");

static const u8 sMetagrossGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_1.4bpp.lz");
static const ax_sprite sMetagrossSprites1[] = {
	{sMetagrossGfx1, ARRAY_COUNT(sMetagrossGfx1)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_2.4bpp.lz");
static const ax_sprite sMetagrossSprites2[] = {
	{sMetagrossGfx2, ARRAY_COUNT(sMetagrossGfx2)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_3.4bpp.lz");
static const ax_sprite sMetagrossSprites3[] = {
	{sMetagrossGfx3, ARRAY_COUNT(sMetagrossGfx3)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_4.4bpp.lz");
static const ax_sprite sMetagrossSprites4[] = {
	{sMetagrossGfx4, ARRAY_COUNT(sMetagrossGfx4)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_5.4bpp.lz");
static const ax_sprite sMetagrossSprites5[] = {
	{sMetagrossGfx5, ARRAY_COUNT(sMetagrossGfx5)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_6.4bpp.lz");
static const ax_sprite sMetagrossSprites6[] = {
	{sMetagrossGfx6, ARRAY_COUNT(sMetagrossGfx6)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_7.4bpp.lz");
static const ax_sprite sMetagrossSprites7[] = {
	{sMetagrossGfx7, ARRAY_COUNT(sMetagrossGfx7)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_8.4bpp.lz");
static const ax_sprite sMetagrossSprites8[] = {
	{sMetagrossGfx8, ARRAY_COUNT(sMetagrossGfx8)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_9.4bpp.lz");
static const ax_sprite sMetagrossSprites9[] = {
	{sMetagrossGfx9, ARRAY_COUNT(sMetagrossGfx9)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_10.4bpp.lz");
static const ax_sprite sMetagrossSprites10[] = {
	{sMetagrossGfx10, ARRAY_COUNT(sMetagrossGfx10)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_11.4bpp.lz");
static const ax_sprite sMetagrossSprites11[] = {
	{sMetagrossGfx11, ARRAY_COUNT(sMetagrossGfx11)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_12.4bpp.lz");
static const ax_sprite sMetagrossSprites12[] = {
	{sMetagrossGfx12, ARRAY_COUNT(sMetagrossGfx12)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_13.4bpp.lz");
static const ax_sprite sMetagrossSprites13[] = {
	{sMetagrossGfx13, ARRAY_COUNT(sMetagrossGfx13)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_14.4bpp.lz");
static const ax_sprite sMetagrossSprites14[] = {
	{sMetagrossGfx14, ARRAY_COUNT(sMetagrossGfx14)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_15.4bpp.lz");
static const ax_sprite sMetagrossSprites15[] = {
	{sMetagrossGfx15, ARRAY_COUNT(sMetagrossGfx15)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_16.4bpp.lz");
static const ax_sprite sMetagrossSprites16[] = {
	{sMetagrossGfx16, ARRAY_COUNT(sMetagrossGfx16)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_17.4bpp.lz");
static const ax_sprite sMetagrossSprites17[] = {
	{sMetagrossGfx17, ARRAY_COUNT(sMetagrossGfx17)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_18.4bpp.lz");
static const ax_sprite sMetagrossSprites18[] = {
	{sMetagrossGfx18, ARRAY_COUNT(sMetagrossGfx18)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_19.4bpp.lz");
static const ax_sprite sMetagrossSprites19[] = {
	{sMetagrossGfx19, ARRAY_COUNT(sMetagrossGfx19)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_20.4bpp.lz");
static const ax_sprite sMetagrossSprites20[] = {
	{sMetagrossGfx20, ARRAY_COUNT(sMetagrossGfx20)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_21.4bpp.lz");
static const ax_sprite sMetagrossSprites21[] = {
	{sMetagrossGfx21, ARRAY_COUNT(sMetagrossGfx21)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_22.4bpp.lz");
static const ax_sprite sMetagrossSprites22[] = {
	{sMetagrossGfx22, ARRAY_COUNT(sMetagrossGfx22)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_23.4bpp.lz");
static const ax_sprite sMetagrossSprites23[] = {
	{sMetagrossGfx23, ARRAY_COUNT(sMetagrossGfx23)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_24.4bpp.lz");
static const ax_sprite sMetagrossSprites24[] = {
	{sMetagrossGfx24, ARRAY_COUNT(sMetagrossGfx24)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_25.4bpp.lz");
static const ax_sprite sMetagrossSprites25[] = {
	{sMetagrossGfx25, ARRAY_COUNT(sMetagrossGfx25)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_26.4bpp.lz");
static const ax_sprite sMetagrossSprites26[] = {
	{sMetagrossGfx26, ARRAY_COUNT(sMetagrossGfx26)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_27.4bpp.lz");
static const ax_sprite sMetagrossSprites27[] = {
	{sMetagrossGfx27, ARRAY_COUNT(sMetagrossGfx27)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_28.4bpp.lz");
static const ax_sprite sMetagrossSprites28[] = {
	{sMetagrossGfx28, ARRAY_COUNT(sMetagrossGfx28)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_29.4bpp.lz");
static const ax_sprite sMetagrossSprites29[] = {
	{sMetagrossGfx29, ARRAY_COUNT(sMetagrossGfx29)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_30.4bpp.lz");
static const ax_sprite sMetagrossSprites30[] = {
	{sMetagrossGfx30, ARRAY_COUNT(sMetagrossGfx30)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_31.4bpp.lz");
static const ax_sprite sMetagrossSprites31[] = {
	{NULL, 32}, 
	{sMetagrossGfx31, ARRAY_COUNT(sMetagrossGfx31)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_32.4bpp.lz");
static const u8 sMetagrossGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_32_1.4bpp.lz");
static const ax_sprite sMetagrossSprites32[] = {
	{sMetagrossGfx32, ARRAY_COUNT(sMetagrossGfx32)}, 
	{NULL, 32}, 
	{sMetagrossGfx32_1, ARRAY_COUNT(sMetagrossGfx32_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_33.4bpp.lz");
static const u8 sMetagrossGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_33_1.4bpp.lz");
static const ax_sprite sMetagrossSprites33[] = {
	{sMetagrossGfx33, ARRAY_COUNT(sMetagrossGfx33)}, 
	{NULL, 32}, 
	{sMetagrossGfx33_1, ARRAY_COUNT(sMetagrossGfx33_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_34.4bpp.lz");
static const ax_sprite sMetagrossSprites34[] = {
	{sMetagrossGfx34, ARRAY_COUNT(sMetagrossGfx34)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_35.4bpp.lz");
static const ax_sprite sMetagrossSprites35[] = {
	{NULL, 32}, 
	{sMetagrossGfx35, ARRAY_COUNT(sMetagrossGfx35)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_36.4bpp.lz");
static const u8 sMetagrossGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_36_1.4bpp.lz");
static const ax_sprite sMetagrossSprites36[] = {
	{sMetagrossGfx36, ARRAY_COUNT(sMetagrossGfx36)}, 
	{NULL, 32}, 
	{sMetagrossGfx36_1, ARRAY_COUNT(sMetagrossGfx36_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_37.4bpp.lz");
static const u8 sMetagrossGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_37_1.4bpp.lz");
static const ax_sprite sMetagrossSprites37[] = {
	{sMetagrossGfx37, ARRAY_COUNT(sMetagrossGfx37)}, 
	{NULL, 32}, 
	{sMetagrossGfx37_1, ARRAY_COUNT(sMetagrossGfx37_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_38.4bpp.lz");
static const ax_sprite sMetagrossSprites38[] = {
	{sMetagrossGfx38, ARRAY_COUNT(sMetagrossGfx38)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_39.4bpp.lz");
static const ax_sprite sMetagrossSprites39[] = {
	{NULL, 32}, 
	{sMetagrossGfx39, ARRAY_COUNT(sMetagrossGfx39)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_40.4bpp.lz");
static const u8 sMetagrossGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_40_1.4bpp.lz");
static const ax_sprite sMetagrossSprites40[] = {
	{sMetagrossGfx40, ARRAY_COUNT(sMetagrossGfx40)}, 
	{NULL, 32}, 
	{sMetagrossGfx40_1, ARRAY_COUNT(sMetagrossGfx40_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_41.4bpp.lz");
static const ax_sprite sMetagrossSprites41[] = {
	{NULL, 32}, 
	{sMetagrossGfx41, ARRAY_COUNT(sMetagrossGfx41)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_42.4bpp.lz");
static const u8 sMetagrossGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_42_1.4bpp.lz");
static const u8 sMetagrossGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_42_2.4bpp.lz");
static const u8 sMetagrossGfx42_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_42_3.4bpp.lz");
static const ax_sprite sMetagrossSprites42[] = {
	{sMetagrossGfx42, ARRAY_COUNT(sMetagrossGfx42)}, 
	{NULL, 32}, 
	{sMetagrossGfx42_1, ARRAY_COUNT(sMetagrossGfx42_1)}, 
	{NULL, 32}, 
	{sMetagrossGfx42_2, ARRAY_COUNT(sMetagrossGfx42_2)}, 
	{NULL, 64}, 
	{sMetagrossGfx42_3, ARRAY_COUNT(sMetagrossGfx42_3)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_43.4bpp.lz");
static const ax_sprite sMetagrossSprites43[] = {
	{sMetagrossGfx43, ARRAY_COUNT(sMetagrossGfx43)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_44.4bpp.lz");
static const u8 sMetagrossGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_44_1.4bpp.lz");
static const ax_sprite sMetagrossSprites44[] = {
	{sMetagrossGfx44, ARRAY_COUNT(sMetagrossGfx44)}, 
	{NULL, 32}, 
	{sMetagrossGfx44_1, ARRAY_COUNT(sMetagrossGfx44_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_45.4bpp.lz");
static const u8 sMetagrossGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_45_1.4bpp.lz");
static const ax_sprite sMetagrossSprites45[] = {
	{NULL, 32}, 
	{sMetagrossGfx45, ARRAY_COUNT(sMetagrossGfx45)}, 
	{NULL, 32}, 
	{sMetagrossGfx45_1, ARRAY_COUNT(sMetagrossGfx45_1)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_46.4bpp.lz");
static const u8 sMetagrossGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_46_1.4bpp.lz");
static const u8 sMetagrossGfx46_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_46_2.4bpp.lz");
static const u8 sMetagrossGfx46_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_46_3.4bpp.lz");
static const ax_sprite sMetagrossSprites46[] = {
	{sMetagrossGfx46, ARRAY_COUNT(sMetagrossGfx46)}, 
	{NULL, 64}, 
	{sMetagrossGfx46_1, ARRAY_COUNT(sMetagrossGfx46_1)}, 
	{NULL, 32}, 
	{sMetagrossGfx46_2, ARRAY_COUNT(sMetagrossGfx46_2)}, 
	{NULL, 32}, 
	{sMetagrossGfx46_3, ARRAY_COUNT(sMetagrossGfx46_3)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_47.4bpp.lz");
static const u8 sMetagrossGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_47_1.4bpp.lz");
static const ax_sprite sMetagrossSprites47[] = {
	{sMetagrossGfx47, ARRAY_COUNT(sMetagrossGfx47)}, 
	{NULL, 32}, 
	{sMetagrossGfx47_1, ARRAY_COUNT(sMetagrossGfx47_1)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_48.4bpp.lz");
static const u8 sMetagrossGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_48_1.4bpp.lz");
static const u8 sMetagrossGfx48_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_48_2.4bpp.lz");
static const ax_sprite sMetagrossSprites48[] = {
	{sMetagrossGfx48, ARRAY_COUNT(sMetagrossGfx48)}, 
	{NULL, 32}, 
	{sMetagrossGfx48_1, ARRAY_COUNT(sMetagrossGfx48_1)}, 
	{NULL, 32}, 
	{sMetagrossGfx48_2, ARRAY_COUNT(sMetagrossGfx48_2)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_49.4bpp.lz");
static const u8 sMetagrossGfx49_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_49_1.4bpp.lz");
static const ax_sprite sMetagrossSprites49[] = {
	{NULL, 32}, 
	{sMetagrossGfx49, ARRAY_COUNT(sMetagrossGfx49)}, 
	{NULL, 32}, 
	{sMetagrossGfx49_1, ARRAY_COUNT(sMetagrossGfx49_1)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_50.4bpp.lz");
static const u8 sMetagrossGfx50_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_50_1.4bpp.lz");
static const u8 sMetagrossGfx50_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_50_2.4bpp.lz");
static const u8 sMetagrossGfx50_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_50_3.4bpp.lz");
static const ax_sprite sMetagrossSprites50[] = {
	{sMetagrossGfx50, ARRAY_COUNT(sMetagrossGfx50)}, 
	{NULL, 32}, 
	{sMetagrossGfx50_1, ARRAY_COUNT(sMetagrossGfx50_1)}, 
	{NULL, 32}, 
	{sMetagrossGfx50_2, ARRAY_COUNT(sMetagrossGfx50_2)}, 
	{NULL, 32}, 
	{sMetagrossGfx50_3, ARRAY_COUNT(sMetagrossGfx50_3)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_51.4bpp.lz");
static const ax_sprite sMetagrossSprites51[] = {
	{sMetagrossGfx51, ARRAY_COUNT(sMetagrossGfx51)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_52.4bpp.lz");
static const ax_sprite sMetagrossSprites52[] = {
	{sMetagrossGfx52, ARRAY_COUNT(sMetagrossGfx52)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_53.4bpp.lz");
static const ax_sprite sMetagrossSprites53[] = {
	{sMetagrossGfx53, ARRAY_COUNT(sMetagrossGfx53)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_54.4bpp.lz");
static const ax_sprite sMetagrossSprites54[] = {
	{sMetagrossGfx54, ARRAY_COUNT(sMetagrossGfx54)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_55.4bpp.lz");
static const ax_sprite sMetagrossSprites55[] = {
	{sMetagrossGfx55, ARRAY_COUNT(sMetagrossGfx55)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_56.4bpp.lz");
static const ax_sprite sMetagrossSprites56[] = {
	{sMetagrossGfx56, ARRAY_COUNT(sMetagrossGfx56)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_57.4bpp.lz");
static const ax_sprite sMetagrossSprites57[] = {
	{sMetagrossGfx57, ARRAY_COUNT(sMetagrossGfx57)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_58.4bpp.lz");
static const ax_sprite sMetagrossSprites58[] = {
	{sMetagrossGfx58, ARRAY_COUNT(sMetagrossGfx58)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_59.4bpp.lz");
static const ax_sprite sMetagrossSprites59[] = {
	{sMetagrossGfx59, ARRAY_COUNT(sMetagrossGfx59)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_60.4bpp.lz");
static const ax_sprite sMetagrossSprites60[] = {
	{sMetagrossGfx60, ARRAY_COUNT(sMetagrossGfx60)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_61.4bpp.lz");
static const ax_sprite sMetagrossSprites61[] = {
	{sMetagrossGfx61, ARRAY_COUNT(sMetagrossGfx61)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_62.4bpp.lz");
static const ax_sprite sMetagrossSprites62[] = {
	{sMetagrossGfx62, ARRAY_COUNT(sMetagrossGfx62)}, 
	{NULL, 0}
};
static const u8 sMetagrossGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metagross/sprite_63.4bpp.lz");
static const ax_sprite sMetagrossSprites63[] = {
	{sMetagrossGfx63, ARRAY_COUNT(sMetagrossGfx63)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMetagross[] = {
	sMetagrossPose1,
	sMetagrossPose2,
	sMetagrossPose3,
	sMetagrossPose4,
	sMetagrossPose5,
	sMetagrossPose6,
	sMetagrossPose7,
	sMetagrossPose8,
	sMetagrossPose9,
	sMetagrossPose10,
	sMetagrossPose11,
	sMetagrossPose12,
	sMetagrossPose13,
	sMetagrossPose14,
	sMetagrossPose15,
	sMetagrossPose16,
	sMetagrossPose17,
	sMetagrossPose18,
	sMetagrossPose19,
	sMetagrossPose20,
	sMetagrossPose21,
	sMetagrossPose22,
	sMetagrossPose23,
	sMetagrossPose24,
	sMetagrossPose1,
	sMetagrossPose26,
	sMetagrossPose4,
	sMetagrossPose28,
	sMetagrossPose7,
	sMetagrossPose30,
	sMetagrossPose10,
	sMetagrossPose32,
	sMetagrossPose13,
	sMetagrossPose34,
	sMetagrossPose16,
	sMetagrossPose36,
	sMetagrossPose19,
	sMetagrossPose38,
	sMetagrossPose22,
	sMetagrossPose40,
	sMetagrossPose1,
	sMetagrossPose26,
	sMetagrossPose4,
	sMetagrossPose28,
	sMetagrossPose7,
	sMetagrossPose30,
	sMetagrossPose10,
	sMetagrossPose32,
	sMetagrossPose13,
	sMetagrossPose34,
	sMetagrossPose16,
	sMetagrossPose36,
	sMetagrossPose19,
	sMetagrossPose38,
	sMetagrossPose22,
	sMetagrossPose40,
	sMetagrossPose1,
	sMetagrossPose58,
	sMetagrossPose4,
	sMetagrossPose60,
	sMetagrossPose7,
	sMetagrossPose62,
	sMetagrossPose10,
	sMetagrossPose64,
	sMetagrossPose13,
	sMetagrossPose66,
	sMetagrossPose16,
	sMetagrossPose68,
	sMetagrossPose19,
	sMetagrossPose70,
	sMetagrossPose22,
	sMetagrossPose72,
	sMetagrossPose1,
	sMetagrossPose22,
	sMetagrossPose19,
	sMetagrossPose16,
	sMetagrossPose13,
	sMetagrossPose10,
	sMetagrossPose7,
	sMetagrossPose4,
	sMetagrossPose81,
	sMetagrossPose82,
	sMetagrossPose83,
	sMetagrossPose84,
	sMetagrossPose85,
	sMetagrossPose86,
	sMetagrossPose87,
	sMetagrossPose88,
	sMetagrossPose89,
	sMetagrossPose90,
	sMetagrossPose1,
	sMetagrossPose58,
	sMetagrossPose4,
	sMetagrossPose60,
	sMetagrossPose7,
	sMetagrossPose62,
	sMetagrossPose10,
	sMetagrossPose64,
	sMetagrossPose13,
	sMetagrossPose66,
	sMetagrossPose16,
	sMetagrossPose68,
	sMetagrossPose19,
	sMetagrossPose70,
	sMetagrossPose22,
	sMetagrossPose72,
	sMetagrossPose26,
	sMetagrossPose40,
	sMetagrossPose38,
	sMetagrossPose36,
	sMetagrossPose34,
	sMetagrossPose32,
	sMetagrossPose30,
	sMetagrossPose28,
	sMetagrossPose58,
	sMetagrossPose60,
	sMetagrossPose62,
	sMetagrossPose118,
	sMetagrossPose119,
	sMetagrossPose120,
	sMetagrossPose70,
	sMetagrossPose72,
	sMetagrossPose1,
	sMetagrossPose58,
	sMetagrossPose4,
	sMetagrossPose60,
	sMetagrossPose7,
	sMetagrossPose62,
	sMetagrossPose10,
	sMetagrossPose64,
	sMetagrossPose13,
	sMetagrossPose66,
	sMetagrossPose16,
	sMetagrossPose68,
	sMetagrossPose19,
	sMetagrossPose70,
	sMetagrossPose22,
	sMetagrossPose72,
	sMetagrossPose58,
	sMetagrossPose72,
	sMetagrossPose70,
	sMetagrossPose120,
	sMetagrossPose119,
	sMetagrossPose118,
	sMetagrossPose62,
	sMetagrossPose60,
	sMetagrossPose1,
	sMetagrossPose22,
	sMetagrossPose19,
	sMetagrossPose16,
	sMetagrossPose13,
	sMetagrossPose10,
	sMetagrossPose7,
	sMetagrossPose4,
};

static const struct PositionSets sAxPositionsMetagross[] = {
	[0] = { .set = { {-1, -8}, {-14, 0}, {12, 0}, {-1, -12} } },
	[1] = { .set = { {0, -7}, {-14, 4}, {11, -1}, {0, -11} } },
	[2] = { .set = { {-2, -7}, {-12, -1}, {12, 4}, {-2, -12} } },
	[3] = { .set = { {4, -8}, {15, -3}, {-5, 5}, {-2, -11} } },
	[4] = { .set = { {3, -7}, {19, 0}, {-8, 2}, {-2, -11} } },
	[5] = { .set = { {5, -7}, {11, -3}, {2, 6}, {-2, -11} } },
	[6] = { .set = { {7, -10}, {9, -12}, {13, 0}, {-1, -12} } },
	[7] = { .set = { {5, -7}, {17, -9}, {9, -1}, {-1, -11} } },
	[8] = { .set = { {6, -12}, {1, -8}, {20, -1}, {-1, -11} } },
	[9] = { .set = { {6, -12}, {-4, -13}, {16, -7}, {-2, -11} } },
	[10] = { .set = { {4, -9}, {1, -13}, {12, -4}, {-2, -10} } },
	[11] = { .set = { {4, -12}, {-7, -11}, {16, -9}, {-2, -11} } },
	[12] = { .set = { {-1, -13}, {9, -11}, {-11, -11}, {-1, -11} } },
	[13] = { .set = { {-3, -13}, {6, -13}, {-11, -8}, {-1, -10} } },
	[14] = { .set = { {1, -13}, {10, -9}, {-9, -14}, {-1, -10} } },
	[15] = { .set = { {-8, -12}, {2, -13}, {-18, -7}, {0, -11} } },
	[16] = { .set = { {-6, -9}, {-3, -13}, {-14, -4}, {0, -10} } },
	[17] = { .set = { {-6, -12}, {5, -11}, {-18, -9}, {0, -11} } },
	[18] = { .set = { {-9, -10}, {-11, -12}, {-15, 0}, {-1, -12} } },
	[19] = { .set = { {-7, -7}, {-19, -9}, {-11, -1}, {-1, -11} } },
	[20] = { .set = { {-8, -12}, {-3, -8}, {-22, -1}, {-1, -11} } },
	[21] = { .set = { {-6, -8}, {-17, -3}, {3, 5}, {0, -11} } },
	[22] = { .set = { {-5, -7}, {-21, 0}, {6, 2}, {0, -11} } },
	[23] = { .set = { {-7, -7}, {-13, -3}, {-4, 6}, {0, -11} } },
	[24] = { .set = { {-1, -8}, {-14, 0}, {12, 0}, {-1, -12} } },
	[25] = { .set = { {-1, -8}, {-17, -11}, {15, -11}, {-1, -12} } },
	[26] = { .set = { {4, -8}, {15, -3}, {-5, 5}, {-2, -11} } },
	[27] = { .set = { {4, -9}, {17, -15}, {-4, -5}, {-1, -11} } },
	[28] = { .set = { {7, -10}, {9, -12}, {13, 0}, {-1, -12} } },
	[29] = { .set = { {6, -11}, {12, -20}, {15, -11}, {-1, -12} } },
	[30] = { .set = { {6, -12}, {-4, -13}, {16, -7}, {-2, -11} } },
	[31] = { .set = { {5, -11}, {-2, -21}, {16, -14}, {-2, -11} } },
	[32] = { .set = { {-1, -13}, {9, -11}, {-11, -11}, {-1, -11} } },
	[33] = { .set = { {-1, -12}, {11, -21}, {-13, -21}, {-1, -11} } },
	[34] = { .set = { {-8, -12}, {2, -13}, {-18, -7}, {0, -11} } },
	[35] = { .set = { {-7, -11}, {0, -21}, {-18, -14}, {0, -11} } },
	[36] = { .set = { {-9, -10}, {-11, -12}, {-15, 0}, {-1, -12} } },
	[37] = { .set = { {-8, -11}, {-14, -20}, {-17, -11}, {-1, -12} } },
	[38] = { .set = { {-6, -8}, {-17, -3}, {3, 5}, {0, -11} } },
	[39] = { .set = { {-6, -9}, {-19, -15}, {2, -5}, {-1, -11} } },
	[40] = { .set = { {-1, -8}, {-14, 0}, {12, 0}, {-1, -12} } },
	[41] = { .set = { {-1, -8}, {-17, -11}, {15, -11}, {-1, -12} } },
	[42] = { .set = { {4, -8}, {15, -3}, {-5, 5}, {-2, -11} } },
	[43] = { .set = { {4, -9}, {17, -15}, {-4, -5}, {-1, -11} } },
	[44] = { .set = { {7, -10}, {9, -12}, {13, 0}, {-1, -12} } },
	[45] = { .set = { {6, -11}, {12, -20}, {15, -11}, {-1, -12} } },
	[46] = { .set = { {6, -12}, {-4, -13}, {16, -7}, {-2, -11} } },
	[47] = { .set = { {5, -11}, {-2, -21}, {16, -14}, {-2, -11} } },
	[48] = { .set = { {-1, -13}, {9, -11}, {-11, -11}, {-1, -11} } },
	[49] = { .set = { {-1, -12}, {11, -21}, {-13, -21}, {-1, -11} } },
	[50] = { .set = { {-8, -12}, {2, -13}, {-18, -7}, {0, -11} } },
	[51] = { .set = { {-7, -11}, {0, -21}, {-18, -14}, {0, -11} } },
	[52] = { .set = { {-9, -10}, {-11, -12}, {-15, 0}, {-1, -12} } },
	[53] = { .set = { {-8, -11}, {-14, -20}, {-17, -11}, {-1, -12} } },
	[54] = { .set = { {-6, -8}, {-17, -3}, {3, 5}, {0, -11} } },
	[55] = { .set = { {-6, -9}, {-19, -15}, {2, -5}, {-1, -11} } },
	[56] = { .set = { {-1, -8}, {-14, 0}, {12, 0}, {-1, -12} } },
	[57] = { .set = { {-1, -9}, {-15, 1}, {13, 0}, {-1, -11} } },
	[58] = { .set = { {4, -8}, {15, -3}, {-5, 5}, {-2, -11} } },
	[59] = { .set = { {6, -9}, {15, -4}, {-5, 4}, {0, -11} } },
	[60] = { .set = { {7, -10}, {9, -12}, {13, 0}, {-1, -12} } },
	[61] = { .set = { {9, -12}, {10, -11}, {12, 0}, {2, -12} } },
	[62] = { .set = { {6, -12}, {-4, -13}, {16, -7}, {-2, -11} } },
	[63] = { .set = { {6, -15}, {-3, -14}, {14, -6}, {0, -13} } },
	[64] = { .set = { {-1, -13}, {9, -11}, {-11, -11}, {-1, -11} } },
	[65] = { .set = { {-1, -18}, {11, -10}, {-11, -8}, {-1, -14} } },
	[66] = { .set = { {-8, -12}, {2, -13}, {-18, -7}, {0, -11} } },
	[67] = { .set = { {-8, -15}, {1, -14}, {-16, -6}, {-2, -13} } },
	[68] = { .set = { {-9, -10}, {-11, -12}, {-15, 0}, {-1, -12} } },
	[69] = { .set = { {-11, -12}, {-12, -11}, {-14, 0}, {-4, -12} } },
	[70] = { .set = { {-6, -8}, {-17, -3}, {3, 5}, {0, -11} } },
	[71] = { .set = { {-8, -9}, {-17, -4}, {3, 4}, {-2, -11} } },
	[72] = { .set = { {-1, -8}, {-14, 0}, {12, 0}, {-1, -12} } },
	[73] = { .set = { {-6, -8}, {-17, -3}, {3, 5}, {0, -11} } },
	[74] = { .set = { {-9, -10}, {-11, -12}, {-15, 0}, {-1, -12} } },
	[75] = { .set = { {-8, -12}, {2, -13}, {-18, -7}, {0, -11} } },
	[76] = { .set = { {-1, -13}, {9, -11}, {-11, -11}, {-1, -11} } },
	[77] = { .set = { {6, -12}, {-4, -13}, {16, -7}, {-2, -11} } },
	[78] = { .set = { {7, -10}, {9, -12}, {13, 0}, {-1, -12} } },
	[79] = { .set = { {4, -8}, {15, -3}, {-5, 5}, {-2, -11} } },
	[80] = { .set = { {-6, -4}, {-18, -3}, {4, 4}, {-1, -6} } },
	[81] = { .set = { {-6, -4}, {-18, -2}, {4, 4}, {0, -5} } },
	[82] = { .set = { {-1, -1}, {-18, -1}, {15, 3}, {-1, -7} } },
	[83] = { .set = { {4, -1}, {18, -9}, {-10, 6}, {-3, -4} } },
	[84] = { .set = { {6, -5}, {15, -10}, {17, 4}, {-1, -5} } },
	[85] = { .set = { {4, -4}, {-4, -10}, {19, -2}, {-2, -5} } },
	[86] = { .set = { {-1, -5}, {13, -7}, {-11, -6}, {-1, -6} } },
	[87] = { .set = { {-5, -4}, {3, -10}, {-20, -2}, {1, -5} } },
	[88] = { .set = { {-7, -5}, {-16, -10}, {-18, 4}, {0, -5} } },
	[89] = { .set = { {-5, -1}, {-19, -9}, {9, 6}, {2, -4} } },
	[90] = { .set = { {-1, -8}, {-14, 0}, {12, 0}, {-1, -12} } },
	[91] = { .set = { {-1, -9}, {-15, 1}, {13, 0}, {-1, -11} } },
	[92] = { .set = { {4, -8}, {15, -3}, {-5, 5}, {-2, -11} } },
	[93] = { .set = { {6, -9}, {15, -4}, {-5, 4}, {0, -11} } },
	[94] = { .set = { {7, -10}, {9, -12}, {13, 0}, {-1, -12} } },
	[95] = { .set = { {9, -12}, {10, -11}, {12, 0}, {2, -12} } },
	[96] = { .set = { {6, -12}, {-4, -13}, {16, -7}, {-2, -11} } },
	[97] = { .set = { {6, -15}, {-3, -14}, {14, -6}, {0, -13} } },
	[98] = { .set = { {-1, -13}, {9, -11}, {-11, -11}, {-1, -11} } },
	[99] = { .set = { {-1, -18}, {11, -10}, {-11, -8}, {-1, -14} } },
	[100] = { .set = { {-8, -12}, {2, -13}, {-18, -7}, {0, -11} } },
	[101] = { .set = { {-8, -15}, {1, -14}, {-16, -6}, {-2, -13} } },
	[102] = { .set = { {-9, -10}, {-11, -12}, {-15, 0}, {-1, -12} } },
	[103] = { .set = { {-11, -12}, {-12, -11}, {-14, 0}, {-4, -12} } },
	[104] = { .set = { {-6, -8}, {-17, -3}, {3, 5}, {0, -11} } },
	[105] = { .set = { {-8, -9}, {-17, -4}, {3, 4}, {-2, -11} } },
	[106] = { .set = { {-1, -8}, {-17, -11}, {15, -11}, {-1, -12} } },
	[107] = { .set = { {-6, -9}, {-19, -15}, {2, -5}, {-1, -11} } },
	[108] = { .set = { {-8, -11}, {-14, -20}, {-17, -11}, {-1, -12} } },
	[109] = { .set = { {-7, -11}, {0, -21}, {-18, -14}, {0, -11} } },
	[110] = { .set = { {-1, -12}, {11, -21}, {-13, -21}, {-1, -11} } },
	[111] = { .set = { {5, -11}, {-2, -21}, {16, -14}, {-2, -11} } },
	[112] = { .set = { {6, -11}, {12, -20}, {15, -11}, {-1, -12} } },
	[113] = { .set = { {4, -9}, {17, -15}, {-4, -5}, {-1, -11} } },
	[114] = { .set = { {-1, -9}, {-15, 1}, {13, 0}, {-1, -11} } },
	[115] = { .set = { {6, -9}, {15, -4}, {-5, 4}, {0, -11} } },
	[116] = { .set = { {9, -12}, {10, -11}, {12, 0}, {2, -12} } },
	[117] = { .set = { {6, -14}, {-3, -13}, {14, -5}, {0, -12} } },
	[118] = { .set = { {-1, -16}, {11, -8}, {-11, -6}, {-1, -12} } },
	[119] = { .set = { {-8, -14}, {1, -13}, {-16, -5}, {-2, -12} } },
	[120] = { .set = { {-11, -12}, {-12, -11}, {-14, 0}, {-4, -12} } },
	[121] = { .set = { {-8, -9}, {-17, -4}, {3, 4}, {-2, -11} } },
	[122] = { .set = { {-1, -8}, {-14, 0}, {12, 0}, {-1, -12} } },
	[123] = { .set = { {-1, -9}, {-15, 1}, {13, 0}, {-1, -11} } },
	[124] = { .set = { {4, -8}, {15, -3}, {-5, 5}, {-2, -11} } },
	[125] = { .set = { {6, -9}, {15, -4}, {-5, 4}, {0, -11} } },
	[126] = { .set = { {7, -10}, {9, -12}, {13, 0}, {-1, -12} } },
	[127] = { .set = { {9, -12}, {10, -11}, {12, 0}, {2, -12} } },
	[128] = { .set = { {6, -12}, {-4, -13}, {16, -7}, {-2, -11} } },
	[129] = { .set = { {6, -15}, {-3, -14}, {14, -6}, {0, -13} } },
	[130] = { .set = { {-1, -13}, {9, -11}, {-11, -11}, {-1, -11} } },
	[131] = { .set = { {-1, -18}, {11, -10}, {-11, -8}, {-1, -14} } },
	[132] = { .set = { {-8, -12}, {2, -13}, {-18, -7}, {0, -11} } },
	[133] = { .set = { {-8, -15}, {1, -14}, {-16, -6}, {-2, -13} } },
	[134] = { .set = { {-9, -10}, {-11, -12}, {-15, 0}, {-1, -12} } },
	[135] = { .set = { {-11, -12}, {-12, -11}, {-14, 0}, {-4, -12} } },
	[136] = { .set = { {-6, -8}, {-17, -3}, {3, 5}, {0, -11} } },
	[137] = { .set = { {-8, -9}, {-17, -4}, {3, 4}, {-2, -11} } },
	[138] = { .set = { {-1, -9}, {-15, 1}, {13, 0}, {-1, -11} } },
	[139] = { .set = { {-8, -9}, {-17, -4}, {3, 4}, {-2, -11} } },
	[140] = { .set = { {-11, -12}, {-12, -11}, {-14, 0}, {-4, -12} } },
	[141] = { .set = { {-8, -14}, {1, -13}, {-16, -5}, {-2, -12} } },
	[142] = { .set = { {-1, -16}, {11, -8}, {-11, -6}, {-1, -12} } },
	[143] = { .set = { {6, -14}, {-3, -13}, {14, -5}, {0, -12} } },
	[144] = { .set = { {9, -12}, {10, -11}, {12, 0}, {2, -12} } },
	[145] = { .set = { {6, -9}, {15, -4}, {-5, 4}, {0, -11} } },
	[146] = { .set = { {-1, -8}, {-14, 0}, {12, 0}, {-1, -12} } },
	[147] = { .set = { {-6, -8}, {-17, -3}, {3, 5}, {0, -11} } },
	[148] = { .set = { {-9, -10}, {-11, -12}, {-15, 0}, {-1, -12} } },
	[149] = { .set = { {-8, -12}, {2, -13}, {-18, -7}, {0, -11} } },
	[150] = { .set = { {-1, -13}, {9, -11}, {-11, -11}, {-1, -11} } },
	[151] = { .set = { {6, -12}, {-4, -13}, {16, -7}, {-2, -11} } },
	[152] = { .set = { {7, -10}, {9, -12}, {13, 0}, {-1, -12} } },
	[153] = { .set = { {4, -8}, {15, -3}, {-5, 5}, {-2, -11} } },
};

static const ax_anim *const sMetagrossAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02604),
	AX_ANIM_PTR(gAxSharedAnim_02680),
	AX_ANIM_PTR(gAxSharedAnim_02689),
	AX_ANIM_PTR(gAxSharedAnim_02698),
	AX_ANIM_PTR(gAxSharedAnim_02616),
	AX_ANIM_PTR(gAxSharedAnim_02638),
	AX_ANIM_PTR(gAxSharedAnim_02651),
	AX_ANIM_PTR(gAxSharedAnim_02660),
};

static const ax_anim *const sMetagrossAnimTable2[] = {
	AX_ANIM_PTR(sMetagrossAnims_2_1),
	AX_ANIM_PTR(sMetagrossAnims_2_2),
	AX_ANIM_PTR(sMetagrossAnims_2_3),
	AX_ANIM_PTR(sMetagrossAnims_2_4),
	AX_ANIM_PTR(sMetagrossAnims_2_5),
	AX_ANIM_PTR(sMetagrossAnims_2_6),
	AX_ANIM_PTR(sMetagrossAnims_2_7),
	AX_ANIM_PTR(sMetagrossAnims_2_8),
};

static const ax_anim *const sMetagrossAnimTable3[] = {
	AX_ANIM_PTR(sMetagrossAnims_3_1),
	AX_ANIM_PTR(sMetagrossAnims_3_2),
	AX_ANIM_PTR(sMetagrossAnims_3_3),
	AX_ANIM_PTR(sMetagrossAnims_3_4),
	AX_ANIM_PTR(sMetagrossAnims_3_5),
	AX_ANIM_PTR(sMetagrossAnims_3_6),
	AX_ANIM_PTR(sMetagrossAnims_3_7),
	AX_ANIM_PTR(sMetagrossAnims_3_8),
};

static const ax_anim *const sMetagrossAnimTable4[] = {
	AX_ANIM_PTR(sMetagrossAnims_4_1),
	AX_ANIM_PTR(sMetagrossAnims_4_2),
	AX_ANIM_PTR(sMetagrossAnims_4_3),
	AX_ANIM_PTR(sMetagrossAnims_4_4),
	AX_ANIM_PTR(sMetagrossAnims_4_5),
	AX_ANIM_PTR(sMetagrossAnims_4_6),
	AX_ANIM_PTR(sMetagrossAnims_4_7),
	AX_ANIM_PTR(sMetagrossAnims_4_8),
};

static const ax_anim *const sMetagrossAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_02088),
	AX_ANIM_PTR(gAxSharedAnim_02140),
	AX_ANIM_PTR(gAxSharedAnim_02132),
	AX_ANIM_PTR(gAxSharedAnim_02126),
	AX_ANIM_PTR(gAxSharedAnim_02120),
	AX_ANIM_PTR(gAxSharedAnim_02110),
	AX_ANIM_PTR(gAxSharedAnim_02105),
	AX_ANIM_PTR(gAxSharedAnim_02099),
};

static const ax_anim *const sMetagrossAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02404),
	AX_ANIM_PTR(gAxSharedAnim_02404),
	AX_ANIM_PTR(gAxSharedAnim_02404),
	AX_ANIM_PTR(gAxSharedAnim_02404),
	AX_ANIM_PTR(gAxSharedAnim_02404),
	AX_ANIM_PTR(gAxSharedAnim_02404),
	AX_ANIM_PTR(gAxSharedAnim_02404),
	AX_ANIM_PTR(gAxSharedAnim_02404),
};

static const ax_anim *const sMetagrossAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_02162),
	AX_ANIM_PTR(gAxSharedAnim_02168),
	AX_ANIM_PTR(gAxSharedAnim_02176),
	AX_ANIM_PTR(gAxSharedAnim_02190),
	AX_ANIM_PTR(gAxSharedAnim_02201),
	AX_ANIM_PTR(gAxSharedAnim_02213),
	AX_ANIM_PTR(gAxSharedAnim_02221),
	AX_ANIM_PTR(gAxSharedAnim_02231),
};

static const ax_anim *const sMetagrossAnimTable8[] = {
	AX_ANIM_PTR(sMetagrossAnims_8_1),
	AX_ANIM_PTR(sMetagrossAnims_8_2),
	AX_ANIM_PTR(sMetagrossAnims_8_3),
	AX_ANIM_PTR(sMetagrossAnims_8_4),
	AX_ANIM_PTR(sMetagrossAnims_8_5),
	AX_ANIM_PTR(sMetagrossAnims_8_6),
	AX_ANIM_PTR(sMetagrossAnims_8_7),
	AX_ANIM_PTR(sMetagrossAnims_8_8),
};

static const ax_anim *const sMetagrossAnimTable9[] = {
	AX_ANIM_PTR(sMetagrossAnims_9_1),
	AX_ANIM_PTR(sMetagrossAnims_9_2),
	AX_ANIM_PTR(sMetagrossAnims_9_3),
	AX_ANIM_PTR(sMetagrossAnims_9_4),
	AX_ANIM_PTR(sMetagrossAnims_9_5),
	AX_ANIM_PTR(sMetagrossAnims_9_6),
	AX_ANIM_PTR(sMetagrossAnims_9_7),
	AX_ANIM_PTR(sMetagrossAnims_9_8),
};

static const ax_anim *const sMetagrossAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00269),
	AX_ANIM_PTR(gAxSharedAnim_00275),
	AX_ANIM_PTR(gAxSharedAnim_00284),
	AX_ANIM_PTR(gAxSharedAnim_00293),
	AX_ANIM_PTR(gAxSharedAnim_00300),
	AX_ANIM_PTR(gAxSharedAnim_00310),
	AX_ANIM_PTR(gAxSharedAnim_00320),
	AX_ANIM_PTR(gAxSharedAnim_00326),
};

static const ax_anim *const sMetagrossAnimTable11[] = {
	AX_ANIM_PTR(sMetagrossAnims_11_1),
	AX_ANIM_PTR(sMetagrossAnims_11_2),
	AX_ANIM_PTR(sMetagrossAnims_11_3),
	AX_ANIM_PTR(sMetagrossAnims_11_4),
	AX_ANIM_PTR(sMetagrossAnims_11_5),
	AX_ANIM_PTR(sMetagrossAnims_11_6),
	AX_ANIM_PTR(sMetagrossAnims_11_7),
	AX_ANIM_PTR(sMetagrossAnims_11_8),
};

static const ax_anim *const sMetagrossAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00476),
	AX_ANIM_PTR(gAxSharedAnim_00528),
	AX_ANIM_PTR(gAxSharedAnim_00519),
	AX_ANIM_PTR(gAxSharedAnim_00511),
	AX_ANIM_PTR(gAxSharedAnim_00510),
	AX_ANIM_PTR(gAxSharedAnim_00502),
	AX_ANIM_PTR(gAxSharedAnim_00489),
	AX_ANIM_PTR(gAxSharedAnim_00478),
};

static const ax_anim *const sMetagrossAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_00542),
	AX_ANIM_PTR(gAxSharedAnim_00599),
	AX_ANIM_PTR(gAxSharedAnim_00595),
	AX_ANIM_PTR(gAxSharedAnim_00586),
	AX_ANIM_PTR(gAxSharedAnim_00576),
	AX_ANIM_PTR(gAxSharedAnim_00568),
	AX_ANIM_PTR(gAxSharedAnim_00558),
	AX_ANIM_PTR(gAxSharedAnim_00550),
};

static const ax_anim *const *const sAxAnimationsMetagross[] = {
	sMetagrossAnimTable1,
	sMetagrossAnimTable2,
	sMetagrossAnimTable3,
	sMetagrossAnimTable4,
	sMetagrossAnimTable5,
	sMetagrossAnimTable6,
	sMetagrossAnimTable7,
	sMetagrossAnimTable8,
	sMetagrossAnimTable9,
	sMetagrossAnimTable10,
	sMetagrossAnimTable11,
	sMetagrossAnimTable12,
	sMetagrossAnimTable13,
};

static const ax_sprite *const sAxSpritesMetagross[] = {
	sMetagrossSprites1,
	sMetagrossSprites2,
	sMetagrossSprites3,
	sMetagrossSprites4,
	sMetagrossSprites5,
	sMetagrossSprites6,
	sMetagrossSprites7,
	sMetagrossSprites8,
	sMetagrossSprites9,
	sMetagrossSprites10,
	sMetagrossSprites11,
	sMetagrossSprites12,
	sMetagrossSprites13,
	sMetagrossSprites14,
	sMetagrossSprites15,
	sMetagrossSprites16,
	sMetagrossSprites17,
	sMetagrossSprites18,
	sMetagrossSprites19,
	sMetagrossSprites20,
	sMetagrossSprites21,
	sMetagrossSprites22,
	sMetagrossSprites23,
	sMetagrossSprites24,
	sMetagrossSprites25,
	sMetagrossSprites26,
	sMetagrossSprites27,
	sMetagrossSprites28,
	sMetagrossSprites29,
	sMetagrossSprites30,
	sMetagrossSprites31,
	sMetagrossSprites32,
	sMetagrossSprites33,
	sMetagrossSprites34,
	sMetagrossSprites35,
	sMetagrossSprites36,
	sMetagrossSprites37,
	sMetagrossSprites38,
	sMetagrossSprites39,
	sMetagrossSprites40,
	sMetagrossSprites41,
	sMetagrossSprites42,
	sMetagrossSprites43,
	sMetagrossSprites44,
	sMetagrossSprites45,
	sMetagrossSprites46,
	sMetagrossSprites47,
	sMetagrossSprites48,
	sMetagrossSprites49,
	sMetagrossSprites50,
	sMetagrossSprites51,
	sMetagrossSprites52,
	sMetagrossSprites53,
	sMetagrossSprites54,
	sMetagrossSprites55,
	sMetagrossSprites56,
	sMetagrossSprites57,
	sMetagrossSprites58,
	sMetagrossSprites59,
	sMetagrossSprites60,
	sMetagrossSprites61,
	sMetagrossSprites62,
	sMetagrossSprites63,
};

static const axmain sAxMainMetagross = {
	.poses = sAxPosesMetagross,
	.animations = sAxAnimationsMetagross,
	.animCount = ARRAY_COUNT(sAxAnimationsMetagross),
	.spriteData = sAxSpritesMetagross,
	.positions = sAxPositionsMetagross,
};
