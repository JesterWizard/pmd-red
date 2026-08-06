/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainAltaria;
const SiroArchive gAxAltaria = {"SIRO", &sAxMainAltaria};

static const ax_pose sAltariaPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 5)),
	AX_POSE(2, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(3, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose2[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose3[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose4[] = {
	AX_POSE(6, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(7, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(8, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose5[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose6[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose7[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose8[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose9[] = {
	AX_POSE(13, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose10[] = {
	AX_POSE(14, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(15, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(16, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE(17, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose11[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose12[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose13[] = {
	AX_POSE(20, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(21, OAM1(233, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(22, OAM1(225, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(23, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(7, 3, 5)),
	AX_POSE(24, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose14[] = {
	AX_POSE(25, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose15[] = {
	AX_POSE(26, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose16[] = {
	AX_POSE(14, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(15, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(16, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE(17, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose17[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose18[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose19[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose20[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose21[] = {
	AX_POSE(13, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose22[] = {
	AX_POSE(6, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(7, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(8, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose23[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose24[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose26[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose27[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose29[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose30[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose32[] = {
	AX_POSE(12, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose33[] = {
	AX_POSE(13, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose35[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose36[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose38[] = {
	AX_POSE(25, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose39[] = {
	AX_POSE(26, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose41[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose42[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose44[] = {
	AX_POSE(12, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose45[] = {
	AX_POSE(13, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose47[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose48[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose76[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(1, 3, 5)),
	AX_POSE(29, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 5)),
	AX_POSE(30, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose77[] = {
	AX_POSE(31, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(32, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose78[] = {
	AX_POSE(33, OAM1(247, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose82[] = {
	AX_POSE(35, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(36, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(37, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose83[] = {
	AX_POSE(38, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(39, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose84[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose88[] = {
	AX_POSE(41, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(42, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose89[] = {
	AX_POSE(43, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(44, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose90[] = {
	AX_POSE(45, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(46, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(47, OAM1(250, ST_OAM_H_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose94[] = {
	AX_POSE(48, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(49, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(50, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE(51, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose95[] = {
	AX_POSE(52, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(53, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(54, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose96[] = {
	AX_POSE(55, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose100[] = {
	AX_POSE(56, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(57, OAM1(233, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(58, OAM1(225, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(59, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(7, 3, 5)),
	AX_POSE(60, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(15, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose101[] = {
	AX_POSE(61, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose102[] = {
	AX_POSE(62, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(63, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose106[] = {
	AX_POSE(48, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(49, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(50, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(9, 3, 5)),
	AX_POSE(51, OAM1(253, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose107[] = {
	AX_POSE(52, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(53, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(54, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose108[] = {
	AX_POSE(55, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose112[] = {
	AX_POSE(41, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(42, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose113[] = {
	AX_POSE(43, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(44, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose114[] = {
	AX_POSE(45, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(46, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(47, OAM1(250, ST_OAM_H_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(10, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose118[] = {
	AX_POSE(35, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(36, OAM1(229, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(37, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose119[] = {
	AX_POSE(38, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(39, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose120[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose145[] = {
	AX_POSE(64, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose146[] = {
	AX_POSE(65, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose147[] = {
	AX_POSE(66, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(254, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(67, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 5)),
	AX_POSE(68, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(5, 3, 5)),
	AX_POSE(69, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(6, 3, 5)),
	AX_POSE(70, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose148[] = {
	AX_POSE(71, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose149[] = {
	AX_POSE(72, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose150[] = {
	AX_POSE(73, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose151[] = {
	AX_POSE(74, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(75, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(1, 3, 5)),
	AX_POSE(76, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(3, 3, 5)),
	AX_POSE(77, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 5)),
	AX_POSE(78, OAM1(247, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(5, 3, 5)),
	AX_POSE(79, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(6, 3, 5)),
	AX_POSE(80, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose152[] = {
	AX_POSE(73, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose153[] = {
	AX_POSE(72, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose154[] = {
	AX_POSE(71, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose158[] = {
	AX_POSE(81, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose162[] = {
	AX_POSE(82, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose166[] = {
	AX_POSE(83, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose170[] = {
	AX_POSE(84, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose174[] = {
	AX_POSE(85, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose178[] = {
	AX_POSE(84, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose182[] = {
	AX_POSE(83, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose186[] = {
	AX_POSE(82, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose189[] = {
	AX_POSE(43, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(44, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose190[] = {
	AX_POSE(52, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(53, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(54, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose192[] = {
	AX_POSE(52, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(53, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(54, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose193[] = {
	AX_POSE(43, OAM1(228, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(44, OAM1(244, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose197[] = {
	AX_POSE(41, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(42, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAltariaPose201[] = {
	AX_POSE(41, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(42, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sAltariaAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 24, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 10}, .shadow = {0, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 24}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {1, 24}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 24}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {1, 24}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 8}, .shadow = {0, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 27, .offset = {4, 6}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {10, 13}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {19, 25}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {20, 24}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {19, 25}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {20, 24}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {8, 11}, .shadow = {8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 30, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {10, 2}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {19, 3}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {19, 4}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {19, 3}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {19, 4}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {8, 2}, .shadow = {8, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 33, .offset = {5, -3}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {11, -8}, .shadow = {11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, -12}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {19, -11}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, -12}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {19, -11}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {8, -6}, .shadow = {8, -8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 36, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -6}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -12}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {1, -12}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -12}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {1, -12}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -5}, .shadow = {0, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 39, .offset = {-5, -3}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {-11, -8}, .shadow = {-11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-18, -12}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 41, .offset = {-19, -11}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-18, -12}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-19, -11}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-8, -6}, .shadow = {-8, -8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 42, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {-10, 2}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-19, 3}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-19, 4}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-19, 3}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-19, 4}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-8, 2}, .shadow = {-8, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 45, .offset = {-4, 6}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-10, 13}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-19, 25}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-20, 24}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-19, 25}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-20, 24}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-8, 11}, .shadow = {-8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 48, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 10}, .shadow = {0, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 24}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 50, .offset = {1, 24}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 24}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 24}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 8}, .shadow = {0, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 51, .offset = {4, 6}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {10, 13}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {19, 25}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {20, 24}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {19, 25}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {20, 24}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {8, 11}, .shadow = {8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 54, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {10, 2}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {19, 3}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 56, .offset = {19, 4}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {19, 3}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {19, 4}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {8, 2}, .shadow = {8, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 57, .offset = {5, -3}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {11, -8}, .shadow = {11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {18, -12}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {19, -11}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {18, -12}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {19, -11}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {8, -6}, .shadow = {8, -8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 60, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, -6}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -12}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 62, .offset = {1, -12}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -12}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {1, -12}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -5}, .shadow = {0, -7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 63, .offset = {-5, -3}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {-11, -8}, .shadow = {-11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-18, -12}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 65, .offset = {-19, -11}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-18, -12}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-19, -11}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-8, -6}, .shadow = {-8, -8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 66, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {-10, 2}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-19, 3}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {-19, 4}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-19, 3}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-19, 4}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-8, 2}, .shadow = {-8, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 69, .offset = {-4, 6}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-10, 13}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-19, 25}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {-20, 24}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-19, 25}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-20, 24}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-8, 11}, .shadow = {-8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 74, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 77, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 92, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 104, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_5_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_5_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_8_1[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 156, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 155, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 156, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 155, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 156, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_8_2[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 159, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 159, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_8_3[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_8_4[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 168, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 168, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 168, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_8_5[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 171, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 171, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_8_6[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 176, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 176, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 176, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_8_7[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 180, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 179, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 180, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 179, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 180, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_8_8[] = {
	{ .frames = 60, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 184, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 184, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 184, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {6, 2}, .shadow = {6, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {8, 12}, .shadow = {8, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {4, 21}, .shadow = {4, 19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, 25}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 191, .offset = {-4, 21}, .shadow = {-4, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {-8, 12}, .shadow = {-8, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {-6, 2}, .shadow = {-6, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {11, 1}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {20, 5}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {24, 14}, .shadow = {21, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {20, 24}, .shadow = {17, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 190, .offset = {13, 25}, .shadow = {13, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {4, 20}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, 10}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {4, -5}, .shadow = {4, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {12, -5}, .shadow = {12, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {18, -2}, .shadow = {18, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {20, 5}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 189, .offset = {17, 10}, .shadow = {17, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {11, 12}, .shadow = {11, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {4, 8}, .shadow = {4, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {2, -11}, .shadow = {3, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {11, -14}, .shadow = {10, -16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {17, -14}, .shadow = {16, -18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 188, .offset = {20, -9}, .shadow = {20, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {17, -2}, .shadow = {17, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {9, 2}, .shadow = {9, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {-8, -9}, .shadow = {-8, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {-6, -13}, .shadow = {-6, -15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {0, -14}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 3, .poseId = 187, .offset = {6, -13}, .shadow = {6, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {8, -9}, .shadow = {8, -9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {-3, -11}, .shadow = {-3, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {-10, -14}, .shadow = {-10, -16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {-17, -14}, .shadow = {-16, -18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 192, .offset = {-20, -9}, .shadow = {-20, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {-17, -2}, .shadow = {-17, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {-9, 2}, .shadow = {-9, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {-4, -5}, .shadow = {-4, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {-12, -5}, .shadow = {-12, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {-18, -2}, .shadow = {-18, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 192, .offset = {-20, 5}, .shadow = {-20, -1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 191, .offset = {-17, 10}, .shadow = {-17, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {-11, 12}, .shadow = {-11, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {-4, 8}, .shadow = {-4, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {-11, 1}, .shadow = {-11, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {-20, 5}, .shadow = {-20, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {-24, 14}, .shadow = {-21, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {-20, 24}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 190, .offset = {-13, 25}, .shadow = {-13, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {-4, 20}, .shadow = {-4, 20} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 204, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 204, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 204, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 202, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 203, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 203, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 203, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 203, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 207, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 207, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 207, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 207, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 205, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 206, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 206, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 206, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 206, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 208, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 210, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 210, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 210, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 208, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 209, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 209, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 209, .offset = {0, 6}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 213, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 213, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 213, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 211, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 212, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 212, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 212, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 216, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 216, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 216, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 216, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 214, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 215, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 215, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 215, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 215, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 219, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 219, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 217, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 218, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 218, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 222, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 222, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 222, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 220, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 221, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 221, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 221, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 221, .offset = {0, 6}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAltariaAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 223, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 225, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 225, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 223, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 224, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 224, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sAltariaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_1.4bpp.lz");
static const ax_sprite sAltariaSprites1[] = {
	{sAltariaGfx1, ARRAY_COUNT(sAltariaGfx1)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_2.4bpp.lz");
static const ax_sprite sAltariaSprites2[] = {
	{sAltariaGfx2, ARRAY_COUNT(sAltariaGfx2)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_3.4bpp.lz");
static const ax_sprite sAltariaSprites3[] = {
	{sAltariaGfx3, ARRAY_COUNT(sAltariaGfx3)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_4.4bpp.lz");
static const ax_sprite sAltariaSprites4[] = {
	{sAltariaGfx4, ARRAY_COUNT(sAltariaGfx4)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_5.4bpp.lz");
static const ax_sprite sAltariaSprites5[] = {
	{sAltariaGfx5, ARRAY_COUNT(sAltariaGfx5)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_6.4bpp.lz");
static const ax_sprite sAltariaSprites6[] = {
	{sAltariaGfx6, ARRAY_COUNT(sAltariaGfx6)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_7.4bpp.lz");
static const ax_sprite sAltariaSprites7[] = {
	{sAltariaGfx7, ARRAY_COUNT(sAltariaGfx7)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_8.4bpp.lz");
static const ax_sprite sAltariaSprites8[] = {
	{sAltariaGfx8, ARRAY_COUNT(sAltariaGfx8)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_9.4bpp.lz");
static const ax_sprite sAltariaSprites9[] = {
	{sAltariaGfx9, ARRAY_COUNT(sAltariaGfx9)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_10.4bpp.lz");
static const ax_sprite sAltariaSprites10[] = {
	{sAltariaGfx10, ARRAY_COUNT(sAltariaGfx10)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_11.4bpp.lz");
static const ax_sprite sAltariaSprites11[] = {
	{sAltariaGfx11, ARRAY_COUNT(sAltariaGfx11)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_12.4bpp.lz");
static const ax_sprite sAltariaSprites12[] = {
	{sAltariaGfx12, ARRAY_COUNT(sAltariaGfx12)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_13.4bpp.lz");
static const ax_sprite sAltariaSprites13[] = {
	{sAltariaGfx13, ARRAY_COUNT(sAltariaGfx13)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_14.4bpp.lz");
static const ax_sprite sAltariaSprites14[] = {
	{sAltariaGfx14, ARRAY_COUNT(sAltariaGfx14)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_15.4bpp.lz");
static const ax_sprite sAltariaSprites15[] = {
	{sAltariaGfx15, ARRAY_COUNT(sAltariaGfx15)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_16.4bpp.lz");
static const ax_sprite sAltariaSprites16[] = {
	{sAltariaGfx16, ARRAY_COUNT(sAltariaGfx16)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_17.4bpp.lz");
static const ax_sprite sAltariaSprites17[] = {
	{sAltariaGfx17, ARRAY_COUNT(sAltariaGfx17)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_18.4bpp.lz");
static const ax_sprite sAltariaSprites18[] = {
	{sAltariaGfx18, ARRAY_COUNT(sAltariaGfx18)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_19.4bpp.lz");
static const ax_sprite sAltariaSprites19[] = {
	{sAltariaGfx19, ARRAY_COUNT(sAltariaGfx19)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_20.4bpp.lz");
static const ax_sprite sAltariaSprites20[] = {
	{sAltariaGfx20, ARRAY_COUNT(sAltariaGfx20)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_21.4bpp.lz");
static const ax_sprite sAltariaSprites21[] = {
	{sAltariaGfx21, ARRAY_COUNT(sAltariaGfx21)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_22.4bpp.lz");
static const ax_sprite sAltariaSprites22[] = {
	{sAltariaGfx22, ARRAY_COUNT(sAltariaGfx22)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_23.4bpp.lz");
static const ax_sprite sAltariaSprites23[] = {
	{sAltariaGfx23, ARRAY_COUNT(sAltariaGfx23)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_24.4bpp.lz");
static const ax_sprite sAltariaSprites24[] = {
	{sAltariaGfx24, ARRAY_COUNT(sAltariaGfx24)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_25.4bpp.lz");
static const ax_sprite sAltariaSprites25[] = {
	{sAltariaGfx25, ARRAY_COUNT(sAltariaGfx25)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_26.4bpp.lz");
static const ax_sprite sAltariaSprites26[] = {
	{sAltariaGfx26, ARRAY_COUNT(sAltariaGfx26)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_27.4bpp.lz");
static const ax_sprite sAltariaSprites27[] = {
	{sAltariaGfx27, ARRAY_COUNT(sAltariaGfx27)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_28.4bpp.lz");
static const ax_sprite sAltariaSprites28[] = {
	{sAltariaGfx28, ARRAY_COUNT(sAltariaGfx28)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_29.4bpp.lz");
static const ax_sprite sAltariaSprites29[] = {
	{sAltariaGfx29, ARRAY_COUNT(sAltariaGfx29)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_30.4bpp.lz");
static const ax_sprite sAltariaSprites30[] = {
	{sAltariaGfx30, ARRAY_COUNT(sAltariaGfx30)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_31.4bpp.lz");
static const ax_sprite sAltariaSprites31[] = {
	{sAltariaGfx31, ARRAY_COUNT(sAltariaGfx31)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_32.4bpp.lz");
static const ax_sprite sAltariaSprites32[] = {
	{sAltariaGfx32, ARRAY_COUNT(sAltariaGfx32)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_33.4bpp.lz");
static const ax_sprite sAltariaSprites33[] = {
	{sAltariaGfx33, ARRAY_COUNT(sAltariaGfx33)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_34.4bpp.lz");
static const ax_sprite sAltariaSprites34[] = {
	{sAltariaGfx34, ARRAY_COUNT(sAltariaGfx34)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_35.4bpp.lz");
static const ax_sprite sAltariaSprites35[] = {
	{sAltariaGfx35, ARRAY_COUNT(sAltariaGfx35)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_36.4bpp.lz");
static const ax_sprite sAltariaSprites36[] = {
	{sAltariaGfx36, ARRAY_COUNT(sAltariaGfx36)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_37.4bpp.lz");
static const u8 sAltariaGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_37_1.4bpp.lz");
static const ax_sprite sAltariaSprites37[] = {
	{sAltariaGfx37, ARRAY_COUNT(sAltariaGfx37)}, 
	{NULL, 32}, 
	{sAltariaGfx37_1, ARRAY_COUNT(sAltariaGfx37_1)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_38.4bpp.lz");
static const ax_sprite sAltariaSprites38[] = {
	{sAltariaGfx38, ARRAY_COUNT(sAltariaGfx38)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_39.4bpp.lz");
static const ax_sprite sAltariaSprites39[] = {
	{sAltariaGfx39, ARRAY_COUNT(sAltariaGfx39)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_40.4bpp.lz");
static const ax_sprite sAltariaSprites40[] = {
	{sAltariaGfx40, ARRAY_COUNT(sAltariaGfx40)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_41.4bpp.lz");
static const u8 sAltariaGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_41_1.4bpp.lz");
static const u8 sAltariaGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_41_2.4bpp.lz");
static const ax_sprite sAltariaSprites41[] = {
	{sAltariaGfx41, ARRAY_COUNT(sAltariaGfx41)}, 
	{NULL, 32}, 
	{sAltariaGfx41_1, ARRAY_COUNT(sAltariaGfx41_1)}, 
	{NULL, 32}, 
	{sAltariaGfx41_2, ARRAY_COUNT(sAltariaGfx41_2)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_42.4bpp.lz");
static const ax_sprite sAltariaSprites42[] = {
	{sAltariaGfx42, ARRAY_COUNT(sAltariaGfx42)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_43.4bpp.lz");
static const u8 sAltariaGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_43_1.4bpp.lz");
static const ax_sprite sAltariaSprites43[] = {
	{sAltariaGfx43, ARRAY_COUNT(sAltariaGfx43)}, 
	{NULL, 32}, 
	{sAltariaGfx43_1, ARRAY_COUNT(sAltariaGfx43_1)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_44.4bpp.lz");
static const u8 sAltariaGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_44_1.4bpp.lz");
static const ax_sprite sAltariaSprites44[] = {
	{sAltariaGfx44, ARRAY_COUNT(sAltariaGfx44)}, 
	{NULL, 32}, 
	{sAltariaGfx44_1, ARRAY_COUNT(sAltariaGfx44_1)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_45.4bpp.lz");
static const ax_sprite sAltariaSprites45[] = {
	{sAltariaGfx45, ARRAY_COUNT(sAltariaGfx45)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_46.4bpp.lz");
static const u8 sAltariaGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_46_1.4bpp.lz");
static const ax_sprite sAltariaSprites46[] = {
	{sAltariaGfx46, ARRAY_COUNT(sAltariaGfx46)}, 
	{NULL, 32}, 
	{sAltariaGfx46_1, ARRAY_COUNT(sAltariaGfx46_1)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_47.4bpp.lz");
static const ax_sprite sAltariaSprites47[] = {
	{sAltariaGfx47, ARRAY_COUNT(sAltariaGfx47)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_48.4bpp.lz");
static const ax_sprite sAltariaSprites48[] = {
	{sAltariaGfx48, ARRAY_COUNT(sAltariaGfx48)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_49.4bpp.lz");
static const ax_sprite sAltariaSprites49[] = {
	{sAltariaGfx49, ARRAY_COUNT(sAltariaGfx49)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_50.4bpp.lz");
static const ax_sprite sAltariaSprites50[] = {
	{sAltariaGfx50, ARRAY_COUNT(sAltariaGfx50)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_51.4bpp.lz");
static const ax_sprite sAltariaSprites51[] = {
	{sAltariaGfx51, ARRAY_COUNT(sAltariaGfx51)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_52.4bpp.lz");
static const ax_sprite sAltariaSprites52[] = {
	{sAltariaGfx52, ARRAY_COUNT(sAltariaGfx52)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_53.4bpp.lz");
static const ax_sprite sAltariaSprites53[] = {
	{sAltariaGfx53, ARRAY_COUNT(sAltariaGfx53)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_54.4bpp.lz");
static const ax_sprite sAltariaSprites54[] = {
	{sAltariaGfx54, ARRAY_COUNT(sAltariaGfx54)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_55.4bpp.lz");
static const ax_sprite sAltariaSprites55[] = {
	{sAltariaGfx55, ARRAY_COUNT(sAltariaGfx55)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_56.4bpp.lz");
static const u8 sAltariaGfx56_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_56_1.4bpp.lz");
static const u8 sAltariaGfx56_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_56_2.4bpp.lz");
static const ax_sprite sAltariaSprites56[] = {
	{sAltariaGfx56, ARRAY_COUNT(sAltariaGfx56)}, 
	{NULL, 64}, 
	{sAltariaGfx56_1, ARRAY_COUNT(sAltariaGfx56_1)}, 
	{NULL, 32}, 
	{sAltariaGfx56_2, ARRAY_COUNT(sAltariaGfx56_2)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_57.4bpp.lz");
static const ax_sprite sAltariaSprites57[] = {
	{sAltariaGfx57, ARRAY_COUNT(sAltariaGfx57)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_58.4bpp.lz");
static const ax_sprite sAltariaSprites58[] = {
	{sAltariaGfx58, ARRAY_COUNT(sAltariaGfx58)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_59.4bpp.lz");
static const ax_sprite sAltariaSprites59[] = {
	{sAltariaGfx59, ARRAY_COUNT(sAltariaGfx59)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_60.4bpp.lz");
static const u8 sAltariaGfx60_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_60_1.4bpp.lz");
static const ax_sprite sAltariaSprites60[] = {
	{sAltariaGfx60, ARRAY_COUNT(sAltariaGfx60)}, 
	{NULL, 32}, 
	{sAltariaGfx60_1, ARRAY_COUNT(sAltariaGfx60_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAltariaGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_61.4bpp.lz");
static const ax_sprite sAltariaSprites61[] = {
	{sAltariaGfx61, ARRAY_COUNT(sAltariaGfx61)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_62.4bpp.lz");
static const u8 sAltariaGfx62_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_62_1.4bpp.lz");
static const ax_sprite sAltariaSprites62[] = {
	{sAltariaGfx62, ARRAY_COUNT(sAltariaGfx62)}, 
	{NULL, 32}, 
	{sAltariaGfx62_1, ARRAY_COUNT(sAltariaGfx62_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAltariaGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_63.4bpp.lz");
static const ax_sprite sAltariaSprites63[] = {
	{sAltariaGfx63, ARRAY_COUNT(sAltariaGfx63)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_64.4bpp.lz");
static const ax_sprite sAltariaSprites64[] = {
	{sAltariaGfx64, ARRAY_COUNT(sAltariaGfx64)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_65.4bpp.lz");
static const ax_sprite sAltariaSprites65[] = {
	{sAltariaGfx65, ARRAY_COUNT(sAltariaGfx65)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_66.4bpp.lz");
static const ax_sprite sAltariaSprites66[] = {
	{sAltariaGfx66, ARRAY_COUNT(sAltariaGfx66)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_67.4bpp.lz");
static const ax_sprite sAltariaSprites67[] = {
	{sAltariaGfx67, ARRAY_COUNT(sAltariaGfx67)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_68.4bpp.lz");
static const ax_sprite sAltariaSprites68[] = {
	{sAltariaGfx68, ARRAY_COUNT(sAltariaGfx68)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_69.4bpp.lz");
static const ax_sprite sAltariaSprites69[] = {
	{sAltariaGfx69, ARRAY_COUNT(sAltariaGfx69)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_70.4bpp.lz");
static const ax_sprite sAltariaSprites70[] = {
	{sAltariaGfx70, ARRAY_COUNT(sAltariaGfx70)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_71.4bpp.lz");
static const ax_sprite sAltariaSprites71[] = {
	{sAltariaGfx71, ARRAY_COUNT(sAltariaGfx71)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_72.4bpp.lz");
static const ax_sprite sAltariaSprites72[] = {
	{sAltariaGfx72, ARRAY_COUNT(sAltariaGfx72)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_73.4bpp.lz");
static const ax_sprite sAltariaSprites73[] = {
	{sAltariaGfx73, ARRAY_COUNT(sAltariaGfx73)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_74.4bpp.lz");
static const ax_sprite sAltariaSprites74[] = {
	{sAltariaGfx74, ARRAY_COUNT(sAltariaGfx74)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_75.4bpp.lz");
static const ax_sprite sAltariaSprites75[] = {
	{sAltariaGfx75, ARRAY_COUNT(sAltariaGfx75)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_76.4bpp.lz");
static const ax_sprite sAltariaSprites76[] = {
	{sAltariaGfx76, ARRAY_COUNT(sAltariaGfx76)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_77.4bpp.lz");
static const ax_sprite sAltariaSprites77[] = {
	{sAltariaGfx77, ARRAY_COUNT(sAltariaGfx77)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_78.4bpp.lz");
static const ax_sprite sAltariaSprites78[] = {
	{sAltariaGfx78, ARRAY_COUNT(sAltariaGfx78)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_79.4bpp.lz");
static const ax_sprite sAltariaSprites79[] = {
	{sAltariaGfx79, ARRAY_COUNT(sAltariaGfx79)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_80.4bpp.lz");
static const ax_sprite sAltariaSprites80[] = {
	{sAltariaGfx80, ARRAY_COUNT(sAltariaGfx80)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_81.4bpp.lz");
static const ax_sprite sAltariaSprites81[] = {
	{sAltariaGfx81, ARRAY_COUNT(sAltariaGfx81)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_82.4bpp.lz");
static const ax_sprite sAltariaSprites82[] = {
	{sAltariaGfx82, ARRAY_COUNT(sAltariaGfx82)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_83.4bpp.lz");
static const ax_sprite sAltariaSprites83[] = {
	{sAltariaGfx83, ARRAY_COUNT(sAltariaGfx83)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx84[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_84.4bpp.lz");
static const ax_sprite sAltariaSprites84[] = {
	{sAltariaGfx84, ARRAY_COUNT(sAltariaGfx84)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx85[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_85.4bpp.lz");
static const ax_sprite sAltariaSprites85[] = {
	{sAltariaGfx85, ARRAY_COUNT(sAltariaGfx85)}, 
	{NULL, 0}
};
static const u8 sAltariaGfx86[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/altaria/sprite_86.4bpp.lz");
static const ax_sprite sAltariaSprites86[] = {
	{sAltariaGfx86, ARRAY_COUNT(sAltariaGfx86)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesAltaria[] = {
	sAltariaPose1,
	sAltariaPose2,
	sAltariaPose3,
	sAltariaPose4,
	sAltariaPose5,
	sAltariaPose6,
	sAltariaPose7,
	sAltariaPose8,
	sAltariaPose9,
	sAltariaPose10,
	sAltariaPose11,
	sAltariaPose12,
	sAltariaPose13,
	sAltariaPose14,
	sAltariaPose15,
	sAltariaPose16,
	sAltariaPose17,
	sAltariaPose18,
	sAltariaPose19,
	sAltariaPose20,
	sAltariaPose21,
	sAltariaPose22,
	sAltariaPose23,
	sAltariaPose24,
	sAltariaPose1,
	sAltariaPose26,
	sAltariaPose27,
	sAltariaPose4,
	sAltariaPose29,
	sAltariaPose30,
	sAltariaPose7,
	sAltariaPose32,
	sAltariaPose33,
	sAltariaPose10,
	sAltariaPose35,
	sAltariaPose36,
	sAltariaPose13,
	sAltariaPose38,
	sAltariaPose39,
	sAltariaPose16,
	sAltariaPose41,
	sAltariaPose42,
	sAltariaPose19,
	sAltariaPose44,
	sAltariaPose45,
	sAltariaPose22,
	sAltariaPose47,
	sAltariaPose48,
	sAltariaPose1,
	sAltariaPose26,
	sAltariaPose27,
	sAltariaPose4,
	sAltariaPose29,
	sAltariaPose30,
	sAltariaPose7,
	sAltariaPose32,
	sAltariaPose33,
	sAltariaPose10,
	sAltariaPose35,
	sAltariaPose36,
	sAltariaPose13,
	sAltariaPose38,
	sAltariaPose39,
	sAltariaPose16,
	sAltariaPose41,
	sAltariaPose42,
	sAltariaPose19,
	sAltariaPose44,
	sAltariaPose45,
	sAltariaPose22,
	sAltariaPose47,
	sAltariaPose48,
	sAltariaPose1,
	sAltariaPose26,
	sAltariaPose27,
	sAltariaPose76,
	sAltariaPose77,
	sAltariaPose78,
	sAltariaPose4,
	sAltariaPose29,
	sAltariaPose30,
	sAltariaPose82,
	sAltariaPose83,
	sAltariaPose84,
	sAltariaPose7,
	sAltariaPose32,
	sAltariaPose33,
	sAltariaPose88,
	sAltariaPose89,
	sAltariaPose90,
	sAltariaPose10,
	sAltariaPose35,
	sAltariaPose36,
	sAltariaPose94,
	sAltariaPose95,
	sAltariaPose96,
	sAltariaPose13,
	sAltariaPose38,
	sAltariaPose39,
	sAltariaPose100,
	sAltariaPose101,
	sAltariaPose102,
	sAltariaPose16,
	sAltariaPose41,
	sAltariaPose42,
	sAltariaPose106,
	sAltariaPose107,
	sAltariaPose108,
	sAltariaPose19,
	sAltariaPose44,
	sAltariaPose45,
	sAltariaPose112,
	sAltariaPose113,
	sAltariaPose114,
	sAltariaPose22,
	sAltariaPose47,
	sAltariaPose48,
	sAltariaPose118,
	sAltariaPose119,
	sAltariaPose120,
	sAltariaPose1,
	sAltariaPose2,
	sAltariaPose3,
	sAltariaPose4,
	sAltariaPose5,
	sAltariaPose6,
	sAltariaPose7,
	sAltariaPose8,
	sAltariaPose9,
	sAltariaPose10,
	sAltariaPose11,
	sAltariaPose12,
	sAltariaPose13,
	sAltariaPose14,
	sAltariaPose15,
	sAltariaPose16,
	sAltariaPose17,
	sAltariaPose18,
	sAltariaPose19,
	sAltariaPose20,
	sAltariaPose21,
	sAltariaPose22,
	sAltariaPose23,
	sAltariaPose24,
	sAltariaPose145,
	sAltariaPose146,
	sAltariaPose147,
	sAltariaPose148,
	sAltariaPose149,
	sAltariaPose150,
	sAltariaPose151,
	sAltariaPose152,
	sAltariaPose153,
	sAltariaPose154,
	sAltariaPose1,
	sAltariaPose2,
	sAltariaPose3,
	sAltariaPose158,
	sAltariaPose4,
	sAltariaPose5,
	sAltariaPose6,
	sAltariaPose162,
	sAltariaPose7,
	sAltariaPose8,
	sAltariaPose9,
	sAltariaPose166,
	sAltariaPose10,
	sAltariaPose11,
	sAltariaPose12,
	sAltariaPose170,
	sAltariaPose13,
	sAltariaPose14,
	sAltariaPose15,
	sAltariaPose174,
	sAltariaPose16,
	sAltariaPose17,
	sAltariaPose18,
	sAltariaPose178,
	sAltariaPose19,
	sAltariaPose20,
	sAltariaPose21,
	sAltariaPose182,
	sAltariaPose22,
	sAltariaPose23,
	sAltariaPose24,
	sAltariaPose186,
	sAltariaPose77,
	sAltariaPose119,
	sAltariaPose189,
	sAltariaPose190,
	sAltariaPose101,
	sAltariaPose192,
	sAltariaPose193,
	sAltariaPose83,
	sAltariaPose76,
	sAltariaPose82,
	sAltariaPose197,
	sAltariaPose94,
	sAltariaPose100,
	sAltariaPose106,
	sAltariaPose201,
	sAltariaPose118,
	sAltariaPose76,
	sAltariaPose77,
	sAltariaPose78,
	sAltariaPose82,
	sAltariaPose83,
	sAltariaPose84,
	sAltariaPose88,
	sAltariaPose89,
	sAltariaPose90,
	sAltariaPose94,
	sAltariaPose95,
	sAltariaPose96,
	sAltariaPose100,
	sAltariaPose101,
	sAltariaPose102,
	sAltariaPose106,
	sAltariaPose107,
	sAltariaPose108,
	sAltariaPose112,
	sAltariaPose113,
	sAltariaPose114,
	sAltariaPose118,
	sAltariaPose119,
	sAltariaPose120,
	sAltariaPose158,
	sAltariaPose186,
	sAltariaPose182,
	sAltariaPose178,
	sAltariaPose174,
	sAltariaPose170,
	sAltariaPose166,
	sAltariaPose162,
	sAltariaPose158,
	sAltariaPose186,
	sAltariaPose182,
	sAltariaPose178,
	sAltariaPose174,
	sAltariaPose170,
	sAltariaPose166,
	sAltariaPose162,
};

static const struct PositionSets sAxPositionsAltaria[] = {
	[0] = { .set = { {-1, -13}, {-19, -17}, {18, -17}, {-1, -10} } },
	[1] = { .set = { {-1, -11}, {-13, -22}, {11, -22}, {-1, -9} } },
	[2] = { .set = { {-1, -14}, {-13, 2}, {11, 2}, {-1, -10} } },
	[3] = { .set = { {8, -13}, {12, -21}, {-17, -13}, {0, -11} } },
	[4] = { .set = { {8, -12}, {8, -24}, {-10, -20}, {1, -9} } },
	[5] = { .set = { {8, -14}, {11, -6}, {-8, 1}, {1, -11} } },
	[6] = { .set = { {12, -17}, {-3, -22}, {-7, -14}, {-1, -12} } },
	[7] = { .set = { {12, -16}, {-1, -24}, {-6, -18}, {0, -12} } },
	[8] = { .set = { {12, -18}, {-1, -11}, {-2, -3}, {0, -13} } },
	[9] = { .set = { {11, -21}, {-12, -22}, {15, -10}, {-1, -13} } },
	[10] = { .set = { {11, -20}, {-6, -23}, {12, -16}, {-1, -12} } },
	[11] = { .set = { {11, -22}, {-10, -11}, {8, -1}, {-1, -13} } },
	[12] = { .set = { {-1, -22}, {17, -15}, {-19, -15}, {-1, -13} } },
	[13] = { .set = { {-1, -21}, {11, -22}, {-13, -22}, {-1, -12} } },
	[14] = { .set = { {-1, -23}, {11, -3}, {-13, -2}, {-1, -14} } },
	[15] = { .set = { {-12, -21}, {11, -22}, {-16, -10}, {0, -13} } },
	[16] = { .set = { {-12, -20}, {5, -23}, {-13, -16}, {0, -12} } },
	[17] = { .set = { {-12, -22}, {9, -11}, {-9, -1}, {0, -13} } },
	[18] = { .set = { {-13, -17}, {2, -22}, {6, -14}, {0, -12} } },
	[19] = { .set = { {-13, -16}, {0, -24}, {5, -18}, {-1, -12} } },
	[20] = { .set = { {-13, -18}, {0, -11}, {1, -3}, {-1, -13} } },
	[21] = { .set = { {-9, -13}, {-13, -21}, {16, -13}, {-1, -11} } },
	[22] = { .set = { {-9, -12}, {-9, -24}, {9, -20}, {-2, -9} } },
	[23] = { .set = { {-9, -14}, {-12, -6}, {7, 1}, {-2, -11} } },
	[24] = { .set = { {-1, -13}, {-19, -17}, {18, -17}, {-1, -10} } },
	[25] = { .set = { {-1, -13}, {-13, -24}, {11, -24}, {-1, -11} } },
	[26] = { .set = { {-1, -13}, {-13, 3}, {11, 3}, {-1, -9} } },
	[27] = { .set = { {8, -13}, {12, -21}, {-17, -13}, {0, -11} } },
	[28] = { .set = { {8, -13}, {8, -25}, {-10, -21}, {1, -10} } },
	[29] = { .set = { {8, -13}, {11, -5}, {-8, 2}, {1, -10} } },
	[30] = { .set = { {12, -17}, {-3, -22}, {-7, -14}, {-1, -12} } },
	[31] = { .set = { {12, -17}, {-1, -25}, {-6, -19}, {0, -13} } },
	[32] = { .set = { {12, -17}, {-1, -10}, {-2, -2}, {0, -12} } },
	[33] = { .set = { {11, -21}, {-12, -22}, {15, -10}, {-1, -13} } },
	[34] = { .set = { {11, -21}, {-6, -24}, {12, -17}, {-1, -13} } },
	[35] = { .set = { {11, -21}, {-10, -10}, {8, 0}, {-1, -12} } },
	[36] = { .set = { {-1, -22}, {17, -15}, {-19, -15}, {-1, -13} } },
	[37] = { .set = { {-1, -22}, {11, -23}, {-13, -23}, {-1, -13} } },
	[38] = { .set = { {-1, -22}, {11, -2}, {-13, -1}, {-1, -13} } },
	[39] = { .set = { {-12, -21}, {11, -22}, {-16, -10}, {0, -13} } },
	[40] = { .set = { {-12, -21}, {5, -24}, {-13, -17}, {0, -13} } },
	[41] = { .set = { {-12, -21}, {9, -10}, {-9, 0}, {0, -12} } },
	[42] = { .set = { {-13, -17}, {2, -22}, {6, -14}, {0, -12} } },
	[43] = { .set = { {-13, -17}, {0, -25}, {5, -19}, {-1, -13} } },
	[44] = { .set = { {-13, -17}, {0, -10}, {1, -2}, {-1, -12} } },
	[45] = { .set = { {-9, -13}, {-13, -21}, {16, -13}, {-1, -11} } },
	[46] = { .set = { {-9, -13}, {-9, -25}, {9, -21}, {-2, -10} } },
	[47] = { .set = { {-9, -13}, {-12, -5}, {7, 2}, {-2, -10} } },
	[48] = { .set = { {-1, -13}, {-19, -17}, {18, -17}, {-1, -10} } },
	[49] = { .set = { {-1, -13}, {-13, -24}, {11, -24}, {-1, -11} } },
	[50] = { .set = { {-1, -13}, {-13, 3}, {11, 3}, {-1, -9} } },
	[51] = { .set = { {8, -13}, {12, -21}, {-17, -13}, {0, -11} } },
	[52] = { .set = { {8, -13}, {8, -25}, {-10, -21}, {1, -10} } },
	[53] = { .set = { {8, -13}, {11, -5}, {-8, 2}, {1, -10} } },
	[54] = { .set = { {12, -17}, {-3, -22}, {-7, -14}, {-1, -12} } },
	[55] = { .set = { {12, -17}, {-1, -25}, {-6, -19}, {0, -13} } },
	[56] = { .set = { {12, -17}, {-1, -10}, {-2, -2}, {0, -12} } },
	[57] = { .set = { {11, -21}, {-12, -22}, {15, -10}, {-1, -13} } },
	[58] = { .set = { {11, -21}, {-6, -24}, {12, -17}, {-1, -13} } },
	[59] = { .set = { {11, -21}, {-10, -10}, {8, 0}, {-1, -12} } },
	[60] = { .set = { {-1, -22}, {17, -15}, {-19, -15}, {-1, -13} } },
	[61] = { .set = { {-1, -22}, {11, -23}, {-13, -23}, {-1, -13} } },
	[62] = { .set = { {-1, -22}, {11, -2}, {-13, -1}, {-1, -13} } },
	[63] = { .set = { {-12, -21}, {11, -22}, {-16, -10}, {0, -13} } },
	[64] = { .set = { {-12, -21}, {5, -24}, {-13, -17}, {0, -13} } },
	[65] = { .set = { {-12, -21}, {9, -10}, {-9, 0}, {0, -12} } },
	[66] = { .set = { {-13, -17}, {2, -22}, {6, -14}, {0, -12} } },
	[67] = { .set = { {-13, -17}, {0, -25}, {5, -19}, {-1, -13} } },
	[68] = { .set = { {-13, -17}, {0, -10}, {1, -2}, {-1, -12} } },
	[69] = { .set = { {-9, -13}, {-13, -21}, {16, -13}, {-1, -11} } },
	[70] = { .set = { {-9, -13}, {-9, -25}, {9, -21}, {-2, -10} } },
	[71] = { .set = { {-9, -13}, {-12, -5}, {7, 2}, {-2, -10} } },
	[72] = { .set = { {-1, -13}, {-19, -17}, {18, -17}, {-1, -10} } },
	[73] = { .set = { {-1, -13}, {-13, -24}, {11, -24}, {-1, -11} } },
	[74] = { .set = { {-1, -13}, {-13, 3}, {11, 3}, {-1, -9} } },
	[75] = { .set = { {-1, -14}, {-19, -17}, {17, -17}, {-1, -10} } },
	[76] = { .set = { {-1, -14}, {-13, -24}, {11, -24}, {-1, -11} } },
	[77] = { .set = { {-1, -14}, {-12, 3}, {11, 3}, {-1, -8} } },
	[78] = { .set = { {8, -13}, {12, -21}, {-17, -13}, {0, -11} } },
	[79] = { .set = { {8, -13}, {8, -25}, {-10, -21}, {1, -10} } },
	[80] = { .set = { {8, -13}, {11, -5}, {-8, 2}, {1, -10} } },
	[81] = { .set = { {7, -12}, {11, -21}, {-16, -13}, {1, -11} } },
	[82] = { .set = { {7, -12}, {8, -24}, {-10, -21}, {1, -11} } },
	[83] = { .set = { {7, -12}, {11, -4}, {-8, 2}, {0, -10} } },
	[84] = { .set = { {12, -17}, {-3, -22}, {-7, -14}, {-1, -12} } },
	[85] = { .set = { {12, -17}, {-1, -25}, {-6, -19}, {0, -13} } },
	[86] = { .set = { {12, -17}, {-1, -10}, {-2, -2}, {0, -12} } },
	[87] = { .set = { {12, -17}, {-2, -21}, {-7, -14}, {0, -13} } },
	[88] = { .set = { {12, -17}, {-1, -25}, {-6, -20}, {-1, -13} } },
	[89] = { .set = { {12, -17}, {-2, -10}, {-2, -2}, {-1, -13} } },
	[90] = { .set = { {11, -21}, {-12, -22}, {15, -10}, {-1, -13} } },
	[91] = { .set = { {11, -21}, {-6, -24}, {12, -17}, {-1, -13} } },
	[92] = { .set = { {11, -21}, {-10, -10}, {8, 0}, {-1, -12} } },
	[93] = { .set = { {11, -22}, {-11, -21}, {15, -11}, {-1, -13} } },
	[94] = { .set = { {11, -22}, {-7, -24}, {12, -18}, {-1, -13} } },
	[95] = { .set = { {11, -22}, {-9, -10}, {8, 0}, {-1, -13} } },
	[96] = { .set = { {-1, -22}, {17, -15}, {-19, -15}, {-1, -13} } },
	[97] = { .set = { {-1, -22}, {11, -23}, {-13, -23}, {-1, -13} } },
	[98] = { .set = { {-1, -22}, {11, -2}, {-13, -1}, {-1, -13} } },
	[99] = { .set = { {-1, -22}, {18, -15}, {-19, -15}, {-1, -13} } },
	[100] = { .set = { {-1, -22}, {11, -23}, {-13, -22}, {-1, -13} } },
	[101] = { .set = { {-1, -22}, {11, -2}, {-13, -2}, {-1, -13} } },
	[102] = { .set = { {-12, -21}, {11, -22}, {-16, -10}, {0, -13} } },
	[103] = { .set = { {-12, -21}, {5, -24}, {-13, -17}, {0, -13} } },
	[104] = { .set = { {-12, -21}, {9, -10}, {-9, 0}, {0, -12} } },
	[105] = { .set = { {-12, -22}, {10, -21}, {-16, -11}, {0, -13} } },
	[106] = { .set = { {-12, -22}, {6, -24}, {-13, -18}, {0, -13} } },
	[107] = { .set = { {-12, -22}, {8, -10}, {-9, 0}, {0, -13} } },
	[108] = { .set = { {-13, -17}, {2, -22}, {6, -14}, {0, -12} } },
	[109] = { .set = { {-13, -17}, {0, -25}, {5, -19}, {-1, -13} } },
	[110] = { .set = { {-13, -17}, {0, -10}, {1, -2}, {-1, -12} } },
	[111] = { .set = { {-13, -17}, {1, -21}, {6, -14}, {-1, -13} } },
	[112] = { .set = { {-13, -17}, {0, -25}, {5, -20}, {0, -13} } },
	[113] = { .set = { {-13, -17}, {1, -10}, {1, -2}, {0, -13} } },
	[114] = { .set = { {-9, -13}, {-13, -21}, {16, -13}, {-1, -11} } },
	[115] = { .set = { {-9, -13}, {-9, -25}, {9, -21}, {-2, -10} } },
	[116] = { .set = { {-9, -13}, {-12, -5}, {7, 2}, {-2, -10} } },
	[117] = { .set = { {-8, -12}, {-12, -21}, {15, -13}, {-2, -11} } },
	[118] = { .set = { {-8, -12}, {-9, -24}, {9, -21}, {-2, -11} } },
	[119] = { .set = { {-8, -12}, {-12, -4}, {7, 2}, {-1, -10} } },
	[120] = { .set = { {-1, -13}, {-19, -17}, {18, -17}, {-1, -10} } },
	[121] = { .set = { {-1, -11}, {-13, -22}, {11, -22}, {-1, -9} } },
	[122] = { .set = { {-1, -14}, {-13, 2}, {11, 2}, {-1, -10} } },
	[123] = { .set = { {8, -13}, {12, -21}, {-17, -13}, {0, -11} } },
	[124] = { .set = { {8, -12}, {8, -24}, {-10, -20}, {1, -9} } },
	[125] = { .set = { {8, -14}, {11, -6}, {-8, 1}, {1, -11} } },
	[126] = { .set = { {12, -17}, {-3, -22}, {-7, -14}, {-1, -12} } },
	[127] = { .set = { {12, -16}, {-1, -24}, {-6, -18}, {0, -12} } },
	[128] = { .set = { {12, -18}, {-1, -11}, {-2, -3}, {0, -13} } },
	[129] = { .set = { {11, -21}, {-12, -22}, {15, -10}, {-1, -13} } },
	[130] = { .set = { {11, -20}, {-6, -23}, {12, -16}, {-1, -12} } },
	[131] = { .set = { {11, -22}, {-10, -11}, {8, -1}, {-1, -13} } },
	[132] = { .set = { {-1, -22}, {17, -15}, {-19, -15}, {-1, -13} } },
	[133] = { .set = { {-1, -21}, {11, -22}, {-13, -22}, {-1, -12} } },
	[134] = { .set = { {-1, -23}, {11, -3}, {-13, -2}, {-1, -14} } },
	[135] = { .set = { {-12, -21}, {11, -22}, {-16, -10}, {0, -13} } },
	[136] = { .set = { {-12, -20}, {5, -23}, {-13, -16}, {0, -12} } },
	[137] = { .set = { {-12, -22}, {9, -11}, {-9, -1}, {0, -13} } },
	[138] = { .set = { {-13, -17}, {2, -22}, {6, -14}, {0, -12} } },
	[139] = { .set = { {-13, -16}, {0, -24}, {5, -18}, {-1, -12} } },
	[140] = { .set = { {-13, -18}, {0, -11}, {1, -3}, {-1, -13} } },
	[141] = { .set = { {-9, -13}, {-13, -21}, {16, -13}, {-1, -11} } },
	[142] = { .set = { {-9, -12}, {-9, -24}, {9, -20}, {-2, -9} } },
	[143] = { .set = { {-9, -14}, {-12, -6}, {7, 1}, {-2, -11} } },
	[144] = { .set = { {-4, -9}, {2, -10}, {7, -7}, {1, -4} } },
	[145] = { .set = { {-5, -8}, {2, -10}, {7, -6}, {1, -4} } },
	[146] = { .set = { {-1, 3}, {-14, -8}, {12, -7}, {-1, -11} } },
	[147] = { .set = { {9, 0}, {11, -13}, {-12, -3}, {0, -11} } },
	[148] = { .set = { {11, -9}, {2, -9}, {0, -1}, {-2, -12} } },
	[149] = { .set = { {10, -15}, {-11, -12}, {6, -3}, {-2, -12} } },
	[150] = { .set = { {0, -17}, {14, -9}, {-13, -9}, {0, -11} } },
	[151] = { .set = { {-11, -15}, {10, -12}, {-7, -3}, {1, -12} } },
	[152] = { .set = { {-12, -9}, {-3, -9}, {-1, -1}, {1, -12} } },
	[153] = { .set = { {-10, 0}, {-12, -13}, {11, -3}, {-1, -11} } },
	[154] = { .set = { {-1, -13}, {-19, -17}, {18, -17}, {-1, -10} } },
	[155] = { .set = { {-1, -11}, {-13, -22}, {11, -22}, {-1, -9} } },
	[156] = { .set = { {-1, -14}, {-13, 2}, {11, 2}, {-1, -10} } },
	[157] = { .set = { {-1, -13}, {-7, -13}, {6, -13}, {-1, -7} } },
	[158] = { .set = { {8, -13}, {12, -21}, {-17, -13}, {0, -11} } },
	[159] = { .set = { {8, -12}, {8, -24}, {-10, -20}, {1, -9} } },
	[160] = { .set = { {8, -14}, {11, -6}, {-8, 1}, {1, -11} } },
	[161] = { .set = { {4, -14}, {-2, -15}, {-8, -12}, {-1, -8} } },
	[162] = { .set = { {12, -17}, {-3, -22}, {-7, -14}, {-1, -12} } },
	[163] = { .set = { {12, -16}, {-1, -24}, {-6, -18}, {0, -12} } },
	[164] = { .set = { {12, -18}, {-1, -11}, {-2, -3}, {0, -13} } },
	[165] = { .set = { {7, -16}, {-6, -12}, {-8, -9}, {-1, -7} } },
	[166] = { .set = { {11, -21}, {-12, -22}, {15, -10}, {-1, -13} } },
	[167] = { .set = { {11, -20}, {-6, -23}, {12, -16}, {-1, -12} } },
	[168] = { .set = { {11, -22}, {-10, -11}, {8, -1}, {-1, -13} } },
	[169] = { .set = { {6, -18}, {-8, -9}, {-4, -6}, {-2, -8} } },
	[170] = { .set = { {-1, -22}, {17, -15}, {-19, -15}, {-1, -13} } },
	[171] = { .set = { {-1, -21}, {11, -22}, {-13, -22}, {-1, -12} } },
	[172] = { .set = { {-1, -23}, {11, -3}, {-13, -2}, {-1, -14} } },
	[173] = { .set = { {-1, -18}, {3, -6}, {-4, -7}, {-1, -8} } },
	[174] = { .set = { {-12, -21}, {11, -22}, {-16, -10}, {0, -13} } },
	[175] = { .set = { {-12, -20}, {5, -23}, {-13, -16}, {0, -12} } },
	[176] = { .set = { {-12, -22}, {9, -11}, {-9, -1}, {0, -13} } },
	[177] = { .set = { {-8, -18}, {6, -9}, {2, -6}, {0, -8} } },
	[178] = { .set = { {-13, -17}, {2, -22}, {6, -14}, {0, -12} } },
	[179] = { .set = { {-13, -16}, {0, -24}, {5, -18}, {-1, -12} } },
	[180] = { .set = { {-13, -18}, {0, -11}, {1, -3}, {-1, -13} } },
	[181] = { .set = { {-9, -16}, {4, -12}, {6, -9}, {-1, -7} } },
	[182] = { .set = { {-9, -13}, {-13, -21}, {16, -13}, {-1, -11} } },
	[183] = { .set = { {-9, -12}, {-9, -24}, {9, -20}, {-2, -9} } },
	[184] = { .set = { {-9, -14}, {-12, -6}, {7, 1}, {-2, -11} } },
	[185] = { .set = { {-6, -14}, {0, -15}, {6, -12}, {-1, -8} } },
	[186] = { .set = { {-1, -14}, {-13, -24}, {11, -24}, {-1, -11} } },
	[187] = { .set = { {-8, -12}, {-9, -24}, {9, -21}, {-2, -11} } },
	[188] = { .set = { {-13, -16}, {0, -24}, {5, -19}, {0, -12} } },
	[189] = { .set = { {-11, -22}, {7, -24}, {-12, -18}, {1, -13} } },
	[190] = { .set = { {-1, -22}, {11, -23}, {-13, -22}, {-1, -13} } },
	[191] = { .set = { {10, -22}, {-8, -24}, {11, -18}, {-2, -13} } },
	[192] = { .set = { {12, -16}, {-1, -24}, {-6, -19}, {-1, -12} } },
	[193] = { .set = { {7, -12}, {8, -24}, {-10, -21}, {1, -11} } },
	[194] = { .set = { {-1, -14}, {-19, -17}, {17, -17}, {-1, -10} } },
	[195] = { .set = { {7, -12}, {11, -21}, {-16, -13}, {1, -11} } },
	[196] = { .set = { {12, -16}, {-2, -20}, {-7, -13}, {0, -12} } },
	[197] = { .set = { {11, -22}, {-11, -21}, {15, -11}, {-1, -13} } },
	[198] = { .set = { {-1, -22}, {18, -15}, {-19, -15}, {-1, -13} } },
	[199] = { .set = { {-12, -22}, {10, -21}, {-16, -11}, {0, -13} } },
	[200] = { .set = { {-13, -16}, {1, -20}, {6, -13}, {-1, -12} } },
	[201] = { .set = { {-8, -12}, {-12, -21}, {15, -13}, {-2, -11} } },
	[202] = { .set = { {-1, -14}, {-19, -17}, {17, -17}, {-1, -10} } },
	[203] = { .set = { {-1, -14}, {-13, -24}, {11, -24}, {-1, -11} } },
	[204] = { .set = { {-1, -14}, {-12, 3}, {11, 3}, {-1, -8} } },
	[205] = { .set = { {7, -12}, {11, -21}, {-16, -13}, {1, -11} } },
	[206] = { .set = { {7, -12}, {8, -24}, {-10, -21}, {1, -11} } },
	[207] = { .set = { {7, -12}, {11, -4}, {-8, 2}, {0, -10} } },
	[208] = { .set = { {12, -17}, {-2, -21}, {-7, -14}, {0, -13} } },
	[209] = { .set = { {12, -17}, {-1, -25}, {-6, -20}, {-1, -13} } },
	[210] = { .set = { {12, -17}, {-2, -10}, {-2, -2}, {-1, -13} } },
	[211] = { .set = { {11, -22}, {-11, -21}, {15, -11}, {-1, -13} } },
	[212] = { .set = { {11, -22}, {-7, -24}, {12, -18}, {-1, -13} } },
	[213] = { .set = { {11, -22}, {-9, -10}, {8, 0}, {-1, -13} } },
	[214] = { .set = { {-1, -22}, {18, -15}, {-19, -15}, {-1, -13} } },
	[215] = { .set = { {-1, -22}, {11, -23}, {-13, -22}, {-1, -13} } },
	[216] = { .set = { {-1, -22}, {11, -2}, {-13, -2}, {-1, -13} } },
	[217] = { .set = { {-12, -22}, {10, -21}, {-16, -11}, {0, -13} } },
	[218] = { .set = { {-12, -22}, {6, -24}, {-13, -18}, {0, -13} } },
	[219] = { .set = { {-12, -22}, {8, -10}, {-9, 0}, {0, -13} } },
	[220] = { .set = { {-13, -17}, {1, -21}, {6, -14}, {-1, -13} } },
	[221] = { .set = { {-13, -17}, {0, -25}, {5, -20}, {0, -13} } },
	[222] = { .set = { {-13, -17}, {1, -10}, {1, -2}, {0, -13} } },
	[223] = { .set = { {-8, -12}, {-12, -21}, {15, -13}, {-2, -11} } },
	[224] = { .set = { {-8, -12}, {-9, -24}, {9, -21}, {-2, -11} } },
	[225] = { .set = { {-8, -12}, {-12, -4}, {7, 2}, {-1, -10} } },
	[226] = { .set = { {-1, -13}, {-7, -13}, {6, -13}, {-1, -7} } },
	[227] = { .set = { {-6, -14}, {0, -15}, {6, -12}, {-1, -8} } },
	[228] = { .set = { {-9, -16}, {4, -12}, {6, -9}, {-1, -7} } },
	[229] = { .set = { {-8, -18}, {6, -9}, {2, -6}, {0, -8} } },
	[230] = { .set = { {-1, -18}, {3, -6}, {-4, -7}, {-1, -8} } },
	[231] = { .set = { {6, -18}, {-8, -9}, {-4, -6}, {-2, -8} } },
	[232] = { .set = { {7, -16}, {-6, -12}, {-8, -9}, {-1, -7} } },
	[233] = { .set = { {4, -14}, {-2, -15}, {-8, -12}, {-1, -8} } },
	[234] = { .set = { {-1, -13}, {-7, -13}, {6, -13}, {-1, -7} } },
	[235] = { .set = { {-6, -14}, {0, -15}, {6, -12}, {-1, -8} } },
	[236] = { .set = { {-9, -16}, {4, -12}, {6, -9}, {-1, -7} } },
	[237] = { .set = { {-8, -18}, {6, -9}, {2, -6}, {0, -8} } },
	[238] = { .set = { {-1, -18}, {3, -6}, {-4, -7}, {-1, -8} } },
	[239] = { .set = { {6, -18}, {-8, -9}, {-4, -6}, {-2, -8} } },
	[240] = { .set = { {7, -16}, {-6, -12}, {-8, -9}, {-1, -7} } },
	[241] = { .set = { {4, -14}, {-2, -15}, {-8, -12}, {-1, -8} } },
};

static const ax_anim *const sAltariaAnimTable1[] = {
	gAxSharedAnim_02602,
	gAxSharedAnim_02678,
	gAxSharedAnim_02687,
	gAxSharedAnim_02696,
	gAxSharedAnim_02614,
	gAxSharedAnim_02636,
	gAxSharedAnim_02649,
	gAxSharedAnim_02658,
};

static const ax_anim *const sAltariaAnimTable2[] = {
	sAltariaAnims_2_1,
	sAltariaAnims_2_2,
	sAltariaAnims_2_3,
	sAltariaAnims_2_4,
	sAltariaAnims_2_5,
	sAltariaAnims_2_6,
	sAltariaAnims_2_7,
	sAltariaAnims_2_8,
};

static const ax_anim *const sAltariaAnimTable3[] = {
	sAltariaAnims_3_1,
	sAltariaAnims_3_2,
	sAltariaAnims_3_3,
	sAltariaAnims_3_4,
	sAltariaAnims_3_5,
	sAltariaAnims_3_6,
	sAltariaAnims_3_7,
	sAltariaAnims_3_8,
};

static const ax_anim *const sAltariaAnimTable4[] = {
	sAltariaAnims_4_1,
	gAxSharedAnim_02135,
	gAxSharedAnim_02189,
	sAltariaAnims_4_4,
	gAxSharedAnim_02301,
	sAltariaAnims_4_6,
	gAxSharedAnim_00225,
	gAxSharedAnim_00278,
};

static const ax_anim *const sAltariaAnimTable5[] = {
	gAxSharedAnim_00006,
	gAxSharedAnim_00008,
	gAxSharedAnim_00011,
	sAltariaAnims_5_4,
	gAxSharedAnim_00017,
	sAltariaAnims_5_6,
	gAxSharedAnim_00023,
	gAxSharedAnim_00026,
};

static const ax_anim *const sAltariaAnimTable6[] = {
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
};

static const ax_anim *const sAltariaAnimTable7[] = {
	gAxSharedAnim_00531,
	gAxSharedAnim_00543,
	gAxSharedAnim_00551,
	gAxSharedAnim_00559,
	gAxSharedAnim_00577,
	gAxSharedAnim_00587,
	gAxSharedAnim_00596,
	gAxSharedAnim_00602,
};

static const ax_anim *const sAltariaAnimTable8[] = {
	sAltariaAnims_8_1,
	sAltariaAnims_8_2,
	sAltariaAnims_8_3,
	sAltariaAnims_8_4,
	sAltariaAnims_8_5,
	sAltariaAnims_8_6,
	sAltariaAnims_8_7,
	sAltariaAnims_8_8,
};

static const ax_anim *const sAltariaAnimTable9[] = {
	sAltariaAnims_9_1,
	sAltariaAnims_9_2,
	sAltariaAnims_9_3,
	sAltariaAnims_9_4,
	sAltariaAnims_9_5,
	sAltariaAnims_9_6,
	sAltariaAnims_9_7,
	sAltariaAnims_9_8,
};

static const ax_anim *const sAltariaAnimTable10[] = {
	gAxSharedAnim_01143,
	gAxSharedAnim_01156,
	gAxSharedAnim_01167,
	gAxSharedAnim_01178,
	gAxSharedAnim_01189,
	gAxSharedAnim_01200,
	gAxSharedAnim_01217,
	gAxSharedAnim_01228,
};

static const ax_anim *const sAltariaAnimTable11[] = {
	sAltariaAnims_11_1,
	sAltariaAnims_11_2,
	sAltariaAnims_11_3,
	sAltariaAnims_11_4,
	sAltariaAnims_11_5,
	sAltariaAnims_11_6,
	sAltariaAnims_11_7,
	sAltariaAnims_11_8,
};

static const ax_anim *const sAltariaAnimTable12[] = {
	gAxSharedAnim_01472,
	gAxSharedAnim_01520,
	gAxSharedAnim_01507,
	gAxSharedAnim_01500,
	gAxSharedAnim_01499,
	gAxSharedAnim_01491,
	gAxSharedAnim_01481,
	gAxSharedAnim_01473,
};

static const ax_anim *const sAltariaAnimTable13[] = {
	gAxSharedAnim_01525,
	gAxSharedAnim_01579,
	gAxSharedAnim_01577,
	gAxSharedAnim_01555,
	gAxSharedAnim_01549,
	gAxSharedAnim_01544,
	gAxSharedAnim_01539,
	gAxSharedAnim_01531,
};

static const ax_anim *const *const sAxAnimationsAltaria[] = {
	sAltariaAnimTable1,
	sAltariaAnimTable2,
	sAltariaAnimTable3,
	sAltariaAnimTable4,
	sAltariaAnimTable5,
	sAltariaAnimTable6,
	sAltariaAnimTable7,
	sAltariaAnimTable8,
	sAltariaAnimTable9,
	sAltariaAnimTable10,
	sAltariaAnimTable11,
	sAltariaAnimTable12,
	sAltariaAnimTable13,
};

static const ax_sprite *const sAxSpritesAltaria[] = {
	sAltariaSprites1,
	sAltariaSprites2,
	sAltariaSprites3,
	sAltariaSprites4,
	sAltariaSprites5,
	sAltariaSprites6,
	sAltariaSprites7,
	sAltariaSprites8,
	sAltariaSprites9,
	sAltariaSprites10,
	sAltariaSprites11,
	sAltariaSprites12,
	sAltariaSprites13,
	sAltariaSprites14,
	sAltariaSprites15,
	sAltariaSprites16,
	sAltariaSprites17,
	sAltariaSprites18,
	sAltariaSprites19,
	sAltariaSprites20,
	sAltariaSprites21,
	sAltariaSprites22,
	sAltariaSprites23,
	sAltariaSprites24,
	sAltariaSprites25,
	sAltariaSprites26,
	sAltariaSprites27,
	sAltariaSprites28,
	sAltariaSprites29,
	sAltariaSprites30,
	sAltariaSprites31,
	sAltariaSprites32,
	sAltariaSprites33,
	sAltariaSprites34,
	sAltariaSprites35,
	sAltariaSprites36,
	sAltariaSprites37,
	sAltariaSprites38,
	sAltariaSprites39,
	sAltariaSprites40,
	sAltariaSprites41,
	sAltariaSprites42,
	sAltariaSprites43,
	sAltariaSprites44,
	sAltariaSprites45,
	sAltariaSprites46,
	sAltariaSprites47,
	sAltariaSprites48,
	sAltariaSprites49,
	sAltariaSprites50,
	sAltariaSprites51,
	sAltariaSprites52,
	sAltariaSprites53,
	sAltariaSprites54,
	sAltariaSprites55,
	sAltariaSprites56,
	sAltariaSprites57,
	sAltariaSprites58,
	sAltariaSprites59,
	sAltariaSprites60,
	sAltariaSprites61,
	sAltariaSprites62,
	sAltariaSprites63,
	sAltariaSprites64,
	sAltariaSprites65,
	sAltariaSprites66,
	sAltariaSprites67,
	sAltariaSprites68,
	sAltariaSprites69,
	sAltariaSprites70,
	sAltariaSprites71,
	sAltariaSprites72,
	sAltariaSprites73,
	sAltariaSprites74,
	sAltariaSprites75,
	sAltariaSprites76,
	sAltariaSprites77,
	sAltariaSprites78,
	sAltariaSprites79,
	sAltariaSprites80,
	sAltariaSprites81,
	sAltariaSprites82,
	sAltariaSprites83,
	sAltariaSprites84,
	sAltariaSprites85,
	sAltariaSprites86,
};

static const axmain sAxMainAltaria = {
	.poses = sAxPosesAltaria,
	.animations = sAxAnimationsAltaria,
	.animCount = ARRAY_COUNT(sAxAnimationsAltaria),
	.spriteData = sAxSpritesAltaria,
	.positions = sAxPositionsAltaria,
};
