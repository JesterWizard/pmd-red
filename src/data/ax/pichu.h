/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainPichu;
const SiroArchive gAxPichu = {"SIRO", &sAxMainPichu};

static const ax_pose sPichuPose1[] = {
	AX_POSE(0, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose4[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose5[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose8[] = {
	AX_POSE(7, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose9[] = {
	AX_POSE(8, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose10[] = {
	AX_POSE(9, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose12[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose13[] = {
	AX_POSE(12, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose14[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose15[] = {
	AX_POSE(14, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose16[] = {
	AX_POSE(9, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose18[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose19[] = {
	AX_POSE(6, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose20[] = {
	AX_POSE(7, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose22[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose23[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose24[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose28[] = {
	AX_POSE(15, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose32[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose36[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose40[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose44[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose48[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose52[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose56[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose90[] = {
	AX_POSE(20, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(15, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose91[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose93[] = {
	AX_POSE(22, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose95[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose96[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose98[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose100[] = {
	AX_POSE(26, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose101[] = {
	AX_POSE(21, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose103[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose105[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose106[] = {
	AX_POSE(24, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose108[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose110[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose111[] = {
	AX_POSE(21, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose113[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose115[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose116[] = {
	AX_POSE(24, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose118[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose120[] = {
	AX_POSE(26, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose121[] = {
	AX_POSE(21, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose123[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose125[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose126[] = {
	AX_POSE(24, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose128[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose129[] = {
	AX_POSE(32, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose130[] = {
	AX_POSE(33, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose131[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose132[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose133[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose134[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose135[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose136[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose137[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose138[] = {
	AX_POSE(41, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose139[] = {
	AX_POSE(42, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose140[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose141[] = {
	AX_POSE(44, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose142[] = {
	AX_POSE(45, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose143[] = {
	AX_POSE(46, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose144[] = {
	AX_POSE(41, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose145[] = {
	AX_POSE(42, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose146[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose147[] = {
	AX_POSE(38, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose148[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose149[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose150[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose151[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose152[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose153[] = {
	AX_POSE(47, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose154[] = {
	AX_POSE(48, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose155[] = {
	AX_POSE(49, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose156[] = {
	AX_POSE(50, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose157[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose158[] = {
	AX_POSE(52, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose159[] = {
	AX_POSE(53, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose160[] = {
	AX_POSE(52, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose161[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose162[] = {
	AX_POSE(50, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose188[] = {
	AX_POSE(36, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose189[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose190[] = {
	AX_POSE(42, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose191[] = {
	AX_POSE(45, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose193[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose197[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose200[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose201[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose202[] = {
	AX_POSE(16, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose218[] = {
	AX_POSE(9, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose219[] = {
	AX_POSE(10, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose220[] = {
	AX_POSE(11, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose221[] = {
	AX_POSE(6, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose222[] = {
	AX_POSE(7, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose223[] = {
	AX_POSE(8, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose224[] = {
	AX_POSE(3, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose225[] = {
	AX_POSE(4, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPichuPose226[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 0)),
	AX_POSE_TERMINATOR
};
static const u8 sPichuAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_1_1.lz");
static const u8 sPichuAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_1_2.lz");
static const u8 sPichuAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_1_3.lz");
static const u8 sPichuAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_1_4.lz");
static const u8 sPichuAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_1_5.lz");
static const u8 sPichuAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_1_6.lz");
static const u8 sPichuAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_1_7.lz");
static const u8 sPichuAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_1_8.lz");
static const u8 sPichuAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_2_2.lz");
static const u8 sPichuAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_2_3.lz");
static const u8 sPichuAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_2_4.lz");
static const u8 sPichuAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_2_6.lz");
static const u8 sPichuAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_2_7.lz");
static const u8 sPichuAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_2_8.lz");
static const u8 sPichuAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_3_1.lz");
static const u8 sPichuAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_3_2.lz");
static const u8 sPichuAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_3_3.lz");
static const u8 sPichuAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_3_4.lz");
static const u8 sPichuAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_3_6.lz");
static const u8 sPichuAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_3_7.lz");
static const u8 sPichuAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_3_8.lz");
static const u8 sPichuAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_4_1.lz");
static const u8 sPichuAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_4_2.lz");
static const u8 sPichuAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_4_3.lz");
static const u8 sPichuAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_4_4.lz");
static const u8 sPichuAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_4_5.lz");
static const u8 sPichuAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_4_6.lz");
static const u8 sPichuAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_4_7.lz");
static const u8 sPichuAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_4_8.lz");
static const u8 sPichuAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_5_1.lz");
static const u8 sPichuAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_5_2.lz");
static const u8 sPichuAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_5_3.lz");
static const u8 sPichuAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_5_4.lz");
static const u8 sPichuAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_5_5.lz");
static const u8 sPichuAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_5_6.lz");
static const u8 sPichuAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_5_7.lz");
static const u8 sPichuAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_5_8.lz");
static const u8 sPichuAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_8_1.lz");
static const u8 sPichuAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_8_2.lz");
static const u8 sPichuAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_8_3.lz");
static const u8 sPichuAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_8_4.lz");
static const u8 sPichuAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_8_5.lz");
static const u8 sPichuAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_8_6.lz");
static const u8 sPichuAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_8_7.lz");
static const u8 sPichuAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_8_8.lz");
static const u8 sPichuAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_9_1.lz");
static const u8 sPichuAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_9_2.lz");
static const u8 sPichuAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_9_3.lz");
static const u8 sPichuAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_9_4.lz");
static const u8 sPichuAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_9_5.lz");
static const u8 sPichuAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_9_6.lz");
static const u8 sPichuAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_9_7.lz");
static const u8 sPichuAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_9_8.lz");
static const u8 sPichuAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_11_1.lz");
static const u8 sPichuAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_11_3.lz");
static const u8 sPichuAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_11_4.lz");
static const u8 sPichuAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_11_5.lz");
static const u8 sPichuAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_11_6.lz");
static const u8 sPichuAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/pichu/sPichuAnims_11_7.lz");

static const u8 sPichuGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_1.4bpp.lz");
static const ax_sprite sPichuSprites1[] = {
	{sPichuGfx1, ARRAY_COUNT(sPichuGfx1)}, 
	{NULL, 0}
};
static const u8 sPichuGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_2.4bpp.lz");
static const ax_sprite sPichuSprites2[] = {
	{sPichuGfx2, ARRAY_COUNT(sPichuGfx2)}, 
	{NULL, 0}
};
static const u8 sPichuGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_3.4bpp.lz");
static const ax_sprite sPichuSprites3[] = {
	{sPichuGfx3, ARRAY_COUNT(sPichuGfx3)}, 
	{NULL, 0}
};
static const u8 sPichuGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_4.4bpp.lz");
static const ax_sprite sPichuSprites4[] = {
	{sPichuGfx4, ARRAY_COUNT(sPichuGfx4)}, 
	{NULL, 0}
};
static const u8 sPichuGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_5.4bpp.lz");
static const ax_sprite sPichuSprites5[] = {
	{sPichuGfx5, ARRAY_COUNT(sPichuGfx5)}, 
	{NULL, 0}
};
static const u8 sPichuGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_6.4bpp.lz");
static const ax_sprite sPichuSprites6[] = {
	{sPichuGfx6, ARRAY_COUNT(sPichuGfx6)}, 
	{NULL, 0}
};
static const u8 sPichuGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_7.4bpp.lz");
static const ax_sprite sPichuSprites7[] = {
	{sPichuGfx7, ARRAY_COUNT(sPichuGfx7)}, 
	{NULL, 0}
};
static const u8 sPichuGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_8.4bpp.lz");
static const ax_sprite sPichuSprites8[] = {
	{sPichuGfx8, ARRAY_COUNT(sPichuGfx8)}, 
	{NULL, 0}
};
static const u8 sPichuGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_9.4bpp.lz");
static const ax_sprite sPichuSprites9[] = {
	{sPichuGfx9, ARRAY_COUNT(sPichuGfx9)}, 
	{NULL, 0}
};
static const u8 sPichuGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_10.4bpp.lz");
static const ax_sprite sPichuSprites10[] = {
	{sPichuGfx10, ARRAY_COUNT(sPichuGfx10)}, 
	{NULL, 0}
};
static const u8 sPichuGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_11.4bpp.lz");
static const ax_sprite sPichuSprites11[] = {
	{sPichuGfx11, ARRAY_COUNT(sPichuGfx11)}, 
	{NULL, 0}
};
static const u8 sPichuGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_12.4bpp.lz");
static const ax_sprite sPichuSprites12[] = {
	{sPichuGfx12, ARRAY_COUNT(sPichuGfx12)}, 
	{NULL, 0}
};
static const u8 sPichuGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_13.4bpp.lz");
static const ax_sprite sPichuSprites13[] = {
	{sPichuGfx13, ARRAY_COUNT(sPichuGfx13)}, 
	{NULL, 0}
};
static const u8 sPichuGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_14.4bpp.lz");
static const ax_sprite sPichuSprites14[] = {
	{sPichuGfx14, ARRAY_COUNT(sPichuGfx14)}, 
	{NULL, 0}
};
static const u8 sPichuGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_15.4bpp.lz");
static const ax_sprite sPichuSprites15[] = {
	{sPichuGfx15, ARRAY_COUNT(sPichuGfx15)}, 
	{NULL, 0}
};
static const u8 sPichuGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_16.4bpp.lz");
static const u8 sPichuGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_16_1.4bpp.lz");
static const u8 sPichuGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_16_2.4bpp.lz");
static const ax_sprite sPichuSprites16[] = {
	{NULL, 128}, 
	{sPichuGfx16, ARRAY_COUNT(sPichuGfx16)}, 
	{NULL, 32}, 
	{sPichuGfx16_1, ARRAY_COUNT(sPichuGfx16_1)}, 
	{NULL, 32}, 
	{sPichuGfx16_2, ARRAY_COUNT(sPichuGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_17.4bpp.lz");
static const u8 sPichuGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_17_1.4bpp.lz");
static const u8 sPichuGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_17_2.4bpp.lz");
static const ax_sprite sPichuSprites17[] = {
	{sPichuGfx17, ARRAY_COUNT(sPichuGfx17)}, 
	{NULL, 64}, 
	{sPichuGfx17_1, ARRAY_COUNT(sPichuGfx17_1)}, 
	{NULL, 64}, 
	{sPichuGfx17_2, ARRAY_COUNT(sPichuGfx17_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPichuGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_18.4bpp.lz");
static const u8 sPichuGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_18_1.4bpp.lz");
static const u8 sPichuGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_18_2.4bpp.lz");
static const u8 sPichuGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_18_3.4bpp.lz");
static const ax_sprite sPichuSprites18[] = {
	{NULL, 32}, 
	{sPichuGfx18, ARRAY_COUNT(sPichuGfx18)}, 
	{NULL, 64}, 
	{sPichuGfx18_1, ARRAY_COUNT(sPichuGfx18_1)}, 
	{NULL, 64}, 
	{sPichuGfx18_2, ARRAY_COUNT(sPichuGfx18_2)}, 
	{NULL, 32}, 
	{sPichuGfx18_3, ARRAY_COUNT(sPichuGfx18_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_19.4bpp.lz");
static const u8 sPichuGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_19_1.4bpp.lz");
static const u8 sPichuGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_19_2.4bpp.lz");
static const u8 sPichuGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_19_3.4bpp.lz");
static const ax_sprite sPichuSprites19[] = {
	{NULL, 32}, 
	{sPichuGfx19, ARRAY_COUNT(sPichuGfx19)}, 
	{NULL, 64}, 
	{sPichuGfx19_1, ARRAY_COUNT(sPichuGfx19_1)}, 
	{NULL, 64}, 
	{sPichuGfx19_2, ARRAY_COUNT(sPichuGfx19_2)}, 
	{NULL, 64}, 
	{sPichuGfx19_3, ARRAY_COUNT(sPichuGfx19_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_20.4bpp.lz");
static const u8 sPichuGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_20_1.4bpp.lz");
static const u8 sPichuGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_20_2.4bpp.lz");
static const ax_sprite sPichuSprites20[] = {
	{NULL, 128}, 
	{sPichuGfx20, ARRAY_COUNT(sPichuGfx20)}, 
	{NULL, 32}, 
	{sPichuGfx20_1, ARRAY_COUNT(sPichuGfx20_1)}, 
	{NULL, 64}, 
	{sPichuGfx20_2, ARRAY_COUNT(sPichuGfx20_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_21.4bpp.lz");
static const u8 sPichuGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_21_1.4bpp.lz");
static const ax_sprite sPichuSprites21[] = {
	{NULL, 32}, 
	{sPichuGfx21, ARRAY_COUNT(sPichuGfx21)}, 
	{NULL, 32}, 
	{sPichuGfx21_1, ARRAY_COUNT(sPichuGfx21_1)}, 
	{NULL, 0}
};
static const u8 sPichuGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_22.4bpp.lz");
static const u8 sPichuGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_22_1.4bpp.lz");
static const ax_sprite sPichuSprites22[] = {
	{sPichuGfx22, ARRAY_COUNT(sPichuGfx22)}, 
	{NULL, 64}, 
	{sPichuGfx22_1, ARRAY_COUNT(sPichuGfx22_1)}, 
	{NULL, 0}
};
static const u8 sPichuGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_23.4bpp.lz");
static const u8 sPichuGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_23_1.4bpp.lz");
static const u8 sPichuGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_23_2.4bpp.lz");
static const ax_sprite sPichuSprites23[] = {
	{NULL, 128}, 
	{sPichuGfx23, ARRAY_COUNT(sPichuGfx23)}, 
	{NULL, 32}, 
	{sPichuGfx23_1, ARRAY_COUNT(sPichuGfx23_1)}, 
	{NULL, 32}, 
	{sPichuGfx23_2, ARRAY_COUNT(sPichuGfx23_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_24.4bpp.lz");
static const ax_sprite sPichuSprites24[] = {
	{NULL, 32}, 
	{sPichuGfx24, ARRAY_COUNT(sPichuGfx24)}, 
	{NULL, 0}
};
static const u8 sPichuGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_25.4bpp.lz");
static const u8 sPichuGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_25_1.4bpp.lz");
static const ax_sprite sPichuSprites25[] = {
	{sPichuGfx25, ARRAY_COUNT(sPichuGfx25)}, 
	{NULL, 64}, 
	{sPichuGfx25_1, ARRAY_COUNT(sPichuGfx25_1)}, 
	{NULL, 0}
};
static const u8 sPichuGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_26.4bpp.lz");
static const u8 sPichuGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_26_1.4bpp.lz");
static const u8 sPichuGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_26_2.4bpp.lz");
static const ax_sprite sPichuSprites26[] = {
	{sPichuGfx26, ARRAY_COUNT(sPichuGfx26)}, 
	{NULL, 64}, 
	{sPichuGfx26_1, ARRAY_COUNT(sPichuGfx26_1)}, 
	{NULL, 64}, 
	{sPichuGfx26_2, ARRAY_COUNT(sPichuGfx26_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPichuGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_27.4bpp.lz");
static const ax_sprite sPichuSprites27[] = {
	{sPichuGfx27, ARRAY_COUNT(sPichuGfx27)}, 
	{NULL, 0}
};
static const u8 sPichuGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_28.4bpp.lz");
static const u8 sPichuGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_28_1.4bpp.lz");
static const u8 sPichuGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_28_2.4bpp.lz");
static const u8 sPichuGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_28_3.4bpp.lz");
static const ax_sprite sPichuSprites28[] = {
	{NULL, 32}, 
	{sPichuGfx28, ARRAY_COUNT(sPichuGfx28)}, 
	{NULL, 64}, 
	{sPichuGfx28_1, ARRAY_COUNT(sPichuGfx28_1)}, 
	{NULL, 64}, 
	{sPichuGfx28_2, ARRAY_COUNT(sPichuGfx28_2)}, 
	{NULL, 32}, 
	{sPichuGfx28_3, ARRAY_COUNT(sPichuGfx28_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_29.4bpp.lz");
static const u8 sPichuGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_29_1.4bpp.lz");
static const ax_sprite sPichuSprites29[] = {
	{sPichuGfx29, ARRAY_COUNT(sPichuGfx29)}, 
	{NULL, 32}, 
	{sPichuGfx29_1, ARRAY_COUNT(sPichuGfx29_1)}, 
	{NULL, 0}
};
static const u8 sPichuGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_30.4bpp.lz");
static const u8 sPichuGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_30_1.4bpp.lz");
static const u8 sPichuGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_30_2.4bpp.lz");
static const u8 sPichuGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_30_3.4bpp.lz");
static const ax_sprite sPichuSprites30[] = {
	{NULL, 32}, 
	{sPichuGfx30, ARRAY_COUNT(sPichuGfx30)}, 
	{NULL, 64}, 
	{sPichuGfx30_1, ARRAY_COUNT(sPichuGfx30_1)}, 
	{NULL, 64}, 
	{sPichuGfx30_2, ARRAY_COUNT(sPichuGfx30_2)}, 
	{NULL, 64}, 
	{sPichuGfx30_3, ARRAY_COUNT(sPichuGfx30_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_31.4bpp.lz");
static const u8 sPichuGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_31_1.4bpp.lz");
static const ax_sprite sPichuSprites31[] = {
	{sPichuGfx31, ARRAY_COUNT(sPichuGfx31)}, 
	{NULL, 96}, 
	{sPichuGfx31_1, ARRAY_COUNT(sPichuGfx31_1)}, 
	{NULL, 0}
};
static const u8 sPichuGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_32.4bpp.lz");
static const u8 sPichuGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_32_1.4bpp.lz");
static const u8 sPichuGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_32_2.4bpp.lz");
static const ax_sprite sPichuSprites32[] = {
	{NULL, 128}, 
	{sPichuGfx32, ARRAY_COUNT(sPichuGfx32)}, 
	{NULL, 32}, 
	{sPichuGfx32_1, ARRAY_COUNT(sPichuGfx32_1)}, 
	{NULL, 64}, 
	{sPichuGfx32_2, ARRAY_COUNT(sPichuGfx32_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_33.4bpp.lz");
static const u8 sPichuGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_33_1.4bpp.lz");
static const u8 sPichuGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_33_2.4bpp.lz");
static const ax_sprite sPichuSprites33[] = {
	{NULL, 32}, 
	{sPichuGfx33, ARRAY_COUNT(sPichuGfx33)}, 
	{NULL, 96}, 
	{sPichuGfx33_1, ARRAY_COUNT(sPichuGfx33_1)}, 
	{NULL, 32}, 
	{sPichuGfx33_2, ARRAY_COUNT(sPichuGfx33_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_34.4bpp.lz");
static const u8 sPichuGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_34_1.4bpp.lz");
static const u8 sPichuGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_34_2.4bpp.lz");
static const u8 sPichuGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_34_3.4bpp.lz");
static const ax_sprite sPichuSprites34[] = {
	{sPichuGfx34, ARRAY_COUNT(sPichuGfx34)}, 
	{NULL, 64}, 
	{sPichuGfx34_1, ARRAY_COUNT(sPichuGfx34_1)}, 
	{NULL, 32}, 
	{sPichuGfx34_2, ARRAY_COUNT(sPichuGfx34_2)}, 
	{NULL, 64}, 
	{sPichuGfx34_3, ARRAY_COUNT(sPichuGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_35.4bpp.lz");
static const u8 sPichuGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_35_1.4bpp.lz");
static const u8 sPichuGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_35_2.4bpp.lz");
static const u8 sPichuGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_35_3.4bpp.lz");
static const ax_sprite sPichuSprites35[] = {
	{NULL, 64}, 
	{sPichuGfx35, ARRAY_COUNT(sPichuGfx35)}, 
	{NULL, 32}, 
	{sPichuGfx35_1, ARRAY_COUNT(sPichuGfx35_1)}, 
	{NULL, 32}, 
	{sPichuGfx35_2, ARRAY_COUNT(sPichuGfx35_2)}, 
	{NULL, 64}, 
	{sPichuGfx35_3, ARRAY_COUNT(sPichuGfx35_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_36.4bpp.lz");
static const u8 sPichuGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_36_1.4bpp.lz");
static const u8 sPichuGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_36_2.4bpp.lz");
static const u8 sPichuGfx36_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_36_3.4bpp.lz");
static const ax_sprite sPichuSprites36[] = {
	{NULL, 32}, 
	{sPichuGfx36, ARRAY_COUNT(sPichuGfx36)}, 
	{NULL, 64}, 
	{sPichuGfx36_1, ARRAY_COUNT(sPichuGfx36_1)}, 
	{NULL, 64}, 
	{sPichuGfx36_2, ARRAY_COUNT(sPichuGfx36_2)}, 
	{NULL, 64}, 
	{sPichuGfx36_3, ARRAY_COUNT(sPichuGfx36_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_37.4bpp.lz");
static const u8 sPichuGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_37_1.4bpp.lz");
static const u8 sPichuGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_37_2.4bpp.lz");
static const u8 sPichuGfx37_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_37_3.4bpp.lz");
static const ax_sprite sPichuSprites37[] = {
	{sPichuGfx37, ARRAY_COUNT(sPichuGfx37)}, 
	{NULL, 64}, 
	{sPichuGfx37_1, ARRAY_COUNT(sPichuGfx37_1)}, 
	{NULL, 32}, 
	{sPichuGfx37_2, ARRAY_COUNT(sPichuGfx37_2)}, 
	{NULL, 64}, 
	{sPichuGfx37_3, ARRAY_COUNT(sPichuGfx37_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPichuGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_38.4bpp.lz");
static const u8 sPichuGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_38_1.4bpp.lz");
static const u8 sPichuGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_38_2.4bpp.lz");
static const u8 sPichuGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_38_3.4bpp.lz");
static const ax_sprite sPichuSprites38[] = {
	{sPichuGfx38, ARRAY_COUNT(sPichuGfx38)}, 
	{NULL, 32}, 
	{sPichuGfx38_1, ARRAY_COUNT(sPichuGfx38_1)}, 
	{NULL, 32}, 
	{sPichuGfx38_2, ARRAY_COUNT(sPichuGfx38_2)}, 
	{NULL, 64}, 
	{sPichuGfx38_3, ARRAY_COUNT(sPichuGfx38_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_39.4bpp.lz");
static const u8 sPichuGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_39_1.4bpp.lz");
static const u8 sPichuGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_39_2.4bpp.lz");
static const u8 sPichuGfx39_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_39_3.4bpp.lz");
static const ax_sprite sPichuSprites39[] = {
	{NULL, 64}, 
	{sPichuGfx39, ARRAY_COUNT(sPichuGfx39)}, 
	{NULL, 32}, 
	{sPichuGfx39_1, ARRAY_COUNT(sPichuGfx39_1)}, 
	{NULL, 32}, 
	{sPichuGfx39_2, ARRAY_COUNT(sPichuGfx39_2)}, 
	{NULL, 64}, 
	{sPichuGfx39_3, ARRAY_COUNT(sPichuGfx39_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_40.4bpp.lz");
static const u8 sPichuGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_40_1.4bpp.lz");
static const u8 sPichuGfx40_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_40_2.4bpp.lz");
static const u8 sPichuGfx40_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_40_3.4bpp.lz");
static const ax_sprite sPichuSprites40[] = {
	{NULL, 32}, 
	{sPichuGfx40, ARRAY_COUNT(sPichuGfx40)}, 
	{NULL, 64}, 
	{sPichuGfx40_1, ARRAY_COUNT(sPichuGfx40_1)}, 
	{NULL, 32}, 
	{sPichuGfx40_2, ARRAY_COUNT(sPichuGfx40_2)}, 
	{NULL, 32}, 
	{sPichuGfx40_3, ARRAY_COUNT(sPichuGfx40_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_41.4bpp.lz");
static const u8 sPichuGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_41_1.4bpp.lz");
static const u8 sPichuGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_41_2.4bpp.lz");
static const ax_sprite sPichuSprites41[] = {
	{sPichuGfx41, ARRAY_COUNT(sPichuGfx41)}, 
	{NULL, 64}, 
	{sPichuGfx41_1, ARRAY_COUNT(sPichuGfx41_1)}, 
	{NULL, 64}, 
	{sPichuGfx41_2, ARRAY_COUNT(sPichuGfx41_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_42.4bpp.lz");
static const u8 sPichuGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_42_1.4bpp.lz");
static const u8 sPichuGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_42_2.4bpp.lz");
static const u8 sPichuGfx42_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_42_3.4bpp.lz");
static const ax_sprite sPichuSprites42[] = {
	{NULL, 32}, 
	{sPichuGfx42, ARRAY_COUNT(sPichuGfx42)}, 
	{NULL, 64}, 
	{sPichuGfx42_1, ARRAY_COUNT(sPichuGfx42_1)}, 
	{NULL, 32}, 
	{sPichuGfx42_2, ARRAY_COUNT(sPichuGfx42_2)}, 
	{NULL, 32}, 
	{sPichuGfx42_3, ARRAY_COUNT(sPichuGfx42_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_43.4bpp.lz");
static const u8 sPichuGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_43_1.4bpp.lz");
static const u8 sPichuGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_43_2.4bpp.lz");
static const u8 sPichuGfx43_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_43_3.4bpp.lz");
static const ax_sprite sPichuSprites43[] = {
	{NULL, 32}, 
	{sPichuGfx43, ARRAY_COUNT(sPichuGfx43)}, 
	{NULL, 64}, 
	{sPichuGfx43_1, ARRAY_COUNT(sPichuGfx43_1)}, 
	{NULL, 64}, 
	{sPichuGfx43_2, ARRAY_COUNT(sPichuGfx43_2)}, 
	{NULL, 64}, 
	{sPichuGfx43_3, ARRAY_COUNT(sPichuGfx43_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_44.4bpp.lz");
static const u8 sPichuGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_44_1.4bpp.lz");
static const u8 sPichuGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_44_2.4bpp.lz");
static const u8 sPichuGfx44_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_44_3.4bpp.lz");
static const ax_sprite sPichuSprites44[] = {
	{NULL, 32}, 
	{sPichuGfx44, ARRAY_COUNT(sPichuGfx44)}, 
	{NULL, 32}, 
	{sPichuGfx44_1, ARRAY_COUNT(sPichuGfx44_1)}, 
	{NULL, 32}, 
	{sPichuGfx44_2, ARRAY_COUNT(sPichuGfx44_2)}, 
	{NULL, 64}, 
	{sPichuGfx44_3, ARRAY_COUNT(sPichuGfx44_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_45.4bpp.lz");
static const u8 sPichuGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_45_1.4bpp.lz");
static const u8 sPichuGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_45_2.4bpp.lz");
static const u8 sPichuGfx45_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_45_3.4bpp.lz");
static const ax_sprite sPichuSprites45[] = {
	{NULL, 32}, 
	{sPichuGfx45, ARRAY_COUNT(sPichuGfx45)}, 
	{NULL, 32}, 
	{sPichuGfx45_1, ARRAY_COUNT(sPichuGfx45_1)}, 
	{NULL, 64}, 
	{sPichuGfx45_2, ARRAY_COUNT(sPichuGfx45_2)}, 
	{NULL, 64}, 
	{sPichuGfx45_3, ARRAY_COUNT(sPichuGfx45_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_46.4bpp.lz");
static const u8 sPichuGfx46_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_46_1.4bpp.lz");
static const u8 sPichuGfx46_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_46_2.4bpp.lz");
static const ax_sprite sPichuSprites46[] = {
	{sPichuGfx46, ARRAY_COUNT(sPichuGfx46)}, 
	{NULL, 32}, 
	{sPichuGfx46_1, ARRAY_COUNT(sPichuGfx46_1)}, 
	{NULL, 64}, 
	{sPichuGfx46_2, ARRAY_COUNT(sPichuGfx46_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_47.4bpp.lz");
static const u8 sPichuGfx47_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_47_1.4bpp.lz");
static const u8 sPichuGfx47_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_47_2.4bpp.lz");
static const ax_sprite sPichuSprites47[] = {
	{NULL, 32}, 
	{sPichuGfx47, ARRAY_COUNT(sPichuGfx47)}, 
	{NULL, 64}, 
	{sPichuGfx47_1, ARRAY_COUNT(sPichuGfx47_1)}, 
	{NULL, 64}, 
	{sPichuGfx47_2, ARRAY_COUNT(sPichuGfx47_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPichuGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_48.4bpp.lz");
static const ax_sprite sPichuSprites48[] = {
	{sPichuGfx48, ARRAY_COUNT(sPichuGfx48)}, 
	{NULL, 0}
};
static const u8 sPichuGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_49.4bpp.lz");
static const ax_sprite sPichuSprites49[] = {
	{sPichuGfx49, ARRAY_COUNT(sPichuGfx49)}, 
	{NULL, 0}
};
static const u8 sPichuGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_50.4bpp.lz");
static const ax_sprite sPichuSprites50[] = {
	{sPichuGfx50, ARRAY_COUNT(sPichuGfx50)}, 
	{NULL, 0}
};
static const u8 sPichuGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_51.4bpp.lz");
static const ax_sprite sPichuSprites51[] = {
	{sPichuGfx51, ARRAY_COUNT(sPichuGfx51)}, 
	{NULL, 0}
};
static const u8 sPichuGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_52.4bpp.lz");
static const ax_sprite sPichuSprites52[] = {
	{sPichuGfx52, ARRAY_COUNT(sPichuGfx52)}, 
	{NULL, 0}
};
static const u8 sPichuGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_53.4bpp.lz");
static const ax_sprite sPichuSprites53[] = {
	{sPichuGfx53, ARRAY_COUNT(sPichuGfx53)}, 
	{NULL, 0}
};
static const u8 sPichuGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pichu/sprite_54.4bpp.lz");
static const ax_sprite sPichuSprites54[] = {
	{sPichuGfx54, ARRAY_COUNT(sPichuGfx54)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesPichu[] = {
	sPichuPose1,
	sPichuPose2,
	sPichuPose3,
	sPichuPose4,
	sPichuPose5,
	sPichuPose6,
	sPichuPose7,
	sPichuPose8,
	sPichuPose9,
	sPichuPose10,
	sPichuPose11,
	sPichuPose12,
	sPichuPose13,
	sPichuPose14,
	sPichuPose15,
	sPichuPose16,
	sPichuPose17,
	sPichuPose18,
	sPichuPose19,
	sPichuPose20,
	sPichuPose21,
	sPichuPose22,
	sPichuPose23,
	sPichuPose24,
	sPichuPose1,
	sPichuPose2,
	sPichuPose3,
	sPichuPose28,
	sPichuPose4,
	sPichuPose5,
	sPichuPose6,
	sPichuPose32,
	sPichuPose7,
	sPichuPose8,
	sPichuPose9,
	sPichuPose36,
	sPichuPose10,
	sPichuPose11,
	sPichuPose12,
	sPichuPose40,
	sPichuPose13,
	sPichuPose14,
	sPichuPose15,
	sPichuPose44,
	sPichuPose16,
	sPichuPose17,
	sPichuPose18,
	sPichuPose48,
	sPichuPose19,
	sPichuPose20,
	sPichuPose21,
	sPichuPose52,
	sPichuPose22,
	sPichuPose23,
	sPichuPose24,
	sPichuPose56,
	sPichuPose1,
	sPichuPose2,
	sPichuPose3,
	sPichuPose28,
	sPichuPose4,
	sPichuPose5,
	sPichuPose6,
	sPichuPose32,
	sPichuPose7,
	sPichuPose8,
	sPichuPose9,
	sPichuPose36,
	sPichuPose10,
	sPichuPose11,
	sPichuPose12,
	sPichuPose40,
	sPichuPose13,
	sPichuPose14,
	sPichuPose15,
	sPichuPose44,
	sPichuPose16,
	sPichuPose17,
	sPichuPose18,
	sPichuPose48,
	sPichuPose19,
	sPichuPose20,
	sPichuPose21,
	sPichuPose52,
	sPichuPose22,
	sPichuPose23,
	sPichuPose24,
	sPichuPose56,
	sPichuPose1,
	sPichuPose90,
	sPichuPose91,
	sPichuPose28,
	sPichuPose93,
	sPichuPose4,
	sPichuPose95,
	sPichuPose96,
	sPichuPose32,
	sPichuPose98,
	sPichuPose7,
	sPichuPose100,
	sPichuPose101,
	sPichuPose36,
	sPichuPose103,
	sPichuPose10,
	sPichuPose105,
	sPichuPose106,
	sPichuPose40,
	sPichuPose108,
	sPichuPose13,
	sPichuPose110,
	sPichuPose111,
	sPichuPose44,
	sPichuPose113,
	sPichuPose16,
	sPichuPose115,
	sPichuPose116,
	sPichuPose48,
	sPichuPose118,
	sPichuPose19,
	sPichuPose120,
	sPichuPose121,
	sPichuPose52,
	sPichuPose123,
	sPichuPose22,
	sPichuPose125,
	sPichuPose126,
	sPichuPose56,
	sPichuPose128,
	sPichuPose129,
	sPichuPose130,
	sPichuPose131,
	sPichuPose132,
	sPichuPose133,
	sPichuPose134,
	sPichuPose135,
	sPichuPose136,
	sPichuPose137,
	sPichuPose138,
	sPichuPose139,
	sPichuPose140,
	sPichuPose141,
	sPichuPose142,
	sPichuPose143,
	sPichuPose144,
	sPichuPose145,
	sPichuPose146,
	sPichuPose147,
	sPichuPose148,
	sPichuPose149,
	sPichuPose150,
	sPichuPose151,
	sPichuPose152,
	sPichuPose153,
	sPichuPose154,
	sPichuPose155,
	sPichuPose156,
	sPichuPose157,
	sPichuPose158,
	sPichuPose159,
	sPichuPose160,
	sPichuPose161,
	sPichuPose162,
	sPichuPose1,
	sPichuPose2,
	sPichuPose3,
	sPichuPose4,
	sPichuPose5,
	sPichuPose6,
	sPichuPose7,
	sPichuPose8,
	sPichuPose9,
	sPichuPose10,
	sPichuPose11,
	sPichuPose12,
	sPichuPose13,
	sPichuPose14,
	sPichuPose15,
	sPichuPose16,
	sPichuPose17,
	sPichuPose18,
	sPichuPose19,
	sPichuPose20,
	sPichuPose21,
	sPichuPose22,
	sPichuPose23,
	sPichuPose24,
	sPichuPose130,
	sPichuPose188,
	sPichuPose189,
	sPichuPose190,
	sPichuPose191,
	sPichuPose139,
	sPichuPose193,
	sPichuPose133,
	sPichuPose28,
	sPichuPose32,
	sPichuPose197,
	sPichuPose40,
	sPichuPose44,
	sPichuPose200,
	sPichuPose201,
	sPichuPose202,
	sPichuPose1,
	sPichuPose2,
	sPichuPose3,
	sPichuPose4,
	sPichuPose5,
	sPichuPose6,
	sPichuPose7,
	sPichuPose8,
	sPichuPose9,
	sPichuPose10,
	sPichuPose11,
	sPichuPose12,
	sPichuPose13,
	sPichuPose14,
	sPichuPose15,
	sPichuPose218,
	sPichuPose219,
	sPichuPose220,
	sPichuPose221,
	sPichuPose222,
	sPichuPose223,
	sPichuPose224,
	sPichuPose225,
	sPichuPose226,
	sPichuPose28,
	sPichuPose202,
	sPichuPose201,
	sPichuPose200,
	sPichuPose44,
	sPichuPose40,
	sPichuPose197,
	sPichuPose32,
	sPichuPose1,
	sPichuPose22,
	sPichuPose19,
	sPichuPose16,
	sPichuPose13,
	sPichuPose10,
	sPichuPose7,
	sPichuPose4,
};

static const struct PositionSets sAxPositionsPichu[] = {
	[0] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -6} } },
	[1] = { .set = { {-2, -9}, {-6, -6}, {4, -9}, {-1, -8} } },
	[2] = { .set = { {0, -9}, {-6, -9}, {4, -6}, {0, -8} } },
	[3] = { .set = { {1, -7}, {4, -6}, {-5, -3}, {0, -6} } },
	[4] = { .set = { {1, -10}, {4, -7}, {-5, -8}, {0, -9} } },
	[5] = { .set = { {0, -8}, {4, -9}, {-2, -5}, {1, -7} } },
	[6] = { .set = { {3, -7}, {0, -3}, {-1, -2}, {0, -4} } },
	[7] = { .set = { {3, -10}, {3, -7}, {-2, -8}, {0, -7} } },
	[8] = { .set = { {3, -8}, {-1, -8}, {1, -5}, {0, -6} } },
	[9] = { .set = { {0, -8}, {-5, -5}, {3, -3}, {-2, -4} } },
	[10] = { .set = { {1, -11}, {-6, -8}, {2, -8}, {-1, -7} } },
	[11] = { .set = { {1, -10}, {-4, -10}, {3, -5}, {-2, -7} } },
	[12] = { .set = { {-1, -9}, {4, -4}, {-6, -4}, {-1, -6} } },
	[13] = { .set = { {0, -10}, {3, -5}, {-5, -8}, {-1, -6} } },
	[14] = { .set = { {-2, -9}, {3, -8}, {-5, -5}, {-1, -6} } },
	[15] = { .set = { {-2, -8}, {3, -5}, {-5, -3}, {0, -4} } },
	[16] = { .set = { {-3, -11}, {4, -8}, {-4, -8}, {-1, -7} } },
	[17] = { .set = { {-3, -10}, {2, -10}, {-5, -5}, {0, -7} } },
	[18] = { .set = { {-5, -7}, {-2, -3}, {-1, -2}, {-2, -4} } },
	[19] = { .set = { {-5, -10}, {-5, -7}, {0, -8}, {-2, -7} } },
	[20] = { .set = { {-5, -6}, {-1, -6}, {-3, -3}, {-2, -4} } },
	[21] = { .set = { {-3, -7}, {-6, -6}, {3, -3}, {-2, -6} } },
	[22] = { .set = { {-3, -10}, {-6, -7}, {3, -8}, {-2, -9} } },
	[23] = { .set = { {-2, -8}, {-6, -9}, {0, -5}, {-3, -7} } },
	[24] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -6} } },
	[25] = { .set = { {-2, -9}, {-6, -6}, {4, -9}, {-1, -8} } },
	[26] = { .set = { {0, -9}, {-6, -9}, {4, -6}, {0, -8} } },
	[27] = { .set = { {-1, -9}, {-6, -7}, {4, -7}, {-1, -5} } },
	[28] = { .set = { {1, -7}, {4, -6}, {-5, -3}, {0, -6} } },
	[29] = { .set = { {1, -10}, {4, -7}, {-5, -8}, {0, -9} } },
	[30] = { .set = { {0, -8}, {4, -9}, {-2, -5}, {1, -7} } },
	[31] = { .set = { {2, -9}, {4, -9}, {-4, -6}, {0, -5} } },
	[32] = { .set = { {3, -7}, {0, -3}, {-1, -2}, {0, -4} } },
	[33] = { .set = { {3, -10}, {3, -7}, {-2, -8}, {0, -7} } },
	[34] = { .set = { {3, -8}, {-1, -8}, {1, -5}, {0, -6} } },
	[35] = { .set = { {6, -10}, {3, -9}, {1, -7}, {1, -6} } },
	[36] = { .set = { {0, -8}, {-5, -5}, {3, -3}, {-2, -4} } },
	[37] = { .set = { {1, -11}, {-6, -8}, {2, -8}, {-1, -7} } },
	[38] = { .set = { {1, -10}, {-4, -10}, {3, -5}, {-2, -7} } },
	[39] = { .set = { {4, -11}, {-3, -9}, {4, -7}, {0, -6} } },
	[40] = { .set = { {-1, -9}, {4, -4}, {-6, -4}, {-1, -6} } },
	[41] = { .set = { {0, -10}, {3, -5}, {-5, -8}, {-1, -6} } },
	[42] = { .set = { {-2, -9}, {3, -8}, {-5, -5}, {-1, -6} } },
	[43] = { .set = { {-1, -10}, {4, -8}, {-6, -8}, {-1, -6} } },
	[44] = { .set = { {-2, -8}, {3, -5}, {-5, -3}, {0, -4} } },
	[45] = { .set = { {-3, -11}, {4, -8}, {-4, -8}, {-1, -7} } },
	[46] = { .set = { {-3, -10}, {2, -10}, {-5, -5}, {0, -7} } },
	[47] = { .set = { {-6, -11}, {1, -9}, {-6, -7}, {-2, -6} } },
	[48] = { .set = { {-5, -7}, {-2, -3}, {-1, -2}, {-2, -4} } },
	[49] = { .set = { {-5, -10}, {-5, -7}, {0, -8}, {-2, -7} } },
	[50] = { .set = { {-5, -6}, {-1, -6}, {-3, -3}, {-2, -4} } },
	[51] = { .set = { {-7, -10}, {-4, -9}, {-2, -7}, {-2, -6} } },
	[52] = { .set = { {-3, -7}, {-6, -6}, {3, -3}, {-2, -6} } },
	[53] = { .set = { {-3, -10}, {-6, -7}, {3, -8}, {-2, -9} } },
	[54] = { .set = { {-2, -8}, {-6, -9}, {0, -5}, {-3, -7} } },
	[55] = { .set = { {-4, -9}, {-6, -9}, {2, -6}, {-2, -5} } },
	[56] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -6} } },
	[57] = { .set = { {-2, -9}, {-6, -6}, {4, -9}, {-1, -8} } },
	[58] = { .set = { {0, -9}, {-6, -9}, {4, -6}, {0, -8} } },
	[59] = { .set = { {-1, -9}, {-6, -7}, {4, -7}, {-1, -5} } },
	[60] = { .set = { {1, -7}, {4, -6}, {-5, -3}, {0, -6} } },
	[61] = { .set = { {1, -10}, {4, -7}, {-5, -8}, {0, -9} } },
	[62] = { .set = { {0, -8}, {4, -9}, {-2, -5}, {1, -7} } },
	[63] = { .set = { {2, -9}, {4, -9}, {-4, -6}, {0, -5} } },
	[64] = { .set = { {3, -7}, {0, -3}, {-1, -2}, {0, -4} } },
	[65] = { .set = { {3, -10}, {3, -7}, {-2, -8}, {0, -7} } },
	[66] = { .set = { {3, -8}, {-1, -8}, {1, -5}, {0, -6} } },
	[67] = { .set = { {6, -10}, {3, -9}, {1, -7}, {1, -6} } },
	[68] = { .set = { {0, -8}, {-5, -5}, {3, -3}, {-2, -4} } },
	[69] = { .set = { {1, -11}, {-6, -8}, {2, -8}, {-1, -7} } },
	[70] = { .set = { {1, -10}, {-4, -10}, {3, -5}, {-2, -7} } },
	[71] = { .set = { {4, -11}, {-3, -9}, {4, -7}, {0, -6} } },
	[72] = { .set = { {-1, -9}, {4, -4}, {-6, -4}, {-1, -6} } },
	[73] = { .set = { {0, -10}, {3, -5}, {-5, -8}, {-1, -6} } },
	[74] = { .set = { {-2, -9}, {3, -8}, {-5, -5}, {-1, -6} } },
	[75] = { .set = { {-1, -10}, {4, -8}, {-6, -8}, {-1, -6} } },
	[76] = { .set = { {-2, -8}, {3, -5}, {-5, -3}, {0, -4} } },
	[77] = { .set = { {-3, -11}, {4, -8}, {-4, -8}, {-1, -7} } },
	[78] = { .set = { {-3, -10}, {2, -10}, {-5, -5}, {0, -7} } },
	[79] = { .set = { {-6, -11}, {1, -9}, {-6, -7}, {-2, -6} } },
	[80] = { .set = { {-5, -7}, {-2, -3}, {-1, -2}, {-2, -4} } },
	[81] = { .set = { {-5, -10}, {-5, -7}, {0, -8}, {-2, -7} } },
	[82] = { .set = { {-5, -6}, {-1, -6}, {-3, -3}, {-2, -4} } },
	[83] = { .set = { {-7, -10}, {-4, -9}, {-2, -7}, {-2, -6} } },
	[84] = { .set = { {-3, -7}, {-6, -6}, {3, -3}, {-2, -6} } },
	[85] = { .set = { {-3, -10}, {-6, -7}, {3, -8}, {-2, -9} } },
	[86] = { .set = { {-2, -8}, {-6, -9}, {0, -5}, {-3, -7} } },
	[87] = { .set = { {-4, -9}, {-6, -9}, {2, -6}, {-2, -5} } },
	[88] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -6} } },
	[89] = { .set = { {-1, -9}, {-6, -7}, {4, -7}, {-1, -5} } },
	[90] = { .set = { {-1, -11}, {4, -8}, {-6, -8}, {-1, -8} } },
	[91] = { .set = { {-1, -9}, {-6, -7}, {4, -7}, {-1, -5} } },
	[92] = { .set = { {-1, -10}, {4, -7}, {-6, -7}, {-1, -7} } },
	[93] = { .set = { {1, -7}, {4, -6}, {-5, -3}, {0, -6} } },
	[94] = { .set = { {2, -9}, {4, -9}, {-4, -6}, {0, -5} } },
	[95] = { .set = { {2, -9}, {4, -9}, {-4, -6}, {0, -6} } },
	[96] = { .set = { {2, -9}, {4, -9}, {-4, -6}, {0, -5} } },
	[97] = { .set = { {2, -9}, {4, -9}, {-4, -6}, {0, -6} } },
	[98] = { .set = { {3, -7}, {0, -3}, {-1, -2}, {0, -4} } },
	[99] = { .set = { {6, -10}, {3, -9}, {1, -7}, {1, -6} } },
	[100] = { .set = { {6, -10}, {3, -9}, {1, -7}, {1, -6} } },
	[101] = { .set = { {6, -10}, {3, -9}, {1, -7}, {1, -6} } },
	[102] = { .set = { {6, -10}, {3, -9}, {1, -7}, {1, -6} } },
	[103] = { .set = { {0, -8}, {-5, -5}, {3, -3}, {-2, -4} } },
	[104] = { .set = { {4, -11}, {-3, -9}, {4, -7}, {0, -6} } },
	[105] = { .set = { {4, -11}, {-3, -9}, {4, -7}, {0, -8} } },
	[106] = { .set = { {4, -11}, {-3, -9}, {4, -7}, {0, -6} } },
	[107] = { .set = { {4, -11}, {-3, -9}, {4, -7}, {0, -8} } },
	[108] = { .set = { {-1, -9}, {4, -4}, {-6, -4}, {-1, -6} } },
	[109] = { .set = { {-1, -10}, {4, -8}, {-6, -8}, {-1, -6} } },
	[110] = { .set = { {-1, -10}, {4, -8}, {-6, -8}, {-1, -7} } },
	[111] = { .set = { {-1, -10}, {4, -8}, {-6, -8}, {-1, -6} } },
	[112] = { .set = { {-1, -10}, {4, -8}, {-6, -8}, {-1, -7} } },
	[113] = { .set = { {-2, -8}, {3, -5}, {-5, -3}, {0, -4} } },
	[114] = { .set = { {-6, -11}, {1, -9}, {-6, -7}, {-2, -6} } },
	[115] = { .set = { {-6, -11}, {1, -9}, {-6, -7}, {-2, -8} } },
	[116] = { .set = { {-6, -11}, {1, -9}, {-6, -7}, {-2, -6} } },
	[117] = { .set = { {-6, -11}, {1, -9}, {-6, -7}, {-2, -8} } },
	[118] = { .set = { {-5, -7}, {-2, -3}, {-1, -2}, {-2, -4} } },
	[119] = { .set = { {-7, -10}, {-4, -9}, {-2, -7}, {-2, -6} } },
	[120] = { .set = { {-7, -10}, {-4, -9}, {-2, -7}, {-2, -6} } },
	[121] = { .set = { {-7, -10}, {-4, -9}, {-2, -7}, {-2, -6} } },
	[122] = { .set = { {-7, -10}, {-4, -9}, {-2, -7}, {-2, -6} } },
	[123] = { .set = { {-3, -7}, {-6, -6}, {3, -3}, {-2, -6} } },
	[124] = { .set = { {-4, -9}, {-6, -9}, {2, -6}, {-2, -5} } },
	[125] = { .set = { {-4, -9}, {-6, -9}, {2, -6}, {-2, -6} } },
	[126] = { .set = { {-4, -9}, {-6, -9}, {2, -6}, {-2, -5} } },
	[127] = { .set = { {-4, -9}, {-6, -9}, {2, -6}, {-2, -6} } },
	[128] = { .set = { {-6, -10}, {-5, -5}, {-3, -5}, {-3, -6} } },
	[129] = { .set = { {-1, -9}, {-3, -4}, {1, -4}, {-1, -6} } },
	[130] = { .set = { {4, -10}, {1, -5}, {3, -5}, {1, -6} } },
	[131] = { .set = { {7, -10}, {4, -6}, {4, -5}, {2, -6} } },
	[132] = { .set = { {4, -9}, {4, -5}, {2, -4}, {1, -5} } },
	[133] = { .set = { {-1, -8}, {0, -3}, {-2, -3}, {-1, -5} } },
	[134] = { .set = { {5, -10}, {0, -6}, {5, -5}, {1, -6} } },
	[135] = { .set = { {7, -9}, {4, -5}, {4, -4}, {2, -5} } },
	[136] = { .set = { {2, -8}, {4, -4}, {1, -3}, {1, -4} } },
	[137] = { .set = { {8, -9}, {1, -5}, {5, -4}, {2, -6} } },
	[138] = { .set = { {4, -10}, {0, -6}, {2, -5}, {1, -7} } },
	[139] = { .set = { {0, -11}, {-1, -6}, {2, -6}, {1, -7} } },
	[140] = { .set = { {-4, -10}, {-1, -6}, {-4, -6}, {-2, -6} } },
	[141] = { .set = { {-1, -10}, {0, -5}, {-2, -5}, {-1, -5} } },
	[142] = { .set = { {2, -10}, {2, -5}, {0, -6}, {1, -5} } },
	[143] = { .set = { {-10, -9}, {-3, -5}, {-7, -4}, {-4, -6} } },
	[144] = { .set = { {-6, -10}, {-2, -6}, {-4, -5}, {-3, -7} } },
	[145] = { .set = { {-2, -11}, {-1, -6}, {-4, -6}, {-3, -7} } },
	[146] = { .set = { {-7, -10}, {-2, -6}, {-7, -5}, {-3, -6} } },
	[147] = { .set = { {-9, -9}, {-6, -5}, {-6, -4}, {-4, -5} } },
	[148] = { .set = { {-4, -8}, {-6, -4}, {-3, -3}, {-3, -4} } },
	[149] = { .set = { {-9, -10}, {-6, -6}, {-6, -5}, {-4, -6} } },
	[150] = { .set = { {-6, -9}, {-6, -5}, {-4, -4}, {-3, -5} } },
	[151] = { .set = { {-1, -8}, {-2, -3}, {0, -3}, {-1, -5} } },
	[152] = { .set = { {-2, -6}, {-3, -4}, {0, -3}, {-1, -4} } },
	[153] = { .set = { {-2, -5}, {-3, -3}, {-1, -3}, {-2, -4} } },
	[154] = { .set = { {0, -6}, {-5, -4}, {5, -4}, {0, -5} } },
	[155] = { .set = { {1, -6}, {3, -5}, {-4, -3}, {0, -6} } },
	[156] = { .set = { {3, -7}, {1, -5}, {0, -4}, {0, -5} } },
	[157] = { .set = { {1, -8}, {-1, -5}, {3, -4}, {0, -5} } },
	[158] = { .set = { {0, -8}, {5, -3}, {-5, -3}, {0, -5} } },
	[159] = { .set = { {-2, -8}, {0, -5}, {-4, -4}, {-1, -5} } },
	[160] = { .set = { {-4, -7}, {-2, -5}, {-1, -4}, {-1, -5} } },
	[161] = { .set = { {-2, -6}, {-4, -5}, {3, -3}, {-1, -6} } },
	[162] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -6} } },
	[163] = { .set = { {-2, -9}, {-6, -6}, {4, -9}, {-1, -8} } },
	[164] = { .set = { {0, -9}, {-6, -9}, {4, -6}, {0, -8} } },
	[165] = { .set = { {1, -7}, {4, -6}, {-5, -3}, {0, -6} } },
	[166] = { .set = { {1, -10}, {4, -7}, {-5, -8}, {0, -9} } },
	[167] = { .set = { {0, -8}, {4, -9}, {-2, -5}, {1, -7} } },
	[168] = { .set = { {3, -7}, {0, -3}, {-1, -2}, {0, -4} } },
	[169] = { .set = { {3, -10}, {3, -7}, {-2, -8}, {0, -7} } },
	[170] = { .set = { {3, -8}, {-1, -8}, {1, -5}, {0, -6} } },
	[171] = { .set = { {0, -8}, {-5, -5}, {3, -3}, {-2, -4} } },
	[172] = { .set = { {1, -11}, {-6, -8}, {2, -8}, {-1, -7} } },
	[173] = { .set = { {1, -10}, {-4, -10}, {3, -5}, {-2, -7} } },
	[174] = { .set = { {-1, -9}, {4, -4}, {-6, -4}, {-1, -6} } },
	[175] = { .set = { {0, -10}, {3, -5}, {-5, -8}, {-1, -6} } },
	[176] = { .set = { {-2, -9}, {3, -8}, {-5, -5}, {-1, -6} } },
	[177] = { .set = { {-2, -8}, {3, -5}, {-5, -3}, {0, -4} } },
	[178] = { .set = { {-3, -11}, {4, -8}, {-4, -8}, {-1, -7} } },
	[179] = { .set = { {-3, -10}, {2, -10}, {-5, -5}, {0, -7} } },
	[180] = { .set = { {-5, -7}, {-2, -3}, {-1, -2}, {-2, -4} } },
	[181] = { .set = { {-5, -10}, {-5, -7}, {0, -8}, {-2, -7} } },
	[182] = { .set = { {-5, -6}, {-1, -6}, {-3, -3}, {-2, -4} } },
	[183] = { .set = { {-3, -7}, {-6, -6}, {3, -3}, {-2, -6} } },
	[184] = { .set = { {-3, -10}, {-6, -7}, {3, -8}, {-2, -9} } },
	[185] = { .set = { {-2, -8}, {-6, -9}, {0, -5}, {-3, -7} } },
	[186] = { .set = { {-1, -9}, {-3, -4}, {1, -4}, {-1, -6} } },
	[187] = { .set = { {-5, -9}, {-5, -5}, {-3, -4}, {-2, -5} } },
	[188] = { .set = { {-7, -9}, {-4, -5}, {-4, -4}, {-2, -5} } },
	[189] = { .set = { {-5, -10}, {-1, -6}, {-3, -5}, {-2, -7} } },
	[190] = { .set = { {-1, -11}, {0, -6}, {-2, -6}, {-1, -6} } },
	[191] = { .set = { {4, -10}, {0, -6}, {2, -5}, {1, -7} } },
	[192] = { .set = { {6, -9}, {3, -5}, {3, -4}, {1, -5} } },
	[193] = { .set = { {4, -9}, {4, -5}, {2, -4}, {1, -5} } },
	[194] = { .set = { {-1, -9}, {-6, -7}, {4, -7}, {-1, -5} } },
	[195] = { .set = { {2, -9}, {4, -9}, {-4, -6}, {0, -5} } },
	[196] = { .set = { {5, -10}, {2, -9}, {0, -7}, {0, -6} } },
	[197] = { .set = { {4, -11}, {-3, -9}, {4, -7}, {0, -6} } },
	[198] = { .set = { {-1, -10}, {4, -8}, {-6, -8}, {-1, -6} } },
	[199] = { .set = { {-5, -11}, {2, -9}, {-5, -7}, {-1, -6} } },
	[200] = { .set = { {-6, -10}, {-3, -9}, {-1, -7}, {-1, -6} } },
	[201] = { .set = { {-3, -9}, {-5, -9}, {3, -6}, {-1, -5} } },
	[202] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -6} } },
	[203] = { .set = { {-2, -9}, {-6, -6}, {4, -9}, {-1, -8} } },
	[204] = { .set = { {0, -9}, {-6, -9}, {4, -6}, {0, -8} } },
	[205] = { .set = { {1, -7}, {4, -6}, {-5, -3}, {0, -6} } },
	[206] = { .set = { {1, -10}, {4, -7}, {-5, -8}, {0, -9} } },
	[207] = { .set = { {0, -8}, {4, -9}, {-2, -5}, {1, -7} } },
	[208] = { .set = { {3, -7}, {0, -3}, {-1, -2}, {0, -4} } },
	[209] = { .set = { {3, -10}, {3, -7}, {-2, -8}, {0, -7} } },
	[210] = { .set = { {3, -8}, {-1, -8}, {1, -5}, {0, -6} } },
	[211] = { .set = { {0, -8}, {-5, -5}, {3, -3}, {-2, -4} } },
	[212] = { .set = { {1, -11}, {-6, -8}, {2, -8}, {-1, -7} } },
	[213] = { .set = { {1, -10}, {-4, -10}, {3, -5}, {-2, -7} } },
	[214] = { .set = { {-1, -9}, {4, -4}, {-6, -4}, {-1, -6} } },
	[215] = { .set = { {0, -10}, {3, -5}, {-5, -8}, {-1, -6} } },
	[216] = { .set = { {-2, -9}, {3, -8}, {-5, -5}, {-1, -6} } },
	[217] = { .set = { {-1, -8}, {4, -5}, {-4, -3}, {1, -4} } },
	[218] = { .set = { {-2, -11}, {5, -8}, {-3, -8}, {0, -7} } },
	[219] = { .set = { {-2, -10}, {3, -10}, {-4, -5}, {1, -7} } },
	[220] = { .set = { {-4, -7}, {-1, -3}, {0, -2}, {-1, -4} } },
	[221] = { .set = { {-4, -10}, {-4, -7}, {1, -8}, {-1, -7} } },
	[222] = { .set = { {-4, -8}, {0, -8}, {-2, -5}, {-1, -6} } },
	[223] = { .set = { {-2, -7}, {-5, -6}, {4, -3}, {-1, -6} } },
	[224] = { .set = { {-2, -10}, {-5, -7}, {4, -8}, {-1, -9} } },
	[225] = { .set = { {-1, -8}, {-5, -9}, {1, -5}, {-2, -7} } },
	[226] = { .set = { {-1, -9}, {-6, -7}, {4, -7}, {-1, -5} } },
	[227] = { .set = { {-3, -9}, {-5, -9}, {3, -6}, {-1, -5} } },
	[228] = { .set = { {-6, -10}, {-3, -9}, {-1, -7}, {-1, -6} } },
	[229] = { .set = { {-5, -11}, {2, -9}, {-5, -7}, {-1, -6} } },
	[230] = { .set = { {-1, -10}, {4, -8}, {-6, -8}, {-1, -6} } },
	[231] = { .set = { {4, -11}, {-3, -9}, {4, -7}, {0, -6} } },
	[232] = { .set = { {5, -10}, {2, -9}, {0, -7}, {0, -6} } },
	[233] = { .set = { {2, -9}, {4, -9}, {-4, -6}, {0, -5} } },
	[234] = { .set = { {-1, -7}, {-6, -4}, {4, -4}, {-1, -6} } },
	[235] = { .set = { {-3, -7}, {-6, -6}, {3, -3}, {-2, -6} } },
	[236] = { .set = { {-5, -7}, {-2, -3}, {-1, -2}, {-2, -4} } },
	[237] = { .set = { {-2, -8}, {3, -5}, {-5, -3}, {0, -4} } },
	[238] = { .set = { {-1, -9}, {4, -4}, {-6, -4}, {-1, -6} } },
	[239] = { .set = { {0, -8}, {-5, -5}, {3, -3}, {-2, -4} } },
	[240] = { .set = { {3, -7}, {0, -3}, {-1, -2}, {0, -4} } },
	[241] = { .set = { {1, -7}, {4, -6}, {-5, -3}, {0, -6} } },
};

static const ax_anim *const sPichuAnimTable1[] = {
	AX_ANIM_PTR(sPichuAnims_1_1),
	AX_ANIM_PTR(sPichuAnims_1_2),
	AX_ANIM_PTR(sPichuAnims_1_3),
	AX_ANIM_PTR(sPichuAnims_1_4),
	AX_ANIM_PTR(sPichuAnims_1_5),
	AX_ANIM_PTR(sPichuAnims_1_6),
	AX_ANIM_PTR(sPichuAnims_1_7),
	AX_ANIM_PTR(sPichuAnims_1_8),
};

static const ax_anim *const sPichuAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_01567),
	AX_ANIM_PTR(sPichuAnims_2_2),
	AX_ANIM_PTR(sPichuAnims_2_3),
	AX_ANIM_PTR(sPichuAnims_2_4),
	AX_ANIM_PTR(gAxSharedAnim_01918),
	AX_ANIM_PTR(sPichuAnims_2_6),
	AX_ANIM_PTR(sPichuAnims_2_7),
	AX_ANIM_PTR(sPichuAnims_2_8),
};

static const ax_anim *const sPichuAnimTable3[] = {
	AX_ANIM_PTR(sPichuAnims_3_1),
	AX_ANIM_PTR(sPichuAnims_3_2),
	AX_ANIM_PTR(sPichuAnims_3_3),
	AX_ANIM_PTR(sPichuAnims_3_4),
	AX_ANIM_PTR(gAxSharedAnim_02093),
	AX_ANIM_PTR(sPichuAnims_3_6),
	AX_ANIM_PTR(sPichuAnims_3_7),
	AX_ANIM_PTR(sPichuAnims_3_8),
};

static const ax_anim *const sPichuAnimTable4[] = {
	AX_ANIM_PTR(sPichuAnims_4_1),
	AX_ANIM_PTR(sPichuAnims_4_2),
	AX_ANIM_PTR(sPichuAnims_4_3),
	AX_ANIM_PTR(sPichuAnims_4_4),
	AX_ANIM_PTR(sPichuAnims_4_5),
	AX_ANIM_PTR(sPichuAnims_4_6),
	AX_ANIM_PTR(sPichuAnims_4_7),
	AX_ANIM_PTR(sPichuAnims_4_8),
};

static const ax_anim *const sPichuAnimTable5[] = {
	AX_ANIM_PTR(sPichuAnims_5_1),
	AX_ANIM_PTR(sPichuAnims_5_2),
	AX_ANIM_PTR(sPichuAnims_5_3),
	AX_ANIM_PTR(sPichuAnims_5_4),
	AX_ANIM_PTR(sPichuAnims_5_5),
	AX_ANIM_PTR(sPichuAnims_5_6),
	AX_ANIM_PTR(sPichuAnims_5_7),
	AX_ANIM_PTR(sPichuAnims_5_8),
};

static const ax_anim *const sPichuAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
	AX_ANIM_PTR(gAxSharedAnim_02369),
};

static const ax_anim *const sPichuAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00604),
	AX_ANIM_PTR(gAxSharedAnim_00615),
	AX_ANIM_PTR(gAxSharedAnim_00624),
	AX_ANIM_PTR(gAxSharedAnim_00635),
	AX_ANIM_PTR(gAxSharedAnim_00652),
	AX_ANIM_PTR(gAxSharedAnim_00663),
	AX_ANIM_PTR(gAxSharedAnim_00678),
	AX_ANIM_PTR(gAxSharedAnim_00689),
};

static const ax_anim *const sPichuAnimTable8[] = {
	AX_ANIM_PTR(sPichuAnims_8_1),
	AX_ANIM_PTR(sPichuAnims_8_2),
	AX_ANIM_PTR(sPichuAnims_8_3),
	AX_ANIM_PTR(sPichuAnims_8_4),
	AX_ANIM_PTR(sPichuAnims_8_5),
	AX_ANIM_PTR(sPichuAnims_8_6),
	AX_ANIM_PTR(sPichuAnims_8_7),
	AX_ANIM_PTR(sPichuAnims_8_8),
};

static const ax_anim *const sPichuAnimTable9[] = {
	AX_ANIM_PTR(sPichuAnims_9_1),
	AX_ANIM_PTR(sPichuAnims_9_2),
	AX_ANIM_PTR(sPichuAnims_9_3),
	AX_ANIM_PTR(sPichuAnims_9_4),
	AX_ANIM_PTR(sPichuAnims_9_5),
	AX_ANIM_PTR(sPichuAnims_9_6),
	AX_ANIM_PTR(sPichuAnims_9_7),
	AX_ANIM_PTR(sPichuAnims_9_8),
};

static const ax_anim *const sPichuAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01143),
	AX_ANIM_PTR(gAxSharedAnim_01156),
	AX_ANIM_PTR(gAxSharedAnim_01167),
	AX_ANIM_PTR(gAxSharedAnim_01178),
	AX_ANIM_PTR(gAxSharedAnim_01189),
	AX_ANIM_PTR(gAxSharedAnim_01200),
	AX_ANIM_PTR(gAxSharedAnim_01217),
	AX_ANIM_PTR(gAxSharedAnim_01228),
};

static const ax_anim *const sPichuAnimTable11[] = {
	AX_ANIM_PTR(sPichuAnims_11_1),
	AX_ANIM_PTR(gAxSharedAnim_01274),
	AX_ANIM_PTR(sPichuAnims_11_3),
	AX_ANIM_PTR(sPichuAnims_11_4),
	AX_ANIM_PTR(sPichuAnims_11_5),
	AX_ANIM_PTR(sPichuAnims_11_6),
	AX_ANIM_PTR(sPichuAnims_11_7),
	AX_ANIM_PTR(gAxSharedAnim_01451),
};

static const ax_anim *const sPichuAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01472),
	AX_ANIM_PTR(gAxSharedAnim_01520),
	AX_ANIM_PTR(gAxSharedAnim_01507),
	AX_ANIM_PTR(gAxSharedAnim_01500),
	AX_ANIM_PTR(gAxSharedAnim_01499),
	AX_ANIM_PTR(gAxSharedAnim_01491),
	AX_ANIM_PTR(gAxSharedAnim_01481),
	AX_ANIM_PTR(gAxSharedAnim_01473),
};

static const ax_anim *const sPichuAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01525),
	AX_ANIM_PTR(gAxSharedAnim_01579),
	AX_ANIM_PTR(gAxSharedAnim_01577),
	AX_ANIM_PTR(gAxSharedAnim_01555),
	AX_ANIM_PTR(gAxSharedAnim_01549),
	AX_ANIM_PTR(gAxSharedAnim_01544),
	AX_ANIM_PTR(gAxSharedAnim_01539),
	AX_ANIM_PTR(gAxSharedAnim_01531),
};

static const ax_anim *const *const sAxAnimationsPichu[] = {
	sPichuAnimTable1,
	sPichuAnimTable2,
	sPichuAnimTable3,
	sPichuAnimTable4,
	sPichuAnimTable5,
	sPichuAnimTable6,
	sPichuAnimTable7,
	sPichuAnimTable8,
	sPichuAnimTable9,
	sPichuAnimTable10,
	sPichuAnimTable11,
	sPichuAnimTable12,
	sPichuAnimTable13,
};

static const ax_sprite *const sAxSpritesPichu[] = {
	sPichuSprites1,
	sPichuSprites2,
	sPichuSprites3,
	sPichuSprites4,
	sPichuSprites5,
	sPichuSprites6,
	sPichuSprites7,
	sPichuSprites8,
	sPichuSprites9,
	sPichuSprites10,
	sPichuSprites11,
	sPichuSprites12,
	sPichuSprites13,
	sPichuSprites14,
	sPichuSprites15,
	sPichuSprites16,
	sPichuSprites17,
	sPichuSprites18,
	sPichuSprites19,
	sPichuSprites20,
	sPichuSprites21,
	sPichuSprites22,
	sPichuSprites23,
	sPichuSprites24,
	sPichuSprites25,
	sPichuSprites26,
	sPichuSprites27,
	sPichuSprites28,
	sPichuSprites29,
	sPichuSprites30,
	sPichuSprites31,
	sPichuSprites32,
	sPichuSprites33,
	sPichuSprites34,
	sPichuSprites35,
	sPichuSprites36,
	sPichuSprites37,
	sPichuSprites38,
	sPichuSprites39,
	sPichuSprites40,
	sPichuSprites41,
	sPichuSprites42,
	sPichuSprites43,
	sPichuSprites44,
	sPichuSprites45,
	sPichuSprites46,
	sPichuSprites47,
	sPichuSprites48,
	sPichuSprites49,
	sPichuSprites50,
	sPichuSprites51,
	sPichuSprites52,
	sPichuSprites53,
	sPichuSprites54,
};

static const axmain sAxMainPichu = {
	.poses = sAxPosesPichu,
	.animations = sAxAnimationsPichu,
	.animCount = ARRAY_COUNT(sAxAnimationsPichu),
	.spriteData = sAxSpritesPichu,
	.positions = sAxPositionsPichu,
};
