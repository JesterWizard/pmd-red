/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainQwilfish;
const SiroArchive gAxQwilfish = {"SIRO", &sAxMainQwilfish};

static const ax_pose sQwilfishPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose9[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose10[] = {
	AX_POSE(9, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose11[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose12[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose13[] = {
	AX_POSE(12, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose14[] = {
	AX_POSE(13, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose15[] = {
	AX_POSE(14, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose16[] = {
	AX_POSE(9, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose17[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose18[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose19[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose20[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose21[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose22[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose23[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose24[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose28[] = {
	AX_POSE(15, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(16, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose32[] = {
	AX_POSE(17, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose36[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose40[] = {
	AX_POSE(20, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(252, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose44[] = {
	AX_POSE(22, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(23, OAM1(240, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose48[] = {
	AX_POSE(20, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose52[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose56[] = {
	AX_POSE(17, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose89[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose90[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose95[] = {
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose96[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose101[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose102[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose107[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose108[] = {
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose113[] = {
	AX_POSE(32, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose114[] = {
	AX_POSE(33, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose119[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose120[] = {
	AX_POSE(31, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose125[] = {
	AX_POSE(28, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose126[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose131[] = {
	AX_POSE(26, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose132[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose138[] = {
	AX_POSE(34, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose140[] = {
	AX_POSE(35, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose142[] = {
	AX_POSE(36, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(37, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose144[] = {
	AX_POSE(38, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose146[] = {
	AX_POSE(39, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose148[] = {
	AX_POSE(38, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose150[] = {
	AX_POSE(36, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(37, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose152[] = {
	AX_POSE(35, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose153[] = {
	AX_POSE(40, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose154[] = {
	AX_POSE(41, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose155[] = {
	AX_POSE(42, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose156[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose157[] = {
	AX_POSE(44, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose158[] = {
	AX_POSE(45, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose159[] = {
	AX_POSE(46, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose160[] = {
	AX_POSE(45, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose161[] = {
	AX_POSE(44, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose162[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose195[] = {
	AX_POSE(15, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(16, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose196[] = {
	AX_POSE(17, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose197[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose198[] = {
	AX_POSE(20, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose200[] = {
	AX_POSE(20, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(21, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sQwilfishPose202[] = {
	AX_POSE(17, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE(18, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 2)),
	AX_POSE_TERMINATOR
};
static const u8 sQwilfishAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_2_1.lz");
static const u8 sQwilfishAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_2_2.lz");
static const u8 sQwilfishAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_2_3.lz");
static const u8 sQwilfishAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_2_4.lz");
static const u8 sQwilfishAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_2_5.lz");
static const u8 sQwilfishAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_2_6.lz");
static const u8 sQwilfishAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_2_7.lz");
static const u8 sQwilfishAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_2_8.lz");
static const u8 sQwilfishAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_3_1.lz");
static const u8 sQwilfishAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_3_2.lz");
static const u8 sQwilfishAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_3_3.lz");
static const u8 sQwilfishAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_3_4.lz");
static const u8 sQwilfishAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_3_5.lz");
static const u8 sQwilfishAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_3_6.lz");
static const u8 sQwilfishAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_3_7.lz");
static const u8 sQwilfishAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_3_8.lz");
static const u8 sQwilfishAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_4_1.lz");
static const u8 sQwilfishAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_4_2.lz");
static const u8 sQwilfishAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_4_3.lz");
static const u8 sQwilfishAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_4_4.lz");
static const u8 sQwilfishAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_4_5.lz");
static const u8 sQwilfishAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_4_6.lz");
static const u8 sQwilfishAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_4_7.lz");
static const u8 sQwilfishAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_4_8.lz");
static const u8 sQwilfishAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_5_1.lz");
static const u8 sQwilfishAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_5_2.lz");
static const u8 sQwilfishAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_5_3.lz");
static const u8 sQwilfishAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_5_4.lz");
static const u8 sQwilfishAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_5_5.lz");
static const u8 sQwilfishAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_5_6.lz");
static const u8 sQwilfishAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_5_7.lz");
static const u8 sQwilfishAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_5_8.lz");
static const u8 sQwilfishAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_8_1.lz");
static const u8 sQwilfishAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_8_2.lz");
static const u8 sQwilfishAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_8_3.lz");
static const u8 sQwilfishAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_8_4.lz");
static const u8 sQwilfishAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_8_5.lz");
static const u8 sQwilfishAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_8_6.lz");
static const u8 sQwilfishAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_8_7.lz");
static const u8 sQwilfishAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_8_8.lz");
static const u8 sQwilfishAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_9_1.lz");
static const u8 sQwilfishAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_9_2.lz");
static const u8 sQwilfishAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_9_3.lz");
static const u8 sQwilfishAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_9_4.lz");
static const u8 sQwilfishAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_9_5.lz");
static const u8 sQwilfishAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_9_6.lz");
static const u8 sQwilfishAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_9_7.lz");
static const u8 sQwilfishAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_9_8.lz");
static const u8 sQwilfishAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_11_1.lz");
static const u8 sQwilfishAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_11_2.lz");
static const u8 sQwilfishAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_11_3.lz");
static const u8 sQwilfishAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_11_4.lz");
static const u8 sQwilfishAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_11_5.lz");
static const u8 sQwilfishAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_11_6.lz");
static const u8 sQwilfishAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_11_7.lz");
static const u8 sQwilfishAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/qwilfish/sQwilfishAnims_11_8.lz");

static const u8 sQwilfishGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_1.4bpp.lz");
static const ax_sprite sQwilfishSprites1[] = {
	{sQwilfishGfx1, ARRAY_COUNT(sQwilfishGfx1)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_2.4bpp.lz");
static const ax_sprite sQwilfishSprites2[] = {
	{sQwilfishGfx2, ARRAY_COUNT(sQwilfishGfx2)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_3.4bpp.lz");
static const ax_sprite sQwilfishSprites3[] = {
	{sQwilfishGfx3, ARRAY_COUNT(sQwilfishGfx3)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_4.4bpp.lz");
static const ax_sprite sQwilfishSprites4[] = {
	{sQwilfishGfx4, ARRAY_COUNT(sQwilfishGfx4)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_5.4bpp.lz");
static const ax_sprite sQwilfishSprites5[] = {
	{sQwilfishGfx5, ARRAY_COUNT(sQwilfishGfx5)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_6.4bpp.lz");
static const ax_sprite sQwilfishSprites6[] = {
	{sQwilfishGfx6, ARRAY_COUNT(sQwilfishGfx6)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_7.4bpp.lz");
static const ax_sprite sQwilfishSprites7[] = {
	{sQwilfishGfx7, ARRAY_COUNT(sQwilfishGfx7)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_8.4bpp.lz");
static const ax_sprite sQwilfishSprites8[] = {
	{sQwilfishGfx8, ARRAY_COUNT(sQwilfishGfx8)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_9.4bpp.lz");
static const ax_sprite sQwilfishSprites9[] = {
	{sQwilfishGfx9, ARRAY_COUNT(sQwilfishGfx9)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_10.4bpp.lz");
static const ax_sprite sQwilfishSprites10[] = {
	{sQwilfishGfx10, ARRAY_COUNT(sQwilfishGfx10)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_11.4bpp.lz");
static const ax_sprite sQwilfishSprites11[] = {
	{sQwilfishGfx11, ARRAY_COUNT(sQwilfishGfx11)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_12.4bpp.lz");
static const ax_sprite sQwilfishSprites12[] = {
	{sQwilfishGfx12, ARRAY_COUNT(sQwilfishGfx12)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_13.4bpp.lz");
static const ax_sprite sQwilfishSprites13[] = {
	{sQwilfishGfx13, ARRAY_COUNT(sQwilfishGfx13)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_14.4bpp.lz");
static const ax_sprite sQwilfishSprites14[] = {
	{sQwilfishGfx14, ARRAY_COUNT(sQwilfishGfx14)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_15.4bpp.lz");
static const ax_sprite sQwilfishSprites15[] = {
	{sQwilfishGfx15, ARRAY_COUNT(sQwilfishGfx15)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_16.4bpp.lz");
static const ax_sprite sQwilfishSprites16[] = {
	{sQwilfishGfx16, ARRAY_COUNT(sQwilfishGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_17.4bpp.lz");
static const ax_sprite sQwilfishSprites17[] = {
	{sQwilfishGfx17, ARRAY_COUNT(sQwilfishGfx17)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_18.4bpp.lz");
static const ax_sprite sQwilfishSprites18[] = {
	{NULL, 64}, 
	{sQwilfishGfx18, ARRAY_COUNT(sQwilfishGfx18)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_19.4bpp.lz");
static const ax_sprite sQwilfishSprites19[] = {
	{sQwilfishGfx19, ARRAY_COUNT(sQwilfishGfx19)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_20.4bpp.lz");
static const u8 sQwilfishGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_20_1.4bpp.lz");
static const u8 sQwilfishGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_20_2.4bpp.lz");
static const ax_sprite sQwilfishSprites20[] = {
	{sQwilfishGfx20, ARRAY_COUNT(sQwilfishGfx20)}, 
	{NULL, 32}, 
	{sQwilfishGfx20_1, ARRAY_COUNT(sQwilfishGfx20_1)}, 
	{NULL, 32}, 
	{sQwilfishGfx20_2, ARRAY_COUNT(sQwilfishGfx20_2)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_21.4bpp.lz");
static const ax_sprite sQwilfishSprites21[] = {
	{sQwilfishGfx21, ARRAY_COUNT(sQwilfishGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_22.4bpp.lz");
static const ax_sprite sQwilfishSprites22[] = {
	{sQwilfishGfx22, ARRAY_COUNT(sQwilfishGfx22)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_23.4bpp.lz");
static const ax_sprite sQwilfishSprites23[] = {
	{sQwilfishGfx23, ARRAY_COUNT(sQwilfishGfx23)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_24.4bpp.lz");
static const ax_sprite sQwilfishSprites24[] = {
	{sQwilfishGfx24, ARRAY_COUNT(sQwilfishGfx24)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_25.4bpp.lz");
static const u8 sQwilfishGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_25_1.4bpp.lz");
static const u8 sQwilfishGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_25_2.4bpp.lz");
static const u8 sQwilfishGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_25_3.4bpp.lz");
static const ax_sprite sQwilfishSprites25[] = {
	{sQwilfishGfx25, ARRAY_COUNT(sQwilfishGfx25)}, 
	{NULL, 64}, 
	{sQwilfishGfx25_1, ARRAY_COUNT(sQwilfishGfx25_1)}, 
	{NULL, 32}, 
	{sQwilfishGfx25_2, ARRAY_COUNT(sQwilfishGfx25_2)}, 
	{NULL, 32}, 
	{sQwilfishGfx25_3, ARRAY_COUNT(sQwilfishGfx25_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_26.4bpp.lz");
static const u8 sQwilfishGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_26_1.4bpp.lz");
static const u8 sQwilfishGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_26_2.4bpp.lz");
static const ax_sprite sQwilfishSprites26[] = {
	{NULL, 32}, 
	{sQwilfishGfx26, ARRAY_COUNT(sQwilfishGfx26)}, 
	{NULL, 32}, 
	{sQwilfishGfx26_1, ARRAY_COUNT(sQwilfishGfx26_1)}, 
	{NULL, 32}, 
	{sQwilfishGfx26_2, ARRAY_COUNT(sQwilfishGfx26_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_27.4bpp.lz");
static const u8 sQwilfishGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_27_1.4bpp.lz");
static const u8 sQwilfishGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_27_2.4bpp.lz");
static const u8 sQwilfishGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_27_3.4bpp.lz");
static const ax_sprite sQwilfishSprites27[] = {
	{sQwilfishGfx27, ARRAY_COUNT(sQwilfishGfx27)}, 
	{NULL, 32}, 
	{sQwilfishGfx27_1, ARRAY_COUNT(sQwilfishGfx27_1)}, 
	{NULL, 32}, 
	{sQwilfishGfx27_2, ARRAY_COUNT(sQwilfishGfx27_2)}, 
	{NULL, 64}, 
	{sQwilfishGfx27_3, ARRAY_COUNT(sQwilfishGfx27_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_28.4bpp.lz");
static const u8 sQwilfishGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_28_1.4bpp.lz");
static const ax_sprite sQwilfishSprites28[] = {
	{sQwilfishGfx28, ARRAY_COUNT(sQwilfishGfx28)}, 
	{NULL, 64}, 
	{sQwilfishGfx28_1, ARRAY_COUNT(sQwilfishGfx28_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_29.4bpp.lz");
static const u8 sQwilfishGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_29_1.4bpp.lz");
static const u8 sQwilfishGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_29_2.4bpp.lz");
static const ax_sprite sQwilfishSprites29[] = {
	{sQwilfishGfx29, ARRAY_COUNT(sQwilfishGfx29)}, 
	{NULL, 32}, 
	{sQwilfishGfx29_1, ARRAY_COUNT(sQwilfishGfx29_1)}, 
	{NULL, 32}, 
	{sQwilfishGfx29_2, ARRAY_COUNT(sQwilfishGfx29_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_30.4bpp.lz");
static const u8 sQwilfishGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_30_1.4bpp.lz");
static const u8 sQwilfishGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_30_2.4bpp.lz");
static const ax_sprite sQwilfishSprites30[] = {
	{sQwilfishGfx30, ARRAY_COUNT(sQwilfishGfx30)}, 
	{NULL, 64}, 
	{sQwilfishGfx30_1, ARRAY_COUNT(sQwilfishGfx30_1)}, 
	{NULL, 32}, 
	{sQwilfishGfx30_2, ARRAY_COUNT(sQwilfishGfx30_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_31.4bpp.lz");
static const u8 sQwilfishGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_31_1.4bpp.lz");
static const ax_sprite sQwilfishSprites31[] = {
	{sQwilfishGfx31, ARRAY_COUNT(sQwilfishGfx31)}, 
	{NULL, 32}, 
	{sQwilfishGfx31_1, ARRAY_COUNT(sQwilfishGfx31_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_32.4bpp.lz");
static const u8 sQwilfishGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_32_1.4bpp.lz");
static const u8 sQwilfishGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_32_2.4bpp.lz");
static const u8 sQwilfishGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_32_3.4bpp.lz");
static const ax_sprite sQwilfishSprites32[] = {
	{sQwilfishGfx32, ARRAY_COUNT(sQwilfishGfx32)}, 
	{NULL, 32}, 
	{sQwilfishGfx32_1, ARRAY_COUNT(sQwilfishGfx32_1)}, 
	{NULL, 32}, 
	{sQwilfishGfx32_2, ARRAY_COUNT(sQwilfishGfx32_2)}, 
	{NULL, 64}, 
	{sQwilfishGfx32_3, ARRAY_COUNT(sQwilfishGfx32_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_33.4bpp.lz");
static const u8 sQwilfishGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_33_1.4bpp.lz");
static const u8 sQwilfishGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_33_2.4bpp.lz");
static const ax_sprite sQwilfishSprites33[] = {
	{sQwilfishGfx33, ARRAY_COUNT(sQwilfishGfx33)}, 
	{NULL, 32}, 
	{sQwilfishGfx33_1, ARRAY_COUNT(sQwilfishGfx33_1)}, 
	{NULL, 32}, 
	{sQwilfishGfx33_2, ARRAY_COUNT(sQwilfishGfx33_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_34.4bpp.lz");
static const u8 sQwilfishGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_34_1.4bpp.lz");
static const u8 sQwilfishGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_34_2.4bpp.lz");
static const u8 sQwilfishGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_34_3.4bpp.lz");
static const ax_sprite sQwilfishSprites34[] = {
	{sQwilfishGfx34, ARRAY_COUNT(sQwilfishGfx34)}, 
	{NULL, 32}, 
	{sQwilfishGfx34_1, ARRAY_COUNT(sQwilfishGfx34_1)}, 
	{NULL, 32}, 
	{sQwilfishGfx34_2, ARRAY_COUNT(sQwilfishGfx34_2)}, 
	{NULL, 64}, 
	{sQwilfishGfx34_3, ARRAY_COUNT(sQwilfishGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_35.4bpp.lz");
static const ax_sprite sQwilfishSprites35[] = {
	{sQwilfishGfx35, ARRAY_COUNT(sQwilfishGfx35)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_36.4bpp.lz");
static const ax_sprite sQwilfishSprites36[] = {
	{sQwilfishGfx36, ARRAY_COUNT(sQwilfishGfx36)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_37.4bpp.lz");
static const ax_sprite sQwilfishSprites37[] = {
	{sQwilfishGfx37, ARRAY_COUNT(sQwilfishGfx37)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_38.4bpp.lz");
static const ax_sprite sQwilfishSprites38[] = {
	{sQwilfishGfx38, ARRAY_COUNT(sQwilfishGfx38)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_39.4bpp.lz");
static const ax_sprite sQwilfishSprites39[] = {
	{sQwilfishGfx39, ARRAY_COUNT(sQwilfishGfx39)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_40.4bpp.lz");
static const ax_sprite sQwilfishSprites40[] = {
	{sQwilfishGfx40, ARRAY_COUNT(sQwilfishGfx40)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_41.4bpp.lz");
static const ax_sprite sQwilfishSprites41[] = {
	{sQwilfishGfx41, ARRAY_COUNT(sQwilfishGfx41)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_42.4bpp.lz");
static const ax_sprite sQwilfishSprites42[] = {
	{sQwilfishGfx42, ARRAY_COUNT(sQwilfishGfx42)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_43.4bpp.lz");
static const ax_sprite sQwilfishSprites43[] = {
	{sQwilfishGfx43, ARRAY_COUNT(sQwilfishGfx43)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_44.4bpp.lz");
static const ax_sprite sQwilfishSprites44[] = {
	{sQwilfishGfx44, ARRAY_COUNT(sQwilfishGfx44)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_45.4bpp.lz");
static const ax_sprite sQwilfishSprites45[] = {
	{sQwilfishGfx45, ARRAY_COUNT(sQwilfishGfx45)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_46.4bpp.lz");
static const ax_sprite sQwilfishSprites46[] = {
	{sQwilfishGfx46, ARRAY_COUNT(sQwilfishGfx46)}, 
	{NULL, 0}
};
static const u8 sQwilfishGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/qwilfish/sprite_47.4bpp.lz");
static const ax_sprite sQwilfishSprites47[] = {
	{sQwilfishGfx47, ARRAY_COUNT(sQwilfishGfx47)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesQwilfish[] = {
	sQwilfishPose1,
	sQwilfishPose2,
	sQwilfishPose3,
	sQwilfishPose4,
	sQwilfishPose5,
	sQwilfishPose6,
	sQwilfishPose7,
	sQwilfishPose8,
	sQwilfishPose9,
	sQwilfishPose10,
	sQwilfishPose11,
	sQwilfishPose12,
	sQwilfishPose13,
	sQwilfishPose14,
	sQwilfishPose15,
	sQwilfishPose16,
	sQwilfishPose17,
	sQwilfishPose18,
	sQwilfishPose19,
	sQwilfishPose20,
	sQwilfishPose21,
	sQwilfishPose22,
	sQwilfishPose23,
	sQwilfishPose24,
	sQwilfishPose1,
	sQwilfishPose2,
	sQwilfishPose3,
	sQwilfishPose28,
	sQwilfishPose4,
	sQwilfishPose5,
	sQwilfishPose6,
	sQwilfishPose32,
	sQwilfishPose7,
	sQwilfishPose8,
	sQwilfishPose9,
	sQwilfishPose36,
	sQwilfishPose10,
	sQwilfishPose11,
	sQwilfishPose12,
	sQwilfishPose40,
	sQwilfishPose13,
	sQwilfishPose14,
	sQwilfishPose15,
	sQwilfishPose44,
	sQwilfishPose16,
	sQwilfishPose17,
	sQwilfishPose18,
	sQwilfishPose48,
	sQwilfishPose19,
	sQwilfishPose20,
	sQwilfishPose21,
	sQwilfishPose52,
	sQwilfishPose22,
	sQwilfishPose23,
	sQwilfishPose24,
	sQwilfishPose56,
	sQwilfishPose1,
	sQwilfishPose2,
	sQwilfishPose3,
	sQwilfishPose28,
	sQwilfishPose4,
	sQwilfishPose5,
	sQwilfishPose6,
	sQwilfishPose32,
	sQwilfishPose7,
	sQwilfishPose8,
	sQwilfishPose9,
	sQwilfishPose36,
	sQwilfishPose10,
	sQwilfishPose11,
	sQwilfishPose12,
	sQwilfishPose40,
	sQwilfishPose13,
	sQwilfishPose14,
	sQwilfishPose15,
	sQwilfishPose44,
	sQwilfishPose16,
	sQwilfishPose17,
	sQwilfishPose18,
	sQwilfishPose48,
	sQwilfishPose19,
	sQwilfishPose20,
	sQwilfishPose21,
	sQwilfishPose52,
	sQwilfishPose22,
	sQwilfishPose23,
	sQwilfishPose24,
	sQwilfishPose56,
	sQwilfishPose89,
	sQwilfishPose90,
	sQwilfishPose1,
	sQwilfishPose2,
	sQwilfishPose3,
	sQwilfishPose28,
	sQwilfishPose95,
	sQwilfishPose96,
	sQwilfishPose4,
	sQwilfishPose5,
	sQwilfishPose6,
	sQwilfishPose32,
	sQwilfishPose101,
	sQwilfishPose102,
	sQwilfishPose7,
	sQwilfishPose8,
	sQwilfishPose9,
	sQwilfishPose36,
	sQwilfishPose107,
	sQwilfishPose108,
	sQwilfishPose10,
	sQwilfishPose11,
	sQwilfishPose12,
	sQwilfishPose40,
	sQwilfishPose113,
	sQwilfishPose114,
	sQwilfishPose13,
	sQwilfishPose14,
	sQwilfishPose15,
	sQwilfishPose44,
	sQwilfishPose119,
	sQwilfishPose120,
	sQwilfishPose16,
	sQwilfishPose17,
	sQwilfishPose18,
	sQwilfishPose48,
	sQwilfishPose125,
	sQwilfishPose126,
	sQwilfishPose19,
	sQwilfishPose20,
	sQwilfishPose21,
	sQwilfishPose52,
	sQwilfishPose131,
	sQwilfishPose132,
	sQwilfishPose22,
	sQwilfishPose23,
	sQwilfishPose24,
	sQwilfishPose56,
	sQwilfishPose1,
	sQwilfishPose138,
	sQwilfishPose4,
	sQwilfishPose140,
	sQwilfishPose7,
	sQwilfishPose142,
	sQwilfishPose10,
	sQwilfishPose144,
	sQwilfishPose13,
	sQwilfishPose146,
	sQwilfishPose16,
	sQwilfishPose148,
	sQwilfishPose19,
	sQwilfishPose150,
	sQwilfishPose22,
	sQwilfishPose152,
	sQwilfishPose153,
	sQwilfishPose154,
	sQwilfishPose155,
	sQwilfishPose156,
	sQwilfishPose157,
	sQwilfishPose158,
	sQwilfishPose159,
	sQwilfishPose160,
	sQwilfishPose161,
	sQwilfishPose162,
	sQwilfishPose1,
	sQwilfishPose2,
	sQwilfishPose3,
	sQwilfishPose28,
	sQwilfishPose4,
	sQwilfishPose5,
	sQwilfishPose6,
	sQwilfishPose32,
	sQwilfishPose7,
	sQwilfishPose8,
	sQwilfishPose9,
	sQwilfishPose36,
	sQwilfishPose10,
	sQwilfishPose11,
	sQwilfishPose12,
	sQwilfishPose40,
	sQwilfishPose13,
	sQwilfishPose14,
	sQwilfishPose15,
	sQwilfishPose44,
	sQwilfishPose16,
	sQwilfishPose17,
	sQwilfishPose18,
	sQwilfishPose48,
	sQwilfishPose19,
	sQwilfishPose20,
	sQwilfishPose21,
	sQwilfishPose52,
	sQwilfishPose22,
	sQwilfishPose23,
	sQwilfishPose24,
	sQwilfishPose56,
	sQwilfishPose195,
	sQwilfishPose196,
	sQwilfishPose197,
	sQwilfishPose198,
	sQwilfishPose44,
	sQwilfishPose200,
	sQwilfishPose36,
	sQwilfishPose202,
	sQwilfishPose195,
	sQwilfishPose202,
	sQwilfishPose36,
	sQwilfishPose200,
	sQwilfishPose44,
	sQwilfishPose198,
	sQwilfishPose197,
	sQwilfishPose196,
	sQwilfishPose1,
	sQwilfishPose2,
	sQwilfishPose3,
	sQwilfishPose4,
	sQwilfishPose5,
	sQwilfishPose6,
	sQwilfishPose7,
	sQwilfishPose8,
	sQwilfishPose9,
	sQwilfishPose10,
	sQwilfishPose11,
	sQwilfishPose12,
	sQwilfishPose13,
	sQwilfishPose14,
	sQwilfishPose15,
	sQwilfishPose16,
	sQwilfishPose17,
	sQwilfishPose18,
	sQwilfishPose19,
	sQwilfishPose20,
	sQwilfishPose21,
	sQwilfishPose22,
	sQwilfishPose23,
	sQwilfishPose24,
	sQwilfishPose195,
	sQwilfishPose202,
	sQwilfishPose36,
	sQwilfishPose200,
	sQwilfishPose44,
	sQwilfishPose198,
	sQwilfishPose197,
	sQwilfishPose196,
	sQwilfishPose1,
	sQwilfishPose22,
	sQwilfishPose19,
	sQwilfishPose16,
	sQwilfishPose13,
	sQwilfishPose10,
	sQwilfishPose7,
	sQwilfishPose4,
};

static const struct PositionSets sAxPositionsQwilfish[] = {
	[0] = { .set = { {0, -5}, {-6, -8}, {6, -8}, {0, -8} } },
	[1] = { .set = { {-1, -5}, {-5, -9}, {5, -6}, {0, -8} } },
	[2] = { .set = { {1, -5}, {-5, -6}, {5, -9}, {0, -8} } },
	[3] = { .set = { {4, -7}, {3, -11}, {-4, -6}, {-1, -9} } },
	[4] = { .set = { {4, -6}, {3, -12}, {-3, -5}, {-1, -9} } },
	[5] = { .set = { {2, -5}, {5, -9}, {-5, -6}, {-1, -9} } },
	[6] = { .set = { {5, -8}, {0, -10}, {-1, -5}, {-1, -9} } },
	[7] = { .set = { {5, -9}, {-3, -10}, {1, -5}, {-1, -9} } },
	[8] = { .set = { {4, -7}, {0, -11}, {-1, -5}, {-1, -8} } },
	[9] = { .set = { {1, -11}, {-3, -10}, {3, -6}, {0, -9} } },
	[10] = { .set = { {2, -10}, {-5, -9}, {4, -8}, {-1, -9} } },
	[11] = { .set = { {5, -9}, {-3, -11}, {3, -6}, {-1, -9} } },
	[12] = { .set = { {-1, -10}, {5, -7}, {-7, -7}, {-1, -9} } },
	[13] = { .set = { {-2, -10}, {3, -10}, {-7, -9}, {-1, -10} } },
	[14] = { .set = { {1, -10}, {5, -9}, {-4, -10}, {0, -10} } },
	[15] = { .set = { {-3, -11}, {1, -10}, {-5, -6}, {-2, -9} } },
	[16] = { .set = { {-4, -10}, {3, -9}, {-6, -8}, {-1, -9} } },
	[17] = { .set = { {-7, -9}, {1, -11}, {-5, -6}, {-1, -9} } },
	[18] = { .set = { {-7, -8}, {-2, -10}, {-1, -5}, {-1, -9} } },
	[19] = { .set = { {-7, -9}, {1, -10}, {-3, -5}, {-1, -9} } },
	[20] = { .set = { {-6, -7}, {-2, -11}, {-1, -5}, {-1, -8} } },
	[21] = { .set = { {-6, -7}, {-5, -11}, {2, -6}, {-1, -9} } },
	[22] = { .set = { {-6, -6}, {-5, -12}, {1, -5}, {-1, -9} } },
	[23] = { .set = { {-4, -5}, {-7, -9}, {3, -6}, {-1, -9} } },
	[24] = { .set = { {0, -5}, {-6, -8}, {6, -8}, {0, -8} } },
	[25] = { .set = { {-1, -5}, {-5, -9}, {5, -6}, {0, -8} } },
	[26] = { .set = { {1, -5}, {-5, -6}, {5, -9}, {0, -8} } },
	[27] = { .set = { {0, -2}, {-8, -6}, {8, -6}, {0, -5} } },
	[28] = { .set = { {4, -7}, {3, -11}, {-4, -6}, {-1, -9} } },
	[29] = { .set = { {4, -6}, {3, -12}, {-3, -5}, {-1, -9} } },
	[30] = { .set = { {2, -5}, {5, -9}, {-5, -6}, {-1, -9} } },
	[31] = { .set = { {4, -5}, {4, -10}, {-5, -7}, {0, -8} } },
	[32] = { .set = { {5, -8}, {0, -10}, {-1, -5}, {-1, -9} } },
	[33] = { .set = { {5, -9}, {-3, -10}, {1, -5}, {-1, -9} } },
	[34] = { .set = { {4, -7}, {0, -11}, {-1, -5}, {-1, -8} } },
	[35] = { .set = { {6, -6}, {0, -10}, {-2, -7}, {1, -7} } },
	[36] = { .set = { {1, -11}, {-3, -10}, {3, -6}, {0, -9} } },
	[37] = { .set = { {2, -10}, {-5, -9}, {4, -8}, {-1, -9} } },
	[38] = { .set = { {5, -9}, {-3, -11}, {3, -6}, {-1, -9} } },
	[39] = { .set = { {4, -10}, {-2, -13}, {9, -8}, {2, -10} } },
	[40] = { .set = { {-1, -10}, {5, -7}, {-7, -7}, {-1, -9} } },
	[41] = { .set = { {-2, -10}, {3, -10}, {-7, -9}, {-1, -10} } },
	[42] = { .set = { {1, -10}, {5, -9}, {-4, -10}, {0, -10} } },
	[43] = { .set = { {-1, -9}, {8, -9}, {-10, -9}, {-1, -8} } },
	[44] = { .set = { {-3, -11}, {1, -10}, {-5, -6}, {-2, -9} } },
	[45] = { .set = { {-4, -10}, {3, -9}, {-6, -8}, {-1, -9} } },
	[46] = { .set = { {-7, -9}, {1, -11}, {-5, -6}, {-1, -9} } },
	[47] = { .set = { {-6, -10}, {0, -13}, {-11, -8}, {-4, -10} } },
	[48] = { .set = { {-7, -8}, {-2, -10}, {-1, -5}, {-1, -9} } },
	[49] = { .set = { {-7, -9}, {1, -10}, {-3, -5}, {-1, -9} } },
	[50] = { .set = { {-6, -7}, {-2, -11}, {-1, -5}, {-1, -8} } },
	[51] = { .set = { {-7, -6}, {-1, -10}, {1, -7}, {-2, -7} } },
	[52] = { .set = { {-6, -7}, {-5, -11}, {2, -6}, {-1, -9} } },
	[53] = { .set = { {-6, -6}, {-5, -12}, {1, -5}, {-1, -9} } },
	[54] = { .set = { {-4, -5}, {-7, -9}, {3, -6}, {-1, -9} } },
	[55] = { .set = { {-6, -5}, {-6, -10}, {3, -7}, {-2, -8} } },
	[56] = { .set = { {0, -5}, {-6, -8}, {6, -8}, {0, -8} } },
	[57] = { .set = { {-1, -5}, {-5, -9}, {5, -6}, {0, -8} } },
	[58] = { .set = { {1, -5}, {-5, -6}, {5, -9}, {0, -8} } },
	[59] = { .set = { {0, -2}, {-8, -6}, {8, -6}, {0, -5} } },
	[60] = { .set = { {4, -7}, {3, -11}, {-4, -6}, {-1, -9} } },
	[61] = { .set = { {4, -6}, {3, -12}, {-3, -5}, {-1, -9} } },
	[62] = { .set = { {2, -5}, {5, -9}, {-5, -6}, {-1, -9} } },
	[63] = { .set = { {4, -5}, {4, -10}, {-5, -7}, {0, -8} } },
	[64] = { .set = { {5, -8}, {0, -10}, {-1, -5}, {-1, -9} } },
	[65] = { .set = { {5, -9}, {-3, -10}, {1, -5}, {-1, -9} } },
	[66] = { .set = { {4, -7}, {0, -11}, {-1, -5}, {-1, -8} } },
	[67] = { .set = { {6, -6}, {0, -10}, {-2, -7}, {1, -7} } },
	[68] = { .set = { {1, -11}, {-3, -10}, {3, -6}, {0, -9} } },
	[69] = { .set = { {2, -10}, {-5, -9}, {4, -8}, {-1, -9} } },
	[70] = { .set = { {5, -9}, {-3, -11}, {3, -6}, {-1, -9} } },
	[71] = { .set = { {4, -10}, {-2, -13}, {9, -8}, {2, -10} } },
	[72] = { .set = { {-1, -10}, {5, -7}, {-7, -7}, {-1, -9} } },
	[73] = { .set = { {-2, -10}, {3, -10}, {-7, -9}, {-1, -10} } },
	[74] = { .set = { {1, -10}, {5, -9}, {-4, -10}, {0, -10} } },
	[75] = { .set = { {-1, -9}, {8, -9}, {-10, -9}, {-1, -8} } },
	[76] = { .set = { {-3, -11}, {1, -10}, {-5, -6}, {-2, -9} } },
	[77] = { .set = { {-4, -10}, {3, -9}, {-6, -8}, {-1, -9} } },
	[78] = { .set = { {-7, -9}, {1, -11}, {-5, -6}, {-1, -9} } },
	[79] = { .set = { {-6, -10}, {0, -13}, {-11, -8}, {-4, -10} } },
	[80] = { .set = { {-7, -8}, {-2, -10}, {-1, -5}, {-1, -9} } },
	[81] = { .set = { {-7, -9}, {1, -10}, {-3, -5}, {-1, -9} } },
	[82] = { .set = { {-6, -7}, {-2, -11}, {-1, -5}, {-1, -8} } },
	[83] = { .set = { {-7, -6}, {-1, -10}, {1, -7}, {-2, -7} } },
	[84] = { .set = { {-6, -7}, {-5, -11}, {2, -6}, {-1, -9} } },
	[85] = { .set = { {-6, -6}, {-5, -12}, {1, -5}, {-1, -9} } },
	[86] = { .set = { {-4, -5}, {-7, -9}, {3, -6}, {-1, -9} } },
	[87] = { .set = { {-6, -5}, {-6, -10}, {3, -7}, {-2, -8} } },
	[88] = { .set = { {0, -4}, {-11, -8}, {9, -8}, {0, -8} } },
	[89] = { .set = { {0, -4}, {-9, -8}, {11, -8}, {0, -7} } },
	[90] = { .set = { {0, -5}, {-6, -8}, {6, -8}, {0, -8} } },
	[91] = { .set = { {-1, -5}, {-5, -9}, {5, -6}, {0, -8} } },
	[92] = { .set = { {1, -5}, {-5, -6}, {5, -9}, {0, -8} } },
	[93] = { .set = { {0, -2}, {-8, -6}, {8, -6}, {0, -5} } },
	[94] = { .set = { {5, -6}, {10, -9}, {-4, -7}, {-1, -9} } },
	[95] = { .set = { {5, -6}, {8, -9}, {-6, -7}, {-1, -9} } },
	[96] = { .set = { {4, -7}, {3, -11}, {-4, -6}, {-1, -9} } },
	[97] = { .set = { {4, -6}, {3, -12}, {-3, -5}, {-1, -9} } },
	[98] = { .set = { {2, -5}, {5, -9}, {-5, -6}, {-1, -9} } },
	[99] = { .set = { {4, -5}, {4, -10}, {-5, -7}, {0, -8} } },
	[100] = { .set = { {7, -9}, {-1, -13}, {-1, -5}, {-2, -10} } },
	[101] = { .set = { {7, -9}, {-3, -13}, {-4, -7}, {-1, -9} } },
	[102] = { .set = { {5, -8}, {0, -10}, {-1, -5}, {-1, -9} } },
	[103] = { .set = { {5, -9}, {-3, -10}, {1, -5}, {-1, -9} } },
	[104] = { .set = { {4, -7}, {0, -11}, {-1, -5}, {-1, -8} } },
	[105] = { .set = { {6, -6}, {0, -10}, {-2, -7}, {1, -7} } },
	[106] = { .set = { {3, -9}, {-4, -13}, {6, -6}, {-1, -10} } },
	[107] = { .set = { {5, -10}, {-7, -13}, {9, -7}, {0, -10} } },
	[108] = { .set = { {1, -11}, {-3, -10}, {3, -6}, {0, -9} } },
	[109] = { .set = { {2, -10}, {-5, -9}, {4, -8}, {-1, -9} } },
	[110] = { .set = { {5, -9}, {-3, -11}, {3, -6}, {-1, -9} } },
	[111] = { .set = { {4, -10}, {-2, -13}, {9, -8}, {2, -10} } },
	[112] = { .set = { {-2, -10}, {6, -11}, {-9, -7}, {-1, -9} } },
	[113] = { .set = { {0, -10}, {7, -7}, {-8, -11}, {-1, -10} } },
	[114] = { .set = { {-1, -10}, {5, -7}, {-7, -7}, {-1, -9} } },
	[115] = { .set = { {-2, -10}, {3, -10}, {-7, -9}, {-1, -10} } },
	[116] = { .set = { {1, -10}, {5, -9}, {-4, -10}, {0, -10} } },
	[117] = { .set = { {-1, -9}, {8, -9}, {-10, -9}, {-1, -8} } },
	[118] = { .set = { {-4, -9}, {3, -13}, {-7, -6}, {0, -10} } },
	[119] = { .set = { {-6, -10}, {6, -13}, {-10, -7}, {-1, -10} } },
	[120] = { .set = { {-3, -11}, {1, -10}, {-5, -6}, {-2, -9} } },
	[121] = { .set = { {-4, -10}, {3, -9}, {-6, -8}, {-1, -9} } },
	[122] = { .set = { {-7, -9}, {1, -11}, {-5, -6}, {-1, -9} } },
	[123] = { .set = { {-6, -10}, {0, -13}, {-11, -8}, {-4, -10} } },
	[124] = { .set = { {-9, -9}, {-1, -13}, {-1, -5}, {0, -10} } },
	[125] = { .set = { {-9, -9}, {1, -13}, {2, -7}, {-1, -9} } },
	[126] = { .set = { {-7, -8}, {-2, -10}, {-1, -5}, {-1, -9} } },
	[127] = { .set = { {-7, -9}, {1, -10}, {-3, -5}, {-1, -9} } },
	[128] = { .set = { {-6, -7}, {-2, -11}, {-1, -5}, {-1, -8} } },
	[129] = { .set = { {-7, -6}, {-1, -10}, {1, -7}, {-2, -7} } },
	[130] = { .set = { {-6, -6}, {-11, -9}, {3, -7}, {0, -9} } },
	[131] = { .set = { {-6, -6}, {-9, -9}, {5, -7}, {0, -9} } },
	[132] = { .set = { {-6, -7}, {-5, -11}, {2, -6}, {-1, -9} } },
	[133] = { .set = { {-6, -6}, {-5, -12}, {1, -5}, {-1, -9} } },
	[134] = { .set = { {-4, -5}, {-7, -9}, {3, -6}, {-1, -9} } },
	[135] = { .set = { {-6, -5}, {-6, -10}, {3, -7}, {-2, -8} } },
	[136] = { .set = { {0, -5}, {-6, -8}, {6, -8}, {0, -8} } },
	[137] = { .set = { {0, -5}, {-5, -7}, {5, -7}, {0, -7} } },
	[138] = { .set = { {4, -7}, {3, -11}, {-4, -6}, {-1, -9} } },
	[139] = { .set = { {4, -8}, {3, -10}, {-1, -7}, {0, -9} } },
	[140] = { .set = { {5, -8}, {0, -10}, {-1, -5}, {-1, -9} } },
	[141] = { .set = { {4, -8}, {-1, -10}, {-1, -5}, {-1, -8} } },
	[142] = { .set = { {1, -11}, {-3, -10}, {3, -6}, {0, -9} } },
	[143] = { .set = { {2, -9}, {-2, -11}, {2, -7}, {0, -9} } },
	[144] = { .set = { {-1, -10}, {5, -7}, {-7, -7}, {-1, -9} } },
	[145] = { .set = { {-1, -9}, {4, -8}, {-6, -8}, {-1, -8} } },
	[146] = { .set = { {-3, -11}, {1, -10}, {-5, -6}, {-2, -9} } },
	[147] = { .set = { {-3, -9}, {1, -11}, {-3, -7}, {-1, -9} } },
	[148] = { .set = { {-7, -8}, {-2, -10}, {-1, -5}, {-1, -9} } },
	[149] = { .set = { {-6, -8}, {-1, -10}, {-1, -5}, {-1, -8} } },
	[150] = { .set = { {-6, -7}, {-5, -11}, {2, -6}, {-1, -9} } },
	[151] = { .set = { {-5, -8}, {-4, -10}, {0, -7}, {-1, -9} } },
	[152] = { .set = { {0, -6}, {-6, -9}, {6, -9}, {0, -8} } },
	[153] = { .set = { {0, -5}, {-6, -8}, {6, -8}, {0, -7} } },
	[154] = { .set = { {0, -12}, {-6, -9}, {6, -9}, {0, -11} } },
	[155] = { .set = { {3, -12}, {5, -11}, {-3, -7}, {0, -10} } },
	[156] = { .set = { {5, -11}, {-1, -12}, {0, -8}, {0, -11} } },
	[157] = { .set = { {2, -13}, {-3, -11}, {5, -8}, {-1, -10} } },
	[158] = { .set = { {0, -13}, {6, -8}, {-6, -8}, {0, -11} } },
	[159] = { .set = { {-3, -13}, {2, -11}, {-6, -8}, {0, -10} } },
	[160] = { .set = { {-6, -11}, {0, -12}, {-1, -8}, {-1, -11} } },
	[161] = { .set = { {-4, -12}, {-6, -11}, {2, -7}, {-1, -10} } },
	[162] = { .set = { {0, -5}, {-6, -8}, {6, -8}, {0, -8} } },
	[163] = { .set = { {-1, -5}, {-5, -9}, {5, -6}, {0, -8} } },
	[164] = { .set = { {1, -5}, {-5, -6}, {5, -9}, {0, -8} } },
	[165] = { .set = { {0, -2}, {-8, -6}, {8, -6}, {0, -5} } },
	[166] = { .set = { {4, -7}, {3, -11}, {-4, -6}, {-1, -9} } },
	[167] = { .set = { {4, -6}, {3, -12}, {-3, -5}, {-1, -9} } },
	[168] = { .set = { {2, -5}, {5, -9}, {-5, -6}, {-1, -9} } },
	[169] = { .set = { {4, -5}, {4, -10}, {-5, -7}, {0, -8} } },
	[170] = { .set = { {5, -8}, {0, -10}, {-1, -5}, {-1, -9} } },
	[171] = { .set = { {5, -9}, {-3, -10}, {1, -5}, {-1, -9} } },
	[172] = { .set = { {4, -7}, {0, -11}, {-1, -5}, {-1, -8} } },
	[173] = { .set = { {6, -6}, {0, -10}, {-2, -7}, {1, -7} } },
	[174] = { .set = { {1, -11}, {-3, -10}, {3, -6}, {0, -9} } },
	[175] = { .set = { {2, -10}, {-5, -9}, {4, -8}, {-1, -9} } },
	[176] = { .set = { {5, -9}, {-3, -11}, {3, -6}, {-1, -9} } },
	[177] = { .set = { {4, -10}, {-2, -13}, {9, -8}, {2, -10} } },
	[178] = { .set = { {-1, -10}, {5, -7}, {-7, -7}, {-1, -9} } },
	[179] = { .set = { {-2, -10}, {3, -10}, {-7, -9}, {-1, -10} } },
	[180] = { .set = { {1, -10}, {5, -9}, {-4, -10}, {0, -10} } },
	[181] = { .set = { {-1, -9}, {8, -9}, {-10, -9}, {-1, -8} } },
	[182] = { .set = { {-3, -11}, {1, -10}, {-5, -6}, {-2, -9} } },
	[183] = { .set = { {-4, -10}, {3, -9}, {-6, -8}, {-1, -9} } },
	[184] = { .set = { {-7, -9}, {1, -11}, {-5, -6}, {-1, -9} } },
	[185] = { .set = { {-6, -10}, {0, -13}, {-11, -8}, {-4, -10} } },
	[186] = { .set = { {-7, -8}, {-2, -10}, {-1, -5}, {-1, -9} } },
	[187] = { .set = { {-7, -9}, {1, -10}, {-3, -5}, {-1, -9} } },
	[188] = { .set = { {-6, -7}, {-2, -11}, {-1, -5}, {-1, -8} } },
	[189] = { .set = { {-7, -6}, {-1, -10}, {1, -7}, {-2, -7} } },
	[190] = { .set = { {-6, -7}, {-5, -11}, {2, -6}, {-1, -9} } },
	[191] = { .set = { {-6, -6}, {-5, -12}, {1, -5}, {-1, -9} } },
	[192] = { .set = { {-4, -5}, {-7, -9}, {3, -6}, {-1, -9} } },
	[193] = { .set = { {-6, -5}, {-6, -10}, {3, -7}, {-2, -8} } },
	[194] = { .set = { {0, -4}, {-8, -8}, {8, -8}, {0, -7} } },
	[195] = { .set = { {-5, -4}, {-5, -9}, {4, -6}, {-1, -7} } },
	[196] = { .set = { {-6, -6}, {0, -10}, {2, -7}, {-1, -7} } },
	[197] = { .set = { {-3, -8}, {3, -11}, {-8, -6}, {-1, -8} } },
	[198] = { .set = { {-1, -9}, {8, -9}, {-10, -9}, {-1, -8} } },
	[199] = { .set = { {2, -8}, {-4, -11}, {7, -6}, {0, -8} } },
	[200] = { .set = { {6, -6}, {0, -10}, {-2, -7}, {1, -7} } },
	[201] = { .set = { {4, -4}, {4, -9}, {-5, -6}, {0, -7} } },
	[202] = { .set = { {0, -4}, {-8, -8}, {8, -8}, {0, -7} } },
	[203] = { .set = { {4, -4}, {4, -9}, {-5, -6}, {0, -7} } },
	[204] = { .set = { {6, -6}, {0, -10}, {-2, -7}, {1, -7} } },
	[205] = { .set = { {2, -8}, {-4, -11}, {7, -6}, {0, -8} } },
	[206] = { .set = { {-1, -9}, {8, -9}, {-10, -9}, {-1, -8} } },
	[207] = { .set = { {-3, -8}, {3, -11}, {-8, -6}, {-1, -8} } },
	[208] = { .set = { {-6, -6}, {0, -10}, {2, -7}, {-1, -7} } },
	[209] = { .set = { {-5, -4}, {-5, -9}, {4, -6}, {-1, -7} } },
	[210] = { .set = { {0, -5}, {-6, -8}, {6, -8}, {0, -8} } },
	[211] = { .set = { {-1, -5}, {-5, -9}, {5, -6}, {0, -8} } },
	[212] = { .set = { {1, -5}, {-5, -6}, {5, -9}, {0, -8} } },
	[213] = { .set = { {4, -7}, {3, -11}, {-4, -6}, {-1, -9} } },
	[214] = { .set = { {4, -6}, {3, -12}, {-3, -5}, {-1, -9} } },
	[215] = { .set = { {2, -5}, {5, -9}, {-5, -6}, {-1, -9} } },
	[216] = { .set = { {5, -8}, {0, -10}, {-1, -5}, {-1, -9} } },
	[217] = { .set = { {5, -9}, {-3, -10}, {1, -5}, {-1, -9} } },
	[218] = { .set = { {4, -7}, {0, -11}, {-1, -5}, {-1, -8} } },
	[219] = { .set = { {1, -11}, {-3, -10}, {3, -6}, {0, -9} } },
	[220] = { .set = { {2, -10}, {-5, -9}, {4, -8}, {-1, -9} } },
	[221] = { .set = { {5, -9}, {-3, -11}, {3, -6}, {-1, -9} } },
	[222] = { .set = { {-1, -10}, {5, -7}, {-7, -7}, {-1, -9} } },
	[223] = { .set = { {-2, -10}, {3, -10}, {-7, -9}, {-1, -10} } },
	[224] = { .set = { {1, -10}, {5, -9}, {-4, -10}, {0, -10} } },
	[225] = { .set = { {-3, -11}, {1, -10}, {-5, -6}, {-2, -9} } },
	[226] = { .set = { {-4, -10}, {3, -9}, {-6, -8}, {-1, -9} } },
	[227] = { .set = { {-7, -9}, {1, -11}, {-5, -6}, {-1, -9} } },
	[228] = { .set = { {-7, -8}, {-2, -10}, {-1, -5}, {-1, -9} } },
	[229] = { .set = { {-7, -9}, {1, -10}, {-3, -5}, {-1, -9} } },
	[230] = { .set = { {-6, -7}, {-2, -11}, {-1, -5}, {-1, -8} } },
	[231] = { .set = { {-6, -7}, {-5, -11}, {2, -6}, {-1, -9} } },
	[232] = { .set = { {-6, -6}, {-5, -12}, {1, -5}, {-1, -9} } },
	[233] = { .set = { {-4, -5}, {-7, -9}, {3, -6}, {-1, -9} } },
	[234] = { .set = { {0, -4}, {-8, -8}, {8, -8}, {0, -7} } },
	[235] = { .set = { {4, -4}, {4, -9}, {-5, -6}, {0, -7} } },
	[236] = { .set = { {6, -6}, {0, -10}, {-2, -7}, {1, -7} } },
	[237] = { .set = { {2, -8}, {-4, -11}, {7, -6}, {0, -8} } },
	[238] = { .set = { {-1, -9}, {8, -9}, {-10, -9}, {-1, -8} } },
	[239] = { .set = { {-3, -8}, {3, -11}, {-8, -6}, {-1, -8} } },
	[240] = { .set = { {-6, -6}, {0, -10}, {2, -7}, {-1, -7} } },
	[241] = { .set = { {-5, -4}, {-5, -9}, {4, -6}, {-1, -7} } },
	[242] = { .set = { {0, -5}, {-6, -8}, {6, -8}, {0, -8} } },
	[243] = { .set = { {-6, -7}, {-5, -11}, {2, -6}, {-1, -9} } },
	[244] = { .set = { {-7, -8}, {-2, -10}, {-1, -5}, {-1, -9} } },
	[245] = { .set = { {-3, -11}, {1, -10}, {-5, -6}, {-2, -9} } },
	[246] = { .set = { {-1, -10}, {5, -7}, {-7, -7}, {-1, -9} } },
	[247] = { .set = { {1, -11}, {-3, -10}, {3, -6}, {0, -9} } },
	[248] = { .set = { {5, -8}, {0, -10}, {-1, -5}, {-1, -9} } },
	[249] = { .set = { {4, -7}, {3, -11}, {-4, -6}, {-1, -9} } },
};

static const ax_anim *const sQwilfishAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02606),
	AX_ANIM_PTR(gAxSharedAnim_02682),
	AX_ANIM_PTR(gAxSharedAnim_02691),
	AX_ANIM_PTR(gAxSharedAnim_02701),
	AX_ANIM_PTR(gAxSharedAnim_02618),
	AX_ANIM_PTR(gAxSharedAnim_02641),
	AX_ANIM_PTR(gAxSharedAnim_02654),
	AX_ANIM_PTR(gAxSharedAnim_02663),
};

static const ax_anim *const sQwilfishAnimTable2[] = {
	AX_ANIM_PTR(sQwilfishAnims_2_1),
	AX_ANIM_PTR(sQwilfishAnims_2_2),
	AX_ANIM_PTR(sQwilfishAnims_2_3),
	AX_ANIM_PTR(sQwilfishAnims_2_4),
	AX_ANIM_PTR(sQwilfishAnims_2_5),
	AX_ANIM_PTR(sQwilfishAnims_2_6),
	AX_ANIM_PTR(sQwilfishAnims_2_7),
	AX_ANIM_PTR(sQwilfishAnims_2_8),
};

static const ax_anim *const sQwilfishAnimTable3[] = {
	AX_ANIM_PTR(sQwilfishAnims_3_1),
	AX_ANIM_PTR(sQwilfishAnims_3_2),
	AX_ANIM_PTR(sQwilfishAnims_3_3),
	AX_ANIM_PTR(sQwilfishAnims_3_4),
	AX_ANIM_PTR(sQwilfishAnims_3_5),
	AX_ANIM_PTR(sQwilfishAnims_3_6),
	AX_ANIM_PTR(sQwilfishAnims_3_7),
	AX_ANIM_PTR(sQwilfishAnims_3_8),
};

static const ax_anim *const sQwilfishAnimTable4[] = {
	AX_ANIM_PTR(sQwilfishAnims_4_1),
	AX_ANIM_PTR(sQwilfishAnims_4_2),
	AX_ANIM_PTR(sQwilfishAnims_4_3),
	AX_ANIM_PTR(sQwilfishAnims_4_4),
	AX_ANIM_PTR(sQwilfishAnims_4_5),
	AX_ANIM_PTR(sQwilfishAnims_4_6),
	AX_ANIM_PTR(sQwilfishAnims_4_7),
	AX_ANIM_PTR(sQwilfishAnims_4_8),
};

static const ax_anim *const sQwilfishAnimTable5[] = {
	AX_ANIM_PTR(sQwilfishAnims_5_1),
	AX_ANIM_PTR(sQwilfishAnims_5_2),
	AX_ANIM_PTR(sQwilfishAnims_5_3),
	AX_ANIM_PTR(sQwilfishAnims_5_4),
	AX_ANIM_PTR(sQwilfishAnims_5_5),
	AX_ANIM_PTR(sQwilfishAnims_5_6),
	AX_ANIM_PTR(sQwilfishAnims_5_7),
	AX_ANIM_PTR(sQwilfishAnims_5_8),
};

static const ax_anim *const sQwilfishAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
	AX_ANIM_PTR(gAxSharedAnim_02644),
};

static const ax_anim *const sQwilfishAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00604),
	AX_ANIM_PTR(gAxSharedAnim_00615),
	AX_ANIM_PTR(gAxSharedAnim_00624),
	AX_ANIM_PTR(gAxSharedAnim_00635),
	AX_ANIM_PTR(gAxSharedAnim_00652),
	AX_ANIM_PTR(gAxSharedAnim_00663),
	AX_ANIM_PTR(gAxSharedAnim_00678),
	AX_ANIM_PTR(gAxSharedAnim_00689),
};

static const ax_anim *const sQwilfishAnimTable8[] = {
	AX_ANIM_PTR(sQwilfishAnims_8_1),
	AX_ANIM_PTR(sQwilfishAnims_8_2),
	AX_ANIM_PTR(sQwilfishAnims_8_3),
	AX_ANIM_PTR(sQwilfishAnims_8_4),
	AX_ANIM_PTR(sQwilfishAnims_8_5),
	AX_ANIM_PTR(sQwilfishAnims_8_6),
	AX_ANIM_PTR(sQwilfishAnims_8_7),
	AX_ANIM_PTR(sQwilfishAnims_8_8),
};

static const ax_anim *const sQwilfishAnimTable9[] = {
	AX_ANIM_PTR(sQwilfishAnims_9_1),
	AX_ANIM_PTR(sQwilfishAnims_9_2),
	AX_ANIM_PTR(sQwilfishAnims_9_3),
	AX_ANIM_PTR(sQwilfishAnims_9_4),
	AX_ANIM_PTR(sQwilfishAnims_9_5),
	AX_ANIM_PTR(sQwilfishAnims_9_6),
	AX_ANIM_PTR(sQwilfishAnims_9_7),
	AX_ANIM_PTR(sQwilfishAnims_9_8),
};

static const ax_anim *const sQwilfishAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01241),
	AX_ANIM_PTR(gAxSharedAnim_01252),
	AX_ANIM_PTR(gAxSharedAnim_01266),
	AX_ANIM_PTR(gAxSharedAnim_01277),
	AX_ANIM_PTR(gAxSharedAnim_01285),
	AX_ANIM_PTR(gAxSharedAnim_01300),
	AX_ANIM_PTR(gAxSharedAnim_01313),
	AX_ANIM_PTR(gAxSharedAnim_01324),
};

static const ax_anim *const sQwilfishAnimTable11[] = {
	AX_ANIM_PTR(sQwilfishAnims_11_1),
	AX_ANIM_PTR(sQwilfishAnims_11_2),
	AX_ANIM_PTR(sQwilfishAnims_11_3),
	AX_ANIM_PTR(sQwilfishAnims_11_4),
	AX_ANIM_PTR(sQwilfishAnims_11_5),
	AX_ANIM_PTR(sQwilfishAnims_11_6),
	AX_ANIM_PTR(sQwilfishAnims_11_7),
	AX_ANIM_PTR(sQwilfishAnims_11_8),
};

static const ax_anim *const sQwilfishAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01526),
	AX_ANIM_PTR(gAxSharedAnim_01532),
	AX_ANIM_PTR(gAxSharedAnim_01533),
	AX_ANIM_PTR(gAxSharedAnim_01540),
	AX_ANIM_PTR(gAxSharedAnim_01550),
	AX_ANIM_PTR(gAxSharedAnim_01556),
	AX_ANIM_PTR(gAxSharedAnim_01574),
	AX_ANIM_PTR(gAxSharedAnim_01578),
};

static const ax_anim *const sQwilfishAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01586),
	AX_ANIM_PTR(gAxSharedAnim_01624),
	AX_ANIM_PTR(gAxSharedAnim_01620),
	AX_ANIM_PTR(gAxSharedAnim_01612),
	AX_ANIM_PTR(gAxSharedAnim_01605),
	AX_ANIM_PTR(gAxSharedAnim_01602),
	AX_ANIM_PTR(gAxSharedAnim_01597),
	AX_ANIM_PTR(gAxSharedAnim_01591),
};

static const ax_anim *const *const sAxAnimationsQwilfish[] = {
	sQwilfishAnimTable1,
	sQwilfishAnimTable2,
	sQwilfishAnimTable3,
	sQwilfishAnimTable4,
	sQwilfishAnimTable5,
	sQwilfishAnimTable6,
	sQwilfishAnimTable7,
	sQwilfishAnimTable8,
	sQwilfishAnimTable9,
	sQwilfishAnimTable10,
	sQwilfishAnimTable11,
	sQwilfishAnimTable12,
	sQwilfishAnimTable13,
};

static const ax_sprite *const sAxSpritesQwilfish[] = {
	sQwilfishSprites1,
	sQwilfishSprites2,
	sQwilfishSprites3,
	sQwilfishSprites4,
	sQwilfishSprites5,
	sQwilfishSprites6,
	sQwilfishSprites7,
	sQwilfishSprites8,
	sQwilfishSprites9,
	sQwilfishSprites10,
	sQwilfishSprites11,
	sQwilfishSprites12,
	sQwilfishSprites13,
	sQwilfishSprites14,
	sQwilfishSprites15,
	sQwilfishSprites16,
	sQwilfishSprites17,
	sQwilfishSprites18,
	sQwilfishSprites19,
	sQwilfishSprites20,
	sQwilfishSprites21,
	sQwilfishSprites22,
	sQwilfishSprites23,
	sQwilfishSprites24,
	sQwilfishSprites25,
	sQwilfishSprites26,
	sQwilfishSprites27,
	sQwilfishSprites28,
	sQwilfishSprites29,
	sQwilfishSprites30,
	sQwilfishSprites31,
	sQwilfishSprites32,
	sQwilfishSprites33,
	sQwilfishSprites34,
	sQwilfishSprites35,
	sQwilfishSprites36,
	sQwilfishSprites37,
	sQwilfishSprites38,
	sQwilfishSprites39,
	sQwilfishSprites40,
	sQwilfishSprites41,
	sQwilfishSprites42,
	sQwilfishSprites43,
	sQwilfishSprites44,
	sQwilfishSprites45,
	sQwilfishSprites46,
	sQwilfishSprites47,
};

static const axmain sAxMainQwilfish = {
	.poses = sAxPosesQwilfish,
	.animations = sAxAnimationsQwilfish,
	.animCount = ARRAY_COUNT(sAxAnimationsQwilfish),
	.spriteData = sAxSpritesQwilfish,
	.positions = sAxPositionsQwilfish,
};
