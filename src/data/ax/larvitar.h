/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainLarvitar;
const SiroArchive gAxLarvitar = {"SIRO", &sAxMainLarvitar};

static const ax_pose sLarvitarPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose8[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose9[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose14[] = {
	AX_POSE(13, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose15[] = {
	AX_POSE(14, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose16[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose17[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose18[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose20[] = {
	AX_POSE(7, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose21[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose22[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose23[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose24[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose74[] = {
	AX_POSE(15, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose75[] = {
	AX_POSE(16, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(17, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(7, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose77[] = {
	AX_POSE(18, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(19, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose78[] = {
	AX_POSE(20, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(21, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose80[] = {
	AX_POSE(22, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(23, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose81[] = {
	AX_POSE(24, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(25, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose83[] = {
	AX_POSE(26, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose84[] = {
	AX_POSE(27, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(28, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose86[] = {
	AX_POSE(29, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose87[] = {
	AX_POSE(30, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose89[] = {
	AX_POSE(26, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose90[] = {
	AX_POSE(27, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(28, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose92[] = {
	AX_POSE(22, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(23, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose93[] = {
	AX_POSE(24, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(25, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose95[] = {
	AX_POSE(18, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(19, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(10, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose96[] = {
	AX_POSE(20, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(21, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose105[] = {
	AX_POSE(31, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose106[] = {
	AX_POSE(32, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose107[] = {
	AX_POSE(33, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose108[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose109[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose110[] = {
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose111[] = {
	AX_POSE(37, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose112[] = {
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose113[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose114[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose142[] = {
	AX_POSE(27, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(28, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose144[] = {
	AX_POSE(27, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(28, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose147[] = {
	AX_POSE(15, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose148[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(19, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose149[] = {
	AX_POSE(22, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(23, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose150[] = {
	AX_POSE(26, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose151[] = {
	AX_POSE(29, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose154[] = {
	AX_POSE(18, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(19, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose159[] = {
	AX_POSE(18, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(19, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose160[] = {
	AX_POSE(20, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(21, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose162[] = {
	AX_POSE(22, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(23, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose163[] = {
	AX_POSE(24, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(251, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(25, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose166[] = {
	AX_POSE(27, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(28, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose172[] = {
	AX_POSE(27, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(28, OAM1(248, ST_OAM_SQUARE     , 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose174[] = {
	AX_POSE(22, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(23, OAM1(249, ST_OAM_SQUARE     , 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLarvitarPose177[] = {
	AX_POSE(18, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(19, OAM1(252, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_anim sLarvitarAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 45, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 24, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {22, 19}, .shadow = {22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {22, 19}, .shadow = {22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 27, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 31, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {22, 1}, .shadow = {22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {22, 1}, .shadow = {22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 30, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {22, -22}, .shadow = {22, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {23, -21}, .shadow = {23, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {22, -22}, .shadow = {22, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {23, -21}, .shadow = {23, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 33, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 40, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 36, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 40, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {-9, -10}, .shadow = {-9, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-20, -22}, .shadow = {-20, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-20, -22}, .shadow = {-20, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 39, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 43, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {-22, 1}, .shadow = {-22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-22, 1}, .shadow = {-22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 42, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-11, 9}, .shadow = {-11, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-21, 18}, .shadow = {-21, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 25, .offset = {-22, 17}, .shadow = {-22, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-21, 18}, .shadow = {-21, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {-22, 17}, .shadow = {-22, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 69, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 49, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 48, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 52, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {22, 19}, .shadow = {22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {22, 19}, .shadow = {22, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 51, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 55, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 58, .offset = {22, 1}, .shadow = {22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {22, 0}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {22, 1}, .shadow = {22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 54, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 58, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {22, -22}, .shadow = {22, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 61, .offset = {23, -21}, .shadow = {23, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {22, -22}, .shadow = {22, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {23, -21}, .shadow = {23, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 57, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 61, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 64, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {1, -22}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 60, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 64, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {-9, -10}, .shadow = {-9, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-20, -22}, .shadow = {-20, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-20, -22}, .shadow = {-20, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 63, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 67, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 70, .offset = {-22, 1}, .shadow = {-22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-22, 0}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-22, 1}, .shadow = {-22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 66, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 70, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-11, 9}, .shadow = {-11, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-21, 18}, .shadow = {-21, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 49, .offset = {-22, 17}, .shadow = {-22, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-21, 18}, .shadow = {-21, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-22, 17}, .shadow = {-22, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 73, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 74, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 76, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 77, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 79, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-1, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 80, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 82, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 85, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 86, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 88, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 89, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 91, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {1, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 92, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 94, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_8_1[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 116, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 116, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 116, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_8_2[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 118, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_8_3[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 122, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 121, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 121, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 122, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 122, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 122, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_8_4[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 124, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 124, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 125, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_8_5[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 127, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 128, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_8_6[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 130, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 130, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_8_7[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 133, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 134, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_8_8[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 136, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {9, 9}, .shadow = {9, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {7, 18}, .shadow = {7, 18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 143, .offset = {-7, 18}, .shadow = {-7, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-9, 9}, .shadow = {-9, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {19, 4}, .shadow = {19, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {24, 12}, .shadow = {24, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 141, .offset = {22, 19}, .shadow = {22, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 142, .offset = {12, 19}, .shadow = {12, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {4, 17}, .shadow = {4, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {-1, 10}, .shadow = {-1, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {11, -8}, .shadow = {11, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {18, -6}, .shadow = {18, -6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {22, -2}, .shadow = {22, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 141, .offset = {20, 4}, .shadow = {20, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {13, 6}, .shadow = {13, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, -8}, .shadow = {0, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {13, -22}, .shadow = {13, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {22, -24}, .shadow = {22, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 140, .offset = {24, -15}, .shadow = {24, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-10, -12}, .shadow = {-10, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-6, -21}, .shadow = {-6, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -24}, .shadow = {0, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 139, .offset = {8, -21}, .shadow = {8, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -8}, .shadow = {0, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-13, -22}, .shadow = {-13, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {-22, -24}, .shadow = {-22, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 144, .offset = {-24, -15}, .shadow = {-24, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-11, -8}, .shadow = {-11, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-18, -6}, .shadow = {-18, -6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {-22, -2}, .shadow = {-22, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 143, .offset = {-20, 4}, .shadow = {-20, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {-13, 6}, .shadow = {-13, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-19, 4}, .shadow = {-19, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-24, 12}, .shadow = {-24, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {-22, 19}, .shadow = {-22, 19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 142, .offset = {-12, 19}, .shadow = {-12, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {-4, 17}, .shadow = {-4, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {1, 10}, .shadow = {1, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 155, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 161, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 168, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 173, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLarvitarAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 176, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sLarvitarGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_1.4bpp.lz");
static const ax_sprite sLarvitarSprites1[] = {
	{sLarvitarGfx1, ARRAY_COUNT(sLarvitarGfx1)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_2.4bpp.lz");
static const ax_sprite sLarvitarSprites2[] = {
	{sLarvitarGfx2, ARRAY_COUNT(sLarvitarGfx2)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_3.4bpp.lz");
static const ax_sprite sLarvitarSprites3[] = {
	{sLarvitarGfx3, ARRAY_COUNT(sLarvitarGfx3)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_4.4bpp.lz");
static const ax_sprite sLarvitarSprites4[] = {
	{sLarvitarGfx4, ARRAY_COUNT(sLarvitarGfx4)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_5.4bpp.lz");
static const ax_sprite sLarvitarSprites5[] = {
	{sLarvitarGfx5, ARRAY_COUNT(sLarvitarGfx5)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_6.4bpp.lz");
static const ax_sprite sLarvitarSprites6[] = {
	{sLarvitarGfx6, ARRAY_COUNT(sLarvitarGfx6)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_7.4bpp.lz");
static const ax_sprite sLarvitarSprites7[] = {
	{sLarvitarGfx7, ARRAY_COUNT(sLarvitarGfx7)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_8.4bpp.lz");
static const ax_sprite sLarvitarSprites8[] = {
	{sLarvitarGfx8, ARRAY_COUNT(sLarvitarGfx8)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_9.4bpp.lz");
static const ax_sprite sLarvitarSprites9[] = {
	{sLarvitarGfx9, ARRAY_COUNT(sLarvitarGfx9)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_10.4bpp.lz");
static const ax_sprite sLarvitarSprites10[] = {
	{sLarvitarGfx10, ARRAY_COUNT(sLarvitarGfx10)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_11.4bpp.lz");
static const ax_sprite sLarvitarSprites11[] = {
	{sLarvitarGfx11, ARRAY_COUNT(sLarvitarGfx11)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_12.4bpp.lz");
static const ax_sprite sLarvitarSprites12[] = {
	{sLarvitarGfx12, ARRAY_COUNT(sLarvitarGfx12)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_13.4bpp.lz");
static const ax_sprite sLarvitarSprites13[] = {
	{sLarvitarGfx13, ARRAY_COUNT(sLarvitarGfx13)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_14.4bpp.lz");
static const ax_sprite sLarvitarSprites14[] = {
	{sLarvitarGfx14, ARRAY_COUNT(sLarvitarGfx14)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_15.4bpp.lz");
static const ax_sprite sLarvitarSprites15[] = {
	{sLarvitarGfx15, ARRAY_COUNT(sLarvitarGfx15)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_16.4bpp.lz");
static const ax_sprite sLarvitarSprites16[] = {
	{sLarvitarGfx16, ARRAY_COUNT(sLarvitarGfx16)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_17.4bpp.lz");
static const ax_sprite sLarvitarSprites17[] = {
	{NULL, 32}, 
	{sLarvitarGfx17, ARRAY_COUNT(sLarvitarGfx17)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_18.4bpp.lz");
static const ax_sprite sLarvitarSprites18[] = {
	{sLarvitarGfx18, ARRAY_COUNT(sLarvitarGfx18)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_19.4bpp.lz");
static const ax_sprite sLarvitarSprites19[] = {
	{sLarvitarGfx19, ARRAY_COUNT(sLarvitarGfx19)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_20.4bpp.lz");
static const ax_sprite sLarvitarSprites20[] = {
	{sLarvitarGfx20, ARRAY_COUNT(sLarvitarGfx20)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_21.4bpp.lz");
static const ax_sprite sLarvitarSprites21[] = {
	{sLarvitarGfx21, ARRAY_COUNT(sLarvitarGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_22.4bpp.lz");
static const ax_sprite sLarvitarSprites22[] = {
	{sLarvitarGfx22, ARRAY_COUNT(sLarvitarGfx22)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_23.4bpp.lz");
static const ax_sprite sLarvitarSprites23[] = {
	{sLarvitarGfx23, ARRAY_COUNT(sLarvitarGfx23)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_24.4bpp.lz");
static const ax_sprite sLarvitarSprites24[] = {
	{sLarvitarGfx24, ARRAY_COUNT(sLarvitarGfx24)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_25.4bpp.lz");
static const ax_sprite sLarvitarSprites25[] = {
	{sLarvitarGfx25, ARRAY_COUNT(sLarvitarGfx25)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_26.4bpp.lz");
static const ax_sprite sLarvitarSprites26[] = {
	{sLarvitarGfx26, ARRAY_COUNT(sLarvitarGfx26)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_27.4bpp.lz");
static const ax_sprite sLarvitarSprites27[] = {
	{sLarvitarGfx27, ARRAY_COUNT(sLarvitarGfx27)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_28.4bpp.lz");
static const ax_sprite sLarvitarSprites28[] = {
	{sLarvitarGfx28, ARRAY_COUNT(sLarvitarGfx28)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_29.4bpp.lz");
static const ax_sprite sLarvitarSprites29[] = {
	{sLarvitarGfx29, ARRAY_COUNT(sLarvitarGfx29)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_30.4bpp.lz");
static const ax_sprite sLarvitarSprites30[] = {
	{sLarvitarGfx30, ARRAY_COUNT(sLarvitarGfx30)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_31.4bpp.lz");
static const ax_sprite sLarvitarSprites31[] = {
	{sLarvitarGfx31, ARRAY_COUNT(sLarvitarGfx31)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_32.4bpp.lz");
static const ax_sprite sLarvitarSprites32[] = {
	{sLarvitarGfx32, ARRAY_COUNT(sLarvitarGfx32)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_33.4bpp.lz");
static const ax_sprite sLarvitarSprites33[] = {
	{sLarvitarGfx33, ARRAY_COUNT(sLarvitarGfx33)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_34.4bpp.lz");
static const ax_sprite sLarvitarSprites34[] = {
	{sLarvitarGfx34, ARRAY_COUNT(sLarvitarGfx34)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_35.4bpp.lz");
static const ax_sprite sLarvitarSprites35[] = {
	{sLarvitarGfx35, ARRAY_COUNT(sLarvitarGfx35)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_36.4bpp.lz");
static const ax_sprite sLarvitarSprites36[] = {
	{sLarvitarGfx36, ARRAY_COUNT(sLarvitarGfx36)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_37.4bpp.lz");
static const ax_sprite sLarvitarSprites37[] = {
	{sLarvitarGfx37, ARRAY_COUNT(sLarvitarGfx37)}, 
	{NULL, 0}
};
static const u8 sLarvitarGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/larvitar/sprite_38.4bpp.lz");
static const ax_sprite sLarvitarSprites38[] = {
	{sLarvitarGfx38, ARRAY_COUNT(sLarvitarGfx38)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesLarvitar[] = {
	sLarvitarPose1,
	sLarvitarPose2,
	sLarvitarPose3,
	sLarvitarPose4,
	sLarvitarPose5,
	sLarvitarPose6,
	sLarvitarPose7,
	sLarvitarPose8,
	sLarvitarPose9,
	sLarvitarPose10,
	sLarvitarPose11,
	sLarvitarPose12,
	sLarvitarPose13,
	sLarvitarPose14,
	sLarvitarPose15,
	sLarvitarPose16,
	sLarvitarPose17,
	sLarvitarPose18,
	sLarvitarPose19,
	sLarvitarPose20,
	sLarvitarPose21,
	sLarvitarPose22,
	sLarvitarPose23,
	sLarvitarPose24,
	sLarvitarPose1,
	sLarvitarPose2,
	sLarvitarPose3,
	sLarvitarPose4,
	sLarvitarPose5,
	sLarvitarPose6,
	sLarvitarPose7,
	sLarvitarPose8,
	sLarvitarPose9,
	sLarvitarPose10,
	sLarvitarPose11,
	sLarvitarPose12,
	sLarvitarPose13,
	sLarvitarPose14,
	sLarvitarPose15,
	sLarvitarPose16,
	sLarvitarPose17,
	sLarvitarPose18,
	sLarvitarPose19,
	sLarvitarPose20,
	sLarvitarPose21,
	sLarvitarPose22,
	sLarvitarPose23,
	sLarvitarPose24,
	sLarvitarPose1,
	sLarvitarPose2,
	sLarvitarPose3,
	sLarvitarPose4,
	sLarvitarPose5,
	sLarvitarPose6,
	sLarvitarPose7,
	sLarvitarPose8,
	sLarvitarPose9,
	sLarvitarPose10,
	sLarvitarPose11,
	sLarvitarPose12,
	sLarvitarPose13,
	sLarvitarPose14,
	sLarvitarPose15,
	sLarvitarPose16,
	sLarvitarPose17,
	sLarvitarPose18,
	sLarvitarPose19,
	sLarvitarPose20,
	sLarvitarPose21,
	sLarvitarPose22,
	sLarvitarPose23,
	sLarvitarPose24,
	sLarvitarPose1,
	sLarvitarPose74,
	sLarvitarPose75,
	sLarvitarPose4,
	sLarvitarPose77,
	sLarvitarPose78,
	sLarvitarPose7,
	sLarvitarPose80,
	sLarvitarPose81,
	sLarvitarPose10,
	sLarvitarPose83,
	sLarvitarPose84,
	sLarvitarPose13,
	sLarvitarPose86,
	sLarvitarPose87,
	sLarvitarPose16,
	sLarvitarPose89,
	sLarvitarPose90,
	sLarvitarPose19,
	sLarvitarPose92,
	sLarvitarPose93,
	sLarvitarPose22,
	sLarvitarPose95,
	sLarvitarPose96,
	sLarvitarPose1,
	sLarvitarPose22,
	sLarvitarPose19,
	sLarvitarPose16,
	sLarvitarPose13,
	sLarvitarPose10,
	sLarvitarPose7,
	sLarvitarPose4,
	sLarvitarPose105,
	sLarvitarPose106,
	sLarvitarPose107,
	sLarvitarPose108,
	sLarvitarPose109,
	sLarvitarPose110,
	sLarvitarPose111,
	sLarvitarPose112,
	sLarvitarPose113,
	sLarvitarPose114,
	sLarvitarPose1,
	sLarvitarPose2,
	sLarvitarPose3,
	sLarvitarPose4,
	sLarvitarPose5,
	sLarvitarPose6,
	sLarvitarPose7,
	sLarvitarPose8,
	sLarvitarPose9,
	sLarvitarPose10,
	sLarvitarPose11,
	sLarvitarPose12,
	sLarvitarPose13,
	sLarvitarPose14,
	sLarvitarPose15,
	sLarvitarPose16,
	sLarvitarPose17,
	sLarvitarPose18,
	sLarvitarPose19,
	sLarvitarPose20,
	sLarvitarPose21,
	sLarvitarPose22,
	sLarvitarPose23,
	sLarvitarPose24,
	sLarvitarPose75,
	sLarvitarPose96,
	sLarvitarPose93,
	sLarvitarPose142,
	sLarvitarPose87,
	sLarvitarPose144,
	sLarvitarPose81,
	sLarvitarPose78,
	sLarvitarPose147,
	sLarvitarPose148,
	sLarvitarPose149,
	sLarvitarPose150,
	sLarvitarPose151,
	sLarvitarPose89,
	sLarvitarPose92,
	sLarvitarPose154,
	sLarvitarPose1,
	sLarvitarPose74,
	sLarvitarPose75,
	sLarvitarPose4,
	sLarvitarPose159,
	sLarvitarPose160,
	sLarvitarPose7,
	sLarvitarPose162,
	sLarvitarPose163,
	sLarvitarPose10,
	sLarvitarPose83,
	sLarvitarPose166,
	sLarvitarPose13,
	sLarvitarPose86,
	sLarvitarPose87,
	sLarvitarPose16,
	sLarvitarPose89,
	sLarvitarPose172,
	sLarvitarPose19,
	sLarvitarPose174,
	sLarvitarPose93,
	sLarvitarPose22,
	sLarvitarPose177,
	sLarvitarPose96,
	sLarvitarPose75,
	sLarvitarPose96,
	sLarvitarPose93,
	sLarvitarPose172,
	sLarvitarPose87,
	sLarvitarPose166,
	sLarvitarPose163,
	sLarvitarPose160,
	sLarvitarPose1,
	sLarvitarPose22,
	sLarvitarPose19,
	sLarvitarPose16,
	sLarvitarPose13,
	sLarvitarPose10,
	sLarvitarPose7,
	sLarvitarPose4,
};

static const struct PositionSets sAxPositionsLarvitar[] = {
	[0] = { .set = { {-1, -6}, {-8, -5}, {6, -5}, {-1, -7} } },
	[1] = { .set = { {-1, -5}, {-7, -4}, {6, -6}, {0, -6} } },
	[2] = { .set = { {-1, -5}, {-8, -6}, {5, -4}, {-1, -6} } },
	[3] = { .set = { {3, -6}, {5, -6}, {-4, -4}, {-1, -7} } },
	[4] = { .set = { {3, -5}, {2, -3}, {-1, -5}, {-1, -6} } },
	[5] = { .set = { {3, -5}, {6, -6}, {-6, -3}, {-1, -6} } },
	[6] = { .set = { {5, -8}, {2, -5}, {0, -4}, {0, -7} } },
	[7] = { .set = { {5, -7}, {-2, -6}, {3, -5}, {0, -7} } },
	[8] = { .set = { {5, -7}, {4, -6}, {-2, -3}, {0, -6} } },
	[9] = { .set = { {4, -9}, {-1, -7}, {5, -5}, {-1, -8} } },
	[10] = { .set = { {4, -8}, {-5, -5}, {5, -6}, {-1, -6} } },
	[11] = { .set = { {4, -8}, {1, -8}, {3, -3}, {-1, -7} } },
	[12] = { .set = { {-1, -10}, {6, -6}, {-8, -6}, {-1, -8} } },
	[13] = { .set = { {-1, -9}, {5, -4}, {-8, -7}, {-1, -7} } },
	[14] = { .set = { {-1, -9}, {6, -7}, {-7, -4}, {-1, -7} } },
	[15] = { .set = { {-6, -9}, {-1, -7}, {-7, -5}, {-1, -8} } },
	[16] = { .set = { {-6, -8}, {3, -5}, {-7, -6}, {-1, -6} } },
	[17] = { .set = { {-6, -8}, {-3, -8}, {-5, -3}, {-1, -7} } },
	[18] = { .set = { {-7, -8}, {-4, -5}, {-2, -4}, {-2, -7} } },
	[19] = { .set = { {-7, -7}, {0, -6}, {-5, -5}, {-2, -7} } },
	[20] = { .set = { {-7, -7}, {-6, -6}, {0, -3}, {-2, -6} } },
	[21] = { .set = { {-5, -6}, {-7, -6}, {2, -4}, {-1, -7} } },
	[22] = { .set = { {-5, -5}, {-4, -3}, {-1, -5}, {-1, -6} } },
	[23] = { .set = { {-5, -5}, {-8, -6}, {4, -3}, {-1, -6} } },
	[24] = { .set = { {-1, -6}, {-8, -5}, {6, -5}, {-1, -7} } },
	[25] = { .set = { {-1, -5}, {-7, -4}, {6, -6}, {0, -6} } },
	[26] = { .set = { {-1, -5}, {-8, -6}, {5, -4}, {-1, -6} } },
	[27] = { .set = { {3, -6}, {5, -6}, {-4, -4}, {-1, -7} } },
	[28] = { .set = { {3, -5}, {2, -3}, {-1, -5}, {-1, -6} } },
	[29] = { .set = { {3, -5}, {6, -6}, {-6, -3}, {-1, -6} } },
	[30] = { .set = { {5, -8}, {2, -5}, {0, -4}, {0, -7} } },
	[31] = { .set = { {5, -7}, {-2, -6}, {3, -5}, {0, -7} } },
	[32] = { .set = { {5, -7}, {4, -6}, {-2, -3}, {0, -6} } },
	[33] = { .set = { {4, -9}, {-1, -7}, {5, -5}, {-1, -8} } },
	[34] = { .set = { {4, -8}, {-5, -5}, {5, -6}, {-1, -6} } },
	[35] = { .set = { {4, -8}, {1, -8}, {3, -3}, {-1, -7} } },
	[36] = { .set = { {-1, -10}, {6, -6}, {-8, -6}, {-1, -8} } },
	[37] = { .set = { {-1, -9}, {5, -4}, {-8, -7}, {-1, -7} } },
	[38] = { .set = { {-1, -9}, {6, -7}, {-7, -4}, {-1, -7} } },
	[39] = { .set = { {-6, -9}, {-1, -7}, {-7, -5}, {-1, -8} } },
	[40] = { .set = { {-6, -8}, {3, -5}, {-7, -6}, {-1, -6} } },
	[41] = { .set = { {-6, -8}, {-3, -8}, {-5, -3}, {-1, -7} } },
	[42] = { .set = { {-7, -8}, {-4, -5}, {-2, -4}, {-2, -7} } },
	[43] = { .set = { {-7, -7}, {0, -6}, {-5, -5}, {-2, -7} } },
	[44] = { .set = { {-7, -7}, {-6, -6}, {0, -3}, {-2, -6} } },
	[45] = { .set = { {-5, -6}, {-7, -6}, {2, -4}, {-1, -7} } },
	[46] = { .set = { {-5, -5}, {-4, -3}, {-1, -5}, {-1, -6} } },
	[47] = { .set = { {-5, -5}, {-8, -6}, {4, -3}, {-1, -6} } },
	[48] = { .set = { {-1, -6}, {-8, -5}, {6, -5}, {-1, -7} } },
	[49] = { .set = { {-1, -5}, {-7, -4}, {6, -6}, {0, -6} } },
	[50] = { .set = { {-1, -5}, {-8, -6}, {5, -4}, {-1, -6} } },
	[51] = { .set = { {3, -6}, {5, -6}, {-4, -4}, {-1, -7} } },
	[52] = { .set = { {3, -5}, {2, -3}, {-1, -5}, {-1, -6} } },
	[53] = { .set = { {3, -5}, {6, -6}, {-6, -3}, {-1, -6} } },
	[54] = { .set = { {5, -8}, {2, -5}, {0, -4}, {0, -7} } },
	[55] = { .set = { {5, -7}, {-2, -6}, {3, -5}, {0, -7} } },
	[56] = { .set = { {5, -7}, {4, -6}, {-2, -3}, {0, -6} } },
	[57] = { .set = { {4, -9}, {-1, -7}, {5, -5}, {-1, -8} } },
	[58] = { .set = { {4, -8}, {-5, -5}, {5, -6}, {-1, -6} } },
	[59] = { .set = { {4, -8}, {1, -8}, {3, -3}, {-1, -7} } },
	[60] = { .set = { {-1, -10}, {6, -6}, {-8, -6}, {-1, -8} } },
	[61] = { .set = { {-1, -9}, {5, -4}, {-8, -7}, {-1, -7} } },
	[62] = { .set = { {-1, -9}, {6, -7}, {-7, -4}, {-1, -7} } },
	[63] = { .set = { {-6, -9}, {-1, -7}, {-7, -5}, {-1, -8} } },
	[64] = { .set = { {-6, -8}, {3, -5}, {-7, -6}, {-1, -6} } },
	[65] = { .set = { {-6, -8}, {-3, -8}, {-5, -3}, {-1, -7} } },
	[66] = { .set = { {-7, -8}, {-4, -5}, {-2, -4}, {-2, -7} } },
	[67] = { .set = { {-7, -7}, {0, -6}, {-5, -5}, {-2, -7} } },
	[68] = { .set = { {-7, -7}, {-6, -6}, {0, -3}, {-2, -6} } },
	[69] = { .set = { {-5, -6}, {-7, -6}, {2, -4}, {-1, -7} } },
	[70] = { .set = { {-5, -5}, {-4, -3}, {-1, -5}, {-1, -6} } },
	[71] = { .set = { {-5, -5}, {-8, -6}, {4, -3}, {-1, -6} } },
	[72] = { .set = { {-1, -6}, {-8, -5}, {6, -5}, {-1, -7} } },
	[73] = { .set = { {-1, -11}, {-5, -9}, {3, -9}, {-1, -8} } },
	[74] = { .set = { {-1, -5}, {-8, -7}, {6, -7}, {-1, -6} } },
	[75] = { .set = { {3, -6}, {5, -6}, {-4, -4}, {-1, -7} } },
	[76] = { .set = { {0, -11}, {2, -9}, {-4, -8}, {-3, -7} } },
	[77] = { .set = { {5, -4}, {4, -8}, {-5, -6}, {-1, -5} } },
	[78] = { .set = { {5, -8}, {2, -5}, {0, -4}, {0, -7} } },
	[79] = { .set = { {2, -11}, {0, -11}, {-2, -9}, {-2, -7} } },
	[80] = { .set = { {7, -6}, {-2, -9}, {-3, -6}, {-1, -6} } },
	[81] = { .set = { {4, -9}, {-1, -7}, {5, -5}, {-1, -8} } },
	[82] = { .set = { {2, -11}, {-5, -10}, {2, -9}, {-3, -7} } },
	[83] = { .set = { {6, -5}, {-3, -8}, {1, -5}, {-1, -5} } },
	[84] = { .set = { {-1, -10}, {6, -6}, {-8, -6}, {-1, -8} } },
	[85] = { .set = { {-1, -6}, {4, -7}, {-6, -7}, {-1, -4} } },
	[86] = { .set = { {-1, -11}, {5, -8}, {-7, -8}, {-1, -8} } },
	[87] = { .set = { {-6, -9}, {-1, -7}, {-7, -5}, {-1, -8} } },
	[88] = { .set = { {-4, -11}, {3, -10}, {-4, -9}, {1, -7} } },
	[89] = { .set = { {-8, -5}, {1, -8}, {-3, -5}, {-1, -5} } },
	[90] = { .set = { {-7, -8}, {-4, -5}, {-2, -4}, {-2, -7} } },
	[91] = { .set = { {-4, -11}, {-2, -11}, {0, -9}, {0, -7} } },
	[92] = { .set = { {-9, -6}, {0, -9}, {1, -6}, {-1, -6} } },
	[93] = { .set = { {-5, -6}, {-7, -6}, {2, -4}, {-1, -7} } },
	[94] = { .set = { {-2, -11}, {-4, -9}, {2, -8}, {1, -7} } },
	[95] = { .set = { {-7, -4}, {-6, -8}, {3, -6}, {-1, -5} } },
	[96] = { .set = { {-1, -6}, {-8, -5}, {6, -5}, {-1, -7} } },
	[97] = { .set = { {-5, -6}, {-7, -6}, {2, -4}, {-1, -7} } },
	[98] = { .set = { {-7, -8}, {-4, -5}, {-2, -4}, {-2, -7} } },
	[99] = { .set = { {-6, -9}, {-1, -7}, {-7, -5}, {-1, -8} } },
	[100] = { .set = { {-1, -10}, {6, -6}, {-8, -6}, {-1, -8} } },
	[101] = { .set = { {4, -9}, {-1, -7}, {5, -5}, {-1, -8} } },
	[102] = { .set = { {5, -8}, {2, -5}, {0, -4}, {0, -7} } },
	[103] = { .set = { {3, -6}, {5, -6}, {-4, -4}, {-1, -7} } },
	[104] = { .set = { {-3, -7}, {-3, -5}, {3, -2}, {0, -4} } },
	[105] = { .set = { {-2, -7}, {-3, -5}, {3, -2}, {1, -4} } },
	[106] = { .set = { {0, -7}, {-5, -10}, {5, -10}, {0, -8} } },
	[107] = { .set = { {-1, -10}, {-3, -12}, {-6, -10}, {-4, -7} } },
	[108] = { .set = { {0, -10}, {-1, -12}, {-4, -10}, {-4, -6} } },
	[109] = { .set = { {2, -8}, {-5, -9}, {0, -8}, {-3, -4} } },
	[110] = { .set = { {0, -7}, {6, -8}, {-6, -8}, {0, -5} } },
	[111] = { .set = { {-3, -8}, {4, -9}, {-1, -8}, {2, -4} } },
	[112] = { .set = { {-1, -10}, {0, -12}, {3, -10}, {3, -6} } },
	[113] = { .set = { {0, -10}, {2, -12}, {5, -10}, {3, -7} } },
	[114] = { .set = { {-1, -6}, {-8, -5}, {6, -5}, {-1, -7} } },
	[115] = { .set = { {-1, -5}, {-7, -4}, {6, -6}, {0, -6} } },
	[116] = { .set = { {-1, -5}, {-8, -6}, {5, -4}, {-1, -6} } },
	[117] = { .set = { {3, -6}, {5, -6}, {-4, -4}, {-1, -7} } },
	[118] = { .set = { {3, -5}, {2, -3}, {-1, -5}, {-1, -6} } },
	[119] = { .set = { {3, -5}, {6, -6}, {-6, -3}, {-1, -6} } },
	[120] = { .set = { {5, -8}, {2, -5}, {0, -4}, {0, -7} } },
	[121] = { .set = { {5, -7}, {-2, -6}, {3, -5}, {0, -7} } },
	[122] = { .set = { {5, -7}, {4, -6}, {-2, -3}, {0, -6} } },
	[123] = { .set = { {4, -9}, {-1, -7}, {5, -5}, {-1, -8} } },
	[124] = { .set = { {4, -8}, {-5, -5}, {5, -6}, {-1, -6} } },
	[125] = { .set = { {4, -8}, {1, -8}, {3, -3}, {-1, -7} } },
	[126] = { .set = { {-1, -10}, {6, -6}, {-8, -6}, {-1, -8} } },
	[127] = { .set = { {-1, -9}, {5, -4}, {-8, -7}, {-1, -7} } },
	[128] = { .set = { {-1, -9}, {6, -7}, {-7, -4}, {-1, -7} } },
	[129] = { .set = { {-6, -9}, {-1, -7}, {-7, -5}, {-1, -8} } },
	[130] = { .set = { {-6, -8}, {3, -5}, {-7, -6}, {-1, -6} } },
	[131] = { .set = { {-6, -8}, {-3, -8}, {-5, -3}, {-1, -7} } },
	[132] = { .set = { {-7, -8}, {-4, -5}, {-2, -4}, {-2, -7} } },
	[133] = { .set = { {-7, -7}, {0, -6}, {-5, -5}, {-2, -7} } },
	[134] = { .set = { {-7, -7}, {-6, -6}, {0, -3}, {-2, -6} } },
	[135] = { .set = { {-5, -6}, {-7, -6}, {2, -4}, {-1, -7} } },
	[136] = { .set = { {-5, -5}, {-4, -3}, {-1, -5}, {-1, -6} } },
	[137] = { .set = { {-5, -5}, {-8, -6}, {4, -3}, {-1, -6} } },
	[138] = { .set = { {-1, -5}, {-8, -7}, {6, -7}, {-1, -6} } },
	[139] = { .set = { {-7, -4}, {-6, -8}, {3, -6}, {-1, -5} } },
	[140] = { .set = { {-9, -6}, {0, -9}, {1, -6}, {-1, -6} } },
	[141] = { .set = { {-8, -6}, {1, -9}, {-3, -6}, {-1, -6} } },
	[142] = { .set = { {-1, -11}, {5, -8}, {-7, -8}, {-1, -8} } },
	[143] = { .set = { {6, -6}, {-3, -9}, {1, -6}, {-1, -6} } },
	[144] = { .set = { {7, -6}, {-2, -9}, {-3, -6}, {-1, -6} } },
	[145] = { .set = { {5, -4}, {4, -8}, {-5, -6}, {-1, -5} } },
	[146] = { .set = { {0, -11}, {-4, -9}, {4, -9}, {0, -8} } },
	[147] = { .set = { {3, -12}, {5, -10}, {-1, -9}, {0, -8} } },
	[148] = { .set = { {4, -11}, {2, -11}, {0, -9}, {0, -7} } },
	[149] = { .set = { {3, -11}, {-4, -10}, {3, -9}, {-2, -7} } },
	[150] = { .set = { {-1, -8}, {4, -9}, {-6, -9}, {-1, -6} } },
	[151] = { .set = { {-4, -11}, {3, -10}, {-4, -9}, {1, -7} } },
	[152] = { .set = { {-4, -11}, {-2, -11}, {0, -9}, {0, -7} } },
	[153] = { .set = { {-3, -12}, {-5, -10}, {1, -9}, {0, -8} } },
	[154] = { .set = { {-1, -6}, {-8, -5}, {6, -5}, {-1, -7} } },
	[155] = { .set = { {-1, -11}, {-5, -9}, {3, -9}, {-1, -8} } },
	[156] = { .set = { {-1, -5}, {-8, -7}, {6, -7}, {-1, -6} } },
	[157] = { .set = { {3, -6}, {5, -6}, {-4, -4}, {-1, -7} } },
	[158] = { .set = { {2, -11}, {4, -9}, {-2, -8}, {-1, -7} } },
	[159] = { .set = { {6, -4}, {5, -8}, {-4, -6}, {0, -5} } },
	[160] = { .set = { {5, -8}, {2, -5}, {0, -4}, {0, -7} } },
	[161] = { .set = { {3, -11}, {1, -11}, {-1, -9}, {-1, -7} } },
	[162] = { .set = { {8, -6}, {-1, -9}, {-2, -6}, {0, -6} } },
	[163] = { .set = { {4, -9}, {-1, -7}, {5, -5}, {-1, -8} } },
	[164] = { .set = { {2, -11}, {-5, -10}, {2, -9}, {-3, -7} } },
	[165] = { .set = { {6, -7}, {-3, -10}, {1, -7}, {-1, -7} } },
	[166] = { .set = { {-1, -10}, {6, -6}, {-8, -6}, {-1, -8} } },
	[167] = { .set = { {-1, -6}, {4, -7}, {-6, -7}, {-1, -4} } },
	[168] = { .set = { {-1, -11}, {5, -8}, {-7, -8}, {-1, -8} } },
	[169] = { .set = { {-6, -9}, {-1, -7}, {-7, -5}, {-1, -8} } },
	[170] = { .set = { {-4, -11}, {3, -10}, {-4, -9}, {1, -7} } },
	[171] = { .set = { {-8, -7}, {1, -10}, {-3, -7}, {-1, -7} } },
	[172] = { .set = { {-7, -8}, {-4, -5}, {-2, -4}, {-2, -7} } },
	[173] = { .set = { {-5, -11}, {-3, -11}, {-1, -9}, {-1, -7} } },
	[174] = { .set = { {-9, -6}, {0, -9}, {1, -6}, {-1, -6} } },
	[175] = { .set = { {-5, -6}, {-7, -6}, {2, -4}, {-1, -7} } },
	[176] = { .set = { {-3, -11}, {-5, -9}, {1, -8}, {0, -7} } },
	[177] = { .set = { {-7, -4}, {-6, -8}, {3, -6}, {-1, -5} } },
	[178] = { .set = { {-1, -5}, {-8, -7}, {6, -7}, {-1, -6} } },
	[179] = { .set = { {-7, -4}, {-6, -8}, {3, -6}, {-1, -5} } },
	[180] = { .set = { {-9, -6}, {0, -9}, {1, -6}, {-1, -6} } },
	[181] = { .set = { {-8, -7}, {1, -10}, {-3, -7}, {-1, -7} } },
	[182] = { .set = { {-1, -11}, {5, -8}, {-7, -8}, {-1, -8} } },
	[183] = { .set = { {6, -7}, {-3, -10}, {1, -7}, {-1, -7} } },
	[184] = { .set = { {8, -6}, {-1, -9}, {-2, -6}, {0, -6} } },
	[185] = { .set = { {6, -4}, {5, -8}, {-4, -6}, {0, -5} } },
	[186] = { .set = { {-1, -6}, {-8, -5}, {6, -5}, {-1, -7} } },
	[187] = { .set = { {-5, -6}, {-7, -6}, {2, -4}, {-1, -7} } },
	[188] = { .set = { {-7, -8}, {-4, -5}, {-2, -4}, {-2, -7} } },
	[189] = { .set = { {-6, -9}, {-1, -7}, {-7, -5}, {-1, -8} } },
	[190] = { .set = { {-1, -10}, {6, -6}, {-8, -6}, {-1, -8} } },
	[191] = { .set = { {4, -9}, {-1, -7}, {5, -5}, {-1, -8} } },
	[192] = { .set = { {5, -8}, {2, -5}, {0, -4}, {0, -7} } },
	[193] = { .set = { {3, -6}, {5, -6}, {-4, -4}, {-1, -7} } },
};

static const ax_anim *const sLarvitarAnimTable1[] = {
	gAxSharedAnim_02477,
	gAxSharedAnim_02542,
	gAxSharedAnim_02551,
	gAxSharedAnim_02559,
	gAxSharedAnim_02499,
	gAxSharedAnim_02519,
	gAxSharedAnim_02526,
	gAxSharedAnim_02535,
};

static const ax_anim *const sLarvitarAnimTable2[] = {
	sLarvitarAnims_2_1,
	sLarvitarAnims_2_2,
	sLarvitarAnims_2_3,
	sLarvitarAnims_2_4,
	sLarvitarAnims_2_5,
	sLarvitarAnims_2_6,
	sLarvitarAnims_2_7,
	sLarvitarAnims_2_8,
};

static const ax_anim *const sLarvitarAnimTable3[] = {
	sLarvitarAnims_3_1,
	sLarvitarAnims_3_2,
	sLarvitarAnims_3_3,
	sLarvitarAnims_3_4,
	sLarvitarAnims_3_5,
	sLarvitarAnims_3_6,
	sLarvitarAnims_3_7,
	sLarvitarAnims_3_8,
};

static const ax_anim *const sLarvitarAnimTable4[] = {
	sLarvitarAnims_4_1,
	sLarvitarAnims_4_2,
	sLarvitarAnims_4_3,
	sLarvitarAnims_4_4,
	sLarvitarAnims_4_5,
	sLarvitarAnims_4_6,
	sLarvitarAnims_4_7,
	sLarvitarAnims_4_8,
};

static const ax_anim *const sLarvitarAnimTable5[] = {
	gAxSharedAnim_02292,
	gAxSharedAnim_00169,
	gAxSharedAnim_00162,
	gAxSharedAnim_00159,
	gAxSharedAnim_00154,
	gAxSharedAnim_02316,
	gAxSharedAnim_02311,
	gAxSharedAnim_02300,
};

static const ax_anim *const sLarvitarAnimTable6[] = {
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
};

static const ax_anim *const sLarvitarAnimTable7[] = {
	gAxSharedAnim_00193,
	gAxSharedAnim_00201,
	gAxSharedAnim_00210,
	gAxSharedAnim_00218,
	gAxSharedAnim_00232,
	gAxSharedAnim_00244,
	gAxSharedAnim_00252,
	gAxSharedAnim_00259,
};

static const ax_anim *const sLarvitarAnimTable8[] = {
	sLarvitarAnims_8_1,
	sLarvitarAnims_8_2,
	sLarvitarAnims_8_3,
	sLarvitarAnims_8_4,
	sLarvitarAnims_8_5,
	sLarvitarAnims_8_6,
	sLarvitarAnims_8_7,
	sLarvitarAnims_8_8,
};

static const ax_anim *const sLarvitarAnimTable9[] = {
	sLarvitarAnims_9_1,
	sLarvitarAnims_9_2,
	sLarvitarAnims_9_3,
	sLarvitarAnims_9_4,
	sLarvitarAnims_9_5,
	sLarvitarAnims_9_6,
	sLarvitarAnims_9_7,
	sLarvitarAnims_9_8,
};

static const ax_anim *const sLarvitarAnimTable10[] = {
	gAxSharedAnim_00540,
	gAxSharedAnim_00547,
	gAxSharedAnim_00555,
	gAxSharedAnim_00564,
	gAxSharedAnim_00574,
	gAxSharedAnim_00584,
	gAxSharedAnim_00593,
	gAxSharedAnim_00600,
};

static const ax_anim *const sLarvitarAnimTable11[] = {
	sLarvitarAnims_11_1,
	sLarvitarAnims_11_2,
	sLarvitarAnims_11_3,
	sLarvitarAnims_11_4,
	sLarvitarAnims_11_5,
	sLarvitarAnims_11_6,
	sLarvitarAnims_11_7,
	sLarvitarAnims_11_8,
};

static const ax_anim *const sLarvitarAnimTable12[] = {
	gAxSharedAnim_00907,
	gAxSharedAnim_00996,
	gAxSharedAnim_00971,
	gAxSharedAnim_00960,
	gAxSharedAnim_00959,
	gAxSharedAnim_00945,
	gAxSharedAnim_00925,
	gAxSharedAnim_00908,
};

static const ax_anim *const sLarvitarAnimTable13[] = {
	gAxSharedAnim_01017,
	gAxSharedAnim_01123,
	gAxSharedAnim_01112,
	gAxSharedAnim_01093,
	gAxSharedAnim_01079,
	gAxSharedAnim_01063,
	gAxSharedAnim_01048,
	gAxSharedAnim_01028,
};

static const ax_anim *const *const sAxAnimationsLarvitar[] = {
	sLarvitarAnimTable1,
	sLarvitarAnimTable2,
	sLarvitarAnimTable3,
	sLarvitarAnimTable4,
	sLarvitarAnimTable5,
	sLarvitarAnimTable6,
	sLarvitarAnimTable7,
	sLarvitarAnimTable8,
	sLarvitarAnimTable9,
	sLarvitarAnimTable10,
	sLarvitarAnimTable11,
	sLarvitarAnimTable12,
	sLarvitarAnimTable13,
};

static const ax_sprite *const sAxSpritesLarvitar[] = {
	sLarvitarSprites1,
	sLarvitarSprites2,
	sLarvitarSprites3,
	sLarvitarSprites4,
	sLarvitarSprites5,
	sLarvitarSprites6,
	sLarvitarSprites7,
	sLarvitarSprites8,
	sLarvitarSprites9,
	sLarvitarSprites10,
	sLarvitarSprites11,
	sLarvitarSprites12,
	sLarvitarSprites13,
	sLarvitarSprites14,
	sLarvitarSprites15,
	sLarvitarSprites16,
	sLarvitarSprites17,
	sLarvitarSprites18,
	sLarvitarSprites19,
	sLarvitarSprites20,
	sLarvitarSprites21,
	sLarvitarSprites22,
	sLarvitarSprites23,
	sLarvitarSprites24,
	sLarvitarSprites25,
	sLarvitarSprites26,
	sLarvitarSprites27,
	sLarvitarSprites28,
	sLarvitarSprites29,
	sLarvitarSprites30,
	sLarvitarSprites31,
	sLarvitarSprites32,
	sLarvitarSprites33,
	sLarvitarSprites34,
	sLarvitarSprites35,
	sLarvitarSprites36,
	sLarvitarSprites37,
	sLarvitarSprites38,
};

static const axmain sAxMainLarvitar = {
	.poses = sAxPosesLarvitar,
	.animations = sAxAnimationsLarvitar,
	.animCount = ARRAY_COUNT(sAxAnimationsLarvitar),
	.spriteData = sAxSpritesLarvitar,
	.positions = sAxPositionsLarvitar,
};
