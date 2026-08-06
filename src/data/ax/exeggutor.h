/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainExeggutor;
const SiroArchive gAxExeggutor = {"SIRO", &sAxMainExeggutor};

static const ax_pose sExeggutorPose1[] = {
	AX_POSE(0, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose2[] = {
	AX_POSE(1, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose3[] = {
	AX_POSE(2, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose6[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose9[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose12[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose13[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose14[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose15[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose18[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose21[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose22[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose24[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose26[] = {
	AX_POSE(15, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose27[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose28[] = {
	AX_POSE(17, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose30[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose31[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose32[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose34[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose35[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose36[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose38[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose39[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose40[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose41[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose42[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose43[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose44[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose46[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose47[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose48[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose50[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose51[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose52[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose54[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose55[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose56[] = {
	AX_POSE(20, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose122[] = {
	AX_POSE(30, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose123[] = {
	AX_POSE(31, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose125[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose126[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose128[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose129[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose131[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose132[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose134[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose135[] = {
	AX_POSE(39, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose137[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose138[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose140[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose141[] = {
	AX_POSE(35, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose143[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose144[] = {
	AX_POSE(33, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose145[] = {
	AX_POSE(40, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose146[] = {
	AX_POSE(41, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose147[] = {
	AX_POSE(42, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose148[] = {
	AX_POSE(43, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose149[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose150[] = {
	AX_POSE(45, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose151[] = {
	AX_POSE(46, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose152[] = {
	AX_POSE(45, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose153[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose154[] = {
	AX_POSE(43, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose181[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose184[] = {
	AX_POSE(24, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose185[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose186[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose188[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose189[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose190[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose192[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose193[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose194[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose202[] = {
	AX_POSE(22, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose217[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose220[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose221[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose222[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose223[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose224[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose225[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExeggutorPose226[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_anim sExeggutorAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 26, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 30, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {2, -3}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 29, .offset = {8, 1}, .shadow = {8, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {16, 9}, .shadow = {16, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {19, 18}, .shadow = {19, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {20, 17}, .shadow = {20, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {19, 18}, .shadow = {19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {20, 17}, .shadow = {20, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {8, 7}, .shadow = {8, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 34, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {3, -3}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 33, .offset = {8, -5}, .shadow = {8, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {12, -5}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {17, -1}, .shadow = {17, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {17, -1}, .shadow = {17, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 38, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -5}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {4, -12}, .shadow = {4, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {10, -17}, .shadow = {10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {19, -17}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {19, -17}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 42, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -3}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 41, .offset = {0, -9}, .shadow = {0, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -14}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 46, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, -5}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 45, .offset = {-4, -12}, .shadow = {-4, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-10, -17}, .shadow = {-10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 50, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {-3, -3}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 49, .offset = {-8, -5}, .shadow = {-8, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {-12, -5}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-17, -1}, .shadow = {-17, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-17, -1}, .shadow = {-17, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 54, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {-2, -3}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 53, .offset = {-8, 1}, .shadow = {-8, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {-16, 9}, .shadow = {-16, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {-20, 17}, .shadow = {-20, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-20, 17}, .shadow = {-20, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-8, 7}, .shadow = {-8, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 58, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 57, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 62, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {2, -3}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 61, .offset = {8, 1}, .shadow = {8, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {16, 9}, .shadow = {16, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {19, 18}, .shadow = {19, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {20, 17}, .shadow = {20, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {19, 18}, .shadow = {19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {20, 17}, .shadow = {20, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {8, 7}, .shadow = {8, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 66, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {3, -3}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 65, .offset = {8, -5}, .shadow = {8, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {12, -5}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {17, -1}, .shadow = {17, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {17, -1}, .shadow = {17, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 70, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, -5}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 69, .offset = {4, -12}, .shadow = {4, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {10, -17}, .shadow = {10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {19, -17}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {19, -17}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 74, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, -3}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 73, .offset = {0, -9}, .shadow = {0, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, -14}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 78, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {0, -5}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 77, .offset = {-4, -12}, .shadow = {-4, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {-10, -17}, .shadow = {-10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 82, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {-3, -3}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 81, .offset = {-8, -5}, .shadow = {-8, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {-12, -5}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-17, -1}, .shadow = {-17, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-17, -1}, .shadow = {-17, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 86, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {-2, -3}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 85, .offset = {-8, 1}, .shadow = {-8, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {-16, 9}, .shadow = {-16, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {-20, 17}, .shadow = {-20, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-20, 17}, .shadow = {-20, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-8, 7}, .shadow = {-8, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 90, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 94, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 98, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {5, 1}, .shadow = {5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {5, 1}, .shadow = {5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {5, 1}, .shadow = {5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 102, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {6, -4}, .shadow = {6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {6, -4}, .shadow = {6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {6, -4}, .shadow = {6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 106, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 110, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 114, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 115, .offset = {-5, 1}, .shadow = {-5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-5, 1}, .shadow = {-5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-5, 1}, .shadow = {-5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 118, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 1, .poseId = 119, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_5_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_5_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_5_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_5_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_5_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_5_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_5_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_5_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_8_1[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_8_2[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_8_3[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_8_4[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_8_5[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_8_6[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_8_7[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_8_8[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {17, 5}, .shadow = {17, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {21, 12}, .shadow = {21, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 181, .offset = {22, 20}, .shadow = {22, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 182, .offset = {13, 21}, .shadow = {13, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 185, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 180, .offset = {22, -2}, .shadow = {22, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 181, .offset = {20, 3}, .shadow = {20, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 179, .offset = {22, -21}, .shadow = {22, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 180, .offset = {22, -14}, .shadow = {22, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {17, -6}, .shadow = {17, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 185, .offset = {-22, -21}, .shadow = {-22, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 184, .offset = {-22, -14}, .shadow = {-22, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {-17, -6}, .shadow = {-17, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 184, .offset = {-22, -2}, .shadow = {-22, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 183, .offset = {-20, 3}, .shadow = {-20, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {-17, 5}, .shadow = {-17, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {-21, 12}, .shadow = {-21, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 183, .offset = {-22, 20}, .shadow = {-22, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 182, .offset = {-13, 21}, .shadow = {-13, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 213, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 213, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 213, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 212, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 214, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 214, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 212, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExeggutorAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 215, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 216, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 216, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 216, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 216, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 215, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 217, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 215, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sExeggutorGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_1.4bpp.lz");
static const ax_sprite sExeggutorSprites1[] = {
	{sExeggutorGfx1, ARRAY_COUNT(sExeggutorGfx1)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_2.4bpp.lz");
static const ax_sprite sExeggutorSprites2[] = {
	{sExeggutorGfx2, ARRAY_COUNT(sExeggutorGfx2)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_3.4bpp.lz");
static const ax_sprite sExeggutorSprites3[] = {
	{sExeggutorGfx3, ARRAY_COUNT(sExeggutorGfx3)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_4.4bpp.lz");
static const ax_sprite sExeggutorSprites4[] = {
	{sExeggutorGfx4, ARRAY_COUNT(sExeggutorGfx4)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_5.4bpp.lz");
static const ax_sprite sExeggutorSprites5[] = {
	{sExeggutorGfx5, ARRAY_COUNT(sExeggutorGfx5)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_6.4bpp.lz");
static const ax_sprite sExeggutorSprites6[] = {
	{sExeggutorGfx6, ARRAY_COUNT(sExeggutorGfx6)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_7.4bpp.lz");
static const ax_sprite sExeggutorSprites7[] = {
	{sExeggutorGfx7, ARRAY_COUNT(sExeggutorGfx7)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_8.4bpp.lz");
static const ax_sprite sExeggutorSprites8[] = {
	{sExeggutorGfx8, ARRAY_COUNT(sExeggutorGfx8)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_9.4bpp.lz");
static const ax_sprite sExeggutorSprites9[] = {
	{sExeggutorGfx9, ARRAY_COUNT(sExeggutorGfx9)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_10.4bpp.lz");
static const ax_sprite sExeggutorSprites10[] = {
	{sExeggutorGfx10, ARRAY_COUNT(sExeggutorGfx10)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_11.4bpp.lz");
static const ax_sprite sExeggutorSprites11[] = {
	{sExeggutorGfx11, ARRAY_COUNT(sExeggutorGfx11)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_12.4bpp.lz");
static const ax_sprite sExeggutorSprites12[] = {
	{sExeggutorGfx12, ARRAY_COUNT(sExeggutorGfx12)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_13.4bpp.lz");
static const ax_sprite sExeggutorSprites13[] = {
	{sExeggutorGfx13, ARRAY_COUNT(sExeggutorGfx13)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_14.4bpp.lz");
static const ax_sprite sExeggutorSprites14[] = {
	{sExeggutorGfx14, ARRAY_COUNT(sExeggutorGfx14)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_15.4bpp.lz");
static const ax_sprite sExeggutorSprites15[] = {
	{sExeggutorGfx15, ARRAY_COUNT(sExeggutorGfx15)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_16.4bpp.lz");
static const u8 sExeggutorGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_16_1.4bpp.lz");
static const u8 sExeggutorGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_16_2.4bpp.lz");
static const ax_sprite sExeggutorSprites16[] = {
	{sExeggutorGfx16, ARRAY_COUNT(sExeggutorGfx16)}, 
	{NULL, 32}, 
	{sExeggutorGfx16_1, ARRAY_COUNT(sExeggutorGfx16_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx16_2, ARRAY_COUNT(sExeggutorGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_17.4bpp.lz");
static const u8 sExeggutorGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_17_1.4bpp.lz");
static const ax_sprite sExeggutorSprites17[] = {
	{NULL, 32}, 
	{sExeggutorGfx17, ARRAY_COUNT(sExeggutorGfx17)}, 
	{NULL, 32}, 
	{sExeggutorGfx17_1, ARRAY_COUNT(sExeggutorGfx17_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_18.4bpp.lz");
static const ax_sprite sExeggutorSprites18[] = {
	{NULL, 32}, 
	{sExeggutorGfx18, ARRAY_COUNT(sExeggutorGfx18)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_19.4bpp.lz");
static const u8 sExeggutorGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_19_1.4bpp.lz");
static const u8 sExeggutorGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_19_2.4bpp.lz");
static const u8 sExeggutorGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_19_3.4bpp.lz");
static const ax_sprite sExeggutorSprites19[] = {
	{sExeggutorGfx19, ARRAY_COUNT(sExeggutorGfx19)}, 
	{NULL, 32}, 
	{sExeggutorGfx19_1, ARRAY_COUNT(sExeggutorGfx19_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx19_2, ARRAY_COUNT(sExeggutorGfx19_2)}, 
	{NULL, 64}, 
	{sExeggutorGfx19_3, ARRAY_COUNT(sExeggutorGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_20.4bpp.lz");
static const u8 sExeggutorGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_20_1.4bpp.lz");
static const u8 sExeggutorGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_20_2.4bpp.lz");
static const u8 sExeggutorGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_20_3.4bpp.lz");
static const ax_sprite sExeggutorSprites20[] = {
	{NULL, 32}, 
	{sExeggutorGfx20, ARRAY_COUNT(sExeggutorGfx20)}, 
	{NULL, 32}, 
	{sExeggutorGfx20_1, ARRAY_COUNT(sExeggutorGfx20_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx20_2, ARRAY_COUNT(sExeggutorGfx20_2)}, 
	{NULL, 32}, 
	{sExeggutorGfx20_3, ARRAY_COUNT(sExeggutorGfx20_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_21.4bpp.lz");
static const u8 sExeggutorGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_21_1.4bpp.lz");
static const u8 sExeggutorGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_21_2.4bpp.lz");
static const u8 sExeggutorGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_21_3.4bpp.lz");
static const ax_sprite sExeggutorSprites21[] = {
	{sExeggutorGfx21, ARRAY_COUNT(sExeggutorGfx21)}, 
	{NULL, 64}, 
	{sExeggutorGfx21_1, ARRAY_COUNT(sExeggutorGfx21_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx21_2, ARRAY_COUNT(sExeggutorGfx21_2)}, 
	{NULL, 32}, 
	{sExeggutorGfx21_3, ARRAY_COUNT(sExeggutorGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_22.4bpp.lz");
static const u8 sExeggutorGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_22_1.4bpp.lz");
static const u8 sExeggutorGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_22_2.4bpp.lz");
static const ax_sprite sExeggutorSprites22[] = {
	{sExeggutorGfx22, ARRAY_COUNT(sExeggutorGfx22)}, 
	{NULL, 32}, 
	{sExeggutorGfx22_1, ARRAY_COUNT(sExeggutorGfx22_1)}, 
	{NULL, 64}, 
	{sExeggutorGfx22_2, ARRAY_COUNT(sExeggutorGfx22_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_23.4bpp.lz");
static const u8 sExeggutorGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_23_1.4bpp.lz");
static const u8 sExeggutorGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_23_2.4bpp.lz");
static const ax_sprite sExeggutorSprites23[] = {
	{NULL, 32}, 
	{sExeggutorGfx23, ARRAY_COUNT(sExeggutorGfx23)}, 
	{NULL, 32}, 
	{sExeggutorGfx23_1, ARRAY_COUNT(sExeggutorGfx23_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx23_2, ARRAY_COUNT(sExeggutorGfx23_2)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_24.4bpp.lz");
static const u8 sExeggutorGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_24_1.4bpp.lz");
static const u8 sExeggutorGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_24_2.4bpp.lz");
static const ax_sprite sExeggutorSprites24[] = {
	{sExeggutorGfx24, ARRAY_COUNT(sExeggutorGfx24)}, 
	{NULL, 64}, 
	{sExeggutorGfx24_1, ARRAY_COUNT(sExeggutorGfx24_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx24_2, ARRAY_COUNT(sExeggutorGfx24_2)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_25.4bpp.lz");
static const u8 sExeggutorGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_25_1.4bpp.lz");
static const u8 sExeggutorGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_25_2.4bpp.lz");
static const u8 sExeggutorGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_25_3.4bpp.lz");
static const ax_sprite sExeggutorSprites25[] = {
	{sExeggutorGfx25, ARRAY_COUNT(sExeggutorGfx25)}, 
	{NULL, 32}, 
	{sExeggutorGfx25_1, ARRAY_COUNT(sExeggutorGfx25_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx25_2, ARRAY_COUNT(sExeggutorGfx25_2)}, 
	{NULL, 64}, 
	{sExeggutorGfx25_3, ARRAY_COUNT(sExeggutorGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_26.4bpp.lz");
static const u8 sExeggutorGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_26_1.4bpp.lz");
static const u8 sExeggutorGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_26_2.4bpp.lz");
static const ax_sprite sExeggutorSprites26[] = {
	{NULL, 32}, 
	{sExeggutorGfx26, ARRAY_COUNT(sExeggutorGfx26)}, 
	{NULL, 32}, 
	{sExeggutorGfx26_1, ARRAY_COUNT(sExeggutorGfx26_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx26_2, ARRAY_COUNT(sExeggutorGfx26_2)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_27.4bpp.lz");
static const u8 sExeggutorGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_27_1.4bpp.lz");
static const u8 sExeggutorGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_27_2.4bpp.lz");
static const u8 sExeggutorGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_27_3.4bpp.lz");
static const ax_sprite sExeggutorSprites27[] = {
	{sExeggutorGfx27, ARRAY_COUNT(sExeggutorGfx27)}, 
	{NULL, 32}, 
	{sExeggutorGfx27_1, ARRAY_COUNT(sExeggutorGfx27_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx27_2, ARRAY_COUNT(sExeggutorGfx27_2)}, 
	{NULL, 32}, 
	{sExeggutorGfx27_3, ARRAY_COUNT(sExeggutorGfx27_3)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_28.4bpp.lz");
static const u8 sExeggutorGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_28_1.4bpp.lz");
static const ax_sprite sExeggutorSprites28[] = {
	{sExeggutorGfx28, ARRAY_COUNT(sExeggutorGfx28)}, 
	{NULL, 32}, 
	{sExeggutorGfx28_1, ARRAY_COUNT(sExeggutorGfx28_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_29.4bpp.lz");
static const u8 sExeggutorGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_29_1.4bpp.lz");
static const ax_sprite sExeggutorSprites29[] = {
	{NULL, 32}, 
	{sExeggutorGfx29, ARRAY_COUNT(sExeggutorGfx29)}, 
	{NULL, 32}, 
	{sExeggutorGfx29_1, ARRAY_COUNT(sExeggutorGfx29_1)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_30.4bpp.lz");
static const ax_sprite sExeggutorSprites30[] = {
	{sExeggutorGfx30, ARRAY_COUNT(sExeggutorGfx30)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_31.4bpp.lz");
static const u8 sExeggutorGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_31_1.4bpp.lz");
static const u8 sExeggutorGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_31_2.4bpp.lz");
static const ax_sprite sExeggutorSprites31[] = {
	{NULL, 32}, 
	{sExeggutorGfx31, ARRAY_COUNT(sExeggutorGfx31)}, 
	{NULL, 32}, 
	{sExeggutorGfx31_1, ARRAY_COUNT(sExeggutorGfx31_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx31_2, ARRAY_COUNT(sExeggutorGfx31_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_32.4bpp.lz");
static const u8 sExeggutorGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_32_1.4bpp.lz");
static const u8 sExeggutorGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_32_2.4bpp.lz");
static const ax_sprite sExeggutorSprites32[] = {
	{sExeggutorGfx32, ARRAY_COUNT(sExeggutorGfx32)}, 
	{NULL, 32}, 
	{sExeggutorGfx32_1, ARRAY_COUNT(sExeggutorGfx32_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx32_2, ARRAY_COUNT(sExeggutorGfx32_2)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_33.4bpp.lz");
static const u8 sExeggutorGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_33_1.4bpp.lz");
static const u8 sExeggutorGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_33_2.4bpp.lz");
static const u8 sExeggutorGfx33_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_33_3.4bpp.lz");
static const ax_sprite sExeggutorSprites33[] = {
	{sExeggutorGfx33, ARRAY_COUNT(sExeggutorGfx33)}, 
	{NULL, 64}, 
	{sExeggutorGfx33_1, ARRAY_COUNT(sExeggutorGfx33_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx33_2, ARRAY_COUNT(sExeggutorGfx33_2)}, 
	{NULL, 32}, 
	{sExeggutorGfx33_3, ARRAY_COUNT(sExeggutorGfx33_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_34.4bpp.lz");
static const u8 sExeggutorGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_34_1.4bpp.lz");
static const u8 sExeggutorGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_34_2.4bpp.lz");
static const ax_sprite sExeggutorSprites34[] = {
	{sExeggutorGfx34, ARRAY_COUNT(sExeggutorGfx34)}, 
	{NULL, 32}, 
	{sExeggutorGfx34_1, ARRAY_COUNT(sExeggutorGfx34_1)}, 
	{NULL, 64}, 
	{sExeggutorGfx34_2, ARRAY_COUNT(sExeggutorGfx34_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_35.4bpp.lz");
static const u8 sExeggutorGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_35_1.4bpp.lz");
static const u8 sExeggutorGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_35_2.4bpp.lz");
static const ax_sprite sExeggutorSprites35[] = {
	{sExeggutorGfx35, ARRAY_COUNT(sExeggutorGfx35)}, 
	{NULL, 32}, 
	{sExeggutorGfx35_1, ARRAY_COUNT(sExeggutorGfx35_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx35_2, ARRAY_COUNT(sExeggutorGfx35_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_36.4bpp.lz");
static const u8 sExeggutorGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_36_1.4bpp.lz");
static const u8 sExeggutorGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_36_2.4bpp.lz");
static const ax_sprite sExeggutorSprites36[] = {
	{NULL, 32}, 
	{sExeggutorGfx36, ARRAY_COUNT(sExeggutorGfx36)}, 
	{NULL, 32}, 
	{sExeggutorGfx36_1, ARRAY_COUNT(sExeggutorGfx36_1)}, 
	{NULL, 64}, 
	{sExeggutorGfx36_2, ARRAY_COUNT(sExeggutorGfx36_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_37.4bpp.lz");
static const u8 sExeggutorGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_37_1.4bpp.lz");
static const u8 sExeggutorGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_37_2.4bpp.lz");
static const ax_sprite sExeggutorSprites37[] = {
	{sExeggutorGfx37, ARRAY_COUNT(sExeggutorGfx37)}, 
	{NULL, 32}, 
	{sExeggutorGfx37_1, ARRAY_COUNT(sExeggutorGfx37_1)}, 
	{NULL, 64}, 
	{sExeggutorGfx37_2, ARRAY_COUNT(sExeggutorGfx37_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_38.4bpp.lz");
static const u8 sExeggutorGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_38_1.4bpp.lz");
static const u8 sExeggutorGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_38_2.4bpp.lz");
static const ax_sprite sExeggutorSprites38[] = {
	{sExeggutorGfx38, ARRAY_COUNT(sExeggutorGfx38)}, 
	{NULL, 32}, 
	{sExeggutorGfx38_1, ARRAY_COUNT(sExeggutorGfx38_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx38_2, ARRAY_COUNT(sExeggutorGfx38_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_39.4bpp.lz");
static const u8 sExeggutorGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_39_1.4bpp.lz");
static const u8 sExeggutorGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_39_2.4bpp.lz");
static const u8 sExeggutorGfx39_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_39_3.4bpp.lz");
static const ax_sprite sExeggutorSprites39[] = {
	{NULL, 32}, 
	{sExeggutorGfx39, ARRAY_COUNT(sExeggutorGfx39)}, 
	{NULL, 32}, 
	{sExeggutorGfx39_1, ARRAY_COUNT(sExeggutorGfx39_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx39_2, ARRAY_COUNT(sExeggutorGfx39_2)}, 
	{NULL, 32}, 
	{sExeggutorGfx39_3, ARRAY_COUNT(sExeggutorGfx39_3)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_40.4bpp.lz");
static const u8 sExeggutorGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_40_1.4bpp.lz");
static const u8 sExeggutorGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_40_2.4bpp.lz");
static const ax_sprite sExeggutorSprites40[] = {
	{NULL, 32}, 
	{sExeggutorGfx40, ARRAY_COUNT(sExeggutorGfx40)}, 
	{NULL, 32}, 
	{sExeggutorGfx40_1, ARRAY_COUNT(sExeggutorGfx40_1)}, 
	{NULL, 32}, 
	{sExeggutorGfx40_2, ARRAY_COUNT(sExeggutorGfx40_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_41.4bpp.lz");
static const ax_sprite sExeggutorSprites41[] = {
	{sExeggutorGfx41, ARRAY_COUNT(sExeggutorGfx41)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_42.4bpp.lz");
static const ax_sprite sExeggutorSprites42[] = {
	{sExeggutorGfx42, ARRAY_COUNT(sExeggutorGfx42)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_43.4bpp.lz");
static const ax_sprite sExeggutorSprites43[] = {
	{sExeggutorGfx43, ARRAY_COUNT(sExeggutorGfx43)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_44.4bpp.lz");
static const ax_sprite sExeggutorSprites44[] = {
	{sExeggutorGfx44, ARRAY_COUNT(sExeggutorGfx44)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_45.4bpp.lz");
static const ax_sprite sExeggutorSprites45[] = {
	{sExeggutorGfx45, ARRAY_COUNT(sExeggutorGfx45)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_46.4bpp.lz");
static const ax_sprite sExeggutorSprites46[] = {
	{sExeggutorGfx46, ARRAY_COUNT(sExeggutorGfx46)}, 
	{NULL, 0}
};
static const u8 sExeggutorGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exeggutor/sprite_47.4bpp.lz");
static const ax_sprite sExeggutorSprites47[] = {
	{sExeggutorGfx47, ARRAY_COUNT(sExeggutorGfx47)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesExeggutor[] = {
	sExeggutorPose1,
	sExeggutorPose2,
	sExeggutorPose3,
	sExeggutorPose4,
	sExeggutorPose5,
	sExeggutorPose6,
	sExeggutorPose7,
	sExeggutorPose8,
	sExeggutorPose9,
	sExeggutorPose10,
	sExeggutorPose11,
	sExeggutorPose12,
	sExeggutorPose13,
	sExeggutorPose14,
	sExeggutorPose15,
	sExeggutorPose16,
	sExeggutorPose17,
	sExeggutorPose18,
	sExeggutorPose19,
	sExeggutorPose20,
	sExeggutorPose21,
	sExeggutorPose22,
	sExeggutorPose23,
	sExeggutorPose24,
	sExeggutorPose1,
	sExeggutorPose26,
	sExeggutorPose27,
	sExeggutorPose28,
	sExeggutorPose4,
	sExeggutorPose30,
	sExeggutorPose31,
	sExeggutorPose32,
	sExeggutorPose7,
	sExeggutorPose34,
	sExeggutorPose35,
	sExeggutorPose36,
	sExeggutorPose10,
	sExeggutorPose38,
	sExeggutorPose39,
	sExeggutorPose40,
	sExeggutorPose41,
	sExeggutorPose42,
	sExeggutorPose43,
	sExeggutorPose44,
	sExeggutorPose16,
	sExeggutorPose46,
	sExeggutorPose47,
	sExeggutorPose48,
	sExeggutorPose19,
	sExeggutorPose50,
	sExeggutorPose51,
	sExeggutorPose52,
	sExeggutorPose22,
	sExeggutorPose54,
	sExeggutorPose55,
	sExeggutorPose56,
	sExeggutorPose1,
	sExeggutorPose26,
	sExeggutorPose27,
	sExeggutorPose28,
	sExeggutorPose4,
	sExeggutorPose30,
	sExeggutorPose31,
	sExeggutorPose32,
	sExeggutorPose7,
	sExeggutorPose34,
	sExeggutorPose35,
	sExeggutorPose36,
	sExeggutorPose10,
	sExeggutorPose38,
	sExeggutorPose39,
	sExeggutorPose40,
	sExeggutorPose41,
	sExeggutorPose42,
	sExeggutorPose43,
	sExeggutorPose44,
	sExeggutorPose16,
	sExeggutorPose46,
	sExeggutorPose47,
	sExeggutorPose48,
	sExeggutorPose19,
	sExeggutorPose50,
	sExeggutorPose51,
	sExeggutorPose52,
	sExeggutorPose22,
	sExeggutorPose54,
	sExeggutorPose55,
	sExeggutorPose56,
	sExeggutorPose1,
	sExeggutorPose26,
	sExeggutorPose27,
	sExeggutorPose28,
	sExeggutorPose4,
	sExeggutorPose30,
	sExeggutorPose31,
	sExeggutorPose32,
	sExeggutorPose7,
	sExeggutorPose34,
	sExeggutorPose35,
	sExeggutorPose36,
	sExeggutorPose10,
	sExeggutorPose38,
	sExeggutorPose39,
	sExeggutorPose40,
	sExeggutorPose41,
	sExeggutorPose42,
	sExeggutorPose43,
	sExeggutorPose44,
	sExeggutorPose16,
	sExeggutorPose46,
	sExeggutorPose47,
	sExeggutorPose48,
	sExeggutorPose19,
	sExeggutorPose50,
	sExeggutorPose51,
	sExeggutorPose52,
	sExeggutorPose22,
	sExeggutorPose54,
	sExeggutorPose55,
	sExeggutorPose56,
	sExeggutorPose1,
	sExeggutorPose122,
	sExeggutorPose123,
	sExeggutorPose4,
	sExeggutorPose125,
	sExeggutorPose126,
	sExeggutorPose7,
	sExeggutorPose128,
	sExeggutorPose129,
	sExeggutorPose10,
	sExeggutorPose131,
	sExeggutorPose132,
	sExeggutorPose41,
	sExeggutorPose134,
	sExeggutorPose135,
	sExeggutorPose16,
	sExeggutorPose137,
	sExeggutorPose138,
	sExeggutorPose19,
	sExeggutorPose140,
	sExeggutorPose141,
	sExeggutorPose22,
	sExeggutorPose143,
	sExeggutorPose144,
	sExeggutorPose145,
	sExeggutorPose146,
	sExeggutorPose147,
	sExeggutorPose148,
	sExeggutorPose149,
	sExeggutorPose150,
	sExeggutorPose151,
	sExeggutorPose152,
	sExeggutorPose153,
	sExeggutorPose154,
	sExeggutorPose1,
	sExeggutorPose122,
	sExeggutorPose123,
	sExeggutorPose4,
	sExeggutorPose125,
	sExeggutorPose126,
	sExeggutorPose7,
	sExeggutorPose128,
	sExeggutorPose129,
	sExeggutorPose10,
	sExeggutorPose131,
	sExeggutorPose132,
	sExeggutorPose41,
	sExeggutorPose134,
	sExeggutorPose135,
	sExeggutorPose16,
	sExeggutorPose137,
	sExeggutorPose138,
	sExeggutorPose19,
	sExeggutorPose140,
	sExeggutorPose141,
	sExeggutorPose22,
	sExeggutorPose143,
	sExeggutorPose144,
	sExeggutorPose26,
	sExeggutorPose54,
	sExeggutorPose181,
	sExeggutorPose46,
	sExeggutorPose42,
	sExeggutorPose184,
	sExeggutorPose185,
	sExeggutorPose186,
	sExeggutorPose27,
	sExeggutorPose188,
	sExeggutorPose189,
	sExeggutorPose190,
	sExeggutorPose43,
	sExeggutorPose192,
	sExeggutorPose193,
	sExeggutorPose194,
	sExeggutorPose1,
	sExeggutorPose27,
	sExeggutorPose26,
	sExeggutorPose4,
	sExeggutorPose188,
	sExeggutorPose30,
	sExeggutorPose7,
	sExeggutorPose202,
	sExeggutorPose34,
	sExeggutorPose10,
	sExeggutorPose190,
	sExeggutorPose38,
	sExeggutorPose41,
	sExeggutorPose43,
	sExeggutorPose42,
	sExeggutorPose16,
	sExeggutorPose192,
	sExeggutorPose46,
	sExeggutorPose19,
	sExeggutorPose193,
	sExeggutorPose50,
	sExeggutorPose22,
	sExeggutorPose217,
	sExeggutorPose54,
	sExeggutorPose28,
	sExeggutorPose220,
	sExeggutorPose221,
	sExeggutorPose222,
	sExeggutorPose223,
	sExeggutorPose224,
	sExeggutorPose225,
	sExeggutorPose226,
	sExeggutorPose1,
	sExeggutorPose22,
	sExeggutorPose19,
	sExeggutorPose16,
	sExeggutorPose41,
	sExeggutorPose10,
	sExeggutorPose7,
	sExeggutorPose4,
};

static const struct PositionSets sAxPositionsExeggutor[] = {
	[0] = { .set = { {-1, -10}, {-8, -13}, {6, -13}, {-1, -8} } },
	[1] = { .set = { {1, -12}, {-5, -15}, {8, -13}, {-1, -10} } },
	[2] = { .set = { {-3, -12}, {-10, -13}, {3, -15}, {-1, -10} } },
	[3] = { .set = { {3, -10}, {4, -17}, {-5, -11}, {-1, -8} } },
	[4] = { .set = { {-1, -10}, {0, -18}, {-8, -10}, {-3, -10} } },
	[5] = { .set = { {6, -11}, {6, -18}, {-2, -15}, {0, -11} } },
	[6] = { .set = { {5, -12}, {2, -19}, {1, -10}, {-2, -9} } },
	[7] = { .set = { {6, -12}, {3, -19}, {1, -8}, {-2, -10} } },
	[8] = { .set = { {3, -14}, {1, -23}, {-1, -12}, {-2, -11} } },
	[9] = { .set = { {2, -17}, {-5, -21}, {5, -12}, {-2, -9} } },
	[10] = { .set = { {3, -17}, {-2, -21}, {6, -11}, {-1, -10} } },
	[11] = { .set = { {-2, -19}, {-8, -21}, {2, -13}, {-3, -10} } },
	[12] = { .set = { {-1, -21}, {5, -17}, {-8, -14}, {-1, -11} } },
	[13] = { .set = { {-3, -20}, {3, -17}, {-9, -13}, {0, -10} } },
	[14] = { .set = { {2, -19}, {8, -14}, {-5, -14}, {0, -9} } },
	[15] = { .set = { {-4, -17}, {3, -21}, {-7, -12}, {0, -9} } },
	[16] = { .set = { {-5, -17}, {0, -21}, {-8, -11}, {-1, -10} } },
	[17] = { .set = { {0, -19}, {6, -21}, {-4, -13}, {1, -10} } },
	[18] = { .set = { {-7, -12}, {-4, -19}, {-3, -10}, {0, -9} } },
	[19] = { .set = { {-8, -12}, {-5, -19}, {-3, -8}, {0, -10} } },
	[20] = { .set = { {-5, -14}, {-3, -23}, {-1, -12}, {0, -11} } },
	[21] = { .set = { {-5, -10}, {-6, -17}, {3, -11}, {-1, -8} } },
	[22] = { .set = { {-1, -10}, {-2, -18}, {6, -10}, {1, -10} } },
	[23] = { .set = { {-8, -11}, {-8, -18}, {0, -15}, {-2, -11} } },
	[24] = { .set = { {-1, -10}, {-8, -13}, {6, -13}, {-1, -8} } },
	[25] = { .set = { {-1, -5}, {-8, -9}, {6, -9}, {-1, -8} } },
	[26] = { .set = { {-1, -17}, {-9, -13}, {7, -13}, {-1, -10} } },
	[27] = { .set = { {-1, -3}, {-6, -7}, {4, -6}, {-1, -9} } },
	[28] = { .set = { {3, -10}, {4, -17}, {-5, -11}, {-1, -8} } },
	[29] = { .set = { {5, -8}, {4, -15}, {-3, -8}, {-2, -8} } },
	[30] = { .set = { {-2, -16}, {-5, -19}, {-9, -12}, {-3, -10} } },
	[31] = { .set = { {8, -5}, {11, -10}, {3, -4}, {4, -8} } },
	[32] = { .set = { {5, -12}, {2, -19}, {1, -10}, {-2, -9} } },
	[33] = { .set = { {7, -6}, {3, -14}, {0, -10}, {-1, -8} } },
	[34] = { .set = { {-1, -17}, {-8, -15}, {-6, -11}, {-5, -9} } },
	[35] = { .set = { {10, -5}, {8, -11}, {3, -9}, {4, -8} } },
	[36] = { .set = { {2, -17}, {-5, -21}, {5, -12}, {-2, -9} } },
	[37] = { .set = { {4, -14}, {0, -14}, {5, -9}, {-2, -8} } },
	[38] = { .set = { {-7, -18}, {-11, -17}, {-4, -14}, {-6, -9} } },
	[39] = { .set = { {6, -12}, {4, -15}, {8, -9}, {1, -9} } },
	[40] = { .set = { {-1, -20}, {5, -16}, {-8, -13}, {-1, -10} } },
	[41] = { .set = { {-1, -14}, {7, -13}, {-8, -13}, {-1, -9} } },
	[42] = { .set = { {-1, -16}, {5, -11}, {-7, -11}, {-1, -9} } },
	[43] = { .set = { {-1, -13}, {5, -14}, {-9, -14}, {-1, -11} } },
	[44] = { .set = { {-4, -17}, {3, -21}, {-7, -12}, {0, -9} } },
	[45] = { .set = { {-6, -14}, {-2, -14}, {-7, -9}, {0, -8} } },
	[46] = { .set = { {5, -18}, {9, -17}, {2, -14}, {4, -9} } },
	[47] = { .set = { {-8, -12}, {-6, -15}, {-10, -9}, {-3, -9} } },
	[48] = { .set = { {-7, -12}, {-4, -19}, {-3, -10}, {0, -9} } },
	[49] = { .set = { {-8, -6}, {-4, -14}, {-1, -10}, {0, -8} } },
	[50] = { .set = { {-1, -17}, {6, -15}, {4, -11}, {3, -9} } },
	[51] = { .set = { {-12, -5}, {-10, -11}, {-5, -9}, {-6, -8} } },
	[52] = { .set = { {-5, -10}, {-6, -17}, {3, -11}, {-1, -8} } },
	[53] = { .set = { {-7, -8}, {-6, -15}, {1, -8}, {0, -8} } },
	[54] = { .set = { {0, -16}, {3, -19}, {7, -12}, {1, -10} } },
	[55] = { .set = { {-10, -5}, {-13, -10}, {-5, -4}, {-6, -8} } },
	[56] = { .set = { {-1, -10}, {-8, -13}, {6, -13}, {-1, -8} } },
	[57] = { .set = { {-1, -5}, {-8, -9}, {6, -9}, {-1, -8} } },
	[58] = { .set = { {-1, -17}, {-9, -13}, {7, -13}, {-1, -10} } },
	[59] = { .set = { {-1, -3}, {-6, -7}, {4, -6}, {-1, -9} } },
	[60] = { .set = { {3, -10}, {4, -17}, {-5, -11}, {-1, -8} } },
	[61] = { .set = { {5, -8}, {4, -15}, {-3, -8}, {-2, -8} } },
	[62] = { .set = { {-2, -16}, {-5, -19}, {-9, -12}, {-3, -10} } },
	[63] = { .set = { {8, -5}, {11, -10}, {3, -4}, {4, -8} } },
	[64] = { .set = { {5, -12}, {2, -19}, {1, -10}, {-2, -9} } },
	[65] = { .set = { {7, -6}, {3, -14}, {0, -10}, {-1, -8} } },
	[66] = { .set = { {-1, -17}, {-8, -15}, {-6, -11}, {-5, -9} } },
	[67] = { .set = { {10, -5}, {8, -11}, {3, -9}, {4, -8} } },
	[68] = { .set = { {2, -17}, {-5, -21}, {5, -12}, {-2, -9} } },
	[69] = { .set = { {4, -14}, {0, -14}, {5, -9}, {-2, -8} } },
	[70] = { .set = { {-7, -18}, {-11, -17}, {-4, -14}, {-6, -9} } },
	[71] = { .set = { {6, -12}, {4, -15}, {8, -9}, {1, -9} } },
	[72] = { .set = { {-1, -20}, {5, -16}, {-8, -13}, {-1, -10} } },
	[73] = { .set = { {-1, -14}, {7, -13}, {-8, -13}, {-1, -9} } },
	[74] = { .set = { {-1, -16}, {5, -11}, {-7, -11}, {-1, -9} } },
	[75] = { .set = { {-1, -13}, {5, -14}, {-9, -14}, {-1, -11} } },
	[76] = { .set = { {-4, -17}, {3, -21}, {-7, -12}, {0, -9} } },
	[77] = { .set = { {-6, -14}, {-2, -14}, {-7, -9}, {0, -8} } },
	[78] = { .set = { {5, -18}, {9, -17}, {2, -14}, {4, -9} } },
	[79] = { .set = { {-8, -12}, {-6, -15}, {-10, -9}, {-3, -9} } },
	[80] = { .set = { {-7, -12}, {-4, -19}, {-3, -10}, {0, -9} } },
	[81] = { .set = { {-8, -6}, {-4, -14}, {-1, -10}, {0, -8} } },
	[82] = { .set = { {-1, -17}, {6, -15}, {4, -11}, {3, -9} } },
	[83] = { .set = { {-12, -5}, {-10, -11}, {-5, -9}, {-6, -8} } },
	[84] = { .set = { {-5, -10}, {-6, -17}, {3, -11}, {-1, -8} } },
	[85] = { .set = { {-7, -8}, {-6, -15}, {1, -8}, {0, -8} } },
	[86] = { .set = { {0, -16}, {3, -19}, {7, -12}, {1, -10} } },
	[87] = { .set = { {-10, -5}, {-13, -10}, {-5, -4}, {-6, -8} } },
	[88] = { .set = { {-1, -10}, {-8, -13}, {6, -13}, {-1, -8} } },
	[89] = { .set = { {-1, -5}, {-8, -9}, {6, -9}, {-1, -8} } },
	[90] = { .set = { {-1, -17}, {-9, -13}, {7, -13}, {-1, -10} } },
	[91] = { .set = { {-1, -3}, {-6, -7}, {4, -6}, {-1, -9} } },
	[92] = { .set = { {3, -10}, {4, -17}, {-5, -11}, {-1, -8} } },
	[93] = { .set = { {5, -8}, {4, -15}, {-3, -8}, {-2, -8} } },
	[94] = { .set = { {-2, -16}, {-5, -19}, {-9, -12}, {-3, -10} } },
	[95] = { .set = { {8, -5}, {11, -10}, {3, -4}, {4, -8} } },
	[96] = { .set = { {5, -12}, {2, -19}, {1, -10}, {-2, -9} } },
	[97] = { .set = { {7, -6}, {3, -14}, {0, -10}, {-1, -8} } },
	[98] = { .set = { {-1, -17}, {-8, -15}, {-6, -11}, {-5, -9} } },
	[99] = { .set = { {10, -5}, {8, -11}, {3, -9}, {4, -8} } },
	[100] = { .set = { {2, -17}, {-5, -21}, {5, -12}, {-2, -9} } },
	[101] = { .set = { {4, -14}, {0, -14}, {5, -9}, {-2, -8} } },
	[102] = { .set = { {-7, -18}, {-11, -17}, {-4, -14}, {-6, -9} } },
	[103] = { .set = { {6, -12}, {4, -15}, {8, -9}, {1, -9} } },
	[104] = { .set = { {-1, -20}, {5, -16}, {-8, -13}, {-1, -10} } },
	[105] = { .set = { {-1, -14}, {7, -13}, {-8, -13}, {-1, -9} } },
	[106] = { .set = { {-1, -16}, {5, -11}, {-7, -11}, {-1, -9} } },
	[107] = { .set = { {-1, -13}, {5, -14}, {-9, -14}, {-1, -11} } },
	[108] = { .set = { {-4, -17}, {3, -21}, {-7, -12}, {0, -9} } },
	[109] = { .set = { {-6, -14}, {-2, -14}, {-7, -9}, {0, -8} } },
	[110] = { .set = { {5, -18}, {9, -17}, {2, -14}, {4, -9} } },
	[111] = { .set = { {-8, -12}, {-6, -15}, {-10, -9}, {-3, -9} } },
	[112] = { .set = { {-7, -12}, {-4, -19}, {-3, -10}, {0, -9} } },
	[113] = { .set = { {-8, -6}, {-4, -14}, {-1, -10}, {0, -8} } },
	[114] = { .set = { {-1, -17}, {6, -15}, {4, -11}, {3, -9} } },
	[115] = { .set = { {-12, -5}, {-10, -11}, {-5, -9}, {-6, -8} } },
	[116] = { .set = { {-5, -10}, {-6, -17}, {3, -11}, {-1, -8} } },
	[117] = { .set = { {-7, -8}, {-6, -15}, {1, -8}, {0, -8} } },
	[118] = { .set = { {0, -16}, {3, -19}, {7, -12}, {1, -10} } },
	[119] = { .set = { {-10, -5}, {-13, -10}, {-5, -4}, {-6, -8} } },
	[120] = { .set = { {-1, -10}, {-8, -13}, {6, -13}, {-1, -8} } },
	[121] = { .set = { {3, -12}, {-3, -19}, {9, -12}, {1, -10} } },
	[122] = { .set = { {-5, -12}, {-11, -12}, {2, -19}, {-3, -9} } },
	[123] = { .set = { {3, -10}, {4, -17}, {-5, -11}, {-1, -8} } },
	[124] = { .set = { {0, -12}, {1, -18}, {-8, -9}, {-4, -9} } },
	[125] = { .set = { {5, -13}, {8, -14}, {-4, -16}, {0, -12} } },
	[126] = { .set = { {5, -12}, {2, -19}, {1, -10}, {-2, -9} } },
	[127] = { .set = { {6, -15}, {1, -18}, {2, -10}, {-2, -11} } },
	[128] = { .set = { {4, -12}, {5, -16}, {-3, -15}, {0, -12} } },
	[129] = { .set = { {2, -17}, {-5, -21}, {5, -12}, {-2, -9} } },
	[130] = { .set = { {4, -18}, {0, -21}, {7, -11}, {1, -9} } },
	[131] = { .set = { {-2, -21}, {-7, -20}, {2, -16}, {-4, -10} } },
	[132] = { .set = { {-1, -20}, {5, -16}, {-8, -13}, {-1, -10} } },
	[133] = { .set = { {-8, -18}, {-2, -22}, {-10, -11}, {-3, -11} } },
	[134] = { .set = { {6, -19}, {9, -15}, {-5, -19}, {2, -11} } },
	[135] = { .set = { {-4, -17}, {3, -21}, {-7, -12}, {0, -9} } },
	[136] = { .set = { {-6, -18}, {-2, -21}, {-9, -11}, {-3, -9} } },
	[137] = { .set = { {0, -21}, {5, -20}, {-4, -16}, {2, -10} } },
	[138] = { .set = { {-7, -12}, {-4, -19}, {-3, -10}, {0, -9} } },
	[139] = { .set = { {-8, -15}, {-3, -18}, {-4, -10}, {0, -11} } },
	[140] = { .set = { {-6, -12}, {-7, -16}, {1, -15}, {-2, -12} } },
	[141] = { .set = { {-5, -10}, {-6, -17}, {3, -11}, {-1, -8} } },
	[142] = { .set = { {-2, -12}, {-3, -18}, {6, -9}, {2, -9} } },
	[143] = { .set = { {-7, -13}, {-10, -14}, {2, -16}, {-2, -12} } },
	[144] = { .set = { {-1, -7}, {-8, -11}, {6, -11}, {-1, -5} } },
	[145] = { .set = { {-1, -6}, {-7, -10}, {6, -10}, {-1, -4} } },
	[146] = { .set = { {0, 0}, {-6, -2}, {7, -3}, {0, -11} } },
	[147] = { .set = { {5, 0}, {8, -9}, {-2, -4}, {0, -10} } },
	[148] = { .set = { {11, -3}, {8, -10}, {5, -1}, {0, -8} } },
	[149] = { .set = { {7, -11}, {3, -14}, {10, -5}, {0, -8} } },
	[150] = { .set = { {-1, -12}, {7, -6}, {-8, -6}, {0, -6} } },
	[151] = { .set = { {-8, -11}, {-4, -14}, {-11, -5}, {-1, -8} } },
	[152] = { .set = { {-12, -3}, {-9, -10}, {-6, -1}, {-1, -8} } },
	[153] = { .set = { {-6, 0}, {-9, -9}, {1, -4}, {-1, -10} } },
	[154] = { .set = { {-1, -10}, {-8, -13}, {6, -13}, {-1, -8} } },
	[155] = { .set = { {3, -12}, {-3, -19}, {9, -12}, {1, -10} } },
	[156] = { .set = { {-5, -12}, {-11, -12}, {2, -19}, {-3, -9} } },
	[157] = { .set = { {3, -10}, {4, -17}, {-5, -11}, {-1, -8} } },
	[158] = { .set = { {0, -12}, {1, -18}, {-8, -9}, {-4, -9} } },
	[159] = { .set = { {5, -13}, {8, -14}, {-4, -16}, {0, -12} } },
	[160] = { .set = { {5, -12}, {2, -19}, {1, -10}, {-2, -9} } },
	[161] = { .set = { {6, -15}, {1, -18}, {2, -10}, {-2, -11} } },
	[162] = { .set = { {4, -12}, {5, -16}, {-3, -15}, {0, -12} } },
	[163] = { .set = { {2, -17}, {-5, -21}, {5, -12}, {-2, -9} } },
	[164] = { .set = { {4, -18}, {0, -21}, {7, -11}, {1, -9} } },
	[165] = { .set = { {-2, -21}, {-7, -20}, {2, -16}, {-4, -10} } },
	[166] = { .set = { {-1, -20}, {5, -16}, {-8, -13}, {-1, -10} } },
	[167] = { .set = { {-8, -18}, {-2, -22}, {-10, -11}, {-3, -11} } },
	[168] = { .set = { {6, -19}, {9, -15}, {-5, -19}, {2, -11} } },
	[169] = { .set = { {-4, -17}, {3, -21}, {-7, -12}, {0, -9} } },
	[170] = { .set = { {-6, -18}, {-2, -21}, {-9, -11}, {-3, -9} } },
	[171] = { .set = { {0, -21}, {5, -20}, {-4, -16}, {2, -10} } },
	[172] = { .set = { {-7, -12}, {-4, -19}, {-3, -10}, {0, -9} } },
	[173] = { .set = { {-8, -15}, {-3, -18}, {-4, -10}, {0, -11} } },
	[174] = { .set = { {-6, -12}, {-7, -16}, {1, -15}, {-2, -12} } },
	[175] = { .set = { {-5, -10}, {-6, -17}, {3, -11}, {-1, -8} } },
	[176] = { .set = { {-2, -12}, {-3, -18}, {6, -9}, {2, -9} } },
	[177] = { .set = { {-7, -13}, {-10, -14}, {2, -16}, {-2, -12} } },
	[178] = { .set = { {-1, -5}, {-8, -9}, {6, -9}, {-1, -8} } },
	[179] = { .set = { {-7, -8}, {-6, -15}, {1, -8}, {0, -8} } },
	[180] = { .set = { {-9, -6}, {-5, -14}, {-2, -10}, {-1, -8} } },
	[181] = { .set = { {-6, -14}, {-2, -14}, {-7, -9}, {0, -8} } },
	[182] = { .set = { {-1, -14}, {7, -13}, {-8, -13}, {-1, -9} } },
	[183] = { .set = { {5, -14}, {1, -14}, {6, -9}, {-1, -8} } },
	[184] = { .set = { {8, -6}, {4, -14}, {1, -10}, {0, -8} } },
	[185] = { .set = { {6, -8}, {5, -15}, {-2, -8}, {-1, -8} } },
	[186] = { .set = { {-1, -17}, {-9, -13}, {7, -13}, {-1, -10} } },
	[187] = { .set = { {0, -16}, {-3, -19}, {-7, -12}, {-1, -10} } },
	[188] = { .set = { {2, -17}, {-5, -15}, {-3, -11}, {-2, -9} } },
	[189] = { .set = { {-5, -18}, {-9, -17}, {-2, -14}, {-4, -9} } },
	[190] = { .set = { {-1, -16}, {5, -11}, {-7, -11}, {-1, -9} } },
	[191] = { .set = { {3, -18}, {7, -17}, {0, -14}, {2, -9} } },
	[192] = { .set = { {-3, -17}, {4, -15}, {2, -11}, {1, -9} } },
	[193] = { .set = { {-1, -16}, {2, -19}, {6, -12}, {0, -10} } },
	[194] = { .set = { {-1, -10}, {-8, -13}, {6, -13}, {-1, -8} } },
	[195] = { .set = { {-1, -17}, {-9, -13}, {7, -13}, {-1, -10} } },
	[196] = { .set = { {-1, -5}, {-8, -9}, {6, -9}, {-1, -8} } },
	[197] = { .set = { {3, -10}, {4, -17}, {-5, -11}, {-1, -8} } },
	[198] = { .set = { {0, -16}, {-3, -19}, {-7, -12}, {-1, -10} } },
	[199] = { .set = { {5, -8}, {4, -15}, {-3, -8}, {-2, -8} } },
	[200] = { .set = { {5, -12}, {2, -19}, {1, -10}, {-2, -9} } },
	[201] = { .set = { {1, -17}, {-6, -15}, {-4, -11}, {-3, -9} } },
	[202] = { .set = { {7, -6}, {3, -14}, {0, -10}, {-1, -8} } },
	[203] = { .set = { {2, -17}, {-5, -21}, {5, -12}, {-2, -9} } },
	[204] = { .set = { {-5, -18}, {-9, -17}, {-2, -14}, {-4, -9} } },
	[205] = { .set = { {4, -14}, {0, -14}, {5, -9}, {-2, -8} } },
	[206] = { .set = { {-1, -20}, {5, -16}, {-8, -13}, {-1, -10} } },
	[207] = { .set = { {-1, -16}, {5, -11}, {-7, -11}, {-1, -9} } },
	[208] = { .set = { {-1, -14}, {7, -13}, {-8, -13}, {-1, -9} } },
	[209] = { .set = { {-4, -17}, {3, -21}, {-7, -12}, {0, -9} } },
	[210] = { .set = { {3, -18}, {7, -17}, {0, -14}, {2, -9} } },
	[211] = { .set = { {-6, -14}, {-2, -14}, {-7, -9}, {0, -8} } },
	[212] = { .set = { {-7, -12}, {-4, -19}, {-3, -10}, {0, -9} } },
	[213] = { .set = { {-3, -17}, {4, -15}, {2, -11}, {1, -9} } },
	[214] = { .set = { {-8, -6}, {-4, -14}, {-1, -10}, {0, -8} } },
	[215] = { .set = { {-5, -10}, {-6, -17}, {3, -11}, {-1, -8} } },
	[216] = { .set = { {-2, -16}, {1, -19}, {5, -12}, {-1, -10} } },
	[217] = { .set = { {-7, -8}, {-6, -15}, {1, -8}, {0, -8} } },
	[218] = { .set = { {-1, -3}, {-6, -7}, {4, -6}, {-1, -9} } },
	[219] = { .set = { {-6, -6}, {-9, -11}, {-1, -5}, {-2, -9} } },
	[220] = { .set = { {-8, -5}, {-6, -11}, {-1, -9}, {-2, -8} } },
	[221] = { .set = { {-5, -11}, {-3, -14}, {-7, -8}, {0, -8} } },
	[222] = { .set = { {-1, -12}, {5, -13}, {-9, -13}, {-1, -10} } },
	[223] = { .set = { {3, -11}, {1, -14}, {5, -8}, {-2, -8} } },
	[224] = { .set = { {6, -5}, {4, -11}, {-1, -9}, {0, -8} } },
	[225] = { .set = { {5, -6}, {8, -11}, {0, -5}, {1, -9} } },
	[226] = { .set = { {-1, -10}, {-8, -13}, {6, -13}, {-1, -8} } },
	[227] = { .set = { {-5, -10}, {-6, -17}, {3, -11}, {-1, -8} } },
	[228] = { .set = { {-7, -12}, {-4, -19}, {-3, -10}, {0, -9} } },
	[229] = { .set = { {-4, -17}, {3, -21}, {-7, -12}, {0, -9} } },
	[230] = { .set = { {-1, -20}, {5, -16}, {-8, -13}, {-1, -10} } },
	[231] = { .set = { {2, -17}, {-5, -21}, {5, -12}, {-2, -9} } },
	[232] = { .set = { {5, -12}, {2, -19}, {1, -10}, {-2, -9} } },
	[233] = { .set = { {3, -10}, {4, -17}, {-5, -11}, {-1, -8} } },
};

static const ax_anim *const sExeggutorAnimTable1[] = {
	gAxSharedAnim_02603,
	gAxSharedAnim_02679,
	gAxSharedAnim_02688,
	gAxSharedAnim_02697,
	gAxSharedAnim_02615,
	gAxSharedAnim_02637,
	gAxSharedAnim_02650,
	gAxSharedAnim_02659,
};

static const ax_anim *const sExeggutorAnimTable2[] = {
	sExeggutorAnims_2_1,
	sExeggutorAnims_2_2,
	sExeggutorAnims_2_3,
	sExeggutorAnims_2_4,
	sExeggutorAnims_2_5,
	sExeggutorAnims_2_6,
	sExeggutorAnims_2_7,
	sExeggutorAnims_2_8,
};

static const ax_anim *const sExeggutorAnimTable3[] = {
	sExeggutorAnims_3_1,
	sExeggutorAnims_3_2,
	sExeggutorAnims_3_3,
	sExeggutorAnims_3_4,
	sExeggutorAnims_3_5,
	sExeggutorAnims_3_6,
	sExeggutorAnims_3_7,
	sExeggutorAnims_3_8,
};

static const ax_anim *const sExeggutorAnimTable4[] = {
	sExeggutorAnims_4_1,
	sExeggutorAnims_4_2,
	sExeggutorAnims_4_3,
	sExeggutorAnims_4_4,
	sExeggutorAnims_4_5,
	sExeggutorAnims_4_6,
	sExeggutorAnims_4_7,
	sExeggutorAnims_4_8,
};

static const ax_anim *const sExeggutorAnimTable5[] = {
	sExeggutorAnims_5_1,
	sExeggutorAnims_5_2,
	sExeggutorAnims_5_3,
	sExeggutorAnims_5_4,
	sExeggutorAnims_5_5,
	sExeggutorAnims_5_6,
	sExeggutorAnims_5_7,
	sExeggutorAnims_5_8,
};

static const ax_anim *const sExeggutorAnimTable6[] = {
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
	gAxSharedAnim_02367,
};

static const ax_anim *const sExeggutorAnimTable7[] = {
	gAxSharedAnim_00531,
	gAxSharedAnim_00543,
	gAxSharedAnim_00551,
	gAxSharedAnim_00559,
	gAxSharedAnim_00577,
	gAxSharedAnim_00587,
	gAxSharedAnim_00596,
	gAxSharedAnim_00602,
};

static const ax_anim *const sExeggutorAnimTable8[] = {
	sExeggutorAnims_8_1,
	sExeggutorAnims_8_2,
	sExeggutorAnims_8_3,
	sExeggutorAnims_8_4,
	sExeggutorAnims_8_5,
	sExeggutorAnims_8_6,
	sExeggutorAnims_8_7,
	sExeggutorAnims_8_8,
};

static const ax_anim *const sExeggutorAnimTable9[] = {
	gAxSharedAnim_00902,
	sExeggutorAnims_9_2,
	sExeggutorAnims_9_3,
	sExeggutorAnims_9_4,
	gAxSharedAnim_00949,
	sExeggutorAnims_9_6,
	sExeggutorAnims_9_7,
	sExeggutorAnims_9_8,
};

static const ax_anim *const sExeggutorAnimTable10[] = {
	gAxSharedAnim_01016,
	gAxSharedAnim_01027,
	gAxSharedAnim_01046,
	gAxSharedAnim_01061,
	gAxSharedAnim_01078,
	gAxSharedAnim_01092,
	gAxSharedAnim_01110,
	gAxSharedAnim_01124,
};

static const ax_anim *const sExeggutorAnimTable11[] = {
	gAxSharedAnim_01137,
	gAxSharedAnim_01176,
	gAxSharedAnim_01213,
	gAxSharedAnim_01247,
	gAxSharedAnim_01282,
	gAxSharedAnim_01320,
	sExeggutorAnims_11_7,
	sExeggutorAnims_11_8,
};

static const ax_anim *const sExeggutorAnimTable12[] = {
	gAxSharedAnim_01423,
	gAxSharedAnim_01467,
	gAxSharedAnim_01458,
	gAxSharedAnim_01449,
	gAxSharedAnim_01448,
	gAxSharedAnim_01444,
	gAxSharedAnim_01432,
	gAxSharedAnim_01424,
};

static const ax_anim *const sExeggutorAnimTable13[] = {
	gAxSharedAnim_01471,
	gAxSharedAnim_01516,
	gAxSharedAnim_01511,
	gAxSharedAnim_01504,
	gAxSharedAnim_01497,
	gAxSharedAnim_01490,
	gAxSharedAnim_01486,
	gAxSharedAnim_01478,
};

static const ax_anim *const *const sAxAnimationsExeggutor[] = {
	sExeggutorAnimTable1,
	sExeggutorAnimTable2,
	sExeggutorAnimTable3,
	sExeggutorAnimTable4,
	sExeggutorAnimTable5,
	sExeggutorAnimTable6,
	sExeggutorAnimTable7,
	sExeggutorAnimTable8,
	sExeggutorAnimTable9,
	sExeggutorAnimTable10,
	sExeggutorAnimTable11,
	sExeggutorAnimTable12,
	sExeggutorAnimTable13,
};

static const ax_sprite *const sAxSpritesExeggutor[] = {
	sExeggutorSprites1,
	sExeggutorSprites2,
	sExeggutorSprites3,
	sExeggutorSprites4,
	sExeggutorSprites5,
	sExeggutorSprites6,
	sExeggutorSprites7,
	sExeggutorSprites8,
	sExeggutorSprites9,
	sExeggutorSprites10,
	sExeggutorSprites11,
	sExeggutorSprites12,
	sExeggutorSprites13,
	sExeggutorSprites14,
	sExeggutorSprites15,
	sExeggutorSprites16,
	sExeggutorSprites17,
	sExeggutorSprites18,
	sExeggutorSprites19,
	sExeggutorSprites20,
	sExeggutorSprites21,
	sExeggutorSprites22,
	sExeggutorSprites23,
	sExeggutorSprites24,
	sExeggutorSprites25,
	sExeggutorSprites26,
	sExeggutorSprites27,
	sExeggutorSprites28,
	sExeggutorSprites29,
	sExeggutorSprites30,
	sExeggutorSprites31,
	sExeggutorSprites32,
	sExeggutorSprites33,
	sExeggutorSprites34,
	sExeggutorSprites35,
	sExeggutorSprites36,
	sExeggutorSprites37,
	sExeggutorSprites38,
	sExeggutorSprites39,
	sExeggutorSprites40,
	sExeggutorSprites41,
	sExeggutorSprites42,
	sExeggutorSprites43,
	sExeggutorSprites44,
	sExeggutorSprites45,
	sExeggutorSprites46,
	sExeggutorSprites47,
};

static const axmain sAxMainExeggutor = {
	.poses = sAxPosesExeggutor,
	.animations = sAxAnimationsExeggutor,
	.animCount = ARRAY_COUNT(sAxAnimationsExeggutor),
	.spriteData = sAxSpritesExeggutor,
	.positions = sAxPositionsExeggutor,
};
