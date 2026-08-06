/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainRaichu;
const SiroArchive gAxRaichu = {"SIRO", &sAxMainRaichu};

static const ax_pose sRaichuPose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose13[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose14[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose15[] = {
	AX_POSE(14, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose16[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose17[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose18[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose19[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose20[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose21[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose22[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose23[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose24[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose28[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose32[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose36[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose40[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose44[] = {
	AX_POSE(28, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose48[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose52[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose56[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose90[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose92[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose94[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose96[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose98[] = {
	AX_POSE(33, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose100[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose102[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose104[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose107[] = {
	AX_POSE(34, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(35, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 4)),
	AX_POSE(36, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 4)),
	AX_POSE(37, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(26, 3, 4)),
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(28, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose108[] = {
	AX_POSE(39, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(40, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(41, OAM1(224, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(42, OAM1(232, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 4)),
	AX_POSE(43, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(16, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(16, 3, 4)),
	AX_POSE(44, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(20, 3, 4)),
	AX_POSE(45, OAM1(0, ST_OAM_SQUARE     , 2), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(22, 3, 4)),
	AX_POSE(46, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(23, 3, 4)),
	AX_POSE(47, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(31, 3, 4)),
	AX_POSE(48, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(35, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose109[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose110[] = {
	AX_POSE(46, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(47, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(48, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose113[] = {
	AX_POSE(49, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(50, OAM1(221, ST_OAM_V_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE(51, OAM1(253, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(20, 3, 4)),
	AX_POSE(52, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(22, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose114[] = {
	AX_POSE(53, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(54, OAM1(222, ST_OAM_H_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(55, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE(56, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(24, 3, 4)),
	AX_POSE(57, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(25, 3, 4)),
	AX_POSE(58, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(29, 3, 4)),
	AX_POSE(59, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(33, 3, 4)),
	AX_POSE(60, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(37, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose115[] = {
	AX_POSE(52, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose116[] = {
	AX_POSE(57, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(58, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE(59, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(60, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose119[] = {
	AX_POSE(61, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(62, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE(63, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(20, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose120[] = {
	AX_POSE(39, OAM1(223, ST_OAM_H_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(40, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(2, 3, 4)),
	AX_POSE(41, OAM1(223, ST_OAM_H_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(42, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 4)),
	AX_POSE(43, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(230, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE(44, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(20, 3, 4)),
	AX_POSE(45, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(22, 3, 4)),
	AX_POSE(64, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(23, 3, 4)),
	AX_POSE(65, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(31, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose121[] = {
	AX_POSE(63, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose122[] = {
	AX_POSE(64, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(65, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose125[] = {
	AX_POSE(66, OAM1(223, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(67, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(1, 0), 0, 1), OAM3(8, 3, 4)),
	AX_POSE(68, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(12, 3, 4)),
	AX_POSE(69, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE(70, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(20, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose126[] = {
	AX_POSE(53, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(227, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(54, OAM1(223, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(55, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 4)),
	AX_POSE(56, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 4)),
	AX_POSE(71, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(25, 3, 4)),
	AX_POSE(72, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(33, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose127[] = {
	AX_POSE(70, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose128[] = {
	AX_POSE(71, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(72, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose131[] = {
	AX_POSE(73, OAM1(225, ST_OAM_H_RECTANGLE, 1), OAM2(233, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(74, OAM1(225, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(8, 3, 4)),
	AX_POSE(75, OAM1(1, ST_OAM_H_RECTANGLE, 2), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 4)),
	AX_POSE(76, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(18, 3, 4)),
	AX_POSE(77, OAM1(1, ST_OAM_H_RECTANGLE, 2), OAM2(233, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(22, 3, 4)),
	AX_POSE(78, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(24, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose132[] = {
	AX_POSE(39, OAM1(225, ST_OAM_H_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(40, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(41, OAM1(225, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(42, OAM1(233, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 4)),
	AX_POSE(43, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(16, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(16, 3, 4)),
	AX_POSE(44, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(20, 3, 4)),
	AX_POSE(45, OAM1(1, ST_OAM_SQUARE     , 2), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(22, 3, 4)),
	AX_POSE(79, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(23, 3, 4)),
	AX_POSE(80, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(27, 3, 4)),
	AX_POSE(81, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(31, 3, 4)),
	AX_POSE(82, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(35, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose133[] = {
	AX_POSE(78, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose134[] = {
	AX_POSE(79, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(80, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(4, 3, 4)),
	AX_POSE(81, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(82, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(1, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose137[] = {
	AX_POSE(66, OAM1(223, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(67, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(68, OAM1(255, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(12, 3, 4)),
	AX_POSE(69, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(16, 3, 4)),
	AX_POSE(70, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(20, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose138[] = {
	AX_POSE(53, OAM1(223, ST_OAM_V_RECTANGLE, 1), OAM2(12, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 4)),
	AX_POSE(54, OAM1(223, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(55, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE(56, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(12, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(24, 3, 4)),
	AX_POSE(71, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(25, 3, 4)),
	AX_POSE(72, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(33, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose139[] = {
	AX_POSE(70, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose140[] = {
	AX_POSE(71, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(72, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose143[] = {
	AX_POSE(61, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(62, OAM1(224, ST_OAM_V_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(16, 3, 4)),
	AX_POSE(63, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(20, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose144[] = {
	AX_POSE(39, OAM1(223, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(40, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(2, 3, 4)),
	AX_POSE(41, OAM1(223, ST_OAM_H_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(10, 3, 4)),
	AX_POSE(42, OAM1(231, ST_OAM_H_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 4)),
	AX_POSE(43, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(18, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(16, 3, 4)),
	AX_POSE(44, OAM1(239, ST_OAM_V_RECTANGLE, 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(20, 3, 4)),
	AX_POSE(45, OAM1(255, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(22, 3, 4)),
	AX_POSE(64, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(23, 3, 4)),
	AX_POSE(65, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(31, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose145[] = {
	AX_POSE(63, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose146[] = {
	AX_POSE(64, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(65, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose149[] = {
	AX_POSE(49, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(50, OAM1(221, ST_OAM_V_RECTANGLE, 1), OAM2(14, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(16, 3, 4)),
	AX_POSE(51, OAM1(253, ST_OAM_H_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(20, 3, 4)),
	AX_POSE(52, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(22, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose150[] = {
	AX_POSE(53, OAM1(222, ST_OAM_V_RECTANGLE, 1), OAM2(232, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(54, OAM1(222, ST_OAM_H_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(55, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_2, FLIP(0, 0), 0, 1), OAM3(16, 3, 4)),
	AX_POSE(56, OAM1(254, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(24, 3, 4)),
	AX_POSE(57, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(25, 3, 4)),
	AX_POSE(58, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(29, 3, 4)),
	AX_POSE(59, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(33, 3, 4)),
	AX_POSE(60, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(37, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose151[] = {
	AX_POSE(52, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose152[] = {
	AX_POSE(57, OAM1(230, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(58, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE(59, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE(60, OAM1(254, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(12, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose153[] = {
	AX_POSE(83, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose154[] = {
	AX_POSE(84, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose155[] = {
	AX_POSE(85, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose156[] = {
	AX_POSE(86, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose157[] = {
	AX_POSE(87, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose158[] = {
	AX_POSE(88, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose159[] = {
	AX_POSE(89, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose160[] = {
	AX_POSE(88, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose161[] = {
	AX_POSE(87, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose162[] = {
	AX_POSE(86, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose196[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose197[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose201[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose202[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose208[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose226[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose228[] = {
	AX_POSE(52, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose229[] = {
	AX_POSE(63, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose230[] = {
	AX_POSE(70, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose232[] = {
	AX_POSE(70, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose233[] = {
	AX_POSE(63, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sRaichuPose234[] = {
	AX_POSE(52, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const u8 sRaichuAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_2_1.lz");
static const u8 sRaichuAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_2_2.lz");
static const u8 sRaichuAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_2_3.lz");
static const u8 sRaichuAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_2_4.lz");
static const u8 sRaichuAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_2_5.lz");
static const u8 sRaichuAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_2_6.lz");
static const u8 sRaichuAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_2_7.lz");
static const u8 sRaichuAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_2_8.lz");
static const u8 sRaichuAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_3_1.lz");
static const u8 sRaichuAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_3_2.lz");
static const u8 sRaichuAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_3_3.lz");
static const u8 sRaichuAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_3_4.lz");
static const u8 sRaichuAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_3_5.lz");
static const u8 sRaichuAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_3_6.lz");
static const u8 sRaichuAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_3_7.lz");
static const u8 sRaichuAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_3_8.lz");
static const u8 sRaichuAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_4_1.lz");
static const u8 sRaichuAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_4_2.lz");
static const u8 sRaichuAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_4_3.lz");
static const u8 sRaichuAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_4_4.lz");
static const u8 sRaichuAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_4_5.lz");
static const u8 sRaichuAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_4_6.lz");
static const u8 sRaichuAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_4_7.lz");
static const u8 sRaichuAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_4_8.lz");
static const u8 sRaichuAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_5_1.lz");
static const u8 sRaichuAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_5_2.lz");
static const u8 sRaichuAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_5_3.lz");
static const u8 sRaichuAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_5_4.lz");
static const u8 sRaichuAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_5_5.lz");
static const u8 sRaichuAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_5_6.lz");
static const u8 sRaichuAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_5_7.lz");
static const u8 sRaichuAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_5_8.lz");
static const u8 sRaichuAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_8_1.lz");
static const u8 sRaichuAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_8_2.lz");
static const u8 sRaichuAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_8_3.lz");
static const u8 sRaichuAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_8_4.lz");
static const u8 sRaichuAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_8_5.lz");
static const u8 sRaichuAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_8_6.lz");
static const u8 sRaichuAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_8_7.lz");
static const u8 sRaichuAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_8_8.lz");
static const u8 sRaichuAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_9_2.lz");
static const u8 sRaichuAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_9_3.lz");
static const u8 sRaichuAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_9_4.lz");
static const u8 sRaichuAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_9_5.lz");
static const u8 sRaichuAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_9_6.lz");
static const u8 sRaichuAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_9_7.lz");
static const u8 sRaichuAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/raichu/sRaichuAnims_9_8.lz");

static const u8 sRaichuGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_1.4bpp.lz");
static const ax_sprite sRaichuSprites1[] = {
	{sRaichuGfx1, ARRAY_COUNT(sRaichuGfx1)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_2.4bpp.lz");
static const ax_sprite sRaichuSprites2[] = {
	{sRaichuGfx2, ARRAY_COUNT(sRaichuGfx2)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_3.4bpp.lz");
static const ax_sprite sRaichuSprites3[] = {
	{sRaichuGfx3, ARRAY_COUNT(sRaichuGfx3)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_4.4bpp.lz");
static const ax_sprite sRaichuSprites4[] = {
	{sRaichuGfx4, ARRAY_COUNT(sRaichuGfx4)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_5.4bpp.lz");
static const ax_sprite sRaichuSprites5[] = {
	{sRaichuGfx5, ARRAY_COUNT(sRaichuGfx5)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_6.4bpp.lz");
static const ax_sprite sRaichuSprites6[] = {
	{sRaichuGfx6, ARRAY_COUNT(sRaichuGfx6)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_7.4bpp.lz");
static const ax_sprite sRaichuSprites7[] = {
	{sRaichuGfx7, ARRAY_COUNT(sRaichuGfx7)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_8.4bpp.lz");
static const ax_sprite sRaichuSprites8[] = {
	{sRaichuGfx8, ARRAY_COUNT(sRaichuGfx8)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_9.4bpp.lz");
static const ax_sprite sRaichuSprites9[] = {
	{sRaichuGfx9, ARRAY_COUNT(sRaichuGfx9)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_10.4bpp.lz");
static const ax_sprite sRaichuSprites10[] = {
	{sRaichuGfx10, ARRAY_COUNT(sRaichuGfx10)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_11.4bpp.lz");
static const ax_sprite sRaichuSprites11[] = {
	{sRaichuGfx11, ARRAY_COUNT(sRaichuGfx11)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_12.4bpp.lz");
static const ax_sprite sRaichuSprites12[] = {
	{sRaichuGfx12, ARRAY_COUNT(sRaichuGfx12)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_13.4bpp.lz");
static const ax_sprite sRaichuSprites13[] = {
	{sRaichuGfx13, ARRAY_COUNT(sRaichuGfx13)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_14.4bpp.lz");
static const ax_sprite sRaichuSprites14[] = {
	{sRaichuGfx14, ARRAY_COUNT(sRaichuGfx14)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_15.4bpp.lz");
static const ax_sprite sRaichuSprites15[] = {
	{sRaichuGfx15, ARRAY_COUNT(sRaichuGfx15)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_16.4bpp.lz");
static const ax_sprite sRaichuSprites16[] = {
	{sRaichuGfx16, ARRAY_COUNT(sRaichuGfx16)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_17.4bpp.lz");
static const ax_sprite sRaichuSprites17[] = {
	{sRaichuGfx17, ARRAY_COUNT(sRaichuGfx17)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_18.4bpp.lz");
static const ax_sprite sRaichuSprites18[] = {
	{sRaichuGfx18, ARRAY_COUNT(sRaichuGfx18)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_19.4bpp.lz");
static const ax_sprite sRaichuSprites19[] = {
	{sRaichuGfx19, ARRAY_COUNT(sRaichuGfx19)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_20.4bpp.lz");
static const ax_sprite sRaichuSprites20[] = {
	{sRaichuGfx20, ARRAY_COUNT(sRaichuGfx20)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_21.4bpp.lz");
static const ax_sprite sRaichuSprites21[] = {
	{sRaichuGfx21, ARRAY_COUNT(sRaichuGfx21)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_22.4bpp.lz");
static const ax_sprite sRaichuSprites22[] = {
	{sRaichuGfx22, ARRAY_COUNT(sRaichuGfx22)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_23.4bpp.lz");
static const ax_sprite sRaichuSprites23[] = {
	{sRaichuGfx23, ARRAY_COUNT(sRaichuGfx23)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_24.4bpp.lz");
static const ax_sprite sRaichuSprites24[] = {
	{sRaichuGfx24, ARRAY_COUNT(sRaichuGfx24)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_25.4bpp.lz");
static const u8 sRaichuGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_25_1.4bpp.lz");
static const ax_sprite sRaichuSprites25[] = {
	{sRaichuGfx25, ARRAY_COUNT(sRaichuGfx25)}, 
	{NULL, 32}, 
	{sRaichuGfx25_1, ARRAY_COUNT(sRaichuGfx25_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaichuGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_26.4bpp.lz");
static const u8 sRaichuGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_26_1.4bpp.lz");
static const u8 sRaichuGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_26_2.4bpp.lz");
static const ax_sprite sRaichuSprites26[] = {
	{sRaichuGfx26, ARRAY_COUNT(sRaichuGfx26)}, 
	{NULL, 32}, 
	{sRaichuGfx26_1, ARRAY_COUNT(sRaichuGfx26_1)}, 
	{NULL, 64}, 
	{sRaichuGfx26_2, ARRAY_COUNT(sRaichuGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaichuGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_27.4bpp.lz");
static const u8 sRaichuGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_27_1.4bpp.lz");
static const ax_sprite sRaichuSprites27[] = {
	{sRaichuGfx27, ARRAY_COUNT(sRaichuGfx27)}, 
	{NULL, 64}, 
	{sRaichuGfx27_1, ARRAY_COUNT(sRaichuGfx27_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaichuGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_28.4bpp.lz");
static const u8 sRaichuGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_28_1.4bpp.lz");
static const u8 sRaichuGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_28_2.4bpp.lz");
static const ax_sprite sRaichuSprites28[] = {
	{sRaichuGfx28, ARRAY_COUNT(sRaichuGfx28)}, 
	{NULL, 32}, 
	{sRaichuGfx28_1, ARRAY_COUNT(sRaichuGfx28_1)}, 
	{NULL, 32}, 
	{sRaichuGfx28_2, ARRAY_COUNT(sRaichuGfx28_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaichuGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_29.4bpp.lz");
static const ax_sprite sRaichuSprites29[] = {
	{sRaichuGfx29, ARRAY_COUNT(sRaichuGfx29)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sRaichuGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_30.4bpp.lz");
static const ax_sprite sRaichuSprites30[] = {
	{sRaichuGfx30, ARRAY_COUNT(sRaichuGfx30)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_31.4bpp.lz");
static const ax_sprite sRaichuSprites31[] = {
	{NULL, 32}, 
	{sRaichuGfx31, ARRAY_COUNT(sRaichuGfx31)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaichuGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_32.4bpp.lz");
static const u8 sRaichuGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_32_1.4bpp.lz");
static const u8 sRaichuGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_32_2.4bpp.lz");
static const ax_sprite sRaichuSprites32[] = {
	{sRaichuGfx32, ARRAY_COUNT(sRaichuGfx32)}, 
	{NULL, 32}, 
	{sRaichuGfx32_1, ARRAY_COUNT(sRaichuGfx32_1)}, 
	{NULL, 32}, 
	{sRaichuGfx32_2, ARRAY_COUNT(sRaichuGfx32_2)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_33.4bpp.lz");
static const u8 sRaichuGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_33_1.4bpp.lz");
static const ax_sprite sRaichuSprites33[] = {
	{NULL, 32}, 
	{sRaichuGfx33, ARRAY_COUNT(sRaichuGfx33)}, 
	{NULL, 32}, 
	{sRaichuGfx33_1, ARRAY_COUNT(sRaichuGfx33_1)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_34.4bpp.lz");
static const ax_sprite sRaichuSprites34[] = {
	{sRaichuGfx34, ARRAY_COUNT(sRaichuGfx34)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_35.4bpp.lz");
static const u8 sRaichuGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_35_1.4bpp.lz");
static const ax_sprite sRaichuSprites35[] = {
	{NULL, 32}, 
	{sRaichuGfx35, ARRAY_COUNT(sRaichuGfx35)}, 
	{NULL, 32}, 
	{sRaichuGfx35_1, ARRAY_COUNT(sRaichuGfx35_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRaichuGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_36.4bpp.lz");
static const u8 sRaichuGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_36_1.4bpp.lz");
static const u8 sRaichuGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_36_2.4bpp.lz");
static const ax_sprite sRaichuSprites36[] = {
	{sRaichuGfx36, ARRAY_COUNT(sRaichuGfx36)}, 
	{NULL, 32}, 
	{sRaichuGfx36_1, ARRAY_COUNT(sRaichuGfx36_1)}, 
	{NULL, 32}, 
	{sRaichuGfx36_2, ARRAY_COUNT(sRaichuGfx36_2)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_37.4bpp.lz");
static const ax_sprite sRaichuSprites37[] = {
	{sRaichuGfx37, ARRAY_COUNT(sRaichuGfx37)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_38.4bpp.lz");
static const ax_sprite sRaichuSprites38[] = {
	{sRaichuGfx38, ARRAY_COUNT(sRaichuGfx38)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_39.4bpp.lz");
static const ax_sprite sRaichuSprites39[] = {
	{sRaichuGfx39, ARRAY_COUNT(sRaichuGfx39)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_40.4bpp.lz");
static const ax_sprite sRaichuSprites40[] = {
	{sRaichuGfx40, ARRAY_COUNT(sRaichuGfx40)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_41.4bpp.lz");
static const ax_sprite sRaichuSprites41[] = {
	{sRaichuGfx41, ARRAY_COUNT(sRaichuGfx41)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_42.4bpp.lz");
static const ax_sprite sRaichuSprites42[] = {
	{sRaichuGfx42, ARRAY_COUNT(sRaichuGfx42)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaichuGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_43.4bpp.lz");
static const ax_sprite sRaichuSprites43[] = {
	{sRaichuGfx43, ARRAY_COUNT(sRaichuGfx43)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_44.4bpp.lz");
static const ax_sprite sRaichuSprites44[] = {
	{sRaichuGfx44, ARRAY_COUNT(sRaichuGfx44)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_45.4bpp.lz");
static const ax_sprite sRaichuSprites45[] = {
	{sRaichuGfx45, ARRAY_COUNT(sRaichuGfx45)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_46.4bpp.lz");
static const ax_sprite sRaichuSprites46[] = {
	{sRaichuGfx46, ARRAY_COUNT(sRaichuGfx46)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_47.4bpp.lz");
static const ax_sprite sRaichuSprites47[] = {
	{sRaichuGfx47, ARRAY_COUNT(sRaichuGfx47)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_48.4bpp.lz");
static const ax_sprite sRaichuSprites48[] = {
	{sRaichuGfx48, ARRAY_COUNT(sRaichuGfx48)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_49.4bpp.lz");
static const ax_sprite sRaichuSprites49[] = {
	{sRaichuGfx49, ARRAY_COUNT(sRaichuGfx49)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_50.4bpp.lz");
static const u8 sRaichuGfx50_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_50_1.4bpp.lz");
static const u8 sRaichuGfx50_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_50_2.4bpp.lz");
static const u8 sRaichuGfx50_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_50_3.4bpp.lz");
static const ax_sprite sRaichuSprites50[] = {
	{sRaichuGfx50, ARRAY_COUNT(sRaichuGfx50)}, 
	{NULL, 32}, 
	{sRaichuGfx50_1, ARRAY_COUNT(sRaichuGfx50_1)}, 
	{NULL, 32}, 
	{sRaichuGfx50_2, ARRAY_COUNT(sRaichuGfx50_2)}, 
	{NULL, 32}, 
	{sRaichuGfx50_3, ARRAY_COUNT(sRaichuGfx50_3)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_51.4bpp.lz");
static const ax_sprite sRaichuSprites51[] = {
	{sRaichuGfx51, ARRAY_COUNT(sRaichuGfx51)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_52.4bpp.lz");
static const ax_sprite sRaichuSprites52[] = {
	{sRaichuGfx52, ARRAY_COUNT(sRaichuGfx52)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_53.4bpp.lz");
static const ax_sprite sRaichuSprites53[] = {
	{NULL, 32}, 
	{sRaichuGfx53, ARRAY_COUNT(sRaichuGfx53)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaichuGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_54.4bpp.lz");
static const ax_sprite sRaichuSprites54[] = {
	{NULL, 32}, 
	{sRaichuGfx54, ARRAY_COUNT(sRaichuGfx54)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_55.4bpp.lz");
static const ax_sprite sRaichuSprites55[] = {
	{sRaichuGfx55, ARRAY_COUNT(sRaichuGfx55)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_56.4bpp.lz");
static const ax_sprite sRaichuSprites56[] = {
	{NULL, 32}, 
	{sRaichuGfx56, ARRAY_COUNT(sRaichuGfx56)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sRaichuGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_57.4bpp.lz");
static const ax_sprite sRaichuSprites57[] = {
	{sRaichuGfx57, ARRAY_COUNT(sRaichuGfx57)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_58.4bpp.lz");
static const ax_sprite sRaichuSprites58[] = {
	{NULL, 32}, 
	{sRaichuGfx58, ARRAY_COUNT(sRaichuGfx58)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_59.4bpp.lz");
static const ax_sprite sRaichuSprites59[] = {
	{sRaichuGfx59, ARRAY_COUNT(sRaichuGfx59)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_60.4bpp.lz");
static const ax_sprite sRaichuSprites60[] = {
	{sRaichuGfx60, ARRAY_COUNT(sRaichuGfx60)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_61.4bpp.lz");
static const ax_sprite sRaichuSprites61[] = {
	{sRaichuGfx61, ARRAY_COUNT(sRaichuGfx61)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaichuGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_62.4bpp.lz");
static const u8 sRaichuGfx62_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_62_1.4bpp.lz");
static const u8 sRaichuGfx62_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_62_2.4bpp.lz");
static const ax_sprite sRaichuSprites62[] = {
	{sRaichuGfx62, ARRAY_COUNT(sRaichuGfx62)}, 
	{NULL, 32}, 
	{sRaichuGfx62_1, ARRAY_COUNT(sRaichuGfx62_1)}, 
	{NULL, 32}, 
	{sRaichuGfx62_2, ARRAY_COUNT(sRaichuGfx62_2)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_63.4bpp.lz");
static const ax_sprite sRaichuSprites63[] = {
	{sRaichuGfx63, ARRAY_COUNT(sRaichuGfx63)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_64.4bpp.lz");
static const u8 sRaichuGfx64_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_64_1.4bpp.lz");
static const u8 sRaichuGfx64_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_64_2.4bpp.lz");
static const ax_sprite sRaichuSprites64[] = {
	{sRaichuGfx64, ARRAY_COUNT(sRaichuGfx64)}, 
	{NULL, 32}, 
	{sRaichuGfx64_1, ARRAY_COUNT(sRaichuGfx64_1)}, 
	{NULL, 32}, 
	{sRaichuGfx64_2, ARRAY_COUNT(sRaichuGfx64_2)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_65.4bpp.lz");
static const u8 sRaichuGfx65_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_65_1.4bpp.lz");
static const ax_sprite sRaichuSprites65[] = {
	{sRaichuGfx65, ARRAY_COUNT(sRaichuGfx65)}, 
	{NULL, 32}, 
	{sRaichuGfx65_1, ARRAY_COUNT(sRaichuGfx65_1)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_66.4bpp.lz");
static const u8 sRaichuGfx66_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_66_1.4bpp.lz");
static const ax_sprite sRaichuSprites66[] = {
	{sRaichuGfx66, ARRAY_COUNT(sRaichuGfx66)}, 
	{NULL, 32}, 
	{sRaichuGfx66_1, ARRAY_COUNT(sRaichuGfx66_1)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_67.4bpp.lz");
static const ax_sprite sRaichuSprites67[] = {
	{sRaichuGfx67, ARRAY_COUNT(sRaichuGfx67)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_68.4bpp.lz");
static const ax_sprite sRaichuSprites68[] = {
	{sRaichuGfx68, ARRAY_COUNT(sRaichuGfx68)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_69.4bpp.lz");
static const ax_sprite sRaichuSprites69[] = {
	{sRaichuGfx69, ARRAY_COUNT(sRaichuGfx69)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sRaichuGfx70[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_70.4bpp.lz");
static const ax_sprite sRaichuSprites70[] = {
	{NULL, 32}, 
	{sRaichuGfx70, ARRAY_COUNT(sRaichuGfx70)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx71[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_71.4bpp.lz");
static const ax_sprite sRaichuSprites71[] = {
	{NULL, 32}, 
	{sRaichuGfx71, ARRAY_COUNT(sRaichuGfx71)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx72[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_72.4bpp.lz");
static const ax_sprite sRaichuSprites72[] = {
	{NULL, 32}, 
	{sRaichuGfx72, ARRAY_COUNT(sRaichuGfx72)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx73[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_73.4bpp.lz");
static const ax_sprite sRaichuSprites73[] = {
	{sRaichuGfx73, ARRAY_COUNT(sRaichuGfx73)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx74[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_74.4bpp.lz");
static const ax_sprite sRaichuSprites74[] = {
	{NULL, 32}, 
	{sRaichuGfx74, ARRAY_COUNT(sRaichuGfx74)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx75[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_75.4bpp.lz");
static const u8 sRaichuGfx75_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_75_1.4bpp.lz");
static const u8 sRaichuGfx75_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_75_2.4bpp.lz");
static const ax_sprite sRaichuSprites75[] = {
	{sRaichuGfx75, ARRAY_COUNT(sRaichuGfx75)}, 
	{NULL, 32}, 
	{sRaichuGfx75_1, ARRAY_COUNT(sRaichuGfx75_1)}, 
	{NULL, 32}, 
	{sRaichuGfx75_2, ARRAY_COUNT(sRaichuGfx75_2)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx76[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_76.4bpp.lz");
static const ax_sprite sRaichuSprites76[] = {
	{sRaichuGfx76, ARRAY_COUNT(sRaichuGfx76)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx77[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_77.4bpp.lz");
static const ax_sprite sRaichuSprites77[] = {
	{NULL, 32}, 
	{sRaichuGfx77, ARRAY_COUNT(sRaichuGfx77)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx78[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_78.4bpp.lz");
static const ax_sprite sRaichuSprites78[] = {
	{sRaichuGfx78, ARRAY_COUNT(sRaichuGfx78)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx79[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_79.4bpp.lz");
static const ax_sprite sRaichuSprites79[] = {
	{sRaichuGfx79, ARRAY_COUNT(sRaichuGfx79)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx80[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_80.4bpp.lz");
static const ax_sprite sRaichuSprites80[] = {
	{sRaichuGfx80, ARRAY_COUNT(sRaichuGfx80)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx81[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_81.4bpp.lz");
static const ax_sprite sRaichuSprites81[] = {
	{sRaichuGfx81, ARRAY_COUNT(sRaichuGfx81)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx82[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_82.4bpp.lz");
static const ax_sprite sRaichuSprites82[] = {
	{sRaichuGfx82, ARRAY_COUNT(sRaichuGfx82)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx83[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_83.4bpp.lz");
static const ax_sprite sRaichuSprites83[] = {
	{sRaichuGfx83, ARRAY_COUNT(sRaichuGfx83)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx84[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_84.4bpp.lz");
static const ax_sprite sRaichuSprites84[] = {
	{sRaichuGfx84, ARRAY_COUNT(sRaichuGfx84)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx85[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_85.4bpp.lz");
static const ax_sprite sRaichuSprites85[] = {
	{sRaichuGfx85, ARRAY_COUNT(sRaichuGfx85)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx86[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_86.4bpp.lz");
static const ax_sprite sRaichuSprites86[] = {
	{sRaichuGfx86, ARRAY_COUNT(sRaichuGfx86)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx87[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_87.4bpp.lz");
static const ax_sprite sRaichuSprites87[] = {
	{sRaichuGfx87, ARRAY_COUNT(sRaichuGfx87)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx88[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_88.4bpp.lz");
static const ax_sprite sRaichuSprites88[] = {
	{sRaichuGfx88, ARRAY_COUNT(sRaichuGfx88)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx89[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_89.4bpp.lz");
static const ax_sprite sRaichuSprites89[] = {
	{sRaichuGfx89, ARRAY_COUNT(sRaichuGfx89)}, 
	{NULL, 0}
};
static const u8 sRaichuGfx90[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/raichu/sprite_90.4bpp.lz");
static const ax_sprite sRaichuSprites90[] = {
	{sRaichuGfx90, ARRAY_COUNT(sRaichuGfx90)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesRaichu[] = {
	sRaichuPose1,
	sRaichuPose2,
	sRaichuPose3,
	sRaichuPose4,
	sRaichuPose5,
	sRaichuPose6,
	sRaichuPose7,
	sRaichuPose8,
	sRaichuPose9,
	sRaichuPose10,
	sRaichuPose11,
	sRaichuPose12,
	sRaichuPose13,
	sRaichuPose14,
	sRaichuPose15,
	sRaichuPose16,
	sRaichuPose17,
	sRaichuPose18,
	sRaichuPose19,
	sRaichuPose20,
	sRaichuPose21,
	sRaichuPose22,
	sRaichuPose23,
	sRaichuPose24,
	sRaichuPose1,
	sRaichuPose2,
	sRaichuPose3,
	sRaichuPose28,
	sRaichuPose4,
	sRaichuPose5,
	sRaichuPose6,
	sRaichuPose32,
	sRaichuPose7,
	sRaichuPose8,
	sRaichuPose9,
	sRaichuPose36,
	sRaichuPose10,
	sRaichuPose11,
	sRaichuPose12,
	sRaichuPose40,
	sRaichuPose13,
	sRaichuPose14,
	sRaichuPose15,
	sRaichuPose44,
	sRaichuPose16,
	sRaichuPose17,
	sRaichuPose18,
	sRaichuPose48,
	sRaichuPose19,
	sRaichuPose20,
	sRaichuPose21,
	sRaichuPose52,
	sRaichuPose22,
	sRaichuPose23,
	sRaichuPose24,
	sRaichuPose56,
	sRaichuPose1,
	sRaichuPose2,
	sRaichuPose3,
	sRaichuPose28,
	sRaichuPose4,
	sRaichuPose5,
	sRaichuPose6,
	sRaichuPose32,
	sRaichuPose7,
	sRaichuPose8,
	sRaichuPose9,
	sRaichuPose36,
	sRaichuPose10,
	sRaichuPose11,
	sRaichuPose12,
	sRaichuPose40,
	sRaichuPose13,
	sRaichuPose14,
	sRaichuPose15,
	sRaichuPose44,
	sRaichuPose16,
	sRaichuPose17,
	sRaichuPose18,
	sRaichuPose48,
	sRaichuPose19,
	sRaichuPose20,
	sRaichuPose21,
	sRaichuPose52,
	sRaichuPose22,
	sRaichuPose23,
	sRaichuPose24,
	sRaichuPose56,
	sRaichuPose1,
	sRaichuPose90,
	sRaichuPose4,
	sRaichuPose92,
	sRaichuPose7,
	sRaichuPose94,
	sRaichuPose10,
	sRaichuPose96,
	sRaichuPose13,
	sRaichuPose98,
	sRaichuPose16,
	sRaichuPose100,
	sRaichuPose19,
	sRaichuPose102,
	sRaichuPose22,
	sRaichuPose104,
	sRaichuPose1,
	sRaichuPose90,
	sRaichuPose107,
	sRaichuPose108,
	sRaichuPose109,
	sRaichuPose110,
	sRaichuPose4,
	sRaichuPose92,
	sRaichuPose113,
	sRaichuPose114,
	sRaichuPose115,
	sRaichuPose116,
	sRaichuPose7,
	sRaichuPose94,
	sRaichuPose119,
	sRaichuPose120,
	sRaichuPose121,
	sRaichuPose122,
	sRaichuPose10,
	sRaichuPose96,
	sRaichuPose125,
	sRaichuPose126,
	sRaichuPose127,
	sRaichuPose128,
	sRaichuPose13,
	sRaichuPose98,
	sRaichuPose131,
	sRaichuPose132,
	sRaichuPose133,
	sRaichuPose134,
	sRaichuPose16,
	sRaichuPose100,
	sRaichuPose137,
	sRaichuPose138,
	sRaichuPose139,
	sRaichuPose140,
	sRaichuPose19,
	sRaichuPose102,
	sRaichuPose143,
	sRaichuPose144,
	sRaichuPose145,
	sRaichuPose146,
	sRaichuPose22,
	sRaichuPose104,
	sRaichuPose149,
	sRaichuPose150,
	sRaichuPose151,
	sRaichuPose152,
	sRaichuPose153,
	sRaichuPose154,
	sRaichuPose155,
	sRaichuPose156,
	sRaichuPose157,
	sRaichuPose158,
	sRaichuPose159,
	sRaichuPose160,
	sRaichuPose161,
	sRaichuPose162,
	sRaichuPose1,
	sRaichuPose2,
	sRaichuPose3,
	sRaichuPose4,
	sRaichuPose5,
	sRaichuPose6,
	sRaichuPose7,
	sRaichuPose8,
	sRaichuPose9,
	sRaichuPose10,
	sRaichuPose11,
	sRaichuPose12,
	sRaichuPose13,
	sRaichuPose14,
	sRaichuPose15,
	sRaichuPose16,
	sRaichuPose17,
	sRaichuPose18,
	sRaichuPose19,
	sRaichuPose20,
	sRaichuPose21,
	sRaichuPose22,
	sRaichuPose23,
	sRaichuPose24,
	sRaichuPose28,
	sRaichuPose56,
	sRaichuPose52,
	sRaichuPose48,
	sRaichuPose44,
	sRaichuPose40,
	sRaichuPose36,
	sRaichuPose32,
	sRaichuPose90,
	sRaichuPose196,
	sRaichuPose197,
	sRaichuPose96,
	sRaichuPose98,
	sRaichuPose100,
	sRaichuPose201,
	sRaichuPose202,
	sRaichuPose1,
	sRaichuPose90,
	sRaichuPose28,
	sRaichuPose4,
	sRaichuPose92,
	sRaichuPose208,
	sRaichuPose7,
	sRaichuPose94,
	sRaichuPose36,
	sRaichuPose10,
	sRaichuPose96,
	sRaichuPose40,
	sRaichuPose13,
	sRaichuPose98,
	sRaichuPose44,
	sRaichuPose16,
	sRaichuPose100,
	sRaichuPose48,
	sRaichuPose19,
	sRaichuPose102,
	sRaichuPose52,
	sRaichuPose22,
	sRaichuPose104,
	sRaichuPose226,
	sRaichuPose109,
	sRaichuPose228,
	sRaichuPose229,
	sRaichuPose230,
	sRaichuPose133,
	sRaichuPose232,
	sRaichuPose233,
	sRaichuPose234,
	sRaichuPose1,
	sRaichuPose22,
	sRaichuPose19,
	sRaichuPose16,
	sRaichuPose13,
	sRaichuPose10,
	sRaichuPose7,
	sRaichuPose4,
};

static const struct PositionSets sAxPositionsRaichu[] = {
	[0] = { .set = { {-1, -10}, {-6, -5}, {4, -5}, {-1, -9} } },
	[1] = { .set = { {-2, -9}, {-8, -5}, {3, -6}, {-1, -8} } },
	[2] = { .set = { {0, -9}, {-5, -6}, {6, -5}, {-1, -8} } },
	[3] = { .set = { {4, -11}, {-2, -5}, {7, -7}, {0, -9} } },
	[4] = { .set = { {3, -10}, {-3, -4}, {8, -8}, {0, -8} } },
	[5] = { .set = { {5, -10}, {0, -6}, {6, -6}, {0, -8} } },
	[6] = { .set = { {6, -11}, {3, -6}, {4, -7}, {-1, -9} } },
	[7] = { .set = { {6, -10}, {1, -5}, {5, -7}, {0, -8} } },
	[8] = { .set = { {6, -10}, {5, -6}, {0, -7}, {0, -8} } },
	[9] = { .set = { {4, -12}, {5, -7}, {-3, -9}, {-2, -9} } },
	[10] = { .set = { {5, -11}, {4, -5}, {0, -8}, {-2, -8} } },
	[11] = { .set = { {3, -12}, {6, -7}, {-7, -6}, {-1, -8} } },
	[12] = { .set = { {-1, -14}, {5, -9}, {-7, -9}, {-1, -9} } },
	[13] = { .set = { {0, -13}, {5, -6}, {-6, -8}, {-1, -8} } },
	[14] = { .set = { {-2, -13}, {4, -8}, {-7, -6}, {-1, -9} } },
	[15] = { .set = { {-4, -13}, {3, -9}, {-7, -6}, {0, -9} } },
	[16] = { .set = { {-4, -11}, {4, -9}, {-8, -7}, {1, -8} } },
	[17] = { .set = { {-4, -11}, {6, -7}, {-6, -5}, {1, -8} } },
	[18] = { .set = { {-7, -11}, {-5, -7}, {-4, -6}, {0, -10} } },
	[19] = { .set = { {-8, -10}, {3, -6}, {-6, -5}, {1, -9} } },
	[20] = { .set = { {-7, -10}, {-6, -6}, {-1, -5}, {0, -9} } },
	[21] = { .set = { {-5, -11}, {-8, -7}, {1, -5}, {-1, -10} } },
	[22] = { .set = { {-6, -10}, {-7, -5}, {-1, -7}, {0, -9} } },
	[23] = { .set = { {-4, -10}, {-9, -8}, {2, -4}, {0, -9} } },
	[24] = { .set = { {-1, -10}, {-6, -5}, {4, -5}, {-1, -9} } },
	[25] = { .set = { {-2, -9}, {-8, -5}, {3, -6}, {-1, -8} } },
	[26] = { .set = { {0, -9}, {-5, -6}, {6, -5}, {-1, -8} } },
	[27] = { .set = { {-1, -13}, {-8, -11}, {6, -11}, {-1, -11} } },
	[28] = { .set = { {4, -11}, {-2, -5}, {7, -7}, {0, -9} } },
	[29] = { .set = { {3, -10}, {-3, -4}, {8, -8}, {0, -8} } },
	[30] = { .set = { {5, -10}, {0, -6}, {6, -6}, {0, -8} } },
	[31] = { .set = { {7, -11}, {12, -12}, {1, -9}, {-1, -11} } },
	[32] = { .set = { {6, -11}, {3, -6}, {4, -7}, {-1, -9} } },
	[33] = { .set = { {6, -10}, {1, -5}, {5, -7}, {0, -8} } },
	[34] = { .set = { {6, -10}, {5, -6}, {0, -7}, {0, -8} } },
	[35] = { .set = { {9, -12}, {8, -11}, {7, -10}, {-1, -12} } },
	[36] = { .set = { {4, -12}, {5, -7}, {-3, -9}, {-2, -9} } },
	[37] = { .set = { {5, -11}, {4, -5}, {0, -8}, {-2, -8} } },
	[38] = { .set = { {3, -12}, {6, -7}, {-7, -6}, {-1, -8} } },
	[39] = { .set = { {6, -17}, {-1, -15}, {9, -11}, {-1, -12} } },
	[40] = { .set = { {-1, -14}, {5, -9}, {-7, -9}, {-1, -9} } },
	[41] = { .set = { {0, -13}, {5, -6}, {-6, -8}, {-1, -8} } },
	[42] = { .set = { {-2, -13}, {4, -8}, {-7, -6}, {-1, -9} } },
	[43] = { .set = { {-1, -20}, {7, -17}, {-9, -17}, {-1, -12} } },
	[44] = { .set = { {-4, -13}, {3, -9}, {-7, -6}, {0, -9} } },
	[45] = { .set = { {-4, -11}, {4, -9}, {-8, -7}, {1, -8} } },
	[46] = { .set = { {-4, -11}, {6, -7}, {-6, -5}, {1, -8} } },
	[47] = { .set = { {-8, -17}, {-1, -15}, {-11, -11}, {-1, -12} } },
	[48] = { .set = { {-7, -11}, {-5, -7}, {-4, -6}, {0, -10} } },
	[49] = { .set = { {-8, -10}, {3, -6}, {-6, -5}, {1, -9} } },
	[50] = { .set = { {-7, -10}, {-6, -6}, {-1, -5}, {0, -9} } },
	[51] = { .set = { {-10, -12}, {-9, -11}, {-8, -10}, {0, -12} } },
	[52] = { .set = { {-5, -11}, {-8, -7}, {1, -5}, {-1, -10} } },
	[53] = { .set = { {-6, -10}, {-7, -5}, {-1, -7}, {0, -9} } },
	[54] = { .set = { {-4, -10}, {-9, -8}, {2, -4}, {0, -9} } },
	[55] = { .set = { {-8, -11}, {-13, -12}, {-2, -9}, {0, -11} } },
	[56] = { .set = { {-1, -10}, {-6, -5}, {4, -5}, {-1, -9} } },
	[57] = { .set = { {-2, -9}, {-8, -5}, {3, -6}, {-1, -8} } },
	[58] = { .set = { {0, -9}, {-5, -6}, {6, -5}, {-1, -8} } },
	[59] = { .set = { {-1, -13}, {-8, -11}, {6, -11}, {-1, -11} } },
	[60] = { .set = { {4, -11}, {-2, -5}, {7, -7}, {0, -9} } },
	[61] = { .set = { {3, -10}, {-3, -4}, {8, -8}, {0, -8} } },
	[62] = { .set = { {5, -10}, {0, -6}, {6, -6}, {0, -8} } },
	[63] = { .set = { {7, -11}, {12, -12}, {1, -9}, {-1, -11} } },
	[64] = { .set = { {6, -11}, {3, -6}, {4, -7}, {-1, -9} } },
	[65] = { .set = { {6, -10}, {1, -5}, {5, -7}, {0, -8} } },
	[66] = { .set = { {6, -10}, {5, -6}, {0, -7}, {0, -8} } },
	[67] = { .set = { {9, -12}, {8, -11}, {7, -10}, {-1, -12} } },
	[68] = { .set = { {4, -12}, {5, -7}, {-3, -9}, {-2, -9} } },
	[69] = { .set = { {5, -11}, {4, -5}, {0, -8}, {-2, -8} } },
	[70] = { .set = { {3, -12}, {6, -7}, {-7, -6}, {-1, -8} } },
	[71] = { .set = { {6, -17}, {-1, -15}, {9, -11}, {-1, -12} } },
	[72] = { .set = { {-1, -14}, {5, -9}, {-7, -9}, {-1, -9} } },
	[73] = { .set = { {0, -13}, {5, -6}, {-6, -8}, {-1, -8} } },
	[74] = { .set = { {-2, -13}, {4, -8}, {-7, -6}, {-1, -9} } },
	[75] = { .set = { {-1, -20}, {7, -17}, {-9, -17}, {-1, -12} } },
	[76] = { .set = { {-4, -13}, {3, -9}, {-7, -6}, {0, -9} } },
	[77] = { .set = { {-4, -11}, {4, -9}, {-8, -7}, {1, -8} } },
	[78] = { .set = { {-4, -11}, {6, -7}, {-6, -5}, {1, -8} } },
	[79] = { .set = { {-8, -17}, {-1, -15}, {-11, -11}, {-1, -12} } },
	[80] = { .set = { {-7, -11}, {-5, -7}, {-4, -6}, {0, -10} } },
	[81] = { .set = { {-8, -10}, {3, -6}, {-6, -5}, {1, -9} } },
	[82] = { .set = { {-7, -10}, {-6, -6}, {-1, -5}, {0, -9} } },
	[83] = { .set = { {-10, -12}, {-9, -11}, {-8, -10}, {0, -12} } },
	[84] = { .set = { {-5, -11}, {-8, -7}, {1, -5}, {-1, -10} } },
	[85] = { .set = { {-6, -10}, {-7, -5}, {-1, -7}, {0, -9} } },
	[86] = { .set = { {-4, -10}, {-9, -8}, {2, -4}, {0, -9} } },
	[87] = { .set = { {-8, -11}, {-13, -12}, {-2, -9}, {0, -11} } },
	[88] = { .set = { {-1, -10}, {-6, -5}, {4, -5}, {-1, -9} } },
	[89] = { .set = { {-1, -16}, {-9, -15}, {7, -15}, {-1, -10} } },
	[90] = { .set = { {4, -11}, {-2, -5}, {7, -7}, {0, -9} } },
	[91] = { .set = { {3, -16}, {9, -15}, {-4, -13}, {0, -11} } },
	[92] = { .set = { {6, -11}, {3, -6}, {4, -7}, {-1, -9} } },
	[93] = { .set = { {7, -19}, {3, -17}, {2, -15}, {0, -11} } },
	[94] = { .set = { {4, -12}, {5, -7}, {-3, -9}, {-2, -9} } },
	[95] = { .set = { {2, -16}, {-3, -15}, {6, -13}, {-3, -10} } },
	[96] = { .set = { {-1, -14}, {5, -9}, {-7, -9}, {-1, -9} } },
	[97] = { .set = { {-1, -22}, {7, -14}, {-9, -14}, {-1, -9} } },
	[98] = { .set = { {-4, -13}, {3, -9}, {-7, -6}, {0, -9} } },
	[99] = { .set = { {-4, -16}, {1, -15}, {-8, -13}, {1, -10} } },
	[100] = { .set = { {-7, -11}, {-5, -7}, {-4, -6}, {0, -10} } },
	[101] = { .set = { {-8, -19}, {-4, -17}, {-3, -15}, {-1, -11} } },
	[102] = { .set = { {-5, -11}, {-8, -7}, {1, -5}, {-1, -10} } },
	[103] = { .set = { {-4, -16}, {-10, -15}, {3, -13}, {-1, -11} } },
	[104] = { .set = { {-1, -10}, {-6, -5}, {4, -5}, {-1, -9} } },
	[105] = { .set = { {-1, -16}, {-9, -15}, {7, -15}, {-1, -10} } },
	[106] = { .set = { {-1, -15}, {-4, -11}, {2, -11}, {-1, -10} } },
	[107] = { .set = { {-1, -15}, {-4, -11}, {2, -11}, {-1, -10} } },
	[108] = { .set = { {-1, -15}, {-4, -11}, {2, -11}, {-1, -10} } },
	[109] = { .set = { {-1, -15}, {-4, -11}, {2, -11}, {-1, -10} } },
	[110] = { .set = { {4, -11}, {-2, -5}, {7, -7}, {0, -9} } },
	[111] = { .set = { {3, -16}, {9, -15}, {-4, -13}, {0, -11} } },
	[112] = { .set = { {3, -17}, {8, -12}, {-1, -10}, {0, -11} } },
	[113] = { .set = { {3, -17}, {8, -12}, {-1, -10}, {0, -11} } },
	[114] = { .set = { {3, -17}, {8, -12}, {-1, -10}, {0, -11} } },
	[115] = { .set = { {3, -17}, {8, -12}, {-1, -10}, {0, -11} } },
	[116] = { .set = { {6, -11}, {3, -6}, {4, -7}, {-1, -9} } },
	[117] = { .set = { {7, -19}, {3, -17}, {2, -15}, {0, -11} } },
	[118] = { .set = { {6, -20}, {7, -13}, {7, -11}, {0, -11} } },
	[119] = { .set = { {6, -20}, {7, -13}, {7, -11}, {0, -11} } },
	[120] = { .set = { {6, -20}, {7, -13}, {7, -11}, {0, -11} } },
	[121] = { .set = { {6, -20}, {7, -13}, {7, -11}, {0, -11} } },
	[122] = { .set = { {4, -12}, {5, -7}, {-3, -9}, {-2, -9} } },
	[123] = { .set = { {2, -16}, {-3, -15}, {6, -13}, {-3, -10} } },
	[124] = { .set = { {2, -16}, {-3, -15}, {6, -12}, {-3, -10} } },
	[125] = { .set = { {2, -16}, {-3, -15}, {6, -12}, {-3, -10} } },
	[126] = { .set = { {2, -16}, {-3, -15}, {6, -12}, {-3, -10} } },
	[127] = { .set = { {2, -16}, {-3, -15}, {6, -12}, {-3, -10} } },
	[128] = { .set = { {-1, -14}, {5, -9}, {-7, -9}, {-1, -9} } },
	[129] = { .set = { {-1, -22}, {7, -14}, {-9, -14}, {-1, -9} } },
	[130] = { .set = { {-1, -22}, {7, -13}, {-9, -13}, {-1, -8} } },
	[131] = { .set = { {-1, -22}, {7, -13}, {-9, -13}, {-1, -8} } },
	[132] = { .set = { {-1, -22}, {7, -13}, {-9, -13}, {-1, -8} } },
	[133] = { .set = { {-1, -22}, {7, -13}, {-9, -13}, {-1, -8} } },
	[134] = { .set = { {-4, -13}, {3, -9}, {-7, -6}, {0, -9} } },
	[135] = { .set = { {-4, -16}, {1, -15}, {-8, -13}, {1, -10} } },
	[136] = { .set = { {-4, -16}, {1, -15}, {-8, -12}, {1, -10} } },
	[137] = { .set = { {-4, -16}, {1, -15}, {-8, -12}, {1, -10} } },
	[138] = { .set = { {-4, -16}, {1, -15}, {-8, -12}, {1, -10} } },
	[139] = { .set = { {-4, -16}, {1, -15}, {-8, -12}, {1, -10} } },
	[140] = { .set = { {-7, -11}, {-5, -7}, {-4, -6}, {0, -10} } },
	[141] = { .set = { {-8, -19}, {-4, -17}, {-3, -15}, {-1, -11} } },
	[142] = { .set = { {-7, -20}, {-8, -13}, {-8, -11}, {-1, -11} } },
	[143] = { .set = { {-7, -20}, {-8, -13}, {-8, -11}, {-1, -11} } },
	[144] = { .set = { {-7, -20}, {-8, -13}, {-8, -11}, {-1, -11} } },
	[145] = { .set = { {-7, -20}, {-8, -13}, {-8, -11}, {-1, -11} } },
	[146] = { .set = { {-5, -11}, {-8, -7}, {1, -5}, {-1, -10} } },
	[147] = { .set = { {-4, -16}, {-10, -15}, {3, -13}, {-1, -11} } },
	[148] = { .set = { {-4, -17}, {-9, -12}, {0, -10}, {-1, -11} } },
	[149] = { .set = { {-4, -17}, {-9, -12}, {0, -10}, {-1, -11} } },
	[150] = { .set = { {-4, -17}, {-9, -12}, {0, -10}, {-1, -11} } },
	[151] = { .set = { {-4, -17}, {-9, -12}, {0, -10}, {-1, -11} } },
	[152] = { .set = { {-3, -8}, {-6, -4}, {0, -3}, {0, -7} } },
	[153] = { .set = { {-5, -7}, {-6, -3}, {-1, -2}, {-1, -6} } },
	[154] = { .set = { {-1, -8}, {-8, -12}, {6, -12}, {-1, -9} } },
	[155] = { .set = { {2, -7}, {5, -14}, {-4, -12}, {-2, -8} } },
	[156] = { .set = { {2, -8}, {-2, -16}, {-3, -12}, {-5, -7} } },
	[157] = { .set = { {1, -9}, {-7, -13}, {4, -11}, {-3, -7} } },
	[158] = { .set = { {0, -10}, {8, -12}, {-8, -12}, {0, -9} } },
	[159] = { .set = { {-2, -9}, {6, -13}, {-5, -11}, {2, -7} } },
	[160] = { .set = { {-3, -8}, {1, -16}, {2, -12}, {4, -7} } },
	[161] = { .set = { {-3, -7}, {-6, -14}, {3, -12}, {1, -8} } },
	[162] = { .set = { {-1, -10}, {-6, -5}, {4, -5}, {-1, -9} } },
	[163] = { .set = { {-2, -9}, {-8, -5}, {3, -6}, {-1, -8} } },
	[164] = { .set = { {0, -9}, {-5, -6}, {6, -5}, {-1, -8} } },
	[165] = { .set = { {4, -11}, {-2, -5}, {7, -7}, {0, -9} } },
	[166] = { .set = { {3, -10}, {-3, -4}, {8, -8}, {0, -8} } },
	[167] = { .set = { {5, -10}, {0, -6}, {6, -6}, {0, -8} } },
	[168] = { .set = { {6, -11}, {3, -6}, {4, -7}, {-1, -9} } },
	[169] = { .set = { {6, -10}, {1, -5}, {5, -7}, {0, -8} } },
	[170] = { .set = { {6, -10}, {5, -6}, {0, -7}, {0, -8} } },
	[171] = { .set = { {4, -12}, {5, -7}, {-3, -9}, {-2, -9} } },
	[172] = { .set = { {5, -11}, {4, -5}, {0, -8}, {-2, -8} } },
	[173] = { .set = { {3, -12}, {6, -7}, {-7, -6}, {-1, -8} } },
	[174] = { .set = { {-1, -14}, {5, -9}, {-7, -9}, {-1, -9} } },
	[175] = { .set = { {0, -13}, {5, -6}, {-6, -8}, {-1, -8} } },
	[176] = { .set = { {-2, -13}, {4, -8}, {-7, -6}, {-1, -9} } },
	[177] = { .set = { {-4, -13}, {3, -9}, {-7, -6}, {0, -9} } },
	[178] = { .set = { {-4, -11}, {4, -9}, {-8, -7}, {1, -8} } },
	[179] = { .set = { {-4, -11}, {6, -7}, {-6, -5}, {1, -8} } },
	[180] = { .set = { {-7, -11}, {-5, -7}, {-4, -6}, {0, -10} } },
	[181] = { .set = { {-8, -10}, {3, -6}, {-6, -5}, {1, -9} } },
	[182] = { .set = { {-7, -10}, {-6, -6}, {-1, -5}, {0, -9} } },
	[183] = { .set = { {-5, -11}, {-8, -7}, {1, -5}, {-1, -10} } },
	[184] = { .set = { {-6, -10}, {-7, -5}, {-1, -7}, {0, -9} } },
	[185] = { .set = { {-4, -10}, {-9, -8}, {2, -4}, {0, -9} } },
	[186] = { .set = { {-1, -13}, {-8, -11}, {6, -11}, {-1, -11} } },
	[187] = { .set = { {-8, -11}, {-13, -12}, {-2, -9}, {0, -11} } },
	[188] = { .set = { {-10, -12}, {-9, -11}, {-8, -10}, {0, -12} } },
	[189] = { .set = { {-8, -17}, {-1, -15}, {-11, -11}, {-1, -12} } },
	[190] = { .set = { {-1, -20}, {7, -17}, {-9, -17}, {-1, -12} } },
	[191] = { .set = { {6, -17}, {-1, -15}, {9, -11}, {-1, -12} } },
	[192] = { .set = { {9, -12}, {8, -11}, {7, -10}, {-1, -12} } },
	[193] = { .set = { {7, -11}, {12, -12}, {1, -9}, {-1, -11} } },
	[194] = { .set = { {-1, -16}, {-9, -15}, {7, -15}, {-1, -10} } },
	[195] = { .set = { {2, -16}, {8, -15}, {-5, -13}, {-1, -11} } },
	[196] = { .set = { {5, -19}, {1, -17}, {0, -15}, {-2, -11} } },
	[197] = { .set = { {2, -16}, {-3, -15}, {6, -13}, {-3, -10} } },
	[198] = { .set = { {-1, -22}, {7, -14}, {-9, -14}, {-1, -9} } },
	[199] = { .set = { {-4, -16}, {1, -15}, {-8, -13}, {1, -10} } },
	[200] = { .set = { {-6, -19}, {-2, -17}, {-1, -15}, {1, -11} } },
	[201] = { .set = { {-3, -16}, {-9, -15}, {4, -13}, {0, -11} } },
	[202] = { .set = { {-1, -10}, {-6, -5}, {4, -5}, {-1, -9} } },
	[203] = { .set = { {-1, -16}, {-9, -15}, {7, -15}, {-1, -10} } },
	[204] = { .set = { {-1, -13}, {-8, -11}, {6, -11}, {-1, -11} } },
	[205] = { .set = { {4, -11}, {-2, -5}, {7, -7}, {0, -9} } },
	[206] = { .set = { {3, -16}, {9, -15}, {-4, -13}, {0, -11} } },
	[207] = { .set = { {6, -11}, {11, -12}, {0, -9}, {-2, -11} } },
	[208] = { .set = { {6, -11}, {3, -6}, {4, -7}, {-1, -9} } },
	[209] = { .set = { {7, -19}, {3, -17}, {2, -15}, {0, -11} } },
	[210] = { .set = { {9, -12}, {8, -11}, {7, -10}, {-1, -12} } },
	[211] = { .set = { {4, -12}, {5, -7}, {-3, -9}, {-2, -9} } },
	[212] = { .set = { {2, -16}, {-3, -15}, {6, -13}, {-3, -10} } },
	[213] = { .set = { {6, -17}, {-1, -15}, {9, -11}, {-1, -12} } },
	[214] = { .set = { {-1, -14}, {5, -9}, {-7, -9}, {-1, -9} } },
	[215] = { .set = { {-1, -22}, {7, -14}, {-9, -14}, {-1, -9} } },
	[216] = { .set = { {-1, -20}, {7, -17}, {-9, -17}, {-1, -12} } },
	[217] = { .set = { {-4, -13}, {3, -9}, {-7, -6}, {0, -9} } },
	[218] = { .set = { {-4, -16}, {1, -15}, {-8, -13}, {1, -10} } },
	[219] = { .set = { {-8, -17}, {-1, -15}, {-11, -11}, {-1, -12} } },
	[220] = { .set = { {-7, -11}, {-5, -7}, {-4, -6}, {0, -10} } },
	[221] = { .set = { {-8, -19}, {-4, -17}, {-3, -15}, {-1, -11} } },
	[222] = { .set = { {-10, -12}, {-9, -11}, {-8, -10}, {0, -12} } },
	[223] = { .set = { {-5, -11}, {-8, -7}, {1, -5}, {-1, -10} } },
	[224] = { .set = { {-4, -16}, {-10, -15}, {3, -13}, {-1, -11} } },
	[225] = { .set = { {-7, -11}, {-12, -12}, {-1, -9}, {1, -11} } },
	[226] = { .set = { {-1, -15}, {-4, -11}, {2, -11}, {-1, -10} } },
	[227] = { .set = { {-3, -17}, {-8, -12}, {1, -10}, {0, -11} } },
	[228] = { .set = { {-6, -20}, {-7, -13}, {-7, -11}, {0, -11} } },
	[229] = { .set = { {-5, -16}, {0, -15}, {-9, -12}, {0, -10} } },
	[230] = { .set = { {-1, -22}, {7, -13}, {-9, -13}, {-1, -8} } },
	[231] = { .set = { {3, -16}, {-2, -15}, {7, -12}, {-2, -10} } },
	[232] = { .set = { {5, -20}, {6, -13}, {6, -11}, {-1, -11} } },
	[233] = { .set = { {2, -17}, {7, -12}, {-2, -10}, {-1, -11} } },
	[234] = { .set = { {-1, -10}, {-6, -5}, {4, -5}, {-1, -9} } },
	[235] = { .set = { {-5, -11}, {-8, -7}, {1, -5}, {-1, -10} } },
	[236] = { .set = { {-7, -11}, {-5, -7}, {-4, -6}, {0, -10} } },
	[237] = { .set = { {-4, -13}, {3, -9}, {-7, -6}, {0, -9} } },
	[238] = { .set = { {-1, -14}, {5, -9}, {-7, -9}, {-1, -9} } },
	[239] = { .set = { {4, -12}, {5, -7}, {-3, -9}, {-2, -9} } },
	[240] = { .set = { {6, -11}, {3, -6}, {4, -7}, {-1, -9} } },
	[241] = { .set = { {4, -11}, {-2, -5}, {7, -7}, {0, -9} } },
};

static const ax_anim *const sRaichuAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sRaichuAnimTable2[] = {
	AX_ANIM_PTR(sRaichuAnims_2_1),
	AX_ANIM_PTR(sRaichuAnims_2_2),
	AX_ANIM_PTR(sRaichuAnims_2_3),
	AX_ANIM_PTR(sRaichuAnims_2_4),
	AX_ANIM_PTR(sRaichuAnims_2_5),
	AX_ANIM_PTR(sRaichuAnims_2_6),
	AX_ANIM_PTR(sRaichuAnims_2_7),
	AX_ANIM_PTR(sRaichuAnims_2_8),
};

static const ax_anim *const sRaichuAnimTable3[] = {
	AX_ANIM_PTR(sRaichuAnims_3_1),
	AX_ANIM_PTR(sRaichuAnims_3_2),
	AX_ANIM_PTR(sRaichuAnims_3_3),
	AX_ANIM_PTR(sRaichuAnims_3_4),
	AX_ANIM_PTR(sRaichuAnims_3_5),
	AX_ANIM_PTR(sRaichuAnims_3_6),
	AX_ANIM_PTR(sRaichuAnims_3_7),
	AX_ANIM_PTR(sRaichuAnims_3_8),
};

static const ax_anim *const sRaichuAnimTable4[] = {
	AX_ANIM_PTR(sRaichuAnims_4_1),
	AX_ANIM_PTR(sRaichuAnims_4_2),
	AX_ANIM_PTR(sRaichuAnims_4_3),
	AX_ANIM_PTR(sRaichuAnims_4_4),
	AX_ANIM_PTR(sRaichuAnims_4_5),
	AX_ANIM_PTR(sRaichuAnims_4_6),
	AX_ANIM_PTR(sRaichuAnims_4_7),
	AX_ANIM_PTR(sRaichuAnims_4_8),
};

static const ax_anim *const sRaichuAnimTable5[] = {
	AX_ANIM_PTR(sRaichuAnims_5_1),
	AX_ANIM_PTR(sRaichuAnims_5_2),
	AX_ANIM_PTR(sRaichuAnims_5_3),
	AX_ANIM_PTR(sRaichuAnims_5_4),
	AX_ANIM_PTR(sRaichuAnims_5_5),
	AX_ANIM_PTR(sRaichuAnims_5_6),
	AX_ANIM_PTR(sRaichuAnims_5_7),
	AX_ANIM_PTR(sRaichuAnims_5_8),
};

static const ax_anim *const sRaichuAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
};

static const ax_anim *const sRaichuAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00604),
	AX_ANIM_PTR(gAxSharedAnim_00615),
	AX_ANIM_PTR(gAxSharedAnim_00624),
	AX_ANIM_PTR(gAxSharedAnim_00635),
	AX_ANIM_PTR(gAxSharedAnim_00652),
	AX_ANIM_PTR(gAxSharedAnim_00663),
	AX_ANIM_PTR(gAxSharedAnim_00678),
	AX_ANIM_PTR(gAxSharedAnim_00689),
};

static const ax_anim *const sRaichuAnimTable8[] = {
	AX_ANIM_PTR(sRaichuAnims_8_1),
	AX_ANIM_PTR(sRaichuAnims_8_2),
	AX_ANIM_PTR(sRaichuAnims_8_3),
	AX_ANIM_PTR(sRaichuAnims_8_4),
	AX_ANIM_PTR(sRaichuAnims_8_5),
	AX_ANIM_PTR(sRaichuAnims_8_6),
	AX_ANIM_PTR(sRaichuAnims_8_7),
	AX_ANIM_PTR(sRaichuAnims_8_8),
};

static const ax_anim *const sRaichuAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_01011),
	AX_ANIM_PTR(sRaichuAnims_9_2),
	AX_ANIM_PTR(sRaichuAnims_9_3),
	AX_ANIM_PTR(sRaichuAnims_9_4),
	AX_ANIM_PTR(sRaichuAnims_9_5),
	AX_ANIM_PTR(sRaichuAnims_9_6),
	AX_ANIM_PTR(sRaichuAnims_9_7),
	AX_ANIM_PTR(sRaichuAnims_9_8),
};

static const ax_anim *const sRaichuAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01143),
	AX_ANIM_PTR(gAxSharedAnim_01156),
	AX_ANIM_PTR(gAxSharedAnim_01167),
	AX_ANIM_PTR(gAxSharedAnim_01178),
	AX_ANIM_PTR(gAxSharedAnim_01189),
	AX_ANIM_PTR(gAxSharedAnim_01200),
	AX_ANIM_PTR(gAxSharedAnim_01217),
	AX_ANIM_PTR(gAxSharedAnim_01228),
};

static const ax_anim *const sRaichuAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01239),
	AX_ANIM_PTR(gAxSharedAnim_01275),
	AX_ANIM_PTR(gAxSharedAnim_01311),
	AX_ANIM_PTR(gAxSharedAnim_01343),
	AX_ANIM_PTR(gAxSharedAnim_01371),
	AX_ANIM_PTR(gAxSharedAnim_01405),
	AX_ANIM_PTR(gAxSharedAnim_01434),
	AX_ANIM_PTR(gAxSharedAnim_01453),
};

static const ax_anim *const sRaichuAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01472),
	AX_ANIM_PTR(gAxSharedAnim_01521),
	AX_ANIM_PTR(gAxSharedAnim_01507),
	AX_ANIM_PTR(gAxSharedAnim_01500),
	AX_ANIM_PTR(gAxSharedAnim_01499),
	AX_ANIM_PTR(gAxSharedAnim_01491),
	AX_ANIM_PTR(gAxSharedAnim_01481),
	AX_ANIM_PTR(gAxSharedAnim_01473),
};

static const ax_anim *const sRaichuAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01525),
	AX_ANIM_PTR(gAxSharedAnim_01579),
	AX_ANIM_PTR(gAxSharedAnim_01577),
	AX_ANIM_PTR(gAxSharedAnim_01555),
	AX_ANIM_PTR(gAxSharedAnim_01549),
	AX_ANIM_PTR(gAxSharedAnim_01544),
	AX_ANIM_PTR(gAxSharedAnim_01539),
	AX_ANIM_PTR(gAxSharedAnim_01531),
};

static const ax_anim *const *const sAxAnimationsRaichu[] = {
	sRaichuAnimTable1,
	sRaichuAnimTable2,
	sRaichuAnimTable3,
	sRaichuAnimTable4,
	sRaichuAnimTable5,
	sRaichuAnimTable6,
	sRaichuAnimTable7,
	sRaichuAnimTable8,
	sRaichuAnimTable9,
	sRaichuAnimTable10,
	sRaichuAnimTable11,
	sRaichuAnimTable12,
	sRaichuAnimTable13,
};

static const ax_sprite *const sAxSpritesRaichu[] = {
	sRaichuSprites1,
	sRaichuSprites2,
	sRaichuSprites3,
	sRaichuSprites4,
	sRaichuSprites5,
	sRaichuSprites6,
	sRaichuSprites7,
	sRaichuSprites8,
	sRaichuSprites9,
	sRaichuSprites10,
	sRaichuSprites11,
	sRaichuSprites12,
	sRaichuSprites13,
	sRaichuSprites14,
	sRaichuSprites15,
	sRaichuSprites16,
	sRaichuSprites17,
	sRaichuSprites18,
	sRaichuSprites19,
	sRaichuSprites20,
	sRaichuSprites21,
	sRaichuSprites22,
	sRaichuSprites23,
	sRaichuSprites24,
	sRaichuSprites25,
	sRaichuSprites26,
	sRaichuSprites27,
	sRaichuSprites28,
	sRaichuSprites29,
	sRaichuSprites30,
	sRaichuSprites31,
	sRaichuSprites32,
	sRaichuSprites33,
	sRaichuSprites34,
	sRaichuSprites35,
	sRaichuSprites36,
	sRaichuSprites37,
	sRaichuSprites38,
	sRaichuSprites39,
	sRaichuSprites40,
	sRaichuSprites41,
	sRaichuSprites42,
	sRaichuSprites43,
	sRaichuSprites44,
	sRaichuSprites45,
	sRaichuSprites46,
	sRaichuSprites47,
	sRaichuSprites48,
	sRaichuSprites49,
	sRaichuSprites50,
	sRaichuSprites51,
	sRaichuSprites52,
	sRaichuSprites53,
	sRaichuSprites54,
	sRaichuSprites55,
	sRaichuSprites56,
	sRaichuSprites57,
	sRaichuSprites58,
	sRaichuSprites59,
	sRaichuSprites60,
	sRaichuSprites61,
	sRaichuSprites62,
	sRaichuSprites63,
	sRaichuSprites64,
	sRaichuSprites65,
	sRaichuSprites66,
	sRaichuSprites67,
	sRaichuSprites68,
	sRaichuSprites69,
	sRaichuSprites70,
	sRaichuSprites71,
	sRaichuSprites72,
	sRaichuSprites73,
	sRaichuSprites74,
	sRaichuSprites75,
	sRaichuSprites76,
	sRaichuSprites77,
	sRaichuSprites78,
	sRaichuSprites79,
	sRaichuSprites80,
	sRaichuSprites81,
	sRaichuSprites82,
	sRaichuSprites83,
	sRaichuSprites84,
	sRaichuSprites85,
	sRaichuSprites86,
	sRaichuSprites87,
	sRaichuSprites88,
	sRaichuSprites89,
	sRaichuSprites90,
};

static const axmain sAxMainRaichu = {
	.poses = sAxPosesRaichu,
	.animations = sAxAnimationsRaichu,
	.animCount = ARRAY_COUNT(sAxAnimationsRaichu),
	.spriteData = sAxSpritesRaichu,
	.positions = sAxPositionsRaichu,
};
