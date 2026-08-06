/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainRegice;
const SiroArchive gAxRegice = {"SIRO", &sAxMainRegice};

static const ax_pose sRegicePose1[] = {
	AX_POSE(0, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose2[] = {
	AX_POSE(1, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose3[] = {
	AX_POSE(2, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose4[] = {
	AX_POSE(3, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose5[] = {
	AX_POSE(4, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose6[] = {
	AX_POSE(5, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose7[] = {
	AX_POSE(6, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose8[] = {
	AX_POSE(7, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose9[] = {
	AX_POSE(8, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose10[] = {
	AX_POSE(9, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose11[] = {
	AX_POSE(6, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose12[] = {
	AX_POSE(7, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose13[] = {
	AX_POSE(4, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose14[] = {
	AX_POSE(5, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose15[] = {
	AX_POSE(2, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose16[] = {
	AX_POSE(3, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose18[] = {
	AX_POSE(0, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose19[] = {
	AX_POSE(1, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose20[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose21[] = {
	AX_POSE(2, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose22[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose23[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose24[] = {
	AX_POSE(4, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose25[] = {
	AX_POSE(5, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose26[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose27[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose28[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose29[] = {
	AX_POSE(14, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose30[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose31[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose32[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose33[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose34[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose35[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose36[] = {
	AX_POSE(4, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose37[] = {
	AX_POSE(5, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose38[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose39[] = {
	AX_POSE(2, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose40[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose66[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose68[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose70[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose72[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose74[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose76[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose78[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose80[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose83[] = {
	AX_POSE(20, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(21, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(22, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(23, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose86[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose89[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose92[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose95[] = {
	AX_POSE(28, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(29, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(30, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 9)),
	AX_POSE(31, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 9)),
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose98[] = {
	AX_POSE(27, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose101[] = {
	AX_POSE(26, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose104[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose105[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose106[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose107[] = {
	AX_POSE(35, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(36, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(37, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(9, 3, 9)),
	AX_POSE(38, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(10, 3, 9)),
	AX_POSE(39, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(12, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose108[] = {
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose109[] = {
	AX_POSE(41, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose110[] = {
	AX_POSE(42, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(43, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 9)),
	AX_POSE(44, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(9, 3, 9)),
	AX_POSE(45, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(11, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose111[] = {
	AX_POSE(46, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(47, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(48, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(9, 3, 9)),
	AX_POSE(49, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(11, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose112[] = {
	AX_POSE(42, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE(43, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 9)),
	AX_POSE(44, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(9, 3, 9)),
	AX_POSE(45, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(11, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose113[] = {
	AX_POSE(41, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose114[] = {
	AX_POSE(40, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose116[] = {
	AX_POSE(50, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose117[] = {
	AX_POSE(51, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose119[] = {
	AX_POSE(52, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose120[] = {
	AX_POSE(53, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose122[] = {
	AX_POSE(54, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose123[] = {
	AX_POSE(55, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose125[] = {
	AX_POSE(56, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose126[] = {
	AX_POSE(57, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose128[] = {
	AX_POSE(58, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose129[] = {
	AX_POSE(59, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose131[] = {
	AX_POSE(56, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose132[] = {
	AX_POSE(57, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose134[] = {
	AX_POSE(54, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose135[] = {
	AX_POSE(55, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose137[] = {
	AX_POSE(52, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose138[] = {
	AX_POSE(53, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRegicePose157[] = {
	AX_POSE(1, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 9)),
	AX_POSE_TERMINATOR
};
static const u8 sRegiceAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_1_1.lz");
static const u8 sRegiceAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_1_2.lz");
static const u8 sRegiceAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_1_3.lz");
static const u8 sRegiceAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_1_4.lz");
static const u8 sRegiceAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_1_5.lz");
static const u8 sRegiceAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_1_6.lz");
static const u8 sRegiceAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_1_7.lz");
static const u8 sRegiceAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_1_8.lz");
static const u8 sRegiceAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_2_1.lz");
static const u8 sRegiceAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_2_2.lz");
static const u8 sRegiceAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_2_3.lz");
static const u8 sRegiceAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_2_4.lz");
static const u8 sRegiceAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_2_5.lz");
static const u8 sRegiceAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_2_6.lz");
static const u8 sRegiceAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_2_7.lz");
static const u8 sRegiceAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_2_8.lz");
static const u8 sRegiceAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_3_1.lz");
static const u8 sRegiceAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_3_2.lz");
static const u8 sRegiceAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_3_3.lz");
static const u8 sRegiceAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_3_4.lz");
static const u8 sRegiceAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_3_5.lz");
static const u8 sRegiceAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_3_6.lz");
static const u8 sRegiceAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_3_7.lz");
static const u8 sRegiceAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_3_8.lz");
static const u8 sRegiceAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_4_1.lz");
static const u8 sRegiceAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_4_2.lz");
static const u8 sRegiceAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_4_3.lz");
static const u8 sRegiceAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_4_4.lz");
static const u8 sRegiceAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_4_5.lz");
static const u8 sRegiceAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_4_6.lz");
static const u8 sRegiceAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_4_7.lz");
static const u8 sRegiceAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_4_8.lz");
static const u8 sRegiceAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_5_1.lz");
static const u8 sRegiceAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_5_2.lz");
static const u8 sRegiceAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_5_3.lz");
static const u8 sRegiceAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_5_4.lz");
static const u8 sRegiceAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_5_5.lz");
static const u8 sRegiceAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_5_6.lz");
static const u8 sRegiceAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_5_7.lz");
static const u8 sRegiceAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_5_8.lz");
static const u8 sRegiceAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_8_1.lz");
static const u8 sRegiceAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_8_2.lz");
static const u8 sRegiceAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_8_3.lz");
static const u8 sRegiceAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_8_4.lz");
static const u8 sRegiceAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_8_5.lz");
static const u8 sRegiceAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_8_6.lz");
static const u8 sRegiceAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_8_7.lz");
static const u8 sRegiceAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_8_8.lz");
static const u8 sRegiceAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_9_1.lz");
static const u8 sRegiceAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_9_2.lz");
static const u8 sRegiceAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_9_3.lz");
static const u8 sRegiceAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_9_4.lz");
static const u8 sRegiceAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_9_5.lz");
static const u8 sRegiceAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_9_6.lz");
static const u8 sRegiceAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_9_7.lz");
static const u8 sRegiceAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_9_8.lz");
static const u8 sRegiceAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_11_1.lz");
static const u8 sRegiceAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_11_2.lz");
static const u8 sRegiceAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_11_3.lz");
static const u8 sRegiceAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_11_4.lz");
static const u8 sRegiceAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_11_5.lz");
static const u8 sRegiceAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_11_6.lz");
static const u8 sRegiceAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_11_7.lz");
static const u8 sRegiceAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/regice/sRegiceAnims_11_8.lz");

static const u8 sRegiceGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_1.4bpp.lz");
static const ax_sprite sRegiceSprites1[] = {
	{sRegiceGfx1, ARRAY_COUNT(sRegiceGfx1)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_2.4bpp.lz");
static const ax_sprite sRegiceSprites2[] = {
	{sRegiceGfx2, ARRAY_COUNT(sRegiceGfx2)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_3.4bpp.lz");
static const ax_sprite sRegiceSprites3[] = {
	{sRegiceGfx3, ARRAY_COUNT(sRegiceGfx3)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_4.4bpp.lz");
static const ax_sprite sRegiceSprites4[] = {
	{sRegiceGfx4, ARRAY_COUNT(sRegiceGfx4)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_5.4bpp.lz");
static const ax_sprite sRegiceSprites5[] = {
	{sRegiceGfx5, ARRAY_COUNT(sRegiceGfx5)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_6.4bpp.lz");
static const ax_sprite sRegiceSprites6[] = {
	{sRegiceGfx6, ARRAY_COUNT(sRegiceGfx6)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_7.4bpp.lz");
static const ax_sprite sRegiceSprites7[] = {
	{sRegiceGfx7, ARRAY_COUNT(sRegiceGfx7)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_8.4bpp.lz");
static const ax_sprite sRegiceSprites8[] = {
	{sRegiceGfx8, ARRAY_COUNT(sRegiceGfx8)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_9.4bpp.lz");
static const ax_sprite sRegiceSprites9[] = {
	{sRegiceGfx9, ARRAY_COUNT(sRegiceGfx9)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_10.4bpp.lz");
static const ax_sprite sRegiceSprites10[] = {
	{sRegiceGfx10, ARRAY_COUNT(sRegiceGfx10)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_11.4bpp.lz");
static const u8 sRegiceGfx11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_11_1.4bpp.lz");
static const ax_sprite sRegiceSprites11[] = {
	{sRegiceGfx11, ARRAY_COUNT(sRegiceGfx11)}, 
	{NULL, 32}, 
	{sRegiceGfx11_1, ARRAY_COUNT(sRegiceGfx11_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRegiceGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_12.4bpp.lz");
static const u8 sRegiceGfx12_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_12_1.4bpp.lz");
static const ax_sprite sRegiceSprites12[] = {
	{NULL, 32}, 
	{sRegiceGfx12, ARRAY_COUNT(sRegiceGfx12)}, 
	{NULL, 32}, 
	{sRegiceGfx12_1, ARRAY_COUNT(sRegiceGfx12_1)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_13.4bpp.lz");
static const u8 sRegiceGfx13_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_13_1.4bpp.lz");
static const u8 sRegiceGfx13_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_13_2.4bpp.lz");
static const u8 sRegiceGfx13_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_13_3.4bpp.lz");
static const ax_sprite sRegiceSprites13[] = {
	{NULL, 32}, 
	{sRegiceGfx13, ARRAY_COUNT(sRegiceGfx13)}, 
	{NULL, 32}, 
	{sRegiceGfx13_1, ARRAY_COUNT(sRegiceGfx13_1)}, 
	{NULL, 32}, 
	{sRegiceGfx13_2, ARRAY_COUNT(sRegiceGfx13_2)}, 
	{NULL, 32}, 
	{sRegiceGfx13_3, ARRAY_COUNT(sRegiceGfx13_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRegiceGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_14.4bpp.lz");
static const u8 sRegiceGfx14_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_14_1.4bpp.lz");
static const ax_sprite sRegiceSprites14[] = {
	{NULL, 32}, 
	{sRegiceGfx14, ARRAY_COUNT(sRegiceGfx14)}, 
	{NULL, 32}, 
	{sRegiceGfx14_1, ARRAY_COUNT(sRegiceGfx14_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRegiceGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_15.4bpp.lz");
static const u8 sRegiceGfx15_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_15_1.4bpp.lz");
static const ax_sprite sRegiceSprites15[] = {
	{NULL, 32}, 
	{sRegiceGfx15, ARRAY_COUNT(sRegiceGfx15)}, 
	{NULL, 32}, 
	{sRegiceGfx15_1, ARRAY_COUNT(sRegiceGfx15_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRegiceGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_16.4bpp.lz");
static const u8 sRegiceGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_16_1.4bpp.lz");
static const ax_sprite sRegiceSprites16[] = {
	{sRegiceGfx16, ARRAY_COUNT(sRegiceGfx16)}, 
	{NULL, 32}, 
	{sRegiceGfx16_1, ARRAY_COUNT(sRegiceGfx16_1)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_17.4bpp.lz");
static const u8 sRegiceGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_17_1.4bpp.lz");
static const ax_sprite sRegiceSprites17[] = {
	{NULL, 32}, 
	{sRegiceGfx17, ARRAY_COUNT(sRegiceGfx17)}, 
	{NULL, 32}, 
	{sRegiceGfx17_1, ARRAY_COUNT(sRegiceGfx17_1)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_18.4bpp.lz");
static const u8 sRegiceGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_18_1.4bpp.lz");
static const ax_sprite sRegiceSprites18[] = {
	{NULL, 32}, 
	{sRegiceGfx18, ARRAY_COUNT(sRegiceGfx18)}, 
	{NULL, 32}, 
	{sRegiceGfx18_1, ARRAY_COUNT(sRegiceGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRegiceGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_19.4bpp.lz");
static const u8 sRegiceGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_19_1.4bpp.lz");
static const ax_sprite sRegiceSprites19[] = {
	{NULL, 32}, 
	{sRegiceGfx19, ARRAY_COUNT(sRegiceGfx19)}, 
	{NULL, 32}, 
	{sRegiceGfx19_1, ARRAY_COUNT(sRegiceGfx19_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRegiceGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_20.4bpp.lz");
static const u8 sRegiceGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_20_1.4bpp.lz");
static const ax_sprite sRegiceSprites20[] = {
	{NULL, 32}, 
	{sRegiceGfx20, ARRAY_COUNT(sRegiceGfx20)}, 
	{NULL, 32}, 
	{sRegiceGfx20_1, ARRAY_COUNT(sRegiceGfx20_1)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_21.4bpp.lz");
static const ax_sprite sRegiceSprites21[] = {
	{sRegiceGfx21, ARRAY_COUNT(sRegiceGfx21)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_22.4bpp.lz");
static const ax_sprite sRegiceSprites22[] = {
	{sRegiceGfx22, ARRAY_COUNT(sRegiceGfx22)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRegiceGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_23.4bpp.lz");
static const ax_sprite sRegiceSprites23[] = {
	{sRegiceGfx23, ARRAY_COUNT(sRegiceGfx23)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_24.4bpp.lz");
static const ax_sprite sRegiceSprites24[] = {
	{sRegiceGfx24, ARRAY_COUNT(sRegiceGfx24)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_25.4bpp.lz");
static const ax_sprite sRegiceSprites25[] = {
	{sRegiceGfx25, ARRAY_COUNT(sRegiceGfx25)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_26.4bpp.lz");
static const u8 sRegiceGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_26_1.4bpp.lz");
static const ax_sprite sRegiceSprites26[] = {
	{sRegiceGfx26, ARRAY_COUNT(sRegiceGfx26)}, 
	{NULL, 32}, 
	{sRegiceGfx26_1, ARRAY_COUNT(sRegiceGfx26_1)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_27.4bpp.lz");
static const u8 sRegiceGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_27_1.4bpp.lz");
static const u8 sRegiceGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_27_2.4bpp.lz");
static const u8 sRegiceGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_27_3.4bpp.lz");
static const ax_sprite sRegiceSprites27[] = {
	{NULL, 32}, 
	{sRegiceGfx27, ARRAY_COUNT(sRegiceGfx27)}, 
	{NULL, 32}, 
	{sRegiceGfx27_1, ARRAY_COUNT(sRegiceGfx27_1)}, 
	{NULL, 32}, 
	{sRegiceGfx27_2, ARRAY_COUNT(sRegiceGfx27_2)}, 
	{NULL, 32}, 
	{sRegiceGfx27_3, ARRAY_COUNT(sRegiceGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRegiceGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_28.4bpp.lz");
static const ax_sprite sRegiceSprites28[] = {
	{sRegiceGfx28, ARRAY_COUNT(sRegiceGfx28)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRegiceGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_29.4bpp.lz");
static const ax_sprite sRegiceSprites29[] = {
	{sRegiceGfx29, ARRAY_COUNT(sRegiceGfx29)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_30.4bpp.lz");
static const ax_sprite sRegiceSprites30[] = {
	{sRegiceGfx30, ARRAY_COUNT(sRegiceGfx30)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRegiceGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_31.4bpp.lz");
static const ax_sprite sRegiceSprites31[] = {
	{sRegiceGfx31, ARRAY_COUNT(sRegiceGfx31)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_32.4bpp.lz");
static const ax_sprite sRegiceSprites32[] = {
	{sRegiceGfx32, ARRAY_COUNT(sRegiceGfx32)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_33.4bpp.lz");
static const ax_sprite sRegiceSprites33[] = {
	{sRegiceGfx33, ARRAY_COUNT(sRegiceGfx33)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_34.4bpp.lz");
static const ax_sprite sRegiceSprites34[] = {
	{sRegiceGfx34, ARRAY_COUNT(sRegiceGfx34)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_35.4bpp.lz");
static const ax_sprite sRegiceSprites35[] = {
	{sRegiceGfx35, ARRAY_COUNT(sRegiceGfx35)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_36.4bpp.lz");
static const ax_sprite sRegiceSprites36[] = {
	{sRegiceGfx36, ARRAY_COUNT(sRegiceGfx36)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_37.4bpp.lz");
static const ax_sprite sRegiceSprites37[] = {
	{sRegiceGfx37, ARRAY_COUNT(sRegiceGfx37)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_38.4bpp.lz");
static const ax_sprite sRegiceSprites38[] = {
	{sRegiceGfx38, ARRAY_COUNT(sRegiceGfx38)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_39.4bpp.lz");
static const ax_sprite sRegiceSprites39[] = {
	{sRegiceGfx39, ARRAY_COUNT(sRegiceGfx39)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_40.4bpp.lz");
static const ax_sprite sRegiceSprites40[] = {
	{sRegiceGfx40, ARRAY_COUNT(sRegiceGfx40)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_41.4bpp.lz");
static const ax_sprite sRegiceSprites41[] = {
	{sRegiceGfx41, ARRAY_COUNT(sRegiceGfx41)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_42.4bpp.lz");
static const ax_sprite sRegiceSprites42[] = {
	{sRegiceGfx42, ARRAY_COUNT(sRegiceGfx42)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_43.4bpp.lz");
static const ax_sprite sRegiceSprites43[] = {
	{sRegiceGfx43, ARRAY_COUNT(sRegiceGfx43)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_44.4bpp.lz");
static const ax_sprite sRegiceSprites44[] = {
	{sRegiceGfx44, ARRAY_COUNT(sRegiceGfx44)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_45.4bpp.lz");
static const ax_sprite sRegiceSprites45[] = {
	{sRegiceGfx45, ARRAY_COUNT(sRegiceGfx45)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_46.4bpp.lz");
static const ax_sprite sRegiceSprites46[] = {
	{sRegiceGfx46, ARRAY_COUNT(sRegiceGfx46)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_47.4bpp.lz");
static const ax_sprite sRegiceSprites47[] = {
	{sRegiceGfx47, ARRAY_COUNT(sRegiceGfx47)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_48.4bpp.lz");
static const ax_sprite sRegiceSprites48[] = {
	{sRegiceGfx48, ARRAY_COUNT(sRegiceGfx48)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_49.4bpp.lz");
static const ax_sprite sRegiceSprites49[] = {
	{sRegiceGfx49, ARRAY_COUNT(sRegiceGfx49)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_50.4bpp.lz");
static const ax_sprite sRegiceSprites50[] = {
	{sRegiceGfx50, ARRAY_COUNT(sRegiceGfx50)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_51.4bpp.lz");
static const ax_sprite sRegiceSprites51[] = {
	{sRegiceGfx51, ARRAY_COUNT(sRegiceGfx51)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_52.4bpp.lz");
static const ax_sprite sRegiceSprites52[] = {
	{sRegiceGfx52, ARRAY_COUNT(sRegiceGfx52)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_53.4bpp.lz");
static const ax_sprite sRegiceSprites53[] = {
	{sRegiceGfx53, ARRAY_COUNT(sRegiceGfx53)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_54.4bpp.lz");
static const ax_sprite sRegiceSprites54[] = {
	{sRegiceGfx54, ARRAY_COUNT(sRegiceGfx54)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_55.4bpp.lz");
static const ax_sprite sRegiceSprites55[] = {
	{sRegiceGfx55, ARRAY_COUNT(sRegiceGfx55)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_56.4bpp.lz");
static const ax_sprite sRegiceSprites56[] = {
	{sRegiceGfx56, ARRAY_COUNT(sRegiceGfx56)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_57.4bpp.lz");
static const ax_sprite sRegiceSprites57[] = {
	{sRegiceGfx57, ARRAY_COUNT(sRegiceGfx57)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_58.4bpp.lz");
static const ax_sprite sRegiceSprites58[] = {
	{sRegiceGfx58, ARRAY_COUNT(sRegiceGfx58)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_59.4bpp.lz");
static const ax_sprite sRegiceSprites59[] = {
	{sRegiceGfx59, ARRAY_COUNT(sRegiceGfx59)}, 
	{NULL, 0}
};
static const u8 sRegiceGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/regice/sprite_60.4bpp.lz");
static const ax_sprite sRegiceSprites60[] = {
	{sRegiceGfx60, ARRAY_COUNT(sRegiceGfx60)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesRegice[] = {
	sRegicePose1,
	sRegicePose2,
	sRegicePose3,
	sRegicePose4,
	sRegicePose5,
	sRegicePose6,
	sRegicePose7,
	sRegicePose8,
	sRegicePose9,
	sRegicePose10,
	sRegicePose11,
	sRegicePose12,
	sRegicePose13,
	sRegicePose14,
	sRegicePose15,
	sRegicePose16,
	sRegicePose17,
	sRegicePose18,
	sRegicePose19,
	sRegicePose20,
	sRegicePose21,
	sRegicePose22,
	sRegicePose23,
	sRegicePose24,
	sRegicePose25,
	sRegicePose26,
	sRegicePose27,
	sRegicePose28,
	sRegicePose29,
	sRegicePose30,
	sRegicePose31,
	sRegicePose32,
	sRegicePose33,
	sRegicePose34,
	sRegicePose35,
	sRegicePose36,
	sRegicePose37,
	sRegicePose38,
	sRegicePose39,
	sRegicePose40,
	sRegicePose17,
	sRegicePose18,
	sRegicePose19,
	sRegicePose20,
	sRegicePose21,
	sRegicePose22,
	sRegicePose23,
	sRegicePose24,
	sRegicePose25,
	sRegicePose26,
	sRegicePose27,
	sRegicePose28,
	sRegicePose29,
	sRegicePose30,
	sRegicePose31,
	sRegicePose32,
	sRegicePose33,
	sRegicePose34,
	sRegicePose35,
	sRegicePose36,
	sRegicePose37,
	sRegicePose38,
	sRegicePose39,
	sRegicePose40,
	sRegicePose17,
	sRegicePose66,
	sRegicePose20,
	sRegicePose68,
	sRegicePose23,
	sRegicePose70,
	sRegicePose26,
	sRegicePose72,
	sRegicePose29,
	sRegicePose74,
	sRegicePose32,
	sRegicePose76,
	sRegicePose35,
	sRegicePose78,
	sRegicePose38,
	sRegicePose80,
	sRegicePose17,
	sRegicePose66,
	sRegicePose83,
	sRegicePose20,
	sRegicePose68,
	sRegicePose86,
	sRegicePose23,
	sRegicePose70,
	sRegicePose89,
	sRegicePose26,
	sRegicePose72,
	sRegicePose92,
	sRegicePose29,
	sRegicePose74,
	sRegicePose95,
	sRegicePose32,
	sRegicePose76,
	sRegicePose98,
	sRegicePose35,
	sRegicePose78,
	sRegicePose101,
	sRegicePose38,
	sRegicePose80,
	sRegicePose104,
	sRegicePose105,
	sRegicePose106,
	sRegicePose107,
	sRegicePose108,
	sRegicePose109,
	sRegicePose110,
	sRegicePose111,
	sRegicePose112,
	sRegicePose113,
	sRegicePose114,
	sRegicePose17,
	sRegicePose116,
	sRegicePose117,
	sRegicePose20,
	sRegicePose119,
	sRegicePose120,
	sRegicePose23,
	sRegicePose122,
	sRegicePose123,
	sRegicePose26,
	sRegicePose125,
	sRegicePose126,
	sRegicePose29,
	sRegicePose128,
	sRegicePose129,
	sRegicePose32,
	sRegicePose131,
	sRegicePose132,
	sRegicePose35,
	sRegicePose134,
	sRegicePose135,
	sRegicePose38,
	sRegicePose137,
	sRegicePose138,
	sRegicePose66,
	sRegicePose80,
	sRegicePose78,
	sRegicePose76,
	sRegicePose74,
	sRegicePose72,
	sRegicePose70,
	sRegicePose68,
	sRegicePose83,
	sRegicePose86,
	sRegicePose89,
	sRegicePose92,
	sRegicePose95,
	sRegicePose98,
	sRegicePose101,
	sRegicePose104,
	sRegicePose17,
	sRegicePose83,
	sRegicePose157,
	sRegicePose20,
	sRegicePose86,
	sRegicePose22,
	sRegicePose23,
	sRegicePose89,
	sRegicePose25,
	sRegicePose26,
	sRegicePose92,
	sRegicePose28,
	sRegicePose29,
	sRegicePose95,
	sRegicePose31,
	sRegicePose32,
	sRegicePose98,
	sRegicePose34,
	sRegicePose35,
	sRegicePose101,
	sRegicePose37,
	sRegicePose38,
	sRegicePose104,
	sRegicePose40,
	sRegicePose66,
	sRegicePose80,
	sRegicePose78,
	sRegicePose76,
	sRegicePose74,
	sRegicePose72,
	sRegicePose70,
	sRegicePose68,
	sRegicePose17,
	sRegicePose38,
	sRegicePose35,
	sRegicePose32,
	sRegicePose29,
	sRegicePose26,
	sRegicePose23,
	sRegicePose20,
};

static const struct PositionSets sAxPositionsRegice[] = {
	[0] = { .set = { {-1, -12}, {-11, -12}, {9, -12}, {-1, -11} } },
	[1] = { .set = { {-1, -12}, {-11, -12}, {9, -12}, {-1, -11} } },
	[2] = { .set = { {3, -13}, {8, -12}, {-9, -12}, {-1, -13} } },
	[3] = { .set = { {3, -13}, {8, -12}, {-9, -12}, {-1, -13} } },
	[4] = { .set = { {5, -14}, {-4, -10}, {-5, -7}, {-1, -13} } },
	[5] = { .set = { {5, -14}, {-4, -10}, {-5, -7}, {-1, -13} } },
	[6] = { .set = { {4, -19}, {-3, -14}, {6, -10}, {0, -16} } },
	[7] = { .set = { {3, -19}, {-3, -14}, {6, -10}, {1, -16} } },
	[8] = { .set = { {-1, -19}, {10, -14}, {-11, -14}, {-1, -15} } },
	[9] = { .set = { {-1, -19}, {10, -14}, {-11, -14}, {-1, -15} } },
	[10] = { .set = { {-6, -19}, {1, -14}, {-8, -10}, {-2, -16} } },
	[11] = { .set = { {-5, -19}, {1, -14}, {-8, -10}, {-3, -16} } },
	[12] = { .set = { {-7, -14}, {2, -10}, {3, -7}, {-1, -13} } },
	[13] = { .set = { {-7, -14}, {2, -10}, {3, -7}, {-1, -13} } },
	[14] = { .set = { {-5, -13}, {-10, -12}, {7, -12}, {-1, -13} } },
	[15] = { .set = { {-5, -13}, {-10, -12}, {7, -12}, {-1, -13} } },
	[16] = { .set = { {-1, -13}, {-12, -10}, {10, -10}, {-1, -11} } },
	[17] = { .set = { {-1, -10}, {-11, -10}, {9, -10}, {-1, -9} } },
	[18] = { .set = { {-1, -10}, {-11, -10}, {9, -10}, {-1, -9} } },
	[19] = { .set = { {2, -13}, {7, -14}, {-9, -7}, {-1, -11} } },
	[20] = { .set = { {3, -11}, {8, -10}, {-9, -10}, {-1, -11} } },
	[21] = { .set = { {3, -11}, {8, -10}, {-9, -10}, {-1, -11} } },
	[22] = { .set = { {4, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[23] = { .set = { {5, -12}, {-4, -8}, {-5, -5}, {-1, -11} } },
	[24] = { .set = { {5, -12}, {-4, -8}, {-5, -5}, {-1, -11} } },
	[25] = { .set = { {1, -16}, {-6, -10}, {8, -8}, {-2, -11} } },
	[26] = { .set = { {4, -16}, {-3, -11}, {6, -7}, {0, -13} } },
	[27] = { .set = { {3, -16}, {-3, -11}, {6, -7}, {1, -13} } },
	[28] = { .set = { {-1, -15}, {10, -11}, {-11, -11}, {-1, -11} } },
	[29] = { .set = { {-1, -16}, {10, -11}, {-11, -11}, {-1, -12} } },
	[30] = { .set = { {-1, -16}, {10, -11}, {-11, -11}, {-1, -12} } },
	[31] = { .set = { {-3, -16}, {4, -10}, {-10, -8}, {0, -11} } },
	[32] = { .set = { {-6, -16}, {1, -11}, {-8, -7}, {-2, -13} } },
	[33] = { .set = { {-5, -16}, {1, -11}, {-8, -7}, {-3, -13} } },
	[34] = { .set = { {-6, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[35] = { .set = { {-7, -12}, {2, -8}, {3, -5}, {-1, -11} } },
	[36] = { .set = { {-7, -12}, {2, -8}, {3, -5}, {-1, -11} } },
	[37] = { .set = { {-4, -13}, {-9, -14}, {7, -7}, {-1, -11} } },
	[38] = { .set = { {-5, -11}, {-10, -10}, {7, -10}, {-1, -11} } },
	[39] = { .set = { {-5, -11}, {-10, -10}, {7, -10}, {-1, -11} } },
	[40] = { .set = { {-1, -13}, {-12, -10}, {10, -10}, {-1, -11} } },
	[41] = { .set = { {-1, -10}, {-11, -10}, {9, -10}, {-1, -9} } },
	[42] = { .set = { {-1, -10}, {-11, -10}, {9, -10}, {-1, -9} } },
	[43] = { .set = { {2, -13}, {7, -14}, {-9, -7}, {-1, -11} } },
	[44] = { .set = { {3, -11}, {8, -10}, {-9, -10}, {-1, -11} } },
	[45] = { .set = { {3, -11}, {8, -10}, {-9, -10}, {-1, -11} } },
	[46] = { .set = { {4, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[47] = { .set = { {5, -12}, {-4, -8}, {-5, -5}, {-1, -11} } },
	[48] = { .set = { {5, -12}, {-4, -8}, {-5, -5}, {-1, -11} } },
	[49] = { .set = { {1, -16}, {-6, -10}, {8, -8}, {-2, -11} } },
	[50] = { .set = { {4, -16}, {-3, -11}, {6, -7}, {0, -13} } },
	[51] = { .set = { {3, -16}, {-3, -11}, {6, -7}, {1, -13} } },
	[52] = { .set = { {-1, -15}, {10, -11}, {-11, -11}, {-1, -11} } },
	[53] = { .set = { {-1, -16}, {10, -11}, {-11, -11}, {-1, -12} } },
	[54] = { .set = { {-1, -16}, {10, -11}, {-11, -11}, {-1, -12} } },
	[55] = { .set = { {-3, -16}, {4, -10}, {-10, -8}, {0, -11} } },
	[56] = { .set = { {-6, -16}, {1, -11}, {-8, -7}, {-2, -13} } },
	[57] = { .set = { {-5, -16}, {1, -11}, {-8, -7}, {-3, -13} } },
	[58] = { .set = { {-6, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[59] = { .set = { {-7, -12}, {2, -8}, {3, -5}, {-1, -11} } },
	[60] = { .set = { {-7, -12}, {2, -8}, {3, -5}, {-1, -11} } },
	[61] = { .set = { {-4, -13}, {-9, -14}, {7, -7}, {-1, -11} } },
	[62] = { .set = { {-5, -11}, {-10, -10}, {7, -10}, {-1, -11} } },
	[63] = { .set = { {-5, -11}, {-10, -10}, {7, -10}, {-1, -11} } },
	[64] = { .set = { {-1, -13}, {-12, -10}, {10, -10}, {-1, -11} } },
	[65] = { .set = { {-1, -13}, {-11, -12}, {10, -12}, {-1, -10} } },
	[66] = { .set = { {2, -13}, {7, -14}, {-9, -7}, {-1, -11} } },
	[67] = { .set = { {2, -13}, {8, -13}, {-4, -8}, {-2, -10} } },
	[68] = { .set = { {4, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[69] = { .set = { {4, -14}, {7, -16}, {6, -11}, {-1, -9} } },
	[70] = { .set = { {1, -16}, {-6, -10}, {8, -8}, {-2, -11} } },
	[71] = { .set = { {1, -16}, {-1, -19}, {9, -15}, {-3, -11} } },
	[72] = { .set = { {-1, -15}, {10, -11}, {-11, -11}, {-1, -11} } },
	[73] = { .set = { {-1, -15}, {8, -16}, {-9, -16}, {-1, -10} } },
	[74] = { .set = { {-3, -16}, {4, -10}, {-10, -8}, {0, -11} } },
	[75] = { .set = { {-3, -16}, {-1, -19}, {-11, -15}, {1, -11} } },
	[76] = { .set = { {-6, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[77] = { .set = { {-6, -14}, {-9, -16}, {-8, -11}, {-1, -9} } },
	[78] = { .set = { {-4, -13}, {-9, -14}, {7, -7}, {-1, -11} } },
	[79] = { .set = { {-4, -13}, {-10, -13}, {2, -8}, {0, -10} } },
	[80] = { .set = { {-1, -13}, {-12, -10}, {10, -10}, {-1, -11} } },
	[81] = { .set = { {-1, -13}, {-11, -12}, {10, -12}, {-1, -10} } },
	[82] = { .set = { {-1, -13}, {-13, -19}, {10, -18}, {-1, -11} } },
	[83] = { .set = { {2, -13}, {7, -14}, {-9, -7}, {-1, -11} } },
	[84] = { .set = { {2, -13}, {8, -13}, {-4, -8}, {-2, -10} } },
	[85] = { .set = { {2, -13}, {6, -23}, {-10, -17}, {-2, -10} } },
	[86] = { .set = { {4, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[87] = { .set = { {4, -14}, {7, -16}, {6, -11}, {-1, -9} } },
	[88] = { .set = { {4, -14}, {-1, -20}, {-1, -18}, {-1, -10} } },
	[89] = { .set = { {1, -16}, {-6, -10}, {8, -8}, {-2, -11} } },
	[90] = { .set = { {1, -16}, {-1, -19}, {9, -15}, {-3, -11} } },
	[91] = { .set = { {1, -16}, {-7, -20}, {7, -17}, {-3, -11} } },
	[92] = { .set = { {-1, -15}, {10, -11}, {-11, -11}, {-1, -11} } },
	[93] = { .set = { {-1, -15}, {8, -16}, {-9, -16}, {-1, -10} } },
	[94] = { .set = { {-1, -13}, {11, -18}, {-12, -18}, {-1, -9} } },
	[95] = { .set = { {-3, -16}, {4, -10}, {-10, -8}, {0, -11} } },
	[96] = { .set = { {-3, -16}, {-1, -19}, {-11, -15}, {1, -11} } },
	[97] = { .set = { {-3, -16}, {5, -20}, {-9, -17}, {1, -11} } },
	[98] = { .set = { {-6, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[99] = { .set = { {-6, -14}, {-9, -16}, {-8, -11}, {-1, -9} } },
	[100] = { .set = { {-6, -14}, {-1, -20}, {-1, -18}, {-1, -10} } },
	[101] = { .set = { {-4, -13}, {-9, -14}, {7, -7}, {-1, -11} } },
	[102] = { .set = { {-4, -13}, {-10, -13}, {2, -8}, {0, -10} } },
	[103] = { .set = { {-4, -13}, {-8, -23}, {8, -17}, {0, -10} } },
	[104] = { .set = { {-5, -7}, {-10, -7}, {10, -3}, {0, -7} } },
	[105] = { .set = { {-5, -6}, {-10, -7}, {10, -2}, {0, -6} } },
	[106] = { .set = { {0, -18}, {-11, -15}, {12, -10}, {0, -15} } },
	[107] = { .set = { {2, -17}, {9, -17}, {-12, -5}, {-1, -14} } },
	[108] = { .set = { {2, -20}, {6, -21}, {2, -9}, {-1, -15} } },
	[109] = { .set = { {0, -20}, {-14, -19}, {11, -13}, {-1, -13} } },
	[110] = { .set = { {0, -19}, {13, -17}, {-12, -14}, {0, -13} } },
	[111] = { .set = { {-1, -20}, {13, -19}, {-12, -13}, {0, -13} } },
	[112] = { .set = { {-3, -20}, {-7, -21}, {-3, -9}, {0, -15} } },
	[113] = { .set = { {-3, -17}, {-10, -17}, {11, -5}, {0, -14} } },
	[114] = { .set = { {-1, -13}, {-12, -10}, {10, -10}, {-1, -11} } },
	[115] = { .set = { {-1, -13}, {-11, -10}, {10, -10}, {-1, -10} } },
	[116] = { .set = { {-1, -13}, {-11, -10}, {10, -10}, {-1, -10} } },
	[117] = { .set = { {2, -13}, {7, -14}, {-9, -7}, {-1, -11} } },
	[118] = { .set = { {2, -13}, {6, -14}, {-9, -6}, {-1, -11} } },
	[119] = { .set = { {2, -13}, {6, -14}, {-9, -6}, {-1, -11} } },
	[120] = { .set = { {4, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[121] = { .set = { {4, -14}, {-1, -10}, {-1, -3}, {-1, -11} } },
	[122] = { .set = { {4, -14}, {-1, -10}, {-1, -3}, {-1, -11} } },
	[123] = { .set = { {1, -16}, {-6, -10}, {8, -8}, {-2, -11} } },
	[124] = { .set = { {1, -15}, {-7, -10}, {8, -7}, {-2, -11} } },
	[125] = { .set = { {2, -16}, {-7, -10}, {8, -7}, {-2, -11} } },
	[126] = { .set = { {-1, -15}, {10, -11}, {-11, -11}, {-1, -11} } },
	[127] = { .set = { {-1, -14}, {10, -11}, {-11, -11}, {-1, -10} } },
	[128] = { .set = { {-1, -14}, {10, -11}, {-11, -11}, {-1, -10} } },
	[129] = { .set = { {-3, -16}, {4, -10}, {-10, -8}, {0, -11} } },
	[130] = { .set = { {-3, -15}, {5, -10}, {-10, -7}, {0, -11} } },
	[131] = { .set = { {-4, -16}, {5, -10}, {-10, -7}, {0, -11} } },
	[132] = { .set = { {-6, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[133] = { .set = { {-6, -14}, {-1, -10}, {-1, -3}, {-1, -11} } },
	[134] = { .set = { {-6, -14}, {-1, -10}, {-1, -3}, {-1, -11} } },
	[135] = { .set = { {-4, -13}, {-9, -14}, {7, -7}, {-1, -11} } },
	[136] = { .set = { {-4, -13}, {-8, -14}, {7, -6}, {-1, -11} } },
	[137] = { .set = { {-4, -13}, {-8, -14}, {7, -6}, {-1, -11} } },
	[138] = { .set = { {-1, -13}, {-11, -12}, {10, -12}, {-1, -10} } },
	[139] = { .set = { {-4, -13}, {-10, -13}, {2, -8}, {0, -10} } },
	[140] = { .set = { {-6, -14}, {-9, -16}, {-8, -11}, {-1, -9} } },
	[141] = { .set = { {-3, -16}, {-1, -19}, {-11, -15}, {1, -11} } },
	[142] = { .set = { {-1, -15}, {8, -16}, {-9, -16}, {-1, -10} } },
	[143] = { .set = { {1, -16}, {-1, -19}, {9, -15}, {-3, -11} } },
	[144] = { .set = { {4, -14}, {7, -16}, {6, -11}, {-1, -9} } },
	[145] = { .set = { {2, -13}, {8, -13}, {-4, -8}, {-2, -10} } },
	[146] = { .set = { {-1, -13}, {-13, -19}, {10, -18}, {-1, -11} } },
	[147] = { .set = { {2, -13}, {6, -23}, {-10, -17}, {-2, -10} } },
	[148] = { .set = { {4, -14}, {-1, -20}, {-1, -18}, {-1, -10} } },
	[149] = { .set = { {1, -16}, {-7, -20}, {7, -17}, {-3, -11} } },
	[150] = { .set = { {-1, -13}, {11, -18}, {-12, -18}, {-1, -9} } },
	[151] = { .set = { {-3, -16}, {5, -20}, {-9, -17}, {1, -11} } },
	[152] = { .set = { {-6, -14}, {-1, -20}, {-1, -18}, {-1, -10} } },
	[153] = { .set = { {-4, -13}, {-8, -23}, {8, -17}, {0, -10} } },
	[154] = { .set = { {-1, -13}, {-12, -10}, {10, -10}, {-1, -11} } },
	[155] = { .set = { {-1, -13}, {-13, -19}, {10, -18}, {-1, -11} } },
	[156] = { .set = { {-1, -11}, {-11, -11}, {9, -11}, {-1, -10} } },
	[157] = { .set = { {2, -13}, {7, -14}, {-9, -7}, {-1, -11} } },
	[158] = { .set = { {2, -13}, {6, -23}, {-10, -17}, {-2, -10} } },
	[159] = { .set = { {3, -11}, {8, -10}, {-9, -10}, {-1, -11} } },
	[160] = { .set = { {4, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[161] = { .set = { {4, -14}, {-1, -20}, {-1, -18}, {-1, -10} } },
	[162] = { .set = { {5, -12}, {-4, -8}, {-5, -5}, {-1, -11} } },
	[163] = { .set = { {1, -16}, {-6, -10}, {8, -8}, {-2, -11} } },
	[164] = { .set = { {1, -16}, {-7, -20}, {7, -17}, {-3, -11} } },
	[165] = { .set = { {3, -16}, {-3, -11}, {6, -7}, {1, -13} } },
	[166] = { .set = { {-1, -15}, {10, -11}, {-11, -11}, {-1, -11} } },
	[167] = { .set = { {-1, -13}, {11, -18}, {-12, -18}, {-1, -9} } },
	[168] = { .set = { {-1, -16}, {10, -11}, {-11, -11}, {-1, -12} } },
	[169] = { .set = { {-3, -16}, {4, -10}, {-10, -8}, {0, -11} } },
	[170] = { .set = { {-3, -16}, {5, -20}, {-9, -17}, {1, -11} } },
	[171] = { .set = { {-5, -16}, {1, -11}, {-8, -7}, {-3, -13} } },
	[172] = { .set = { {-6, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[173] = { .set = { {-6, -14}, {-1, -20}, {-1, -18}, {-1, -10} } },
	[174] = { .set = { {-7, -12}, {2, -8}, {3, -5}, {-1, -11} } },
	[175] = { .set = { {-4, -13}, {-9, -14}, {7, -7}, {-1, -11} } },
	[176] = { .set = { {-4, -13}, {-8, -23}, {8, -17}, {0, -10} } },
	[177] = { .set = { {-5, -11}, {-10, -10}, {7, -10}, {-1, -11} } },
	[178] = { .set = { {-1, -13}, {-11, -12}, {10, -12}, {-1, -10} } },
	[179] = { .set = { {-4, -13}, {-10, -13}, {2, -8}, {0, -10} } },
	[180] = { .set = { {-6, -14}, {-9, -16}, {-8, -11}, {-1, -9} } },
	[181] = { .set = { {-3, -16}, {-1, -19}, {-11, -15}, {1, -11} } },
	[182] = { .set = { {-1, -15}, {8, -16}, {-9, -16}, {-1, -10} } },
	[183] = { .set = { {1, -16}, {-1, -19}, {9, -15}, {-3, -11} } },
	[184] = { .set = { {4, -14}, {7, -16}, {6, -11}, {-1, -9} } },
	[185] = { .set = { {2, -13}, {8, -13}, {-4, -8}, {-2, -10} } },
	[186] = { .set = { {-1, -13}, {-12, -10}, {10, -10}, {-1, -11} } },
	[187] = { .set = { {-4, -13}, {-9, -14}, {7, -7}, {-1, -11} } },
	[188] = { .set = { {-6, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[189] = { .set = { {-3, -16}, {4, -10}, {-10, -8}, {0, -11} } },
	[190] = { .set = { {-1, -15}, {10, -11}, {-11, -11}, {-1, -11} } },
	[191] = { .set = { {1, -16}, {-6, -10}, {8, -8}, {-2, -11} } },
	[192] = { .set = { {4, -14}, {-1, -8}, {-1, -3}, {-1, -12} } },
	[193] = { .set = { {2, -13}, {7, -14}, {-9, -7}, {-1, -11} } },
};

static const ax_anim *const sRegiceAnimTable1[] = {
	AX_ANIM_PTR(sRegiceAnims_1_1),
	AX_ANIM_PTR(sRegiceAnims_1_2),
	AX_ANIM_PTR(sRegiceAnims_1_3),
	AX_ANIM_PTR(sRegiceAnims_1_4),
	AX_ANIM_PTR(sRegiceAnims_1_5),
	AX_ANIM_PTR(sRegiceAnims_1_6),
	AX_ANIM_PTR(sRegiceAnims_1_7),
	AX_ANIM_PTR(sRegiceAnims_1_8),
};

static const ax_anim *const sRegiceAnimTable2[] = {
	AX_ANIM_PTR(sRegiceAnims_2_1),
	AX_ANIM_PTR(sRegiceAnims_2_2),
	AX_ANIM_PTR(sRegiceAnims_2_3),
	AX_ANIM_PTR(sRegiceAnims_2_4),
	AX_ANIM_PTR(sRegiceAnims_2_5),
	AX_ANIM_PTR(sRegiceAnims_2_6),
	AX_ANIM_PTR(sRegiceAnims_2_7),
	AX_ANIM_PTR(sRegiceAnims_2_8),
};

static const ax_anim *const sRegiceAnimTable3[] = {
	AX_ANIM_PTR(sRegiceAnims_3_1),
	AX_ANIM_PTR(sRegiceAnims_3_2),
	AX_ANIM_PTR(sRegiceAnims_3_3),
	AX_ANIM_PTR(sRegiceAnims_3_4),
	AX_ANIM_PTR(sRegiceAnims_3_5),
	AX_ANIM_PTR(sRegiceAnims_3_6),
	AX_ANIM_PTR(sRegiceAnims_3_7),
	AX_ANIM_PTR(sRegiceAnims_3_8),
};

static const ax_anim *const sRegiceAnimTable4[] = {
	AX_ANIM_PTR(sRegiceAnims_4_1),
	AX_ANIM_PTR(sRegiceAnims_4_2),
	AX_ANIM_PTR(sRegiceAnims_4_3),
	AX_ANIM_PTR(sRegiceAnims_4_4),
	AX_ANIM_PTR(sRegiceAnims_4_5),
	AX_ANIM_PTR(sRegiceAnims_4_6),
	AX_ANIM_PTR(sRegiceAnims_4_7),
	AX_ANIM_PTR(sRegiceAnims_4_8),
};

static const ax_anim *const sRegiceAnimTable5[] = {
	AX_ANIM_PTR(sRegiceAnims_5_1),
	AX_ANIM_PTR(sRegiceAnims_5_2),
	AX_ANIM_PTR(sRegiceAnims_5_3),
	AX_ANIM_PTR(sRegiceAnims_5_4),
	AX_ANIM_PTR(sRegiceAnims_5_5),
	AX_ANIM_PTR(sRegiceAnims_5_6),
	AX_ANIM_PTR(sRegiceAnims_5_7),
	AX_ANIM_PTR(sRegiceAnims_5_8),
};

static const ax_anim *const sRegiceAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
};

static const ax_anim *const sRegiceAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00194),
	AX_ANIM_PTR(gAxSharedAnim_00202),
	AX_ANIM_PTR(gAxSharedAnim_00211),
	AX_ANIM_PTR(gAxSharedAnim_00219),
	AX_ANIM_PTR(gAxSharedAnim_00233),
	AX_ANIM_PTR(gAxSharedAnim_00245),
	AX_ANIM_PTR(gAxSharedAnim_00254),
	AX_ANIM_PTR(gAxSharedAnim_00260),
};

static const ax_anim *const sRegiceAnimTable8[] = {
	AX_ANIM_PTR(sRegiceAnims_8_1),
	AX_ANIM_PTR(sRegiceAnims_8_2),
	AX_ANIM_PTR(sRegiceAnims_8_3),
	AX_ANIM_PTR(sRegiceAnims_8_4),
	AX_ANIM_PTR(sRegiceAnims_8_5),
	AX_ANIM_PTR(sRegiceAnims_8_6),
	AX_ANIM_PTR(sRegiceAnims_8_7),
	AX_ANIM_PTR(sRegiceAnims_8_8),
};

static const ax_anim *const sRegiceAnimTable9[] = {
	AX_ANIM_PTR(sRegiceAnims_9_1),
	AX_ANIM_PTR(sRegiceAnims_9_2),
	AX_ANIM_PTR(sRegiceAnims_9_3),
	AX_ANIM_PTR(sRegiceAnims_9_4),
	AX_ANIM_PTR(sRegiceAnims_9_5),
	AX_ANIM_PTR(sRegiceAnims_9_6),
	AX_ANIM_PTR(sRegiceAnims_9_7),
	AX_ANIM_PTR(sRegiceAnims_9_8),
};

static const ax_anim *const sRegiceAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00540),
	AX_ANIM_PTR(gAxSharedAnim_00547),
	AX_ANIM_PTR(gAxSharedAnim_00555),
	AX_ANIM_PTR(gAxSharedAnim_00564),
	AX_ANIM_PTR(gAxSharedAnim_00574),
	AX_ANIM_PTR(gAxSharedAnim_00584),
	AX_ANIM_PTR(gAxSharedAnim_00593),
	AX_ANIM_PTR(gAxSharedAnim_00600),
};

static const ax_anim *const sRegiceAnimTable11[] = {
	AX_ANIM_PTR(sRegiceAnims_11_1),
	AX_ANIM_PTR(sRegiceAnims_11_2),
	AX_ANIM_PTR(sRegiceAnims_11_3),
	AX_ANIM_PTR(sRegiceAnims_11_4),
	AX_ANIM_PTR(sRegiceAnims_11_5),
	AX_ANIM_PTR(sRegiceAnims_11_6),
	AX_ANIM_PTR(sRegiceAnims_11_7),
	AX_ANIM_PTR(sRegiceAnims_11_8),
};

static const ax_anim *const sRegiceAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00907),
	AX_ANIM_PTR(gAxSharedAnim_00996),
	AX_ANIM_PTR(gAxSharedAnim_00971),
	AX_ANIM_PTR(gAxSharedAnim_00960),
	AX_ANIM_PTR(gAxSharedAnim_00959),
	AX_ANIM_PTR(gAxSharedAnim_00945),
	AX_ANIM_PTR(gAxSharedAnim_00925),
	AX_ANIM_PTR(gAxSharedAnim_00908),
};

static const ax_anim *const sRegiceAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01017),
	AX_ANIM_PTR(gAxSharedAnim_01123),
	AX_ANIM_PTR(gAxSharedAnim_01112),
	AX_ANIM_PTR(gAxSharedAnim_01093),
	AX_ANIM_PTR(gAxSharedAnim_01079),
	AX_ANIM_PTR(gAxSharedAnim_01063),
	AX_ANIM_PTR(gAxSharedAnim_01048),
	AX_ANIM_PTR(gAxSharedAnim_01028),
};

static const ax_anim *const *const sAxAnimationsRegice[] = {
	sRegiceAnimTable1,
	sRegiceAnimTable2,
	sRegiceAnimTable3,
	sRegiceAnimTable4,
	sRegiceAnimTable5,
	sRegiceAnimTable6,
	sRegiceAnimTable7,
	sRegiceAnimTable8,
	sRegiceAnimTable9,
	sRegiceAnimTable10,
	sRegiceAnimTable11,
	sRegiceAnimTable12,
	sRegiceAnimTable13,
};

static const ax_sprite *const sAxSpritesRegice[] = {
	sRegiceSprites1,
	sRegiceSprites2,
	sRegiceSprites3,
	sRegiceSprites4,
	sRegiceSprites5,
	sRegiceSprites6,
	sRegiceSprites7,
	sRegiceSprites8,
	sRegiceSprites9,
	sRegiceSprites10,
	sRegiceSprites11,
	sRegiceSprites12,
	sRegiceSprites13,
	sRegiceSprites14,
	sRegiceSprites15,
	sRegiceSprites16,
	sRegiceSprites17,
	sRegiceSprites18,
	sRegiceSprites19,
	sRegiceSprites20,
	sRegiceSprites21,
	sRegiceSprites22,
	sRegiceSprites23,
	sRegiceSprites24,
	sRegiceSprites25,
	sRegiceSprites26,
	sRegiceSprites27,
	sRegiceSprites28,
	sRegiceSprites29,
	sRegiceSprites30,
	sRegiceSprites31,
	sRegiceSprites32,
	sRegiceSprites33,
	sRegiceSprites34,
	sRegiceSprites35,
	sRegiceSprites36,
	sRegiceSprites37,
	sRegiceSprites38,
	sRegiceSprites39,
	sRegiceSprites40,
	sRegiceSprites41,
	sRegiceSprites42,
	sRegiceSprites43,
	sRegiceSprites44,
	sRegiceSprites45,
	sRegiceSprites46,
	sRegiceSprites47,
	sRegiceSprites48,
	sRegiceSprites49,
	sRegiceSprites50,
	sRegiceSprites51,
	sRegiceSprites52,
	sRegiceSprites53,
	sRegiceSprites54,
	sRegiceSprites55,
	sRegiceSprites56,
	sRegiceSprites57,
	sRegiceSprites58,
	sRegiceSprites59,
	sRegiceSprites60,
};

static const axmain sAxMainRegice = {
	.poses = sAxPosesRegice,
	.animations = sAxAnimationsRegice,
	.animCount = ARRAY_COUNT(sAxAnimationsRegice),
	.spriteData = sAxSpritesRegice,
	.positions = sAxPositionsRegice,
};
