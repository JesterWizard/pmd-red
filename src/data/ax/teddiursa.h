/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainTeddiursa;
const SiroArchive gAxTeddiursa = {"SIRO", &sAxMainTeddiursa};

static const ax_pose sTeddiursaPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose12[] = {
	AX_POSE(11, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose16[] = {
	AX_POSE(15, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose17[] = {
	AX_POSE(16, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose18[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose19[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose20[] = {
	AX_POSE(19, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose21[] = {
	AX_POSE(20, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose22[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose23[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose24[] = {
	AX_POSE(23, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose28[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose32[] = {
	AX_POSE(25, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose36[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose40[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose44[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose48[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose52[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose56[] = {
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose60[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose61[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose62[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose63[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose67[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(25, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose68[] = {
	AX_POSE(25, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose69[] = {
	AX_POSE(35, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose70[] = {
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose74[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose76[] = {
	AX_POSE(38, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose77[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose79[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose80[] = {
	AX_POSE(11, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose81[] = {
	AX_POSE(40, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose83[] = {
	AX_POSE(41, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose84[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose88[] = {
	AX_POSE(42, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose89[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose90[] = {
	AX_POSE(42, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose91[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose93[] = {
	AX_POSE(16, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose94[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose95[] = {
	AX_POSE(40, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(44, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose96[] = {
	AX_POSE(44, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose97[] = {
	AX_POSE(41, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose98[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose102[] = {
	AX_POSE(37, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose103[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose104[] = {
	AX_POSE(38, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(39, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose105[] = {
	AX_POSE(39, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose109[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose110[] = {
	AX_POSE(31, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose111[] = {
	AX_POSE(35, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(45, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose112[] = {
	AX_POSE(45, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose113[] = {
	AX_POSE(46, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose114[] = {
	AX_POSE(47, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose115[] = {
	AX_POSE(48, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose116[] = {
	AX_POSE(49, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose117[] = {
	AX_POSE(50, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose118[] = {
	AX_POSE(49, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose119[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose120[] = {
	AX_POSE(52, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose122[] = {
	AX_POSE(53, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose125[] = {
	AX_POSE(54, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose128[] = {
	AX_POSE(55, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose131[] = {
	AX_POSE(56, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose134[] = {
	AX_POSE(57, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose137[] = {
	AX_POSE(56, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose140[] = {
	AX_POSE(58, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose143[] = {
	AX_POSE(59, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose145[] = {
	AX_POSE(60, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose146[] = {
	AX_POSE(61, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose147[] = {
	AX_POSE(62, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose148[] = {
	AX_POSE(63, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose149[] = {
	AX_POSE(64, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose150[] = {
	AX_POSE(65, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose151[] = {
	AX_POSE(66, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose152[] = {
	AX_POSE(65, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose153[] = {
	AX_POSE(67, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose154[] = {
	AX_POSE(68, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose179[] = {
	AX_POSE(1, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose180[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose181[] = {
	AX_POSE(19, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose182[] = {
	AX_POSE(16, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose183[] = {
	AX_POSE(13, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose184[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose185[] = {
	AX_POSE(7, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose186[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose196[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose197[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose199[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose200[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose202[] = {
	AX_POSE(7, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose203[] = {
	AX_POSE(8, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose205[] = {
	AX_POSE(11, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose206[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose208[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose209[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose212[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose214[] = {
	AX_POSE(20, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose215[] = {
	AX_POSE(19, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose217[] = {
	AX_POSE(23, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTeddiursaPose218[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const u8 sTeddiursaAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_2_1.lz");
static const u8 sTeddiursaAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_2_2.lz");
static const u8 sTeddiursaAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_2_3.lz");
static const u8 sTeddiursaAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_2_4.lz");
static const u8 sTeddiursaAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_2_5.lz");
static const u8 sTeddiursaAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_2_6.lz");
static const u8 sTeddiursaAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_2_7.lz");
static const u8 sTeddiursaAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_2_8.lz");
static const u8 sTeddiursaAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_3_1.lz");
static const u8 sTeddiursaAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_3_2.lz");
static const u8 sTeddiursaAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_3_3.lz");
static const u8 sTeddiursaAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_3_4.lz");
static const u8 sTeddiursaAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_3_5.lz");
static const u8 sTeddiursaAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_3_6.lz");
static const u8 sTeddiursaAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_3_7.lz");
static const u8 sTeddiursaAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_3_8.lz");
static const u8 sTeddiursaAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_5_1.lz");
static const u8 sTeddiursaAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_5_2.lz");
static const u8 sTeddiursaAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_5_3.lz");
static const u8 sTeddiursaAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_5_4.lz");
static const u8 sTeddiursaAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_5_5.lz");
static const u8 sTeddiursaAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_5_6.lz");
static const u8 sTeddiursaAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_5_7.lz");
static const u8 sTeddiursaAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_5_8.lz");
static const u8 sTeddiursaAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_8_1.lz");
static const u8 sTeddiursaAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_8_2.lz");
static const u8 sTeddiursaAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_8_3.lz");
static const u8 sTeddiursaAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_8_4.lz");
static const u8 sTeddiursaAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_8_5.lz");
static const u8 sTeddiursaAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_8_6.lz");
static const u8 sTeddiursaAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_8_7.lz");
static const u8 sTeddiursaAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_8_8.lz");
static const u8 sTeddiursaAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_9_1.lz");
static const u8 sTeddiursaAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_9_2.lz");
static const u8 sTeddiursaAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_9_3.lz");
static const u8 sTeddiursaAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_9_4.lz");
static const u8 sTeddiursaAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_9_5.lz");
static const u8 sTeddiursaAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_9_6.lz");
static const u8 sTeddiursaAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_9_7.lz");
static const u8 sTeddiursaAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/teddiursa/sTeddiursaAnims_9_8.lz");

static const u8 sTeddiursaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_1.4bpp.lz");
static const ax_sprite sTeddiursaSprites1[] = {
	{sTeddiursaGfx1, ARRAY_COUNT(sTeddiursaGfx1)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_2.4bpp.lz");
static const ax_sprite sTeddiursaSprites2[] = {
	{sTeddiursaGfx2, ARRAY_COUNT(sTeddiursaGfx2)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites3[] = {
	{sTeddiursaGfx3, ARRAY_COUNT(sTeddiursaGfx3)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_4.4bpp.lz");
static const ax_sprite sTeddiursaSprites4[] = {
	{sTeddiursaGfx4, ARRAY_COUNT(sTeddiursaGfx4)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_5.4bpp.lz");
static const ax_sprite sTeddiursaSprites5[] = {
	{sTeddiursaGfx5, ARRAY_COUNT(sTeddiursaGfx5)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_6.4bpp.lz");
static const ax_sprite sTeddiursaSprites6[] = {
	{sTeddiursaGfx6, ARRAY_COUNT(sTeddiursaGfx6)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_7.4bpp.lz");
static const ax_sprite sTeddiursaSprites7[] = {
	{sTeddiursaGfx7, ARRAY_COUNT(sTeddiursaGfx7)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_8.4bpp.lz");
static const ax_sprite sTeddiursaSprites8[] = {
	{sTeddiursaGfx8, ARRAY_COUNT(sTeddiursaGfx8)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_9.4bpp.lz");
static const ax_sprite sTeddiursaSprites9[] = {
	{sTeddiursaGfx9, ARRAY_COUNT(sTeddiursaGfx9)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_10.4bpp.lz");
static const ax_sprite sTeddiursaSprites10[] = {
	{sTeddiursaGfx10, ARRAY_COUNT(sTeddiursaGfx10)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_11.4bpp.lz");
static const ax_sprite sTeddiursaSprites11[] = {
	{sTeddiursaGfx11, ARRAY_COUNT(sTeddiursaGfx11)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_12.4bpp.lz");
static const ax_sprite sTeddiursaSprites12[] = {
	{sTeddiursaGfx12, ARRAY_COUNT(sTeddiursaGfx12)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_13.4bpp.lz");
static const ax_sprite sTeddiursaSprites13[] = {
	{sTeddiursaGfx13, ARRAY_COUNT(sTeddiursaGfx13)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_14.4bpp.lz");
static const ax_sprite sTeddiursaSprites14[] = {
	{sTeddiursaGfx14, ARRAY_COUNT(sTeddiursaGfx14)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_15.4bpp.lz");
static const ax_sprite sTeddiursaSprites15[] = {
	{sTeddiursaGfx15, ARRAY_COUNT(sTeddiursaGfx15)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_16.4bpp.lz");
static const ax_sprite sTeddiursaSprites16[] = {
	{sTeddiursaGfx16, ARRAY_COUNT(sTeddiursaGfx16)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_17.4bpp.lz");
static const ax_sprite sTeddiursaSprites17[] = {
	{sTeddiursaGfx17, ARRAY_COUNT(sTeddiursaGfx17)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_18.4bpp.lz");
static const ax_sprite sTeddiursaSprites18[] = {
	{sTeddiursaGfx18, ARRAY_COUNT(sTeddiursaGfx18)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_19.4bpp.lz");
static const ax_sprite sTeddiursaSprites19[] = {
	{sTeddiursaGfx19, ARRAY_COUNT(sTeddiursaGfx19)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_20.4bpp.lz");
static const ax_sprite sTeddiursaSprites20[] = {
	{sTeddiursaGfx20, ARRAY_COUNT(sTeddiursaGfx20)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_21.4bpp.lz");
static const ax_sprite sTeddiursaSprites21[] = {
	{sTeddiursaGfx21, ARRAY_COUNT(sTeddiursaGfx21)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_22.4bpp.lz");
static const ax_sprite sTeddiursaSprites22[] = {
	{sTeddiursaGfx22, ARRAY_COUNT(sTeddiursaGfx22)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_23.4bpp.lz");
static const ax_sprite sTeddiursaSprites23[] = {
	{sTeddiursaGfx23, ARRAY_COUNT(sTeddiursaGfx23)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_24.4bpp.lz");
static const ax_sprite sTeddiursaSprites24[] = {
	{sTeddiursaGfx24, ARRAY_COUNT(sTeddiursaGfx24)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_25.4bpp.lz");
static const u8 sTeddiursaGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_25_1.4bpp.lz");
static const u8 sTeddiursaGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_25_2.4bpp.lz");
static const u8 sTeddiursaGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_25_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites25[] = {
	{NULL, 64}, 
	{sTeddiursaGfx25, ARRAY_COUNT(sTeddiursaGfx25)}, 
	{NULL, 32}, 
	{sTeddiursaGfx25_1, ARRAY_COUNT(sTeddiursaGfx25_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx25_2, ARRAY_COUNT(sTeddiursaGfx25_2)}, 
	{NULL, 32}, 
	{sTeddiursaGfx25_3, ARRAY_COUNT(sTeddiursaGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_26.4bpp.lz");
static const u8 sTeddiursaGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_26_1.4bpp.lz");
static const u8 sTeddiursaGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_26_2.4bpp.lz");
static const u8 sTeddiursaGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_26_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites26[] = {
	{NULL, 32}, 
	{sTeddiursaGfx26, ARRAY_COUNT(sTeddiursaGfx26)}, 
	{NULL, 96}, 
	{sTeddiursaGfx26_1, ARRAY_COUNT(sTeddiursaGfx26_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx26_2, ARRAY_COUNT(sTeddiursaGfx26_2)}, 
	{NULL, 32}, 
	{sTeddiursaGfx26_3, ARRAY_COUNT(sTeddiursaGfx26_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_27.4bpp.lz");
static const u8 sTeddiursaGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_27_1.4bpp.lz");
static const u8 sTeddiursaGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_27_2.4bpp.lz");
static const u8 sTeddiursaGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_27_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites27[] = {
	{NULL, 64}, 
	{sTeddiursaGfx27, ARRAY_COUNT(sTeddiursaGfx27)}, 
	{NULL, 64}, 
	{sTeddiursaGfx27_1, ARRAY_COUNT(sTeddiursaGfx27_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx27_2, ARRAY_COUNT(sTeddiursaGfx27_2)}, 
	{NULL, 32}, 
	{sTeddiursaGfx27_3, ARRAY_COUNT(sTeddiursaGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_28.4bpp.lz");
static const u8 sTeddiursaGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_28_1.4bpp.lz");
static const u8 sTeddiursaGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_28_2.4bpp.lz");
static const u8 sTeddiursaGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_28_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites28[] = {
	{NULL, 32}, 
	{sTeddiursaGfx28, ARRAY_COUNT(sTeddiursaGfx28)}, 
	{NULL, 64}, 
	{sTeddiursaGfx28_1, ARRAY_COUNT(sTeddiursaGfx28_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx28_2, ARRAY_COUNT(sTeddiursaGfx28_2)}, 
	{NULL, 32}, 
	{sTeddiursaGfx28_3, ARRAY_COUNT(sTeddiursaGfx28_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_29.4bpp.lz");
static const u8 sTeddiursaGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_29_1.4bpp.lz");
static const u8 sTeddiursaGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_29_2.4bpp.lz");
static const ax_sprite sTeddiursaSprites29[] = {
	{NULL, 128}, 
	{sTeddiursaGfx29, ARRAY_COUNT(sTeddiursaGfx29)}, 
	{NULL, 64}, 
	{sTeddiursaGfx29_1, ARRAY_COUNT(sTeddiursaGfx29_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx29_2, ARRAY_COUNT(sTeddiursaGfx29_2)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_30.4bpp.lz");
static const u8 sTeddiursaGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_30_1.4bpp.lz");
static const u8 sTeddiursaGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_30_2.4bpp.lz");
static const ax_sprite sTeddiursaSprites30[] = {
	{NULL, 64}, 
	{sTeddiursaGfx30, ARRAY_COUNT(sTeddiursaGfx30)}, 
	{NULL, 32}, 
	{sTeddiursaGfx30_1, ARRAY_COUNT(sTeddiursaGfx30_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx30_2, ARRAY_COUNT(sTeddiursaGfx30_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_31.4bpp.lz");
static const u8 sTeddiursaGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_31_1.4bpp.lz");
static const u8 sTeddiursaGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_31_2.4bpp.lz");
static const u8 sTeddiursaGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_31_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites31[] = {
	{NULL, 32}, 
	{sTeddiursaGfx31, ARRAY_COUNT(sTeddiursaGfx31)}, 
	{NULL, 64}, 
	{sTeddiursaGfx31_1, ARRAY_COUNT(sTeddiursaGfx31_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx31_2, ARRAY_COUNT(sTeddiursaGfx31_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx31_3, ARRAY_COUNT(sTeddiursaGfx31_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_32.4bpp.lz");
static const u8 sTeddiursaGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_32_1.4bpp.lz");
static const u8 sTeddiursaGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_32_2.4bpp.lz");
static const u8 sTeddiursaGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_32_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites32[] = {
	{NULL, 64}, 
	{sTeddiursaGfx32, ARRAY_COUNT(sTeddiursaGfx32)}, 
	{NULL, 32}, 
	{sTeddiursaGfx32_1, ARRAY_COUNT(sTeddiursaGfx32_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx32_2, ARRAY_COUNT(sTeddiursaGfx32_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx32_3, ARRAY_COUNT(sTeddiursaGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_33.4bpp.lz");
static const u8 sTeddiursaGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_33_1.4bpp.lz");
static const u8 sTeddiursaGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_33_2.4bpp.lz");
static const ax_sprite sTeddiursaSprites33[] = {
	{NULL, 224}, 
	{sTeddiursaGfx33, ARRAY_COUNT(sTeddiursaGfx33)}, 
	{NULL, 32}, 
	{sTeddiursaGfx33_1, ARRAY_COUNT(sTeddiursaGfx33_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx33_2, ARRAY_COUNT(sTeddiursaGfx33_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_34.4bpp.lz");
static const u8 sTeddiursaGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_34_1.4bpp.lz");
static const u8 sTeddiursaGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_34_2.4bpp.lz");
static const ax_sprite sTeddiursaSprites34[] = {
	{NULL, 32}, 
	{sTeddiursaGfx34, ARRAY_COUNT(sTeddiursaGfx34)}, 
	{NULL, 96}, 
	{sTeddiursaGfx34_1, ARRAY_COUNT(sTeddiursaGfx34_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx34_2, ARRAY_COUNT(sTeddiursaGfx34_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_35.4bpp.lz");
static const u8 sTeddiursaGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_35_1.4bpp.lz");
static const u8 sTeddiursaGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_35_2.4bpp.lz");
static const u8 sTeddiursaGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_35_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites35[] = {
	{NULL, 32}, 
	{sTeddiursaGfx35, ARRAY_COUNT(sTeddiursaGfx35)}, 
	{NULL, 64}, 
	{sTeddiursaGfx35_1, ARRAY_COUNT(sTeddiursaGfx35_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx35_2, ARRAY_COUNT(sTeddiursaGfx35_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx35_3, ARRAY_COUNT(sTeddiursaGfx35_3)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_36.4bpp.lz");
static const u8 sTeddiursaGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_36_1.4bpp.lz");
static const u8 sTeddiursaGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_36_2.4bpp.lz");
static const ax_sprite sTeddiursaSprites36[] = {
	{NULL, 224}, 
	{sTeddiursaGfx36, ARRAY_COUNT(sTeddiursaGfx36)}, 
	{NULL, 32}, 
	{sTeddiursaGfx36_1, ARRAY_COUNT(sTeddiursaGfx36_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx36_2, ARRAY_COUNT(sTeddiursaGfx36_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_37.4bpp.lz");
static const u8 sTeddiursaGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_37_1.4bpp.lz");
static const u8 sTeddiursaGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_37_2.4bpp.lz");
static const u8 sTeddiursaGfx37_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_37_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites37[] = {
	{NULL, 32}, 
	{sTeddiursaGfx37, ARRAY_COUNT(sTeddiursaGfx37)}, 
	{NULL, 64}, 
	{sTeddiursaGfx37_1, ARRAY_COUNT(sTeddiursaGfx37_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx37_2, ARRAY_COUNT(sTeddiursaGfx37_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx37_3, ARRAY_COUNT(sTeddiursaGfx37_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_38.4bpp.lz");
static const u8 sTeddiursaGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_38_1.4bpp.lz");
static const ax_sprite sTeddiursaSprites38[] = {
	{NULL, 128}, 
	{sTeddiursaGfx38, ARRAY_COUNT(sTeddiursaGfx38)}, 
	{NULL, 32}, 
	{sTeddiursaGfx38_1, ARRAY_COUNT(sTeddiursaGfx38_1)}, 
	{NULL, 224}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_39.4bpp.lz");
static const ax_sprite sTeddiursaSprites39[] = {
	{sTeddiursaGfx39, ARRAY_COUNT(sTeddiursaGfx39)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_40.4bpp.lz");
static const u8 sTeddiursaGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_40_1.4bpp.lz");
static const u8 sTeddiursaGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_40_2.4bpp.lz");
static const u8 sTeddiursaGfx40_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_40_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites40[] = {
	{NULL, 64}, 
	{sTeddiursaGfx40, ARRAY_COUNT(sTeddiursaGfx40)}, 
	{NULL, 64}, 
	{sTeddiursaGfx40_1, ARRAY_COUNT(sTeddiursaGfx40_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx40_2, ARRAY_COUNT(sTeddiursaGfx40_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx40_3, ARRAY_COUNT(sTeddiursaGfx40_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_41.4bpp.lz");
static const u8 sTeddiursaGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_41_1.4bpp.lz");
static const u8 sTeddiursaGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_41_2.4bpp.lz");
static const ax_sprite sTeddiursaSprites41[] = {
	{sTeddiursaGfx41, ARRAY_COUNT(sTeddiursaGfx41)}, 
	{NULL, 64}, 
	{sTeddiursaGfx41_1, ARRAY_COUNT(sTeddiursaGfx41_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx41_2, ARRAY_COUNT(sTeddiursaGfx41_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_42.4bpp.lz");
static const u8 sTeddiursaGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_42_1.4bpp.lz");
static const ax_sprite sTeddiursaSprites42[] = {
	{NULL, 256}, 
	{sTeddiursaGfx42, ARRAY_COUNT(sTeddiursaGfx42)}, 
	{NULL, 64}, 
	{sTeddiursaGfx42_1, ARRAY_COUNT(sTeddiursaGfx42_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_43.4bpp.lz");
static const ax_sprite sTeddiursaSprites43[] = {
	{NULL, 64}, 
	{sTeddiursaGfx43, ARRAY_COUNT(sTeddiursaGfx43)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_44.4bpp.lz");
static const u8 sTeddiursaGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_44_1.4bpp.lz");
static const ax_sprite sTeddiursaSprites44[] = {
	{NULL, 160}, 
	{sTeddiursaGfx44, ARRAY_COUNT(sTeddiursaGfx44)}, 
	{NULL, 32}, 
	{sTeddiursaGfx44_1, ARRAY_COUNT(sTeddiursaGfx44_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_45.4bpp.lz");
static const u8 sTeddiursaGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_45_1.4bpp.lz");
static const u8 sTeddiursaGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_45_2.4bpp.lz");
static const u8 sTeddiursaGfx45_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_45_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites45[] = {
	{NULL, 32}, 
	{sTeddiursaGfx45, ARRAY_COUNT(sTeddiursaGfx45)}, 
	{NULL, 32}, 
	{sTeddiursaGfx45_1, ARRAY_COUNT(sTeddiursaGfx45_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx45_2, ARRAY_COUNT(sTeddiursaGfx45_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx45_3, ARRAY_COUNT(sTeddiursaGfx45_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_46.4bpp.lz");
static const u8 sTeddiursaGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_46_1.4bpp.lz");
static const u8 sTeddiursaGfx46_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_46_2.4bpp.lz");
static const u8 sTeddiursaGfx46_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_46_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites46[] = {
	{NULL, 32}, 
	{sTeddiursaGfx46, ARRAY_COUNT(sTeddiursaGfx46)}, 
	{NULL, 64}, 
	{sTeddiursaGfx46_1, ARRAY_COUNT(sTeddiursaGfx46_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx46_2, ARRAY_COUNT(sTeddiursaGfx46_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx46_3, ARRAY_COUNT(sTeddiursaGfx46_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_47.4bpp.lz");
static const u8 sTeddiursaGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_47_1.4bpp.lz");
static const u8 sTeddiursaGfx47_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_47_2.4bpp.lz");
static const ax_sprite sTeddiursaSprites47[] = {
	{NULL, 128}, 
	{sTeddiursaGfx47, ARRAY_COUNT(sTeddiursaGfx47)}, 
	{NULL, 64}, 
	{sTeddiursaGfx47_1, ARRAY_COUNT(sTeddiursaGfx47_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx47_2, ARRAY_COUNT(sTeddiursaGfx47_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_48.4bpp.lz");
static const u8 sTeddiursaGfx48_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_48_1.4bpp.lz");
static const u8 sTeddiursaGfx48_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_48_2.4bpp.lz");
static const u8 sTeddiursaGfx48_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_48_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites48[] = {
	{NULL, 32}, 
	{sTeddiursaGfx48, ARRAY_COUNT(sTeddiursaGfx48)}, 
	{NULL, 96}, 
	{sTeddiursaGfx48_1, ARRAY_COUNT(sTeddiursaGfx48_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx48_2, ARRAY_COUNT(sTeddiursaGfx48_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx48_3, ARRAY_COUNT(sTeddiursaGfx48_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_49.4bpp.lz");
static const u8 sTeddiursaGfx49_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_49_1.4bpp.lz");
static const u8 sTeddiursaGfx49_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_49_2.4bpp.lz");
static const u8 sTeddiursaGfx49_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_49_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites49[] = {
	{NULL, 32}, 
	{sTeddiursaGfx49, ARRAY_COUNT(sTeddiursaGfx49)}, 
	{NULL, 64}, 
	{sTeddiursaGfx49_1, ARRAY_COUNT(sTeddiursaGfx49_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx49_2, ARRAY_COUNT(sTeddiursaGfx49_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx49_3, ARRAY_COUNT(sTeddiursaGfx49_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_50.4bpp.lz");
static const u8 sTeddiursaGfx50_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_50_1.4bpp.lz");
static const u8 sTeddiursaGfx50_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_50_2.4bpp.lz");
static const u8 sTeddiursaGfx50_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_50_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites50[] = {
	{NULL, 64}, 
	{sTeddiursaGfx50, ARRAY_COUNT(sTeddiursaGfx50)}, 
	{NULL, 64}, 
	{sTeddiursaGfx50_1, ARRAY_COUNT(sTeddiursaGfx50_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx50_2, ARRAY_COUNT(sTeddiursaGfx50_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx50_3, ARRAY_COUNT(sTeddiursaGfx50_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_51.4bpp.lz");
static const u8 sTeddiursaGfx51_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_51_1.4bpp.lz");
static const u8 sTeddiursaGfx51_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_51_2.4bpp.lz");
static const ax_sprite sTeddiursaSprites51[] = {
	{NULL, 128}, 
	{sTeddiursaGfx51, ARRAY_COUNT(sTeddiursaGfx51)}, 
	{NULL, 64}, 
	{sTeddiursaGfx51_1, ARRAY_COUNT(sTeddiursaGfx51_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx51_2, ARRAY_COUNT(sTeddiursaGfx51_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_52.4bpp.lz");
static const u8 sTeddiursaGfx52_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_52_1.4bpp.lz");
static const u8 sTeddiursaGfx52_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_52_2.4bpp.lz");
static const u8 sTeddiursaGfx52_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_52_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites52[] = {
	{NULL, 32}, 
	{sTeddiursaGfx52, ARRAY_COUNT(sTeddiursaGfx52)}, 
	{NULL, 64}, 
	{sTeddiursaGfx52_1, ARRAY_COUNT(sTeddiursaGfx52_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx52_2, ARRAY_COUNT(sTeddiursaGfx52_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx52_3, ARRAY_COUNT(sTeddiursaGfx52_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_53.4bpp.lz");
static const u8 sTeddiursaGfx53_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_53_1.4bpp.lz");
static const u8 sTeddiursaGfx53_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_53_2.4bpp.lz");
static const u8 sTeddiursaGfx53_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_53_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites53[] = {
	{NULL, 64}, 
	{sTeddiursaGfx53, ARRAY_COUNT(sTeddiursaGfx53)}, 
	{NULL, 64}, 
	{sTeddiursaGfx53_1, ARRAY_COUNT(sTeddiursaGfx53_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx53_2, ARRAY_COUNT(sTeddiursaGfx53_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx53_3, ARRAY_COUNT(sTeddiursaGfx53_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_54.4bpp.lz");
static const u8 sTeddiursaGfx54_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_54_1.4bpp.lz");
static const u8 sTeddiursaGfx54_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_54_2.4bpp.lz");
static const ax_sprite sTeddiursaSprites54[] = {
	{NULL, 128}, 
	{sTeddiursaGfx54, ARRAY_COUNT(sTeddiursaGfx54)}, 
	{NULL, 32}, 
	{sTeddiursaGfx54_1, ARRAY_COUNT(sTeddiursaGfx54_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx54_2, ARRAY_COUNT(sTeddiursaGfx54_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_55.4bpp.lz");
static const u8 sTeddiursaGfx55_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_55_1.4bpp.lz");
static const u8 sTeddiursaGfx55_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_55_2.4bpp.lz");
static const u8 sTeddiursaGfx55_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_55_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites55[] = {
	{NULL, 64}, 
	{sTeddiursaGfx55, ARRAY_COUNT(sTeddiursaGfx55)}, 
	{NULL, 32}, 
	{sTeddiursaGfx55_1, ARRAY_COUNT(sTeddiursaGfx55_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx55_2, ARRAY_COUNT(sTeddiursaGfx55_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx55_3, ARRAY_COUNT(sTeddiursaGfx55_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_56.4bpp.lz");
static const u8 sTeddiursaGfx56_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_56_1.4bpp.lz");
static const u8 sTeddiursaGfx56_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_56_2.4bpp.lz");
static const u8 sTeddiursaGfx56_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_56_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites56[] = {
	{NULL, 32}, 
	{sTeddiursaGfx56, ARRAY_COUNT(sTeddiursaGfx56)}, 
	{NULL, 64}, 
	{sTeddiursaGfx56_1, ARRAY_COUNT(sTeddiursaGfx56_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx56_2, ARRAY_COUNT(sTeddiursaGfx56_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx56_3, ARRAY_COUNT(sTeddiursaGfx56_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_57.4bpp.lz");
static const u8 sTeddiursaGfx57_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_57_1.4bpp.lz");
static const u8 sTeddiursaGfx57_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_57_2.4bpp.lz");
static const u8 sTeddiursaGfx57_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_57_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites57[] = {
	{NULL, 64}, 
	{sTeddiursaGfx57, ARRAY_COUNT(sTeddiursaGfx57)}, 
	{NULL, 32}, 
	{sTeddiursaGfx57_1, ARRAY_COUNT(sTeddiursaGfx57_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx57_2, ARRAY_COUNT(sTeddiursaGfx57_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx57_3, ARRAY_COUNT(sTeddiursaGfx57_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_58.4bpp.lz");
static const u8 sTeddiursaGfx58_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_58_1.4bpp.lz");
static const u8 sTeddiursaGfx58_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_58_2.4bpp.lz");
static const ax_sprite sTeddiursaSprites58[] = {
	{NULL, 128}, 
	{sTeddiursaGfx58, ARRAY_COUNT(sTeddiursaGfx58)}, 
	{NULL, 32}, 
	{sTeddiursaGfx58_1, ARRAY_COUNT(sTeddiursaGfx58_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx58_2, ARRAY_COUNT(sTeddiursaGfx58_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_59.4bpp.lz");
static const u8 sTeddiursaGfx59_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_59_1.4bpp.lz");
static const u8 sTeddiursaGfx59_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_59_2.4bpp.lz");
static const u8 sTeddiursaGfx59_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_59_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites59[] = {
	{NULL, 32}, 
	{sTeddiursaGfx59, ARRAY_COUNT(sTeddiursaGfx59)}, 
	{NULL, 64}, 
	{sTeddiursaGfx59_1, ARRAY_COUNT(sTeddiursaGfx59_1)}, 
	{NULL, 64}, 
	{sTeddiursaGfx59_2, ARRAY_COUNT(sTeddiursaGfx59_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx59_3, ARRAY_COUNT(sTeddiursaGfx59_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_60.4bpp.lz");
static const u8 sTeddiursaGfx60_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_60_1.4bpp.lz");
static const u8 sTeddiursaGfx60_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_60_2.4bpp.lz");
static const u8 sTeddiursaGfx60_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_60_3.4bpp.lz");
static const ax_sprite sTeddiursaSprites60[] = {
	{NULL, 32}, 
	{sTeddiursaGfx60, ARRAY_COUNT(sTeddiursaGfx60)}, 
	{NULL, 96}, 
	{sTeddiursaGfx60_1, ARRAY_COUNT(sTeddiursaGfx60_1)}, 
	{NULL, 32}, 
	{sTeddiursaGfx60_2, ARRAY_COUNT(sTeddiursaGfx60_2)}, 
	{NULL, 64}, 
	{sTeddiursaGfx60_3, ARRAY_COUNT(sTeddiursaGfx60_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_61.4bpp.lz");
static const ax_sprite sTeddiursaSprites61[] = {
	{sTeddiursaGfx61, ARRAY_COUNT(sTeddiursaGfx61)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_62.4bpp.lz");
static const ax_sprite sTeddiursaSprites62[] = {
	{sTeddiursaGfx62, ARRAY_COUNT(sTeddiursaGfx62)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_63.4bpp.lz");
static const ax_sprite sTeddiursaSprites63[] = {
	{sTeddiursaGfx63, ARRAY_COUNT(sTeddiursaGfx63)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_64.4bpp.lz");
static const ax_sprite sTeddiursaSprites64[] = {
	{sTeddiursaGfx64, ARRAY_COUNT(sTeddiursaGfx64)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_65.4bpp.lz");
static const ax_sprite sTeddiursaSprites65[] = {
	{sTeddiursaGfx65, ARRAY_COUNT(sTeddiursaGfx65)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_66.4bpp.lz");
static const ax_sprite sTeddiursaSprites66[] = {
	{sTeddiursaGfx66, ARRAY_COUNT(sTeddiursaGfx66)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_67.4bpp.lz");
static const ax_sprite sTeddiursaSprites67[] = {
	{sTeddiursaGfx67, ARRAY_COUNT(sTeddiursaGfx67)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_68.4bpp.lz");
static const ax_sprite sTeddiursaSprites68[] = {
	{sTeddiursaGfx68, ARRAY_COUNT(sTeddiursaGfx68)}, 
	{NULL, 0}
};
static const u8 sTeddiursaGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/teddiursa/sprite_69.4bpp.lz");
static const ax_sprite sTeddiursaSprites69[] = {
	{sTeddiursaGfx69, ARRAY_COUNT(sTeddiursaGfx69)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesTeddiursa[] = {
	sTeddiursaPose1,
	sTeddiursaPose2,
	sTeddiursaPose3,
	sTeddiursaPose4,
	sTeddiursaPose5,
	sTeddiursaPose6,
	sTeddiursaPose7,
	sTeddiursaPose8,
	sTeddiursaPose9,
	sTeddiursaPose10,
	sTeddiursaPose11,
	sTeddiursaPose12,
	sTeddiursaPose13,
	sTeddiursaPose14,
	sTeddiursaPose15,
	sTeddiursaPose16,
	sTeddiursaPose17,
	sTeddiursaPose18,
	sTeddiursaPose19,
	sTeddiursaPose20,
	sTeddiursaPose21,
	sTeddiursaPose22,
	sTeddiursaPose23,
	sTeddiursaPose24,
	sTeddiursaPose1,
	sTeddiursaPose2,
	sTeddiursaPose3,
	sTeddiursaPose28,
	sTeddiursaPose4,
	sTeddiursaPose5,
	sTeddiursaPose6,
	sTeddiursaPose32,
	sTeddiursaPose7,
	sTeddiursaPose8,
	sTeddiursaPose9,
	sTeddiursaPose36,
	sTeddiursaPose10,
	sTeddiursaPose11,
	sTeddiursaPose12,
	sTeddiursaPose40,
	sTeddiursaPose13,
	sTeddiursaPose14,
	sTeddiursaPose15,
	sTeddiursaPose44,
	sTeddiursaPose16,
	sTeddiursaPose17,
	sTeddiursaPose18,
	sTeddiursaPose48,
	sTeddiursaPose19,
	sTeddiursaPose20,
	sTeddiursaPose21,
	sTeddiursaPose52,
	sTeddiursaPose22,
	sTeddiursaPose23,
	sTeddiursaPose24,
	sTeddiursaPose56,
	sTeddiursaPose1,
	sTeddiursaPose2,
	sTeddiursaPose3,
	sTeddiursaPose60,
	sTeddiursaPose61,
	sTeddiursaPose62,
	sTeddiursaPose63,
	sTeddiursaPose4,
	sTeddiursaPose5,
	sTeddiursaPose6,
	sTeddiursaPose67,
	sTeddiursaPose68,
	sTeddiursaPose69,
	sTeddiursaPose70,
	sTeddiursaPose7,
	sTeddiursaPose8,
	sTeddiursaPose9,
	sTeddiursaPose74,
	sTeddiursaPose36,
	sTeddiursaPose76,
	sTeddiursaPose77,
	sTeddiursaPose10,
	sTeddiursaPose79,
	sTeddiursaPose80,
	sTeddiursaPose81,
	sTeddiursaPose40,
	sTeddiursaPose83,
	sTeddiursaPose84,
	sTeddiursaPose13,
	sTeddiursaPose14,
	sTeddiursaPose15,
	sTeddiursaPose88,
	sTeddiursaPose89,
	sTeddiursaPose90,
	sTeddiursaPose91,
	sTeddiursaPose16,
	sTeddiursaPose93,
	sTeddiursaPose94,
	sTeddiursaPose95,
	sTeddiursaPose96,
	sTeddiursaPose97,
	sTeddiursaPose98,
	sTeddiursaPose19,
	sTeddiursaPose20,
	sTeddiursaPose21,
	sTeddiursaPose102,
	sTeddiursaPose103,
	sTeddiursaPose104,
	sTeddiursaPose105,
	sTeddiursaPose22,
	sTeddiursaPose23,
	sTeddiursaPose24,
	sTeddiursaPose109,
	sTeddiursaPose110,
	sTeddiursaPose111,
	sTeddiursaPose112,
	sTeddiursaPose113,
	sTeddiursaPose114,
	sTeddiursaPose115,
	sTeddiursaPose116,
	sTeddiursaPose117,
	sTeddiursaPose118,
	sTeddiursaPose119,
	sTeddiursaPose120,
	sTeddiursaPose1,
	sTeddiursaPose122,
	sTeddiursaPose113,
	sTeddiursaPose4,
	sTeddiursaPose125,
	sTeddiursaPose120,
	sTeddiursaPose7,
	sTeddiursaPose128,
	sTeddiursaPose119,
	sTeddiursaPose10,
	sTeddiursaPose131,
	sTeddiursaPose118,
	sTeddiursaPose13,
	sTeddiursaPose134,
	sTeddiursaPose117,
	sTeddiursaPose16,
	sTeddiursaPose137,
	sTeddiursaPose116,
	sTeddiursaPose19,
	sTeddiursaPose140,
	sTeddiursaPose115,
	sTeddiursaPose22,
	sTeddiursaPose143,
	sTeddiursaPose114,
	sTeddiursaPose145,
	sTeddiursaPose146,
	sTeddiursaPose147,
	sTeddiursaPose148,
	sTeddiursaPose149,
	sTeddiursaPose150,
	sTeddiursaPose151,
	sTeddiursaPose152,
	sTeddiursaPose153,
	sTeddiursaPose154,
	sTeddiursaPose1,
	sTeddiursaPose122,
	sTeddiursaPose113,
	sTeddiursaPose4,
	sTeddiursaPose125,
	sTeddiursaPose120,
	sTeddiursaPose7,
	sTeddiursaPose128,
	sTeddiursaPose119,
	sTeddiursaPose10,
	sTeddiursaPose131,
	sTeddiursaPose118,
	sTeddiursaPose13,
	sTeddiursaPose134,
	sTeddiursaPose117,
	sTeddiursaPose16,
	sTeddiursaPose137,
	sTeddiursaPose116,
	sTeddiursaPose19,
	sTeddiursaPose140,
	sTeddiursaPose115,
	sTeddiursaPose22,
	sTeddiursaPose143,
	sTeddiursaPose114,
	sTeddiursaPose179,
	sTeddiursaPose180,
	sTeddiursaPose181,
	sTeddiursaPose182,
	sTeddiursaPose183,
	sTeddiursaPose184,
	sTeddiursaPose185,
	sTeddiursaPose186,
	sTeddiursaPose122,
	sTeddiursaPose125,
	sTeddiursaPose128,
	sTeddiursaPose131,
	sTeddiursaPose134,
	sTeddiursaPose137,
	sTeddiursaPose140,
	sTeddiursaPose143,
	sTeddiursaPose1,
	sTeddiursaPose196,
	sTeddiursaPose197,
	sTeddiursaPose4,
	sTeddiursaPose199,
	sTeddiursaPose200,
	sTeddiursaPose7,
	sTeddiursaPose202,
	sTeddiursaPose203,
	sTeddiursaPose10,
	sTeddiursaPose205,
	sTeddiursaPose206,
	sTeddiursaPose13,
	sTeddiursaPose208,
	sTeddiursaPose209,
	sTeddiursaPose16,
	sTeddiursaPose182,
	sTeddiursaPose212,
	sTeddiursaPose19,
	sTeddiursaPose214,
	sTeddiursaPose215,
	sTeddiursaPose22,
	sTeddiursaPose217,
	sTeddiursaPose218,
	sTeddiursaPose113,
	sTeddiursaPose114,
	sTeddiursaPose115,
	sTeddiursaPose116,
	sTeddiursaPose117,
	sTeddiursaPose118,
	sTeddiursaPose119,
	sTeddiursaPose120,
	sTeddiursaPose1,
	sTeddiursaPose22,
	sTeddiursaPose19,
	sTeddiursaPose16,
	sTeddiursaPose13,
	sTeddiursaPose10,
	sTeddiursaPose7,
	sTeddiursaPose4,
};

static const struct PositionSets sAxPositionsTeddiursa[] = {
	[0] = { .set = { {-1, -5}, {-7, -2}, {5, -2}, {-1, -4} } },
	[1] = { .set = { {0, -4}, {-6, -1}, {6, -3}, {0, -3} } },
	[2] = { .set = { {-2, -4}, {-8, -3}, {4, -1}, {-1, -3} } },
	[3] = { .set = { {4, -6}, {-6, -1}, {5, -5}, {0, -5} } },
	[4] = { .set = { {2, -5}, {-3, 0}, {0, -5}, {-1, -4} } },
	[5] = { .set = { {5, -5}, {-7, -2}, {7, -3}, {0, -4} } },
	[6] = { .set = { {4, -7}, {1, -1}, {1, -4}, {0, -5} } },
	[7] = { .set = { {3, -6}, {2, -2}, {-4, -4}, {-2, -5} } },
	[8] = { .set = { {5, -6}, {-2, -1}, {4, -3}, {0, -5} } },
	[9] = { .set = { {0, -8}, {4, -2}, {-3, -4}, {-1, -6} } },
	[10] = { .set = { {2, -7}, {5, -3}, {-6, -4}, {-1, -4} } },
	[11] = { .set = { {-1, -7}, {3, 0}, {-4, -3}, {-2, -4} } },
	[12] = { .set = { {-1, -8}, {5, -3}, {-7, -3}, {-1, -5} } },
	[13] = { .set = { {0, -7}, {6, -1}, {-7, -6}, {0, -4} } },
	[14] = { .set = { {-2, -7}, {5, -6}, {-8, -1}, {-2, -4} } },
	[15] = { .set = { {-2, -8}, {1, -5}, {-6, -2}, {0, -6} } },
	[16] = { .set = { {-1, -7}, {1, -6}, {-5, 0}, {1, -5} } },
	[17] = { .set = { {-2, -6}, {4, -3}, {-7, -2}, {0, -4} } },
	[18] = { .set = { {-5, -6}, {-3, -5}, {-3, -1}, {0, -7} } },
	[19] = { .set = { {-6, -5}, {-7, -6}, {0, -1}, {-1, -6} } },
	[20] = { .set = { {-4, -5}, {-1, -6}, {-4, -2}, {1, -6} } },
	[21] = { .set = { {-4, -5}, {-7, -5}, {4, -1}, {-1, -7} } },
	[22] = { .set = { {-5, -4}, {-9, -3}, {5, -2}, {-1, -5} } },
	[23] = { .set = { {-3, -4}, {-4, -6}, {1, 0}, {-1, -5} } },
	[24] = { .set = { {-1, -5}, {-7, -2}, {5, -2}, {-1, -4} } },
	[25] = { .set = { {0, -4}, {-6, -1}, {6, -3}, {0, -3} } },
	[26] = { .set = { {-2, -4}, {-8, -3}, {4, -1}, {-1, -3} } },
	[27] = { .set = { {2, -6}, {-1, -3}, {2, -5}, {0, -6} } },
	[28] = { .set = { {4, -6}, {-6, -1}, {5, -5}, {0, -5} } },
	[29] = { .set = { {2, -5}, {-3, 0}, {0, -5}, {-1, -4} } },
	[30] = { .set = { {5, -5}, {-7, -2}, {7, -3}, {0, -4} } },
	[31] = { .set = { {0, -6}, {-6, -6}, {8, -4}, {0, -5} } },
	[32] = { .set = { {4, -7}, {1, -1}, {1, -4}, {0, -5} } },
	[33] = { .set = { {3, -6}, {2, -2}, {-4, -4}, {-2, -5} } },
	[34] = { .set = { {5, -6}, {-2, -1}, {4, -3}, {0, -5} } },
	[35] = { .set = { {3, -6}, {-6, -3}, {10, -8}, {1, -6} } },
	[36] = { .set = { {0, -8}, {4, -2}, {-3, -4}, {-1, -6} } },
	[37] = { .set = { {2, -7}, {5, -3}, {-6, -4}, {-1, -4} } },
	[38] = { .set = { {-1, -7}, {3, 0}, {-4, -3}, {-2, -4} } },
	[39] = { .set = { {4, -7}, {-3, -3}, {8, -9}, {0, -6} } },
	[40] = { .set = { {-1, -8}, {5, -3}, {-7, -3}, {-1, -5} } },
	[41] = { .set = { {0, -7}, {6, -1}, {-7, -6}, {0, -4} } },
	[42] = { .set = { {-2, -7}, {5, -6}, {-8, -1}, {-2, -4} } },
	[43] = { .set = { {1, -9}, {6, -5}, {-1, -7}, {0, -6} } },
	[44] = { .set = { {-2, -8}, {1, -5}, {-6, -2}, {0, -6} } },
	[45] = { .set = { {-1, -7}, {1, -6}, {-5, 0}, {1, -5} } },
	[46] = { .set = { {-2, -6}, {4, -3}, {-7, -2}, {0, -4} } },
	[47] = { .set = { {-1, -9}, {7, -8}, {-8, -6}, {1, -6} } },
	[48] = { .set = { {-5, -6}, {-3, -5}, {-3, -1}, {0, -7} } },
	[49] = { .set = { {-6, -5}, {-7, -6}, {0, -1}, {-1, -6} } },
	[50] = { .set = { {-4, -5}, {-1, -6}, {-4, -2}, {1, -6} } },
	[51] = { .set = { {-2, -6}, {-10, -8}, {5, -3}, {0, -6} } },
	[52] = { .set = { {-4, -5}, {-7, -5}, {4, -1}, {-1, -7} } },
	[53] = { .set = { {-5, -4}, {-9, -3}, {5, -2}, {-1, -5} } },
	[54] = { .set = { {-3, -4}, {-4, -6}, {1, 0}, {-1, -5} } },
	[55] = { .set = { {0, -6}, {-8, -4}, {6, -6}, {1, -6} } },
	[56] = { .set = { {-1, -5}, {-7, -2}, {5, -2}, {-1, -4} } },
	[57] = { .set = { {0, -4}, {-6, -1}, {6, -3}, {0, -3} } },
	[58] = { .set = { {-2, -4}, {-8, -3}, {4, -1}, {-1, -3} } },
	[59] = { .set = { {2, -5}, {-1, -2}, {2, -4}, {0, -5} } },
	[60] = { .set = { {2, -5}, {-1, -2}, {2, -4}, {0, -5} } },
	[61] = { .set = { {-3, -5}, {-2, -7}, {0, -2}, {0, -5} } },
	[62] = { .set = { {-3, -5}, {-2, -7}, {0, -2}, {0, -5} } },
	[63] = { .set = { {4, -6}, {-6, -1}, {5, -5}, {0, -5} } },
	[64] = { .set = { {2, -5}, {-3, 0}, {0, -5}, {-1, -4} } },
	[65] = { .set = { {5, -5}, {-7, -2}, {7, -3}, {0, -4} } },
	[66] = { .set = { {-1, -6}, {-7, -6}, {7, -4}, {-1, -5} } },
	[67] = { .set = { {-1, -6}, {-7, -6}, {7, -4}, {-1, -5} } },
	[68] = { .set = { {4, -6}, {4, -1}, {4, -4}, {-1, -5} } },
	[69] = { .set = { {4, -6}, {4, -1}, {4, -4}, {-1, -5} } },
	[70] = { .set = { {4, -7}, {1, -1}, {1, -4}, {0, -5} } },
	[71] = { .set = { {3, -6}, {2, -2}, {-4, -4}, {-2, -5} } },
	[72] = { .set = { {5, -6}, {-2, -1}, {4, -3}, {0, -5} } },
	[73] = { .set = { {3, -6}, {-6, -3}, {10, -8}, {1, -6} } },
	[74] = { .set = { {3, -6}, {-6, -3}, {10, -8}, {1, -6} } },
	[75] = { .set = { {0, -8}, {-5, -5}, {6, -5}, {-2, -6} } },
	[76] = { .set = { {0, -8}, {-5, -5}, {6, -5}, {-2, -6} } },
	[77] = { .set = { {0, -8}, {4, -2}, {-3, -4}, {-1, -6} } },
	[78] = { .set = { {2, -8}, {5, -4}, {-6, -5}, {-1, -5} } },
	[79] = { .set = { {-1, -8}, {3, -1}, {-4, -4}, {-2, -5} } },
	[80] = { .set = { {4, -7}, {-3, -3}, {8, -9}, {0, -6} } },
	[81] = { .set = { {4, -7}, {-3, -3}, {8, -9}, {0, -6} } },
	[82] = { .set = { {0, -9}, {-8, -8}, {7, -6}, {-2, -6} } },
	[83] = { .set = { {0, -9}, {-8, -8}, {7, -6}, {-2, -6} } },
	[84] = { .set = { {-1, -8}, {5, -3}, {-7, -3}, {-1, -5} } },
	[85] = { .set = { {0, -7}, {6, -1}, {-7, -6}, {0, -4} } },
	[86] = { .set = { {-2, -7}, {5, -6}, {-8, -1}, {-2, -4} } },
	[87] = { .set = { {-3, -9}, {1, -7}, {-8, -5}, {-2, -5} } },
	[88] = { .set = { {-3, -9}, {1, -7}, {-8, -5}, {-2, -5} } },
	[89] = { .set = { {2, -8}, {7, -4}, {0, -6}, {1, -5} } },
	[90] = { .set = { {2, -8}, {7, -4}, {0, -6}, {1, -5} } },
	[91] = { .set = { {-2, -8}, {1, -5}, {-6, -2}, {0, -6} } },
	[92] = { .set = { {-1, -8}, {1, -7}, {-5, -1}, {1, -6} } },
	[93] = { .set = { {-1, -8}, {5, -5}, {-6, -4}, {1, -6} } },
	[94] = { .set = { {-6, -7}, {-10, -9}, {1, -3}, {-1, -6} } },
	[95] = { .set = { {-6, -7}, {-10, -9}, {1, -3}, {-1, -6} } },
	[96] = { .set = { {-1, -10}, {7, -9}, {-8, -7}, {1, -7} } },
	[97] = { .set = { {-1, -10}, {7, -9}, {-8, -7}, {1, -7} } },
	[98] = { .set = { {-5, -6}, {-3, -5}, {-3, -1}, {0, -7} } },
	[99] = { .set = { {-6, -5}, {-7, -6}, {0, -1}, {-1, -6} } },
	[100] = { .set = { {-4, -5}, {-1, -6}, {-4, -2}, {1, -6} } },
	[101] = { .set = { {-4, -5}, {-12, -7}, {3, -2}, {-2, -5} } },
	[102] = { .set = { {-4, -5}, {-12, -7}, {3, -2}, {-2, -5} } },
	[103] = { .set = { {-2, -7}, {3, -4}, {-8, -4}, {0, -5} } },
	[104] = { .set = { {-2, -7}, {3, -4}, {-8, -4}, {0, -5} } },
	[105] = { .set = { {-4, -5}, {-7, -5}, {4, -1}, {-1, -7} } },
	[106] = { .set = { {-5, -4}, {-9, -3}, {5, -2}, {-1, -5} } },
	[107] = { .set = { {-3, -4}, {-4, -6}, {1, 0}, {-1, -5} } },
	[108] = { .set = { {-1, -6}, {-9, -4}, {5, -6}, {0, -6} } },
	[109] = { .set = { {-1, -6}, {-9, -4}, {5, -6}, {0, -6} } },
	[110] = { .set = { {-6, -6}, {-7, -4}, {-5, -1}, {-1, -4} } },
	[111] = { .set = { {-6, -6}, {-7, -4}, {-5, -1}, {-1, -4} } },
	[112] = { .set = { {-1, -5}, {-2, -4}, {4, -2}, {-1, -6} } },
	[113] = { .set = { {-4, -5}, {-6, -6}, {2, -1}, {-1, -5} } },
	[114] = { .set = { {-6, -7}, {-7, -6}, {-2, -1}, {-1, -5} } },
	[115] = { .set = { {-3, -8}, {-1, -8}, {-5, -2}, {0, -5} } },
	[116] = { .set = { {-1, -8}, {-1, -6}, {-6, -3}, {-1, -5} } },
	[117] = { .set = { {1, -8}, {-1, -8}, {3, -2}, {-2, -5} } },
	[118] = { .set = { {4, -7}, {0, -1}, {5, -6}, {0, -5} } },
	[119] = { .set = { {3, -5}, {-4, -1}, {4, -6}, {0, -5} } },
	[120] = { .set = { {-1, -5}, {-7, -2}, {5, -2}, {-1, -4} } },
	[121] = { .set = { {-1, -5}, {-2, -4}, {4, -2}, {-1, -6} } },
	[122] = { .set = { {-1, -5}, {-2, -4}, {4, -2}, {-1, -6} } },
	[123] = { .set = { {4, -6}, {-6, -1}, {5, -5}, {0, -5} } },
	[124] = { .set = { {3, -5}, {-4, -1}, {4, -6}, {0, -4} } },
	[125] = { .set = { {3, -5}, {-4, -1}, {4, -6}, {0, -5} } },
	[126] = { .set = { {4, -7}, {1, -1}, {1, -4}, {0, -5} } },
	[127] = { .set = { {4, -7}, {0, -1}, {5, -6}, {0, -5} } },
	[128] = { .set = { {4, -7}, {0, -1}, {5, -6}, {0, -5} } },
	[129] = { .set = { {0, -8}, {4, -2}, {-3, -4}, {-1, -6} } },
	[130] = { .set = { {0, -8}, {-1, -8}, {3, -2}, {-2, -5} } },
	[131] = { .set = { {1, -8}, {-1, -8}, {3, -2}, {-2, -5} } },
	[132] = { .set = { {-1, -8}, {5, -3}, {-7, -3}, {-1, -5} } },
	[133] = { .set = { {-1, -8}, {0, -6}, {-6, -3}, {-1, -5} } },
	[134] = { .set = { {-1, -8}, {-1, -6}, {-6, -3}, {-1, -5} } },
	[135] = { .set = { {-2, -8}, {1, -5}, {-6, -2}, {0, -6} } },
	[136] = { .set = { {-2, -8}, {-1, -8}, {-5, -2}, {0, -5} } },
	[137] = { .set = { {-3, -8}, {-1, -8}, {-5, -2}, {0, -5} } },
	[138] = { .set = { {-5, -6}, {-3, -5}, {-3, -1}, {0, -7} } },
	[139] = { .set = { {-6, -7}, {-7, -6}, {-2, -1}, {-1, -5} } },
	[140] = { .set = { {-6, -7}, {-7, -6}, {-2, -1}, {-1, -5} } },
	[141] = { .set = { {-4, -5}, {-7, -5}, {4, -1}, {-1, -7} } },
	[142] = { .set = { {-4, -5}, {-6, -6}, {2, -1}, {-1, -5} } },
	[143] = { .set = { {-4, -5}, {-6, -6}, {2, -1}, {-1, -5} } },
	[144] = { .set = { {-4, -4}, {-8, -3}, {4, 0}, {0, -4} } },
	[145] = { .set = { {-3, -3}, {-8, -3}, {4, 0}, {-1, -4} } },
	[146] = { .set = { {-1, -5}, {-8, -3}, {6, -3}, {-1, -4} } },
	[147] = { .set = { {3, -7}, {-3, 0}, {5, -6}, {-1, -4} } },
	[148] = { .set = { {5, -8}, {2, -2}, {3, -7}, {0, -5} } },
	[149] = { .set = { {-1, -8}, {-2, -8}, {6, -3}, {-2, -7} } },
	[150] = { .set = { {-1, -8}, {6, -3}, {-8, -3}, {-1, -4} } },
	[151] = { .set = { {0, -8}, {1, -8}, {-7, -3}, {1, -7} } },
	[152] = { .set = { {-4, -7}, {-3, -7}, {-2, -2}, {0, -5} } },
	[153] = { .set = { {-3, -7}, {-6, -7}, {2, -1}, {0, -6} } },
	[154] = { .set = { {-1, -5}, {-7, -2}, {5, -2}, {-1, -4} } },
	[155] = { .set = { {-1, -5}, {-2, -4}, {4, -2}, {-1, -6} } },
	[156] = { .set = { {-1, -5}, {-2, -4}, {4, -2}, {-1, -6} } },
	[157] = { .set = { {4, -6}, {-6, -1}, {5, -5}, {0, -5} } },
	[158] = { .set = { {3, -5}, {-4, -1}, {4, -6}, {0, -4} } },
	[159] = { .set = { {3, -5}, {-4, -1}, {4, -6}, {0, -5} } },
	[160] = { .set = { {4, -7}, {1, -1}, {1, -4}, {0, -5} } },
	[161] = { .set = { {4, -7}, {0, -1}, {5, -6}, {0, -5} } },
	[162] = { .set = { {4, -7}, {0, -1}, {5, -6}, {0, -5} } },
	[163] = { .set = { {0, -8}, {4, -2}, {-3, -4}, {-1, -6} } },
	[164] = { .set = { {0, -8}, {-1, -8}, {3, -2}, {-2, -5} } },
	[165] = { .set = { {1, -8}, {-1, -8}, {3, -2}, {-2, -5} } },
	[166] = { .set = { {-1, -8}, {5, -3}, {-7, -3}, {-1, -5} } },
	[167] = { .set = { {-1, -8}, {0, -6}, {-6, -3}, {-1, -5} } },
	[168] = { .set = { {-1, -8}, {-1, -6}, {-6, -3}, {-1, -5} } },
	[169] = { .set = { {-2, -8}, {1, -5}, {-6, -2}, {0, -6} } },
	[170] = { .set = { {-2, -8}, {-1, -8}, {-5, -2}, {0, -5} } },
	[171] = { .set = { {-3, -8}, {-1, -8}, {-5, -2}, {0, -5} } },
	[172] = { .set = { {-5, -6}, {-3, -5}, {-3, -1}, {0, -7} } },
	[173] = { .set = { {-6, -7}, {-7, -6}, {-2, -1}, {-1, -5} } },
	[174] = { .set = { {-6, -7}, {-7, -6}, {-2, -1}, {-1, -5} } },
	[175] = { .set = { {-4, -5}, {-7, -5}, {4, -1}, {-1, -7} } },
	[176] = { .set = { {-4, -5}, {-6, -6}, {2, -1}, {-1, -5} } },
	[177] = { .set = { {-4, -5}, {-6, -6}, {2, -1}, {-1, -5} } },
	[178] = { .set = { {0, -6}, {-6, -3}, {6, -5}, {0, -5} } },
	[179] = { .set = { {-3, -5}, {-7, -4}, {7, -3}, {1, -6} } },
	[180] = { .set = { {-4, -6}, {-5, -7}, {2, -2}, {1, -7} } },
	[181] = { .set = { {-2, -8}, {0, -7}, {-6, -1}, {0, -6} } },
	[182] = { .set = { {0, -8}, {6, -2}, {-7, -7}, {0, -5} } },
	[183] = { .set = { {3, -8}, {6, -4}, {-5, -5}, {0, -5} } },
	[184] = { .set = { {4, -7}, {3, -3}, {-3, -5}, {-1, -6} } },
	[185] = { .set = { {2, -6}, {-3, -1}, {0, -6}, {-1, -5} } },
	[186] = { .set = { {-1, -5}, {-2, -4}, {4, -2}, {-1, -6} } },
	[187] = { .set = { {3, -5}, {-4, -1}, {4, -6}, {0, -4} } },
	[188] = { .set = { {4, -7}, {0, -1}, {5, -6}, {0, -5} } },
	[189] = { .set = { {0, -8}, {-1, -8}, {3, -2}, {-2, -5} } },
	[190] = { .set = { {-1, -8}, {0, -6}, {-6, -3}, {-1, -5} } },
	[191] = { .set = { {-2, -8}, {-1, -8}, {-5, -2}, {0, -5} } },
	[192] = { .set = { {-6, -7}, {-7, -6}, {-2, -1}, {-1, -5} } },
	[193] = { .set = { {-4, -5}, {-6, -6}, {2, -1}, {-1, -5} } },
	[194] = { .set = { {-1, -5}, {-7, -2}, {5, -2}, {-1, -4} } },
	[195] = { .set = { {-1, -4}, {-7, -1}, {5, -3}, {-1, -3} } },
	[196] = { .set = { {-1, -4}, {-7, -3}, {5, -1}, {0, -3} } },
	[197] = { .set = { {4, -6}, {-6, -1}, {5, -5}, {0, -5} } },
	[198] = { .set = { {3, -5}, {-2, 0}, {1, -5}, {0, -4} } },
	[199] = { .set = { {4, -5}, {-8, -2}, {6, -3}, {-1, -4} } },
	[200] = { .set = { {4, -7}, {1, -1}, {1, -4}, {0, -5} } },
	[201] = { .set = { {4, -6}, {3, -2}, {-3, -4}, {-1, -5} } },
	[202] = { .set = { {4, -6}, {-3, -1}, {3, -3}, {-1, -5} } },
	[203] = { .set = { {0, -8}, {4, -2}, {-3, -4}, {-1, -6} } },
	[204] = { .set = { {0, -8}, {4, -1}, {-3, -4}, {-1, -5} } },
	[205] = { .set = { {1, -8}, {4, -4}, {-7, -5}, {-2, -5} } },
	[206] = { .set = { {-1, -8}, {5, -3}, {-7, -3}, {-1, -5} } },
	[207] = { .set = { {-1, -7}, {5, -1}, {-8, -6}, {-1, -4} } },
	[208] = { .set = { {-1, -7}, {6, -6}, {-7, -1}, {-1, -4} } },
	[209] = { .set = { {-2, -8}, {1, -5}, {-6, -2}, {0, -6} } },
	[210] = { .set = { {-2, -8}, {0, -7}, {-6, -1}, {0, -6} } },
	[211] = { .set = { {-1, -7}, {5, -4}, {-6, -3}, {1, -5} } },
	[212] = { .set = { {-5, -6}, {-3, -5}, {-3, -1}, {0, -7} } },
	[213] = { .set = { {-5, -5}, {-2, -6}, {-5, -2}, {0, -6} } },
	[214] = { .set = { {-5, -5}, {-6, -6}, {1, -1}, {0, -6} } },
	[215] = { .set = { {-4, -5}, {-7, -5}, {4, -1}, {-1, -7} } },
	[216] = { .set = { {-4, -4}, {-5, -6}, {0, 0}, {-2, -5} } },
	[217] = { .set = { {-4, -4}, {-8, -3}, {6, -2}, {0, -5} } },
	[218] = { .set = { {-1, -5}, {-2, -4}, {4, -2}, {-1, -6} } },
	[219] = { .set = { {-4, -5}, {-6, -6}, {2, -1}, {-1, -5} } },
	[220] = { .set = { {-6, -7}, {-7, -6}, {-2, -1}, {-1, -5} } },
	[221] = { .set = { {-3, -8}, {-1, -8}, {-5, -2}, {0, -5} } },
	[222] = { .set = { {-1, -8}, {-1, -6}, {-6, -3}, {-1, -5} } },
	[223] = { .set = { {1, -8}, {-1, -8}, {3, -2}, {-2, -5} } },
	[224] = { .set = { {4, -7}, {0, -1}, {5, -6}, {0, -5} } },
	[225] = { .set = { {3, -5}, {-4, -1}, {4, -6}, {0, -5} } },
	[226] = { .set = { {-1, -5}, {-7, -2}, {5, -2}, {-1, -4} } },
	[227] = { .set = { {-4, -5}, {-7, -5}, {4, -1}, {-1, -7} } },
	[228] = { .set = { {-5, -6}, {-3, -5}, {-3, -1}, {0, -7} } },
	[229] = { .set = { {-2, -8}, {1, -5}, {-6, -2}, {0, -6} } },
	[230] = { .set = { {-1, -8}, {5, -3}, {-7, -3}, {-1, -5} } },
	[231] = { .set = { {0, -8}, {4, -2}, {-3, -4}, {-1, -6} } },
	[232] = { .set = { {4, -7}, {1, -1}, {1, -4}, {0, -5} } },
	[233] = { .set = { {4, -6}, {-6, -1}, {5, -5}, {0, -5} } },
};

static const ax_anim *const sTeddiursaAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sTeddiursaAnimTable2[] = {
	AX_ANIM_PTR(sTeddiursaAnims_2_1),
	AX_ANIM_PTR(sTeddiursaAnims_2_2),
	AX_ANIM_PTR(sTeddiursaAnims_2_3),
	AX_ANIM_PTR(sTeddiursaAnims_2_4),
	AX_ANIM_PTR(sTeddiursaAnims_2_5),
	AX_ANIM_PTR(sTeddiursaAnims_2_6),
	AX_ANIM_PTR(sTeddiursaAnims_2_7),
	AX_ANIM_PTR(sTeddiursaAnims_2_8),
};

static const ax_anim *const sTeddiursaAnimTable3[] = {
	AX_ANIM_PTR(sTeddiursaAnims_3_1),
	AX_ANIM_PTR(sTeddiursaAnims_3_2),
	AX_ANIM_PTR(sTeddiursaAnims_3_3),
	AX_ANIM_PTR(sTeddiursaAnims_3_4),
	AX_ANIM_PTR(sTeddiursaAnims_3_5),
	AX_ANIM_PTR(sTeddiursaAnims_3_6),
	AX_ANIM_PTR(sTeddiursaAnims_3_7),
	AX_ANIM_PTR(sTeddiursaAnims_3_8),
};

static const ax_anim *const sTeddiursaAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_00251),
	AX_ANIM_PTR(gAxSharedAnim_00311),
	AX_ANIM_PTR(gAxSharedAnim_00298),
	AX_ANIM_PTR(gAxSharedAnim_00289),
	AX_ANIM_PTR(gAxSharedAnim_00288),
	AX_ANIM_PTR(gAxSharedAnim_00277),
	AX_ANIM_PTR(gAxSharedAnim_00264),
	AX_ANIM_PTR(gAxSharedAnim_00255),
};

static const ax_anim *const sTeddiursaAnimTable5[] = {
	AX_ANIM_PTR(sTeddiursaAnims_5_1),
	AX_ANIM_PTR(sTeddiursaAnims_5_2),
	AX_ANIM_PTR(sTeddiursaAnims_5_3),
	AX_ANIM_PTR(sTeddiursaAnims_5_4),
	AX_ANIM_PTR(sTeddiursaAnims_5_5),
	AX_ANIM_PTR(sTeddiursaAnims_5_6),
	AX_ANIM_PTR(sTeddiursaAnims_5_7),
	AX_ANIM_PTR(sTeddiursaAnims_5_8),
};

static const ax_anim *const sTeddiursaAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
};

static const ax_anim *const sTeddiursaAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00532),
	AX_ANIM_PTR(gAxSharedAnim_00544),
	AX_ANIM_PTR(gAxSharedAnim_00552),
	AX_ANIM_PTR(gAxSharedAnim_00560),
	AX_ANIM_PTR(gAxSharedAnim_00578),
	AX_ANIM_PTR(gAxSharedAnim_00588),
	AX_ANIM_PTR(gAxSharedAnim_00597),
	AX_ANIM_PTR(gAxSharedAnim_00603),
};

static const ax_anim *const sTeddiursaAnimTable8[] = {
	AX_ANIM_PTR(sTeddiursaAnims_8_1),
	AX_ANIM_PTR(sTeddiursaAnims_8_2),
	AX_ANIM_PTR(sTeddiursaAnims_8_3),
	AX_ANIM_PTR(sTeddiursaAnims_8_4),
	AX_ANIM_PTR(sTeddiursaAnims_8_5),
	AX_ANIM_PTR(sTeddiursaAnims_8_6),
	AX_ANIM_PTR(sTeddiursaAnims_8_7),
	AX_ANIM_PTR(sTeddiursaAnims_8_8),
};

static const ax_anim *const sTeddiursaAnimTable9[] = {
	AX_ANIM_PTR(sTeddiursaAnims_9_1),
	AX_ANIM_PTR(sTeddiursaAnims_9_2),
	AX_ANIM_PTR(sTeddiursaAnims_9_3),
	AX_ANIM_PTR(sTeddiursaAnims_9_4),
	AX_ANIM_PTR(sTeddiursaAnims_9_5),
	AX_ANIM_PTR(sTeddiursaAnims_9_6),
	AX_ANIM_PTR(sTeddiursaAnims_9_7),
	AX_ANIM_PTR(sTeddiursaAnims_9_8),
};

static const ax_anim *const sTeddiursaAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01016),
	AX_ANIM_PTR(gAxSharedAnim_01027),
	AX_ANIM_PTR(gAxSharedAnim_01046),
	AX_ANIM_PTR(gAxSharedAnim_01061),
	AX_ANIM_PTR(gAxSharedAnim_01078),
	AX_ANIM_PTR(gAxSharedAnim_01092),
	AX_ANIM_PTR(gAxSharedAnim_01110),
	AX_ANIM_PTR(gAxSharedAnim_01124),
};

static const ax_anim *const sTeddiursaAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01133),
	AX_ANIM_PTR(gAxSharedAnim_01175),
	AX_ANIM_PTR(gAxSharedAnim_01210),
	AX_ANIM_PTR(gAxSharedAnim_01247),
	AX_ANIM_PTR(gAxSharedAnim_01281),
	AX_ANIM_PTR(gAxSharedAnim_01320),
	AX_ANIM_PTR(gAxSharedAnim_01355),
	AX_ANIM_PTR(gAxSharedAnim_01381),
};

static const ax_anim *const sTeddiursaAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01423),
	AX_ANIM_PTR(gAxSharedAnim_01467),
	AX_ANIM_PTR(gAxSharedAnim_01458),
	AX_ANIM_PTR(gAxSharedAnim_01449),
	AX_ANIM_PTR(gAxSharedAnim_01448),
	AX_ANIM_PTR(gAxSharedAnim_01444),
	AX_ANIM_PTR(gAxSharedAnim_01432),
	AX_ANIM_PTR(gAxSharedAnim_01424),
};

static const ax_anim *const sTeddiursaAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01471),
	AX_ANIM_PTR(gAxSharedAnim_01516),
	AX_ANIM_PTR(gAxSharedAnim_01511),
	AX_ANIM_PTR(gAxSharedAnim_01504),
	AX_ANIM_PTR(gAxSharedAnim_01497),
	AX_ANIM_PTR(gAxSharedAnim_01490),
	AX_ANIM_PTR(gAxSharedAnim_01486),
	AX_ANIM_PTR(gAxSharedAnim_01478),
};

static const ax_anim *const *const sAxAnimationsTeddiursa[] = {
	sTeddiursaAnimTable1,
	sTeddiursaAnimTable2,
	sTeddiursaAnimTable3,
	sTeddiursaAnimTable4,
	sTeddiursaAnimTable5,
	sTeddiursaAnimTable6,
	sTeddiursaAnimTable7,
	sTeddiursaAnimTable8,
	sTeddiursaAnimTable9,
	sTeddiursaAnimTable10,
	sTeddiursaAnimTable11,
	sTeddiursaAnimTable12,
	sTeddiursaAnimTable13,
};

static const ax_sprite *const sAxSpritesTeddiursa[] = {
	sTeddiursaSprites1,
	sTeddiursaSprites2,
	sTeddiursaSprites3,
	sTeddiursaSprites4,
	sTeddiursaSprites5,
	sTeddiursaSprites6,
	sTeddiursaSprites7,
	sTeddiursaSprites8,
	sTeddiursaSprites9,
	sTeddiursaSprites10,
	sTeddiursaSprites11,
	sTeddiursaSprites12,
	sTeddiursaSprites13,
	sTeddiursaSprites14,
	sTeddiursaSprites15,
	sTeddiursaSprites16,
	sTeddiursaSprites17,
	sTeddiursaSprites18,
	sTeddiursaSprites19,
	sTeddiursaSprites20,
	sTeddiursaSprites21,
	sTeddiursaSprites22,
	sTeddiursaSprites23,
	sTeddiursaSprites24,
	sTeddiursaSprites25,
	sTeddiursaSprites26,
	sTeddiursaSprites27,
	sTeddiursaSprites28,
	sTeddiursaSprites29,
	sTeddiursaSprites30,
	sTeddiursaSprites31,
	sTeddiursaSprites32,
	sTeddiursaSprites33,
	sTeddiursaSprites34,
	sTeddiursaSprites35,
	sTeddiursaSprites36,
	sTeddiursaSprites37,
	sTeddiursaSprites38,
	sTeddiursaSprites39,
	sTeddiursaSprites40,
	sTeddiursaSprites41,
	sTeddiursaSprites42,
	sTeddiursaSprites43,
	sTeddiursaSprites44,
	sTeddiursaSprites45,
	sTeddiursaSprites46,
	sTeddiursaSprites47,
	sTeddiursaSprites48,
	sTeddiursaSprites49,
	sTeddiursaSprites50,
	sTeddiursaSprites51,
	sTeddiursaSprites52,
	sTeddiursaSprites53,
	sTeddiursaSprites54,
	sTeddiursaSprites55,
	sTeddiursaSprites56,
	sTeddiursaSprites57,
	sTeddiursaSprites58,
	sTeddiursaSprites59,
	sTeddiursaSprites60,
	sTeddiursaSprites61,
	sTeddiursaSprites62,
	sTeddiursaSprites63,
	sTeddiursaSprites64,
	sTeddiursaSprites65,
	sTeddiursaSprites66,
	sTeddiursaSprites67,
	sTeddiursaSprites68,
	sTeddiursaSprites69,
};

static const axmain sAxMainTeddiursa = {
	.poses = sAxPosesTeddiursa,
	.animations = sAxAnimationsTeddiursa,
	.animCount = ARRAY_COUNT(sAxAnimationsTeddiursa),
	.spriteData = sAxSpritesTeddiursa,
	.positions = sAxPositionsTeddiursa,
};
