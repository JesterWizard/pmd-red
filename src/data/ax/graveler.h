/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainGraveler;
const SiroArchive gAxGraveler = {"SIRO", &sAxMainGraveler};

static const ax_pose sGravelerPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose13[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose15[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose18[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose19[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose20[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose21[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose22[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose23[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose25[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose26[] = {
	AX_POSE(16, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose28[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose29[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose31[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose32[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose33[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose34[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose35[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose37[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose38[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose40[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose41[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose42[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose43[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose44[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose46[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose47[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose48[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose51[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose54[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose55[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose58[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose59[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose62[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose63[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose66[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose67[] = {
	AX_POSE(30, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose71[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose72[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose74[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose75[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose76[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose78[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose79[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose80[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose81[] = {
	AX_POSE(31, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(32, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE(33, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 6)),
	AX_POSE(34, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(11, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose82[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose83[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose84[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose85[] = {
	AX_POSE(38, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE(39, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 6)),
	AX_POSE(40, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 6)),
	AX_POSE(41, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose86[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose87[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose88[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose91[] = {
	AX_POSE(42, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose94[] = {
	AX_POSE(43, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose96[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose97[] = {
	AX_POSE(44, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose100[] = {
	AX_POSE(45, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose106[] = {
	AX_POSE(45, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose109[] = {
	AX_POSE(44, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose111[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose112[] = {
	AX_POSE(43, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose113[] = {
	AX_POSE(46, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose114[] = {
	AX_POSE(47, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose115[] = {
	AX_POSE(48, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose116[] = {
	AX_POSE(49, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose117[] = {
	AX_POSE(50, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose118[] = {
	AX_POSE(51, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose119[] = {
	AX_POSE(52, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose120[] = {
	AX_POSE(51, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose121[] = {
	AX_POSE(50, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose122[] = {
	AX_POSE(49, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose175[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose178[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose187[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose190[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGravelerPose193[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const u8 sGravelerAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_3_1.lz");
static const u8 sGravelerAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_3_2.lz");
static const u8 sGravelerAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_3_3.lz");
static const u8 sGravelerAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_3_4.lz");
static const u8 sGravelerAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_3_5.lz");
static const u8 sGravelerAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_3_6.lz");
static const u8 sGravelerAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_3_7.lz");
static const u8 sGravelerAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_3_8.lz");
static const u8 sGravelerAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_5_1.lz");
static const u8 sGravelerAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_5_2.lz");
static const u8 sGravelerAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_5_3.lz");
static const u8 sGravelerAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_5_4.lz");
static const u8 sGravelerAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_5_5.lz");
static const u8 sGravelerAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_5_6.lz");
static const u8 sGravelerAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_5_7.lz");
static const u8 sGravelerAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_5_8.lz");
static const u8 sGravelerAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_8_1.lz");
static const u8 sGravelerAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_8_2.lz");
static const u8 sGravelerAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_8_3.lz");
static const u8 sGravelerAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_8_4.lz");
static const u8 sGravelerAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_8_5.lz");
static const u8 sGravelerAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_8_6.lz");
static const u8 sGravelerAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_8_7.lz");
static const u8 sGravelerAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_8_8.lz");
static const u8 sGravelerAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_9_1.lz");
static const u8 sGravelerAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_9_2.lz");
static const u8 sGravelerAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_9_3.lz");
static const u8 sGravelerAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_9_4.lz");
static const u8 sGravelerAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_9_6.lz");
static const u8 sGravelerAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_9_7.lz");
static const u8 sGravelerAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_9_8.lz");
static const u8 sGravelerAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_11_1.lz");
static const u8 sGravelerAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_11_2.lz");
static const u8 sGravelerAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_11_3.lz");
static const u8 sGravelerAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_11_4.lz");
static const u8 sGravelerAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_11_5.lz");
static const u8 sGravelerAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_11_6.lz");
static const u8 sGravelerAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_11_7.lz");
static const u8 sGravelerAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/graveler/sGravelerAnims_11_8.lz");

static const u8 sGravelerGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_1.4bpp.lz");
static const ax_sprite sGravelerSprites1[] = {
	{sGravelerGfx1, ARRAY_COUNT(sGravelerGfx1)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_2.4bpp.lz");
static const ax_sprite sGravelerSprites2[] = {
	{sGravelerGfx2, ARRAY_COUNT(sGravelerGfx2)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_3.4bpp.lz");
static const ax_sprite sGravelerSprites3[] = {
	{sGravelerGfx3, ARRAY_COUNT(sGravelerGfx3)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_4.4bpp.lz");
static const ax_sprite sGravelerSprites4[] = {
	{sGravelerGfx4, ARRAY_COUNT(sGravelerGfx4)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_5.4bpp.lz");
static const ax_sprite sGravelerSprites5[] = {
	{sGravelerGfx5, ARRAY_COUNT(sGravelerGfx5)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_6.4bpp.lz");
static const ax_sprite sGravelerSprites6[] = {
	{sGravelerGfx6, ARRAY_COUNT(sGravelerGfx6)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_7.4bpp.lz");
static const ax_sprite sGravelerSprites7[] = {
	{sGravelerGfx7, ARRAY_COUNT(sGravelerGfx7)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_8.4bpp.lz");
static const ax_sprite sGravelerSprites8[] = {
	{sGravelerGfx8, ARRAY_COUNT(sGravelerGfx8)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_9.4bpp.lz");
static const ax_sprite sGravelerSprites9[] = {
	{sGravelerGfx9, ARRAY_COUNT(sGravelerGfx9)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_10.4bpp.lz");
static const ax_sprite sGravelerSprites10[] = {
	{sGravelerGfx10, ARRAY_COUNT(sGravelerGfx10)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_11.4bpp.lz");
static const ax_sprite sGravelerSprites11[] = {
	{sGravelerGfx11, ARRAY_COUNT(sGravelerGfx11)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_12.4bpp.lz");
static const ax_sprite sGravelerSprites12[] = {
	{sGravelerGfx12, ARRAY_COUNT(sGravelerGfx12)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_13.4bpp.lz");
static const ax_sprite sGravelerSprites13[] = {
	{sGravelerGfx13, ARRAY_COUNT(sGravelerGfx13)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_14.4bpp.lz");
static const ax_sprite sGravelerSprites14[] = {
	{sGravelerGfx14, ARRAY_COUNT(sGravelerGfx14)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_15.4bpp.lz");
static const ax_sprite sGravelerSprites15[] = {
	{sGravelerGfx15, ARRAY_COUNT(sGravelerGfx15)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_16.4bpp.lz");
static const u8 sGravelerGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_16_1.4bpp.lz");
static const ax_sprite sGravelerSprites16[] = {
	{NULL, 32}, 
	{sGravelerGfx16, ARRAY_COUNT(sGravelerGfx16)}, 
	{NULL, 32}, 
	{sGravelerGfx16_1, ARRAY_COUNT(sGravelerGfx16_1)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_17.4bpp.lz");
static const ax_sprite sGravelerSprites17[] = {
	{sGravelerGfx17, ARRAY_COUNT(sGravelerGfx17)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGravelerGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_18.4bpp.lz");
static const ax_sprite sGravelerSprites18[] = {
	{NULL, 128}, 
	{sGravelerGfx18, ARRAY_COUNT(sGravelerGfx18)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_19.4bpp.lz");
static const u8 sGravelerGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_19_1.4bpp.lz");
static const ax_sprite sGravelerSprites19[] = {
	{NULL, 32}, 
	{sGravelerGfx19, ARRAY_COUNT(sGravelerGfx19)}, 
	{NULL, 32}, 
	{sGravelerGfx19_1, ARRAY_COUNT(sGravelerGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_20.4bpp.lz");
static const ax_sprite sGravelerSprites20[] = {
	{NULL, 160}, 
	{sGravelerGfx20, ARRAY_COUNT(sGravelerGfx20)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_21.4bpp.lz");
static const u8 sGravelerGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_21_1.4bpp.lz");
static const u8 sGravelerGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_21_2.4bpp.lz");
static const u8 sGravelerGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_21_3.4bpp.lz");
static const ax_sprite sGravelerSprites21[] = {
	{NULL, 64}, 
	{sGravelerGfx21, ARRAY_COUNT(sGravelerGfx21)}, 
	{NULL, 32}, 
	{sGravelerGfx21_1, ARRAY_COUNT(sGravelerGfx21_1)}, 
	{NULL, 32}, 
	{sGravelerGfx21_2, ARRAY_COUNT(sGravelerGfx21_2)}, 
	{NULL, 32}, 
	{sGravelerGfx21_3, ARRAY_COUNT(sGravelerGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_22.4bpp.lz");
static const ax_sprite sGravelerSprites22[] = {
	{NULL, 160}, 
	{sGravelerGfx22, ARRAY_COUNT(sGravelerGfx22)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_23.4bpp.lz");
static const u8 sGravelerGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_23_1.4bpp.lz");
static const ax_sprite sGravelerSprites23[] = {
	{NULL, 64}, 
	{sGravelerGfx23, ARRAY_COUNT(sGravelerGfx23)}, 
	{NULL, 32}, 
	{sGravelerGfx23_1, ARRAY_COUNT(sGravelerGfx23_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_24.4bpp.lz");
static const ax_sprite sGravelerSprites24[] = {
	{NULL, 128}, 
	{sGravelerGfx24, ARRAY_COUNT(sGravelerGfx24)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_25.4bpp.lz");
static const ax_sprite sGravelerSprites25[] = {
	{sGravelerGfx25, ARRAY_COUNT(sGravelerGfx25)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGravelerGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_26.4bpp.lz");
static const ax_sprite sGravelerSprites26[] = {
	{sGravelerGfx26, ARRAY_COUNT(sGravelerGfx26)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_27.4bpp.lz");
static const u8 sGravelerGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_27_1.4bpp.lz");
static const u8 sGravelerGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_27_2.4bpp.lz");
static const ax_sprite sGravelerSprites27[] = {
	{NULL, 32}, 
	{sGravelerGfx27, ARRAY_COUNT(sGravelerGfx27)}, 
	{NULL, 32}, 
	{sGravelerGfx27_1, ARRAY_COUNT(sGravelerGfx27_1)}, 
	{NULL, 32}, 
	{sGravelerGfx27_2, ARRAY_COUNT(sGravelerGfx27_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_28.4bpp.lz");
static const u8 sGravelerGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_28_1.4bpp.lz");
static const u8 sGravelerGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_28_2.4bpp.lz");
static const ax_sprite sGravelerSprites28[] = {
	{NULL, 32}, 
	{sGravelerGfx28, ARRAY_COUNT(sGravelerGfx28)}, 
	{NULL, 32}, 
	{sGravelerGfx28_1, ARRAY_COUNT(sGravelerGfx28_1)}, 
	{NULL, 64}, 
	{sGravelerGfx28_2, ARRAY_COUNT(sGravelerGfx28_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sGravelerGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_29.4bpp.lz");
static const u8 sGravelerGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_29_1.4bpp.lz");
static const ax_sprite sGravelerSprites29[] = {
	{sGravelerGfx29, ARRAY_COUNT(sGravelerGfx29)}, 
	{NULL, 96}, 
	{sGravelerGfx29_1, ARRAY_COUNT(sGravelerGfx29_1)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sGravelerGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_30.4bpp.lz");
static const u8 sGravelerGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_30_1.4bpp.lz");
static const ax_sprite sGravelerSprites30[] = {
	{NULL, 32}, 
	{sGravelerGfx30, ARRAY_COUNT(sGravelerGfx30)}, 
	{NULL, 32}, 
	{sGravelerGfx30_1, ARRAY_COUNT(sGravelerGfx30_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_31.4bpp.lz");
static const ax_sprite sGravelerSprites31[] = {
	{sGravelerGfx31, ARRAY_COUNT(sGravelerGfx31)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_32.4bpp.lz");
static const ax_sprite sGravelerSprites32[] = {
	{sGravelerGfx32, ARRAY_COUNT(sGravelerGfx32)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_33.4bpp.lz");
static const ax_sprite sGravelerSprites33[] = {
	{sGravelerGfx33, ARRAY_COUNT(sGravelerGfx33)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_34.4bpp.lz");
static const ax_sprite sGravelerSprites34[] = {
	{sGravelerGfx34, ARRAY_COUNT(sGravelerGfx34)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_35.4bpp.lz");
static const ax_sprite sGravelerSprites35[] = {
	{sGravelerGfx35, ARRAY_COUNT(sGravelerGfx35)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_36.4bpp.lz");
static const u8 sGravelerGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_36_1.4bpp.lz");
static const ax_sprite sGravelerSprites36[] = {
	{NULL, 128}, 
	{sGravelerGfx36, ARRAY_COUNT(sGravelerGfx36)}, 
	{NULL, 32}, 
	{sGravelerGfx36_1, ARRAY_COUNT(sGravelerGfx36_1)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_37.4bpp.lz");
static const u8 sGravelerGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_37_1.4bpp.lz");
static const ax_sprite sGravelerSprites37[] = {
	{NULL, 128}, 
	{sGravelerGfx37, ARRAY_COUNT(sGravelerGfx37)}, 
	{NULL, 32}, 
	{sGravelerGfx37_1, ARRAY_COUNT(sGravelerGfx37_1)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_38.4bpp.lz");
static const u8 sGravelerGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_38_1.4bpp.lz");
static const u8 sGravelerGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_38_2.4bpp.lz");
static const ax_sprite sGravelerSprites38[] = {
	{NULL, 128}, 
	{sGravelerGfx38, ARRAY_COUNT(sGravelerGfx38)}, 
	{NULL, 32}, 
	{sGravelerGfx38_1, ARRAY_COUNT(sGravelerGfx38_1)}, 
	{NULL, 32}, 
	{sGravelerGfx38_2, ARRAY_COUNT(sGravelerGfx38_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_39.4bpp.lz");
static const u8 sGravelerGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_39_1.4bpp.lz");
static const ax_sprite sGravelerSprites39[] = {
	{sGravelerGfx39, ARRAY_COUNT(sGravelerGfx39)}, 
	{NULL, 32}, 
	{sGravelerGfx39_1, ARRAY_COUNT(sGravelerGfx39_1)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_40.4bpp.lz");
static const ax_sprite sGravelerSprites40[] = {
	{sGravelerGfx40, ARRAY_COUNT(sGravelerGfx40)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_41.4bpp.lz");
static const ax_sprite sGravelerSprites41[] = {
	{sGravelerGfx41, ARRAY_COUNT(sGravelerGfx41)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_42.4bpp.lz");
static const ax_sprite sGravelerSprites42[] = {
	{sGravelerGfx42, ARRAY_COUNT(sGravelerGfx42)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_43.4bpp.lz");
static const ax_sprite sGravelerSprites43[] = {
	{sGravelerGfx43, ARRAY_COUNT(sGravelerGfx43)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGravelerGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_44.4bpp.lz");
static const u8 sGravelerGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_44_1.4bpp.lz");
static const ax_sprite sGravelerSprites44[] = {
	{NULL, 32}, 
	{sGravelerGfx44, ARRAY_COUNT(sGravelerGfx44)}, 
	{NULL, 32}, 
	{sGravelerGfx44_1, ARRAY_COUNT(sGravelerGfx44_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_45.4bpp.lz");
static const u8 sGravelerGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_45_1.4bpp.lz");
static const ax_sprite sGravelerSprites45[] = {
	{NULL, 64}, 
	{sGravelerGfx45, ARRAY_COUNT(sGravelerGfx45)}, 
	{NULL, 32}, 
	{sGravelerGfx45_1, ARRAY_COUNT(sGravelerGfx45_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_46.4bpp.lz");
static const u8 sGravelerGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_46_1.4bpp.lz");
static const ax_sprite sGravelerSprites46[] = {
	{NULL, 32}, 
	{sGravelerGfx46, ARRAY_COUNT(sGravelerGfx46)}, 
	{NULL, 32}, 
	{sGravelerGfx46_1, ARRAY_COUNT(sGravelerGfx46_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGravelerGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_47.4bpp.lz");
static const ax_sprite sGravelerSprites47[] = {
	{sGravelerGfx47, ARRAY_COUNT(sGravelerGfx47)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_48.4bpp.lz");
static const ax_sprite sGravelerSprites48[] = {
	{sGravelerGfx48, ARRAY_COUNT(sGravelerGfx48)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_49.4bpp.lz");
static const ax_sprite sGravelerSprites49[] = {
	{sGravelerGfx49, ARRAY_COUNT(sGravelerGfx49)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_50.4bpp.lz");
static const ax_sprite sGravelerSprites50[] = {
	{sGravelerGfx50, ARRAY_COUNT(sGravelerGfx50)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_51.4bpp.lz");
static const ax_sprite sGravelerSprites51[] = {
	{sGravelerGfx51, ARRAY_COUNT(sGravelerGfx51)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_52.4bpp.lz");
static const ax_sprite sGravelerSprites52[] = {
	{sGravelerGfx52, ARRAY_COUNT(sGravelerGfx52)}, 
	{NULL, 0}
};
static const u8 sGravelerGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/graveler/sprite_53.4bpp.lz");
static const ax_sprite sGravelerSprites53[] = {
	{sGravelerGfx53, ARRAY_COUNT(sGravelerGfx53)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesGraveler[] = {
	sGravelerPose1,
	sGravelerPose2,
	sGravelerPose3,
	sGravelerPose4,
	sGravelerPose5,
	sGravelerPose6,
	sGravelerPose7,
	sGravelerPose8,
	sGravelerPose9,
	sGravelerPose10,
	sGravelerPose11,
	sGravelerPose12,
	sGravelerPose13,
	sGravelerPose14,
	sGravelerPose15,
	sGravelerPose16,
	sGravelerPose17,
	sGravelerPose18,
	sGravelerPose19,
	sGravelerPose20,
	sGravelerPose21,
	sGravelerPose22,
	sGravelerPose23,
	sGravelerPose24,
	sGravelerPose25,
	sGravelerPose26,
	sGravelerPose3,
	sGravelerPose28,
	sGravelerPose29,
	sGravelerPose6,
	sGravelerPose31,
	sGravelerPose32,
	sGravelerPose33,
	sGravelerPose34,
	sGravelerPose35,
	sGravelerPose12,
	sGravelerPose37,
	sGravelerPose38,
	sGravelerPose15,
	sGravelerPose40,
	sGravelerPose41,
	sGravelerPose42,
	sGravelerPose43,
	sGravelerPose44,
	sGravelerPose21,
	sGravelerPose46,
	sGravelerPose47,
	sGravelerPose48,
	sGravelerPose1,
	sGravelerPose26,
	sGravelerPose51,
	sGravelerPose25,
	sGravelerPose4,
	sGravelerPose54,
	sGravelerPose55,
	sGravelerPose28,
	sGravelerPose7,
	sGravelerPose58,
	sGravelerPose59,
	sGravelerPose31,
	sGravelerPose10,
	sGravelerPose62,
	sGravelerPose63,
	sGravelerPose34,
	sGravelerPose13,
	sGravelerPose66,
	sGravelerPose67,
	sGravelerPose37,
	sGravelerPose16,
	sGravelerPose41,
	sGravelerPose71,
	sGravelerPose72,
	sGravelerPose19,
	sGravelerPose74,
	sGravelerPose75,
	sGravelerPose76,
	sGravelerPose22,
	sGravelerPose78,
	sGravelerPose79,
	sGravelerPose80,
	sGravelerPose81,
	sGravelerPose82,
	sGravelerPose83,
	sGravelerPose84,
	sGravelerPose85,
	sGravelerPose86,
	sGravelerPose87,
	sGravelerPose88,
	sGravelerPose1,
	sGravelerPose81,
	sGravelerPose91,
	sGravelerPose4,
	sGravelerPose88,
	sGravelerPose94,
	sGravelerPose7,
	sGravelerPose96,
	sGravelerPose97,
	sGravelerPose10,
	sGravelerPose86,
	sGravelerPose100,
	sGravelerPose13,
	sGravelerPose85,
	sGravelerPose38,
	sGravelerPose16,
	sGravelerPose84,
	sGravelerPose106,
	sGravelerPose19,
	sGravelerPose83,
	sGravelerPose109,
	sGravelerPose22,
	sGravelerPose111,
	sGravelerPose112,
	sGravelerPose113,
	sGravelerPose114,
	sGravelerPose115,
	sGravelerPose116,
	sGravelerPose117,
	sGravelerPose118,
	sGravelerPose119,
	sGravelerPose120,
	sGravelerPose121,
	sGravelerPose122,
	sGravelerPose1,
	sGravelerPose26,
	sGravelerPose51,
	sGravelerPose25,
	sGravelerPose4,
	sGravelerPose54,
	sGravelerPose55,
	sGravelerPose28,
	sGravelerPose7,
	sGravelerPose58,
	sGravelerPose59,
	sGravelerPose31,
	sGravelerPose10,
	sGravelerPose62,
	sGravelerPose63,
	sGravelerPose34,
	sGravelerPose13,
	sGravelerPose66,
	sGravelerPose67,
	sGravelerPose37,
	sGravelerPose16,
	sGravelerPose41,
	sGravelerPose71,
	sGravelerPose72,
	sGravelerPose19,
	sGravelerPose74,
	sGravelerPose75,
	sGravelerPose76,
	sGravelerPose22,
	sGravelerPose78,
	sGravelerPose79,
	sGravelerPose80,
	sGravelerPose81,
	sGravelerPose82,
	sGravelerPose83,
	sGravelerPose84,
	sGravelerPose85,
	sGravelerPose86,
	sGravelerPose87,
	sGravelerPose88,
	sGravelerPose81,
	sGravelerPose88,
	sGravelerPose87,
	sGravelerPose86,
	sGravelerPose85,
	sGravelerPose84,
	sGravelerPose83,
	sGravelerPose82,
	sGravelerPose1,
	sGravelerPose26,
	sGravelerPose25,
	sGravelerPose4,
	sGravelerPose175,
	sGravelerPose28,
	sGravelerPose7,
	sGravelerPose178,
	sGravelerPose31,
	sGravelerPose10,
	sGravelerPose35,
	sGravelerPose34,
	sGravelerPose13,
	sGravelerPose66,
	sGravelerPose37,
	sGravelerPose16,
	sGravelerPose187,
	sGravelerPose72,
	sGravelerPose19,
	sGravelerPose190,
	sGravelerPose76,
	sGravelerPose22,
	sGravelerPose193,
	sGravelerPose80,
	sGravelerPose81,
	sGravelerPose82,
	sGravelerPose83,
	sGravelerPose84,
	sGravelerPose85,
	sGravelerPose86,
	sGravelerPose87,
	sGravelerPose88,
	sGravelerPose1,
	sGravelerPose22,
	sGravelerPose19,
	sGravelerPose16,
	sGravelerPose13,
	sGravelerPose10,
	sGravelerPose7,
	sGravelerPose4,
};

static const struct PositionSets sAxPositionsGraveler[] = {
	[0] = { .set = { {-1, -8}, {-8, -18}, {6, -18}, {-1, -9} } },
	[1] = { .set = { {-2, -7}, {-11, -17}, {4, -15}, {-1, -8} } },
	[2] = { .set = { {0, -7}, {-5, -15}, {9, -17}, {-1, -8} } },
	[3] = { .set = { {2, -9}, {5, -22}, {-5, -17}, {-2, -9} } },
	[4] = { .set = { {3, -7}, {3, -23}, {0, -17}, {-2, -7} } },
	[5] = { .set = { {1, -7}, {6, -18}, {-8, -14}, {-2, -7} } },
	[6] = { .set = { {4, -9}, {0, -22}, {1, -16}, {-1, -7} } },
	[7] = { .set = { {5, -9}, {-3, -24}, {3, -19}, {-1, -7} } },
	[8] = { .set = { {3, -7}, {2, -21}, {-2, -15}, {-3, -7} } },
	[9] = { .set = { {2, -8}, {-5, -22}, {6, -18}, {-1, -8} } },
	[10] = { .set = { {1, -10}, {-8, -21}, {6, -19}, {-1, -8} } },
	[11] = { .set = { {2, -7}, {-2, -20}, {4, -15}, {-1, -8} } },
	[12] = { .set = { {-1, -9}, {7, -21}, {-9, -21}, {-1, -7} } },
	[13] = { .set = { {0, -9}, {9, -17}, {-5, -21}, {-1, -7} } },
	[14] = { .set = { {-2, -9}, {3, -20}, {-11, -17}, {-1, -7} } },
	[15] = { .set = { {-4, -8}, {3, -22}, {-8, -18}, {-1, -8} } },
	[16] = { .set = { {-3, -10}, {6, -21}, {-8, -19}, {-1, -8} } },
	[17] = { .set = { {-4, -7}, {0, -20}, {-6, -15}, {-1, -8} } },
	[18] = { .set = { {-6, -9}, {-2, -22}, {-3, -16}, {-1, -7} } },
	[19] = { .set = { {-7, -9}, {1, -24}, {-5, -19}, {-1, -7} } },
	[20] = { .set = { {-5, -7}, {-4, -21}, {0, -15}, {1, -7} } },
	[21] = { .set = { {-4, -9}, {-7, -22}, {3, -17}, {0, -9} } },
	[22] = { .set = { {-5, -7}, {-5, -23}, {-2, -17}, {0, -7} } },
	[23] = { .set = { {-3, -7}, {-8, -18}, {6, -14}, {0, -7} } },
	[24] = { .set = { {-1, -5}, {-9, 1}, {7, 1}, {-1, -7} } },
	[25] = { .set = { {-1, -11}, {-6, -20}, {4, -20}, {-1, -8} } },
	[26] = { .set = { {0, -7}, {-5, -15}, {9, -17}, {-1, -8} } },
	[27] = { .set = { {3, -6}, {11, -3}, {0, 2}, {-1, -9} } },
	[28] = { .set = { {2, -11}, {-2, -20}, {-13, -17}, {-1, -9} } },
	[29] = { .set = { {1, -7}, {6, -18}, {-8, -14}, {-2, -7} } },
	[30] = { .set = { {6, -6}, {12, -5}, {10, 0}, {1, -8} } },
	[31] = { .set = { {5, -11}, {-7, -20}, {-10, -15}, {0, -9} } },
	[32] = { .set = { {4, -7}, {3, -21}, {-1, -15}, {-2, -7} } },
	[33] = { .set = { {7, -6}, {5, -10}, {12, -6}, {1, -8} } },
	[34] = { .set = { {4, -11}, {-13, -16}, {-4, -13}, {-2, -8} } },
	[35] = { .set = { {2, -7}, {-2, -20}, {4, -15}, {-1, -8} } },
	[36] = { .set = { {-1, -6}, {4, -12}, {-6, -12}, {-1, -8} } },
	[37] = { .set = { {-1, -11}, {11, -16}, {-13, -16}, {-1, -7} } },
	[38] = { .set = { {-2, -9}, {3, -20}, {-11, -17}, {-1, -7} } },
	[39] = { .set = { {-8, -6}, {-6, -10}, {-13, -6}, {-2, -8} } },
	[40] = { .set = { {-5, -11}, {12, -16}, {3, -13}, {1, -8} } },
	[41] = { .set = { {-3, -7}, {1, -20}, {-5, -15}, {0, -8} } },
	[42] = { .set = { {-7, -6}, {-13, -5}, {-11, 0}, {-2, -8} } },
	[43] = { .set = { {-6, -11}, {6, -20}, {9, -15}, {-1, -9} } },
	[44] = { .set = { {-5, -7}, {-4, -21}, {0, -15}, {1, -7} } },
	[45] = { .set = { {-4, -6}, {-12, -3}, {-1, 2}, {0, -9} } },
	[46] = { .set = { {-3, -11}, {1, -20}, {12, -17}, {0, -9} } },
	[47] = { .set = { {-2, -7}, {-7, -18}, {7, -14}, {1, -7} } },
	[48] = { .set = { {-1, -8}, {-8, -18}, {6, -18}, {-1, -9} } },
	[49] = { .set = { {-1, -11}, {-6, -20}, {4, -20}, {-1, -8} } },
	[50] = { .set = { {-1, -5}, {-9, 1}, {7, 1}, {-1, -7} } },
	[51] = { .set = { {-1, -5}, {-9, 1}, {7, 1}, {-1, -7} } },
	[52] = { .set = { {2, -9}, {5, -22}, {-5, -17}, {-2, -9} } },
	[53] = { .set = { {0, -12}, {-4, -21}, {-15, -18}, {-3, -10} } },
	[54] = { .set = { {3, -6}, {11, -3}, {0, 2}, {-1, -9} } },
	[55] = { .set = { {3, -6}, {11, -3}, {0, 2}, {-1, -9} } },
	[56] = { .set = { {4, -9}, {0, -22}, {1, -16}, {-1, -7} } },
	[57] = { .set = { {2, -11}, {-10, -20}, {-13, -15}, {-3, -9} } },
	[58] = { .set = { {6, -6}, {12, -5}, {10, 0}, {1, -8} } },
	[59] = { .set = { {6, -6}, {12, -5}, {10, 0}, {1, -8} } },
	[60] = { .set = { {2, -8}, {-5, -22}, {6, -18}, {-1, -8} } },
	[61] = { .set = { {3, -11}, {-14, -16}, {-5, -13}, {-3, -8} } },
	[62] = { .set = { {7, -6}, {5, -10}, {12, -6}, {1, -8} } },
	[63] = { .set = { {7, -6}, {5, -10}, {12, -6}, {1, -8} } },
	[64] = { .set = { {-1, -9}, {7, -21}, {-9, -21}, {-1, -7} } },
	[65] = { .set = { {-1, -8}, {7, -14}, {-9, -14}, {-1, -7} } },
	[66] = { .set = { {-1, -6}, {4, -12}, {-6, -12}, {-1, -8} } },
	[67] = { .set = { {-1, -6}, {4, -12}, {-6, -12}, {-1, -8} } },
	[68] = { .set = { {-4, -8}, {3, -22}, {-8, -18}, {-1, -8} } },
	[69] = { .set = { {-5, -11}, {12, -16}, {3, -13}, {1, -8} } },
	[70] = { .set = { {-9, -6}, {-7, -10}, {-14, -6}, {-3, -8} } },
	[71] = { .set = { {-9, -6}, {-7, -10}, {-14, -6}, {-3, -8} } },
	[72] = { .set = { {-6, -9}, {-2, -22}, {-3, -16}, {-1, -7} } },
	[73] = { .set = { {-4, -11}, {8, -20}, {11, -15}, {1, -9} } },
	[74] = { .set = { {-8, -6}, {-14, -5}, {-12, 0}, {-3, -8} } },
	[75] = { .set = { {-8, -6}, {-14, -5}, {-12, 0}, {-3, -8} } },
	[76] = { .set = { {-4, -9}, {-7, -22}, {3, -17}, {0, -9} } },
	[77] = { .set = { {-2, -12}, {2, -21}, {13, -18}, {1, -10} } },
	[78] = { .set = { {-5, -6}, {-13, -3}, {-2, 2}, {-1, -9} } },
	[79] = { .set = { {-5, -6}, {-13, -3}, {-2, 2}, {-1, -9} } },
	[80] = { .set = { {-1, -3}, {-16, -8}, {14, -8}, {-1, -8} } },
	[81] = { .set = { {-5, -3}, {-12, -8}, {14, -1}, {-1, -9} } },
	[82] = { .set = { {-6, -5}, {1, -8}, {5, 1}, {-1, -8} } },
	[83] = { .set = { {-8, -6}, {4, -7}, {-9, 1}, {-1, -8} } },
	[84] = { .set = { {-1, -9}, {13, -3}, {-15, -3}, {-1, -7} } },
	[85] = { .set = { {6, -6}, {-6, -7}, {7, 1}, {-1, -8} } },
	[86] = { .set = { {5, -5}, {-2, -8}, {-6, 1}, {0, -8} } },
	[87] = { .set = { {4, -3}, {11, -8}, {-15, -1}, {0, -9} } },
	[88] = { .set = { {-1, -8}, {-8, -18}, {6, -18}, {-1, -9} } },
	[89] = { .set = { {-1, -3}, {-16, -8}, {14, -8}, {-1, -8} } },
	[90] = { .set = { {-1, -14}, {-9, -19}, {7, -19}, {-1, -9} } },
	[91] = { .set = { {2, -9}, {5, -22}, {-5, -17}, {-2, -9} } },
	[92] = { .set = { {4, -3}, {11, -8}, {-15, -1}, {0, -9} } },
	[93] = { .set = { {0, -14}, {0, -23}, {-13, -19}, {-2, -9} } },
	[94] = { .set = { {4, -9}, {0, -22}, {1, -16}, {-1, -7} } },
	[95] = { .set = { {4, -5}, {-3, -8}, {-7, 1}, {-1, -8} } },
	[96] = { .set = { {2, -15}, {-7, -21}, {-12, -16}, {-2, -9} } },
	[97] = { .set = { {2, -8}, {-5, -22}, {6, -18}, {-1, -8} } },
	[98] = { .set = { {6, -6}, {-6, -7}, {7, 1}, {-1, -8} } },
	[99] = { .set = { {3, -15}, {-15, -19}, {-6, -15}, {-2, -9} } },
	[100] = { .set = { {-1, -9}, {7, -21}, {-9, -21}, {-1, -7} } },
	[101] = { .set = { {-1, -9}, {13, -3}, {-15, -3}, {-1, -7} } },
	[102] = { .set = { {-1, -11}, {11, -16}, {-13, -16}, {-1, -7} } },
	[103] = { .set = { {-4, -8}, {3, -22}, {-8, -18}, {-1, -8} } },
	[104] = { .set = { {-8, -6}, {4, -7}, {-9, 1}, {-1, -8} } },
	[105] = { .set = { {-5, -15}, {13, -19}, {4, -15}, {0, -9} } },
	[106] = { .set = { {-6, -9}, {-2, -22}, {-3, -16}, {-1, -7} } },
	[107] = { .set = { {-6, -5}, {1, -8}, {5, 1}, {-1, -8} } },
	[108] = { .set = { {-4, -15}, {5, -21}, {10, -16}, {0, -9} } },
	[109] = { .set = { {-4, -9}, {-7, -22}, {3, -17}, {0, -9} } },
	[110] = { .set = { {-6, -3}, {-13, -8}, {13, -1}, {-2, -9} } },
	[111] = { .set = { {-2, -14}, {-2, -23}, {11, -19}, {0, -9} } },
	[112] = { .set = { {-1, -7}, {-12, -2}, {10, -2}, {-1, -8} } },
	[113] = { .set = { {-1, -6}, {-12, -1}, {10, -1}, {-1, -7} } },
	[114] = { .set = { {0, -7}, {-7, -14}, {7, -14}, {0, -8} } },
	[115] = { .set = { {1, -7}, {6, -17}, {-4, -12}, {-2, -8} } },
	[116] = { .set = { {3, -7}, {5, -19}, {3, -13}, {-2, -7} } },
	[117] = { .set = { {4, -7}, {-2, -17}, {7, -14}, {-1, -8} } },
	[118] = { .set = { {0, -5}, {5, -16}, {-5, -16}, {0, -7} } },
	[119] = { .set = { {-5, -7}, {1, -17}, {-8, -14}, {0, -8} } },
	[120] = { .set = { {-4, -7}, {-6, -19}, {-4, -13}, {1, -7} } },
	[121] = { .set = { {-2, -7}, {-7, -17}, {3, -12}, {1, -8} } },
	[122] = { .set = { {-1, -8}, {-8, -18}, {6, -18}, {-1, -9} } },
	[123] = { .set = { {-1, -11}, {-6, -20}, {4, -20}, {-1, -8} } },
	[124] = { .set = { {-1, -5}, {-9, 1}, {7, 1}, {-1, -7} } },
	[125] = { .set = { {-1, -5}, {-9, 1}, {7, 1}, {-1, -7} } },
	[126] = { .set = { {2, -9}, {5, -22}, {-5, -17}, {-2, -9} } },
	[127] = { .set = { {0, -12}, {-4, -21}, {-15, -18}, {-3, -10} } },
	[128] = { .set = { {3, -6}, {11, -3}, {0, 2}, {-1, -9} } },
	[129] = { .set = { {3, -6}, {11, -3}, {0, 2}, {-1, -9} } },
	[130] = { .set = { {4, -9}, {0, -22}, {1, -16}, {-1, -7} } },
	[131] = { .set = { {2, -11}, {-10, -20}, {-13, -15}, {-3, -9} } },
	[132] = { .set = { {6, -6}, {12, -5}, {10, 0}, {1, -8} } },
	[133] = { .set = { {6, -6}, {12, -5}, {10, 0}, {1, -8} } },
	[134] = { .set = { {2, -8}, {-5, -22}, {6, -18}, {-1, -8} } },
	[135] = { .set = { {3, -11}, {-14, -16}, {-5, -13}, {-3, -8} } },
	[136] = { .set = { {7, -6}, {5, -10}, {12, -6}, {1, -8} } },
	[137] = { .set = { {7, -6}, {5, -10}, {12, -6}, {1, -8} } },
	[138] = { .set = { {-1, -9}, {7, -21}, {-9, -21}, {-1, -7} } },
	[139] = { .set = { {-1, -8}, {7, -14}, {-9, -14}, {-1, -7} } },
	[140] = { .set = { {-1, -6}, {4, -12}, {-6, -12}, {-1, -8} } },
	[141] = { .set = { {-1, -6}, {4, -12}, {-6, -12}, {-1, -8} } },
	[142] = { .set = { {-4, -8}, {3, -22}, {-8, -18}, {-1, -8} } },
	[143] = { .set = { {-5, -11}, {12, -16}, {3, -13}, {1, -8} } },
	[144] = { .set = { {-9, -6}, {-7, -10}, {-14, -6}, {-3, -8} } },
	[145] = { .set = { {-9, -6}, {-7, -10}, {-14, -6}, {-3, -8} } },
	[146] = { .set = { {-6, -9}, {-2, -22}, {-3, -16}, {-1, -7} } },
	[147] = { .set = { {-4, -11}, {8, -20}, {11, -15}, {1, -9} } },
	[148] = { .set = { {-8, -6}, {-14, -5}, {-12, 0}, {-3, -8} } },
	[149] = { .set = { {-8, -6}, {-14, -5}, {-12, 0}, {-3, -8} } },
	[150] = { .set = { {-4, -9}, {-7, -22}, {3, -17}, {0, -9} } },
	[151] = { .set = { {-2, -12}, {2, -21}, {13, -18}, {1, -10} } },
	[152] = { .set = { {-5, -6}, {-13, -3}, {-2, 2}, {-1, -9} } },
	[153] = { .set = { {-5, -6}, {-13, -3}, {-2, 2}, {-1, -9} } },
	[154] = { .set = { {-1, -3}, {-16, -8}, {14, -8}, {-1, -8} } },
	[155] = { .set = { {-5, -3}, {-12, -8}, {14, -1}, {-1, -9} } },
	[156] = { .set = { {-6, -5}, {1, -8}, {5, 1}, {-1, -8} } },
	[157] = { .set = { {-8, -6}, {4, -7}, {-9, 1}, {-1, -8} } },
	[158] = { .set = { {-1, -9}, {13, -3}, {-15, -3}, {-1, -7} } },
	[159] = { .set = { {6, -6}, {-6, -7}, {7, 1}, {-1, -8} } },
	[160] = { .set = { {5, -5}, {-2, -8}, {-6, 1}, {0, -8} } },
	[161] = { .set = { {4, -3}, {11, -8}, {-15, -1}, {0, -9} } },
	[162] = { .set = { {-1, -3}, {-16, -8}, {14, -8}, {-1, -8} } },
	[163] = { .set = { {4, -3}, {11, -8}, {-15, -1}, {0, -9} } },
	[164] = { .set = { {5, -5}, {-2, -8}, {-6, 1}, {0, -8} } },
	[165] = { .set = { {6, -6}, {-6, -7}, {7, 1}, {-1, -8} } },
	[166] = { .set = { {-1, -9}, {13, -3}, {-15, -3}, {-1, -7} } },
	[167] = { .set = { {-8, -6}, {4, -7}, {-9, 1}, {-1, -8} } },
	[168] = { .set = { {-6, -5}, {1, -8}, {5, 1}, {-1, -8} } },
	[169] = { .set = { {-5, -3}, {-12, -8}, {14, -1}, {-1, -9} } },
	[170] = { .set = { {-1, -8}, {-8, -18}, {6, -18}, {-1, -9} } },
	[171] = { .set = { {-1, -11}, {-6, -20}, {4, -20}, {-1, -8} } },
	[172] = { .set = { {-1, -5}, {-9, 1}, {7, 1}, {-1, -7} } },
	[173] = { .set = { {2, -9}, {5, -22}, {-5, -17}, {-2, -9} } },
	[174] = { .set = { {2, -12}, {-2, -21}, {-13, -18}, {-1, -10} } },
	[175] = { .set = { {3, -6}, {11, -3}, {0, 2}, {-1, -9} } },
	[176] = { .set = { {4, -9}, {0, -22}, {1, -16}, {-1, -7} } },
	[177] = { .set = { {3, -11}, {-9, -20}, {-12, -15}, {-2, -9} } },
	[178] = { .set = { {6, -6}, {12, -5}, {10, 0}, {1, -8} } },
	[179] = { .set = { {2, -8}, {-5, -22}, {6, -18}, {-1, -8} } },
	[180] = { .set = { {4, -11}, {-13, -16}, {-4, -13}, {-2, -8} } },
	[181] = { .set = { {7, -6}, {5, -10}, {12, -6}, {1, -8} } },
	[182] = { .set = { {-1, -9}, {7, -21}, {-9, -21}, {-1, -7} } },
	[183] = { .set = { {-1, -8}, {7, -14}, {-9, -14}, {-1, -7} } },
	[184] = { .set = { {-1, -6}, {4, -12}, {-6, -12}, {-1, -8} } },
	[185] = { .set = { {-4, -8}, {3, -22}, {-8, -18}, {-1, -8} } },
	[186] = { .set = { {-6, -11}, {11, -16}, {2, -13}, {0, -8} } },
	[187] = { .set = { {-9, -6}, {-7, -10}, {-14, -6}, {-3, -8} } },
	[188] = { .set = { {-6, -9}, {-2, -22}, {-3, -16}, {-1, -7} } },
	[189] = { .set = { {-5, -11}, {7, -20}, {10, -15}, {0, -9} } },
	[190] = { .set = { {-8, -6}, {-14, -5}, {-12, 0}, {-3, -8} } },
	[191] = { .set = { {-4, -9}, {-7, -22}, {3, -17}, {0, -9} } },
	[192] = { .set = { {-4, -12}, {0, -21}, {11, -18}, {-1, -10} } },
	[193] = { .set = { {-5, -6}, {-13, -3}, {-2, 2}, {-1, -9} } },
	[194] = { .set = { {-1, -3}, {-16, -8}, {14, -8}, {-1, -8} } },
	[195] = { .set = { {-5, -3}, {-12, -8}, {14, -1}, {-1, -9} } },
	[196] = { .set = { {-6, -5}, {1, -8}, {5, 1}, {-1, -8} } },
	[197] = { .set = { {-8, -6}, {4, -7}, {-9, 1}, {-1, -8} } },
	[198] = { .set = { {-1, -9}, {13, -3}, {-15, -3}, {-1, -7} } },
	[199] = { .set = { {6, -6}, {-6, -7}, {7, 1}, {-1, -8} } },
	[200] = { .set = { {5, -5}, {-2, -8}, {-6, 1}, {0, -8} } },
	[201] = { .set = { {4, -3}, {11, -8}, {-15, -1}, {0, -9} } },
	[202] = { .set = { {-1, -8}, {-8, -18}, {6, -18}, {-1, -9} } },
	[203] = { .set = { {-4, -9}, {-7, -22}, {3, -17}, {0, -9} } },
	[204] = { .set = { {-6, -9}, {-2, -22}, {-3, -16}, {-1, -7} } },
	[205] = { .set = { {-4, -8}, {3, -22}, {-8, -18}, {-1, -8} } },
	[206] = { .set = { {-1, -9}, {7, -21}, {-9, -21}, {-1, -7} } },
	[207] = { .set = { {2, -8}, {-5, -22}, {6, -18}, {-1, -8} } },
	[208] = { .set = { {4, -9}, {0, -22}, {1, -16}, {-1, -7} } },
	[209] = { .set = { {2, -9}, {5, -22}, {-5, -17}, {-2, -9} } },
};

static const ax_anim *const sGravelerAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02471),
	AX_ANIM_PTR(gAxSharedAnim_02536),
	AX_ANIM_PTR(gAxSharedAnim_02545),
	AX_ANIM_PTR(gAxSharedAnim_02554),
	AX_ANIM_PTR(gAxSharedAnim_02494),
	AX_ANIM_PTR(gAxSharedAnim_02514),
	AX_ANIM_PTR(gAxSharedAnim_02521),
	AX_ANIM_PTR(gAxSharedAnim_02530),
};

static const ax_anim *const sGravelerAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01685),
	AX_ANIM_PTR(gAxSharedAnim_01791),
	AX_ANIM_PTR(gAxSharedAnim_01833),
	AX_ANIM_PTR(gAxSharedAnim_01877),
	AX_ANIM_PTR(gAxSharedAnim_01901),
	AX_ANIM_PTR(gAxSharedAnim_01922),
	AX_ANIM_PTR(gAxSharedAnim_01940),
	AX_ANIM_PTR(gAxSharedAnim_01958),
};

static const ax_anim *const sGravelerAnimTable3[] = {
	AX_ANIM_PTR(sGravelerAnims_3_1),
	AX_ANIM_PTR(sGravelerAnims_3_2),
	AX_ANIM_PTR(sGravelerAnims_3_3),
	AX_ANIM_PTR(sGravelerAnims_3_4),
	AX_ANIM_PTR(sGravelerAnims_3_5),
	AX_ANIM_PTR(sGravelerAnims_3_6),
	AX_ANIM_PTR(sGravelerAnims_3_7),
	AX_ANIM_PTR(sGravelerAnims_3_8),
};

static const ax_anim *const sGravelerAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02149),
	AX_ANIM_PTR(gAxSharedAnim_02210),
	AX_ANIM_PTR(gAxSharedAnim_02197),
	AX_ANIM_PTR(gAxSharedAnim_02188),
	AX_ANIM_PTR(gAxSharedAnim_02186),
	AX_ANIM_PTR(gAxSharedAnim_02172),
	AX_ANIM_PTR(gAxSharedAnim_02161),
	AX_ANIM_PTR(gAxSharedAnim_02153),
};

static const ax_anim *const sGravelerAnimTable5[] = {
	AX_ANIM_PTR(sGravelerAnims_5_1),
	AX_ANIM_PTR(sGravelerAnims_5_2),
	AX_ANIM_PTR(sGravelerAnims_5_3),
	AX_ANIM_PTR(sGravelerAnims_5_4),
	AX_ANIM_PTR(sGravelerAnims_5_5),
	AX_ANIM_PTR(sGravelerAnims_5_6),
	AX_ANIM_PTR(sGravelerAnims_5_7),
	AX_ANIM_PTR(sGravelerAnims_5_8),
};

static const ax_anim *const sGravelerAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
};

static const ax_anim *const sGravelerAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00266),
	AX_ANIM_PTR(gAxSharedAnim_00273),
	AX_ANIM_PTR(gAxSharedAnim_00280),
	AX_ANIM_PTR(gAxSharedAnim_00290),
	AX_ANIM_PTR(gAxSharedAnim_00302),
	AX_ANIM_PTR(gAxSharedAnim_00315),
	AX_ANIM_PTR(gAxSharedAnim_00322),
	AX_ANIM_PTR(gAxSharedAnim_00328),
};

static const ax_anim *const sGravelerAnimTable8[] = {
	AX_ANIM_PTR(sGravelerAnims_8_1),
	AX_ANIM_PTR(sGravelerAnims_8_2),
	AX_ANIM_PTR(sGravelerAnims_8_3),
	AX_ANIM_PTR(sGravelerAnims_8_4),
	AX_ANIM_PTR(sGravelerAnims_8_5),
	AX_ANIM_PTR(sGravelerAnims_8_6),
	AX_ANIM_PTR(sGravelerAnims_8_7),
	AX_ANIM_PTR(sGravelerAnims_8_8),
};

static const ax_anim *const sGravelerAnimTable9[] = {
	AX_ANIM_PTR(sGravelerAnims_9_1),
	AX_ANIM_PTR(sGravelerAnims_9_2),
	AX_ANIM_PTR(sGravelerAnims_9_3),
	AX_ANIM_PTR(sGravelerAnims_9_4),
	AX_ANIM_PTR(gAxSharedAnim_00648),
	AX_ANIM_PTR(sGravelerAnims_9_6),
	AX_ANIM_PTR(sGravelerAnims_9_7),
	AX_ANIM_PTR(sGravelerAnims_9_8),
};

static const ax_anim *const sGravelerAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00705),
	AX_ANIM_PTR(gAxSharedAnim_00714),
	AX_ANIM_PTR(gAxSharedAnim_00725),
	AX_ANIM_PTR(gAxSharedAnim_00737),
	AX_ANIM_PTR(gAxSharedAnim_00750),
	AX_ANIM_PTR(gAxSharedAnim_00760),
	AX_ANIM_PTR(gAxSharedAnim_00772),
	AX_ANIM_PTR(gAxSharedAnim_00781),
};

static const ax_anim *const sGravelerAnimTable11[] = {
	AX_ANIM_PTR(sGravelerAnims_11_1),
	AX_ANIM_PTR(sGravelerAnims_11_2),
	AX_ANIM_PTR(sGravelerAnims_11_3),
	AX_ANIM_PTR(sGravelerAnims_11_4),
	AX_ANIM_PTR(sGravelerAnims_11_5),
	AX_ANIM_PTR(sGravelerAnims_11_6),
	AX_ANIM_PTR(sGravelerAnims_11_7),
	AX_ANIM_PTR(sGravelerAnims_11_8),
};

static const ax_anim *const sGravelerAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01147),
	AX_ANIM_PTR(gAxSharedAnim_01230),
	AX_ANIM_PTR(gAxSharedAnim_01208),
	AX_ANIM_PTR(gAxSharedAnim_01194),
	AX_ANIM_PTR(gAxSharedAnim_01193),
	AX_ANIM_PTR(gAxSharedAnim_01181),
	AX_ANIM_PTR(gAxSharedAnim_01161),
	AX_ANIM_PTR(gAxSharedAnim_01148),
};

static const ax_anim *const sGravelerAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01242),
	AX_ANIM_PTR(gAxSharedAnim_01323),
	AX_ANIM_PTR(gAxSharedAnim_01314),
	AX_ANIM_PTR(gAxSharedAnim_01301),
	AX_ANIM_PTR(gAxSharedAnim_01286),
	AX_ANIM_PTR(gAxSharedAnim_01278),
	AX_ANIM_PTR(gAxSharedAnim_01267),
	AX_ANIM_PTR(gAxSharedAnim_01253),
};

static const ax_anim *const *const sAxAnimationsGraveler[] = {
	sGravelerAnimTable1,
	sGravelerAnimTable2,
	sGravelerAnimTable3,
	sGravelerAnimTable4,
	sGravelerAnimTable5,
	sGravelerAnimTable6,
	sGravelerAnimTable7,
	sGravelerAnimTable8,
	sGravelerAnimTable9,
	sGravelerAnimTable10,
	sGravelerAnimTable11,
	sGravelerAnimTable12,
	sGravelerAnimTable13,
};

static const ax_sprite *const sAxSpritesGraveler[] = {
	sGravelerSprites1,
	sGravelerSprites2,
	sGravelerSprites3,
	sGravelerSprites4,
	sGravelerSprites5,
	sGravelerSprites6,
	sGravelerSprites7,
	sGravelerSprites8,
	sGravelerSprites9,
	sGravelerSprites10,
	sGravelerSprites11,
	sGravelerSprites12,
	sGravelerSprites13,
	sGravelerSprites14,
	sGravelerSprites15,
	sGravelerSprites16,
	sGravelerSprites17,
	sGravelerSprites18,
	sGravelerSprites19,
	sGravelerSprites20,
	sGravelerSprites21,
	sGravelerSprites22,
	sGravelerSprites23,
	sGravelerSprites24,
	sGravelerSprites25,
	sGravelerSprites26,
	sGravelerSprites27,
	sGravelerSprites28,
	sGravelerSprites29,
	sGravelerSprites30,
	sGravelerSprites31,
	sGravelerSprites32,
	sGravelerSprites33,
	sGravelerSprites34,
	sGravelerSprites35,
	sGravelerSprites36,
	sGravelerSprites37,
	sGravelerSprites38,
	sGravelerSprites39,
	sGravelerSprites40,
	sGravelerSprites41,
	sGravelerSprites42,
	sGravelerSprites43,
	sGravelerSprites44,
	sGravelerSprites45,
	sGravelerSprites46,
	sGravelerSprites47,
	sGravelerSprites48,
	sGravelerSprites49,
	sGravelerSprites50,
	sGravelerSprites51,
	sGravelerSprites52,
	sGravelerSprites53,
};

static const axmain sAxMainGraveler = {
	.poses = sAxPosesGraveler,
	.animations = sAxAnimationsGraveler,
	.animCount = ARRAY_COUNT(sAxAnimationsGraveler),
	.spriteData = sAxSpritesGraveler,
	.positions = sAxPositionsGraveler,
};
