/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainSableye;
const SiroArchive gAxSableye = {"SIRO", &sAxMainSableye};

static const ax_pose sSableyePose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose4[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose5[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose6[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose7[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose8[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose9[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose12[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose16[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose17[] = {
	AX_POSE(16, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose18[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose19[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose20[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose21[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose22[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose23[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose24[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose28[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose32[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose36[] = {
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose40[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose44[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose48[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose52[] = {
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose56[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose60[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose61[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose62[] = {
	AX_POSE(28, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose63[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose67[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose68[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose69[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose70[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose74[] = {
	AX_POSE(34, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose75[] = {
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose76[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(37, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose77[] = {
	AX_POSE(37, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose81[] = {
	AX_POSE(38, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(39, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose82[] = {
	AX_POSE(39, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose83[] = {
	AX_POSE(40, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(41, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose84[] = {
	AX_POSE(41, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose88[] = {
	AX_POSE(42, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 2)),
	AX_POSE(44, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(18, 3, 2)),
	AX_POSE(45, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(22, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose89[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose90[] = {
	AX_POSE(46, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(47, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose91[] = {
	AX_POSE(46, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose95[] = {
	AX_POSE(40, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(48, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose96[] = {
	AX_POSE(48, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose97[] = {
	AX_POSE(38, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(49, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose98[] = {
	AX_POSE(49, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose102[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(37, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose103[] = {
	AX_POSE(37, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose104[] = {
	AX_POSE(34, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose105[] = {
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose109[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose110[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose111[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose112[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose115[] = {
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose116[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose119[] = {
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose124[] = {
	AX_POSE(50, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose125[] = {
	AX_POSE(51, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose126[] = {
	AX_POSE(52, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose127[] = {
	AX_POSE(53, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose128[] = {
	AX_POSE(54, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose129[] = {
	AX_POSE(55, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose134[] = {
	AX_POSE(50, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose135[] = {
	AX_POSE(51, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose136[] = {
	AX_POSE(52, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose137[] = {
	AX_POSE(53, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose138[] = {
	AX_POSE(54, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose139[] = {
	AX_POSE(55, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose144[] = {
	AX_POSE(50, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(-1, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose145[] = {
	AX_POSE(51, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(-1, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose146[] = {
	AX_POSE(52, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose147[] = {
	AX_POSE(53, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose148[] = {
	AX_POSE(54, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose149[] = {
	AX_POSE(55, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose154[] = {
	AX_POSE(50, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose155[] = {
	AX_POSE(51, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose156[] = {
	AX_POSE(52, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose157[] = {
	AX_POSE(53, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose158[] = {
	AX_POSE(54, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose159[] = {
	AX_POSE(55, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose164[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(50, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose165[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(51, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose166[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(52, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(-1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose167[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(53, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(-1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose168[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(54, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(-1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose169[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(55, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(252, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE(-1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(16, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose174[] = {
	AX_POSE(50, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose175[] = {
	AX_POSE(51, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose176[] = {
	AX_POSE(52, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose177[] = {
	AX_POSE(53, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose178[] = {
	AX_POSE(54, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose179[] = {
	AX_POSE(55, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose184[] = {
	AX_POSE(50, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(-1, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose185[] = {
	AX_POSE(51, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE(-1, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose186[] = {
	AX_POSE(52, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose187[] = {
	AX_POSE(53, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose188[] = {
	AX_POSE(54, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose189[] = {
	AX_POSE(55, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE(-1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose194[] = {
	AX_POSE(50, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose195[] = {
	AX_POSE(51, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose196[] = {
	AX_POSE(52, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose197[] = {
	AX_POSE(53, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose198[] = {
	AX_POSE(54, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose199[] = {
	AX_POSE(55, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(-1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose201[] = {
	AX_POSE(56, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose202[] = {
	AX_POSE(57, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose203[] = {
	AX_POSE(58, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose204[] = {
	AX_POSE(59, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose205[] = {
	AX_POSE(60, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose206[] = {
	AX_POSE(61, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose207[] = {
	AX_POSE(62, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose208[] = {
	AX_POSE(63, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose209[] = {
	AX_POSE(60, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose210[] = {
	AX_POSE(59, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose227[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose229[] = {
	AX_POSE(35, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose230[] = {
	AX_POSE(49, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose231[] = {
	AX_POSE(46, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose232[] = {
	AX_POSE(41, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose234[] = {
	AX_POSE(33, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose237[] = {
	AX_POSE(37, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose240[] = {
	AX_POSE(49, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose242[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose247[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose250[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose253[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose254[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose257[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose259[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose260[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose262[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose263[] = {
	AX_POSE(22, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose264[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sSableyePose265[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sSableyeAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_2_2.lz");
static const u8 sSableyeAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_2_4.lz");
static const u8 sSableyeAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_2_5.lz");
static const u8 sSableyeAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_2_6.lz");
static const u8 sSableyeAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_2_8.lz");
static const u8 sSableyeAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_3_1.lz");
static const u8 sSableyeAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_3_2.lz");
static const u8 sSableyeAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_3_3.lz");
static const u8 sSableyeAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_3_4.lz");
static const u8 sSableyeAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_3_5.lz");
static const u8 sSableyeAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_3_6.lz");
static const u8 sSableyeAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_3_7.lz");
static const u8 sSableyeAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_3_8.lz");
static const u8 sSableyeAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_5_1.lz");
static const u8 sSableyeAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_5_2.lz");
static const u8 sSableyeAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_5_3.lz");
static const u8 sSableyeAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_5_4.lz");
static const u8 sSableyeAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_5_5.lz");
static const u8 sSableyeAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_5_6.lz");
static const u8 sSableyeAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_5_7.lz");
static const u8 sSableyeAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_5_8.lz");
static const u8 sSableyeAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_8_1.lz");
static const u8 sSableyeAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_8_2.lz");
static const u8 sSableyeAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_8_3.lz");
static const u8 sSableyeAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_8_4.lz");
static const u8 sSableyeAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_8_5.lz");
static const u8 sSableyeAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_8_6.lz");
static const u8 sSableyeAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_8_7.lz");
static const u8 sSableyeAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_8_8.lz");
static const u8 sSableyeAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_9_1.lz");
static const u8 sSableyeAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_9_2.lz");
static const u8 sSableyeAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_9_3.lz");
static const u8 sSableyeAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_9_4.lz");
static const u8 sSableyeAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_9_5.lz");
static const u8 sSableyeAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_9_6.lz");
static const u8 sSableyeAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_9_7.lz");
static const u8 sSableyeAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_9_8.lz");
static const u8 sSableyeAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_11_1.lz");
static const u8 sSableyeAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_11_2.lz");
static const u8 sSableyeAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_11_3.lz");
static const u8 sSableyeAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_11_4.lz");
static const u8 sSableyeAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_11_5.lz");
static const u8 sSableyeAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_11_6.lz");
static const u8 sSableyeAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_11_7.lz");
static const u8 sSableyeAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/sableye/sSableyeAnims_11_8.lz");

static const u8 sSableyeGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_1.4bpp.lz");
static const ax_sprite sSableyeSprites1[] = {
	{sSableyeGfx1, ARRAY_COUNT(sSableyeGfx1)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_2.4bpp.lz");
static const ax_sprite sSableyeSprites2[] = {
	{sSableyeGfx2, ARRAY_COUNT(sSableyeGfx2)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_3.4bpp.lz");
static const ax_sprite sSableyeSprites3[] = {
	{sSableyeGfx3, ARRAY_COUNT(sSableyeGfx3)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_4.4bpp.lz");
static const ax_sprite sSableyeSprites4[] = {
	{sSableyeGfx4, ARRAY_COUNT(sSableyeGfx4)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_5.4bpp.lz");
static const ax_sprite sSableyeSprites5[] = {
	{sSableyeGfx5, ARRAY_COUNT(sSableyeGfx5)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_6.4bpp.lz");
static const ax_sprite sSableyeSprites6[] = {
	{sSableyeGfx6, ARRAY_COUNT(sSableyeGfx6)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_7.4bpp.lz");
static const ax_sprite sSableyeSprites7[] = {
	{sSableyeGfx7, ARRAY_COUNT(sSableyeGfx7)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_8.4bpp.lz");
static const ax_sprite sSableyeSprites8[] = {
	{sSableyeGfx8, ARRAY_COUNT(sSableyeGfx8)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_9.4bpp.lz");
static const ax_sprite sSableyeSprites9[] = {
	{sSableyeGfx9, ARRAY_COUNT(sSableyeGfx9)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_10.4bpp.lz");
static const ax_sprite sSableyeSprites10[] = {
	{sSableyeGfx10, ARRAY_COUNT(sSableyeGfx10)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_11.4bpp.lz");
static const ax_sprite sSableyeSprites11[] = {
	{sSableyeGfx11, ARRAY_COUNT(sSableyeGfx11)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_12.4bpp.lz");
static const ax_sprite sSableyeSprites12[] = {
	{sSableyeGfx12, ARRAY_COUNT(sSableyeGfx12)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_13.4bpp.lz");
static const ax_sprite sSableyeSprites13[] = {
	{sSableyeGfx13, ARRAY_COUNT(sSableyeGfx13)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_14.4bpp.lz");
static const ax_sprite sSableyeSprites14[] = {
	{sSableyeGfx14, ARRAY_COUNT(sSableyeGfx14)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_15.4bpp.lz");
static const ax_sprite sSableyeSprites15[] = {
	{sSableyeGfx15, ARRAY_COUNT(sSableyeGfx15)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_16.4bpp.lz");
static const ax_sprite sSableyeSprites16[] = {
	{sSableyeGfx16, ARRAY_COUNT(sSableyeGfx16)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_17.4bpp.lz");
static const ax_sprite sSableyeSprites17[] = {
	{sSableyeGfx17, ARRAY_COUNT(sSableyeGfx17)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_18.4bpp.lz");
static const ax_sprite sSableyeSprites18[] = {
	{sSableyeGfx18, ARRAY_COUNT(sSableyeGfx18)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_19.4bpp.lz");
static const ax_sprite sSableyeSprites19[] = {
	{sSableyeGfx19, ARRAY_COUNT(sSableyeGfx19)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_20.4bpp.lz");
static const ax_sprite sSableyeSprites20[] = {
	{sSableyeGfx20, ARRAY_COUNT(sSableyeGfx20)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_21.4bpp.lz");
static const u8 sSableyeGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_21_1.4bpp.lz");
static const u8 sSableyeGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_21_2.4bpp.lz");
static const ax_sprite sSableyeSprites21[] = {
	{NULL, 32}, 
	{sSableyeGfx21, ARRAY_COUNT(sSableyeGfx21)}, 
	{NULL, 32}, 
	{sSableyeGfx21_1, ARRAY_COUNT(sSableyeGfx21_1)}, 
	{NULL, 32}, 
	{sSableyeGfx21_2, ARRAY_COUNT(sSableyeGfx21_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSableyeGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_22.4bpp.lz");
static const u8 sSableyeGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_22_1.4bpp.lz");
static const u8 sSableyeGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_22_2.4bpp.lz");
static const u8 sSableyeGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_22_3.4bpp.lz");
static const ax_sprite sSableyeSprites22[] = {
	{sSableyeGfx22, ARRAY_COUNT(sSableyeGfx22)}, 
	{NULL, 32}, 
	{sSableyeGfx22_1, ARRAY_COUNT(sSableyeGfx22_1)}, 
	{NULL, 32}, 
	{sSableyeGfx22_2, ARRAY_COUNT(sSableyeGfx22_2)}, 
	{NULL, 32}, 
	{sSableyeGfx22_3, ARRAY_COUNT(sSableyeGfx22_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSableyeGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_23.4bpp.lz");
static const u8 sSableyeGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_23_1.4bpp.lz");
static const u8 sSableyeGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_23_2.4bpp.lz");
static const ax_sprite sSableyeSprites23[] = {
	{NULL, 32}, 
	{sSableyeGfx23, ARRAY_COUNT(sSableyeGfx23)}, 
	{NULL, 32}, 
	{sSableyeGfx23_1, ARRAY_COUNT(sSableyeGfx23_1)}, 
	{NULL, 64}, 
	{sSableyeGfx23_2, ARRAY_COUNT(sSableyeGfx23_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSableyeGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_24.4bpp.lz");
static const u8 sSableyeGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_24_1.4bpp.lz");
static const u8 sSableyeGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_24_2.4bpp.lz");
static const ax_sprite sSableyeSprites24[] = {
	{sSableyeGfx24, ARRAY_COUNT(sSableyeGfx24)}, 
	{NULL, 32}, 
	{sSableyeGfx24_1, ARRAY_COUNT(sSableyeGfx24_1)}, 
	{NULL, 32}, 
	{sSableyeGfx24_2, ARRAY_COUNT(sSableyeGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSableyeGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_25.4bpp.lz");
static const u8 sSableyeGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_25_1.4bpp.lz");
static const u8 sSableyeGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_25_2.4bpp.lz");
static const u8 sSableyeGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_25_3.4bpp.lz");
static const ax_sprite sSableyeSprites25[] = {
	{sSableyeGfx25, ARRAY_COUNT(sSableyeGfx25)}, 
	{NULL, 32}, 
	{sSableyeGfx25_1, ARRAY_COUNT(sSableyeGfx25_1)}, 
	{NULL, 32}, 
	{sSableyeGfx25_2, ARRAY_COUNT(sSableyeGfx25_2)}, 
	{NULL, 32}, 
	{sSableyeGfx25_3, ARRAY_COUNT(sSableyeGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSableyeGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_26.4bpp.lz");
static const u8 sSableyeGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_26_1.4bpp.lz");
static const u8 sSableyeGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_26_2.4bpp.lz");
static const ax_sprite sSableyeSprites26[] = {
	{sSableyeGfx26, ARRAY_COUNT(sSableyeGfx26)}, 
	{NULL, 32}, 
	{sSableyeGfx26_1, ARRAY_COUNT(sSableyeGfx26_1)}, 
	{NULL, 32}, 
	{sSableyeGfx26_2, ARRAY_COUNT(sSableyeGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSableyeGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_27.4bpp.lz");
static const u8 sSableyeGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_27_1.4bpp.lz");
static const u8 sSableyeGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_27_2.4bpp.lz");
static const u8 sSableyeGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_27_3.4bpp.lz");
static const ax_sprite sSableyeSprites27[] = {
	{NULL, 96}, 
	{sSableyeGfx27, ARRAY_COUNT(sSableyeGfx27)}, 
	{NULL, 96}, 
	{sSableyeGfx27_1, ARRAY_COUNT(sSableyeGfx27_1)}, 
	{NULL, 32}, 
	{sSableyeGfx27_2, ARRAY_COUNT(sSableyeGfx27_2)}, 
	{NULL, 32}, 
	{sSableyeGfx27_3, ARRAY_COUNT(sSableyeGfx27_3)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_28.4bpp.lz");
static const u8 sSableyeGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_28_1.4bpp.lz");
static const u8 sSableyeGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_28_2.4bpp.lz");
static const ax_sprite sSableyeSprites28[] = {
	{sSableyeGfx28, ARRAY_COUNT(sSableyeGfx28)}, 
	{NULL, 32}, 
	{sSableyeGfx28_1, ARRAY_COUNT(sSableyeGfx28_1)}, 
	{NULL, 32}, 
	{sSableyeGfx28_2, ARRAY_COUNT(sSableyeGfx28_2)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_29.4bpp.lz");
static const u8 sSableyeGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_29_1.4bpp.lz");
static const u8 sSableyeGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_29_2.4bpp.lz");
static const ax_sprite sSableyeSprites29[] = {
	{sSableyeGfx29, ARRAY_COUNT(sSableyeGfx29)}, 
	{NULL, 96}, 
	{sSableyeGfx29_1, ARRAY_COUNT(sSableyeGfx29_1)}, 
	{NULL, 96}, 
	{sSableyeGfx29_2, ARRAY_COUNT(sSableyeGfx29_2)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_30.4bpp.lz");
static const u8 sSableyeGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_30_1.4bpp.lz");
static const u8 sSableyeGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_30_2.4bpp.lz");
static const ax_sprite sSableyeSprites30[] = {
	{sSableyeGfx30, ARRAY_COUNT(sSableyeGfx30)}, 
	{NULL, 32}, 
	{sSableyeGfx30_1, ARRAY_COUNT(sSableyeGfx30_1)}, 
	{NULL, 32}, 
	{sSableyeGfx30_2, ARRAY_COUNT(sSableyeGfx30_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSableyeGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_31.4bpp.lz");
static const u8 sSableyeGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_31_1.4bpp.lz");
static const u8 sSableyeGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_31_2.4bpp.lz");
static const u8 sSableyeGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_31_3.4bpp.lz");
static const ax_sprite sSableyeSprites31[] = {
	{NULL, 32}, 
	{sSableyeGfx31, ARRAY_COUNT(sSableyeGfx31)}, 
	{NULL, 32}, 
	{sSableyeGfx31_1, ARRAY_COUNT(sSableyeGfx31_1)}, 
	{NULL, 64}, 
	{sSableyeGfx31_2, ARRAY_COUNT(sSableyeGfx31_2)}, 
	{NULL, 64}, 
	{sSableyeGfx31_3, ARRAY_COUNT(sSableyeGfx31_3)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_32.4bpp.lz");
static const u8 sSableyeGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_32_1.4bpp.lz");
static const u8 sSableyeGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_32_2.4bpp.lz");
static const u8 sSableyeGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_32_3.4bpp.lz");
static const ax_sprite sSableyeSprites32[] = {
	{NULL, 32}, 
	{sSableyeGfx32, ARRAY_COUNT(sSableyeGfx32)}, 
	{NULL, 32}, 
	{sSableyeGfx32_1, ARRAY_COUNT(sSableyeGfx32_1)}, 
	{NULL, 32}, 
	{sSableyeGfx32_2, ARRAY_COUNT(sSableyeGfx32_2)}, 
	{NULL, 32}, 
	{sSableyeGfx32_3, ARRAY_COUNT(sSableyeGfx32_3)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_33.4bpp.lz");
static const u8 sSableyeGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_33_1.4bpp.lz");
static const ax_sprite sSableyeSprites33[] = {
	{NULL, 96}, 
	{sSableyeGfx33, ARRAY_COUNT(sSableyeGfx33)}, 
	{NULL, 96}, 
	{sSableyeGfx33_1, ARRAY_COUNT(sSableyeGfx33_1)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_34.4bpp.lz");
static const u8 sSableyeGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_34_1.4bpp.lz");
static const u8 sSableyeGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_34_2.4bpp.lz");
static const u8 sSableyeGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_34_3.4bpp.lz");
static const ax_sprite sSableyeSprites34[] = {
	{NULL, 32}, 
	{sSableyeGfx34, ARRAY_COUNT(sSableyeGfx34)}, 
	{NULL, 32}, 
	{sSableyeGfx34_1, ARRAY_COUNT(sSableyeGfx34_1)}, 
	{NULL, 32}, 
	{sSableyeGfx34_2, ARRAY_COUNT(sSableyeGfx34_2)}, 
	{NULL, 32}, 
	{sSableyeGfx34_3, ARRAY_COUNT(sSableyeGfx34_3)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_35.4bpp.lz");
static const u8 sSableyeGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_35_1.4bpp.lz");
static const u8 sSableyeGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_35_2.4bpp.lz");
static const ax_sprite sSableyeSprites35[] = {
	{NULL, 64}, 
	{sSableyeGfx35, ARRAY_COUNT(sSableyeGfx35)}, 
	{NULL, 64}, 
	{sSableyeGfx35_1, ARRAY_COUNT(sSableyeGfx35_1)}, 
	{NULL, 32}, 
	{sSableyeGfx35_2, ARRAY_COUNT(sSableyeGfx35_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSableyeGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_36.4bpp.lz");
static const u8 sSableyeGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_36_1.4bpp.lz");
static const u8 sSableyeGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_36_2.4bpp.lz");
static const u8 sSableyeGfx36_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_36_3.4bpp.lz");
static const ax_sprite sSableyeSprites36[] = {
	{NULL, 32}, 
	{sSableyeGfx36, ARRAY_COUNT(sSableyeGfx36)}, 
	{NULL, 32}, 
	{sSableyeGfx36_1, ARRAY_COUNT(sSableyeGfx36_1)}, 
	{NULL, 32}, 
	{sSableyeGfx36_2, ARRAY_COUNT(sSableyeGfx36_2)}, 
	{NULL, 32}, 
	{sSableyeGfx36_3, ARRAY_COUNT(sSableyeGfx36_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSableyeGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_37.4bpp.lz");
static const u8 sSableyeGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_37_1.4bpp.lz");
static const u8 sSableyeGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_37_2.4bpp.lz");
static const ax_sprite sSableyeSprites37[] = {
	{NULL, 128}, 
	{sSableyeGfx37, ARRAY_COUNT(sSableyeGfx37)}, 
	{NULL, 64}, 
	{sSableyeGfx37_1, ARRAY_COUNT(sSableyeGfx37_1)}, 
	{NULL, 32}, 
	{sSableyeGfx37_2, ARRAY_COUNT(sSableyeGfx37_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSableyeGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_38.4bpp.lz");
static const u8 sSableyeGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_38_1.4bpp.lz");
static const u8 sSableyeGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_38_2.4bpp.lz");
static const u8 sSableyeGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_38_3.4bpp.lz");
static const ax_sprite sSableyeSprites38[] = {
	{NULL, 32}, 
	{sSableyeGfx38, ARRAY_COUNT(sSableyeGfx38)}, 
	{NULL, 32}, 
	{sSableyeGfx38_1, ARRAY_COUNT(sSableyeGfx38_1)}, 
	{NULL, 64}, 
	{sSableyeGfx38_2, ARRAY_COUNT(sSableyeGfx38_2)}, 
	{NULL, 64}, 
	{sSableyeGfx38_3, ARRAY_COUNT(sSableyeGfx38_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSableyeGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_39.4bpp.lz");
static const u8 sSableyeGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_39_1.4bpp.lz");
static const ax_sprite sSableyeSprites39[] = {
	{sSableyeGfx39, ARRAY_COUNT(sSableyeGfx39)}, 
	{NULL, 32}, 
	{sSableyeGfx39_1, ARRAY_COUNT(sSableyeGfx39_1)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_40.4bpp.lz");
static const u8 sSableyeGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_40_1.4bpp.lz");
static const u8 sSableyeGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_40_2.4bpp.lz");
static const ax_sprite sSableyeSprites40[] = {
	{NULL, 32}, 
	{sSableyeGfx40, ARRAY_COUNT(sSableyeGfx40)}, 
	{NULL, 64}, 
	{sSableyeGfx40_1, ARRAY_COUNT(sSableyeGfx40_1)}, 
	{NULL, 64}, 
	{sSableyeGfx40_2, ARRAY_COUNT(sSableyeGfx40_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSableyeGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_41.4bpp.lz");
static const u8 sSableyeGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_41_1.4bpp.lz");
static const u8 sSableyeGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_41_2.4bpp.lz");
static const u8 sSableyeGfx41_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_41_3.4bpp.lz");
static const ax_sprite sSableyeSprites41[] = {
	{sSableyeGfx41, ARRAY_COUNT(sSableyeGfx41)}, 
	{NULL, 64}, 
	{sSableyeGfx41_1, ARRAY_COUNT(sSableyeGfx41_1)}, 
	{NULL, 64}, 
	{sSableyeGfx41_2, ARRAY_COUNT(sSableyeGfx41_2)}, 
	{NULL, 96}, 
	{sSableyeGfx41_3, ARRAY_COUNT(sSableyeGfx41_3)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_42.4bpp.lz");
static const u8 sSableyeGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_42_1.4bpp.lz");
static const u8 sSableyeGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_42_2.4bpp.lz");
static const ax_sprite sSableyeSprites42[] = {
	{sSableyeGfx42, ARRAY_COUNT(sSableyeGfx42)}, 
	{NULL, 32}, 
	{sSableyeGfx42_1, ARRAY_COUNT(sSableyeGfx42_1)}, 
	{NULL, 32}, 
	{sSableyeGfx42_2, ARRAY_COUNT(sSableyeGfx42_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSableyeGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_43.4bpp.lz");
static const ax_sprite sSableyeSprites43[] = {
	{sSableyeGfx43, ARRAY_COUNT(sSableyeGfx43)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_44.4bpp.lz");
static const u8 sSableyeGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_44_1.4bpp.lz");
static const ax_sprite sSableyeSprites44[] = {
	{NULL, 32}, 
	{sSableyeGfx44, ARRAY_COUNT(sSableyeGfx44)}, 
	{NULL, 64}, 
	{sSableyeGfx44_1, ARRAY_COUNT(sSableyeGfx44_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sSableyeGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_45.4bpp.lz");
static const u8 sSableyeGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_45_1.4bpp.lz");
static const ax_sprite sSableyeSprites45[] = {
	{sSableyeGfx45, ARRAY_COUNT(sSableyeGfx45)}, 
	{NULL, 32}, 
	{sSableyeGfx45_1, ARRAY_COUNT(sSableyeGfx45_1)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_46.4bpp.lz");
static const ax_sprite sSableyeSprites46[] = {
	{sSableyeGfx46, ARRAY_COUNT(sSableyeGfx46)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sSableyeGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_47.4bpp.lz");
static const u8 sSableyeGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_47_1.4bpp.lz");
static const ax_sprite sSableyeSprites47[] = {
	{NULL, 32}, 
	{sSableyeGfx47, ARRAY_COUNT(sSableyeGfx47)}, 
	{NULL, 32}, 
	{sSableyeGfx47_1, ARRAY_COUNT(sSableyeGfx47_1)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_48.4bpp.lz");
static const u8 sSableyeGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_48_1.4bpp.lz");
static const u8 sSableyeGfx48_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_48_2.4bpp.lz");
static const ax_sprite sSableyeSprites48[] = {
	{sSableyeGfx48, ARRAY_COUNT(sSableyeGfx48)}, 
	{NULL, 32}, 
	{sSableyeGfx48_1, ARRAY_COUNT(sSableyeGfx48_1)}, 
	{NULL, 64}, 
	{sSableyeGfx48_2, ARRAY_COUNT(sSableyeGfx48_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sSableyeGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_49.4bpp.lz");
static const u8 sSableyeGfx49_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_49_1.4bpp.lz");
static const u8 sSableyeGfx49_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_49_2.4bpp.lz");
static const ax_sprite sSableyeSprites49[] = {
	{sSableyeGfx49, ARRAY_COUNT(sSableyeGfx49)}, 
	{NULL, 32}, 
	{sSableyeGfx49_1, ARRAY_COUNT(sSableyeGfx49_1)}, 
	{NULL, 32}, 
	{sSableyeGfx49_2, ARRAY_COUNT(sSableyeGfx49_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sSableyeGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_50.4bpp.lz");
static const u8 sSableyeGfx50_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_50_1.4bpp.lz");
static const u8 sSableyeGfx50_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_50_2.4bpp.lz");
static const u8 sSableyeGfx50_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_50_3.4bpp.lz");
static const ax_sprite sSableyeSprites50[] = {
	{sSableyeGfx50, ARRAY_COUNT(sSableyeGfx50)}, 
	{NULL, 32}, 
	{sSableyeGfx50_1, ARRAY_COUNT(sSableyeGfx50_1)}, 
	{NULL, 32}, 
	{sSableyeGfx50_2, ARRAY_COUNT(sSableyeGfx50_2)}, 
	{NULL, 64}, 
	{sSableyeGfx50_3, ARRAY_COUNT(sSableyeGfx50_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sSableyeGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_51.4bpp.lz");
static const ax_sprite sSableyeSprites51[] = {
	{sSableyeGfx51, ARRAY_COUNT(sSableyeGfx51)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_52.4bpp.lz");
static const ax_sprite sSableyeSprites52[] = {
	{sSableyeGfx52, ARRAY_COUNT(sSableyeGfx52)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_53.4bpp.lz");
static const ax_sprite sSableyeSprites53[] = {
	{sSableyeGfx53, ARRAY_COUNT(sSableyeGfx53)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_54.4bpp.lz");
static const ax_sprite sSableyeSprites54[] = {
	{sSableyeGfx54, ARRAY_COUNT(sSableyeGfx54)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_55.4bpp.lz");
static const ax_sprite sSableyeSprites55[] = {
	{sSableyeGfx55, ARRAY_COUNT(sSableyeGfx55)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_56.4bpp.lz");
static const ax_sprite sSableyeSprites56[] = {
	{sSableyeGfx56, ARRAY_COUNT(sSableyeGfx56)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_57.4bpp.lz");
static const ax_sprite sSableyeSprites57[] = {
	{sSableyeGfx57, ARRAY_COUNT(sSableyeGfx57)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_58.4bpp.lz");
static const ax_sprite sSableyeSprites58[] = {
	{sSableyeGfx58, ARRAY_COUNT(sSableyeGfx58)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_59.4bpp.lz");
static const ax_sprite sSableyeSprites59[] = {
	{sSableyeGfx59, ARRAY_COUNT(sSableyeGfx59)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_60.4bpp.lz");
static const ax_sprite sSableyeSprites60[] = {
	{sSableyeGfx60, ARRAY_COUNT(sSableyeGfx60)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_61.4bpp.lz");
static const ax_sprite sSableyeSprites61[] = {
	{sSableyeGfx61, ARRAY_COUNT(sSableyeGfx61)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_62.4bpp.lz");
static const ax_sprite sSableyeSprites62[] = {
	{sSableyeGfx62, ARRAY_COUNT(sSableyeGfx62)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_63.4bpp.lz");
static const ax_sprite sSableyeSprites63[] = {
	{sSableyeGfx63, ARRAY_COUNT(sSableyeGfx63)}, 
	{NULL, 0}
};
static const u8 sSableyeGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/sableye/sprite_64.4bpp.lz");
static const ax_sprite sSableyeSprites64[] = {
	{sSableyeGfx64, ARRAY_COUNT(sSableyeGfx64)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesSableye[] = {
	sSableyePose1,
	sSableyePose2,
	sSableyePose3,
	sSableyePose4,
	sSableyePose5,
	sSableyePose6,
	sSableyePose7,
	sSableyePose8,
	sSableyePose9,
	sSableyePose10,
	sSableyePose11,
	sSableyePose12,
	sSableyePose13,
	sSableyePose14,
	sSableyePose15,
	sSableyePose16,
	sSableyePose17,
	sSableyePose18,
	sSableyePose19,
	sSableyePose20,
	sSableyePose21,
	sSableyePose22,
	sSableyePose23,
	sSableyePose24,
	sSableyePose1,
	sSableyePose2,
	sSableyePose3,
	sSableyePose28,
	sSableyePose4,
	sSableyePose5,
	sSableyePose6,
	sSableyePose32,
	sSableyePose7,
	sSableyePose8,
	sSableyePose9,
	sSableyePose36,
	sSableyePose10,
	sSableyePose11,
	sSableyePose12,
	sSableyePose40,
	sSableyePose13,
	sSableyePose14,
	sSableyePose15,
	sSableyePose44,
	sSableyePose16,
	sSableyePose17,
	sSableyePose18,
	sSableyePose48,
	sSableyePose19,
	sSableyePose20,
	sSableyePose21,
	sSableyePose52,
	sSableyePose22,
	sSableyePose23,
	sSableyePose24,
	sSableyePose56,
	sSableyePose1,
	sSableyePose2,
	sSableyePose3,
	sSableyePose60,
	sSableyePose61,
	sSableyePose62,
	sSableyePose63,
	sSableyePose4,
	sSableyePose5,
	sSableyePose6,
	sSableyePose67,
	sSableyePose68,
	sSableyePose69,
	sSableyePose70,
	sSableyePose7,
	sSableyePose8,
	sSableyePose9,
	sSableyePose74,
	sSableyePose75,
	sSableyePose76,
	sSableyePose77,
	sSableyePose10,
	sSableyePose11,
	sSableyePose12,
	sSableyePose81,
	sSableyePose82,
	sSableyePose83,
	sSableyePose84,
	sSableyePose13,
	sSableyePose14,
	sSableyePose15,
	sSableyePose88,
	sSableyePose89,
	sSableyePose90,
	sSableyePose91,
	sSableyePose16,
	sSableyePose17,
	sSableyePose18,
	sSableyePose95,
	sSableyePose96,
	sSableyePose97,
	sSableyePose98,
	sSableyePose19,
	sSableyePose20,
	sSableyePose21,
	sSableyePose102,
	sSableyePose103,
	sSableyePose104,
	sSableyePose105,
	sSableyePose22,
	sSableyePose23,
	sSableyePose24,
	sSableyePose109,
	sSableyePose110,
	sSableyePose111,
	sSableyePose112,
	sSableyePose28,
	sSableyePose56,
	sSableyePose115,
	sSableyePose116,
	sSableyePose44,
	sSableyePose40,
	sSableyePose119,
	sSableyePose32,
	sSableyePose1,
	sSableyePose2,
	sSableyePose3,
	sSableyePose124,
	sSableyePose125,
	sSableyePose126,
	sSableyePose127,
	sSableyePose128,
	sSableyePose129,
	sSableyePose28,
	sSableyePose4,
	sSableyePose5,
	sSableyePose6,
	sSableyePose134,
	sSableyePose135,
	sSableyePose136,
	sSableyePose137,
	sSableyePose138,
	sSableyePose139,
	sSableyePose32,
	sSableyePose7,
	sSableyePose8,
	sSableyePose9,
	sSableyePose144,
	sSableyePose145,
	sSableyePose146,
	sSableyePose147,
	sSableyePose148,
	sSableyePose149,
	sSableyePose36,
	sSableyePose10,
	sSableyePose11,
	sSableyePose12,
	sSableyePose154,
	sSableyePose155,
	sSableyePose156,
	sSableyePose157,
	sSableyePose158,
	sSableyePose159,
	sSableyePose40,
	sSableyePose13,
	sSableyePose14,
	sSableyePose15,
	sSableyePose164,
	sSableyePose165,
	sSableyePose166,
	sSableyePose167,
	sSableyePose168,
	sSableyePose169,
	sSableyePose44,
	sSableyePose16,
	sSableyePose17,
	sSableyePose18,
	sSableyePose174,
	sSableyePose175,
	sSableyePose176,
	sSableyePose177,
	sSableyePose178,
	sSableyePose179,
	sSableyePose48,
	sSableyePose19,
	sSableyePose20,
	sSableyePose21,
	sSableyePose184,
	sSableyePose185,
	sSableyePose186,
	sSableyePose187,
	sSableyePose188,
	sSableyePose189,
	sSableyePose52,
	sSableyePose22,
	sSableyePose23,
	sSableyePose24,
	sSableyePose194,
	sSableyePose195,
	sSableyePose196,
	sSableyePose197,
	sSableyePose198,
	sSableyePose199,
	sSableyePose56,
	sSableyePose201,
	sSableyePose202,
	sSableyePose203,
	sSableyePose204,
	sSableyePose205,
	sSableyePose206,
	sSableyePose207,
	sSableyePose208,
	sSableyePose209,
	sSableyePose210,
	sSableyePose1,
	sSableyePose28,
	sSableyePose4,
	sSableyePose32,
	sSableyePose7,
	sSableyePose36,
	sSableyePose10,
	sSableyePose40,
	sSableyePose13,
	sSableyePose44,
	sSableyePose16,
	sSableyePose48,
	sSableyePose19,
	sSableyePose52,
	sSableyePose22,
	sSableyePose56,
	sSableyePose227,
	sSableyePose112,
	sSableyePose229,
	sSableyePose230,
	sSableyePose231,
	sSableyePose232,
	sSableyePose77,
	sSableyePose234,
	sSableyePose227,
	sSableyePose234,
	sSableyePose237,
	sSableyePose232,
	sSableyePose231,
	sSableyePose240,
	sSableyePose229,
	sSableyePose242,
	sSableyePose1,
	sSableyePose3,
	sSableyePose28,
	sSableyePose4,
	sSableyePose247,
	sSableyePose32,
	sSableyePose7,
	sSableyePose250,
	sSableyePose119,
	sSableyePose10,
	sSableyePose253,
	sSableyePose254,
	sSableyePose13,
	sSableyePose15,
	sSableyePose257,
	sSableyePose16,
	sSableyePose259,
	sSableyePose260,
	sSableyePose19,
	sSableyePose262,
	sSableyePose263,
	sSableyePose264,
	sSableyePose265,
	sSableyePose56,
	sSableyePose28,
	sSableyePose56,
	sSableyePose115,
	sSableyePose116,
	sSableyePose44,
	sSableyePose40,
	sSableyePose119,
	sSableyePose32,
	sSableyePose1,
	sSableyePose22,
	sSableyePose19,
	sSableyePose16,
	sSableyePose13,
	sSableyePose10,
	sSableyePose7,
	sSableyePose4,
};

static const struct PositionSets sAxPositionsSableye[] = {
	[0] = { .set = { {-1, -7}, {-9, -5}, {8, -5}, {-1, -9} } },
	[1] = { .set = { {-2, -6}, {-9, -6}, {8, -3}, {-2, -8} } },
	[2] = { .set = { {1, -6}, {-9, -3}, {8, -6}, {1, -8} } },
	[3] = { .set = { {5, -8}, {7, -6}, {-3, -3}, {-1, -7} } },
	[4] = { .set = { {6, -7}, {6, -6}, {-1, -2}, {0, -6} } },
	[5] = { .set = { {4, -7}, {8, -5}, {-5, -3}, {-2, -6} } },
	[6] = { .set = { {4, -8}, {4, -7}, {2, -2}, {-2, -7} } },
	[7] = { .set = { {5, -7}, {2, -7}, {2, -3}, {-2, -6} } },
	[8] = { .set = { {3, -7}, {6, -6}, {-2, -1}, {-2, -6} } },
	[9] = { .set = { {2, -11}, {6, -4}, {-1, -6}, {-2, -7} } },
	[10] = { .set = { {3, -9}, {7, -4}, {-5, -4}, {-2, -6} } },
	[11] = { .set = { {1, -9}, {5, -2}, {2, -7}, {-3, -6} } },
	[12] = { .set = { {-1, -11}, {6, -6}, {-7, -6}, {-1, -9} } },
	[13] = { .set = { {-2, -10}, {6, -4}, {-6, -8}, {-1, -8} } },
	[14] = { .set = { {1, -10}, {5, -8}, {-7, -4}, {0, -8} } },
	[15] = { .set = { {-2, -10}, {1, -9}, {-7, -4}, {1, -6} } },
	[16] = { .set = { {-2, -8}, {4, -5}, {-8, -4}, {1, -5} } },
	[17] = { .set = { {0, -9}, {-1, -8}, {-6, -2}, {2, -6} } },
	[18] = { .set = { {-5, -8}, {-5, -7}, {-3, -2}, {1, -7} } },
	[19] = { .set = { {-6, -7}, {-3, -7}, {-3, -3}, {1, -6} } },
	[20] = { .set = { {-4, -7}, {-7, -6}, {1, -1}, {1, -6} } },
	[21] = { .set = { {-6, -8}, {-8, -6}, {2, -3}, {0, -7} } },
	[22] = { .set = { {-7, -7}, {-7, -6}, {0, -2}, {-1, -6} } },
	[23] = { .set = { {-5, -7}, {-9, -5}, {4, -3}, {1, -6} } },
	[24] = { .set = { {-1, -7}, {-9, -5}, {8, -5}, {-1, -9} } },
	[25] = { .set = { {-2, -6}, {-9, -6}, {8, -3}, {-2, -8} } },
	[26] = { .set = { {1, -6}, {-9, -3}, {8, -6}, {1, -8} } },
	[27] = { .set = { {-1, -6}, {-12, -7}, {10, -7}, {-1, -8} } },
	[28] = { .set = { {5, -8}, {7, -6}, {-3, -3}, {-1, -7} } },
	[29] = { .set = { {6, -7}, {6, -6}, {-1, -2}, {0, -6} } },
	[30] = { .set = { {4, -7}, {8, -5}, {-5, -3}, {-2, -6} } },
	[31] = { .set = { {7, -8}, {7, -12}, {-8, -7}, {-1, -9} } },
	[32] = { .set = { {4, -8}, {4, -7}, {2, -2}, {-2, -7} } },
	[33] = { .set = { {5, -7}, {2, -7}, {2, -3}, {-2, -6} } },
	[34] = { .set = { {3, -7}, {6, -6}, {-2, -1}, {-2, -6} } },
	[35] = { .set = { {9, -9}, {5, -13}, {4, -5}, {1, -7} } },
	[36] = { .set = { {2, -11}, {6, -4}, {-1, -6}, {-2, -7} } },
	[37] = { .set = { {3, -9}, {7, -4}, {-5, -4}, {-2, -6} } },
	[38] = { .set = { {1, -9}, {5, -2}, {2, -7}, {-3, -6} } },
	[39] = { .set = { {5, -10}, {8, -7}, {-7, -11}, {-1, -9} } },
	[40] = { .set = { {-1, -11}, {6, -6}, {-7, -6}, {-1, -9} } },
	[41] = { .set = { {-2, -10}, {6, -4}, {-6, -8}, {-1, -8} } },
	[42] = { .set = { {1, -10}, {5, -8}, {-7, -4}, {0, -8} } },
	[43] = { .set = { {0, -11}, {8, -9}, {-9, -9}, {0, -9} } },
	[44] = { .set = { {-2, -10}, {1, -9}, {-7, -4}, {1, -6} } },
	[45] = { .set = { {-2, -8}, {4, -5}, {-8, -4}, {1, -5} } },
	[46] = { .set = { {0, -9}, {-1, -8}, {-6, -2}, {2, -6} } },
	[47] = { .set = { {-6, -10}, {5, -11}, {-9, -7}, {-1, -9} } },
	[48] = { .set = { {-5, -8}, {-5, -7}, {-3, -2}, {1, -7} } },
	[49] = { .set = { {-6, -7}, {-3, -7}, {-3, -3}, {1, -6} } },
	[50] = { .set = { {-4, -7}, {-7, -6}, {1, -1}, {1, -6} } },
	[51] = { .set = { {-10, -9}, {-6, -13}, {-5, -5}, {-2, -7} } },
	[52] = { .set = { {-6, -8}, {-8, -6}, {2, -3}, {0, -7} } },
	[53] = { .set = { {-7, -7}, {-7, -6}, {0, -2}, {-1, -6} } },
	[54] = { .set = { {-5, -7}, {-9, -5}, {4, -3}, {1, -6} } },
	[55] = { .set = { {-8, -8}, {-8, -12}, {7, -7}, {0, -9} } },
	[56] = { .set = { {-1, -7}, {-9, -5}, {8, -5}, {-1, -9} } },
	[57] = { .set = { {-2, -6}, {-9, -6}, {8, -3}, {-2, -8} } },
	[58] = { .set = { {1, -6}, {-9, -3}, {8, -6}, {1, -8} } },
	[59] = { .set = { {-4, -6}, {-4, -18}, {-7, -2}, {-4, -7} } },
	[60] = { .set = { {-4, -6}, {-4, -18}, {-7, -2}, {-4, -7} } },
	[61] = { .set = { {3, -5}, {10, -4}, {11, -11}, {3, -6} } },
	[62] = { .set = { {3, -5}, {10, -4}, {11, -11}, {3, -6} } },
	[63] = { .set = { {5, -8}, {7, -6}, {-3, -3}, {-1, -7} } },
	[64] = { .set = { {6, -7}, {6, -6}, {-1, -2}, {0, -6} } },
	[65] = { .set = { {4, -7}, {8, -5}, {-5, -3}, {-2, -6} } },
	[66] = { .set = { {6, -6}, {-6, 1}, {-7, -6}, {-1, -5} } },
	[67] = { .set = { {6, -6}, {-6, 1}, {-7, -6}, {-1, -5} } },
	[68] = { .set = { {7, -7}, {-1, -19}, {6, -1}, {-1, -6} } },
	[69] = { .set = { {7, -7}, {-1, -19}, {6, -1}, {-1, -6} } },
	[70] = { .set = { {4, -8}, {4, -7}, {2, -2}, {-2, -7} } },
	[71] = { .set = { {5, -7}, {2, -7}, {2, -3}, {-2, -6} } },
	[72] = { .set = { {3, -7}, {6, -6}, {-2, -1}, {-2, -6} } },
	[73] = { .set = { {7, -6}, {1, 3}, {-3, -5}, {-1, -8} } },
	[74] = { .set = { {7, -6}, {1, 3}, {-3, -5}, {-1, -8} } },
	[75] = { .set = { {4, -8}, {-2, -16}, {-4, -18}, {1, -8} } },
	[76] = { .set = { {4, -8}, {-2, -16}, {-4, -18}, {1, -8} } },
	[77] = { .set = { {2, -11}, {6, -4}, {-1, -6}, {-2, -7} } },
	[78] = { .set = { {3, -9}, {7, -4}, {-5, -4}, {-2, -6} } },
	[79] = { .set = { {1, -9}, {5, -2}, {2, -7}, {-3, -6} } },
	[80] = { .set = { {5, -10}, {5, -7}, {8, -2}, {1, -7} } },
	[81] = { .set = { {5, -10}, {5, -7}, {8, -2}, {1, -7} } },
	[82] = { .set = { {3, -10}, {-8, -17}, {-6, -16}, {-1, -5} } },
	[83] = { .set = { {3, -10}, {-8, -17}, {-6, -16}, {-1, -5} } },
	[84] = { .set = { {-1, -11}, {6, -6}, {-7, -6}, {-1, -9} } },
	[85] = { .set = { {-2, -10}, {6, -4}, {-6, -8}, {-1, -8} } },
	[86] = { .set = { {1, -10}, {5, -8}, {-7, -4}, {0, -8} } },
	[87] = { .set = { {3, -10}, {3, -15}, {5, -4}, {0, -7} } },
	[88] = { .set = { {3, -10}, {3, -15}, {5, -4}, {0, -7} } },
	[89] = { .set = { {-3, -10}, {-11, -5}, {-8, -8}, {-1, -8} } },
	[90] = { .set = { {-3, -10}, {-11, -5}, {-8, -8}, {-1, -8} } },
	[91] = { .set = { {-2, -10}, {1, -9}, {-7, -4}, {1, -6} } },
	[92] = { .set = { {-2, -8}, {4, -5}, {-8, -4}, {1, -5} } },
	[93] = { .set = { {0, -9}, {-1, -8}, {-6, -2}, {2, -6} } },
	[94] = { .set = { {-4, -10}, {5, -16}, {7, -17}, {0, -8} } },
	[95] = { .set = { {-4, -10}, {5, -16}, {7, -17}, {0, -8} } },
	[96] = { .set = { {-8, -9}, {-9, -2}, {-6, -7}, {-1, -7} } },
	[97] = { .set = { {-8, -9}, {-9, -2}, {-6, -7}, {-1, -7} } },
	[98] = { .set = { {-5, -8}, {-5, -7}, {-3, -2}, {1, -7} } },
	[99] = { .set = { {-6, -7}, {-3, -7}, {-3, -3}, {1, -6} } },
	[100] = { .set = { {-4, -7}, {-7, -6}, {1, -1}, {1, -6} } },
	[101] = { .set = { {-5, -8}, {1, -16}, {3, -18}, {-2, -8} } },
	[102] = { .set = { {-5, -8}, {1, -16}, {3, -18}, {-2, -8} } },
	[103] = { .set = { {-8, -6}, {-2, 3}, {2, -5}, {0, -8} } },
	[104] = { .set = { {-8, -6}, {-2, 3}, {2, -5}, {0, -8} } },
	[105] = { .set = { {-6, -8}, {-8, -6}, {2, -3}, {0, -7} } },
	[106] = { .set = { {-7, -7}, {-7, -6}, {0, -2}, {-1, -6} } },
	[107] = { .set = { {-5, -7}, {-9, -5}, {4, -3}, {1, -6} } },
	[108] = { .set = { {-8, -7}, {0, -19}, {-7, -1}, {0, -6} } },
	[109] = { .set = { {-8, -7}, {0, -19}, {-7, -1}, {0, -6} } },
	[110] = { .set = { {-7, -6}, {5, 1}, {6, -6}, {0, -5} } },
	[111] = { .set = { {-7, -6}, {5, 1}, {6, -6}, {0, -5} } },
	[112] = { .set = { {-1, -6}, {-12, -7}, {10, -7}, {-1, -8} } },
	[113] = { .set = { {-8, -8}, {-8, -12}, {7, -7}, {0, -9} } },
	[114] = { .set = { {-8, -9}, {-4, -13}, {-3, -5}, {0, -7} } },
	[115] = { .set = { {-5, -10}, {6, -11}, {-8, -7}, {0, -9} } },
	[116] = { .set = { {0, -11}, {8, -9}, {-9, -9}, {0, -9} } },
	[117] = { .set = { {5, -10}, {8, -7}, {-7, -11}, {-1, -9} } },
	[118] = { .set = { {7, -9}, {3, -13}, {2, -5}, {-1, -7} } },
	[119] = { .set = { {7, -8}, {7, -12}, {-8, -7}, {-1, -9} } },
	[120] = { .set = { {-1, -7}, {-9, -5}, {8, -5}, {-1, -9} } },
	[121] = { .set = { {-2, -6}, {-9, -6}, {8, -3}, {-2, -8} } },
	[122] = { .set = { {1, -6}, {-9, -3}, {8, -6}, {1, -8} } },
	[123] = { .set = { {-1, -6}, {-12, -7}, {10, -7}, {-1, -8} } },
	[124] = { .set = { {-1, -6}, {-12, -7}, {10, -7}, {-1, -8} } },
	[125] = { .set = { {-1, -6}, {-12, -7}, {10, -7}, {-1, -8} } },
	[126] = { .set = { {-1, -6}, {-12, -7}, {10, -7}, {-1, -8} } },
	[127] = { .set = { {-1, -6}, {-12, -7}, {10, -7}, {-1, -8} } },
	[128] = { .set = { {-1, -6}, {-12, -7}, {10, -7}, {-1, -8} } },
	[129] = { .set = { {-1, -6}, {-12, -7}, {10, -7}, {-1, -8} } },
	[130] = { .set = { {5, -8}, {7, -6}, {-3, -3}, {-1, -7} } },
	[131] = { .set = { {6, -7}, {6, -6}, {-1, -2}, {0, -6} } },
	[132] = { .set = { {4, -7}, {8, -5}, {-5, -3}, {-2, -6} } },
	[133] = { .set = { {7, -8}, {7, -12}, {-8, -7}, {-1, -9} } },
	[134] = { .set = { {7, -8}, {7, -12}, {-8, -7}, {-1, -9} } },
	[135] = { .set = { {7, -8}, {7, -12}, {-8, -7}, {-1, -9} } },
	[136] = { .set = { {7, -8}, {7, -12}, {-8, -7}, {-1, -9} } },
	[137] = { .set = { {7, -8}, {7, -12}, {-8, -7}, {-1, -9} } },
	[138] = { .set = { {7, -8}, {7, -12}, {-8, -7}, {-1, -9} } },
	[139] = { .set = { {7, -8}, {7, -12}, {-8, -7}, {-1, -9} } },
	[140] = { .set = { {4, -8}, {4, -7}, {2, -2}, {-2, -7} } },
	[141] = { .set = { {5, -7}, {2, -7}, {2, -3}, {-2, -6} } },
	[142] = { .set = { {3, -7}, {6, -6}, {-2, -1}, {-2, -6} } },
	[143] = { .set = { {9, -9}, {5, -13}, {4, -5}, {1, -7} } },
	[144] = { .set = { {9, -9}, {5, -13}, {4, -5}, {1, -7} } },
	[145] = { .set = { {9, -9}, {5, -13}, {4, -5}, {1, -7} } },
	[146] = { .set = { {9, -9}, {5, -13}, {4, -5}, {1, -7} } },
	[147] = { .set = { {9, -9}, {5, -13}, {4, -5}, {1, -7} } },
	[148] = { .set = { {9, -9}, {5, -13}, {4, -5}, {1, -7} } },
	[149] = { .set = { {9, -9}, {5, -13}, {4, -5}, {1, -7} } },
	[150] = { .set = { {2, -11}, {6, -4}, {-1, -6}, {-2, -7} } },
	[151] = { .set = { {3, -9}, {7, -4}, {-5, -4}, {-2, -6} } },
	[152] = { .set = { {1, -9}, {5, -2}, {2, -7}, {-3, -6} } },
	[153] = { .set = { {5, -10}, {8, -7}, {-7, -11}, {-1, -9} } },
	[154] = { .set = { {5, -10}, {8, -7}, {-7, -11}, {-1, -9} } },
	[155] = { .set = { {5, -10}, {8, -7}, {-7, -11}, {-1, -9} } },
	[156] = { .set = { {5, -10}, {8, -7}, {-7, -11}, {-1, -9} } },
	[157] = { .set = { {5, -10}, {8, -7}, {-7, -11}, {-1, -9} } },
	[158] = { .set = { {5, -10}, {8, -7}, {-7, -11}, {-1, -9} } },
	[159] = { .set = { {5, -10}, {8, -7}, {-7, -11}, {-1, -9} } },
	[160] = { .set = { {-1, -11}, {6, -6}, {-7, -6}, {-1, -9} } },
	[161] = { .set = { {-2, -10}, {6, -4}, {-6, -8}, {-1, -8} } },
	[162] = { .set = { {1, -10}, {5, -8}, {-7, -4}, {0, -8} } },
	[163] = { .set = { {0, -11}, {8, -9}, {-9, -9}, {0, -9} } },
	[164] = { .set = { {0, -11}, {8, -9}, {-9, -9}, {0, -9} } },
	[165] = { .set = { {0, -11}, {8, -9}, {-9, -9}, {0, -9} } },
	[166] = { .set = { {0, -11}, {8, -9}, {-9, -9}, {0, -9} } },
	[167] = { .set = { {0, -11}, {8, -9}, {-9, -9}, {0, -9} } },
	[168] = { .set = { {0, -11}, {8, -9}, {-9, -9}, {0, -9} } },
	[169] = { .set = { {0, -11}, {8, -9}, {-9, -9}, {0, -9} } },
	[170] = { .set = { {-2, -10}, {1, -9}, {-7, -4}, {1, -6} } },
	[171] = { .set = { {-2, -8}, {4, -5}, {-8, -4}, {1, -5} } },
	[172] = { .set = { {0, -9}, {-1, -8}, {-6, -2}, {2, -6} } },
	[173] = { .set = { {-6, -10}, {5, -11}, {-9, -7}, {-1, -9} } },
	[174] = { .set = { {-6, -10}, {5, -11}, {-9, -7}, {-1, -9} } },
	[175] = { .set = { {-6, -10}, {5, -11}, {-9, -7}, {-1, -9} } },
	[176] = { .set = { {-6, -10}, {5, -11}, {-9, -7}, {-1, -9} } },
	[177] = { .set = { {-6, -10}, {5, -11}, {-9, -7}, {-1, -9} } },
	[178] = { .set = { {-6, -10}, {5, -11}, {-9, -7}, {-1, -9} } },
	[179] = { .set = { {-6, -10}, {5, -11}, {-9, -7}, {-1, -9} } },
	[180] = { .set = { {-5, -8}, {-5, -7}, {-3, -2}, {1, -7} } },
	[181] = { .set = { {-6, -7}, {-3, -7}, {-3, -3}, {1, -6} } },
	[182] = { .set = { {-4, -7}, {-7, -6}, {1, -1}, {1, -6} } },
	[183] = { .set = { {-10, -9}, {-6, -13}, {-5, -5}, {-2, -7} } },
	[184] = { .set = { {-10, -9}, {-6, -13}, {-5, -5}, {-2, -7} } },
	[185] = { .set = { {-10, -9}, {-6, -13}, {-5, -5}, {-2, -7} } },
	[186] = { .set = { {-10, -9}, {-6, -13}, {-5, -5}, {-2, -7} } },
	[187] = { .set = { {-10, -9}, {-6, -13}, {-5, -5}, {-2, -7} } },
	[188] = { .set = { {-10, -9}, {-6, -13}, {-5, -5}, {-2, -7} } },
	[189] = { .set = { {-10, -9}, {-6, -13}, {-5, -5}, {-2, -7} } },
	[190] = { .set = { {-6, -8}, {-8, -6}, {2, -3}, {0, -7} } },
	[191] = { .set = { {-7, -7}, {-7, -6}, {0, -2}, {-1, -6} } },
	[192] = { .set = { {-5, -7}, {-9, -5}, {4, -3}, {1, -6} } },
	[193] = { .set = { {-8, -8}, {-8, -12}, {7, -7}, {0, -9} } },
	[194] = { .set = { {-8, -8}, {-8, -12}, {7, -7}, {0, -9} } },
	[195] = { .set = { {-8, -8}, {-8, -12}, {7, -7}, {0, -9} } },
	[196] = { .set = { {-8, -8}, {-8, -12}, {7, -7}, {0, -9} } },
	[197] = { .set = { {-8, -8}, {-8, -12}, {7, -7}, {0, -9} } },
	[198] = { .set = { {-8, -8}, {-8, -12}, {7, -7}, {0, -9} } },
	[199] = { .set = { {-8, -8}, {-8, -12}, {7, -7}, {0, -9} } },
	[200] = { .set = { {-4, -6}, {-4, -2}, {4, 0}, {1, -6} } },
	[201] = { .set = { {-5, -7}, {-4, -2}, {4, 0}, {2, -6} } },
	[202] = { .set = { {-1, -11}, {-10, -9}, {9, -9}, {0, -10} } },
	[203] = { .set = { {2, -13}, {7, -10}, {-7, -5}, {1, -9} } },
	[204] = { .set = { {3, -14}, {-3, -8}, {-4, -5}, {-2, -10} } },
	[205] = { .set = { {2, -12}, {4, -5}, {-1, -13}, {-2, -9} } },
	[206] = { .set = { {-1, -14}, {8, -6}, {-9, -6}, {-1, -10} } },
	[207] = { .set = { {-3, -14}, {2, -7}, {-10, -8}, {-4, -8} } },
	[208] = { .set = { {-4, -14}, {2, -8}, {3, -5}, {1, -10} } },
	[209] = { .set = { {-3, -13}, {-8, -10}, {6, -5}, {-2, -9} } },
	[210] = { .set = { {-1, -7}, {-9, -5}, {8, -5}, {-1, -9} } },
	[211] = { .set = { {-1, -6}, {-12, -7}, {10, -7}, {-1, -8} } },
	[212] = { .set = { {5, -8}, {7, -6}, {-3, -3}, {-1, -7} } },
	[213] = { .set = { {7, -8}, {7, -12}, {-8, -7}, {-1, -9} } },
	[214] = { .set = { {4, -8}, {4, -7}, {2, -2}, {-2, -7} } },
	[215] = { .set = { {9, -9}, {5, -13}, {4, -5}, {1, -7} } },
	[216] = { .set = { {2, -11}, {6, -4}, {-1, -6}, {-2, -7} } },
	[217] = { .set = { {5, -10}, {8, -7}, {-7, -11}, {-1, -9} } },
	[218] = { .set = { {-1, -11}, {6, -6}, {-7, -6}, {-1, -9} } },
	[219] = { .set = { {0, -11}, {8, -9}, {-9, -9}, {0, -9} } },
	[220] = { .set = { {-2, -10}, {1, -9}, {-7, -4}, {1, -6} } },
	[221] = { .set = { {-6, -10}, {5, -11}, {-9, -7}, {-1, -9} } },
	[222] = { .set = { {-5, -8}, {-5, -7}, {-3, -2}, {1, -7} } },
	[223] = { .set = { {-10, -9}, {-6, -13}, {-5, -5}, {-2, -7} } },
	[224] = { .set = { {-6, -8}, {-8, -6}, {2, -3}, {0, -7} } },
	[225] = { .set = { {-8, -8}, {-8, -12}, {7, -7}, {0, -9} } },
	[226] = { .set = { {0, -5}, {7, -4}, {8, -11}, {0, -6} } },
	[227] = { .set = { {-7, -6}, {5, 1}, {6, -6}, {0, -5} } },
	[228] = { .set = { {-8, -5}, {-2, 4}, {2, -4}, {0, -7} } },
	[229] = { .set = { {-6, -9}, {-7, -2}, {-4, -7}, {1, -7} } },
	[230] = { .set = { {-2, -10}, {-10, -5}, {-7, -8}, {0, -8} } },
	[231] = { .set = { {3, -11}, {-8, -18}, {-6, -17}, {-1, -6} } },
	[232] = { .set = { {4, -8}, {-2, -16}, {-4, -18}, {1, -8} } },
	[233] = { .set = { {8, -8}, {0, -20}, {7, -2}, {0, -7} } },
	[234] = { .set = { {0, -5}, {7, -4}, {8, -11}, {0, -6} } },
	[235] = { .set = { {8, -8}, {0, -20}, {7, -2}, {0, -7} } },
	[236] = { .set = { {3, -8}, {-3, -16}, {-5, -18}, {0, -8} } },
	[237] = { .set = { {3, -11}, {-8, -18}, {-6, -17}, {-1, -6} } },
	[238] = { .set = { {-2, -10}, {-10, -5}, {-7, -8}, {0, -8} } },
	[239] = { .set = { {-7, -10}, {-8, -3}, {-5, -8}, {0, -8} } },
	[240] = { .set = { {-8, -5}, {-2, 4}, {2, -4}, {0, -7} } },
	[241] = { .set = { {-6, -5}, {6, 2}, {7, -5}, {1, -4} } },
	[242] = { .set = { {-1, -7}, {-9, -5}, {8, -5}, {-1, -9} } },
	[243] = { .set = { {1, -6}, {-9, -3}, {8, -6}, {1, -8} } },
	[244] = { .set = { {-1, -6}, {-12, -7}, {10, -7}, {-1, -8} } },
	[245] = { .set = { {5, -8}, {7, -6}, {-3, -3}, {-1, -7} } },
	[246] = { .set = { {5, -7}, {9, -5}, {-4, -3}, {-1, -6} } },
	[247] = { .set = { {7, -8}, {7, -12}, {-8, -7}, {-1, -9} } },
	[248] = { .set = { {4, -8}, {4, -7}, {2, -2}, {-2, -7} } },
	[249] = { .set = { {4, -7}, {7, -6}, {-1, -1}, {-1, -6} } },
	[250] = { .set = { {7, -9}, {3, -13}, {2, -5}, {-1, -7} } },
	[251] = { .set = { {2, -11}, {6, -4}, {-1, -6}, {-2, -7} } },
	[252] = { .set = { {1, -10}, {5, -3}, {2, -8}, {-3, -7} } },
	[253] = { .set = { {3, -10}, {6, -7}, {-9, -11}, {-3, -9} } },
	[254] = { .set = { {-1, -11}, {6, -6}, {-7, -6}, {-1, -9} } },
	[255] = { .set = { {1, -10}, {5, -8}, {-7, -4}, {0, -8} } },
	[256] = { .set = { {0, -12}, {8, -10}, {-9, -10}, {0, -10} } },
	[257] = { .set = { {-2, -10}, {1, -9}, {-7, -4}, {1, -6} } },
	[258] = { .set = { {-1, -9}, {-2, -8}, {-7, -2}, {1, -6} } },
	[259] = { .set = { {-4, -10}, {7, -11}, {-7, -7}, {1, -9} } },
	[260] = { .set = { {-5, -8}, {-5, -7}, {-3, -2}, {1, -7} } },
	[261] = { .set = { {-5, -7}, {-8, -6}, {0, -1}, {0, -6} } },
	[262] = { .set = { {-7, -9}, {-3, -13}, {-2, -5}, {1, -7} } },
	[263] = { .set = { {-7, -8}, {-9, -6}, {1, -3}, {-1, -7} } },
	[264] = { .set = { {-6, -7}, {-10, -5}, {3, -3}, {0, -6} } },
	[265] = { .set = { {-8, -8}, {-8, -12}, {7, -7}, {0, -9} } },
	[266] = { .set = { {-1, -6}, {-12, -7}, {10, -7}, {-1, -8} } },
	[267] = { .set = { {-8, -8}, {-8, -12}, {7, -7}, {0, -9} } },
	[268] = { .set = { {-8, -9}, {-4, -13}, {-3, -5}, {0, -7} } },
	[269] = { .set = { {-5, -10}, {6, -11}, {-8, -7}, {0, -9} } },
	[270] = { .set = { {0, -11}, {8, -9}, {-9, -9}, {0, -9} } },
	[271] = { .set = { {5, -10}, {8, -7}, {-7, -11}, {-1, -9} } },
	[272] = { .set = { {7, -9}, {3, -13}, {2, -5}, {-1, -7} } },
	[273] = { .set = { {7, -8}, {7, -12}, {-8, -7}, {-1, -9} } },
	[274] = { .set = { {-1, -7}, {-9, -5}, {8, -5}, {-1, -9} } },
	[275] = { .set = { {-6, -8}, {-8, -6}, {2, -3}, {0, -7} } },
	[276] = { .set = { {-5, -8}, {-5, -7}, {-3, -2}, {1, -7} } },
	[277] = { .set = { {-2, -10}, {1, -9}, {-7, -4}, {1, -6} } },
	[278] = { .set = { {-1, -11}, {6, -6}, {-7, -6}, {-1, -9} } },
	[279] = { .set = { {2, -11}, {6, -4}, {-1, -6}, {-2, -7} } },
	[280] = { .set = { {4, -8}, {4, -7}, {2, -2}, {-2, -7} } },
	[281] = { .set = { {5, -8}, {7, -6}, {-3, -3}, {-1, -7} } },
};

static const ax_anim *const sSableyeAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02477),
	AX_ANIM_PTR(gAxSharedAnim_02542),
	AX_ANIM_PTR(gAxSharedAnim_02551),
	AX_ANIM_PTR(gAxSharedAnim_02559),
	AX_ANIM_PTR(gAxSharedAnim_02499),
	AX_ANIM_PTR(gAxSharedAnim_02519),
	AX_ANIM_PTR(gAxSharedAnim_02526),
	AX_ANIM_PTR(gAxSharedAnim_02535),
};

static const ax_anim *const sSableyeAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01569),
	AX_ANIM_PTR(sSableyeAnims_2_2),
	AX_ANIM_PTR(gAxSharedAnim_01836),
	AX_ANIM_PTR(sSableyeAnims_2_4),
	AX_ANIM_PTR(sSableyeAnims_2_5),
	AX_ANIM_PTR(sSableyeAnims_2_6),
	AX_ANIM_PTR(gAxSharedAnim_01974),
	AX_ANIM_PTR(sSableyeAnims_2_8),
};

static const ax_anim *const sSableyeAnimTable3[] = {
	AX_ANIM_PTR(sSableyeAnims_3_1),
	AX_ANIM_PTR(sSableyeAnims_3_2),
	AX_ANIM_PTR(sSableyeAnims_3_3),
	AX_ANIM_PTR(sSableyeAnims_3_4),
	AX_ANIM_PTR(sSableyeAnims_3_5),
	AX_ANIM_PTR(sSableyeAnims_3_6),
	AX_ANIM_PTR(sSableyeAnims_3_7),
	AX_ANIM_PTR(sSableyeAnims_3_8),
};

static const ax_anim *const sSableyeAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_00251),
	AX_ANIM_PTR(gAxSharedAnim_00311),
	AX_ANIM_PTR(gAxSharedAnim_00298),
	AX_ANIM_PTR(gAxSharedAnim_00289),
	AX_ANIM_PTR(gAxSharedAnim_00288),
	AX_ANIM_PTR(gAxSharedAnim_00277),
	AX_ANIM_PTR(gAxSharedAnim_00264),
	AX_ANIM_PTR(gAxSharedAnim_00255),
};

static const ax_anim *const sSableyeAnimTable5[] = {
	AX_ANIM_PTR(sSableyeAnims_5_1),
	AX_ANIM_PTR(sSableyeAnims_5_2),
	AX_ANIM_PTR(sSableyeAnims_5_3),
	AX_ANIM_PTR(sSableyeAnims_5_4),
	AX_ANIM_PTR(sSableyeAnims_5_5),
	AX_ANIM_PTR(sSableyeAnims_5_6),
	AX_ANIM_PTR(sSableyeAnims_5_7),
	AX_ANIM_PTR(sSableyeAnims_5_8),
};

static const ax_anim *const sSableyeAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
	AX_ANIM_PTR(gAxSharedAnim_02385),
};

static const ax_anim *const sSableyeAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_01235),
	AX_ANIM_PTR(gAxSharedAnim_01246),
	AX_ANIM_PTR(gAxSharedAnim_01259),
	AX_ANIM_PTR(gAxSharedAnim_01271),
	AX_ANIM_PTR(gAxSharedAnim_01289),
	AX_ANIM_PTR(gAxSharedAnim_01306),
	AX_ANIM_PTR(gAxSharedAnim_01317),
	AX_ANIM_PTR(gAxSharedAnim_01329),
};

static const ax_anim *const sSableyeAnimTable8[] = {
	AX_ANIM_PTR(sSableyeAnims_8_1),
	AX_ANIM_PTR(sSableyeAnims_8_2),
	AX_ANIM_PTR(sSableyeAnims_8_3),
	AX_ANIM_PTR(sSableyeAnims_8_4),
	AX_ANIM_PTR(sSableyeAnims_8_5),
	AX_ANIM_PTR(sSableyeAnims_8_6),
	AX_ANIM_PTR(sSableyeAnims_8_7),
	AX_ANIM_PTR(sSableyeAnims_8_8),
};

static const ax_anim *const sSableyeAnimTable9[] = {
	AX_ANIM_PTR(sSableyeAnims_9_1),
	AX_ANIM_PTR(sSableyeAnims_9_2),
	AX_ANIM_PTR(sSableyeAnims_9_3),
	AX_ANIM_PTR(sSableyeAnims_9_4),
	AX_ANIM_PTR(sSableyeAnims_9_5),
	AX_ANIM_PTR(sSableyeAnims_9_6),
	AX_ANIM_PTR(sSableyeAnims_9_7),
	AX_ANIM_PTR(sSableyeAnims_9_8),
};

static const ax_anim *const sSableyeAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01522),
	AX_ANIM_PTR(gAxSharedAnim_01528),
	AX_ANIM_PTR(gAxSharedAnim_01536),
	AX_ANIM_PTR(gAxSharedAnim_01542),
	AX_ANIM_PTR(gAxSharedAnim_01547),
	AX_ANIM_PTR(gAxSharedAnim_01554),
	AX_ANIM_PTR(gAxSharedAnim_01576),
	AX_ANIM_PTR(gAxSharedAnim_01580),
};

static const ax_anim *const sSableyeAnimTable11[] = {
	AX_ANIM_PTR(sSableyeAnims_11_1),
	AX_ANIM_PTR(sSableyeAnims_11_2),
	AX_ANIM_PTR(sSableyeAnims_11_3),
	AX_ANIM_PTR(sSableyeAnims_11_4),
	AX_ANIM_PTR(sSableyeAnims_11_5),
	AX_ANIM_PTR(sSableyeAnims_11_6),
	AX_ANIM_PTR(sSableyeAnims_11_7),
	AX_ANIM_PTR(sSableyeAnims_11_8),
};

static const ax_anim *const sSableyeAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01716),
	AX_ANIM_PTR(gAxSharedAnim_01740),
	AX_ANIM_PTR(gAxSharedAnim_01737),
	AX_ANIM_PTR(gAxSharedAnim_01735),
	AX_ANIM_PTR(gAxSharedAnim_01734),
	AX_ANIM_PTR(gAxSharedAnim_01725),
	AX_ANIM_PTR(gAxSharedAnim_01720),
	AX_ANIM_PTR(gAxSharedAnim_01717),
};

static const ax_anim *const sSableyeAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01741),
	AX_ANIM_PTR(gAxSharedAnim_01768),
	AX_ANIM_PTR(gAxSharedAnim_01766),
	AX_ANIM_PTR(gAxSharedAnim_01753),
	AX_ANIM_PTR(gAxSharedAnim_01749),
	AX_ANIM_PTR(gAxSharedAnim_01747),
	AX_ANIM_PTR(gAxSharedAnim_01746),
	AX_ANIM_PTR(gAxSharedAnim_01744),
};

static const ax_anim *const *const sAxAnimationsSableye[] = {
	sSableyeAnimTable1,
	sSableyeAnimTable2,
	sSableyeAnimTable3,
	sSableyeAnimTable4,
	sSableyeAnimTable5,
	sSableyeAnimTable6,
	sSableyeAnimTable7,
	sSableyeAnimTable8,
	sSableyeAnimTable9,
	sSableyeAnimTable10,
	sSableyeAnimTable11,
	sSableyeAnimTable12,
	sSableyeAnimTable13,
};

static const ax_sprite *const sAxSpritesSableye[] = {
	sSableyeSprites1,
	sSableyeSprites2,
	sSableyeSprites3,
	sSableyeSprites4,
	sSableyeSprites5,
	sSableyeSprites6,
	sSableyeSprites7,
	sSableyeSprites8,
	sSableyeSprites9,
	sSableyeSprites10,
	sSableyeSprites11,
	sSableyeSprites12,
	sSableyeSprites13,
	sSableyeSprites14,
	sSableyeSprites15,
	sSableyeSprites16,
	sSableyeSprites17,
	sSableyeSprites18,
	sSableyeSprites19,
	sSableyeSprites20,
	sSableyeSprites21,
	sSableyeSprites22,
	sSableyeSprites23,
	sSableyeSprites24,
	sSableyeSprites25,
	sSableyeSprites26,
	sSableyeSprites27,
	sSableyeSprites28,
	sSableyeSprites29,
	sSableyeSprites30,
	sSableyeSprites31,
	sSableyeSprites32,
	sSableyeSprites33,
	sSableyeSprites34,
	sSableyeSprites35,
	sSableyeSprites36,
	sSableyeSprites37,
	sSableyeSprites38,
	sSableyeSprites39,
	sSableyeSprites40,
	sSableyeSprites41,
	sSableyeSprites42,
	sSableyeSprites43,
	sSableyeSprites44,
	sSableyeSprites45,
	sSableyeSprites46,
	sSableyeSprites47,
	sSableyeSprites48,
	sSableyeSprites49,
	sSableyeSprites50,
	sSableyeSprites51,
	sSableyeSprites52,
	sSableyeSprites53,
	sSableyeSprites54,
	sSableyeSprites55,
	sSableyeSprites56,
	sSableyeSprites57,
	sSableyeSprites58,
	sSableyeSprites59,
	sSableyeSprites60,
	sSableyeSprites61,
	sSableyeSprites62,
	sSableyeSprites63,
	sSableyeSprites64,
};

static const axmain sAxMainSableye = {
	.poses = sAxPosesSableye,
	.animations = sAxAnimationsSableye,
	.animCount = ARRAY_COUNT(sAxAnimationsSableye),
	.spriteData = sAxSpritesSableye,
	.positions = sAxPositionsSableye,
};
