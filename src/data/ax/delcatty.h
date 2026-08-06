/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainDelcatty;
const SiroArchive gAxDelcatty = {"SIRO", &sAxMainDelcatty};

static const ax_pose sDelcattyPose1[] = {
	AX_POSE(0, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose2[] = {
	AX_POSE(1, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose3[] = {
	AX_POSE(2, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose6[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose9[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose13[] = {
	AX_POSE(12, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose14[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose15[] = {
	AX_POSE(14, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose18[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose21[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose22[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose24[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose26[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose27[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose28[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose30[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose31[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose32[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose34[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose35[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose36[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose38[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose39[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose40[] = {
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose42[] = {
	AX_POSE(27, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose43[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose44[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose46[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose47[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose48[] = {
	AX_POSE(26, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose50[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose51[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose52[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose54[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose55[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose56[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose122[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose123[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose125[] = {
	AX_POSE(32, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose126[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose128[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose129[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose131[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose132[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose134[] = {
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose135[] = {
	AX_POSE(39, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose137[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose138[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose140[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose141[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose143[] = {
	AX_POSE(32, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose144[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose145[] = {
	AX_POSE(40, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose146[] = {
	AX_POSE(41, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose147[] = {
	AX_POSE(42, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 7)),
	AX_POSE(43, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 7)),
	AX_POSE(44, OAM1(226, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(5, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose148[] = {
	AX_POSE(45, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(46, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 7)),
	AX_POSE(47, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(9, 3, 7)),
	AX_POSE(48, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(11, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose149[] = {
	AX_POSE(49, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose150[] = {
	AX_POSE(50, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose151[] = {
	AX_POSE(51, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose152[] = {
	AX_POSE(50, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose153[] = {
	AX_POSE(49, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose154[] = {
	AX_POSE(45, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE(46, OAM1(219, ST_OAM_SQUARE     , 1), OAM2(4, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 7)),
	AX_POSE(47, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(9, 3, 7)),
	AX_POSE(48, OAM1(227, ST_OAM_V_RECTANGLE, 1), OAM2(4, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(11, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose158[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose166[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose170[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose174[] = {
	AX_POSE(29, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose178[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose182[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose195[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose196[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose197[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose198[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose199[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose200[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose201[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose202[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose211[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose214[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose217[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose220[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDelcattyPose223[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const u8 sDelcattyAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_2_1.lz");
static const u8 sDelcattyAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_2_2.lz");
static const u8 sDelcattyAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_2_3.lz");
static const u8 sDelcattyAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_2_4.lz");
static const u8 sDelcattyAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_2_5.lz");
static const u8 sDelcattyAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_2_6.lz");
static const u8 sDelcattyAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_2_7.lz");
static const u8 sDelcattyAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_2_8.lz");
static const u8 sDelcattyAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_3_1.lz");
static const u8 sDelcattyAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_3_2.lz");
static const u8 sDelcattyAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_3_3.lz");
static const u8 sDelcattyAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_3_4.lz");
static const u8 sDelcattyAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_3_5.lz");
static const u8 sDelcattyAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_3_6.lz");
static const u8 sDelcattyAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_3_7.lz");
static const u8 sDelcattyAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_3_8.lz");
static const u8 sDelcattyAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_5_1.lz");
static const u8 sDelcattyAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_5_2.lz");
static const u8 sDelcattyAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_5_3.lz");
static const u8 sDelcattyAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_5_4.lz");
static const u8 sDelcattyAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_5_5.lz");
static const u8 sDelcattyAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_5_6.lz");
static const u8 sDelcattyAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_5_7.lz");
static const u8 sDelcattyAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_5_8.lz");
static const u8 sDelcattyAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_8_1.lz");
static const u8 sDelcattyAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_8_2.lz");
static const u8 sDelcattyAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_8_3.lz");
static const u8 sDelcattyAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_8_4.lz");
static const u8 sDelcattyAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_8_5.lz");
static const u8 sDelcattyAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_8_6.lz");
static const u8 sDelcattyAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_8_7.lz");
static const u8 sDelcattyAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_8_8.lz");
static const u8 sDelcattyAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_9_1.lz");
static const u8 sDelcattyAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_9_2.lz");
static const u8 sDelcattyAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_9_3.lz");
static const u8 sDelcattyAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_9_4.lz");
static const u8 sDelcattyAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_9_5.lz");
static const u8 sDelcattyAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_9_6.lz");
static const u8 sDelcattyAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_9_7.lz");
static const u8 sDelcattyAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_9_8.lz");
static const u8 sDelcattyAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_11_1.lz");
static const u8 sDelcattyAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_11_2.lz");
static const u8 sDelcattyAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_11_3.lz");
static const u8 sDelcattyAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_11_4.lz");
static const u8 sDelcattyAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_11_5.lz");
static const u8 sDelcattyAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_11_6.lz");
static const u8 sDelcattyAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_11_7.lz");
static const u8 sDelcattyAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/delcatty/sDelcattyAnims_11_8.lz");

static const u8 sDelcattyGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_1.4bpp.lz");
static const ax_sprite sDelcattySprites1[] = {
	{sDelcattyGfx1, ARRAY_COUNT(sDelcattyGfx1)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_2.4bpp.lz");
static const ax_sprite sDelcattySprites2[] = {
	{sDelcattyGfx2, ARRAY_COUNT(sDelcattyGfx2)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_3.4bpp.lz");
static const ax_sprite sDelcattySprites3[] = {
	{sDelcattyGfx3, ARRAY_COUNT(sDelcattyGfx3)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_4.4bpp.lz");
static const ax_sprite sDelcattySprites4[] = {
	{sDelcattyGfx4, ARRAY_COUNT(sDelcattyGfx4)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_5.4bpp.lz");
static const ax_sprite sDelcattySprites5[] = {
	{sDelcattyGfx5, ARRAY_COUNT(sDelcattyGfx5)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_6.4bpp.lz");
static const ax_sprite sDelcattySprites6[] = {
	{sDelcattyGfx6, ARRAY_COUNT(sDelcattyGfx6)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_7.4bpp.lz");
static const ax_sprite sDelcattySprites7[] = {
	{sDelcattyGfx7, ARRAY_COUNT(sDelcattyGfx7)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_8.4bpp.lz");
static const ax_sprite sDelcattySprites8[] = {
	{sDelcattyGfx8, ARRAY_COUNT(sDelcattyGfx8)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_9.4bpp.lz");
static const ax_sprite sDelcattySprites9[] = {
	{sDelcattyGfx9, ARRAY_COUNT(sDelcattyGfx9)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_10.4bpp.lz");
static const ax_sprite sDelcattySprites10[] = {
	{sDelcattyGfx10, ARRAY_COUNT(sDelcattyGfx10)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_11.4bpp.lz");
static const ax_sprite sDelcattySprites11[] = {
	{sDelcattyGfx11, ARRAY_COUNT(sDelcattyGfx11)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_12.4bpp.lz");
static const ax_sprite sDelcattySprites12[] = {
	{sDelcattyGfx12, ARRAY_COUNT(sDelcattyGfx12)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_13.4bpp.lz");
static const ax_sprite sDelcattySprites13[] = {
	{sDelcattyGfx13, ARRAY_COUNT(sDelcattyGfx13)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_14.4bpp.lz");
static const ax_sprite sDelcattySprites14[] = {
	{sDelcattyGfx14, ARRAY_COUNT(sDelcattyGfx14)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_15.4bpp.lz");
static const ax_sprite sDelcattySprites15[] = {
	{sDelcattyGfx15, ARRAY_COUNT(sDelcattyGfx15)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_16.4bpp.lz");
static const u8 sDelcattyGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_16_1.4bpp.lz");
static const ax_sprite sDelcattySprites16[] = {
	{sDelcattyGfx16, ARRAY_COUNT(sDelcattyGfx16)}, 
	{NULL, 64}, 
	{sDelcattyGfx16_1, ARRAY_COUNT(sDelcattyGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_17.4bpp.lz");
static const u8 sDelcattyGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_17_1.4bpp.lz");
static const u8 sDelcattyGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_17_2.4bpp.lz");
static const u8 sDelcattyGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_17_3.4bpp.lz");
static const ax_sprite sDelcattySprites17[] = {
	{NULL, 32}, 
	{sDelcattyGfx17, ARRAY_COUNT(sDelcattyGfx17)}, 
	{NULL, 32}, 
	{sDelcattyGfx17_1, ARRAY_COUNT(sDelcattyGfx17_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx17_2, ARRAY_COUNT(sDelcattyGfx17_2)}, 
	{NULL, 64}, 
	{sDelcattyGfx17_3, ARRAY_COUNT(sDelcattyGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_18.4bpp.lz");
static const u8 sDelcattyGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_18_1.4bpp.lz");
static const ax_sprite sDelcattySprites18[] = {
	{sDelcattyGfx18, ARRAY_COUNT(sDelcattyGfx18)}, 
	{NULL, 64}, 
	{sDelcattyGfx18_1, ARRAY_COUNT(sDelcattyGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_19.4bpp.lz");
static const u8 sDelcattyGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_19_1.4bpp.lz");
static const u8 sDelcattyGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_19_2.4bpp.lz");
static const u8 sDelcattyGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_19_3.4bpp.lz");
static const ax_sprite sDelcattySprites19[] = {
	{NULL, 32}, 
	{sDelcattyGfx19, ARRAY_COUNT(sDelcattyGfx19)}, 
	{NULL, 32}, 
	{sDelcattyGfx19_1, ARRAY_COUNT(sDelcattyGfx19_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx19_2, ARRAY_COUNT(sDelcattyGfx19_2)}, 
	{NULL, 32}, 
	{sDelcattyGfx19_3, ARRAY_COUNT(sDelcattyGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_20.4bpp.lz");
static const u8 sDelcattyGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_20_1.4bpp.lz");
static const ax_sprite sDelcattySprites20[] = {
	{sDelcattyGfx20, ARRAY_COUNT(sDelcattyGfx20)}, 
	{NULL, 32}, 
	{sDelcattyGfx20_1, ARRAY_COUNT(sDelcattyGfx20_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_21.4bpp.lz");
static const u8 sDelcattyGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_21_1.4bpp.lz");
static const u8 sDelcattyGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_21_2.4bpp.lz");
static const u8 sDelcattyGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_21_3.4bpp.lz");
static const ax_sprite sDelcattySprites21[] = {
	{NULL, 32}, 
	{sDelcattyGfx21, ARRAY_COUNT(sDelcattyGfx21)}, 
	{NULL, 32}, 
	{sDelcattyGfx21_1, ARRAY_COUNT(sDelcattyGfx21_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx21_2, ARRAY_COUNT(sDelcattyGfx21_2)}, 
	{NULL, 32}, 
	{sDelcattyGfx21_3, ARRAY_COUNT(sDelcattyGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_22.4bpp.lz");
static const u8 sDelcattyGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_22_1.4bpp.lz");
static const u8 sDelcattyGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_22_2.4bpp.lz");
static const ax_sprite sDelcattySprites22[] = {
	{NULL, 32}, 
	{sDelcattyGfx22, ARRAY_COUNT(sDelcattyGfx22)}, 
	{NULL, 64}, 
	{sDelcattyGfx22_1, ARRAY_COUNT(sDelcattyGfx22_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx22_2, ARRAY_COUNT(sDelcattyGfx22_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_23.4bpp.lz");
static const u8 sDelcattyGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_23_1.4bpp.lz");
static const ax_sprite sDelcattySprites23[] = {
	{NULL, 32}, 
	{sDelcattyGfx23, ARRAY_COUNT(sDelcattyGfx23)}, 
	{NULL, 32}, 
	{sDelcattyGfx23_1, ARRAY_COUNT(sDelcattyGfx23_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_24.4bpp.lz");
static const u8 sDelcattyGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_24_1.4bpp.lz");
static const u8 sDelcattyGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_24_2.4bpp.lz");
static const u8 sDelcattyGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_24_3.4bpp.lz");
static const ax_sprite sDelcattySprites24[] = {
	{NULL, 32}, 
	{sDelcattyGfx24, ARRAY_COUNT(sDelcattyGfx24)}, 
	{NULL, 64}, 
	{sDelcattyGfx24_1, ARRAY_COUNT(sDelcattyGfx24_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx24_2, ARRAY_COUNT(sDelcattyGfx24_2)}, 
	{NULL, 32}, 
	{sDelcattyGfx24_3, ARRAY_COUNT(sDelcattyGfx24_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_25.4bpp.lz");
static const u8 sDelcattyGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_25_1.4bpp.lz");
static const u8 sDelcattyGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_25_2.4bpp.lz");
static const u8 sDelcattyGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_25_3.4bpp.lz");
static const ax_sprite sDelcattySprites25[] = {
	{NULL, 32}, 
	{sDelcattyGfx25, ARRAY_COUNT(sDelcattyGfx25)}, 
	{NULL, 32}, 
	{sDelcattyGfx25_1, ARRAY_COUNT(sDelcattyGfx25_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx25_2, ARRAY_COUNT(sDelcattyGfx25_2)}, 
	{NULL, 32}, 
	{sDelcattyGfx25_3, ARRAY_COUNT(sDelcattyGfx25_3)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_26.4bpp.lz");
static const u8 sDelcattyGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_26_1.4bpp.lz");
static const u8 sDelcattyGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_26_2.4bpp.lz");
static const ax_sprite sDelcattySprites26[] = {
	{NULL, 32}, 
	{sDelcattyGfx26, ARRAY_COUNT(sDelcattyGfx26)}, 
	{NULL, 32}, 
	{sDelcattyGfx26_1, ARRAY_COUNT(sDelcattyGfx26_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx26_2, ARRAY_COUNT(sDelcattyGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_27.4bpp.lz");
static const u8 sDelcattyGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_27_1.4bpp.lz");
static const u8 sDelcattyGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_27_2.4bpp.lz");
static const ax_sprite sDelcattySprites27[] = {
	{sDelcattyGfx27, ARRAY_COUNT(sDelcattyGfx27)}, 
	{NULL, 32}, 
	{sDelcattyGfx27_1, ARRAY_COUNT(sDelcattyGfx27_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx27_2, ARRAY_COUNT(sDelcattyGfx27_2)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_28.4bpp.lz");
static const u8 sDelcattyGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_28_1.4bpp.lz");
static const u8 sDelcattyGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_28_2.4bpp.lz");
static const ax_sprite sDelcattySprites28[] = {
	{NULL, 32}, 
	{sDelcattyGfx28, ARRAY_COUNT(sDelcattyGfx28)}, 
	{NULL, 32}, 
	{sDelcattyGfx28_1, ARRAY_COUNT(sDelcattyGfx28_1)}, 
	{NULL, 64}, 
	{sDelcattyGfx28_2, ARRAY_COUNT(sDelcattyGfx28_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_29.4bpp.lz");
static const u8 sDelcattyGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_29_1.4bpp.lz");
static const u8 sDelcattyGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_29_2.4bpp.lz");
static const ax_sprite sDelcattySprites29[] = {
	{sDelcattyGfx29, ARRAY_COUNT(sDelcattyGfx29)}, 
	{NULL, 32}, 
	{sDelcattyGfx29_1, ARRAY_COUNT(sDelcattyGfx29_1)}, 
	{NULL, 64}, 
	{sDelcattyGfx29_2, ARRAY_COUNT(sDelcattyGfx29_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_30.4bpp.lz");
static const u8 sDelcattyGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_30_1.4bpp.lz");
static const u8 sDelcattyGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_30_2.4bpp.lz");
static const ax_sprite sDelcattySprites30[] = {
	{sDelcattyGfx30, ARRAY_COUNT(sDelcattyGfx30)}, 
	{NULL, 32}, 
	{sDelcattyGfx30_1, ARRAY_COUNT(sDelcattyGfx30_1)}, 
	{NULL, 64}, 
	{sDelcattyGfx30_2, ARRAY_COUNT(sDelcattyGfx30_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_31.4bpp.lz");
static const u8 sDelcattyGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_31_1.4bpp.lz");
static const ax_sprite sDelcattySprites31[] = {
	{sDelcattyGfx31, ARRAY_COUNT(sDelcattyGfx31)}, 
	{NULL, 64}, 
	{sDelcattyGfx31_1, ARRAY_COUNT(sDelcattyGfx31_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_32.4bpp.lz");
static const u8 sDelcattyGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_32_1.4bpp.lz");
static const u8 sDelcattyGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_32_2.4bpp.lz");
static const ax_sprite sDelcattySprites32[] = {
	{sDelcattyGfx32, ARRAY_COUNT(sDelcattyGfx32)}, 
	{NULL, 32}, 
	{sDelcattyGfx32_1, ARRAY_COUNT(sDelcattyGfx32_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx32_2, ARRAY_COUNT(sDelcattyGfx32_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_33.4bpp.lz");
static const u8 sDelcattyGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_33_1.4bpp.lz");
static const u8 sDelcattyGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_33_2.4bpp.lz");
static const ax_sprite sDelcattySprites33[] = {
	{sDelcattyGfx33, ARRAY_COUNT(sDelcattyGfx33)}, 
	{NULL, 32}, 
	{sDelcattyGfx33_1, ARRAY_COUNT(sDelcattyGfx33_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx33_2, ARRAY_COUNT(sDelcattyGfx33_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_34.4bpp.lz");
static const u8 sDelcattyGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_34_1.4bpp.lz");
static const u8 sDelcattyGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_34_2.4bpp.lz");
static const u8 sDelcattyGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_34_3.4bpp.lz");
static const ax_sprite sDelcattySprites34[] = {
	{sDelcattyGfx34, ARRAY_COUNT(sDelcattyGfx34)}, 
	{NULL, 32}, 
	{sDelcattyGfx34_1, ARRAY_COUNT(sDelcattyGfx34_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx34_2, ARRAY_COUNT(sDelcattyGfx34_2)}, 
	{NULL, 64}, 
	{sDelcattyGfx34_3, ARRAY_COUNT(sDelcattyGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_35.4bpp.lz");
static const u8 sDelcattyGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_35_1.4bpp.lz");
static const u8 sDelcattyGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_35_2.4bpp.lz");
static const ax_sprite sDelcattySprites35[] = {
	{sDelcattyGfx35, ARRAY_COUNT(sDelcattyGfx35)}, 
	{NULL, 32}, 
	{sDelcattyGfx35_1, ARRAY_COUNT(sDelcattyGfx35_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx35_2, ARRAY_COUNT(sDelcattyGfx35_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_36.4bpp.lz");
static const u8 sDelcattyGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_36_1.4bpp.lz");
static const ax_sprite sDelcattySprites36[] = {
	{NULL, 32}, 
	{sDelcattyGfx36, ARRAY_COUNT(sDelcattyGfx36)}, 
	{NULL, 32}, 
	{sDelcattyGfx36_1, ARRAY_COUNT(sDelcattyGfx36_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_37.4bpp.lz");
static const u8 sDelcattyGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_37_1.4bpp.lz");
static const ax_sprite sDelcattySprites37[] = {
	{sDelcattyGfx37, ARRAY_COUNT(sDelcattyGfx37)}, 
	{NULL, 32}, 
	{sDelcattyGfx37_1, ARRAY_COUNT(sDelcattyGfx37_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_38.4bpp.lz");
static const u8 sDelcattyGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_38_1.4bpp.lz");
static const u8 sDelcattyGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_38_2.4bpp.lz");
static const ax_sprite sDelcattySprites38[] = {
	{sDelcattyGfx38, ARRAY_COUNT(sDelcattyGfx38)}, 
	{NULL, 32}, 
	{sDelcattyGfx38_1, ARRAY_COUNT(sDelcattyGfx38_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx38_2, ARRAY_COUNT(sDelcattyGfx38_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_39.4bpp.lz");
static const u8 sDelcattyGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_39_1.4bpp.lz");
static const u8 sDelcattyGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_39_2.4bpp.lz");
static const ax_sprite sDelcattySprites39[] = {
	{sDelcattyGfx39, ARRAY_COUNT(sDelcattyGfx39)}, 
	{NULL, 32}, 
	{sDelcattyGfx39_1, ARRAY_COUNT(sDelcattyGfx39_1)}, 
	{NULL, 32}, 
	{sDelcattyGfx39_2, ARRAY_COUNT(sDelcattyGfx39_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_40.4bpp.lz");
static const u8 sDelcattyGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_40_1.4bpp.lz");
static const ax_sprite sDelcattySprites40[] = {
	{sDelcattyGfx40, ARRAY_COUNT(sDelcattyGfx40)}, 
	{NULL, 64}, 
	{sDelcattyGfx40_1, ARRAY_COUNT(sDelcattyGfx40_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_41.4bpp.lz");
static const ax_sprite sDelcattySprites41[] = {
	{sDelcattyGfx41, ARRAY_COUNT(sDelcattyGfx41)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_42.4bpp.lz");
static const ax_sprite sDelcattySprites42[] = {
	{sDelcattyGfx42, ARRAY_COUNT(sDelcattyGfx42)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_43.4bpp.lz");
static const ax_sprite sDelcattySprites43[] = {
	{sDelcattyGfx43, ARRAY_COUNT(sDelcattyGfx43)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_44.4bpp.lz");
static const ax_sprite sDelcattySprites44[] = {
	{sDelcattyGfx44, ARRAY_COUNT(sDelcattyGfx44)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_45.4bpp.lz");
static const ax_sprite sDelcattySprites45[] = {
	{sDelcattyGfx45, ARRAY_COUNT(sDelcattyGfx45)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_46.4bpp.lz");
static const ax_sprite sDelcattySprites46[] = {
	{sDelcattyGfx46, ARRAY_COUNT(sDelcattyGfx46)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_47.4bpp.lz");
static const ax_sprite sDelcattySprites47[] = {
	{sDelcattyGfx47, ARRAY_COUNT(sDelcattyGfx47)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_48.4bpp.lz");
static const ax_sprite sDelcattySprites48[] = {
	{sDelcattyGfx48, ARRAY_COUNT(sDelcattyGfx48)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_49.4bpp.lz");
static const ax_sprite sDelcattySprites49[] = {
	{sDelcattyGfx49, ARRAY_COUNT(sDelcattyGfx49)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_50.4bpp.lz");
static const ax_sprite sDelcattySprites50[] = {
	{sDelcattyGfx50, ARRAY_COUNT(sDelcattyGfx50)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_51.4bpp.lz");
static const ax_sprite sDelcattySprites51[] = {
	{sDelcattyGfx51, ARRAY_COUNT(sDelcattyGfx51)}, 
	{NULL, 0}
};
static const u8 sDelcattyGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/delcatty/sprite_52.4bpp.lz");
static const ax_sprite sDelcattySprites52[] = {
	{sDelcattyGfx52, ARRAY_COUNT(sDelcattyGfx52)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesDelcatty[] = {
	sDelcattyPose1,
	sDelcattyPose2,
	sDelcattyPose3,
	sDelcattyPose4,
	sDelcattyPose5,
	sDelcattyPose6,
	sDelcattyPose7,
	sDelcattyPose8,
	sDelcattyPose9,
	sDelcattyPose10,
	sDelcattyPose11,
	sDelcattyPose12,
	sDelcattyPose13,
	sDelcattyPose14,
	sDelcattyPose15,
	sDelcattyPose16,
	sDelcattyPose17,
	sDelcattyPose18,
	sDelcattyPose19,
	sDelcattyPose20,
	sDelcattyPose21,
	sDelcattyPose22,
	sDelcattyPose23,
	sDelcattyPose24,
	sDelcattyPose1,
	sDelcattyPose26,
	sDelcattyPose27,
	sDelcattyPose28,
	sDelcattyPose4,
	sDelcattyPose30,
	sDelcattyPose31,
	sDelcattyPose32,
	sDelcattyPose7,
	sDelcattyPose34,
	sDelcattyPose35,
	sDelcattyPose36,
	sDelcattyPose10,
	sDelcattyPose38,
	sDelcattyPose39,
	sDelcattyPose40,
	sDelcattyPose13,
	sDelcattyPose42,
	sDelcattyPose43,
	sDelcattyPose44,
	sDelcattyPose16,
	sDelcattyPose46,
	sDelcattyPose47,
	sDelcattyPose48,
	sDelcattyPose19,
	sDelcattyPose50,
	sDelcattyPose51,
	sDelcattyPose52,
	sDelcattyPose22,
	sDelcattyPose54,
	sDelcattyPose55,
	sDelcattyPose56,
	sDelcattyPose1,
	sDelcattyPose26,
	sDelcattyPose27,
	sDelcattyPose28,
	sDelcattyPose4,
	sDelcattyPose30,
	sDelcattyPose31,
	sDelcattyPose32,
	sDelcattyPose7,
	sDelcattyPose34,
	sDelcattyPose35,
	sDelcattyPose36,
	sDelcattyPose10,
	sDelcattyPose38,
	sDelcattyPose39,
	sDelcattyPose40,
	sDelcattyPose13,
	sDelcattyPose42,
	sDelcattyPose43,
	sDelcattyPose44,
	sDelcattyPose16,
	sDelcattyPose46,
	sDelcattyPose47,
	sDelcattyPose48,
	sDelcattyPose19,
	sDelcattyPose50,
	sDelcattyPose51,
	sDelcattyPose52,
	sDelcattyPose22,
	sDelcattyPose54,
	sDelcattyPose55,
	sDelcattyPose56,
	sDelcattyPose1,
	sDelcattyPose26,
	sDelcattyPose27,
	sDelcattyPose28,
	sDelcattyPose4,
	sDelcattyPose30,
	sDelcattyPose31,
	sDelcattyPose32,
	sDelcattyPose7,
	sDelcattyPose34,
	sDelcattyPose35,
	sDelcattyPose36,
	sDelcattyPose10,
	sDelcattyPose38,
	sDelcattyPose39,
	sDelcattyPose40,
	sDelcattyPose13,
	sDelcattyPose42,
	sDelcattyPose43,
	sDelcattyPose44,
	sDelcattyPose16,
	sDelcattyPose46,
	sDelcattyPose47,
	sDelcattyPose48,
	sDelcattyPose19,
	sDelcattyPose50,
	sDelcattyPose51,
	sDelcattyPose52,
	sDelcattyPose22,
	sDelcattyPose54,
	sDelcattyPose55,
	sDelcattyPose56,
	sDelcattyPose1,
	sDelcattyPose122,
	sDelcattyPose123,
	sDelcattyPose4,
	sDelcattyPose125,
	sDelcattyPose126,
	sDelcattyPose7,
	sDelcattyPose128,
	sDelcattyPose129,
	sDelcattyPose10,
	sDelcattyPose131,
	sDelcattyPose132,
	sDelcattyPose13,
	sDelcattyPose134,
	sDelcattyPose135,
	sDelcattyPose16,
	sDelcattyPose137,
	sDelcattyPose138,
	sDelcattyPose19,
	sDelcattyPose140,
	sDelcattyPose141,
	sDelcattyPose22,
	sDelcattyPose143,
	sDelcattyPose144,
	sDelcattyPose145,
	sDelcattyPose146,
	sDelcattyPose147,
	sDelcattyPose148,
	sDelcattyPose149,
	sDelcattyPose150,
	sDelcattyPose151,
	sDelcattyPose152,
	sDelcattyPose153,
	sDelcattyPose154,
	sDelcattyPose1,
	sDelcattyPose122,
	sDelcattyPose123,
	sDelcattyPose158,
	sDelcattyPose4,
	sDelcattyPose125,
	sDelcattyPose126,
	sDelcattyPose32,
	sDelcattyPose7,
	sDelcattyPose128,
	sDelcattyPose129,
	sDelcattyPose166,
	sDelcattyPose10,
	sDelcattyPose131,
	sDelcattyPose132,
	sDelcattyPose170,
	sDelcattyPose13,
	sDelcattyPose134,
	sDelcattyPose135,
	sDelcattyPose174,
	sDelcattyPose16,
	sDelcattyPose137,
	sDelcattyPose138,
	sDelcattyPose178,
	sDelcattyPose19,
	sDelcattyPose140,
	sDelcattyPose141,
	sDelcattyPose182,
	sDelcattyPose22,
	sDelcattyPose143,
	sDelcattyPose144,
	sDelcattyPose56,
	sDelcattyPose27,
	sDelcattyPose55,
	sDelcattyPose51,
	sDelcattyPose47,
	sDelcattyPose43,
	sDelcattyPose39,
	sDelcattyPose35,
	sDelcattyPose31,
	sDelcattyPose195,
	sDelcattyPose196,
	sDelcattyPose197,
	sDelcattyPose198,
	sDelcattyPose199,
	sDelcattyPose200,
	sDelcattyPose201,
	sDelcattyPose202,
	sDelcattyPose1,
	sDelcattyPose26,
	sDelcattyPose27,
	sDelcattyPose4,
	sDelcattyPose30,
	sDelcattyPose31,
	sDelcattyPose7,
	sDelcattyPose34,
	sDelcattyPose211,
	sDelcattyPose10,
	sDelcattyPose38,
	sDelcattyPose214,
	sDelcattyPose13,
	sDelcattyPose42,
	sDelcattyPose217,
	sDelcattyPose16,
	sDelcattyPose46,
	sDelcattyPose220,
	sDelcattyPose19,
	sDelcattyPose50,
	sDelcattyPose223,
	sDelcattyPose22,
	sDelcattyPose54,
	sDelcattyPose55,
	sDelcattyPose27,
	sDelcattyPose55,
	sDelcattyPose51,
	sDelcattyPose47,
	sDelcattyPose43,
	sDelcattyPose39,
	sDelcattyPose35,
	sDelcattyPose31,
	sDelcattyPose1,
	sDelcattyPose22,
	sDelcattyPose19,
	sDelcattyPose16,
	sDelcattyPose13,
	sDelcattyPose10,
	sDelcattyPose7,
	sDelcattyPose4,
};

static const struct PositionSets sAxPositionsDelcatty[] = {
	[0] = { .set = { {-1, -9}, {-3, 0}, {1, 0}, {-1, -8} } },
	[1] = { .set = { {-2, -8}, {-2, 2}, {-1, 0}, {-1, -7} } },
	[2] = { .set = { {0, -8}, {-1, 0}, {0, 2}, {-1, -7} } },
	[3] = { .set = { {3, -9}, {3, -1}, {-1, 1}, {0, -8} } },
	[4] = { .set = { {4, -8}, {4, 2}, {-2, 0}, {0, -7} } },
	[5] = { .set = { {2, -8}, {1, -1}, {1, 3}, {0, -7} } },
	[6] = { .set = { {6, -11}, {4, -3}, {2, 0}, {0, -8} } },
	[7] = { .set = { {7, -11}, {6, -1}, {-1, 1}, {1, -7} } },
	[8] = { .set = { {6, -10}, {1, -2}, {6, 0}, {1, -7} } },
	[9] = { .set = { {2, -13}, {-2, -2}, {3, -1}, {-1, -9} } },
	[10] = { .set = { {2, -12}, {-2, -4}, {1, 1}, {-1, -8} } },
	[11] = { .set = { {2, -12}, {-2, -2}, {6, -2}, {0, -8} } },
	[12] = { .set = { {-1, -14}, {1, -3}, {-3, -3}, {-1, -11} } },
	[13] = { .set = { {2, -12}, {0, -5}, {-3, -2}, {-1, -10} } },
	[14] = { .set = { {-4, -12}, {1, -2}, {-3, -5}, {-1, -10} } },
	[15] = { .set = { {-4, -13}, {0, -2}, {-5, -1}, {-1, -9} } },
	[16] = { .set = { {-4, -12}, {0, -4}, {-3, 1}, {-1, -8} } },
	[17] = { .set = { {-4, -12}, {0, -2}, {-8, -2}, {-2, -8} } },
	[18] = { .set = { {-8, -11}, {-6, -3}, {-4, 0}, {-2, -8} } },
	[19] = { .set = { {-9, -11}, {-8, -1}, {-1, 1}, {-3, -7} } },
	[20] = { .set = { {-8, -10}, {-3, -2}, {-8, 0}, {-3, -7} } },
	[21] = { .set = { {-5, -9}, {-5, -1}, {-1, 1}, {-2, -8} } },
	[22] = { .set = { {-6, -8}, {-6, 2}, {0, 0}, {-2, -7} } },
	[23] = { .set = { {-4, -8}, {-3, -1}, {-3, 3}, {-2, -7} } },
	[24] = { .set = { {-1, -9}, {-3, 0}, {1, 0}, {-1, -8} } },
	[25] = { .set = { {-1, -12}, {-3, 0}, {1, 0}, {-1, -10} } },
	[26] = { .set = { {-1, -6}, {-5, 0}, {3, 0}, {-1, -8} } },
	[27] = { .set = { {-1, -11}, {-2, 0}, {0, 0}, {-1, -10} } },
	[28] = { .set = { {3, -9}, {3, -1}, {-1, 1}, {0, -8} } },
	[29] = { .set = { {2, -11}, {3, -1}, {-1, 1}, {-1, -9} } },
	[30] = { .set = { {4, -7}, {4, -1}, {-3, 1}, {0, -7} } },
	[31] = { .set = { {2, -10}, {2, -1}, {-1, 1}, {-2, -9} } },
	[32] = { .set = { {6, -11}, {4, -3}, {2, 0}, {0, -8} } },
	[33] = { .set = { {4, -12}, {4, -3}, {2, 0}, {-1, -8} } },
	[34] = { .set = { {9, -9}, {4, -3}, {1, 0}, {1, -7} } },
	[35] = { .set = { {5, -12}, {1, -3}, {1, -1}, {0, -9} } },
	[36] = { .set = { {2, -13}, {-2, -2}, {3, -1}, {-1, -9} } },
	[37] = { .set = { {2, -12}, {-3, -3}, {3, -1}, {-2, -9} } },
	[38] = { .set = { {6, -12}, {-3, -5}, {4, -1}, {1, -9} } },
	[39] = { .set = { {3, -12}, {0, -1}, {2, 0}, {0, -9} } },
	[40] = { .set = { {-1, -14}, {1, -3}, {-3, -3}, {-1, -11} } },
	[41] = { .set = { {-1, -13}, {1, -3}, {-3, -3}, {-1, -9} } },
	[42] = { .set = { {-1, -12}, {4, -4}, {-6, -4}, {-1, -10} } },
	[43] = { .set = { {-1, -13}, {1, -3}, {-3, -3}, {-1, -9} } },
	[44] = { .set = { {-4, -13}, {0, -2}, {-5, -1}, {-1, -9} } },
	[45] = { .set = { {-4, -12}, {1, -3}, {-5, -1}, {0, -9} } },
	[46] = { .set = { {-8, -12}, {1, -5}, {-6, -1}, {-3, -9} } },
	[47] = { .set = { {-5, -12}, {-2, -1}, {-4, 0}, {-2, -9} } },
	[48] = { .set = { {-8, -11}, {-6, -3}, {-4, 0}, {-2, -8} } },
	[49] = { .set = { {-6, -12}, {-6, -3}, {-4, 0}, {-1, -8} } },
	[50] = { .set = { {-11, -9}, {-6, -3}, {-3, 0}, {-3, -7} } },
	[51] = { .set = { {-7, -12}, {-3, -3}, {-3, -1}, {-2, -9} } },
	[52] = { .set = { {-5, -9}, {-5, -1}, {-1, 1}, {-2, -8} } },
	[53] = { .set = { {-4, -11}, {-5, -1}, {-1, 1}, {-1, -9} } },
	[54] = { .set = { {-6, -7}, {-6, -1}, {1, 1}, {-2, -7} } },
	[55] = { .set = { {-4, -10}, {-4, -1}, {-1, 1}, {0, -9} } },
	[56] = { .set = { {-1, -9}, {-3, 0}, {1, 0}, {-1, -8} } },
	[57] = { .set = { {-1, -12}, {-3, 0}, {1, 0}, {-1, -10} } },
	[58] = { .set = { {-1, -6}, {-5, 0}, {3, 0}, {-1, -8} } },
	[59] = { .set = { {-1, -11}, {-2, 0}, {0, 0}, {-1, -10} } },
	[60] = { .set = { {3, -9}, {3, -1}, {-1, 1}, {0, -8} } },
	[61] = { .set = { {2, -11}, {3, -1}, {-1, 1}, {-1, -9} } },
	[62] = { .set = { {4, -7}, {4, -1}, {-3, 1}, {0, -7} } },
	[63] = { .set = { {2, -10}, {2, -1}, {-1, 1}, {-2, -9} } },
	[64] = { .set = { {6, -11}, {4, -3}, {2, 0}, {0, -8} } },
	[65] = { .set = { {4, -12}, {4, -3}, {2, 0}, {-1, -8} } },
	[66] = { .set = { {9, -9}, {4, -3}, {1, 0}, {1, -7} } },
	[67] = { .set = { {5, -12}, {1, -3}, {1, -1}, {0, -9} } },
	[68] = { .set = { {2, -13}, {-2, -2}, {3, -1}, {-1, -9} } },
	[69] = { .set = { {2, -12}, {-3, -3}, {3, -1}, {-2, -9} } },
	[70] = { .set = { {6, -12}, {-3, -5}, {4, -1}, {1, -9} } },
	[71] = { .set = { {3, -12}, {0, -1}, {2, 0}, {0, -9} } },
	[72] = { .set = { {-1, -14}, {1, -3}, {-3, -3}, {-1, -11} } },
	[73] = { .set = { {-1, -13}, {1, -3}, {-3, -3}, {-1, -9} } },
	[74] = { .set = { {-1, -12}, {4, -4}, {-6, -4}, {-1, -10} } },
	[75] = { .set = { {-1, -13}, {1, -3}, {-3, -3}, {-1, -9} } },
	[76] = { .set = { {-4, -13}, {0, -2}, {-5, -1}, {-1, -9} } },
	[77] = { .set = { {-4, -12}, {1, -3}, {-5, -1}, {0, -9} } },
	[78] = { .set = { {-8, -12}, {1, -5}, {-6, -1}, {-3, -9} } },
	[79] = { .set = { {-5, -12}, {-2, -1}, {-4, 0}, {-2, -9} } },
	[80] = { .set = { {-8, -11}, {-6, -3}, {-4, 0}, {-2, -8} } },
	[81] = { .set = { {-6, -12}, {-6, -3}, {-4, 0}, {-1, -8} } },
	[82] = { .set = { {-11, -9}, {-6, -3}, {-3, 0}, {-3, -7} } },
	[83] = { .set = { {-7, -12}, {-3, -3}, {-3, -1}, {-2, -9} } },
	[84] = { .set = { {-5, -9}, {-5, -1}, {-1, 1}, {-2, -8} } },
	[85] = { .set = { {-4, -11}, {-5, -1}, {-1, 1}, {-1, -9} } },
	[86] = { .set = { {-6, -7}, {-6, -1}, {1, 1}, {-2, -7} } },
	[87] = { .set = { {-4, -10}, {-4, -1}, {-1, 1}, {0, -9} } },
	[88] = { .set = { {-1, -9}, {-3, 0}, {1, 0}, {-1, -8} } },
	[89] = { .set = { {-1, -12}, {-3, 0}, {1, 0}, {-1, -10} } },
	[90] = { .set = { {-1, -6}, {-5, 0}, {3, 0}, {-1, -8} } },
	[91] = { .set = { {-1, -11}, {-2, 0}, {0, 0}, {-1, -10} } },
	[92] = { .set = { {3, -9}, {3, -1}, {-1, 1}, {0, -8} } },
	[93] = { .set = { {2, -11}, {3, -1}, {-1, 1}, {-1, -9} } },
	[94] = { .set = { {4, -7}, {4, -1}, {-3, 1}, {0, -7} } },
	[95] = { .set = { {2, -10}, {2, -1}, {-1, 1}, {-2, -9} } },
	[96] = { .set = { {6, -11}, {4, -3}, {2, 0}, {0, -8} } },
	[97] = { .set = { {4, -12}, {4, -3}, {2, 0}, {-1, -8} } },
	[98] = { .set = { {9, -9}, {4, -3}, {1, 0}, {1, -7} } },
	[99] = { .set = { {5, -12}, {1, -3}, {1, -1}, {0, -9} } },
	[100] = { .set = { {2, -13}, {-2, -2}, {3, -1}, {-1, -9} } },
	[101] = { .set = { {2, -12}, {-3, -3}, {3, -1}, {-2, -9} } },
	[102] = { .set = { {6, -12}, {-3, -5}, {4, -1}, {1, -9} } },
	[103] = { .set = { {3, -12}, {0, -1}, {2, 0}, {0, -9} } },
	[104] = { .set = { {-1, -14}, {1, -3}, {-3, -3}, {-1, -11} } },
	[105] = { .set = { {-1, -13}, {1, -3}, {-3, -3}, {-1, -9} } },
	[106] = { .set = { {-1, -12}, {4, -4}, {-6, -4}, {-1, -10} } },
	[107] = { .set = { {-1, -13}, {1, -3}, {-3, -3}, {-1, -9} } },
	[108] = { .set = { {-4, -13}, {0, -2}, {-5, -1}, {-1, -9} } },
	[109] = { .set = { {-4, -12}, {1, -3}, {-5, -1}, {0, -9} } },
	[110] = { .set = { {-8, -12}, {1, -5}, {-6, -1}, {-3, -9} } },
	[111] = { .set = { {-5, -12}, {-2, -1}, {-4, 0}, {-2, -9} } },
	[112] = { .set = { {-8, -11}, {-6, -3}, {-4, 0}, {-2, -8} } },
	[113] = { .set = { {-6, -12}, {-6, -3}, {-4, 0}, {-1, -8} } },
	[114] = { .set = { {-11, -9}, {-6, -3}, {-3, 0}, {-3, -7} } },
	[115] = { .set = { {-7, -12}, {-3, -3}, {-3, -1}, {-2, -9} } },
	[116] = { .set = { {-5, -9}, {-5, -1}, {-1, 1}, {-2, -8} } },
	[117] = { .set = { {-4, -11}, {-5, -1}, {-1, 1}, {-1, -9} } },
	[118] = { .set = { {-6, -7}, {-6, -1}, {1, 1}, {-2, -7} } },
	[119] = { .set = { {-4, -10}, {-4, -1}, {-1, 1}, {0, -9} } },
	[120] = { .set = { {-1, -9}, {-3, 0}, {1, 0}, {-1, -8} } },
	[121] = { .set = { {-3, -9}, {-3, 0}, {1, 0}, {-2, -8} } },
	[122] = { .set = { {1, -9}, {-3, 0}, {1, 0}, {0, -8} } },
	[123] = { .set = { {3, -9}, {3, -1}, {-1, 1}, {0, -8} } },
	[124] = { .set = { {4, -9}, {3, -1}, {-1, 1}, {0, -8} } },
	[125] = { .set = { {2, -9}, {3, -1}, {-1, 1}, {0, -8} } },
	[126] = { .set = { {6, -11}, {4, -3}, {2, 0}, {0, -8} } },
	[127] = { .set = { {6, -12}, {4, -3}, {2, 0}, {0, -9} } },
	[128] = { .set = { {6, -10}, {4, -3}, {2, 0}, {0, -7} } },
	[129] = { .set = { {2, -13}, {-2, -2}, {3, -1}, {-1, -9} } },
	[130] = { .set = { {0, -13}, {-3, -4}, {3, -1}, {0, -10} } },
	[131] = { .set = { {4, -12}, {-3, -4}, {3, -1}, {0, -9} } },
	[132] = { .set = { {-1, -14}, {1, -3}, {-3, -3}, {-1, -11} } },
	[133] = { .set = { {2, -13}, {1, -2}, {-3, -2}, {-1, -11} } },
	[134] = { .set = { {-4, -13}, {1, -2}, {-3, -2}, {-2, -11} } },
	[135] = { .set = { {-4, -13}, {0, -2}, {-5, -1}, {-1, -9} } },
	[136] = { .set = { {-2, -13}, {1, -4}, {-5, -1}, {-2, -10} } },
	[137] = { .set = { {-6, -12}, {1, -4}, {-5, -1}, {-2, -9} } },
	[138] = { .set = { {-8, -11}, {-6, -3}, {-4, 0}, {-2, -8} } },
	[139] = { .set = { {-8, -12}, {-6, -3}, {-4, 0}, {-2, -9} } },
	[140] = { .set = { {-8, -10}, {-6, -3}, {-4, 0}, {-2, -7} } },
	[141] = { .set = { {-5, -9}, {-5, -1}, {-1, 1}, {-2, -8} } },
	[142] = { .set = { {-6, -9}, {-5, -1}, {-1, 1}, {-2, -8} } },
	[143] = { .set = { {-4, -9}, {-5, -1}, {-1, 1}, {-2, -8} } },
	[144] = { .set = { {-4, -4}, {-6, 0}, {-4, 0}, {0, -4} } },
	[145] = { .set = { {-5, -3}, {-6, 0}, {-4, 0}, {-1, -4} } },
	[146] = { .set = { {0, -9}, {-4, 0}, {4, 0}, {0, -8} } },
	[147] = { .set = { {2, -9}, {6, -3}, {2, 1}, {0, -8} } },
	[148] = { .set = { {4, -8}, {8, -3}, {5, 0}, {-1, -7} } },
	[149] = { .set = { {1, -12}, {-1, -5}, {5, -3}, {-2, -10} } },
	[150] = { .set = { {0, -10}, {3, -5}, {-3, -5}, {0, -11} } },
	[151] = { .set = { {-2, -12}, {0, -5}, {-6, -3}, {1, -10} } },
	[152] = { .set = { {-5, -8}, {-9, -3}, {-6, 0}, {0, -7} } },
	[153] = { .set = { {-3, -9}, {-7, -3}, {-3, 1}, {-1, -8} } },
	[154] = { .set = { {-1, -9}, {-3, 0}, {1, 0}, {-1, -8} } },
	[155] = { .set = { {-3, -9}, {-3, 0}, {1, 0}, {-2, -8} } },
	[156] = { .set = { {1, -9}, {-3, 0}, {1, 0}, {0, -8} } },
	[157] = { .set = { {-1, -10}, {-2, 1}, {0, 1}, {-1, -9} } },
	[158] = { .set = { {3, -9}, {3, -1}, {-1, 1}, {0, -8} } },
	[159] = { .set = { {4, -9}, {3, -1}, {-1, 1}, {0, -8} } },
	[160] = { .set = { {2, -9}, {3, -1}, {-1, 1}, {0, -8} } },
	[161] = { .set = { {2, -10}, {2, -1}, {-1, 1}, {-2, -9} } },
	[162] = { .set = { {6, -11}, {4, -3}, {2, 0}, {0, -8} } },
	[163] = { .set = { {6, -12}, {4, -3}, {2, 0}, {0, -9} } },
	[164] = { .set = { {6, -10}, {4, -3}, {2, 0}, {0, -7} } },
	[165] = { .set = { {5, -11}, {1, -2}, {1, 0}, {0, -8} } },
	[166] = { .set = { {2, -13}, {-2, -2}, {3, -1}, {-1, -9} } },
	[167] = { .set = { {0, -13}, {-3, -4}, {3, -1}, {0, -10} } },
	[168] = { .set = { {4, -12}, {-3, -4}, {3, -1}, {0, -9} } },
	[169] = { .set = { {3, -13}, {0, -2}, {2, -1}, {0, -10} } },
	[170] = { .set = { {-1, -14}, {1, -3}, {-3, -3}, {-1, -11} } },
	[171] = { .set = { {2, -13}, {1, -2}, {-3, -2}, {-1, -11} } },
	[172] = { .set = { {-4, -13}, {1, -2}, {-3, -2}, {-2, -11} } },
	[173] = { .set = { {-1, -14}, {1, -4}, {-3, -4}, {-1, -10} } },
	[174] = { .set = { {-4, -13}, {0, -2}, {-5, -1}, {-1, -9} } },
	[175] = { .set = { {-2, -13}, {1, -4}, {-5, -1}, {-2, -10} } },
	[176] = { .set = { {-6, -12}, {1, -4}, {-5, -1}, {-2, -9} } },
	[177] = { .set = { {-5, -13}, {-2, -2}, {-4, -1}, {-2, -10} } },
	[178] = { .set = { {-8, -11}, {-6, -3}, {-4, 0}, {-2, -8} } },
	[179] = { .set = { {-8, -12}, {-6, -3}, {-4, 0}, {-2, -9} } },
	[180] = { .set = { {-8, -10}, {-6, -3}, {-4, 0}, {-2, -7} } },
	[181] = { .set = { {-7, -11}, {-3, -2}, {-3, 0}, {-2, -8} } },
	[182] = { .set = { {-5, -9}, {-5, -1}, {-1, 1}, {-2, -8} } },
	[183] = { .set = { {-6, -9}, {-5, -1}, {-1, 1}, {-2, -8} } },
	[184] = { .set = { {-4, -9}, {-5, -1}, {-1, 1}, {-2, -8} } },
	[185] = { .set = { {-4, -10}, {-4, -1}, {-1, 1}, {0, -9} } },
	[186] = { .set = { {-1, -6}, {-5, 0}, {3, 0}, {-1, -8} } },
	[187] = { .set = { {-6, -7}, {-6, -1}, {1, 1}, {-2, -7} } },
	[188] = { .set = { {-11, -9}, {-6, -3}, {-3, 0}, {-3, -7} } },
	[189] = { .set = { {-8, -12}, {1, -5}, {-6, -1}, {-3, -9} } },
	[190] = { .set = { {-1, -12}, {4, -4}, {-6, -4}, {-1, -10} } },
	[191] = { .set = { {6, -12}, {-3, -5}, {4, -1}, {1, -9} } },
	[192] = { .set = { {9, -9}, {4, -3}, {1, 0}, {1, -7} } },
	[193] = { .set = { {4, -7}, {4, -1}, {-3, 1}, {0, -7} } },
	[194] = { .set = { {-1, -11}, {-3, 1}, {1, 1}, {-1, -9} } },
	[195] = { .set = { {4, -11}, {5, -1}, {1, 1}, {1, -9} } },
	[196] = { .set = { {5, -12}, {5, -3}, {3, 0}, {0, -8} } },
	[197] = { .set = { {3, -12}, {-2, -3}, {4, -1}, {-1, -9} } },
	[198] = { .set = { {-1, -14}, {1, -4}, {-3, -4}, {-1, -10} } },
	[199] = { .set = { {-5, -12}, {0, -3}, {-6, -1}, {-1, -9} } },
	[200] = { .set = { {-7, -12}, {-7, -3}, {-5, 0}, {-2, -8} } },
	[201] = { .set = { {-5, -11}, {-6, -1}, {-2, 1}, {-2, -9} } },
	[202] = { .set = { {-1, -9}, {-3, 0}, {1, 0}, {-1, -8} } },
	[203] = { .set = { {-1, -12}, {-3, 0}, {1, 0}, {-1, -10} } },
	[204] = { .set = { {-1, -6}, {-5, 0}, {3, 0}, {-1, -8} } },
	[205] = { .set = { {3, -9}, {3, -1}, {-1, 1}, {0, -8} } },
	[206] = { .set = { {2, -11}, {3, -1}, {-1, 1}, {-1, -9} } },
	[207] = { .set = { {4, -7}, {4, -1}, {-3, 1}, {0, -7} } },
	[208] = { .set = { {6, -11}, {4, -3}, {2, 0}, {0, -8} } },
	[209] = { .set = { {4, -12}, {4, -3}, {2, 0}, {-1, -8} } },
	[210] = { .set = { {8, -9}, {3, -3}, {0, 0}, {0, -7} } },
	[211] = { .set = { {2, -13}, {-2, -2}, {3, -1}, {-1, -9} } },
	[212] = { .set = { {2, -12}, {-3, -3}, {3, -1}, {-2, -9} } },
	[213] = { .set = { {5, -12}, {-4, -5}, {3, -1}, {0, -9} } },
	[214] = { .set = { {-1, -14}, {1, -3}, {-3, -3}, {-1, -11} } },
	[215] = { .set = { {-1, -13}, {1, -3}, {-3, -3}, {-1, -9} } },
	[216] = { .set = { {-1, -14}, {4, -6}, {-6, -6}, {-1, -12} } },
	[217] = { .set = { {-4, -13}, {0, -2}, {-5, -1}, {-1, -9} } },
	[218] = { .set = { {-4, -12}, {1, -3}, {-5, -1}, {0, -9} } },
	[219] = { .set = { {-7, -12}, {2, -5}, {-5, -1}, {-2, -9} } },
	[220] = { .set = { {-8, -11}, {-6, -3}, {-4, 0}, {-2, -8} } },
	[221] = { .set = { {-6, -12}, {-6, -3}, {-4, 0}, {-1, -8} } },
	[222] = { .set = { {-10, -9}, {-5, -3}, {-2, 0}, {-2, -7} } },
	[223] = { .set = { {-5, -9}, {-5, -1}, {-1, 1}, {-2, -8} } },
	[224] = { .set = { {-4, -11}, {-5, -1}, {-1, 1}, {-1, -9} } },
	[225] = { .set = { {-6, -7}, {-6, -1}, {1, 1}, {-2, -7} } },
	[226] = { .set = { {-1, -6}, {-5, 0}, {3, 0}, {-1, -8} } },
	[227] = { .set = { {-6, -7}, {-6, -1}, {1, 1}, {-2, -7} } },
	[228] = { .set = { {-11, -9}, {-6, -3}, {-3, 0}, {-3, -7} } },
	[229] = { .set = { {-8, -12}, {1, -5}, {-6, -1}, {-3, -9} } },
	[230] = { .set = { {-1, -12}, {4, -4}, {-6, -4}, {-1, -10} } },
	[231] = { .set = { {6, -12}, {-3, -5}, {4, -1}, {1, -9} } },
	[232] = { .set = { {9, -9}, {4, -3}, {1, 0}, {1, -7} } },
	[233] = { .set = { {4, -7}, {4, -1}, {-3, 1}, {0, -7} } },
	[234] = { .set = { {-1, -9}, {-3, 0}, {1, 0}, {-1, -8} } },
	[235] = { .set = { {-5, -9}, {-5, -1}, {-1, 1}, {-2, -8} } },
	[236] = { .set = { {-8, -11}, {-6, -3}, {-4, 0}, {-2, -8} } },
	[237] = { .set = { {-4, -13}, {0, -2}, {-5, -1}, {-1, -9} } },
	[238] = { .set = { {-1, -14}, {1, -3}, {-3, -3}, {-1, -11} } },
	[239] = { .set = { {2, -13}, {-2, -2}, {3, -1}, {-1, -9} } },
	[240] = { .set = { {6, -11}, {4, -3}, {2, 0}, {0, -8} } },
	[241] = { .set = { {3, -9}, {3, -1}, {-1, 1}, {0, -8} } },
};

static const ax_anim *const sDelcattyAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sDelcattyAnimTable2[] = {
	AX_ANIM_PTR(sDelcattyAnims_2_1),
	AX_ANIM_PTR(sDelcattyAnims_2_2),
	AX_ANIM_PTR(sDelcattyAnims_2_3),
	AX_ANIM_PTR(sDelcattyAnims_2_4),
	AX_ANIM_PTR(sDelcattyAnims_2_5),
	AX_ANIM_PTR(sDelcattyAnims_2_6),
	AX_ANIM_PTR(sDelcattyAnims_2_7),
	AX_ANIM_PTR(sDelcattyAnims_2_8),
};

static const ax_anim *const sDelcattyAnimTable3[] = {
	AX_ANIM_PTR(sDelcattyAnims_3_1),
	AX_ANIM_PTR(sDelcattyAnims_3_2),
	AX_ANIM_PTR(sDelcattyAnims_3_3),
	AX_ANIM_PTR(sDelcattyAnims_3_4),
	AX_ANIM_PTR(sDelcattyAnims_3_5),
	AX_ANIM_PTR(sDelcattyAnims_3_6),
	AX_ANIM_PTR(sDelcattyAnims_3_7),
	AX_ANIM_PTR(sDelcattyAnims_3_8),
};

static const ax_anim *const sDelcattyAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02561),
	AX_ANIM_PTR(gAxSharedAnim_02565),
	AX_ANIM_PTR(gAxSharedAnim_02570),
	AX_ANIM_PTR(gAxSharedAnim_02483),
	AX_ANIM_PTR(gAxSharedAnim_02487),
	AX_ANIM_PTR(gAxSharedAnim_02488),
	AX_ANIM_PTR(gAxSharedAnim_02491),
	AX_ANIM_PTR(gAxSharedAnim_02493),
};

static const ax_anim *const sDelcattyAnimTable5[] = {
	AX_ANIM_PTR(sDelcattyAnims_5_1),
	AX_ANIM_PTR(sDelcattyAnims_5_2),
	AX_ANIM_PTR(sDelcattyAnims_5_3),
	AX_ANIM_PTR(sDelcattyAnims_5_4),
	AX_ANIM_PTR(sDelcattyAnims_5_5),
	AX_ANIM_PTR(sDelcattyAnims_5_6),
	AX_ANIM_PTR(sDelcattyAnims_5_7),
	AX_ANIM_PTR(sDelcattyAnims_5_8),
};

static const ax_anim *const sDelcattyAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
	AX_ANIM_PTR(gAxSharedAnim_02367),
};

static const ax_anim *const sDelcattyAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00531),
	AX_ANIM_PTR(gAxSharedAnim_00543),
	AX_ANIM_PTR(gAxSharedAnim_00551),
	AX_ANIM_PTR(gAxSharedAnim_00559),
	AX_ANIM_PTR(gAxSharedAnim_00577),
	AX_ANIM_PTR(gAxSharedAnim_00587),
	AX_ANIM_PTR(gAxSharedAnim_00596),
	AX_ANIM_PTR(gAxSharedAnim_00602),
};

static const ax_anim *const sDelcattyAnimTable8[] = {
	AX_ANIM_PTR(sDelcattyAnims_8_1),
	AX_ANIM_PTR(sDelcattyAnims_8_2),
	AX_ANIM_PTR(sDelcattyAnims_8_3),
	AX_ANIM_PTR(sDelcattyAnims_8_4),
	AX_ANIM_PTR(sDelcattyAnims_8_5),
	AX_ANIM_PTR(sDelcattyAnims_8_6),
	AX_ANIM_PTR(sDelcattyAnims_8_7),
	AX_ANIM_PTR(sDelcattyAnims_8_8),
};

static const ax_anim *const sDelcattyAnimTable9[] = {
	AX_ANIM_PTR(sDelcattyAnims_9_1),
	AX_ANIM_PTR(sDelcattyAnims_9_2),
	AX_ANIM_PTR(sDelcattyAnims_9_3),
	AX_ANIM_PTR(sDelcattyAnims_9_4),
	AX_ANIM_PTR(sDelcattyAnims_9_5),
	AX_ANIM_PTR(sDelcattyAnims_9_6),
	AX_ANIM_PTR(sDelcattyAnims_9_7),
	AX_ANIM_PTR(sDelcattyAnims_9_8),
};

static const ax_anim *const sDelcattyAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01143),
	AX_ANIM_PTR(gAxSharedAnim_01156),
	AX_ANIM_PTR(gAxSharedAnim_01167),
	AX_ANIM_PTR(gAxSharedAnim_01178),
	AX_ANIM_PTR(gAxSharedAnim_01189),
	AX_ANIM_PTR(gAxSharedAnim_01200),
	AX_ANIM_PTR(gAxSharedAnim_01217),
	AX_ANIM_PTR(gAxSharedAnim_01228),
};

static const ax_anim *const sDelcattyAnimTable11[] = {
	AX_ANIM_PTR(sDelcattyAnims_11_1),
	AX_ANIM_PTR(sDelcattyAnims_11_2),
	AX_ANIM_PTR(sDelcattyAnims_11_3),
	AX_ANIM_PTR(sDelcattyAnims_11_4),
	AX_ANIM_PTR(sDelcattyAnims_11_5),
	AX_ANIM_PTR(sDelcattyAnims_11_6),
	AX_ANIM_PTR(sDelcattyAnims_11_7),
	AX_ANIM_PTR(sDelcattyAnims_11_8),
};

static const ax_anim *const sDelcattyAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01472),
	AX_ANIM_PTR(gAxSharedAnim_01520),
	AX_ANIM_PTR(gAxSharedAnim_01507),
	AX_ANIM_PTR(gAxSharedAnim_01500),
	AX_ANIM_PTR(gAxSharedAnim_01499),
	AX_ANIM_PTR(gAxSharedAnim_01491),
	AX_ANIM_PTR(gAxSharedAnim_01481),
	AX_ANIM_PTR(gAxSharedAnim_01473),
};

static const ax_anim *const sDelcattyAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01525),
	AX_ANIM_PTR(gAxSharedAnim_01579),
	AX_ANIM_PTR(gAxSharedAnim_01577),
	AX_ANIM_PTR(gAxSharedAnim_01555),
	AX_ANIM_PTR(gAxSharedAnim_01549),
	AX_ANIM_PTR(gAxSharedAnim_01544),
	AX_ANIM_PTR(gAxSharedAnim_01539),
	AX_ANIM_PTR(gAxSharedAnim_01531),
};

static const ax_anim *const *const sAxAnimationsDelcatty[] = {
	sDelcattyAnimTable1,
	sDelcattyAnimTable2,
	sDelcattyAnimTable3,
	sDelcattyAnimTable4,
	sDelcattyAnimTable5,
	sDelcattyAnimTable6,
	sDelcattyAnimTable7,
	sDelcattyAnimTable8,
	sDelcattyAnimTable9,
	sDelcattyAnimTable10,
	sDelcattyAnimTable11,
	sDelcattyAnimTable12,
	sDelcattyAnimTable13,
};

static const ax_sprite *const sAxSpritesDelcatty[] = {
	sDelcattySprites1,
	sDelcattySprites2,
	sDelcattySprites3,
	sDelcattySprites4,
	sDelcattySprites5,
	sDelcattySprites6,
	sDelcattySprites7,
	sDelcattySprites8,
	sDelcattySprites9,
	sDelcattySprites10,
	sDelcattySprites11,
	sDelcattySprites12,
	sDelcattySprites13,
	sDelcattySprites14,
	sDelcattySprites15,
	sDelcattySprites16,
	sDelcattySprites17,
	sDelcattySprites18,
	sDelcattySprites19,
	sDelcattySprites20,
	sDelcattySprites21,
	sDelcattySprites22,
	sDelcattySprites23,
	sDelcattySprites24,
	sDelcattySprites25,
	sDelcattySprites26,
	sDelcattySprites27,
	sDelcattySprites28,
	sDelcattySprites29,
	sDelcattySprites30,
	sDelcattySprites31,
	sDelcattySprites32,
	sDelcattySprites33,
	sDelcattySprites34,
	sDelcattySprites35,
	sDelcattySprites36,
	sDelcattySprites37,
	sDelcattySprites38,
	sDelcattySprites39,
	sDelcattySprites40,
	sDelcattySprites41,
	sDelcattySprites42,
	sDelcattySprites43,
	sDelcattySprites44,
	sDelcattySprites45,
	sDelcattySprites46,
	sDelcattySprites47,
	sDelcattySprites48,
	sDelcattySprites49,
	sDelcattySprites50,
	sDelcattySprites51,
	sDelcattySprites52,
};

static const axmain sAxMainDelcatty = {
	.poses = sAxPosesDelcatty,
	.animations = sAxAnimationsDelcatty,
	.animCount = ARRAY_COUNT(sAxAnimationsDelcatty),
	.spriteData = sAxSpritesDelcatty,
	.positions = sAxPositionsDelcatty,
};
