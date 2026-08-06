/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainTentacool;
const SiroArchive gAxTentacool = {"SIRO", &sAxMainTentacool};

static const ax_pose sTentacoolPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose5[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose6[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose9[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose12[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose18[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose19[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose21[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose22[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose23[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose24[] = {
	AX_POSE(5, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose28[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose32[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose35[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose36[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose39[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose40[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose43[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose44[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose47[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose48[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose51[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose52[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose56[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose60[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose61[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose62[] = {
	AX_POSE(22, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose66[] = {
	AX_POSE(23, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose67[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE(25, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose68[] = {
	AX_POSE(25, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose72[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose73[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose74[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose75[] = {
	AX_POSE(9, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose78[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose79[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose80[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose84[] = {
	AX_POSE(32, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose85[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE(34, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose86[] = {
	AX_POSE(34, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose87[] = {
	AX_POSE(9, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose90[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose91[] = {
	AX_POSE(30, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose92[] = {
	AX_POSE(31, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose96[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose97[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose98[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose102[] = {
	AX_POSE(23, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose103[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE(25, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose104[] = {
	AX_POSE(25, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose114[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose118[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose126[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose130[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose145[] = {
	AX_POSE(35, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose146[] = {
	AX_POSE(36, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose147[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose148[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose149[] = {
	AX_POSE(39, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose150[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose151[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose152[] = {
	AX_POSE(36, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose153[] = {
	AX_POSE(40, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose154[] = {
	AX_POSE(41, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose155[] = {
	AX_POSE(42, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose156[] = {
	AX_POSE(43, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose157[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose158[] = {
	AX_POSE(45, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose159[] = {
	AX_POSE(46, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose160[] = {
	AX_POSE(45, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose161[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose162[] = {
	AX_POSE(43, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose188[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose190[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose191[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose192[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose193[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose194[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose196[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose198[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose199[] = {
	AX_POSE(32, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose200[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTentacoolPose202[] = {
	AX_POSE(23, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 1)),
	AX_POSE_TERMINATOR
};
static const ax_anim sTentacoolAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 26, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 27, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {-1, 21}, .shadow = {-1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, 21}, .shadow = {-1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 4}, .shadow = {0, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {-4, -3}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 31, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {17, 20}, .shadow = {17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {17, 20}, .shadow = {17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {18, 19}, .shadow = {18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 35, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {10, 1}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {16, 2}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {16, 3}, .shadow = {16, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {16, 2}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {16, 3}, .shadow = {16, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {16, 2}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {12, 1}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {4, 0}, .shadow = {4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 38, .offset = {-4, 3}, .shadow = {-4, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 39, .offset = {5, -6}, .shadow = {5, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {11, -14}, .shadow = {11, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {14, -18}, .shadow = {14, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {13, -19}, .shadow = {13, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {14, -18}, .shadow = {14, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {13, -19}, .shadow = {13, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {14, -18}, .shadow = {14, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {10, -13}, .shadow = {10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {3, -5}, .shadow = {3, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 4}, .shadow = {0, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 43, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {-1, -19}, .shadow = {-1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-1, -19}, .shadow = {-1, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 46, .offset = {4, 3}, .shadow = {4, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 47, .offset = {-5, -6}, .shadow = {-5, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-11, -14}, .shadow = {-11, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-14, -18}, .shadow = {-14, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-13, -19}, .shadow = {-13, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-14, -18}, .shadow = {-14, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-13, -19}, .shadow = {-13, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-14, -18}, .shadow = {-14, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-10, -13}, .shadow = {-10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-3, -5}, .shadow = {-3, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 50, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 51, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {-10, 1}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-16, 2}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {-16, 3}, .shadow = {-16, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-16, 2}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-16, 3}, .shadow = {-16, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-16, 2}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-12, 1}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-4, 0}, .shadow = {-4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {4, -3}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 55, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {-17, 20}, .shadow = {-17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-17, 20}, .shadow = {-17, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 4, .unkFlags = 0, .poseId = 59, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 59, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 13}, .shadow = {0, 13} },
	{ .frames = 2, .unkFlags = 1, .poseId = 61, .offset = {-1, 13}, .shadow = {-1, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 13}, .shadow = {0, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {-1, 13}, .shadow = {-1, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 13}, .shadow = {0, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 4}, .shadow = {0, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 4, .unkFlags = 0, .poseId = 65, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {14, 14}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {13, 15}, .shadow = {13, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {14, 14}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {13, 15}, .shadow = {13, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {14, 14}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {4, 4}, .shadow = {4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 71, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 73, .offset = {12, -1}, .shadow = {12, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {12, -1}, .shadow = {12, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {4, 0}, .shadow = {4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 4, .unkFlags = 0, .poseId = 77, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {11, -16}, .shadow = {11, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {10, -16}, .shadow = {10, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {11, -15}, .shadow = {11, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {10, -16}, .shadow = {10, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {11, -15}, .shadow = {11, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {8, -12}, .shadow = {8, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {3, -5}, .shadow = {3, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 4, .unkFlags = 0, .poseId = 83, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 1, .poseId = 85, .offset = {-1, -13}, .shadow = {-1, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-1, -13}, .shadow = {-1, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-11, -16}, .shadow = {-11, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {-10, -16}, .shadow = {-10, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-11, -15}, .shadow = {-11, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-10, -16}, .shadow = {-10, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {-11, -15}, .shadow = {-11, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-8, -12}, .shadow = {-8, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-3, -5}, .shadow = {-3, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 97, .offset = {-12, -1}, .shadow = {-12, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {-12, -1}, .shadow = {-12, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 0}, .shadow = {-4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-14, 14}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {-13, 15}, .shadow = {-13, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-14, 14}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-13, 15}, .shadow = {-13, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-14, 14}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_4_1[] = {
	{ .frames = 8, .unkFlags = 2, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 107, .offset = {0, -7}, .shadow = {0, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 6, .unkFlags = 0, .poseId = 107, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -11}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_4_2[] = {
	{ .frames = 8, .unkFlags = 2, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 111, .offset = {-7, -7}, .shadow = {-7, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-9, -9}, .shadow = {-9, -9} },
	{ .frames = 6, .unkFlags = 0, .poseId = 111, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-10, -11}, .shadow = {-10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_4_3[] = {
	{ .frames = 8, .unkFlags = 2, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 115, .offset = {-7, 0}, .shadow = {-7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {-11, 0}, .shadow = {-11, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_4_4[] = {
	{ .frames = 8, .unkFlags = 2, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 119, .offset = {-7, 7}, .shadow = {-7, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-9, 9}, .shadow = {-9, 9} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_4_5[] = {
	{ .frames = 8, .unkFlags = 2, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 123, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 9}, .shadow = {0, 9} },
	{ .frames = 6, .unkFlags = 0, .poseId = 123, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_4_6[] = {
	{ .frames = 8, .unkFlags = 2, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 127, .offset = {7, 7}, .shadow = {7, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {9, 9}, .shadow = {9, 9} },
	{ .frames = 6, .unkFlags = 0, .poseId = 127, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_4_7[] = {
	{ .frames = 8, .unkFlags = 2, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 131, .offset = {7, 0}, .shadow = {7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {11, 0}, .shadow = {11, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_4_8[] = {
	{ .frames = 8, .unkFlags = 2, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 135, .offset = {7, -7}, .shadow = {7, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {9, -9}, .shadow = {9, -9} },
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {10, -11}, .shadow = {10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_5_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 139, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_5_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 140, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_5_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 139, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_5_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 138, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_5_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 143, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_5_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 142, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_5_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 141, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_5_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 140, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_8_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 164, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 164, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 162, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 163, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 163, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 163, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_8_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 165, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 167, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 167, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 165, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 166, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 166, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 166, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_8_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 168, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 170, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 170, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 168, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 169, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 169, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 169, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_8_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 171, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 173, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 173, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 171, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 172, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 172, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 172, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_8_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 176, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 176, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 175, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 175, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 175, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_8_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 177, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 179, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 179, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 177, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 178, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 178, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 178, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_8_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 180, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 182, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 182, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 180, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 181, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 181, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 181, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_8_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 185, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 185, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 184, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 184, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 184, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {17, 3}, .shadow = {18, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {19, 10}, .shadow = {21, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {17, 19}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 190, .offset = {11, 19}, .shadow = {11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {16, -5}, .shadow = {16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 189, .offset = {16, 6}, .shadow = {16, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {9, 5}, .shadow = {9, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {12, -19}, .shadow = {12, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 188, .offset = {20, -12}, .shadow = {20, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 187, .offset = {7, -18}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {-12, -19}, .shadow = {-12, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {-18, -19}, .shadow = {-18, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 192, .offset = {-20, -12}, .shadow = {-20, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {-16, -5}, .shadow = {-16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 192, .offset = {-18, -1}, .shadow = {-18, -1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 191, .offset = {-16, 6}, .shadow = {-16, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {-8, 5}, .shadow = {-8, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {-19, 10}, .shadow = {-19, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 190, .offset = {-11, 19}, .shadow = {-11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 203, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 203, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 203, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 203, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 202, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 202, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 202, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 202, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 205, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 205, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 205, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 204, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 204, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 204, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 206, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 207, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 207, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 207, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 207, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 206, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 206, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 206, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 206, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 206, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 213, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 213, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 213, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 212, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 212, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 212, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 212, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 215, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 215, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 215, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 215, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 214, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 214, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 214, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 214, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTentacoolAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 216, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 217, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 217, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 216, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 216, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 216, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 216, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 216, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sTentacoolGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_1.4bpp.lz");
static const ax_sprite sTentacoolSprites1[] = {
	{sTentacoolGfx1, ARRAY_COUNT(sTentacoolGfx1)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_2.4bpp.lz");
static const ax_sprite sTentacoolSprites2[] = {
	{sTentacoolGfx2, ARRAY_COUNT(sTentacoolGfx2)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_3.4bpp.lz");
static const ax_sprite sTentacoolSprites3[] = {
	{sTentacoolGfx3, ARRAY_COUNT(sTentacoolGfx3)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_4.4bpp.lz");
static const ax_sprite sTentacoolSprites4[] = {
	{sTentacoolGfx4, ARRAY_COUNT(sTentacoolGfx4)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_5.4bpp.lz");
static const ax_sprite sTentacoolSprites5[] = {
	{sTentacoolGfx5, ARRAY_COUNT(sTentacoolGfx5)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_6.4bpp.lz");
static const ax_sprite sTentacoolSprites6[] = {
	{sTentacoolGfx6, ARRAY_COUNT(sTentacoolGfx6)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_7.4bpp.lz");
static const ax_sprite sTentacoolSprites7[] = {
	{sTentacoolGfx7, ARRAY_COUNT(sTentacoolGfx7)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_8.4bpp.lz");
static const ax_sprite sTentacoolSprites8[] = {
	{sTentacoolGfx8, ARRAY_COUNT(sTentacoolGfx8)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_9.4bpp.lz");
static const ax_sprite sTentacoolSprites9[] = {
	{sTentacoolGfx9, ARRAY_COUNT(sTentacoolGfx9)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_10.4bpp.lz");
static const ax_sprite sTentacoolSprites10[] = {
	{sTentacoolGfx10, ARRAY_COUNT(sTentacoolGfx10)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_11.4bpp.lz");
static const ax_sprite sTentacoolSprites11[] = {
	{sTentacoolGfx11, ARRAY_COUNT(sTentacoolGfx11)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_12.4bpp.lz");
static const ax_sprite sTentacoolSprites12[] = {
	{sTentacoolGfx12, ARRAY_COUNT(sTentacoolGfx12)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_13.4bpp.lz");
static const ax_sprite sTentacoolSprites13[] = {
	{sTentacoolGfx13, ARRAY_COUNT(sTentacoolGfx13)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_14.4bpp.lz");
static const ax_sprite sTentacoolSprites14[] = {
	{sTentacoolGfx14, ARRAY_COUNT(sTentacoolGfx14)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_15.4bpp.lz");
static const ax_sprite sTentacoolSprites15[] = {
	{sTentacoolGfx15, ARRAY_COUNT(sTentacoolGfx15)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_16.4bpp.lz");
static const u8 sTentacoolGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_16_1.4bpp.lz");
static const u8 sTentacoolGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_16_2.4bpp.lz");
static const ax_sprite sTentacoolSprites16[] = {
	{sTentacoolGfx16, ARRAY_COUNT(sTentacoolGfx16)}, 
	{NULL, 32}, 
	{sTentacoolGfx16_1, ARRAY_COUNT(sTentacoolGfx16_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx16_2, ARRAY_COUNT(sTentacoolGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_17.4bpp.lz");
static const u8 sTentacoolGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_17_1.4bpp.lz");
static const u8 sTentacoolGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_17_2.4bpp.lz");
static const ax_sprite sTentacoolSprites17[] = {
	{NULL, 32}, 
	{sTentacoolGfx17, ARRAY_COUNT(sTentacoolGfx17)}, 
	{NULL, 32}, 
	{sTentacoolGfx17_1, ARRAY_COUNT(sTentacoolGfx17_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx17_2, ARRAY_COUNT(sTentacoolGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_18.4bpp.lz");
static const ax_sprite sTentacoolSprites18[] = {
	{NULL, 128}, 
	{sTentacoolGfx18, ARRAY_COUNT(sTentacoolGfx18)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_19.4bpp.lz");
static const u8 sTentacoolGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_19_1.4bpp.lz");
static const u8 sTentacoolGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_19_2.4bpp.lz");
static const u8 sTentacoolGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_19_3.4bpp.lz");
static const ax_sprite sTentacoolSprites19[] = {
	{sTentacoolGfx19, ARRAY_COUNT(sTentacoolGfx19)}, 
	{NULL, 64}, 
	{sTentacoolGfx19_1, ARRAY_COUNT(sTentacoolGfx19_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx19_2, ARRAY_COUNT(sTentacoolGfx19_2)}, 
	{NULL, 32}, 
	{sTentacoolGfx19_3, ARRAY_COUNT(sTentacoolGfx19_3)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_20.4bpp.lz");
static const u8 sTentacoolGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_20_1.4bpp.lz");
static const u8 sTentacoolGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_20_2.4bpp.lz");
static const u8 sTentacoolGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_20_3.4bpp.lz");
static const u8 sTentacoolGfx20_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_20_4.4bpp.lz");
static const ax_sprite sTentacoolSprites20[] = {
	{sTentacoolGfx20, ARRAY_COUNT(sTentacoolGfx20)}, 
	{NULL, 32}, 
	{sTentacoolGfx20_1, ARRAY_COUNT(sTentacoolGfx20_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx20_2, ARRAY_COUNT(sTentacoolGfx20_2)}, 
	{NULL, 32}, 
	{sTentacoolGfx20_3, ARRAY_COUNT(sTentacoolGfx20_3)}, 
	{NULL, 32}, 
	{sTentacoolGfx20_4, ARRAY_COUNT(sTentacoolGfx20_4)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_21.4bpp.lz");
static const u8 sTentacoolGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_21_1.4bpp.lz");
static const ax_sprite sTentacoolSprites21[] = {
	{sTentacoolGfx21, ARRAY_COUNT(sTentacoolGfx21)}, 
	{NULL, 32}, 
	{sTentacoolGfx21_1, ARRAY_COUNT(sTentacoolGfx21_1)}, 
	{NULL, 288}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_22.4bpp.lz");
static const u8 sTentacoolGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_22_1.4bpp.lz");
static const u8 sTentacoolGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_22_2.4bpp.lz");
static const u8 sTentacoolGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_22_3.4bpp.lz");
static const ax_sprite sTentacoolSprites22[] = {
	{sTentacoolGfx22, ARRAY_COUNT(sTentacoolGfx22)}, 
	{NULL, 32}, 
	{sTentacoolGfx22_1, ARRAY_COUNT(sTentacoolGfx22_1)}, 
	{NULL, 64}, 
	{sTentacoolGfx22_2, ARRAY_COUNT(sTentacoolGfx22_2)}, 
	{NULL, 64}, 
	{sTentacoolGfx22_3, ARRAY_COUNT(sTentacoolGfx22_3)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_23.4bpp.lz");
static const u8 sTentacoolGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_23_1.4bpp.lz");
static const u8 sTentacoolGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_23_2.4bpp.lz");
static const u8 sTentacoolGfx23_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_23_3.4bpp.lz");
static const ax_sprite sTentacoolSprites23[] = {
	{sTentacoolGfx23, ARRAY_COUNT(sTentacoolGfx23)}, 
	{NULL, 32}, 
	{sTentacoolGfx23_1, ARRAY_COUNT(sTentacoolGfx23_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx23_2, ARRAY_COUNT(sTentacoolGfx23_2)}, 
	{NULL, 32}, 
	{sTentacoolGfx23_3, ARRAY_COUNT(sTentacoolGfx23_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_24.4bpp.lz");
static const u8 sTentacoolGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_24_1.4bpp.lz");
static const u8 sTentacoolGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_24_2.4bpp.lz");
static const ax_sprite sTentacoolSprites24[] = {
	{sTentacoolGfx24, ARRAY_COUNT(sTentacoolGfx24)}, 
	{NULL, 32}, 
	{sTentacoolGfx24_1, ARRAY_COUNT(sTentacoolGfx24_1)}, 
	{NULL, 64}, 
	{sTentacoolGfx24_2, ARRAY_COUNT(sTentacoolGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_25.4bpp.lz");
static const u8 sTentacoolGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_25_1.4bpp.lz");
static const u8 sTentacoolGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_25_2.4bpp.lz");
static const u8 sTentacoolGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_25_3.4bpp.lz");
static const ax_sprite sTentacoolSprites25[] = {
	{sTentacoolGfx25, ARRAY_COUNT(sTentacoolGfx25)}, 
	{NULL, 32}, 
	{sTentacoolGfx25_1, ARRAY_COUNT(sTentacoolGfx25_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx25_2, ARRAY_COUNT(sTentacoolGfx25_2)}, 
	{NULL, 32}, 
	{sTentacoolGfx25_3, ARRAY_COUNT(sTentacoolGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_26.4bpp.lz");
static const u8 sTentacoolGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_26_1.4bpp.lz");
static const u8 sTentacoolGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_26_2.4bpp.lz");
static const u8 sTentacoolGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_26_3.4bpp.lz");
static const ax_sprite sTentacoolSprites26[] = {
	{sTentacoolGfx26, ARRAY_COUNT(sTentacoolGfx26)}, 
	{NULL, 32}, 
	{sTentacoolGfx26_1, ARRAY_COUNT(sTentacoolGfx26_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx26_2, ARRAY_COUNT(sTentacoolGfx26_2)}, 
	{NULL, 32}, 
	{sTentacoolGfx26_3, ARRAY_COUNT(sTentacoolGfx26_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_27.4bpp.lz");
static const u8 sTentacoolGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_27_1.4bpp.lz");
static const u8 sTentacoolGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_27_2.4bpp.lz");
static const ax_sprite sTentacoolSprites27[] = {
	{NULL, 32}, 
	{sTentacoolGfx27, ARRAY_COUNT(sTentacoolGfx27)}, 
	{NULL, 32}, 
	{sTentacoolGfx27_1, ARRAY_COUNT(sTentacoolGfx27_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx27_2, ARRAY_COUNT(sTentacoolGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_28.4bpp.lz");
static const u8 sTentacoolGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_28_1.4bpp.lz");
static const u8 sTentacoolGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_28_2.4bpp.lz");
static const ax_sprite sTentacoolSprites28[] = {
	{NULL, 64}, 
	{sTentacoolGfx28, ARRAY_COUNT(sTentacoolGfx28)}, 
	{NULL, 32}, 
	{sTentacoolGfx28_1, ARRAY_COUNT(sTentacoolGfx28_1)}, 
	{NULL, 64}, 
	{sTentacoolGfx28_2, ARRAY_COUNT(sTentacoolGfx28_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_29.4bpp.lz");
static const u8 sTentacoolGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_29_1.4bpp.lz");
static const u8 sTentacoolGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_29_2.4bpp.lz");
static const u8 sTentacoolGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_29_3.4bpp.lz");
static const ax_sprite sTentacoolSprites29[] = {
	{sTentacoolGfx29, ARRAY_COUNT(sTentacoolGfx29)}, 
	{NULL, 64}, 
	{sTentacoolGfx29_1, ARRAY_COUNT(sTentacoolGfx29_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx29_2, ARRAY_COUNT(sTentacoolGfx29_2)}, 
	{NULL, 32}, 
	{sTentacoolGfx29_3, ARRAY_COUNT(sTentacoolGfx29_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_30.4bpp.lz");
static const u8 sTentacoolGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_30_1.4bpp.lz");
static const ax_sprite sTentacoolSprites30[] = {
	{NULL, 32}, 
	{sTentacoolGfx30, ARRAY_COUNT(sTentacoolGfx30)}, 
	{NULL, 32}, 
	{sTentacoolGfx30_1, ARRAY_COUNT(sTentacoolGfx30_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_31.4bpp.lz");
static const u8 sTentacoolGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_31_1.4bpp.lz");
static const u8 sTentacoolGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_31_2.4bpp.lz");
static const ax_sprite sTentacoolSprites31[] = {
	{sTentacoolGfx31, ARRAY_COUNT(sTentacoolGfx31)}, 
	{NULL, 32}, 
	{sTentacoolGfx31_1, ARRAY_COUNT(sTentacoolGfx31_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx31_2, ARRAY_COUNT(sTentacoolGfx31_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_32.4bpp.lz");
static const u8 sTentacoolGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_32_1.4bpp.lz");
static const u8 sTentacoolGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_32_2.4bpp.lz");
static const u8 sTentacoolGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_32_3.4bpp.lz");
static const ax_sprite sTentacoolSprites32[] = {
	{sTentacoolGfx32, ARRAY_COUNT(sTentacoolGfx32)}, 
	{NULL, 64}, 
	{sTentacoolGfx32_1, ARRAY_COUNT(sTentacoolGfx32_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx32_2, ARRAY_COUNT(sTentacoolGfx32_2)}, 
	{NULL, 32}, 
	{sTentacoolGfx32_3, ARRAY_COUNT(sTentacoolGfx32_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_33.4bpp.lz");
static const u8 sTentacoolGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_33_1.4bpp.lz");
static const ax_sprite sTentacoolSprites33[] = {
	{sTentacoolGfx33, ARRAY_COUNT(sTentacoolGfx33)}, 
	{NULL, 32}, 
	{sTentacoolGfx33_1, ARRAY_COUNT(sTentacoolGfx33_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_34.4bpp.lz");
static const u8 sTentacoolGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_34_1.4bpp.lz");
static const ax_sprite sTentacoolSprites34[] = {
	{sTentacoolGfx34, ARRAY_COUNT(sTentacoolGfx34)}, 
	{NULL, 32}, 
	{sTentacoolGfx34_1, ARRAY_COUNT(sTentacoolGfx34_1)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_35.4bpp.lz");
static const u8 sTentacoolGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_35_1.4bpp.lz");
static const u8 sTentacoolGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_35_2.4bpp.lz");
static const ax_sprite sTentacoolSprites35[] = {
	{sTentacoolGfx35, ARRAY_COUNT(sTentacoolGfx35)}, 
	{NULL, 32}, 
	{sTentacoolGfx35_1, ARRAY_COUNT(sTentacoolGfx35_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx35_2, ARRAY_COUNT(sTentacoolGfx35_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_36.4bpp.lz");
static const u8 sTentacoolGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_36_1.4bpp.lz");
static const u8 sTentacoolGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_36_2.4bpp.lz");
static const ax_sprite sTentacoolSprites36[] = {
	{sTentacoolGfx36, ARRAY_COUNT(sTentacoolGfx36)}, 
	{NULL, 32}, 
	{sTentacoolGfx36_1, ARRAY_COUNT(sTentacoolGfx36_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx36_2, ARRAY_COUNT(sTentacoolGfx36_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_37.4bpp.lz");
static const u8 sTentacoolGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_37_1.4bpp.lz");
static const u8 sTentacoolGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_37_2.4bpp.lz");
static const ax_sprite sTentacoolSprites37[] = {
	{sTentacoolGfx37, ARRAY_COUNT(sTentacoolGfx37)}, 
	{NULL, 32}, 
	{sTentacoolGfx37_1, ARRAY_COUNT(sTentacoolGfx37_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx37_2, ARRAY_COUNT(sTentacoolGfx37_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_38.4bpp.lz");
static const u8 sTentacoolGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_38_1.4bpp.lz");
static const u8 sTentacoolGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_38_2.4bpp.lz");
static const ax_sprite sTentacoolSprites38[] = {
	{NULL, 32}, 
	{sTentacoolGfx38, ARRAY_COUNT(sTentacoolGfx38)}, 
	{NULL, 32}, 
	{sTentacoolGfx38_1, ARRAY_COUNT(sTentacoolGfx38_1)}, 
	{NULL, 32}, 
	{sTentacoolGfx38_2, ARRAY_COUNT(sTentacoolGfx38_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_39.4bpp.lz");
static const u8 sTentacoolGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_39_1.4bpp.lz");
static const u8 sTentacoolGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_39_2.4bpp.lz");
static const ax_sprite sTentacoolSprites39[] = {
	{sTentacoolGfx39, ARRAY_COUNT(sTentacoolGfx39)}, 
	{NULL, 64}, 
	{sTentacoolGfx39_1, ARRAY_COUNT(sTentacoolGfx39_1)}, 
	{NULL, 64}, 
	{sTentacoolGfx39_2, ARRAY_COUNT(sTentacoolGfx39_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_40.4bpp.lz");
static const u8 sTentacoolGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_40_1.4bpp.lz");
static const u8 sTentacoolGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_40_2.4bpp.lz");
static const u8 sTentacoolGfx40_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_40_3.4bpp.lz");
static const ax_sprite sTentacoolSprites40[] = {
	{sTentacoolGfx40, ARRAY_COUNT(sTentacoolGfx40)}, 
	{NULL, 32}, 
	{sTentacoolGfx40_1, ARRAY_COUNT(sTentacoolGfx40_1)}, 
	{NULL, 64}, 
	{sTentacoolGfx40_2, ARRAY_COUNT(sTentacoolGfx40_2)}, 
	{NULL, 96}, 
	{sTentacoolGfx40_3, ARRAY_COUNT(sTentacoolGfx40_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_41.4bpp.lz");
static const ax_sprite sTentacoolSprites41[] = {
	{sTentacoolGfx41, ARRAY_COUNT(sTentacoolGfx41)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_42.4bpp.lz");
static const ax_sprite sTentacoolSprites42[] = {
	{sTentacoolGfx42, ARRAY_COUNT(sTentacoolGfx42)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_43.4bpp.lz");
static const ax_sprite sTentacoolSprites43[] = {
	{sTentacoolGfx43, ARRAY_COUNT(sTentacoolGfx43)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_44.4bpp.lz");
static const ax_sprite sTentacoolSprites44[] = {
	{sTentacoolGfx44, ARRAY_COUNT(sTentacoolGfx44)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_45.4bpp.lz");
static const ax_sprite sTentacoolSprites45[] = {
	{sTentacoolGfx45, ARRAY_COUNT(sTentacoolGfx45)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_46.4bpp.lz");
static const ax_sprite sTentacoolSprites46[] = {
	{sTentacoolGfx46, ARRAY_COUNT(sTentacoolGfx46)}, 
	{NULL, 0}
};
static const u8 sTentacoolGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tentacool/sprite_47.4bpp.lz");
static const ax_sprite sTentacoolSprites47[] = {
	{sTentacoolGfx47, ARRAY_COUNT(sTentacoolGfx47)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesTentacool[] = {
	sTentacoolPose1,
	sTentacoolPose2,
	sTentacoolPose3,
	sTentacoolPose4,
	sTentacoolPose5,
	sTentacoolPose6,
	sTentacoolPose7,
	sTentacoolPose8,
	sTentacoolPose9,
	sTentacoolPose10,
	sTentacoolPose11,
	sTentacoolPose12,
	sTentacoolPose13,
	sTentacoolPose14,
	sTentacoolPose15,
	sTentacoolPose16,
	sTentacoolPose17,
	sTentacoolPose18,
	sTentacoolPose19,
	sTentacoolPose20,
	sTentacoolPose21,
	sTentacoolPose22,
	sTentacoolPose23,
	sTentacoolPose24,
	sTentacoolPose1,
	sTentacoolPose2,
	sTentacoolPose3,
	sTentacoolPose28,
	sTentacoolPose4,
	sTentacoolPose5,
	sTentacoolPose6,
	sTentacoolPose32,
	sTentacoolPose7,
	sTentacoolPose8,
	sTentacoolPose35,
	sTentacoolPose36,
	sTentacoolPose10,
	sTentacoolPose11,
	sTentacoolPose39,
	sTentacoolPose40,
	sTentacoolPose13,
	sTentacoolPose14,
	sTentacoolPose43,
	sTentacoolPose44,
	sTentacoolPose16,
	sTentacoolPose17,
	sTentacoolPose47,
	sTentacoolPose48,
	sTentacoolPose19,
	sTentacoolPose20,
	sTentacoolPose51,
	sTentacoolPose52,
	sTentacoolPose22,
	sTentacoolPose23,
	sTentacoolPose24,
	sTentacoolPose56,
	sTentacoolPose1,
	sTentacoolPose2,
	sTentacoolPose3,
	sTentacoolPose60,
	sTentacoolPose61,
	sTentacoolPose62,
	sTentacoolPose4,
	sTentacoolPose5,
	sTentacoolPose6,
	sTentacoolPose66,
	sTentacoolPose67,
	sTentacoolPose68,
	sTentacoolPose7,
	sTentacoolPose8,
	sTentacoolPose9,
	sTentacoolPose72,
	sTentacoolPose73,
	sTentacoolPose74,
	sTentacoolPose75,
	sTentacoolPose11,
	sTentacoolPose12,
	sTentacoolPose78,
	sTentacoolPose79,
	sTentacoolPose80,
	sTentacoolPose13,
	sTentacoolPose14,
	sTentacoolPose15,
	sTentacoolPose84,
	sTentacoolPose85,
	sTentacoolPose86,
	sTentacoolPose87,
	sTentacoolPose17,
	sTentacoolPose18,
	sTentacoolPose90,
	sTentacoolPose91,
	sTentacoolPose92,
	sTentacoolPose19,
	sTentacoolPose20,
	sTentacoolPose21,
	sTentacoolPose96,
	sTentacoolPose97,
	sTentacoolPose98,
	sTentacoolPose22,
	sTentacoolPose23,
	sTentacoolPose24,
	sTentacoolPose102,
	sTentacoolPose103,
	sTentacoolPose104,
	sTentacoolPose1,
	sTentacoolPose2,
	sTentacoolPose3,
	sTentacoolPose60,
	sTentacoolPose4,
	sTentacoolPose5,
	sTentacoolPose6,
	sTentacoolPose66,
	sTentacoolPose7,
	sTentacoolPose114,
	sTentacoolPose9,
	sTentacoolPose72,
	sTentacoolPose75,
	sTentacoolPose118,
	sTentacoolPose12,
	sTentacoolPose78,
	sTentacoolPose13,
	sTentacoolPose14,
	sTentacoolPose15,
	sTentacoolPose84,
	sTentacoolPose87,
	sTentacoolPose126,
	sTentacoolPose18,
	sTentacoolPose90,
	sTentacoolPose19,
	sTentacoolPose130,
	sTentacoolPose21,
	sTentacoolPose96,
	sTentacoolPose22,
	sTentacoolPose23,
	sTentacoolPose24,
	sTentacoolPose102,
	sTentacoolPose1,
	sTentacoolPose22,
	sTentacoolPose19,
	sTentacoolPose16,
	sTentacoolPose13,
	sTentacoolPose10,
	sTentacoolPose7,
	sTentacoolPose4,
	sTentacoolPose145,
	sTentacoolPose146,
	sTentacoolPose147,
	sTentacoolPose148,
	sTentacoolPose149,
	sTentacoolPose150,
	sTentacoolPose151,
	sTentacoolPose152,
	sTentacoolPose153,
	sTentacoolPose154,
	sTentacoolPose155,
	sTentacoolPose156,
	sTentacoolPose157,
	sTentacoolPose158,
	sTentacoolPose159,
	sTentacoolPose160,
	sTentacoolPose161,
	sTentacoolPose162,
	sTentacoolPose1,
	sTentacoolPose2,
	sTentacoolPose3,
	sTentacoolPose4,
	sTentacoolPose5,
	sTentacoolPose6,
	sTentacoolPose7,
	sTentacoolPose8,
	sTentacoolPose9,
	sTentacoolPose10,
	sTentacoolPose11,
	sTentacoolPose12,
	sTentacoolPose13,
	sTentacoolPose14,
	sTentacoolPose15,
	sTentacoolPose16,
	sTentacoolPose17,
	sTentacoolPose18,
	sTentacoolPose19,
	sTentacoolPose20,
	sTentacoolPose21,
	sTentacoolPose22,
	sTentacoolPose23,
	sTentacoolPose24,
	sTentacoolPose28,
	sTentacoolPose188,
	sTentacoolPose52,
	sTentacoolPose190,
	sTentacoolPose191,
	sTentacoolPose192,
	sTentacoolPose193,
	sTentacoolPose194,
	sTentacoolPose60,
	sTentacoolPose196,
	sTentacoolPose72,
	sTentacoolPose198,
	sTentacoolPose199,
	sTentacoolPose200,
	sTentacoolPose96,
	sTentacoolPose202,
	sTentacoolPose1,
	sTentacoolPose60,
	sTentacoolPose4,
	sTentacoolPose66,
	sTentacoolPose7,
	sTentacoolPose72,
	sTentacoolPose75,
	sTentacoolPose78,
	sTentacoolPose13,
	sTentacoolPose199,
	sTentacoolPose87,
	sTentacoolPose90,
	sTentacoolPose19,
	sTentacoolPose96,
	sTentacoolPose22,
	sTentacoolPose102,
	sTentacoolPose62,
	sTentacoolPose104,
	sTentacoolPose98,
	sTentacoolPose92,
	sTentacoolPose86,
	sTentacoolPose80,
	sTentacoolPose74,
	sTentacoolPose68,
	sTentacoolPose1,
	sTentacoolPose22,
	sTentacoolPose19,
	sTentacoolPose16,
	sTentacoolPose13,
	sTentacoolPose10,
	sTentacoolPose7,
	sTentacoolPose4,
};

static const struct PositionSets sAxPositionsTentacool[] = {
	[0] = { .set = { {0, -5}, {-5, 0}, {5, 0}, {0, -11} } },
	[1] = { .set = { {0, -4}, {-7, 0}, {7, 0}, {0, -10} } },
	[2] = { .set = { {0, -6}, {-3, -1}, {3, -1}, {0, -12} } },
	[3] = { .set = { {4, -6}, {2, -3}, {-5, 1}, {1, -12} } },
	[4] = { .set = { {4, -5}, {2, -5}, {-6, -1}, {1, -11} } },
	[5] = { .set = { {4, -7}, {1, -6}, {-4, -2}, {1, -13} } },
	[6] = { .set = { {7, -9}, {0, -3}, {-3, 2}, {0, -11} } },
	[7] = { .set = { {7, -8}, {1, -4}, {-2, 1}, {0, -10} } },
	[8] = { .set = { {7, -10}, {0, -4}, {-3, -1}, {0, -12} } },
	[9] = { .set = { {4, -10}, {-4, -1}, {1, 2}, {0, -12} } },
	[10] = { .set = { {3, -9}, {-7, -5}, {2, 0}, {-1, -11} } },
	[11] = { .set = { {3, -11}, {-3, -3}, {0, -1}, {-1, -13} } },
	[12] = { .set = { {0, -9}, {5, -1}, {-5, -1}, {0, -12} } },
	[13] = { .set = { {0, -8}, {6, -2}, {-6, -2}, {0, -11} } },
	[14] = { .set = { {0, -10}, {3, -2}, {-3, -2}, {0, -13} } },
	[15] = { .set = { {-4, -10}, {4, -1}, {-1, 2}, {0, -12} } },
	[16] = { .set = { {-3, -9}, {7, -5}, {-2, 0}, {1, -11} } },
	[17] = { .set = { {-3, -11}, {3, -3}, {0, -1}, {1, -13} } },
	[18] = { .set = { {-7, -9}, {0, -3}, {3, 2}, {0, -11} } },
	[19] = { .set = { {-7, -8}, {-1, -4}, {2, 1}, {0, -10} } },
	[20] = { .set = { {-7, -10}, {0, -4}, {3, -1}, {0, -12} } },
	[21] = { .set = { {-4, -6}, {-2, -3}, {5, 1}, {-1, -12} } },
	[22] = { .set = { {-4, -5}, {-2, -5}, {6, -1}, {-1, -11} } },
	[23] = { .set = { {-4, -7}, {-1, -6}, {4, -2}, {-1, -13} } },
	[24] = { .set = { {0, -5}, {-5, 0}, {5, 0}, {0, -11} } },
	[25] = { .set = { {0, -4}, {-7, 0}, {7, 0}, {0, -10} } },
	[26] = { .set = { {0, -6}, {-3, -1}, {3, -1}, {0, -12} } },
	[27] = { .set = { {0, -5}, {-6, -20}, {6, -20}, {0, -8} } },
	[28] = { .set = { {4, -6}, {2, -3}, {-5, 1}, {1, -12} } },
	[29] = { .set = { {4, -5}, {2, -5}, {-6, -1}, {1, -11} } },
	[30] = { .set = { {4, -7}, {1, -6}, {-4, -2}, {1, -13} } },
	[31] = { .set = { {0, -4}, {-2, -17}, {-10, -14}, {2, -7} } },
	[32] = { .set = { {7, -9}, {0, -3}, {-3, 2}, {0, -11} } },
	[33] = { .set = { {7, -8}, {1, -4}, {-2, 1}, {0, -10} } },
	[34] = { .set = { {7, -8}, {0, -2}, {-3, 1}, {0, -10} } },
	[35] = { .set = { {-1, -5}, {-16, -13}, {-17, -8}, {0, -11} } },
	[36] = { .set = { {4, -10}, {-4, -1}, {1, 2}, {0, -12} } },
	[37] = { .set = { {3, -9}, {-7, -5}, {2, 0}, {-1, -11} } },
	[38] = { .set = { {3, -9}, {-3, -1}, {0, 1}, {-1, -11} } },
	[39] = { .set = { {3, -7}, {-8, -5}, {1, 1}, {6, -13} } },
	[40] = { .set = { {0, -9}, {5, -1}, {-5, -1}, {0, -12} } },
	[41] = { .set = { {0, -8}, {6, -2}, {-6, -2}, {0, -11} } },
	[42] = { .set = { {0, -8}, {3, 0}, {-3, 0}, {0, -11} } },
	[43] = { .set = { {0, -5}, {8, 3}, {-8, 3}, {0, -10} } },
	[44] = { .set = { {-4, -10}, {4, -1}, {-1, 2}, {0, -12} } },
	[45] = { .set = { {-3, -9}, {7, -5}, {-2, 0}, {1, -11} } },
	[46] = { .set = { {-3, -9}, {3, -1}, {0, 1}, {1, -11} } },
	[47] = { .set = { {-1, -7}, {10, -5}, {1, 1}, {-4, -13} } },
	[48] = { .set = { {-7, -9}, {0, -3}, {3, 2}, {0, -11} } },
	[49] = { .set = { {-7, -8}, {-1, -4}, {2, 1}, {0, -10} } },
	[50] = { .set = { {-7, -8}, {0, -2}, {3, 1}, {0, -10} } },
	[51] = { .set = { {-2, -5}, {13, -13}, {14, -8}, {-3, -11} } },
	[52] = { .set = { {-4, -6}, {-2, -3}, {5, 1}, {-1, -12} } },
	[53] = { .set = { {-4, -5}, {-2, -5}, {6, -1}, {-1, -11} } },
	[54] = { .set = { {-4, -7}, {-1, -6}, {4, -2}, {-1, -13} } },
	[55] = { .set = { {0, -4}, {2, -17}, {10, -14}, {-2, -7} } },
	[56] = { .set = { {0, -5}, {-5, 0}, {5, 0}, {0, -11} } },
	[57] = { .set = { {0, -4}, {-7, 0}, {7, 0}, {0, -10} } },
	[58] = { .set = { {0, -6}, {-3, -1}, {3, -1}, {0, -12} } },
	[59] = { .set = { {0, -7}, {-9, -15}, {9, -15}, {0, -14} } },
	[60] = { .set = { {0, -3}, {-4, 4}, {4, 4}, {0, -10} } },
	[61] = { .set = { {0, -3}, {-4, 4}, {4, 4}, {0, -10} } },
	[62] = { .set = { {4, -6}, {2, -3}, {-5, 1}, {1, -12} } },
	[63] = { .set = { {4, -5}, {2, -5}, {-6, -1}, {1, -11} } },
	[64] = { .set = { {4, -7}, {1, -6}, {-4, -2}, {1, -13} } },
	[65] = { .set = { {4, -8}, {7, -17}, {-9, -12}, {0, -14} } },
	[66] = { .set = { {3, -4}, {8, 2}, {2, 4}, {0, -9} } },
	[67] = { .set = { {3, -4}, {8, 2}, {2, 4}, {0, -9} } },
	[68] = { .set = { {7, -9}, {0, -3}, {-3, 2}, {0, -11} } },
	[69] = { .set = { {7, -8}, {1, -4}, {-2, 1}, {0, -10} } },
	[70] = { .set = { {7, -10}, {0, -4}, {-3, -1}, {0, -12} } },
	[71] = { .set = { {7, -11}, {-7, -17}, {-8, -9}, {0, -14} } },
	[72] = { .set = { {5, -7}, {9, -1}, {7, 2}, {1, -12} } },
	[73] = { .set = { {5, -7}, {9, -1}, {7, 2}, {1, -12} } },
	[74] = { .set = { {5, -10}, {-3, -1}, {2, 2}, {1, -12} } },
	[75] = { .set = { {3, -9}, {-7, -5}, {2, 0}, {-1, -11} } },
	[76] = { .set = { {3, -11}, {-3, -3}, {0, -1}, {-1, -13} } },
	[77] = { .set = { {5, -12}, {-9, -14}, {3, -8}, {0, -13} } },
	[78] = { .set = { {3, -8}, {4, -4}, {11, -2}, {2, -13} } },
	[79] = { .set = { {3, -8}, {4, -4}, {11, -2}, {2, -13} } },
	[80] = { .set = { {0, -9}, {5, -1}, {-5, -1}, {0, -12} } },
	[81] = { .set = { {0, -8}, {6, -2}, {-6, -2}, {0, -11} } },
	[82] = { .set = { {0, -10}, {3, -2}, {-3, -2}, {0, -13} } },
	[83] = { .set = { {0, -12}, {10, -10}, {-10, -10}, {0, -11} } },
	[84] = { .set = { {0, -9}, {6, -4}, {-6, -4}, {0, -14} } },
	[85] = { .set = { {0, -9}, {6, -4}, {-6, -4}, {0, -14} } },
	[86] = { .set = { {-3, -10}, {5, -1}, {0, 2}, {1, -12} } },
	[87] = { .set = { {-3, -9}, {7, -5}, {-2, 0}, {1, -11} } },
	[88] = { .set = { {-3, -11}, {3, -3}, {0, -1}, {1, -13} } },
	[89] = { .set = { {-3, -12}, {11, -14}, {-1, -8}, {2, -13} } },
	[90] = { .set = { {-1, -8}, {-2, -4}, {-9, -2}, {0, -13} } },
	[91] = { .set = { {-1, -8}, {-2, -4}, {-9, -2}, {0, -13} } },
	[92] = { .set = { {-7, -9}, {0, -3}, {3, 2}, {0, -11} } },
	[93] = { .set = { {-7, -8}, {-1, -4}, {2, 1}, {0, -10} } },
	[94] = { .set = { {-7, -10}, {0, -4}, {3, -1}, {0, -12} } },
	[95] = { .set = { {-7, -11}, {7, -17}, {8, -9}, {0, -14} } },
	[96] = { .set = { {-5, -7}, {-9, -1}, {-7, 2}, {-1, -12} } },
	[97] = { .set = { {-5, -7}, {-9, -1}, {-7, 2}, {-1, -12} } },
	[98] = { .set = { {-4, -6}, {-2, -3}, {5, 1}, {-1, -12} } },
	[99] = { .set = { {-4, -5}, {-2, -5}, {6, -1}, {-1, -11} } },
	[100] = { .set = { {-4, -7}, {-1, -6}, {4, -2}, {-1, -13} } },
	[101] = { .set = { {-4, -8}, {-7, -17}, {9, -12}, {0, -14} } },
	[102] = { .set = { {-3, -4}, {-8, 2}, {-2, 4}, {0, -9} } },
	[103] = { .set = { {-3, -4}, {-8, 2}, {-2, 4}, {0, -9} } },
	[104] = { .set = { {0, -5}, {-5, 0}, {5, 0}, {0, -11} } },
	[105] = { .set = { {0, -4}, {-7, 0}, {7, 0}, {0, -10} } },
	[106] = { .set = { {0, -6}, {-3, -1}, {3, -1}, {0, -12} } },
	[107] = { .set = { {0, -7}, {-9, -15}, {9, -15}, {0, -14} } },
	[108] = { .set = { {4, -6}, {2, -3}, {-5, 1}, {1, -12} } },
	[109] = { .set = { {4, -5}, {2, -5}, {-6, -1}, {1, -11} } },
	[110] = { .set = { {4, -7}, {1, -6}, {-4, -2}, {1, -13} } },
	[111] = { .set = { {4, -8}, {7, -17}, {-9, -12}, {0, -14} } },
	[112] = { .set = { {7, -9}, {0, -3}, {-3, 2}, {0, -11} } },
	[113] = { .set = { {7, -10}, {1, -6}, {-2, -1}, {0, -12} } },
	[114] = { .set = { {7, -10}, {0, -4}, {-3, -1}, {0, -12} } },
	[115] = { .set = { {7, -11}, {-7, -17}, {-8, -9}, {0, -14} } },
	[116] = { .set = { {5, -10}, {-3, -1}, {2, 2}, {1, -12} } },
	[117] = { .set = { {3, -11}, {-7, -7}, {2, -2}, {-1, -13} } },
	[118] = { .set = { {3, -11}, {-3, -3}, {0, -1}, {-1, -13} } },
	[119] = { .set = { {5, -12}, {-9, -14}, {3, -8}, {0, -13} } },
	[120] = { .set = { {0, -9}, {5, -1}, {-5, -1}, {0, -12} } },
	[121] = { .set = { {0, -8}, {6, -2}, {-6, -2}, {0, -11} } },
	[122] = { .set = { {0, -10}, {3, -2}, {-3, -2}, {0, -13} } },
	[123] = { .set = { {0, -12}, {10, -10}, {-10, -10}, {0, -11} } },
	[124] = { .set = { {-3, -10}, {5, -1}, {0, 2}, {1, -12} } },
	[125] = { .set = { {-3, -11}, {7, -7}, {-2, -2}, {1, -13} } },
	[126] = { .set = { {-3, -11}, {3, -3}, {0, -1}, {1, -13} } },
	[127] = { .set = { {-3, -12}, {11, -14}, {-1, -8}, {2, -13} } },
	[128] = { .set = { {-7, -9}, {0, -3}, {3, 2}, {0, -11} } },
	[129] = { .set = { {-7, -10}, {-1, -6}, {2, -1}, {0, -12} } },
	[130] = { .set = { {-7, -10}, {0, -4}, {3, -1}, {0, -12} } },
	[131] = { .set = { {-7, -11}, {7, -17}, {8, -9}, {0, -14} } },
	[132] = { .set = { {-4, -6}, {-2, -3}, {5, 1}, {-1, -12} } },
	[133] = { .set = { {-4, -5}, {-2, -5}, {6, -1}, {-1, -11} } },
	[134] = { .set = { {-4, -7}, {-1, -6}, {4, -2}, {-1, -13} } },
	[135] = { .set = { {-4, -8}, {-7, -17}, {9, -12}, {0, -14} } },
	[136] = { .set = { {0, -5}, {-5, 0}, {5, 0}, {0, -11} } },
	[137] = { .set = { {-4, -6}, {-2, -3}, {5, 1}, {-1, -12} } },
	[138] = { .set = { {-7, -9}, {0, -3}, {3, 2}, {0, -11} } },
	[139] = { .set = { {-4, -10}, {4, -1}, {-1, 2}, {0, -12} } },
	[140] = { .set = { {0, -9}, {5, -1}, {-5, -1}, {0, -12} } },
	[141] = { .set = { {4, -10}, {-4, -1}, {1, 2}, {0, -12} } },
	[142] = { .set = { {7, -9}, {0, -3}, {-3, 2}, {0, -11} } },
	[143] = { .set = { {4, -6}, {2, -3}, {-5, 1}, {1, -12} } },
	[144] = { .set = { {-2, -5}, {-7, -12}, {-5, -5}, {1, -11} } },
	[145] = { .set = { {-4, -8}, {2, -10}, {-7, -6}, {0, -11} } },
	[146] = { .set = { {-3, -9}, {11, -7}, {-5, -9}, {1, -13} } },
	[147] = { .set = { {1, -10}, {14, -5}, {1, -14}, {2, -13} } },
	[148] = { .set = { {5, -9}, {8, 1}, {9, -9}, {0, -12} } },
	[149] = { .set = { {1, -10}, {-12, -5}, {1, -14}, {0, -13} } },
	[150] = { .set = { {3, -9}, {-11, -7}, {5, -9}, {-1, -13} } },
	[151] = { .set = { {4, -8}, {-2, -10}, {7, -6}, {0, -11} } },
	[152] = { .set = { {-4, 1}, {-10, -6}, {12, 2}, {0, -6} } },
	[153] = { .set = { {-4, 2}, {-11, -6}, {12, 3}, {0, -4} } },
	[154] = { .set = { {-1, -11}, {5, -19}, {-8, -20}, {-1, -16} } },
	[155] = { .set = { {3, -10}, {-6, -20}, {7, -22}, {-1, -15} } },
	[156] = { .set = { {6, -12}, {1, -16}, {6, -21}, {-1, -14} } },
	[157] = { .set = { {4, -14}, {7, -21}, {-4, -24}, {-1, -13} } },
	[158] = { .set = { {-1, -11}, {-8, -22}, {6, -23}, {-1, -12} } },
	[159] = { .set = { {-5, -14}, {-8, -21}, {3, -24}, {0, -13} } },
	[160] = { .set = { {-7, -12}, {-2, -16}, {-7, -21}, {0, -14} } },
	[161] = { .set = { {-4, -10}, {5, -20}, {-8, -22}, {0, -15} } },
	[162] = { .set = { {0, -5}, {-5, 0}, {5, 0}, {0, -11} } },
	[163] = { .set = { {0, -4}, {-7, 0}, {7, 0}, {0, -10} } },
	[164] = { .set = { {0, -6}, {-3, -1}, {3, -1}, {0, -12} } },
	[165] = { .set = { {4, -6}, {2, -3}, {-5, 1}, {1, -12} } },
	[166] = { .set = { {4, -5}, {2, -5}, {-6, -1}, {1, -11} } },
	[167] = { .set = { {4, -7}, {1, -6}, {-4, -2}, {1, -13} } },
	[168] = { .set = { {7, -9}, {0, -3}, {-3, 2}, {0, -11} } },
	[169] = { .set = { {7, -8}, {1, -4}, {-2, 1}, {0, -10} } },
	[170] = { .set = { {7, -10}, {0, -4}, {-3, -1}, {0, -12} } },
	[171] = { .set = { {4, -10}, {-4, -1}, {1, 2}, {0, -12} } },
	[172] = { .set = { {3, -9}, {-7, -5}, {2, 0}, {-1, -11} } },
	[173] = { .set = { {3, -11}, {-3, -3}, {0, -1}, {-1, -13} } },
	[174] = { .set = { {0, -9}, {5, -1}, {-5, -1}, {0, -12} } },
	[175] = { .set = { {0, -8}, {6, -2}, {-6, -2}, {0, -11} } },
	[176] = { .set = { {0, -10}, {3, -2}, {-3, -2}, {0, -13} } },
	[177] = { .set = { {-4, -10}, {4, -1}, {-1, 2}, {0, -12} } },
	[178] = { .set = { {-3, -9}, {7, -5}, {-2, 0}, {1, -11} } },
	[179] = { .set = { {-3, -11}, {3, -3}, {0, -1}, {1, -13} } },
	[180] = { .set = { {-7, -9}, {0, -3}, {3, 2}, {0, -11} } },
	[181] = { .set = { {-7, -8}, {-1, -4}, {2, 1}, {0, -10} } },
	[182] = { .set = { {-7, -10}, {0, -4}, {3, -1}, {0, -12} } },
	[183] = { .set = { {-4, -6}, {-2, -3}, {5, 1}, {-1, -12} } },
	[184] = { .set = { {-4, -5}, {-2, -5}, {6, -1}, {-1, -11} } },
	[185] = { .set = { {-4, -7}, {-1, -6}, {4, -2}, {-1, -13} } },
	[186] = { .set = { {0, -5}, {-6, -20}, {6, -20}, {0, -8} } },
	[187] = { .set = { {0, -6}, {2, -19}, {10, -16}, {-2, -9} } },
	[188] = { .set = { {-2, -5}, {13, -13}, {14, -8}, {-3, -11} } },
	[189] = { .set = { {0, -7}, {11, -5}, {2, 1}, {-3, -13} } },
	[190] = { .set = { {0, -6}, {8, 2}, {-8, 2}, {0, -11} } },
	[191] = { .set = { {-1, -7}, {-12, -5}, {-3, 1}, {2, -13} } },
	[192] = { .set = { {1, -5}, {-14, -13}, {-15, -8}, {2, -11} } },
	[193] = { .set = { {1, -6}, {-1, -19}, {-9, -16}, {3, -9} } },
	[194] = { .set = { {0, -7}, {-9, -15}, {9, -15}, {0, -14} } },
	[195] = { .set = { {4, -9}, {7, -18}, {-9, -13}, {0, -15} } },
	[196] = { .set = { {7, -11}, {-7, -17}, {-8, -9}, {0, -14} } },
	[197] = { .set = { {4, -12}, {-10, -14}, {2, -8}, {-1, -13} } },
	[198] = { .set = { {0, -13}, {10, -11}, {-10, -11}, {0, -12} } },
	[199] = { .set = { {-4, -12}, {10, -14}, {-2, -8}, {1, -13} } },
	[200] = { .set = { {-7, -11}, {7, -17}, {8, -9}, {0, -14} } },
	[201] = { .set = { {-4, -9}, {-7, -18}, {9, -13}, {0, -15} } },
	[202] = { .set = { {0, -5}, {-5, 0}, {5, 0}, {0, -11} } },
	[203] = { .set = { {0, -7}, {-9, -15}, {9, -15}, {0, -14} } },
	[204] = { .set = { {4, -6}, {2, -3}, {-5, 1}, {1, -12} } },
	[205] = { .set = { {4, -8}, {7, -17}, {-9, -12}, {0, -14} } },
	[206] = { .set = { {7, -9}, {0, -3}, {-3, 2}, {0, -11} } },
	[207] = { .set = { {7, -11}, {-7, -17}, {-8, -9}, {0, -14} } },
	[208] = { .set = { {5, -10}, {-3, -1}, {2, 2}, {1, -12} } },
	[209] = { .set = { {5, -12}, {-9, -14}, {3, -8}, {0, -13} } },
	[210] = { .set = { {0, -9}, {5, -1}, {-5, -1}, {0, -12} } },
	[211] = { .set = { {0, -13}, {10, -11}, {-10, -11}, {0, -12} } },
	[212] = { .set = { {-3, -10}, {5, -1}, {0, 2}, {1, -12} } },
	[213] = { .set = { {-3, -12}, {11, -14}, {-1, -8}, {2, -13} } },
	[214] = { .set = { {-7, -9}, {0, -3}, {3, 2}, {0, -11} } },
	[215] = { .set = { {-7, -11}, {7, -17}, {8, -9}, {0, -14} } },
	[216] = { .set = { {-4, -6}, {-2, -3}, {5, 1}, {-1, -12} } },
	[217] = { .set = { {-4, -8}, {-7, -17}, {9, -12}, {0, -14} } },
	[218] = { .set = { {0, -3}, {-4, 4}, {4, 4}, {0, -10} } },
	[219] = { .set = { {-3, -4}, {-8, 2}, {-2, 4}, {0, -9} } },
	[220] = { .set = { {-5, -7}, {-9, -1}, {-7, 2}, {-1, -12} } },
	[221] = { .set = { {-1, -8}, {-2, -4}, {-9, -2}, {0, -13} } },
	[222] = { .set = { {0, -9}, {6, -4}, {-6, -4}, {0, -14} } },
	[223] = { .set = { {3, -8}, {4, -4}, {11, -2}, {2, -13} } },
	[224] = { .set = { {5, -7}, {9, -1}, {7, 2}, {1, -12} } },
	[225] = { .set = { {3, -4}, {8, 2}, {2, 4}, {0, -9} } },
	[226] = { .set = { {0, -5}, {-5, 0}, {5, 0}, {0, -11} } },
	[227] = { .set = { {-4, -6}, {-2, -3}, {5, 1}, {-1, -12} } },
	[228] = { .set = { {-7, -9}, {0, -3}, {3, 2}, {0, -11} } },
	[229] = { .set = { {-4, -10}, {4, -1}, {-1, 2}, {0, -12} } },
	[230] = { .set = { {0, -9}, {5, -1}, {-5, -1}, {0, -12} } },
	[231] = { .set = { {4, -10}, {-4, -1}, {1, 2}, {0, -12} } },
	[232] = { .set = { {7, -9}, {0, -3}, {-3, 2}, {0, -11} } },
	[233] = { .set = { {4, -6}, {2, -3}, {-5, 1}, {1, -12} } },
};

static const ax_anim *const sTentacoolAnimTable1[] = {
	gAxSharedAnim_02601,
	gAxSharedAnim_02677,
	gAxSharedAnim_02686,
	gAxSharedAnim_02695,
	gAxSharedAnim_02613,
	gAxSharedAnim_02635,
	gAxSharedAnim_02648,
	gAxSharedAnim_02657,
};

static const ax_anim *const sTentacoolAnimTable2[] = {
	sTentacoolAnims_2_1,
	sTentacoolAnims_2_2,
	sTentacoolAnims_2_3,
	sTentacoolAnims_2_4,
	sTentacoolAnims_2_5,
	sTentacoolAnims_2_6,
	sTentacoolAnims_2_7,
	sTentacoolAnims_2_8,
};

static const ax_anim *const sTentacoolAnimTable3[] = {
	sTentacoolAnims_3_1,
	sTentacoolAnims_3_2,
	sTentacoolAnims_3_3,
	sTentacoolAnims_3_4,
	sTentacoolAnims_3_5,
	sTentacoolAnims_3_6,
	sTentacoolAnims_3_7,
	sTentacoolAnims_3_8,
};

static const ax_anim *const sTentacoolAnimTable4[] = {
	sTentacoolAnims_4_1,
	sTentacoolAnims_4_2,
	sTentacoolAnims_4_3,
	sTentacoolAnims_4_4,
	sTentacoolAnims_4_5,
	sTentacoolAnims_4_6,
	sTentacoolAnims_4_7,
	sTentacoolAnims_4_8,
};

static const ax_anim *const sTentacoolAnimTable5[] = {
	sTentacoolAnims_5_1,
	sTentacoolAnims_5_2,
	sTentacoolAnims_5_3,
	sTentacoolAnims_5_4,
	sTentacoolAnims_5_5,
	sTentacoolAnims_5_6,
	sTentacoolAnims_5_7,
	sTentacoolAnims_5_8,
};

static const ax_anim *const sTentacoolAnimTable6[] = {
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
	gAxSharedAnim_02369,
};

static const ax_anim *const sTentacoolAnimTable7[] = {
	gAxSharedAnim_00605,
	gAxSharedAnim_00616,
	gAxSharedAnim_00625,
	gAxSharedAnim_00636,
	gAxSharedAnim_00653,
	gAxSharedAnim_00664,
	gAxSharedAnim_00679,
	gAxSharedAnim_00690,
};

static const ax_anim *const sTentacoolAnimTable8[] = {
	sTentacoolAnims_8_1,
	sTentacoolAnims_8_2,
	sTentacoolAnims_8_3,
	sTentacoolAnims_8_4,
	sTentacoolAnims_8_5,
	sTentacoolAnims_8_6,
	sTentacoolAnims_8_7,
	sTentacoolAnims_8_8,
};

static const ax_anim *const sTentacoolAnimTable9[] = {
	gAxSharedAnim_01010,
	sTentacoolAnims_9_2,
	sTentacoolAnims_9_3,
	sTentacoolAnims_9_4,
	sTentacoolAnims_9_5,
	sTentacoolAnims_9_6,
	sTentacoolAnims_9_7,
	sTentacoolAnims_9_8,
};

static const ax_anim *const sTentacoolAnimTable10[] = {
	gAxSharedAnim_01143,
	gAxSharedAnim_01156,
	gAxSharedAnim_01167,
	gAxSharedAnim_01178,
	gAxSharedAnim_01189,
	gAxSharedAnim_01200,
	gAxSharedAnim_01217,
	gAxSharedAnim_01228,
};

static const ax_anim *const sTentacoolAnimTable11[] = {
	sTentacoolAnims_11_1,
	sTentacoolAnims_11_2,
	sTentacoolAnims_11_3,
	gAxSharedAnim_01309,
	gAxSharedAnim_01332,
	sTentacoolAnims_11_6,
	sTentacoolAnims_11_7,
	sTentacoolAnims_11_8,
};

static const ax_anim *const sTentacoolAnimTable12[] = {
	gAxSharedAnim_01423,
	gAxSharedAnim_01467,
	gAxSharedAnim_01458,
	gAxSharedAnim_01449,
	gAxSharedAnim_01448,
	gAxSharedAnim_01444,
	gAxSharedAnim_01432,
	gAxSharedAnim_01424,
};

static const ax_anim *const sTentacoolAnimTable13[] = {
	gAxSharedAnim_01471,
	gAxSharedAnim_01516,
	gAxSharedAnim_01511,
	gAxSharedAnim_01504,
	gAxSharedAnim_01497,
	gAxSharedAnim_01490,
	gAxSharedAnim_01486,
	gAxSharedAnim_01478,
};

static const ax_anim *const *const sAxAnimationsTentacool[] = {
	sTentacoolAnimTable1,
	sTentacoolAnimTable2,
	sTentacoolAnimTable3,
	sTentacoolAnimTable4,
	sTentacoolAnimTable5,
	sTentacoolAnimTable6,
	sTentacoolAnimTable7,
	sTentacoolAnimTable8,
	sTentacoolAnimTable9,
	sTentacoolAnimTable10,
	sTentacoolAnimTable11,
	sTentacoolAnimTable12,
	sTentacoolAnimTable13,
};

static const ax_sprite *const sAxSpritesTentacool[] = {
	sTentacoolSprites1,
	sTentacoolSprites2,
	sTentacoolSprites3,
	sTentacoolSprites4,
	sTentacoolSprites5,
	sTentacoolSprites6,
	sTentacoolSprites7,
	sTentacoolSprites8,
	sTentacoolSprites9,
	sTentacoolSprites10,
	sTentacoolSprites11,
	sTentacoolSprites12,
	sTentacoolSprites13,
	sTentacoolSprites14,
	sTentacoolSprites15,
	sTentacoolSprites16,
	sTentacoolSprites17,
	sTentacoolSprites18,
	sTentacoolSprites19,
	sTentacoolSprites20,
	sTentacoolSprites21,
	sTentacoolSprites22,
	sTentacoolSprites23,
	sTentacoolSprites24,
	sTentacoolSprites25,
	sTentacoolSprites26,
	sTentacoolSprites27,
	sTentacoolSprites28,
	sTentacoolSprites29,
	sTentacoolSprites30,
	sTentacoolSprites31,
	sTentacoolSprites32,
	sTentacoolSprites33,
	sTentacoolSprites34,
	sTentacoolSprites35,
	sTentacoolSprites36,
	sTentacoolSprites37,
	sTentacoolSprites38,
	sTentacoolSprites39,
	sTentacoolSprites40,
	sTentacoolSprites41,
	sTentacoolSprites42,
	sTentacoolSprites43,
	sTentacoolSprites44,
	sTentacoolSprites45,
	sTentacoolSprites46,
	sTentacoolSprites47,
};

static const axmain sAxMainTentacool = {
	.poses = sAxPosesTentacool,
	.animations = sAxAnimationsTentacool,
	.animCount = ARRAY_COUNT(sAxAnimationsTentacool),
	.spriteData = sAxSpritesTentacool,
	.positions = sAxPositionsTentacool,
};
