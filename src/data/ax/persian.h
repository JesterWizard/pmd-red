/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainPersian;
const SiroArchive gAxPersian = {"SIRO", &sAxMainPersian};

static const ax_pose sPersianPose1[] = {
	AX_POSE(0, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose2[] = {
	AX_POSE(1, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose3[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose4[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose5[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose10[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose12[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose13[] = {
	AX_POSE(12, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose14[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose15[] = {
	AX_POSE(14, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose16[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose17[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose18[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose22[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose23[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose24[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose28[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose29[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose33[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose34[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose38[] = {
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose39[] = {
	AX_POSE(20, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(21, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(22, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose43[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose44[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose48[] = {
	AX_POSE(25, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose49[] = {
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose53[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose54[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose58[] = {
	AX_POSE(19, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose59[] = {
	AX_POSE(20, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(21, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(22, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose63[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose64[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose68[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose69[] = {
	AX_POSE(28, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose70[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose74[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose75[] = {
	AX_POSE(31, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose76[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose80[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose81[] = {
	AX_POSE(34, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(35, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 4)),
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(9, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose82[] = {
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose86[] = {
	AX_POSE(37, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose87[] = {
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose88[] = {
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose92[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose93[] = {
	AX_POSE(41, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose94[] = {
	AX_POSE(41, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose98[] = {
	AX_POSE(37, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose99[] = {
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose100[] = {
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose104[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose105[] = {
	AX_POSE(34, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(35, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(9, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose106[] = {
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose110[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose111[] = {
	AX_POSE(31, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose112[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose114[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose115[] = {
	AX_POSE(44, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose117[] = {
	AX_POSE(45, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose118[] = {
	AX_POSE(46, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose120[] = {
	AX_POSE(47, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose121[] = {
	AX_POSE(48, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(49, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(50, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose123[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose124[] = {
	AX_POSE(52, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose126[] = {
	AX_POSE(53, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose127[] = {
	AX_POSE(54, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose129[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose130[] = {
	AX_POSE(52, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose132[] = {
	AX_POSE(47, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose133[] = {
	AX_POSE(48, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(49, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(50, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose135[] = {
	AX_POSE(45, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose136[] = {
	AX_POSE(46, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose137[] = {
	AX_POSE(55, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(56, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose138[] = {
	AX_POSE(57, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose139[] = {
	AX_POSE(58, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose140[] = {
	AX_POSE(59, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose141[] = {
	AX_POSE(60, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(61, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose142[] = {
	AX_POSE(59, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose143[] = {
	AX_POSE(58, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose144[] = {
	AX_POSE(57, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose145[] = {
	AX_POSE(62, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose146[] = {
	AX_POSE(63, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose147[] = {
	AX_POSE(64, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose148[] = {
	AX_POSE(65, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose149[] = {
	AX_POSE(66, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose150[] = {
	AX_POSE(67, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose151[] = {
	AX_POSE(68, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose152[] = {
	AX_POSE(67, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose153[] = {
	AX_POSE(66, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose154[] = {
	AX_POSE(65, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose158[] = {
	AX_POSE(57, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose160[] = {
	AX_POSE(58, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose162[] = {
	AX_POSE(59, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose166[] = {
	AX_POSE(59, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPersianPose170[] = {
	AX_POSE(57, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const u8 sPersianAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_1_1.lz");
static const u8 sPersianAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_1_2.lz");
static const u8 sPersianAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_1_3.lz");
static const u8 sPersianAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_1_4.lz");
static const u8 sPersianAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_1_5.lz");
static const u8 sPersianAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_1_6.lz");
static const u8 sPersianAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_1_7.lz");
static const u8 sPersianAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_1_8.lz");
static const u8 sPersianAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_2_1.lz");
static const u8 sPersianAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_2_2.lz");
static const u8 sPersianAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_2_3.lz");
static const u8 sPersianAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_2_4.lz");
static const u8 sPersianAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_2_5.lz");
static const u8 sPersianAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_2_6.lz");
static const u8 sPersianAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_2_7.lz");
static const u8 sPersianAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_2_8.lz");
static const u8 sPersianAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_3_1.lz");
static const u8 sPersianAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_3_2.lz");
static const u8 sPersianAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_3_3.lz");
static const u8 sPersianAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_3_4.lz");
static const u8 sPersianAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_3_5.lz");
static const u8 sPersianAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_3_6.lz");
static const u8 sPersianAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_3_7.lz");
static const u8 sPersianAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_3_8.lz");
static const u8 sPersianAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_4_1.lz");
static const u8 sPersianAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_4_2.lz");
static const u8 sPersianAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_4_3.lz");
static const u8 sPersianAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_4_4.lz");
static const u8 sPersianAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_4_5.lz");
static const u8 sPersianAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_4_6.lz");
static const u8 sPersianAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_4_7.lz");
static const u8 sPersianAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_4_8.lz");
static const u8 sPersianAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_5_2.lz");
static const u8 sPersianAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_8_1.lz");
static const u8 sPersianAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_8_2.lz");
static const u8 sPersianAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_8_3.lz");
static const u8 sPersianAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_8_4.lz");
static const u8 sPersianAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_8_5.lz");
static const u8 sPersianAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_8_6.lz");
static const u8 sPersianAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_8_7.lz");
static const u8 sPersianAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_8_8.lz");
static const u8 sPersianAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_9_1.lz");
static const u8 sPersianAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_9_2.lz");
static const u8 sPersianAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_9_3.lz");
static const u8 sPersianAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_9_4.lz");
static const u8 sPersianAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_9_6.lz");
static const u8 sPersianAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_9_7.lz");
static const u8 sPersianAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/persian/sPersianAnims_9_8.lz");

static const u8 sPersianGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_1.4bpp.lz");
static const ax_sprite sPersianSprites1[] = {
	{sPersianGfx1, ARRAY_COUNT(sPersianGfx1)}, 
	{NULL, 0}
};
static const u8 sPersianGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_2.4bpp.lz");
static const ax_sprite sPersianSprites2[] = {
	{sPersianGfx2, ARRAY_COUNT(sPersianGfx2)}, 
	{NULL, 0}
};
static const u8 sPersianGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_3.4bpp.lz");
static const ax_sprite sPersianSprites3[] = {
	{sPersianGfx3, ARRAY_COUNT(sPersianGfx3)}, 
	{NULL, 0}
};
static const u8 sPersianGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_4.4bpp.lz");
static const ax_sprite sPersianSprites4[] = {
	{sPersianGfx4, ARRAY_COUNT(sPersianGfx4)}, 
	{NULL, 0}
};
static const u8 sPersianGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_5.4bpp.lz");
static const ax_sprite sPersianSprites5[] = {
	{sPersianGfx5, ARRAY_COUNT(sPersianGfx5)}, 
	{NULL, 0}
};
static const u8 sPersianGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_6.4bpp.lz");
static const ax_sprite sPersianSprites6[] = {
	{sPersianGfx6, ARRAY_COUNT(sPersianGfx6)}, 
	{NULL, 0}
};
static const u8 sPersianGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_7.4bpp.lz");
static const ax_sprite sPersianSprites7[] = {
	{sPersianGfx7, ARRAY_COUNT(sPersianGfx7)}, 
	{NULL, 0}
};
static const u8 sPersianGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_8.4bpp.lz");
static const ax_sprite sPersianSprites8[] = {
	{sPersianGfx8, ARRAY_COUNT(sPersianGfx8)}, 
	{NULL, 0}
};
static const u8 sPersianGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_9.4bpp.lz");
static const ax_sprite sPersianSprites9[] = {
	{sPersianGfx9, ARRAY_COUNT(sPersianGfx9)}, 
	{NULL, 0}
};
static const u8 sPersianGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_10.4bpp.lz");
static const ax_sprite sPersianSprites10[] = {
	{sPersianGfx10, ARRAY_COUNT(sPersianGfx10)}, 
	{NULL, 0}
};
static const u8 sPersianGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_11.4bpp.lz");
static const ax_sprite sPersianSprites11[] = {
	{sPersianGfx11, ARRAY_COUNT(sPersianGfx11)}, 
	{NULL, 0}
};
static const u8 sPersianGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_12.4bpp.lz");
static const ax_sprite sPersianSprites12[] = {
	{sPersianGfx12, ARRAY_COUNT(sPersianGfx12)}, 
	{NULL, 0}
};
static const u8 sPersianGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_13.4bpp.lz");
static const ax_sprite sPersianSprites13[] = {
	{sPersianGfx13, ARRAY_COUNT(sPersianGfx13)}, 
	{NULL, 0}
};
static const u8 sPersianGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_14.4bpp.lz");
static const ax_sprite sPersianSprites14[] = {
	{sPersianGfx14, ARRAY_COUNT(sPersianGfx14)}, 
	{NULL, 0}
};
static const u8 sPersianGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_15.4bpp.lz");
static const ax_sprite sPersianSprites15[] = {
	{sPersianGfx15, ARRAY_COUNT(sPersianGfx15)}, 
	{NULL, 0}
};
static const u8 sPersianGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_16.4bpp.lz");
static const u8 sPersianGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_16_1.4bpp.lz");
static const u8 sPersianGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_16_2.4bpp.lz");
static const u8 sPersianGfx16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_16_3.4bpp.lz");
static const ax_sprite sPersianSprites16[] = {
	{NULL, 32}, 
	{sPersianGfx16, ARRAY_COUNT(sPersianGfx16)}, 
	{NULL, 64}, 
	{sPersianGfx16_1, ARRAY_COUNT(sPersianGfx16_1)}, 
	{NULL, 32}, 
	{sPersianGfx16_2, ARRAY_COUNT(sPersianGfx16_2)}, 
	{NULL, 32}, 
	{sPersianGfx16_3, ARRAY_COUNT(sPersianGfx16_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_17.4bpp.lz");
static const u8 sPersianGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_17_1.4bpp.lz");
static const u8 sPersianGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_17_2.4bpp.lz");
static const ax_sprite sPersianSprites17[] = {
	{NULL, 32}, 
	{sPersianGfx17, ARRAY_COUNT(sPersianGfx17)}, 
	{NULL, 64}, 
	{sPersianGfx17_1, ARRAY_COUNT(sPersianGfx17_1)}, 
	{NULL, 32}, 
	{sPersianGfx17_2, ARRAY_COUNT(sPersianGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPersianGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_18.4bpp.lz");
static const ax_sprite sPersianSprites18[] = {
	{NULL, 32}, 
	{sPersianGfx18, ARRAY_COUNT(sPersianGfx18)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_19.4bpp.lz");
static const u8 sPersianGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_19_1.4bpp.lz");
static const ax_sprite sPersianSprites19[] = {
	{sPersianGfx19, ARRAY_COUNT(sPersianGfx19)}, 
	{NULL, 64}, 
	{sPersianGfx19_1, ARRAY_COUNT(sPersianGfx19_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sPersianGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_20.4bpp.lz");
static const u8 sPersianGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_20_1.4bpp.lz");
static const ax_sprite sPersianSprites20[] = {
	{NULL, 64}, 
	{sPersianGfx20, ARRAY_COUNT(sPersianGfx20)}, 
	{NULL, 64}, 
	{sPersianGfx20_1, ARRAY_COUNT(sPersianGfx20_1)}, 
	{NULL, 0}
};
static const u8 sPersianGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_21.4bpp.lz");
static const u8 sPersianGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_21_1.4bpp.lz");
static const ax_sprite sPersianSprites21[] = {
	{sPersianGfx21, ARRAY_COUNT(sPersianGfx21)}, 
	{NULL, 64}, 
	{sPersianGfx21_1, ARRAY_COUNT(sPersianGfx21_1)}, 
	{NULL, 0}
};
static const u8 sPersianGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_22.4bpp.lz");
static const ax_sprite sPersianSprites22[] = {
	{sPersianGfx22, ARRAY_COUNT(sPersianGfx22)}, 
	{NULL, 0}
};
static const u8 sPersianGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_23.4bpp.lz");
static const ax_sprite sPersianSprites23[] = {
	{sPersianGfx23, ARRAY_COUNT(sPersianGfx23)}, 
	{NULL, 0}
};
static const u8 sPersianGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_24.4bpp.lz");
static const ax_sprite sPersianSprites24[] = {
	{NULL, 96}, 
	{sPersianGfx24, ARRAY_COUNT(sPersianGfx24)}, 
	{NULL, 0}
};
static const u8 sPersianGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_25.4bpp.lz");
static const u8 sPersianGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_25_1.4bpp.lz");
static const u8 sPersianGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_25_2.4bpp.lz");
static const u8 sPersianGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_25_3.4bpp.lz");
static const ax_sprite sPersianSprites25[] = {
	{sPersianGfx25, ARRAY_COUNT(sPersianGfx25)}, 
	{NULL, 32}, 
	{sPersianGfx25_1, ARRAY_COUNT(sPersianGfx25_1)}, 
	{NULL, 32}, 
	{sPersianGfx25_2, ARRAY_COUNT(sPersianGfx25_2)}, 
	{NULL, 64}, 
	{sPersianGfx25_3, ARRAY_COUNT(sPersianGfx25_3)}, 
	{NULL, 0}
};
static const u8 sPersianGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_26.4bpp.lz");
static const u8 sPersianGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_26_1.4bpp.lz");
static const u8 sPersianGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_26_2.4bpp.lz");
static const ax_sprite sPersianSprites26[] = {
	{NULL, 128}, 
	{sPersianGfx26, ARRAY_COUNT(sPersianGfx26)}, 
	{NULL, 64}, 
	{sPersianGfx26_1, ARRAY_COUNT(sPersianGfx26_1)}, 
	{NULL, 64}, 
	{sPersianGfx26_2, ARRAY_COUNT(sPersianGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_27.4bpp.lz");
static const u8 sPersianGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_27_1.4bpp.lz");
static const u8 sPersianGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_27_2.4bpp.lz");
static const u8 sPersianGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_27_3.4bpp.lz");
static const ax_sprite sPersianSprites27[] = {
	{sPersianGfx27, ARRAY_COUNT(sPersianGfx27)}, 
	{NULL, 64}, 
	{sPersianGfx27_1, ARRAY_COUNT(sPersianGfx27_1)}, 
	{NULL, 64}, 
	{sPersianGfx27_2, ARRAY_COUNT(sPersianGfx27_2)}, 
	{NULL, 64}, 
	{sPersianGfx27_3, ARRAY_COUNT(sPersianGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_28.4bpp.lz");
static const u8 sPersianGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_28_1.4bpp.lz");
static const u8 sPersianGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_28_2.4bpp.lz");
static const ax_sprite sPersianSprites28[] = {
	{NULL, 128}, 
	{sPersianGfx28, ARRAY_COUNT(sPersianGfx28)}, 
	{NULL, 32}, 
	{sPersianGfx28_1, ARRAY_COUNT(sPersianGfx28_1)}, 
	{NULL, 64}, 
	{sPersianGfx28_2, ARRAY_COUNT(sPersianGfx28_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_29.4bpp.lz");
static const u8 sPersianGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_29_1.4bpp.lz");
static const u8 sPersianGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_29_2.4bpp.lz");
static const u8 sPersianGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_29_3.4bpp.lz");
static const ax_sprite sPersianSprites29[] = {
	{sPersianGfx29, ARRAY_COUNT(sPersianGfx29)}, 
	{NULL, 96}, 
	{sPersianGfx29_1, ARRAY_COUNT(sPersianGfx29_1)}, 
	{NULL, 96}, 
	{sPersianGfx29_2, ARRAY_COUNT(sPersianGfx29_2)}, 
	{NULL, 64}, 
	{sPersianGfx29_3, ARRAY_COUNT(sPersianGfx29_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_30.4bpp.lz");
static const u8 sPersianGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_30_1.4bpp.lz");
static const u8 sPersianGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_30_2.4bpp.lz");
static const u8 sPersianGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_30_3.4bpp.lz");
static const ax_sprite sPersianSprites30[] = {
	{NULL, 32}, 
	{sPersianGfx30, ARRAY_COUNT(sPersianGfx30)}, 
	{NULL, 64}, 
	{sPersianGfx30_1, ARRAY_COUNT(sPersianGfx30_1)}, 
	{NULL, 64}, 
	{sPersianGfx30_2, ARRAY_COUNT(sPersianGfx30_2)}, 
	{NULL, 64}, 
	{sPersianGfx30_3, ARRAY_COUNT(sPersianGfx30_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_31.4bpp.lz");
static const u8 sPersianGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_31_1.4bpp.lz");
static const u8 sPersianGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_31_2.4bpp.lz");
static const ax_sprite sPersianSprites31[] = {
	{sPersianGfx31, ARRAY_COUNT(sPersianGfx31)}, 
	{NULL, 64}, 
	{sPersianGfx31_1, ARRAY_COUNT(sPersianGfx31_1)}, 
	{NULL, 32}, 
	{sPersianGfx31_2, ARRAY_COUNT(sPersianGfx31_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPersianGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_32.4bpp.lz");
static const u8 sPersianGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_32_1.4bpp.lz");
static const ax_sprite sPersianSprites32[] = {
	{sPersianGfx32, ARRAY_COUNT(sPersianGfx32)}, 
	{NULL, 32}, 
	{sPersianGfx32_1, ARRAY_COUNT(sPersianGfx32_1)}, 
	{NULL, 0}
};
static const u8 sPersianGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_33.4bpp.lz");
static const ax_sprite sPersianSprites33[] = {
	{NULL, 128}, 
	{sPersianGfx33, ARRAY_COUNT(sPersianGfx33)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_34.4bpp.lz");
static const u8 sPersianGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_34_1.4bpp.lz");
static const u8 sPersianGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_34_2.4bpp.lz");
static const u8 sPersianGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_34_3.4bpp.lz");
static const ax_sprite sPersianSprites34[] = {
	{sPersianGfx34, ARRAY_COUNT(sPersianGfx34)}, 
	{NULL, 64}, 
	{sPersianGfx34_1, ARRAY_COUNT(sPersianGfx34_1)}, 
	{NULL, 32}, 
	{sPersianGfx34_2, ARRAY_COUNT(sPersianGfx34_2)}, 
	{NULL, 64}, 
	{sPersianGfx34_3, ARRAY_COUNT(sPersianGfx34_3)}, 
	{NULL, 0}
};
static const u8 sPersianGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_35.4bpp.lz");
static const ax_sprite sPersianSprites35[] = {
	{sPersianGfx35, ARRAY_COUNT(sPersianGfx35)}, 
	{NULL, 0}
};
static const u8 sPersianGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_36.4bpp.lz");
static const ax_sprite sPersianSprites36[] = {
	{sPersianGfx36, ARRAY_COUNT(sPersianGfx36)}, 
	{NULL, 0}
};
static const u8 sPersianGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_37.4bpp.lz");
static const ax_sprite sPersianSprites37[] = {
	{NULL, 128}, 
	{sPersianGfx37, ARRAY_COUNT(sPersianGfx37)}, 
	{NULL, 0}
};
static const u8 sPersianGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_38.4bpp.lz");
static const u8 sPersianGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_38_1.4bpp.lz");
static const u8 sPersianGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_38_2.4bpp.lz");
static const u8 sPersianGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_38_3.4bpp.lz");
static const ax_sprite sPersianSprites38[] = {
	{sPersianGfx38, ARRAY_COUNT(sPersianGfx38)}, 
	{NULL, 64}, 
	{sPersianGfx38_1, ARRAY_COUNT(sPersianGfx38_1)}, 
	{NULL, 64}, 
	{sPersianGfx38_2, ARRAY_COUNT(sPersianGfx38_2)}, 
	{NULL, 32}, 
	{sPersianGfx38_3, ARRAY_COUNT(sPersianGfx38_3)}, 
	{NULL, 0}
};
static const u8 sPersianGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_39.4bpp.lz");
static const u8 sPersianGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_39_1.4bpp.lz");
static const ax_sprite sPersianSprites39[] = {
	{NULL, 128}, 
	{sPersianGfx39, ARRAY_COUNT(sPersianGfx39)}, 
	{NULL, 32}, 
	{sPersianGfx39_1, ARRAY_COUNT(sPersianGfx39_1)}, 
	{NULL, 0}
};
static const u8 sPersianGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_40.4bpp.lz");
static const u8 sPersianGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_40_1.4bpp.lz");
static const u8 sPersianGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_40_2.4bpp.lz");
static const ax_sprite sPersianSprites40[] = {
	{sPersianGfx40, ARRAY_COUNT(sPersianGfx40)}, 
	{NULL, 32}, 
	{sPersianGfx40_1, ARRAY_COUNT(sPersianGfx40_1)}, 
	{NULL, 96}, 
	{sPersianGfx40_2, ARRAY_COUNT(sPersianGfx40_2)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sPersianGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_41.4bpp.lz");
static const u8 sPersianGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_41_1.4bpp.lz");
static const u8 sPersianGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_41_2.4bpp.lz");
static const u8 sPersianGfx41_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_41_3.4bpp.lz");
static const ax_sprite sPersianSprites41[] = {
	{NULL, 32}, 
	{sPersianGfx41, ARRAY_COUNT(sPersianGfx41)}, 
	{NULL, 64}, 
	{sPersianGfx41_1, ARRAY_COUNT(sPersianGfx41_1)}, 
	{NULL, 32}, 
	{sPersianGfx41_2, ARRAY_COUNT(sPersianGfx41_2)}, 
	{NULL, 32}, 
	{sPersianGfx41_3, ARRAY_COUNT(sPersianGfx41_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_42.4bpp.lz");
static const u8 sPersianGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_42_1.4bpp.lz");
static const u8 sPersianGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_42_2.4bpp.lz");
static const ax_sprite sPersianSprites42[] = {
	{NULL, 128}, 
	{sPersianGfx42, ARRAY_COUNT(sPersianGfx42)}, 
	{NULL, 32}, 
	{sPersianGfx42_1, ARRAY_COUNT(sPersianGfx42_1)}, 
	{NULL, 64}, 
	{sPersianGfx42_2, ARRAY_COUNT(sPersianGfx42_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_43.4bpp.lz");
static const u8 sPersianGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_43_1.4bpp.lz");
static const ax_sprite sPersianSprites43[] = {
	{NULL, 32}, 
	{sPersianGfx43, ARRAY_COUNT(sPersianGfx43)}, 
	{NULL, 32}, 
	{sPersianGfx43_1, ARRAY_COUNT(sPersianGfx43_1)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sPersianGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_44.4bpp.lz");
static const u8 sPersianGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_44_1.4bpp.lz");
static const u8 sPersianGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_44_2.4bpp.lz");
static const u8 sPersianGfx44_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_44_3.4bpp.lz");
static const ax_sprite sPersianSprites44[] = {
	{NULL, 32}, 
	{sPersianGfx44, ARRAY_COUNT(sPersianGfx44)}, 
	{NULL, 32}, 
	{sPersianGfx44_1, ARRAY_COUNT(sPersianGfx44_1)}, 
	{NULL, 64}, 
	{sPersianGfx44_2, ARRAY_COUNT(sPersianGfx44_2)}, 
	{NULL, 64}, 
	{sPersianGfx44_3, ARRAY_COUNT(sPersianGfx44_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_45.4bpp.lz");
static const u8 sPersianGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_45_1.4bpp.lz");
static const u8 sPersianGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_45_2.4bpp.lz");
static const u8 sPersianGfx45_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_45_3.4bpp.lz");
static const ax_sprite sPersianSprites45[] = {
	{NULL, 32}, 
	{sPersianGfx45, ARRAY_COUNT(sPersianGfx45)}, 
	{NULL, 64}, 
	{sPersianGfx45_1, ARRAY_COUNT(sPersianGfx45_1)}, 
	{NULL, 32}, 
	{sPersianGfx45_2, ARRAY_COUNT(sPersianGfx45_2)}, 
	{NULL, 32}, 
	{sPersianGfx45_3, ARRAY_COUNT(sPersianGfx45_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_46.4bpp.lz");
static const u8 sPersianGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_46_1.4bpp.lz");
static const u8 sPersianGfx46_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_46_2.4bpp.lz");
static const ax_sprite sPersianSprites46[] = {
	{NULL, 32}, 
	{sPersianGfx46, ARRAY_COUNT(sPersianGfx46)}, 
	{NULL, 32}, 
	{sPersianGfx46_1, ARRAY_COUNT(sPersianGfx46_1)}, 
	{NULL, 32}, 
	{sPersianGfx46_2, ARRAY_COUNT(sPersianGfx46_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_47.4bpp.lz");
static const ax_sprite sPersianSprites47[] = {
	{NULL, 160}, 
	{sPersianGfx47, ARRAY_COUNT(sPersianGfx47)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_48.4bpp.lz");
static const u8 sPersianGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_48_1.4bpp.lz");
static const u8 sPersianGfx48_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_48_2.4bpp.lz");
static const ax_sprite sPersianSprites48[] = {
	{sPersianGfx48, ARRAY_COUNT(sPersianGfx48)}, 
	{NULL, 32}, 
	{sPersianGfx48_1, ARRAY_COUNT(sPersianGfx48_1)}, 
	{NULL, 32}, 
	{sPersianGfx48_2, ARRAY_COUNT(sPersianGfx48_2)}, 
	{NULL, 0}
};
static const u8 sPersianGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_49.4bpp.lz");
static const ax_sprite sPersianSprites49[] = {
	{sPersianGfx49, ARRAY_COUNT(sPersianGfx49)}, 
	{NULL, 0}
};
static const u8 sPersianGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_50.4bpp.lz");
static const ax_sprite sPersianSprites50[] = {
	{sPersianGfx50, ARRAY_COUNT(sPersianGfx50)}, 
	{NULL, 0}
};
static const u8 sPersianGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_51.4bpp.lz");
static const ax_sprite sPersianSprites51[] = {
	{sPersianGfx51, ARRAY_COUNT(sPersianGfx51)}, 
	{NULL, 0}
};
static const u8 sPersianGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_52.4bpp.lz");
static const u8 sPersianGfx52_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_52_1.4bpp.lz");
static const u8 sPersianGfx52_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_52_2.4bpp.lz");
static const u8 sPersianGfx52_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_52_3.4bpp.lz");
static const ax_sprite sPersianSprites52[] = {
	{NULL, 32}, 
	{sPersianGfx52, ARRAY_COUNT(sPersianGfx52)}, 
	{NULL, 32}, 
	{sPersianGfx52_1, ARRAY_COUNT(sPersianGfx52_1)}, 
	{NULL, 32}, 
	{sPersianGfx52_2, ARRAY_COUNT(sPersianGfx52_2)}, 
	{NULL, 32}, 
	{sPersianGfx52_3, ARRAY_COUNT(sPersianGfx52_3)}, 
	{NULL, 0}
};
static const u8 sPersianGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_53.4bpp.lz");
static const u8 sPersianGfx53_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_53_1.4bpp.lz");
static const ax_sprite sPersianSprites53[] = {
	{NULL, 128}, 
	{sPersianGfx53, ARRAY_COUNT(sPersianGfx53)}, 
	{NULL, 32}, 
	{sPersianGfx53_1, ARRAY_COUNT(sPersianGfx53_1)}, 
	{NULL, 0}
};
static const u8 sPersianGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_54.4bpp.lz");
static const u8 sPersianGfx54_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_54_1.4bpp.lz");
static const u8 sPersianGfx54_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_54_2.4bpp.lz");
static const u8 sPersianGfx54_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_54_3.4bpp.lz");
static const ax_sprite sPersianSprites54[] = {
	{NULL, 32}, 
	{sPersianGfx54, ARRAY_COUNT(sPersianGfx54)}, 
	{NULL, 32}, 
	{sPersianGfx54_1, ARRAY_COUNT(sPersianGfx54_1)}, 
	{NULL, 64}, 
	{sPersianGfx54_2, ARRAY_COUNT(sPersianGfx54_2)}, 
	{NULL, 64}, 
	{sPersianGfx54_3, ARRAY_COUNT(sPersianGfx54_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_55.4bpp.lz");
static const u8 sPersianGfx55_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_55_1.4bpp.lz");
static const u8 sPersianGfx55_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_55_2.4bpp.lz");
static const ax_sprite sPersianSprites55[] = {
	{NULL, 160}, 
	{sPersianGfx55, ARRAY_COUNT(sPersianGfx55)}, 
	{NULL, 64}, 
	{sPersianGfx55_1, ARRAY_COUNT(sPersianGfx55_1)}, 
	{NULL, 64}, 
	{sPersianGfx55_2, ARRAY_COUNT(sPersianGfx55_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPersianGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_56.4bpp.lz");
static const ax_sprite sPersianSprites56[] = {
	{sPersianGfx56, ARRAY_COUNT(sPersianGfx56)}, 
	{NULL, 0}
};
static const u8 sPersianGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_57.4bpp.lz");
static const ax_sprite sPersianSprites57[] = {
	{sPersianGfx57, ARRAY_COUNT(sPersianGfx57)}, 
	{NULL, 0}
};
static const u8 sPersianGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_58.4bpp.lz");
static const u8 sPersianGfx58_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_58_1.4bpp.lz");
static const u8 sPersianGfx58_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_58_2.4bpp.lz");
static const u8 sPersianGfx58_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_58_3.4bpp.lz");
static const ax_sprite sPersianSprites58[] = {
	{sPersianGfx58, ARRAY_COUNT(sPersianGfx58)}, 
	{NULL, 32}, 
	{sPersianGfx58_1, ARRAY_COUNT(sPersianGfx58_1)}, 
	{NULL, 64}, 
	{sPersianGfx58_2, ARRAY_COUNT(sPersianGfx58_2)}, 
	{NULL, 32}, 
	{sPersianGfx58_3, ARRAY_COUNT(sPersianGfx58_3)}, 
	{NULL, 0}
};
static const u8 sPersianGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_59.4bpp.lz");
static const u8 sPersianGfx59_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_59_1.4bpp.lz");
static const u8 sPersianGfx59_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_59_2.4bpp.lz");
static const u8 sPersianGfx59_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_59_3.4bpp.lz");
static const ax_sprite sPersianSprites59[] = {
	{sPersianGfx59, ARRAY_COUNT(sPersianGfx59)}, 
	{NULL, 64}, 
	{sPersianGfx59_1, ARRAY_COUNT(sPersianGfx59_1)}, 
	{NULL, 64}, 
	{sPersianGfx59_2, ARRAY_COUNT(sPersianGfx59_2)}, 
	{NULL, 32}, 
	{sPersianGfx59_3, ARRAY_COUNT(sPersianGfx59_3)}, 
	{NULL, 0}
};
static const u8 sPersianGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_60.4bpp.lz");
static const u8 sPersianGfx60_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_60_1.4bpp.lz");
static const u8 sPersianGfx60_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_60_2.4bpp.lz");
static const u8 sPersianGfx60_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_60_3.4bpp.lz");
static const ax_sprite sPersianSprites60[] = {
	{sPersianGfx60, ARRAY_COUNT(sPersianGfx60)}, 
	{NULL, 32}, 
	{sPersianGfx60_1, ARRAY_COUNT(sPersianGfx60_1)}, 
	{NULL, 64}, 
	{sPersianGfx60_2, ARRAY_COUNT(sPersianGfx60_2)}, 
	{NULL, 32}, 
	{sPersianGfx60_3, ARRAY_COUNT(sPersianGfx60_3)}, 
	{NULL, 0}
};
static const u8 sPersianGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_61.4bpp.lz");
static const ax_sprite sPersianSprites61[] = {
	{sPersianGfx61, ARRAY_COUNT(sPersianGfx61)}, 
	{NULL, 0}
};
static const u8 sPersianGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_62.4bpp.lz");
static const ax_sprite sPersianSprites62[] = {
	{sPersianGfx62, ARRAY_COUNT(sPersianGfx62)}, 
	{NULL, 0}
};
static const u8 sPersianGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_63.4bpp.lz");
static const ax_sprite sPersianSprites63[] = {
	{sPersianGfx63, ARRAY_COUNT(sPersianGfx63)}, 
	{NULL, 0}
};
static const u8 sPersianGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_64.4bpp.lz");
static const ax_sprite sPersianSprites64[] = {
	{sPersianGfx64, ARRAY_COUNT(sPersianGfx64)}, 
	{NULL, 0}
};
static const u8 sPersianGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_65.4bpp.lz");
static const ax_sprite sPersianSprites65[] = {
	{sPersianGfx65, ARRAY_COUNT(sPersianGfx65)}, 
	{NULL, 0}
};
static const u8 sPersianGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_66.4bpp.lz");
static const ax_sprite sPersianSprites66[] = {
	{sPersianGfx66, ARRAY_COUNT(sPersianGfx66)}, 
	{NULL, 0}
};
static const u8 sPersianGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_67.4bpp.lz");
static const ax_sprite sPersianSprites67[] = {
	{sPersianGfx67, ARRAY_COUNT(sPersianGfx67)}, 
	{NULL, 0}
};
static const u8 sPersianGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_68.4bpp.lz");
static const ax_sprite sPersianSprites68[] = {
	{sPersianGfx68, ARRAY_COUNT(sPersianGfx68)}, 
	{NULL, 0}
};
static const u8 sPersianGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/persian/sprite_69.4bpp.lz");
static const ax_sprite sPersianSprites69[] = {
	{sPersianGfx69, ARRAY_COUNT(sPersianGfx69)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesPersian[] = {
	sPersianPose1,
	sPersianPose2,
	sPersianPose3,
	sPersianPose4,
	sPersianPose5,
	sPersianPose6,
	sPersianPose7,
	sPersianPose8,
	sPersianPose9,
	sPersianPose10,
	sPersianPose11,
	sPersianPose12,
	sPersianPose13,
	sPersianPose14,
	sPersianPose15,
	sPersianPose16,
	sPersianPose17,
	sPersianPose18,
	sPersianPose19,
	sPersianPose20,
	sPersianPose21,
	sPersianPose22,
	sPersianPose23,
	sPersianPose24,
	sPersianPose1,
	sPersianPose2,
	sPersianPose3,
	sPersianPose28,
	sPersianPose29,
	sPersianPose4,
	sPersianPose5,
	sPersianPose6,
	sPersianPose33,
	sPersianPose34,
	sPersianPose7,
	sPersianPose8,
	sPersianPose9,
	sPersianPose38,
	sPersianPose39,
	sPersianPose10,
	sPersianPose11,
	sPersianPose12,
	sPersianPose43,
	sPersianPose44,
	sPersianPose13,
	sPersianPose14,
	sPersianPose15,
	sPersianPose48,
	sPersianPose49,
	sPersianPose16,
	sPersianPose17,
	sPersianPose18,
	sPersianPose53,
	sPersianPose54,
	sPersianPose19,
	sPersianPose20,
	sPersianPose21,
	sPersianPose58,
	sPersianPose59,
	sPersianPose22,
	sPersianPose23,
	sPersianPose24,
	sPersianPose63,
	sPersianPose64,
	sPersianPose1,
	sPersianPose2,
	sPersianPose3,
	sPersianPose68,
	sPersianPose69,
	sPersianPose70,
	sPersianPose4,
	sPersianPose5,
	sPersianPose6,
	sPersianPose74,
	sPersianPose75,
	sPersianPose76,
	sPersianPose7,
	sPersianPose8,
	sPersianPose9,
	sPersianPose80,
	sPersianPose81,
	sPersianPose82,
	sPersianPose10,
	sPersianPose11,
	sPersianPose12,
	sPersianPose86,
	sPersianPose87,
	sPersianPose88,
	sPersianPose13,
	sPersianPose14,
	sPersianPose15,
	sPersianPose92,
	sPersianPose93,
	sPersianPose94,
	sPersianPose16,
	sPersianPose17,
	sPersianPose18,
	sPersianPose98,
	sPersianPose99,
	sPersianPose100,
	sPersianPose19,
	sPersianPose20,
	sPersianPose21,
	sPersianPose104,
	sPersianPose105,
	sPersianPose106,
	sPersianPose22,
	sPersianPose23,
	sPersianPose24,
	sPersianPose110,
	sPersianPose111,
	sPersianPose112,
	sPersianPose2,
	sPersianPose114,
	sPersianPose115,
	sPersianPose5,
	sPersianPose117,
	sPersianPose118,
	sPersianPose8,
	sPersianPose120,
	sPersianPose121,
	sPersianPose11,
	sPersianPose123,
	sPersianPose124,
	sPersianPose14,
	sPersianPose126,
	sPersianPose127,
	sPersianPose17,
	sPersianPose129,
	sPersianPose130,
	sPersianPose20,
	sPersianPose132,
	sPersianPose133,
	sPersianPose23,
	sPersianPose135,
	sPersianPose136,
	sPersianPose137,
	sPersianPose138,
	sPersianPose139,
	sPersianPose140,
	sPersianPose141,
	sPersianPose142,
	sPersianPose143,
	sPersianPose144,
	sPersianPose145,
	sPersianPose146,
	sPersianPose147,
	sPersianPose148,
	sPersianPose149,
	sPersianPose150,
	sPersianPose151,
	sPersianPose152,
	sPersianPose153,
	sPersianPose154,
	sPersianPose2,
	sPersianPose137,
	sPersianPose5,
	sPersianPose158,
	sPersianPose8,
	sPersianPose160,
	sPersianPose11,
	sPersianPose162,
	sPersianPose14,
	sPersianPose141,
	sPersianPose17,
	sPersianPose166,
	sPersianPose20,
	sPersianPose139,
	sPersianPose23,
	sPersianPose170,
	sPersianPose28,
	sPersianPose63,
	sPersianPose58,
	sPersianPose53,
	sPersianPose48,
	sPersianPose43,
	sPersianPose38,
	sPersianPose33,
	sPersianPose28,
	sPersianPose33,
	sPersianPose38,
	sPersianPose43,
	sPersianPose48,
	sPersianPose53,
	sPersianPose58,
	sPersianPose63,
	sPersianPose2,
	sPersianPose114,
	sPersianPose115,
	sPersianPose5,
	sPersianPose117,
	sPersianPose118,
	sPersianPose8,
	sPersianPose120,
	sPersianPose121,
	sPersianPose11,
	sPersianPose123,
	sPersianPose124,
	sPersianPose14,
	sPersianPose126,
	sPersianPose127,
	sPersianPose17,
	sPersianPose129,
	sPersianPose130,
	sPersianPose20,
	sPersianPose132,
	sPersianPose133,
	sPersianPose23,
	sPersianPose135,
	sPersianPose136,
	sPersianPose137,
	sPersianPose138,
	sPersianPose139,
	sPersianPose140,
	sPersianPose141,
	sPersianPose142,
	sPersianPose143,
	sPersianPose144,
	sPersianPose1,
	sPersianPose22,
	sPersianPose19,
	sPersianPose16,
	sPersianPose13,
	sPersianPose10,
	sPersianPose7,
	sPersianPose4,
};

static const struct PositionSets sAxPositionsPersian[] = {
	[0] = { .set = { {0, -2}, {-4, 3}, {2, 0}, {0, -9} } },
	[1] = { .set = { {-1, -1}, {-4, 2}, {2, 2}, {-1, -8} } },
	[2] = { .set = { {-2, -2}, {-4, 0}, {2, 3}, {-1, -9} } },
	[3] = { .set = { {7, -3}, {8, 3}, {-1, 1}, {-1, -10} } },
	[4] = { .set = { {8, -2}, {7, 2}, {1, 2}, {-1, -10} } },
	[5] = { .set = { {8, -3}, {2, -1}, {3, 3}, {-1, -10} } },
	[6] = { .set = { {12, -5}, {10, -1}, {3, 0}, {-1, -9} } },
	[7] = { .set = { {13, -4}, {6, -2}, {5, 0}, {-1, -10} } },
	[8] = { .set = { {13, -5}, {2, -2}, {8, 0}, {-1, -9} } },
	[9] = { .set = { {7, -10}, {5, -7}, {3, -1}, {-1, -8} } },
	[10] = { .set = { {7, -9}, {1, -4}, {6, -2}, {-1, -8} } },
	[11] = { .set = { {6, -11}, {-1, -2}, {8, -3}, {-1, -8} } },
	[12] = { .set = { {-2, -14}, {4, -9}, {-4, -4}, {-1, -11} } },
	[13] = { .set = { {-1, -14}, {4, -7}, {-6, -7}, {-1, -11} } },
	[14] = { .set = { {0, -14}, {2, -4}, {-6, -9}, {-1, -11} } },
	[15] = { .set = { {-8, -10}, {-6, -7}, {-4, -1}, {0, -8} } },
	[16] = { .set = { {-8, -9}, {-2, -4}, {-7, -2}, {0, -8} } },
	[17] = { .set = { {-7, -11}, {0, -2}, {-9, -3}, {0, -8} } },
	[18] = { .set = { {-13, -5}, {-11, -1}, {-4, 0}, {0, -9} } },
	[19] = { .set = { {-14, -4}, {-7, -2}, {-6, 0}, {0, -10} } },
	[20] = { .set = { {-14, -5}, {-3, -2}, {-9, 0}, {0, -9} } },
	[21] = { .set = { {-8, -3}, {-9, 3}, {0, 1}, {0, -10} } },
	[22] = { .set = { {-9, -2}, {-8, 2}, {-2, 2}, {0, -10} } },
	[23] = { .set = { {-9, -3}, {-3, -1}, {-4, 3}, {0, -10} } },
	[24] = { .set = { {0, -2}, {-4, 3}, {2, 0}, {0, -9} } },
	[25] = { .set = { {-1, -1}, {-4, 2}, {2, 2}, {-1, -8} } },
	[26] = { .set = { {-2, -2}, {-4, 0}, {2, 3}, {-1, -9} } },
	[27] = { .set = { {-1, 0}, {-6, 3}, {4, 3}, {-1, -10} } },
	[28] = { .set = { {-1, -6}, {-7, -5}, {5, -5}, {-1, -9} } },
	[29] = { .set = { {7, -3}, {8, 3}, {-1, 1}, {-1, -10} } },
	[30] = { .set = { {8, -2}, {7, 2}, {1, 2}, {-1, -10} } },
	[31] = { .set = { {8, -3}, {2, -1}, {3, 3}, {-1, -10} } },
	[32] = { .set = { {6, 1}, {10, 3}, {1, 5}, {0, -10} } },
	[33] = { .set = { {10, -10}, {15, -9}, {8, -5}, {-1, -12} } },
	[34] = { .set = { {12, -5}, {10, -1}, {3, 0}, {-1, -9} } },
	[35] = { .set = { {13, -4}, {6, -2}, {5, 0}, {-1, -10} } },
	[36] = { .set = { {13, -5}, {2, -2}, {8, 0}, {-1, -9} } },
	[37] = { .set = { {10, -3}, {9, -2}, {8, 0}, {-1, -9} } },
	[38] = { .set = { {12, -14}, {13, -16}, {13, -12}, {-1, -16} } },
	[39] = { .set = { {7, -10}, {5, -7}, {3, -1}, {-1, -8} } },
	[40] = { .set = { {7, -9}, {1, -4}, {6, -2}, {-1, -8} } },
	[41] = { .set = { {6, -11}, {-1, -2}, {8, -3}, {-1, -8} } },
	[42] = { .set = { {6, -7}, {2, -6}, {8, -3}, {-1, -10} } },
	[43] = { .set = { {5, -14}, {3, -18}, {11, -15}, {-1, -12} } },
	[44] = { .set = { {-2, -14}, {4, -9}, {-4, -4}, {-1, -11} } },
	[45] = { .set = { {-1, -14}, {4, -7}, {-6, -7}, {-1, -11} } },
	[46] = { .set = { {0, -14}, {2, -4}, {-6, -9}, {-1, -11} } },
	[47] = { .set = { {-1, -11}, {5, -8}, {-7, -8}, {-1, -7} } },
	[48] = { .set = { {-1, -19}, {4, -18}, {-6, -18}, {-1, -13} } },
	[49] = { .set = { {-8, -10}, {-6, -7}, {-4, -1}, {0, -8} } },
	[50] = { .set = { {-8, -9}, {-2, -4}, {-7, -2}, {0, -8} } },
	[51] = { .set = { {-7, -11}, {0, -2}, {-9, -3}, {0, -8} } },
	[52] = { .set = { {-7, -7}, {-3, -6}, {-9, -3}, {0, -10} } },
	[53] = { .set = { {-6, -14}, {-4, -18}, {-12, -15}, {0, -12} } },
	[54] = { .set = { {-13, -5}, {-11, -1}, {-4, 0}, {0, -9} } },
	[55] = { .set = { {-14, -4}, {-7, -2}, {-6, 0}, {0, -10} } },
	[56] = { .set = { {-14, -5}, {-3, -2}, {-9, 0}, {0, -9} } },
	[57] = { .set = { {-11, -3}, {-10, -2}, {-9, 0}, {0, -9} } },
	[58] = { .set = { {-13, -14}, {-14, -16}, {-14, -12}, {0, -16} } },
	[59] = { .set = { {-8, -3}, {-9, 3}, {0, 1}, {0, -10} } },
	[60] = { .set = { {-9, -2}, {-8, 2}, {-2, 2}, {0, -10} } },
	[61] = { .set = { {-9, -3}, {-3, -1}, {-4, 3}, {0, -10} } },
	[62] = { .set = { {-7, 1}, {-11, 3}, {-2, 5}, {-1, -10} } },
	[63] = { .set = { {-11, -10}, {-16, -9}, {-9, -5}, {0, -12} } },
	[64] = { .set = { {0, -2}, {-4, 3}, {2, 0}, {0, -9} } },
	[65] = { .set = { {-1, -1}, {-4, 2}, {2, 2}, {-1, -8} } },
	[66] = { .set = { {-2, -2}, {-4, 0}, {2, 3}, {-1, -9} } },
	[67] = { .set = { {-3, -8}, {-12, -10}, {2, -1}, {-2, -11} } },
	[68] = { .set = { {0, 0}, {3, 4}, {1, 1}, {0, -7} } },
	[69] = { .set = { {0, 0}, {3, 4}, {1, 1}, {0, -7} } },
	[70] = { .set = { {7, -3}, {8, 3}, {-1, 1}, {-1, -10} } },
	[71] = { .set = { {8, -2}, {7, 2}, {1, 2}, {-1, -10} } },
	[72] = { .set = { {8, -3}, {2, -1}, {3, 3}, {-1, -10} } },
	[73] = { .set = { {8, -9}, {11, -9}, {1, -1}, {-2, -11} } },
	[74] = { .set = { {9, -1}, {4, 5}, {2, 2}, {0, -9} } },
	[75] = { .set = { {9, -1}, {4, 5}, {2, 2}, {0, -9} } },
	[76] = { .set = { {12, -5}, {10, -1}, {3, 0}, {-1, -9} } },
	[77] = { .set = { {13, -4}, {6, -2}, {5, 0}, {-1, -10} } },
	[78] = { .set = { {13, -5}, {2, -2}, {8, 0}, {-1, -9} } },
	[79] = { .set = { {10, -13}, {4, -19}, {4, -4}, {-2, -12} } },
	[80] = { .set = { {13, -3}, {11, 2}, {4, 0}, {0, -10} } },
	[81] = { .set = { {13, -3}, {11, 2}, {4, 0}, {0, -10} } },
	[82] = { .set = { {7, -10}, {5, -7}, {3, -1}, {-1, -8} } },
	[83] = { .set = { {7, -9}, {1, -4}, {6, -2}, {-1, -8} } },
	[84] = { .set = { {6, -11}, {-1, -2}, {8, -3}, {-1, -8} } },
	[85] = { .set = { {2, -19}, {-4, -18}, {6, -5}, {-1, -9} } },
	[86] = { .set = { {7, -9}, {10, -3}, {6, -2}, {0, -8} } },
	[87] = { .set = { {7, -9}, {10, -3}, {6, -2}, {0, -8} } },
	[88] = { .set = { {-2, -14}, {4, -9}, {-4, -4}, {-1, -11} } },
	[89] = { .set = { {-1, -14}, {4, -7}, {-6, -7}, {-1, -11} } },
	[90] = { .set = { {0, -14}, {2, -4}, {-6, -9}, {-1, -11} } },
	[91] = { .set = { {2, -15}, {9, -14}, {-2, -10}, {-1, -10} } },
	[92] = { .set = { {-2, -9}, {-7, -7}, {-4, -5}, {-2, -8} } },
	[93] = { .set = { {-2, -9}, {-7, -7}, {-4, -5}, {-2, -8} } },
	[94] = { .set = { {-8, -10}, {-6, -7}, {-4, -1}, {0, -8} } },
	[95] = { .set = { {-8, -9}, {-2, -4}, {-7, -2}, {0, -8} } },
	[96] = { .set = { {-7, -11}, {0, -2}, {-9, -3}, {0, -8} } },
	[97] = { .set = { {-3, -19}, {3, -18}, {-7, -5}, {0, -9} } },
	[98] = { .set = { {-8, -9}, {-11, -3}, {-7, -2}, {-1, -8} } },
	[99] = { .set = { {-8, -9}, {-11, -3}, {-7, -2}, {-1, -8} } },
	[100] = { .set = { {-13, -5}, {-11, -1}, {-4, 0}, {0, -9} } },
	[101] = { .set = { {-14, -4}, {-7, -2}, {-6, 0}, {0, -10} } },
	[102] = { .set = { {-14, -5}, {-3, -2}, {-9, 0}, {0, -9} } },
	[103] = { .set = { {-11, -13}, {-5, -19}, {-5, -4}, {1, -12} } },
	[104] = { .set = { {-14, -3}, {-12, 2}, {-5, 0}, {-1, -10} } },
	[105] = { .set = { {-14, -3}, {-12, 2}, {-5, 0}, {-1, -10} } },
	[106] = { .set = { {-8, -3}, {-9, 3}, {0, 1}, {0, -10} } },
	[107] = { .set = { {-9, -2}, {-8, 2}, {-2, 2}, {0, -10} } },
	[108] = { .set = { {-9, -3}, {-3, -1}, {-4, 3}, {0, -10} } },
	[109] = { .set = { {-9, -9}, {-12, -9}, {-2, -1}, {1, -11} } },
	[110] = { .set = { {-10, -1}, {-5, 5}, {-3, 2}, {-1, -9} } },
	[111] = { .set = { {-10, -1}, {-5, 5}, {-3, 2}, {-1, -9} } },
	[112] = { .set = { {-1, -1}, {-4, 2}, {2, 2}, {-1, -8} } },
	[113] = { .set = { {-1, -14}, {-4, 2}, {2, 2}, {-1, -7} } },
	[114] = { .set = { {-1, 1}, {-5, 2}, {3, 2}, {-1, -10} } },
	[115] = { .set = { {8, -2}, {7, 2}, {1, 2}, {-1, -10} } },
	[116] = { .set = { {6, -13}, {6, 1}, {1, 2}, {-1, -11} } },
	[117] = { .set = { {8, 2}, {7, 0}, {1, 2}, {2, -9} } },
	[118] = { .set = { {13, -4}, {6, -2}, {5, 0}, {-1, -10} } },
	[119] = { .set = { {6, -18}, {5, -3}, {4, 0}, {-2, -10} } },
	[120] = { .set = { {15, -4}, {6, -2}, {5, 0}, {3, -10} } },
	[121] = { .set = { {7, -9}, {1, -4}, {6, -2}, {-1, -8} } },
	[122] = { .set = { {5, -17}, {1, -3}, {6, -1}, {-2, -8} } },
	[123] = { .set = { {8, -7}, {1, -4}, {6, -1}, {0, -8} } },
	[124] = { .set = { {-1, -14}, {4, -7}, {-6, -7}, {-1, -11} } },
	[125] = { .set = { {-1, -20}, {-4, 2}, {2, 2}, {-1, -9} } },
	[126] = { .set = { {-1, -9}, {5, -6}, {-7, -6}, {-1, -7} } },
	[127] = { .set = { {-8, -9}, {-2, -4}, {-7, -2}, {0, -8} } },
	[128] = { .set = { {-6, -17}, {-2, -3}, {-7, -1}, {1, -8} } },
	[129] = { .set = { {-9, -7}, {-2, -4}, {-7, -1}, {-1, -8} } },
	[130] = { .set = { {-14, -4}, {-7, -2}, {-6, 0}, {0, -10} } },
	[131] = { .set = { {-7, -18}, {-6, -3}, {-5, 0}, {1, -10} } },
	[132] = { .set = { {-16, -4}, {-7, -2}, {-6, 0}, {-4, -10} } },
	[133] = { .set = { {-9, -2}, {-8, 2}, {-2, 2}, {0, -10} } },
	[134] = { .set = { {-7, -13}, {-7, 1}, {-2, 2}, {0, -11} } },
	[135] = { .set = { {-9, 2}, {-8, 0}, {-2, 2}, {-3, -9} } },
	[136] = { .set = { {-1, -10}, {-3, 2}, {1, 2}, {-1, -7} } },
	[137] = { .set = { {-5, -12}, {-6, 2}, {-3, 3}, {0, -7} } },
	[138] = { .set = { {-9, -14}, {-7, -2}, {-6, 0}, {1, -10} } },
	[139] = { .set = { {-5, -16}, {-3, -4}, {-7, -3}, {1, -10} } },
	[140] = { .set = { {-1, -17}, {4, -5}, {-6, -5}, {-1, -9} } },
	[141] = { .set = { {4, -16}, {2, -4}, {6, -3}, {-2, -10} } },
	[142] = { .set = { {8, -14}, {6, -2}, {5, 0}, {-2, -10} } },
	[143] = { .set = { {4, -12}, {5, 2}, {2, 3}, {-1, -7} } },
	[144] = { .set = { {-6, -1}, {-11, 0}, {-5, 2}, {1, -6} } },
	[145] = { .set = { {-6, -1}, {-11, 0}, {-5, 2}, {1, -6} } },
	[146] = { .set = { {0, -1}, {-5, 3}, {5, 3}, {0, -8} } },
	[147] = { .set = { {6, -2}, {11, 0}, {4, 2}, {-1, -10} } },
	[148] = { .set = { {9, -2}, {13, -2}, {11, 1}, {-2, -7} } },
	[149] = { .set = { {6, -5}, {7, -8}, {12, -6}, {-2, -4} } },
	[150] = { .set = { {-1, -9}, {5, -10}, {-7, -10}, {-1, -4} } },
	[151] = { .set = { {-7, -5}, {-8, -8}, {-13, -6}, {1, -4} } },
	[152] = { .set = { {-10, -2}, {-14, -2}, {-12, 1}, {1, -7} } },
	[153] = { .set = { {-5, -2}, {-10, 0}, {-3, 2}, {2, -10} } },
	[154] = { .set = { {-1, -1}, {-4, 2}, {2, 2}, {-1, -8} } },
	[155] = { .set = { {-1, -10}, {-3, 2}, {1, 2}, {-1, -7} } },
	[156] = { .set = { {8, -2}, {7, 2}, {1, 2}, {-1, -10} } },
	[157] = { .set = { {4, -13}, {5, 1}, {2, 2}, {-1, -8} } },
	[158] = { .set = { {13, -4}, {6, -2}, {5, 0}, {-1, -10} } },
	[159] = { .set = { {7, -14}, {5, -2}, {4, 0}, {-3, -10} } },
	[160] = { .set = { {7, -9}, {1, -4}, {6, -2}, {-1, -8} } },
	[161] = { .set = { {3, -16}, {1, -4}, {5, -3}, {-3, -10} } },
	[162] = { .set = { {-1, -14}, {4, -7}, {-6, -7}, {-1, -11} } },
	[163] = { .set = { {-1, -17}, {4, -5}, {-6, -5}, {-1, -9} } },
	[164] = { .set = { {-8, -9}, {-2, -4}, {-7, -2}, {0, -8} } },
	[165] = { .set = { {-4, -16}, {-2, -4}, {-6, -3}, {2, -10} } },
	[166] = { .set = { {-14, -4}, {-7, -2}, {-6, 0}, {0, -10} } },
	[167] = { .set = { {-9, -14}, {-7, -2}, {-6, 0}, {1, -10} } },
	[168] = { .set = { {-9, -2}, {-8, 2}, {-2, 2}, {0, -10} } },
	[169] = { .set = { {-5, -13}, {-6, 1}, {-3, 2}, {0, -8} } },
	[170] = { .set = { {-1, 0}, {-6, 3}, {4, 3}, {-1, -10} } },
	[171] = { .set = { {-7, 1}, {-11, 3}, {-2, 5}, {-1, -10} } },
	[172] = { .set = { {-11, -3}, {-10, -2}, {-9, 0}, {0, -9} } },
	[173] = { .set = { {-7, -7}, {-3, -6}, {-9, -3}, {0, -10} } },
	[174] = { .set = { {-1, -11}, {5, -8}, {-7, -8}, {-1, -7} } },
	[175] = { .set = { {6, -7}, {2, -6}, {8, -3}, {-1, -10} } },
	[176] = { .set = { {10, -3}, {9, -2}, {8, 0}, {-1, -9} } },
	[177] = { .set = { {6, 1}, {10, 3}, {1, 5}, {0, -10} } },
	[178] = { .set = { {-1, 0}, {-6, 3}, {4, 3}, {-1, -10} } },
	[179] = { .set = { {6, 1}, {10, 3}, {1, 5}, {0, -10} } },
	[180] = { .set = { {10, -3}, {9, -2}, {8, 0}, {-1, -9} } },
	[181] = { .set = { {6, -7}, {2, -6}, {8, -3}, {-1, -10} } },
	[182] = { .set = { {-1, -11}, {5, -8}, {-7, -8}, {-1, -7} } },
	[183] = { .set = { {-7, -7}, {-3, -6}, {-9, -3}, {0, -10} } },
	[184] = { .set = { {-11, -3}, {-10, -2}, {-9, 0}, {0, -9} } },
	[185] = { .set = { {-7, 1}, {-11, 3}, {-2, 5}, {-1, -10} } },
	[186] = { .set = { {-1, -1}, {-4, 2}, {2, 2}, {-1, -8} } },
	[187] = { .set = { {-1, -14}, {-4, 2}, {2, 2}, {-1, -7} } },
	[188] = { .set = { {-1, 1}, {-5, 2}, {3, 2}, {-1, -10} } },
	[189] = { .set = { {8, -2}, {7, 2}, {1, 2}, {-1, -10} } },
	[190] = { .set = { {6, -13}, {6, 1}, {1, 2}, {-1, -11} } },
	[191] = { .set = { {8, 2}, {7, 0}, {1, 2}, {2, -9} } },
	[192] = { .set = { {13, -4}, {6, -2}, {5, 0}, {-1, -10} } },
	[193] = { .set = { {6, -18}, {5, -3}, {4, 0}, {-2, -10} } },
	[194] = { .set = { {15, -4}, {6, -2}, {5, 0}, {3, -10} } },
	[195] = { .set = { {7, -9}, {1, -4}, {6, -2}, {-1, -8} } },
	[196] = { .set = { {5, -17}, {1, -3}, {6, -1}, {-2, -8} } },
	[197] = { .set = { {8, -7}, {1, -4}, {6, -1}, {0, -8} } },
	[198] = { .set = { {-1, -14}, {4, -7}, {-6, -7}, {-1, -11} } },
	[199] = { .set = { {-1, -20}, {-4, 2}, {2, 2}, {-1, -9} } },
	[200] = { .set = { {-1, -9}, {5, -6}, {-7, -6}, {-1, -7} } },
	[201] = { .set = { {-8, -9}, {-2, -4}, {-7, -2}, {0, -8} } },
	[202] = { .set = { {-6, -17}, {-2, -3}, {-7, -1}, {1, -8} } },
	[203] = { .set = { {-9, -7}, {-2, -4}, {-7, -1}, {-1, -8} } },
	[204] = { .set = { {-14, -4}, {-7, -2}, {-6, 0}, {0, -10} } },
	[205] = { .set = { {-7, -18}, {-6, -3}, {-5, 0}, {1, -10} } },
	[206] = { .set = { {-16, -4}, {-7, -2}, {-6, 0}, {-4, -10} } },
	[207] = { .set = { {-9, -2}, {-8, 2}, {-2, 2}, {0, -10} } },
	[208] = { .set = { {-7, -13}, {-7, 1}, {-2, 2}, {0, -11} } },
	[209] = { .set = { {-9, 2}, {-8, 0}, {-2, 2}, {-3, -9} } },
	[210] = { .set = { {-1, -10}, {-3, 2}, {1, 2}, {-1, -7} } },
	[211] = { .set = { {-5, -12}, {-6, 2}, {-3, 3}, {0, -7} } },
	[212] = { .set = { {-9, -14}, {-7, -2}, {-6, 0}, {1, -10} } },
	[213] = { .set = { {-5, -16}, {-3, -4}, {-7, -3}, {1, -10} } },
	[214] = { .set = { {-1, -17}, {4, -5}, {-6, -5}, {-1, -9} } },
	[215] = { .set = { {4, -16}, {2, -4}, {6, -3}, {-2, -10} } },
	[216] = { .set = { {8, -14}, {6, -2}, {5, 0}, {-2, -10} } },
	[217] = { .set = { {4, -12}, {5, 2}, {2, 3}, {-1, -7} } },
	[218] = { .set = { {0, -2}, {-4, 3}, {2, 0}, {0, -9} } },
	[219] = { .set = { {-8, -3}, {-9, 3}, {0, 1}, {0, -10} } },
	[220] = { .set = { {-13, -5}, {-11, -1}, {-4, 0}, {0, -9} } },
	[221] = { .set = { {-8, -10}, {-6, -7}, {-4, -1}, {0, -8} } },
	[222] = { .set = { {-2, -14}, {4, -9}, {-4, -4}, {-1, -11} } },
	[223] = { .set = { {7, -10}, {5, -7}, {3, -1}, {-1, -8} } },
	[224] = { .set = { {12, -5}, {10, -1}, {3, 0}, {-1, -9} } },
	[225] = { .set = { {7, -3}, {8, 3}, {-1, 1}, {-1, -10} } },
};

static const ax_anim *const sPersianAnimTable1[] = {
	AX_ANIM_PTR(sPersianAnims_1_1),
	AX_ANIM_PTR(sPersianAnims_1_2),
	AX_ANIM_PTR(sPersianAnims_1_3),
	AX_ANIM_PTR(sPersianAnims_1_4),
	AX_ANIM_PTR(sPersianAnims_1_5),
	AX_ANIM_PTR(sPersianAnims_1_6),
	AX_ANIM_PTR(sPersianAnims_1_7),
	AX_ANIM_PTR(sPersianAnims_1_8),
};

static const ax_anim *const sPersianAnimTable2[] = {
	AX_ANIM_PTR(sPersianAnims_2_1),
	AX_ANIM_PTR(sPersianAnims_2_2),
	AX_ANIM_PTR(sPersianAnims_2_3),
	AX_ANIM_PTR(sPersianAnims_2_4),
	AX_ANIM_PTR(sPersianAnims_2_5),
	AX_ANIM_PTR(sPersianAnims_2_6),
	AX_ANIM_PTR(sPersianAnims_2_7),
	AX_ANIM_PTR(sPersianAnims_2_8),
};

static const ax_anim *const sPersianAnimTable3[] = {
	AX_ANIM_PTR(sPersianAnims_3_1),
	AX_ANIM_PTR(sPersianAnims_3_2),
	AX_ANIM_PTR(sPersianAnims_3_3),
	AX_ANIM_PTR(sPersianAnims_3_4),
	AX_ANIM_PTR(sPersianAnims_3_5),
	AX_ANIM_PTR(sPersianAnims_3_6),
	AX_ANIM_PTR(sPersianAnims_3_7),
	AX_ANIM_PTR(sPersianAnims_3_8),
};

static const ax_anim *const sPersianAnimTable4[] = {
	AX_ANIM_PTR(sPersianAnims_4_1),
	AX_ANIM_PTR(sPersianAnims_4_2),
	AX_ANIM_PTR(sPersianAnims_4_3),
	AX_ANIM_PTR(sPersianAnims_4_4),
	AX_ANIM_PTR(sPersianAnims_4_5),
	AX_ANIM_PTR(sPersianAnims_4_6),
	AX_ANIM_PTR(sPersianAnims_4_7),
	AX_ANIM_PTR(sPersianAnims_4_8),
};

static const ax_anim *const sPersianAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00450),
	AX_ANIM_PTR(sPersianAnims_5_2),
	AX_ANIM_PTR(gAxSharedAnim_00503),
	AX_ANIM_PTR(gAxSharedAnim_00495),
	AX_ANIM_PTR(gAxSharedAnim_00494),
	AX_ANIM_PTR(gAxSharedAnim_00485),
	AX_ANIM_PTR(gAxSharedAnim_00465),
	AX_ANIM_PTR(gAxSharedAnim_00455),
};

static const ax_anim *const sPersianAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
};

static const ax_anim *const sPersianAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00531),
	AX_ANIM_PTR(gAxSharedAnim_00543),
	AX_ANIM_PTR(gAxSharedAnim_00551),
	AX_ANIM_PTR(gAxSharedAnim_00559),
	AX_ANIM_PTR(gAxSharedAnim_00577),
	AX_ANIM_PTR(gAxSharedAnim_00587),
	AX_ANIM_PTR(gAxSharedAnim_00596),
	AX_ANIM_PTR(gAxSharedAnim_00602),
};

static const ax_anim *const sPersianAnimTable8[] = {
	AX_ANIM_PTR(sPersianAnims_8_1),
	AX_ANIM_PTR(sPersianAnims_8_2),
	AX_ANIM_PTR(sPersianAnims_8_3),
	AX_ANIM_PTR(sPersianAnims_8_4),
	AX_ANIM_PTR(sPersianAnims_8_5),
	AX_ANIM_PTR(sPersianAnims_8_6),
	AX_ANIM_PTR(sPersianAnims_8_7),
	AX_ANIM_PTR(sPersianAnims_8_8),
};

static const ax_anim *const sPersianAnimTable9[] = {
	AX_ANIM_PTR(sPersianAnims_9_1),
	AX_ANIM_PTR(sPersianAnims_9_2),
	AX_ANIM_PTR(sPersianAnims_9_3),
	AX_ANIM_PTR(sPersianAnims_9_4),
	AX_ANIM_PTR(gAxSharedAnim_00846),
	AX_ANIM_PTR(sPersianAnims_9_6),
	AX_ANIM_PTR(sPersianAnims_9_7),
	AX_ANIM_PTR(sPersianAnims_9_8),
};

static const ax_anim *const sPersianAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00905),
	AX_ANIM_PTR(gAxSharedAnim_00918),
	AX_ANIM_PTR(gAxSharedAnim_00930),
	AX_ANIM_PTR(gAxSharedAnim_00942),
	AX_ANIM_PTR(gAxSharedAnim_00955),
	AX_ANIM_PTR(gAxSharedAnim_00965),
	AX_ANIM_PTR(gAxSharedAnim_00978),
	AX_ANIM_PTR(gAxSharedAnim_00993),
};

static const ax_anim *const sPersianAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01007),
	AX_ANIM_PTR(gAxSharedAnim_01058),
	AX_ANIM_PTR(gAxSharedAnim_01106),
	AX_ANIM_PTR(gAxSharedAnim_01153),
	AX_ANIM_PTR(gAxSharedAnim_01188),
	AX_ANIM_PTR(gAxSharedAnim_01226),
	AX_ANIM_PTR(gAxSharedAnim_01265),
	AX_ANIM_PTR(gAxSharedAnim_01296),
};

static const ax_anim *const sPersianAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01337),
	AX_ANIM_PTR(gAxSharedAnim_01414),
	AX_ANIM_PTR(gAxSharedAnim_01392),
	AX_ANIM_PTR(gAxSharedAnim_01380),
	AX_ANIM_PTR(gAxSharedAnim_01379),
	AX_ANIM_PTR(gAxSharedAnim_01368),
	AX_ANIM_PTR(gAxSharedAnim_01354),
	AX_ANIM_PTR(gAxSharedAnim_01338),
};

static const ax_anim *const sPersianAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01422),
	AX_ANIM_PTR(gAxSharedAnim_01464),
	AX_ANIM_PTR(gAxSharedAnim_01461),
	AX_ANIM_PTR(gAxSharedAnim_01456),
	AX_ANIM_PTR(gAxSharedAnim_01446),
	AX_ANIM_PTR(gAxSharedAnim_01443),
	AX_ANIM_PTR(gAxSharedAnim_01438),
	AX_ANIM_PTR(gAxSharedAnim_01429),
};

static const ax_anim *const *const sAxAnimationsPersian[] = {
	sPersianAnimTable1,
	sPersianAnimTable2,
	sPersianAnimTable3,
	sPersianAnimTable4,
	sPersianAnimTable5,
	sPersianAnimTable6,
	sPersianAnimTable7,
	sPersianAnimTable8,
	sPersianAnimTable9,
	sPersianAnimTable10,
	sPersianAnimTable11,
	sPersianAnimTable12,
	sPersianAnimTable13,
};

static const ax_sprite *const sAxSpritesPersian[] = {
	sPersianSprites1,
	sPersianSprites2,
	sPersianSprites3,
	sPersianSprites4,
	sPersianSprites5,
	sPersianSprites6,
	sPersianSprites7,
	sPersianSprites8,
	sPersianSprites9,
	sPersianSprites10,
	sPersianSprites11,
	sPersianSprites12,
	sPersianSprites13,
	sPersianSprites14,
	sPersianSprites15,
	sPersianSprites16,
	sPersianSprites17,
	sPersianSprites18,
	sPersianSprites19,
	sPersianSprites20,
	sPersianSprites21,
	sPersianSprites22,
	sPersianSprites23,
	sPersianSprites24,
	sPersianSprites25,
	sPersianSprites26,
	sPersianSprites27,
	sPersianSprites28,
	sPersianSprites29,
	sPersianSprites30,
	sPersianSprites31,
	sPersianSprites32,
	sPersianSprites33,
	sPersianSprites34,
	sPersianSprites35,
	sPersianSprites36,
	sPersianSprites37,
	sPersianSprites38,
	sPersianSprites39,
	sPersianSprites40,
	sPersianSprites41,
	sPersianSprites42,
	sPersianSprites43,
	sPersianSprites44,
	sPersianSprites45,
	sPersianSprites46,
	sPersianSprites47,
	sPersianSprites48,
	sPersianSprites49,
	sPersianSprites50,
	sPersianSprites51,
	sPersianSprites52,
	sPersianSprites53,
	sPersianSprites54,
	sPersianSprites55,
	sPersianSprites56,
	sPersianSprites57,
	sPersianSprites58,
	sPersianSprites59,
	sPersianSprites60,
	sPersianSprites61,
	sPersianSprites62,
	sPersianSprites63,
	sPersianSprites64,
	sPersianSprites65,
	sPersianSprites66,
	sPersianSprites67,
	sPersianSprites68,
	sPersianSprites69,
};

static const axmain sAxMainPersian = {
	.poses = sAxPosesPersian,
	.animations = sAxAnimationsPersian,
	.animCount = ARRAY_COUNT(sAxAnimationsPersian),
	.spriteData = sAxSpritesPersian,
	.positions = sAxPositionsPersian,
};
