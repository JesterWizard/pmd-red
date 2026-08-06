/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainTorchic;
const SiroArchive gAxTorchic = {"SIRO", &sAxMainTorchic};

static const ax_pose sTorchicPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose10[] = {
	AX_POSE(9, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose12[] = {
	AX_POSE(11, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose13[] = {
	AX_POSE(12, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose14[] = {
	AX_POSE(13, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose15[] = {
	AX_POSE(14, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose16[] = {
	AX_POSE(9, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose17[] = {
	AX_POSE(10, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose18[] = {
	AX_POSE(11, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose19[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose21[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose22[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose23[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose24[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose32[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose33[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose44[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose45[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose76[] = {
	AX_POSE(15, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose78[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose79[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose80[] = {
	AX_POSE(16, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose84[] = {
	AX_POSE(17, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose86[] = {
	AX_POSE(10, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose87[] = {
	AX_POSE(11, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose88[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose90[] = {
	AX_POSE(13, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose91[] = {
	AX_POSE(14, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose92[] = {
	AX_POSE(19, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose96[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose100[] = {
	AX_POSE(17, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose104[] = {
	AX_POSE(16, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose105[] = {
	AX_POSE(20, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose106[] = {
	AX_POSE(21, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose107[] = {
	AX_POSE(22, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(23, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose108[] = {
	AX_POSE(24, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose109[] = {
	AX_POSE(25, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose110[] = {
	AX_POSE(27, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose111[] = {
	AX_POSE(28, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(29, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose112[] = {
	AX_POSE(30, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose113[] = {
	AX_POSE(31, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose114[] = {
	AX_POSE(32, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose115[] = {
	AX_POSE(28, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(29, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose116[] = {
	AX_POSE(30, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose117[] = {
	AX_POSE(25, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose118[] = {
	AX_POSE(27, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose119[] = {
	AX_POSE(22, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(23, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose120[] = {
	AX_POSE(24, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose121[] = {
	AX_POSE(33, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose122[] = {
	AX_POSE(34, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose123[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose124[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose125[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose126[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose127[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose128[] = {
	AX_POSE(38, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose129[] = {
	AX_POSE(37, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose130[] = {
	AX_POSE(36, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose219[] = {
	AX_POSE(40, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose220[] = {
	AX_POSE(41, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose221[] = {
	AX_POSE(40, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose222[] = {
	AX_POSE(41, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose224[] = {
	AX_POSE(42, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose225[] = {
	AX_POSE(43, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose226[] = {
	AX_POSE(44, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose229[] = {
	AX_POSE(45, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose230[] = {
	AX_POSE(46, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose231[] = {
	AX_POSE(47, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose232[] = {
	AX_POSE(48, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose233[] = {
	AX_POSE(49, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose234[] = {
	AX_POSE(50, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose235[] = {
	AX_POSE(51, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose236[] = {
	AX_POSE(52, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose237[] = {
	AX_POSE(53, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose238[] = {
	AX_POSE(54, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose239[] = {
	AX_POSE(55, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose241[] = {
	AX_POSE(56, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose242[] = {
	AX_POSE(57, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose244[] = {
	AX_POSE(58, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose245[] = {
	AX_POSE(59, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose248[] = {
	AX_POSE(60, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose250[] = {
	AX_POSE(61, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose252[] = {
	AX_POSE(61, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose254[] = {
	AX_POSE(62, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose255[] = {
	AX_POSE(63, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose256[] = {
	AX_POSE(64, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose257[] = {
	AX_POSE(65, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose258[] = {
	AX_POSE(66, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose259[] = {
	AX_POSE(67, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose260[] = {
	AX_POSE(63, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose261[] = {
	AX_POSE(64, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose262[] = {
	AX_POSE(65, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose263[] = {
	AX_POSE(66, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose264[] = {
	AX_POSE(67, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTorchicPose265[] = {
	AX_POSE(68, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_anim sTorchicAnims_2_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -2}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 25, .offset = {0, -3}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 25, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 25, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_2_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-2, -2}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 29, .offset = {-3, -3}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 29, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {18, 18}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {19, 17}, .shadow = {19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {18, 18}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {19, 17}, .shadow = {19, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {8, 8}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_2_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-2, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 32, .offset = {-3, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 32, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_2_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-2, 2}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 35, .offset = {-3, 3}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 35, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {19, -17}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {19, -17}, .shadow = {19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_2_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 38, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 38, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_2_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 41, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 41, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 41, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_2_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {2, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {3, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_2_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {2, -2}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 47, .offset = {3, -3}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 47, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_3_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -2}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 49, .offset = {0, -3}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 49, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 49, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_3_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-2, -2}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 53, .offset = {-3, -3}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 53, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {18, 18}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {19, 17}, .shadow = {19, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {18, 18}, .shadow = {18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {19, 17}, .shadow = {19, 17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {8, 8}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_3_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {-2, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 56, .offset = {-3, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 56, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 56, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, 1}, .shadow = {18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_3_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {-2, 2}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 59, .offset = {-3, 3}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 59, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {19, -17}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {19, -17}, .shadow = {19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_3_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 62, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 62, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 62, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_3_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 4, .unkFlags = 0, .poseId = 65, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 65, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 65, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_3_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {2, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 68, .offset = {3, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 68, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, 0}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, 1}, .shadow = {-18, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_3_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {2, -2}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 71, .offset = {3, -3}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 71, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {-18, 18}, .shadow = {-18, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-17, 19}, .shadow = {-17, 19} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 73, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 73, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 77, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 77, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 81, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 81, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 85, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 85, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 89, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 93, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 97, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 101, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_5_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_5_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_5_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_5_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_5_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_5_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_5_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_5_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_8_1[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_8_2[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_8_3[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 145, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_8_4[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 148, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 148, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 148, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_8_5[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 151, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 151, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 151, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_8_6[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_8_7[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_8_8[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {7, 13}, .shadow = {7, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 166, .offset = {1, 16}, .shadow = {1, 16} },
	{ .frames = 2, .unkFlags = 3, .poseId = 167, .offset = {-6, 14}, .shadow = {-6, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-7, 8}, .shadow = {-7, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {-5, 4}, .shadow = {-5, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {24, 10}, .shadow = {24, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {23, 18}, .shadow = {23, 18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {11, 18}, .shadow = {11, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {4, 12}, .shadow = {4, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {1, 7}, .shadow = {1, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {5, -14}, .shadow = {5, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {11, -18}, .shadow = {11, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 163, .offset = {18, -17}, .shadow = {18, -17} },
	{ .frames = 2, .unkFlags = 3, .poseId = 164, .offset = {18, -11}, .shadow = {18, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {15, -5}, .shadow = {15, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-8, -9}, .shadow = {-8, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-7, -15}, .shadow = {-7, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {-1, -19}, .shadow = {-1, -16} },
	{ .frames = 2, .unkFlags = 3, .poseId = 163, .offset = {7, -16}, .shadow = {7, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {8, -8}, .shadow = {8, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {6, -4}, .shadow = {6, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {-5, -14}, .shadow = {-5, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {-11, -18}, .shadow = {-11, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 169, .offset = {-18, -17}, .shadow = {-18, -17} },
	{ .frames = 2, .unkFlags = 3, .poseId = 168, .offset = {-18, -11}, .shadow = {-18, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {-15, -5}, .shadow = {-15, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-24, 10}, .shadow = {-24, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {-23, 18}, .shadow = {-23, 18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {-11, 18}, .shadow = {-11, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {-4, 12}, .shadow = {-4, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {-1, 7}, .shadow = {-1, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 179, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 179, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 178, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 182, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 181, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 181, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 185, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 185, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 185, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 184, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 184, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 188, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 191, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 194, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 194, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 195, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 197, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 196, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 196, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 200, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 200, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 199, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_18_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 232, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 233, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 233, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 233, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 233, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_18_5[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 234, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 235, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 235, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 235, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_19_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 236, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 237, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 236, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 238, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_20_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 239, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 241, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 241, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {1, 1}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_20_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 239, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 241, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 241, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_21_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 242, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 243, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 244, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_22_1[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 246, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 34, .unkFlags = 0, .poseId = 247, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 30, .unkFlags = 0, .poseId = 246, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 34, .unkFlags = 0, .poseId = 247, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 245, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_23_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 248, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 249, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 248, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 249, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 248, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_24_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 253, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_25_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 259, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 260, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 261, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 259, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 262, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 263, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_25_7[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 254, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 255, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 256, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 254, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 257, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 258, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_26_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 264, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 264, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_27_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 265, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 265, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 265, .offset = {-1, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 265, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 265, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 265, .offset = {2, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sTorchicAnims_28_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 269, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sTorchicGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_1.4bpp.lz");
static const ax_sprite sTorchicSprites1[] = {
	{sTorchicGfx1, ARRAY_COUNT(sTorchicGfx1)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_2.4bpp.lz");
static const ax_sprite sTorchicSprites2[] = {
	{sTorchicGfx2, ARRAY_COUNT(sTorchicGfx2)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_3.4bpp.lz");
static const ax_sprite sTorchicSprites3[] = {
	{sTorchicGfx3, ARRAY_COUNT(sTorchicGfx3)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_4.4bpp.lz");
static const ax_sprite sTorchicSprites4[] = {
	{sTorchicGfx4, ARRAY_COUNT(sTorchicGfx4)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_5.4bpp.lz");
static const ax_sprite sTorchicSprites5[] = {
	{sTorchicGfx5, ARRAY_COUNT(sTorchicGfx5)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_6.4bpp.lz");
static const ax_sprite sTorchicSprites6[] = {
	{sTorchicGfx6, ARRAY_COUNT(sTorchicGfx6)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_7.4bpp.lz");
static const ax_sprite sTorchicSprites7[] = {
	{sTorchicGfx7, ARRAY_COUNT(sTorchicGfx7)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_8.4bpp.lz");
static const ax_sprite sTorchicSprites8[] = {
	{sTorchicGfx8, ARRAY_COUNT(sTorchicGfx8)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_9.4bpp.lz");
static const ax_sprite sTorchicSprites9[] = {
	{sTorchicGfx9, ARRAY_COUNT(sTorchicGfx9)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_10.4bpp.lz");
static const ax_sprite sTorchicSprites10[] = {
	{sTorchicGfx10, ARRAY_COUNT(sTorchicGfx10)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_11.4bpp.lz");
static const ax_sprite sTorchicSprites11[] = {
	{sTorchicGfx11, ARRAY_COUNT(sTorchicGfx11)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_12.4bpp.lz");
static const ax_sprite sTorchicSprites12[] = {
	{sTorchicGfx12, ARRAY_COUNT(sTorchicGfx12)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_13.4bpp.lz");
static const ax_sprite sTorchicSprites13[] = {
	{sTorchicGfx13, ARRAY_COUNT(sTorchicGfx13)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_14.4bpp.lz");
static const ax_sprite sTorchicSprites14[] = {
	{sTorchicGfx14, ARRAY_COUNT(sTorchicGfx14)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_15.4bpp.lz");
static const ax_sprite sTorchicSprites15[] = {
	{sTorchicGfx15, ARRAY_COUNT(sTorchicGfx15)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_16.4bpp.lz");
static const ax_sprite sTorchicSprites16[] = {
	{sTorchicGfx16, ARRAY_COUNT(sTorchicGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_17.4bpp.lz");
static const ax_sprite sTorchicSprites17[] = {
	{sTorchicGfx17, ARRAY_COUNT(sTorchicGfx17)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_18.4bpp.lz");
static const ax_sprite sTorchicSprites18[] = {
	{sTorchicGfx18, ARRAY_COUNT(sTorchicGfx18)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_19.4bpp.lz");
static const ax_sprite sTorchicSprites19[] = {
	{sTorchicGfx19, ARRAY_COUNT(sTorchicGfx19)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_20.4bpp.lz");
static const ax_sprite sTorchicSprites20[] = {
	{sTorchicGfx20, ARRAY_COUNT(sTorchicGfx20)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_21.4bpp.lz");
static const ax_sprite sTorchicSprites21[] = {
	{sTorchicGfx21, ARRAY_COUNT(sTorchicGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_22.4bpp.lz");
static const ax_sprite sTorchicSprites22[] = {
	{sTorchicGfx22, ARRAY_COUNT(sTorchicGfx22)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_23.4bpp.lz");
static const ax_sprite sTorchicSprites23[] = {
	{sTorchicGfx23, ARRAY_COUNT(sTorchicGfx23)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_24.4bpp.lz");
static const ax_sprite sTorchicSprites24[] = {
	{sTorchicGfx24, ARRAY_COUNT(sTorchicGfx24)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_25.4bpp.lz");
static const ax_sprite sTorchicSprites25[] = {
	{sTorchicGfx25, ARRAY_COUNT(sTorchicGfx25)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_26.4bpp.lz");
static const ax_sprite sTorchicSprites26[] = {
	{NULL, 32}, 
	{sTorchicGfx26, ARRAY_COUNT(sTorchicGfx26)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_27.4bpp.lz");
static const ax_sprite sTorchicSprites27[] = {
	{sTorchicGfx27, ARRAY_COUNT(sTorchicGfx27)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_28.4bpp.lz");
static const ax_sprite sTorchicSprites28[] = {
	{sTorchicGfx28, ARRAY_COUNT(sTorchicGfx28)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_29.4bpp.lz");
static const ax_sprite sTorchicSprites29[] = {
	{sTorchicGfx29, ARRAY_COUNT(sTorchicGfx29)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_30.4bpp.lz");
static const ax_sprite sTorchicSprites30[] = {
	{sTorchicGfx30, ARRAY_COUNT(sTorchicGfx30)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_31.4bpp.lz");
static const ax_sprite sTorchicSprites31[] = {
	{sTorchicGfx31, ARRAY_COUNT(sTorchicGfx31)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_32.4bpp.lz");
static const ax_sprite sTorchicSprites32[] = {
	{sTorchicGfx32, ARRAY_COUNT(sTorchicGfx32)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_33.4bpp.lz");
static const ax_sprite sTorchicSprites33[] = {
	{sTorchicGfx33, ARRAY_COUNT(sTorchicGfx33)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTorchicGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_34.4bpp.lz");
static const ax_sprite sTorchicSprites34[] = {
	{sTorchicGfx34, ARRAY_COUNT(sTorchicGfx34)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_35.4bpp.lz");
static const ax_sprite sTorchicSprites35[] = {
	{sTorchicGfx35, ARRAY_COUNT(sTorchicGfx35)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_36.4bpp.lz");
static const ax_sprite sTorchicSprites36[] = {
	{sTorchicGfx36, ARRAY_COUNT(sTorchicGfx36)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_37.4bpp.lz");
static const ax_sprite sTorchicSprites37[] = {
	{sTorchicGfx37, ARRAY_COUNT(sTorchicGfx37)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_38.4bpp.lz");
static const ax_sprite sTorchicSprites38[] = {
	{sTorchicGfx38, ARRAY_COUNT(sTorchicGfx38)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_39.4bpp.lz");
static const ax_sprite sTorchicSprites39[] = {
	{sTorchicGfx39, ARRAY_COUNT(sTorchicGfx39)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_40.4bpp.lz");
static const ax_sprite sTorchicSprites40[] = {
	{sTorchicGfx40, ARRAY_COUNT(sTorchicGfx40)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_41.4bpp.lz");
static const ax_sprite sTorchicSprites41[] = {
	{sTorchicGfx41, ARRAY_COUNT(sTorchicGfx41)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_42.4bpp.lz");
static const ax_sprite sTorchicSprites42[] = {
	{sTorchicGfx42, ARRAY_COUNT(sTorchicGfx42)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_43.4bpp.lz");
static const ax_sprite sTorchicSprites43[] = {
	{sTorchicGfx43, ARRAY_COUNT(sTorchicGfx43)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_44.4bpp.lz");
static const ax_sprite sTorchicSprites44[] = {
	{sTorchicGfx44, ARRAY_COUNT(sTorchicGfx44)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_45.4bpp.lz");
static const ax_sprite sTorchicSprites45[] = {
	{sTorchicGfx45, ARRAY_COUNT(sTorchicGfx45)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_46.4bpp.lz");
static const ax_sprite sTorchicSprites46[] = {
	{sTorchicGfx46, ARRAY_COUNT(sTorchicGfx46)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_47.4bpp.lz");
static const ax_sprite sTorchicSprites47[] = {
	{sTorchicGfx47, ARRAY_COUNT(sTorchicGfx47)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_48.4bpp.lz");
static const ax_sprite sTorchicSprites48[] = {
	{sTorchicGfx48, ARRAY_COUNT(sTorchicGfx48)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_49.4bpp.lz");
static const ax_sprite sTorchicSprites49[] = {
	{sTorchicGfx49, ARRAY_COUNT(sTorchicGfx49)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_50.4bpp.lz");
static const ax_sprite sTorchicSprites50[] = {
	{sTorchicGfx50, ARRAY_COUNT(sTorchicGfx50)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_51.4bpp.lz");
static const ax_sprite sTorchicSprites51[] = {
	{sTorchicGfx51, ARRAY_COUNT(sTorchicGfx51)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_52.4bpp.lz");
static const ax_sprite sTorchicSprites52[] = {
	{sTorchicGfx52, ARRAY_COUNT(sTorchicGfx52)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_53.4bpp.lz");
static const ax_sprite sTorchicSprites53[] = {
	{sTorchicGfx53, ARRAY_COUNT(sTorchicGfx53)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_54.4bpp.lz");
static const ax_sprite sTorchicSprites54[] = {
	{sTorchicGfx54, ARRAY_COUNT(sTorchicGfx54)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_55.4bpp.lz");
static const ax_sprite sTorchicSprites55[] = {
	{sTorchicGfx55, ARRAY_COUNT(sTorchicGfx55)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_56.4bpp.lz");
static const ax_sprite sTorchicSprites56[] = {
	{sTorchicGfx56, ARRAY_COUNT(sTorchicGfx56)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_57.4bpp.lz");
static const ax_sprite sTorchicSprites57[] = {
	{sTorchicGfx57, ARRAY_COUNT(sTorchicGfx57)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_58.4bpp.lz");
static const ax_sprite sTorchicSprites58[] = {
	{sTorchicGfx58, ARRAY_COUNT(sTorchicGfx58)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_59.4bpp.lz");
static const ax_sprite sTorchicSprites59[] = {
	{sTorchicGfx59, ARRAY_COUNT(sTorchicGfx59)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_60.4bpp.lz");
static const ax_sprite sTorchicSprites60[] = {
	{sTorchicGfx60, ARRAY_COUNT(sTorchicGfx60)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_61.4bpp.lz");
static const ax_sprite sTorchicSprites61[] = {
	{sTorchicGfx61, ARRAY_COUNT(sTorchicGfx61)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx62[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_62.4bpp.lz");
static const ax_sprite sTorchicSprites62[] = {
	{sTorchicGfx62, ARRAY_COUNT(sTorchicGfx62)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx63[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_63.4bpp.lz");
static const ax_sprite sTorchicSprites63[] = {
	{sTorchicGfx63, ARRAY_COUNT(sTorchicGfx63)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx64[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_64.4bpp.lz");
static const ax_sprite sTorchicSprites64[] = {
	{sTorchicGfx64, ARRAY_COUNT(sTorchicGfx64)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx65[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_65.4bpp.lz");
static const ax_sprite sTorchicSprites65[] = {
	{sTorchicGfx65, ARRAY_COUNT(sTorchicGfx65)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx66[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_66.4bpp.lz");
static const ax_sprite sTorchicSprites66[] = {
	{sTorchicGfx66, ARRAY_COUNT(sTorchicGfx66)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx67[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_67.4bpp.lz");
static const ax_sprite sTorchicSprites67[] = {
	{sTorchicGfx67, ARRAY_COUNT(sTorchicGfx67)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx68[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_68.4bpp.lz");
static const ax_sprite sTorchicSprites68[] = {
	{sTorchicGfx68, ARRAY_COUNT(sTorchicGfx68)}, 
	{NULL, 0}
};
static const u8 sTorchicGfx69[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/torchic/sprite_69.4bpp.lz");
static const ax_sprite sTorchicSprites69[] = {
	{sTorchicGfx69, ARRAY_COUNT(sTorchicGfx69)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesTorchic[] = {
	sTorchicPose1,
	sTorchicPose2,
	sTorchicPose3,
	sTorchicPose4,
	sTorchicPose5,
	sTorchicPose6,
	sTorchicPose7,
	sTorchicPose8,
	sTorchicPose9,
	sTorchicPose10,
	sTorchicPose11,
	sTorchicPose12,
	sTorchicPose13,
	sTorchicPose14,
	sTorchicPose15,
	sTorchicPose16,
	sTorchicPose17,
	sTorchicPose18,
	sTorchicPose19,
	sTorchicPose20,
	sTorchicPose21,
	sTorchicPose22,
	sTorchicPose23,
	sTorchicPose24,
	sTorchicPose1,
	sTorchicPose2,
	sTorchicPose3,
	sTorchicPose4,
	sTorchicPose5,
	sTorchicPose6,
	sTorchicPose7,
	sTorchicPose32,
	sTorchicPose33,
	sTorchicPose10,
	sTorchicPose11,
	sTorchicPose12,
	sTorchicPose13,
	sTorchicPose14,
	sTorchicPose15,
	sTorchicPose16,
	sTorchicPose17,
	sTorchicPose18,
	sTorchicPose19,
	sTorchicPose44,
	sTorchicPose45,
	sTorchicPose22,
	sTorchicPose23,
	sTorchicPose24,
	sTorchicPose1,
	sTorchicPose2,
	sTorchicPose3,
	sTorchicPose4,
	sTorchicPose5,
	sTorchicPose6,
	sTorchicPose7,
	sTorchicPose32,
	sTorchicPose33,
	sTorchicPose10,
	sTorchicPose11,
	sTorchicPose12,
	sTorchicPose13,
	sTorchicPose14,
	sTorchicPose15,
	sTorchicPose16,
	sTorchicPose17,
	sTorchicPose18,
	sTorchicPose19,
	sTorchicPose44,
	sTorchicPose45,
	sTorchicPose22,
	sTorchicPose23,
	sTorchicPose24,
	sTorchicPose1,
	sTorchicPose2,
	sTorchicPose3,
	sTorchicPose76,
	sTorchicPose4,
	sTorchicPose78,
	sTorchicPose79,
	sTorchicPose80,
	sTorchicPose7,
	sTorchicPose32,
	sTorchicPose33,
	sTorchicPose84,
	sTorchicPose10,
	sTorchicPose86,
	sTorchicPose87,
	sTorchicPose88,
	sTorchicPose13,
	sTorchicPose90,
	sTorchicPose91,
	sTorchicPose92,
	sTorchicPose16,
	sTorchicPose17,
	sTorchicPose18,
	sTorchicPose96,
	sTorchicPose19,
	sTorchicPose20,
	sTorchicPose21,
	sTorchicPose100,
	sTorchicPose22,
	sTorchicPose23,
	sTorchicPose24,
	sTorchicPose104,
	sTorchicPose105,
	sTorchicPose106,
	sTorchicPose107,
	sTorchicPose108,
	sTorchicPose109,
	sTorchicPose110,
	sTorchicPose111,
	sTorchicPose112,
	sTorchicPose113,
	sTorchicPose114,
	sTorchicPose115,
	sTorchicPose116,
	sTorchicPose117,
	sTorchicPose118,
	sTorchicPose119,
	sTorchicPose120,
	sTorchicPose121,
	sTorchicPose122,
	sTorchicPose123,
	sTorchicPose124,
	sTorchicPose125,
	sTorchicPose126,
	sTorchicPose127,
	sTorchicPose128,
	sTorchicPose129,
	sTorchicPose130,
	sTorchicPose1,
	sTorchicPose22,
	sTorchicPose19,
	sTorchicPose16,
	sTorchicPose13,
	sTorchicPose10,
	sTorchicPose7,
	sTorchicPose4,
	sTorchicPose1,
	sTorchicPose106,
	sTorchicPose105,
	sTorchicPose4,
	sTorchicPose108,
	sTorchicPose107,
	sTorchicPose7,
	sTorchicPose110,
	sTorchicPose109,
	sTorchicPose10,
	sTorchicPose112,
	sTorchicPose111,
	sTorchicPose13,
	sTorchicPose114,
	sTorchicPose113,
	sTorchicPose16,
	sTorchicPose116,
	sTorchicPose115,
	sTorchicPose19,
	sTorchicPose118,
	sTorchicPose117,
	sTorchicPose22,
	sTorchicPose120,
	sTorchicPose119,
	sTorchicPose1,
	sTorchicPose22,
	sTorchicPose19,
	sTorchicPose16,
	sTorchicPose13,
	sTorchicPose10,
	sTorchicPose7,
	sTorchicPose4,
	sTorchicPose1,
	sTorchicPose4,
	sTorchicPose7,
	sTorchicPose10,
	sTorchicPose13,
	sTorchicPose16,
	sTorchicPose19,
	sTorchicPose22,
	sTorchicPose1,
	sTorchicPose106,
	sTorchicPose105,
	sTorchicPose4,
	sTorchicPose108,
	sTorchicPose107,
	sTorchicPose7,
	sTorchicPose110,
	sTorchicPose109,
	sTorchicPose10,
	sTorchicPose112,
	sTorchicPose111,
	sTorchicPose13,
	sTorchicPose114,
	sTorchicPose113,
	sTorchicPose16,
	sTorchicPose116,
	sTorchicPose115,
	sTorchicPose19,
	sTorchicPose118,
	sTorchicPose117,
	sTorchicPose22,
	sTorchicPose120,
	sTorchicPose119,
	sTorchicPose76,
	sTorchicPose104,
	sTorchicPose100,
	sTorchicPose96,
	sTorchicPose92,
	sTorchicPose88,
	sTorchicPose84,
	sTorchicPose80,
	sTorchicPose1,
	sTorchicPose22,
	sTorchicPose19,
	sTorchicPose16,
	sTorchicPose13,
	sTorchicPose10,
	sTorchicPose7,
	sTorchicPose4,
	sTorchicPose219,
	sTorchicPose220,
	sTorchicPose221,
	sTorchicPose222,
	sTorchicPose219,
	sTorchicPose224,
	sTorchicPose225,
	sTorchicPose226,
	sTorchicPose7,
	sTorchicPose13,
	sTorchicPose229,
	sTorchicPose230,
	sTorchicPose231,
	sTorchicPose232,
	sTorchicPose233,
	sTorchicPose234,
	sTorchicPose235,
	sTorchicPose236,
	sTorchicPose237,
	sTorchicPose238,
	sTorchicPose239,
	sTorchicPose19,
	sTorchicPose241,
	sTorchicPose242,
	sTorchicPose13,
	sTorchicPose244,
	sTorchicPose245,
	sTorchicPose1,
	sTorchicPose232,
	sTorchicPose248,
	sTorchicPose19,
	sTorchicPose250,
	sTorchicPose7,
	sTorchicPose252,
	sTorchicPose13,
	sTorchicPose254,
	sTorchicPose255,
	sTorchicPose256,
	sTorchicPose257,
	sTorchicPose258,
	sTorchicPose259,
	sTorchicPose260,
	sTorchicPose261,
	sTorchicPose262,
	sTorchicPose263,
	sTorchicPose264,
	sTorchicPose265,
	sTorchicPose219,
	sTorchicPose220,
	sTorchicPose221,
	sTorchicPose222,
	sTorchicPose219,
	sTorchicPose220,
	sTorchicPose221,
	sTorchicPose222,
};

static const struct PositionSets sAxPositionsTorchic[] = {
	[0] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[1] = { .set = { {-1, -5}, {-6, -4}, {5, -4}, {-1, -6} } },
	[2] = { .set = { {-1, -5}, {-7, -4}, {4, -4}, {-1, -6} } },
	[3] = { .set = { {4, -6}, {1, -6}, {-6, -4}, {0, -7} } },
	[4] = { .set = { {4, -5}, {1, -5}, {-6, -2}, {0, -6} } },
	[5] = { .set = { {4, -5}, {1, -6}, {-5, -3}, {0, -6} } },
	[6] = { .set = { {6, -7}, {-1, -5}, {-4, -4}, {-1, -6} } },
	[7] = { .set = { {6, -6}, {-2, -4}, {-5, -3}, {-2, -5} } },
	[8] = { .set = { {6, -6}, {-2, -4}, {-4, -3}, {-2, -5} } },
	[9] = { .set = { {2, -11}, {-6, -4}, {-4, -3}, {-1, -5} } },
	[10] = { .set = { {2, -10}, {-6, -3}, {-4, -2}, {-2, -4} } },
	[11] = { .set = { {2, -11}, {-6, -2}, {-3, -2}, {-2, -4} } },
	[12] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[13] = { .set = { {-1, -11}, {2, -1}, {-1, -1}, {-1, -5} } },
	[14] = { .set = { {-1, -11}, {1, -1}, {-3, -1}, {-1, -5} } },
	[15] = { .set = { {-4, -11}, {4, -4}, {2, -3}, {-1, -5} } },
	[16] = { .set = { {-4, -10}, {4, -3}, {2, -2}, {0, -4} } },
	[17] = { .set = { {-4, -11}, {4, -2}, {1, -2}, {0, -4} } },
	[18] = { .set = { {-8, -7}, {-1, -5}, {2, -4}, {-1, -6} } },
	[19] = { .set = { {-8, -6}, {0, -4}, {3, -3}, {0, -5} } },
	[20] = { .set = { {-8, -6}, {0, -4}, {2, -3}, {0, -5} } },
	[21] = { .set = { {-6, -6}, {-3, -6}, {4, -4}, {-2, -7} } },
	[22] = { .set = { {-6, -5}, {-3, -5}, {4, -2}, {-2, -6} } },
	[23] = { .set = { {-6, -5}, {-3, -6}, {3, -3}, {-2, -6} } },
	[24] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[25] = { .set = { {-1, -5}, {-6, -4}, {5, -4}, {-1, -6} } },
	[26] = { .set = { {-1, -5}, {-7, -4}, {4, -4}, {-1, -6} } },
	[27] = { .set = { {4, -6}, {1, -6}, {-6, -4}, {0, -7} } },
	[28] = { .set = { {4, -5}, {1, -5}, {-6, -2}, {0, -6} } },
	[29] = { .set = { {4, -5}, {1, -6}, {-5, -3}, {0, -6} } },
	[30] = { .set = { {6, -7}, {-1, -5}, {-4, -4}, {-1, -6} } },
	[31] = { .set = { {6, -7}, {-2, -5}, {-5, -4}, {-2, -6} } },
	[32] = { .set = { {6, -7}, {-2, -5}, {-4, -4}, {-2, -6} } },
	[33] = { .set = { {2, -11}, {-6, -4}, {-4, -3}, {-1, -5} } },
	[34] = { .set = { {2, -10}, {-6, -3}, {-4, -2}, {-2, -4} } },
	[35] = { .set = { {2, -11}, {-6, -2}, {-3, -2}, {-2, -4} } },
	[36] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[37] = { .set = { {-1, -11}, {2, -1}, {-1, -1}, {-1, -5} } },
	[38] = { .set = { {-1, -11}, {1, -1}, {-3, -1}, {-1, -5} } },
	[39] = { .set = { {-4, -11}, {4, -4}, {2, -3}, {-1, -5} } },
	[40] = { .set = { {-4, -10}, {4, -3}, {2, -2}, {0, -4} } },
	[41] = { .set = { {-4, -11}, {4, -2}, {1, -2}, {0, -4} } },
	[42] = { .set = { {-8, -7}, {-1, -5}, {2, -4}, {-1, -6} } },
	[43] = { .set = { {-8, -7}, {0, -5}, {3, -4}, {0, -6} } },
	[44] = { .set = { {-8, -7}, {0, -5}, {2, -4}, {0, -6} } },
	[45] = { .set = { {-6, -6}, {-3, -6}, {4, -4}, {-2, -7} } },
	[46] = { .set = { {-6, -5}, {-3, -5}, {4, -2}, {-2, -6} } },
	[47] = { .set = { {-6, -5}, {-3, -6}, {3, -3}, {-2, -6} } },
	[48] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[49] = { .set = { {-1, -5}, {-6, -4}, {5, -4}, {-1, -6} } },
	[50] = { .set = { {-1, -5}, {-7, -4}, {4, -4}, {-1, -6} } },
	[51] = { .set = { {4, -6}, {1, -6}, {-6, -4}, {0, -7} } },
	[52] = { .set = { {4, -5}, {1, -5}, {-6, -2}, {0, -6} } },
	[53] = { .set = { {4, -5}, {1, -6}, {-5, -3}, {0, -6} } },
	[54] = { .set = { {6, -7}, {-1, -5}, {-4, -4}, {-1, -6} } },
	[55] = { .set = { {6, -7}, {-2, -5}, {-5, -4}, {-2, -6} } },
	[56] = { .set = { {6, -7}, {-2, -5}, {-4, -4}, {-2, -6} } },
	[57] = { .set = { {2, -11}, {-6, -4}, {-4, -3}, {-1, -5} } },
	[58] = { .set = { {2, -10}, {-6, -3}, {-4, -2}, {-2, -4} } },
	[59] = { .set = { {2, -11}, {-6, -2}, {-3, -2}, {-2, -4} } },
	[60] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[61] = { .set = { {-1, -11}, {2, -1}, {-1, -1}, {-1, -5} } },
	[62] = { .set = { {-1, -11}, {1, -1}, {-3, -1}, {-1, -5} } },
	[63] = { .set = { {-4, -11}, {4, -4}, {2, -3}, {-1, -5} } },
	[64] = { .set = { {-4, -10}, {4, -3}, {2, -2}, {0, -4} } },
	[65] = { .set = { {-4, -11}, {4, -2}, {1, -2}, {0, -4} } },
	[66] = { .set = { {-8, -7}, {-1, -5}, {2, -4}, {-1, -6} } },
	[67] = { .set = { {-8, -7}, {0, -5}, {3, -4}, {0, -6} } },
	[68] = { .set = { {-8, -7}, {0, -5}, {2, -4}, {0, -6} } },
	[69] = { .set = { {-6, -6}, {-3, -6}, {4, -4}, {-2, -7} } },
	[70] = { .set = { {-6, -5}, {-3, -5}, {4, -2}, {-2, -6} } },
	[71] = { .set = { {-6, -5}, {-3, -6}, {3, -3}, {-2, -6} } },
	[72] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[73] = { .set = { {-1, -5}, {-6, -4}, {5, -4}, {-1, -6} } },
	[74] = { .set = { {-1, -5}, {-7, -4}, {4, -4}, {-1, -6} } },
	[75] = { .set = { {-1, -4}, {-7, -5}, {5, -5}, {-1, -5} } },
	[76] = { .set = { {4, -6}, {1, -6}, {-6, -4}, {0, -7} } },
	[77] = { .set = { {4, -6}, {1, -6}, {-6, -3}, {0, -7} } },
	[78] = { .set = { {4, -6}, {1, -7}, {-5, -4}, {0, -7} } },
	[79] = { .set = { {6, -4}, {3, -6}, {-5, -5}, {1, -5} } },
	[80] = { .set = { {6, -7}, {-1, -5}, {-4, -4}, {-1, -6} } },
	[81] = { .set = { {6, -7}, {-2, -5}, {-5, -4}, {-2, -6} } },
	[82] = { .set = { {6, -7}, {-2, -5}, {-4, -4}, {-2, -6} } },
	[83] = { .set = { {9, -8}, {-2, -7}, {-4, -6}, {1, -7} } },
	[84] = { .set = { {2, -11}, {-6, -4}, {-4, -3}, {-1, -5} } },
	[85] = { .set = { {2, -11}, {-6, -4}, {-4, -3}, {-2, -5} } },
	[86] = { .set = { {2, -12}, {-6, -3}, {-3, -3}, {-2, -5} } },
	[87] = { .set = { {7, -10}, {-4, -6}, {-3, -5}, {1, -7} } },
	[88] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[89] = { .set = { {-1, -12}, {2, -2}, {-1, -2}, {-1, -6} } },
	[90] = { .set = { {-1, -12}, {1, -2}, {-3, -2}, {-1, -6} } },
	[91] = { .set = { {-1, -14}, {1, -4}, {-3, -4}, {-1, -7} } },
	[92] = { .set = { {-4, -11}, {4, -4}, {2, -3}, {-1, -5} } },
	[93] = { .set = { {-4, -10}, {4, -3}, {2, -2}, {0, -4} } },
	[94] = { .set = { {-4, -11}, {4, -2}, {1, -2}, {0, -4} } },
	[95] = { .set = { {-9, -10}, {2, -6}, {1, -5}, {-3, -7} } },
	[96] = { .set = { {-8, -7}, {-1, -5}, {2, -4}, {-1, -6} } },
	[97] = { .set = { {-8, -6}, {0, -4}, {3, -3}, {0, -5} } },
	[98] = { .set = { {-8, -6}, {0, -4}, {2, -3}, {0, -5} } },
	[99] = { .set = { {-11, -8}, {0, -7}, {2, -6}, {-3, -7} } },
	[100] = { .set = { {-6, -6}, {-3, -6}, {4, -4}, {-2, -7} } },
	[101] = { .set = { {-6, -5}, {-3, -5}, {4, -2}, {-2, -6} } },
	[102] = { .set = { {-6, -5}, {-3, -6}, {3, -3}, {-2, -6} } },
	[103] = { .set = { {-7, -4}, {-4, -6}, {4, -5}, {-2, -5} } },
	[104] = { .set = { {-1, -5}, {-6, -4}, {4, -4}, {-1, -6} } },
	[105] = { .set = { {-1, -7}, {-6, -6}, {4, -6}, {-1, -8} } },
	[106] = { .set = { {4, -5}, {0, -5}, {-6, -3}, {0, -7} } },
	[107] = { .set = { {4, -7}, {1, -9}, {-6, -6}, {-1, -8} } },
	[108] = { .set = { {6, -6}, {-3, -4}, {-4, -3}, {-2, -6} } },
	[109] = { .set = { {6, -8}, {-4, -7}, {-4, -5}, {-2, -7} } },
	[110] = { .set = { {3, -10}, {-6, -3}, {-4, -2}, {-2, -5} } },
	[111] = { .set = { {4, -11}, {-6, -5}, {-4, -4}, {-2, -7} } },
	[112] = { .set = { {-1, -12}, {1, -2}, {-3, -2}, {-1, -4} } },
	[113] = { .set = { {-1, -14}, {1, -4}, {-3, -4}, {-1, -7} } },
	[114] = { .set = { {-5, -10}, {4, -3}, {2, -2}, {0, -5} } },
	[115] = { .set = { {-6, -11}, {4, -5}, {2, -4}, {0, -7} } },
	[116] = { .set = { {-8, -6}, {1, -4}, {2, -3}, {0, -6} } },
	[117] = { .set = { {-8, -8}, {2, -7}, {2, -5}, {0, -7} } },
	[118] = { .set = { {-6, -5}, {-2, -5}, {4, -3}, {-2, -7} } },
	[119] = { .set = { {-6, -7}, {-3, -9}, {4, -6}, {-1, -8} } },
	[120] = { .set = { {-4, -6}, {0, -6}, {6, -4}, {0, -7} } },
	[121] = { .set = { {-4, -5}, {0, -5}, {6, -4}, {0, -6} } },
	[122] = { .set = { {-1, -7}, {-7, -3}, {5, -3}, {-1, -8} } },
	[123] = { .set = { {4, -9}, {-1, -5}, {-7, -2}, {0, -8} } },
	[124] = { .set = { {4, -9}, {-3, -3}, {-6, -3}, {-3, -6} } },
	[125] = { .set = { {1, -13}, {-7, -3}, {-4, -3}, {-3, -6} } },
	[126] = { .set = { {-1, -13}, {4, -2}, {-6, -2}, {-1, -5} } },
	[127] = { .set = { {-3, -13}, {5, -3}, {2, -3}, {1, -6} } },
	[128] = { .set = { {-6, -9}, {1, -3}, {4, -3}, {1, -6} } },
	[129] = { .set = { {-6, -9}, {-1, -5}, {5, -2}, {-2, -8} } },
	[130] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[131] = { .set = { {-6, -6}, {-3, -6}, {4, -4}, {-2, -7} } },
	[132] = { .set = { {-8, -7}, {-1, -5}, {2, -4}, {-1, -6} } },
	[133] = { .set = { {-4, -11}, {4, -4}, {2, -3}, {-1, -5} } },
	[134] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[135] = { .set = { {2, -11}, {-6, -4}, {-4, -3}, {-1, -5} } },
	[136] = { .set = { {6, -7}, {-1, -5}, {-4, -4}, {-1, -6} } },
	[137] = { .set = { {4, -6}, {1, -6}, {-6, -4}, {0, -7} } },
	[138] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[139] = { .set = { {-1, -7}, {-6, -6}, {4, -6}, {-1, -8} } },
	[140] = { .set = { {-1, -5}, {-6, -4}, {4, -4}, {-1, -6} } },
	[141] = { .set = { {4, -6}, {1, -6}, {-6, -4}, {0, -7} } },
	[142] = { .set = { {4, -7}, {1, -9}, {-6, -6}, {-1, -8} } },
	[143] = { .set = { {4, -5}, {0, -5}, {-6, -3}, {0, -7} } },
	[144] = { .set = { {6, -7}, {-1, -5}, {-4, -4}, {-1, -6} } },
	[145] = { .set = { {6, -8}, {-4, -7}, {-4, -5}, {-2, -7} } },
	[146] = { .set = { {6, -6}, {-3, -4}, {-4, -3}, {-2, -6} } },
	[147] = { .set = { {2, -11}, {-6, -4}, {-4, -3}, {-1, -5} } },
	[148] = { .set = { {4, -11}, {-6, -5}, {-4, -4}, {-2, -7} } },
	[149] = { .set = { {3, -10}, {-6, -3}, {-4, -2}, {-2, -5} } },
	[150] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[151] = { .set = { {-1, -14}, {1, -4}, {-3, -4}, {-1, -7} } },
	[152] = { .set = { {-1, -12}, {1, -2}, {-3, -2}, {-1, -4} } },
	[153] = { .set = { {-4, -11}, {4, -4}, {2, -3}, {-1, -5} } },
	[154] = { .set = { {-6, -11}, {4, -5}, {2, -4}, {0, -7} } },
	[155] = { .set = { {-5, -10}, {4, -3}, {2, -2}, {0, -5} } },
	[156] = { .set = { {-8, -7}, {-1, -5}, {2, -4}, {-1, -6} } },
	[157] = { .set = { {-8, -8}, {2, -7}, {2, -5}, {0, -7} } },
	[158] = { .set = { {-8, -6}, {1, -4}, {2, -3}, {0, -6} } },
	[159] = { .set = { {-6, -6}, {-3, -6}, {4, -4}, {-2, -7} } },
	[160] = { .set = { {-6, -7}, {-3, -9}, {4, -6}, {-1, -8} } },
	[161] = { .set = { {-6, -5}, {-2, -5}, {4, -3}, {-2, -7} } },
	[162] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[163] = { .set = { {-6, -6}, {-3, -6}, {4, -4}, {-2, -7} } },
	[164] = { .set = { {-8, -7}, {-1, -5}, {2, -4}, {-1, -6} } },
	[165] = { .set = { {-4, -11}, {4, -4}, {2, -3}, {-1, -5} } },
	[166] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[167] = { .set = { {2, -11}, {-6, -4}, {-4, -3}, {-1, -5} } },
	[168] = { .set = { {6, -7}, {-1, -5}, {-4, -4}, {-1, -6} } },
	[169] = { .set = { {4, -6}, {1, -6}, {-6, -4}, {0, -7} } },
	[170] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[171] = { .set = { {4, -6}, {1, -6}, {-6, -4}, {0, -7} } },
	[172] = { .set = { {6, -7}, {-1, -5}, {-4, -4}, {-1, -6} } },
	[173] = { .set = { {2, -11}, {-6, -4}, {-4, -3}, {-1, -5} } },
	[174] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[175] = { .set = { {-4, -11}, {4, -4}, {2, -3}, {-1, -5} } },
	[176] = { .set = { {-8, -7}, {-1, -5}, {2, -4}, {-1, -6} } },
	[177] = { .set = { {-6, -6}, {-3, -6}, {4, -4}, {-2, -7} } },
	[178] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[179] = { .set = { {-1, -7}, {-6, -6}, {4, -6}, {-1, -8} } },
	[180] = { .set = { {-1, -5}, {-6, -4}, {4, -4}, {-1, -6} } },
	[181] = { .set = { {4, -6}, {1, -6}, {-6, -4}, {0, -7} } },
	[182] = { .set = { {4, -7}, {1, -9}, {-6, -6}, {-1, -8} } },
	[183] = { .set = { {4, -5}, {0, -5}, {-6, -3}, {0, -7} } },
	[184] = { .set = { {6, -7}, {-1, -5}, {-4, -4}, {-1, -6} } },
	[185] = { .set = { {6, -8}, {-4, -7}, {-4, -5}, {-2, -7} } },
	[186] = { .set = { {6, -6}, {-3, -4}, {-4, -3}, {-2, -6} } },
	[187] = { .set = { {2, -11}, {-6, -4}, {-4, -3}, {-1, -5} } },
	[188] = { .set = { {4, -11}, {-6, -5}, {-4, -4}, {-2, -7} } },
	[189] = { .set = { {3, -10}, {-6, -3}, {-4, -2}, {-2, -5} } },
	[190] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[191] = { .set = { {-1, -14}, {1, -4}, {-3, -4}, {-1, -7} } },
	[192] = { .set = { {-1, -12}, {1, -2}, {-3, -2}, {-1, -4} } },
	[193] = { .set = { {-4, -11}, {4, -4}, {2, -3}, {-1, -5} } },
	[194] = { .set = { {-6, -11}, {4, -5}, {2, -4}, {0, -7} } },
	[195] = { .set = { {-5, -10}, {4, -3}, {2, -2}, {0, -5} } },
	[196] = { .set = { {-8, -7}, {-1, -5}, {2, -4}, {-1, -6} } },
	[197] = { .set = { {-8, -8}, {2, -7}, {2, -5}, {0, -7} } },
	[198] = { .set = { {-8, -6}, {1, -4}, {2, -3}, {0, -6} } },
	[199] = { .set = { {-6, -6}, {-3, -6}, {4, -4}, {-2, -7} } },
	[200] = { .set = { {-6, -7}, {-3, -9}, {4, -6}, {-1, -8} } },
	[201] = { .set = { {-6, -5}, {-2, -5}, {4, -3}, {-2, -7} } },
	[202] = { .set = { {-1, -4}, {-7, -5}, {5, -5}, {-1, -5} } },
	[203] = { .set = { {-7, -4}, {-4, -6}, {4, -5}, {-2, -5} } },
	[204] = { .set = { {-11, -8}, {0, -7}, {2, -6}, {-3, -7} } },
	[205] = { .set = { {-9, -10}, {2, -6}, {1, -5}, {-3, -7} } },
	[206] = { .set = { {-1, -14}, {1, -4}, {-3, -4}, {-1, -7} } },
	[207] = { .set = { {7, -10}, {-4, -6}, {-3, -5}, {1, -7} } },
	[208] = { .set = { {9, -8}, {-2, -7}, {-4, -6}, {1, -7} } },
	[209] = { .set = { {6, -4}, {3, -6}, {-5, -5}, {1, -5} } },
	[210] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[211] = { .set = { {-6, -6}, {-3, -6}, {4, -4}, {-2, -7} } },
	[212] = { .set = { {-8, -7}, {-1, -5}, {2, -4}, {-1, -6} } },
	[213] = { .set = { {-4, -11}, {4, -4}, {2, -3}, {-1, -5} } },
	[214] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[215] = { .set = { {2, -11}, {-6, -4}, {-4, -3}, {-1, -5} } },
	[216] = { .set = { {6, -7}, {-1, -5}, {-4, -4}, {-1, -6} } },
	[217] = { .set = { {4, -6}, {1, -6}, {-6, -4}, {0, -7} } },
	[218] = { .set = { {-2, -11}, {2, -3}, {0, -3}, {-1, -3} } },
	[219] = { .set = { {-2, -10}, {2, -3}, {0, -3}, {-1, -4} } },
	[220] = { .set = { {1, -11}, {-3, -3}, {-1, -3}, {0, -3} } },
	[221] = { .set = { {1, -10}, {-3, -3}, {-1, -3}, {0, -4} } },
	[222] = { .set = { {-2, -11}, {2, -3}, {0, -3}, {-1, -3} } },
	[223] = { .set = { {4, -8}, {-3, -1}, {-3, -3}, {-1, -4} } },
	[224] = { .set = { {7, -4}, {-4, -2}, {-4, -4}, {-1, -4} } },
	[225] = { .set = { {7, -5}, {-4, -3}, {-4, -5}, {-1, -5} } },
	[226] = { .set = { {6, -7}, {-1, -5}, {-4, -4}, {-1, -6} } },
	[227] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[228] = { .set = { {-1, -13}, {2, -3}, {-4, -3}, {-1, -6} } },
	[229] = { .set = { {-1, -10}, {2, -4}, {-4, -4}, {-1, -7} } },
	[230] = { .set = { {-1, -5}, {-7, -5}, {5, -5}, {-1, -6} } },
	[231] = { .set = { {-1, -8}, {-6, -6}, {4, -6}, {-1, -7} } },
	[232] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[233] = { .set = { {-1, -7}, {-6, -7}, {4, -7}, {-1, -8} } },
	[234] = { .set = { {-1, -11}, {1, -2}, {-3, -2}, {-1, -6} } },
	[235] = { .set = { {-1, -12}, {1, -4}, {-3, -4}, {-1, -6} } },
	[236] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[237] = { .set = { {-1, -5}, {-6, -4}, {4, -4}, {-1, -6} } },
	[238] = { .set = { {-1, -5}, {-6, -4}, {4, -4}, {-1, -6} } },
	[239] = { .set = { {-8, -7}, {-1, -5}, {2, -4}, {-1, -6} } },
	[240] = { .set = { {-5, -10}, {2, -6}, {3, -4}, {1, -7} } },
	[241] = { .set = { {-1, -11}, {2, -4}, {3, -2}, {2, -6} } },
	[242] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[243] = { .set = { {-1, -10}, {1, -2}, {-3, -2}, {-1, -6} } },
	[244] = { .set = { {-1, -10}, {1, -1}, {-3, -1}, {-1, -5} } },
	[245] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -7} } },
	[246] = { .set = { {-1, -8}, {-6, -6}, {4, -6}, {-1, -7} } },
	[247] = { .set = { {-1, -6}, {-6, -5}, {4, -5}, {-1, -5} } },
	[248] = { .set = { {-8, -7}, {-1, -5}, {2, -4}, {-1, -6} } },
	[249] = { .set = { {-6, -1}, {2, -6}, {0, -6}, {-2, -5} } },
	[250] = { .set = { {6, -7}, {-1, -5}, {-4, -4}, {-1, -6} } },
	[251] = { .set = { {4, -1}, {-4, -6}, {-2, -6}, {0, -5} } },
	[252] = { .set = { {-1, -12}, {1, -3}, {-3, -3}, {-1, -6} } },
	[253] = { .set = { {-1, -11}, {1, -2}, {-3, -2}, {-1, -6} } },
	[254] = { .set = { {-9, -6}, {1, -7}, {2, -4}, {0, -6} } },
	[255] = { .set = { {-7, -7}, {3, -7}, {4, -5}, {1, -7} } },
	[256] = { .set = { {-10, -6}, {0, -6}, {1, -4}, {-2, -6} } },
	[257] = { .set = { {-7, -7}, {3, -7}, {4, -5}, {1, -7} } },
	[258] = { .set = { {-10, -6}, {0, -6}, {1, -4}, {-2, -6} } },
	[259] = { .set = { {8, -6}, {-2, -7}, {-3, -4}, {-1, -6} } },
	[260] = { .set = { {6, -7}, {-4, -7}, {-5, -5}, {-2, -7} } },
	[261] = { .set = { {9, -6}, {-1, -6}, {-2, -4}, {1, -6} } },
	[262] = { .set = { {6, -7}, {-4, -7}, {-5, -5}, {-2, -7} } },
	[263] = { .set = { {9, -6}, {-1, -6}, {-2, -4}, {1, -6} } },
	[264] = { .set = { {2, -9}, {-6, -3}, {-3, -1}, {-2, -5} } },
	[265] = { .set = { {-2, -11}, {2, -3}, {0, -3}, {-1, -3} } },
	[266] = { .set = { {-2, -10}, {2, -3}, {0, -3}, {-1, -4} } },
	[267] = { .set = { {1, -11}, {-3, -3}, {-1, -3}, {0, -3} } },
	[268] = { .set = { {1, -10}, {-3, -3}, {-1, -3}, {0, -4} } },
	[269] = { .set = { {-2, -11}, {2, -3}, {0, -3}, {-1, -3} } },
	[270] = { .set = { {-2, -10}, {2, -3}, {0, -3}, {-1, -4} } },
	[271] = { .set = { {1, -11}, {-3, -3}, {-1, -3}, {0, -3} } },
	[272] = { .set = { {1, -10}, {-3, -3}, {-1, -3}, {0, -4} } },
};

static const ax_anim *const sTorchicAnimTable1[] = {
	gAxSharedAnim_02606,
	gAxSharedAnim_02682,
	gAxSharedAnim_02691,
	gAxSharedAnim_02701,
	gAxSharedAnim_02618,
	gAxSharedAnim_02641,
	gAxSharedAnim_02654,
	gAxSharedAnim_02663,
};

static const ax_anim *const sTorchicAnimTable2[] = {
	sTorchicAnims_2_1,
	sTorchicAnims_2_2,
	sTorchicAnims_2_3,
	sTorchicAnims_2_4,
	sTorchicAnims_2_5,
	sTorchicAnims_2_6,
	sTorchicAnims_2_7,
	sTorchicAnims_2_8,
};

static const ax_anim *const sTorchicAnimTable3[] = {
	sTorchicAnims_3_1,
	sTorchicAnims_3_2,
	sTorchicAnims_3_3,
	sTorchicAnims_3_4,
	sTorchicAnims_3_5,
	sTorchicAnims_3_6,
	sTorchicAnims_3_7,
	sTorchicAnims_3_8,
};

static const ax_anim *const sTorchicAnimTable4[] = {
	sTorchicAnims_4_1,
	sTorchicAnims_4_2,
	sTorchicAnims_4_3,
	sTorchicAnims_4_4,
	sTorchicAnims_4_5,
	sTorchicAnims_4_6,
	sTorchicAnims_4_7,
	sTorchicAnims_4_8,
};

static const ax_anim *const sTorchicAnimTable5[] = {
	sTorchicAnims_5_1,
	sTorchicAnims_5_2,
	sTorchicAnims_5_3,
	sTorchicAnims_5_4,
	sTorchicAnims_5_5,
	sTorchicAnims_5_6,
	sTorchicAnims_5_7,
	sTorchicAnims_5_8,
};

static const ax_anim *const sTorchicAnimTable6[] = {
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
};

static const ax_anim *const sTorchicAnimTable7[] = {
	gAxSharedAnim_00330,
	gAxSharedAnim_00340,
	gAxSharedAnim_00348,
	gAxSharedAnim_00356,
	gAxSharedAnim_00368,
	gAxSharedAnim_00376,
	gAxSharedAnim_00383,
	gAxSharedAnim_00390,
};

static const ax_anim *const sTorchicAnimTable8[] = {
	sTorchicAnims_8_1,
	sTorchicAnims_8_2,
	sTorchicAnims_8_3,
	sTorchicAnims_8_4,
	sTorchicAnims_8_5,
	sTorchicAnims_8_6,
	sTorchicAnims_8_7,
	sTorchicAnims_8_8,
};

static const ax_anim *const sTorchicAnimTable9[] = {
	sTorchicAnims_9_1,
	sTorchicAnims_9_2,
	gAxSharedAnim_00769,
	sTorchicAnims_9_4,
	sTorchicAnims_9_5,
	sTorchicAnims_9_6,
	gAxSharedAnim_00720,
	sTorchicAnims_9_8,
};

static const ax_anim *const sTorchicAnimTable10[] = {
	gAxSharedAnim_00801,
	gAxSharedAnim_00813,
	gAxSharedAnim_00827,
	gAxSharedAnim_00838,
	gAxSharedAnim_00849,
	gAxSharedAnim_00862,
	gAxSharedAnim_00879,
	gAxSharedAnim_00889,
};

static const ax_anim *const sTorchicAnimTable11[] = {
	sTorchicAnims_11_1,
	sTorchicAnims_11_2,
	sTorchicAnims_11_3,
	sTorchicAnims_11_4,
	sTorchicAnims_11_5,
	sTorchicAnims_11_6,
	sTorchicAnims_11_7,
	sTorchicAnims_11_8,
};

static const ax_anim *const sTorchicAnimTable12[] = {
	gAxSharedAnim_01243,
	gAxSharedAnim_01327,
	gAxSharedAnim_01308,
	gAxSharedAnim_01292,
	gAxSharedAnim_01291,
	gAxSharedAnim_01280,
	gAxSharedAnim_01260,
	gAxSharedAnim_01244,
};

static const ax_anim *const sTorchicAnimTable13[] = {
	gAxSharedAnim_01335,
	gAxSharedAnim_01409,
	gAxSharedAnim_01397,
	gAxSharedAnim_01386,
	gAxSharedAnim_01374,
	gAxSharedAnim_01366,
	gAxSharedAnim_01358,
	gAxSharedAnim_01348,
};

static const ax_anim *const sTorchicAnimTable14[] = {
	gAxSharedAnim_02389,
	gAxSharedAnim_02389,
	gAxSharedAnim_02389,
	gAxSharedAnim_02389,
	gAxSharedAnim_02389,
	gAxSharedAnim_02389,
	gAxSharedAnim_02389,
	gAxSharedAnim_02389,
};

static const ax_anim *const sTorchicAnimTable15[] = {
	gAxSharedAnim_02669,
	gAxSharedAnim_02669,
	gAxSharedAnim_02669,
	gAxSharedAnim_02669,
	gAxSharedAnim_02669,
	gAxSharedAnim_02669,
	gAxSharedAnim_02669,
	gAxSharedAnim_02669,
};

static const ax_anim *const sTorchicAnimTable16[] = {
	gAxSharedAnim_02671,
	gAxSharedAnim_02671,
	gAxSharedAnim_02671,
	gAxSharedAnim_02671,
	gAxSharedAnim_02671,
	gAxSharedAnim_02671,
	gAxSharedAnim_02671,
	gAxSharedAnim_02671,
};

static const ax_anim *const sTorchicAnimTable17[] = {
	gAxSharedAnim_00108,
	gAxSharedAnim_00108,
	gAxSharedAnim_00108,
	gAxSharedAnim_00108,
	gAxSharedAnim_00108,
	gAxSharedAnim_00108,
	gAxSharedAnim_00108,
	gAxSharedAnim_00108,
};

static const ax_anim *const sTorchicAnimTable18[] = {
	sTorchicAnims_18_1,
	sTorchicAnims_18_1,
	sTorchicAnims_18_1,
	sTorchicAnims_18_1,
	sTorchicAnims_18_5,
	sTorchicAnims_18_1,
	sTorchicAnims_18_1,
	sTorchicAnims_18_1,
};

static const ax_anim *const sTorchicAnimTable19[] = {
	sTorchicAnims_19_1,
	sTorchicAnims_19_1,
	sTorchicAnims_19_1,
	sTorchicAnims_19_1,
	sTorchicAnims_19_1,
	sTorchicAnims_19_1,
	sTorchicAnims_19_1,
	sTorchicAnims_19_1,
};

static const ax_anim *const sTorchicAnimTable20[] = {
	sTorchicAnims_20_1,
	sTorchicAnims_20_2,
	sTorchicAnims_20_2,
	sTorchicAnims_20_2,
	sTorchicAnims_20_2,
	sTorchicAnims_20_2,
	sTorchicAnims_20_2,
	sTorchicAnims_20_2,
};

static const ax_anim *const sTorchicAnimTable21[] = {
	sTorchicAnims_21_1,
	sTorchicAnims_21_1,
	sTorchicAnims_21_1,
	sTorchicAnims_21_1,
	sTorchicAnims_21_1,
	sTorchicAnims_21_1,
	sTorchicAnims_21_1,
	sTorchicAnims_21_1,
};

static const ax_anim *const sTorchicAnimTable22[] = {
	sTorchicAnims_22_1,
	sTorchicAnims_22_1,
	sTorchicAnims_22_1,
	sTorchicAnims_22_1,
	sTorchicAnims_22_1,
	sTorchicAnims_22_1,
	sTorchicAnims_22_1,
	sTorchicAnims_22_1,
};

static const ax_anim *const sTorchicAnimTable23[] = {
	sTorchicAnims_23_1,
	sTorchicAnims_23_1,
	gAxSharedAnim_00078,
	sTorchicAnims_23_1,
	sTorchicAnims_23_1,
	sTorchicAnims_23_1,
	sTorchicAnims_23_1,
	sTorchicAnims_23_1,
};

static const ax_anim *const sTorchicAnimTable24[] = {
	sTorchicAnims_24_1,
	sTorchicAnims_24_1,
	sTorchicAnims_24_1,
	sTorchicAnims_24_1,
	sTorchicAnims_24_1,
	sTorchicAnims_24_1,
	sTorchicAnims_24_1,
	sTorchicAnims_24_1,
};

static const ax_anim *const sTorchicAnimTable25[] = {
	sTorchicAnims_25_1,
	sTorchicAnims_25_1,
	sTorchicAnims_25_1,
	sTorchicAnims_25_1,
	sTorchicAnims_25_1,
	sTorchicAnims_25_1,
	sTorchicAnims_25_7,
	sTorchicAnims_25_7,
};

static const ax_anim *const sTorchicAnimTable26[] = {
	sTorchicAnims_26_1,
	sTorchicAnims_26_1,
	sTorchicAnims_26_1,
	sTorchicAnims_26_1,
	sTorchicAnims_26_1,
	sTorchicAnims_26_1,
	sTorchicAnims_26_1,
	sTorchicAnims_26_1,
};

static const ax_anim *const sTorchicAnimTable27[] = {
	sTorchicAnims_27_1,
	sTorchicAnims_27_1,
	sTorchicAnims_27_1,
	sTorchicAnims_27_1,
	sTorchicAnims_27_1,
	sTorchicAnims_27_1,
	sTorchicAnims_27_1,
	sTorchicAnims_27_1,
};

static const ax_anim *const sTorchicAnimTable28[] = {
	sTorchicAnims_28_1,
	sTorchicAnims_28_1,
	gAxSharedAnim_00116,
	sTorchicAnims_28_1,
	sTorchicAnims_28_1,
	sTorchicAnims_28_1,
	sTorchicAnims_28_1,
	sTorchicAnims_28_1,
};

static const ax_anim *const *const sAxAnimationsTorchic[] = {
	sTorchicAnimTable1,
	sTorchicAnimTable2,
	sTorchicAnimTable3,
	sTorchicAnimTable4,
	sTorchicAnimTable5,
	sTorchicAnimTable6,
	sTorchicAnimTable7,
	sTorchicAnimTable8,
	sTorchicAnimTable9,
	sTorchicAnimTable10,
	sTorchicAnimTable11,
	sTorchicAnimTable12,
	sTorchicAnimTable13,
	sTorchicAnimTable14,
	sTorchicAnimTable15,
	sTorchicAnimTable16,
	sTorchicAnimTable17,
	sTorchicAnimTable18,
	sTorchicAnimTable19,
	sTorchicAnimTable20,
	sTorchicAnimTable21,
	sTorchicAnimTable22,
	sTorchicAnimTable23,
	sTorchicAnimTable24,
	sTorchicAnimTable25,
	sTorchicAnimTable26,
	sTorchicAnimTable27,
	sTorchicAnimTable28,
};

static const ax_sprite *const sAxSpritesTorchic[] = {
	sTorchicSprites1,
	sTorchicSprites2,
	sTorchicSprites3,
	sTorchicSprites4,
	sTorchicSprites5,
	sTorchicSprites6,
	sTorchicSprites7,
	sTorchicSprites8,
	sTorchicSprites9,
	sTorchicSprites10,
	sTorchicSprites11,
	sTorchicSprites12,
	sTorchicSprites13,
	sTorchicSprites14,
	sTorchicSprites15,
	sTorchicSprites16,
	sTorchicSprites17,
	sTorchicSprites18,
	sTorchicSprites19,
	sTorchicSprites20,
	sTorchicSprites21,
	sTorchicSprites22,
	sTorchicSprites23,
	sTorchicSprites24,
	sTorchicSprites25,
	sTorchicSprites26,
	sTorchicSprites27,
	sTorchicSprites28,
	sTorchicSprites29,
	sTorchicSprites30,
	sTorchicSprites31,
	sTorchicSprites32,
	sTorchicSprites33,
	sTorchicSprites34,
	sTorchicSprites35,
	sTorchicSprites36,
	sTorchicSprites37,
	sTorchicSprites38,
	sTorchicSprites39,
	sTorchicSprites40,
	sTorchicSprites41,
	sTorchicSprites42,
	sTorchicSprites43,
	sTorchicSprites44,
	sTorchicSprites45,
	sTorchicSprites46,
	sTorchicSprites47,
	sTorchicSprites48,
	sTorchicSprites49,
	sTorchicSprites50,
	sTorchicSprites51,
	sTorchicSprites52,
	sTorchicSprites53,
	sTorchicSprites54,
	sTorchicSprites55,
	sTorchicSprites56,
	sTorchicSprites57,
	sTorchicSprites58,
	sTorchicSprites59,
	sTorchicSprites60,
	sTorchicSprites61,
	sTorchicSprites62,
	sTorchicSprites63,
	sTorchicSprites64,
	sTorchicSprites65,
	sTorchicSprites66,
	sTorchicSprites67,
	sTorchicSprites68,
	sTorchicSprites69,
};

static const axmain sAxMainTorchic = {
	.poses = sAxPosesTorchic,
	.animations = sAxAnimationsTorchic,
	.animCount = ARRAY_COUNT(sAxAnimationsTorchic),
	.spriteData = sAxSpritesTorchic,
	.positions = sAxPositionsTorchic,
};
