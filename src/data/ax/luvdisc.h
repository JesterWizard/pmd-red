/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainLuvdisc;
const SiroArchive gAxLuvdisc = {"SIRO", &sAxMainLuvdisc};

static const ax_pose sLuvdiscPose1[] = {
	AX_POSE(0, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose2[] = {
	AX_POSE(1, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose3[] = {
	AX_POSE(2, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose4[] = {
	AX_POSE(3, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose5[] = {
	AX_POSE(4, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose6[] = {
	AX_POSE(5, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose7[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose8[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose9[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose10[] = {
	AX_POSE(9, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose11[] = {
	AX_POSE(10, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose12[] = {
	AX_POSE(11, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose13[] = {
	AX_POSE(12, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose14[] = {
	AX_POSE(13, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose15[] = {
	AX_POSE(14, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose16[] = {
	AX_POSE(9, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose17[] = {
	AX_POSE(10, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose18[] = {
	AX_POSE(11, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose19[] = {
	AX_POSE(6, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose20[] = {
	AX_POSE(7, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose21[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose22[] = {
	AX_POSE(3, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose23[] = {
	AX_POSE(4, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose24[] = {
	AX_POSE(5, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose74[] = {
	AX_POSE(15, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose75[] = {
	AX_POSE(16, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose77[] = {
	AX_POSE(17, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose78[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose80[] = {
	AX_POSE(20, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(21, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose81[] = {
	AX_POSE(22, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(23, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose83[] = {
	AX_POSE(24, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose84[] = {
	AX_POSE(25, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(26, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose86[] = {
	AX_POSE(27, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose87[] = {
	AX_POSE(28, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose89[] = {
	AX_POSE(24, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose90[] = {
	AX_POSE(25, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(26, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose92[] = {
	AX_POSE(20, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(21, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(9, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose93[] = {
	AX_POSE(22, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(23, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose95[] = {
	AX_POSE(17, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose96[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose105[] = {
	AX_POSE(29, OAM1(239, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose106[] = {
	AX_POSE(30, OAM1(238, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose107[] = {
	AX_POSE(31, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose108[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose109[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose110[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose111[] = {
	AX_POSE(35, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose112[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose113[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose114[] = {
	AX_POSE(32, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose140[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose143[] = {
	AX_POSE(28, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose146[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose148[] = {
	AX_POSE(17, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose149[] = {
	AX_POSE(20, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(21, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose150[] = {
	AX_POSE(24, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose151[] = {
	AX_POSE(27, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose152[] = {
	AX_POSE(24, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose153[] = {
	AX_POSE(20, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(21, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(8, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose154[] = {
	AX_POSE(17, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose159[] = {
	AX_POSE(17, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose166[] = {
	AX_POSE(25, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(26, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose172[] = {
	AX_POSE(25, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE(26, OAM1(251, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sLuvdiscPose177[] = {
	AX_POSE(17, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_anim sLuvdiscAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 17, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 17, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 20, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 20, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 23, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 23, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 24, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 24}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 24, .offset = {1, 24}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 24}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {1, 24}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 27, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {10, 11}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {22, 25}, .shadow = {22, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {23, 24}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {22, 25}, .shadow = {22, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {23, 24}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 30, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 31, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {10, 1}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, 3}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 30, .offset = {22, 4}, .shadow = {22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, 3}, .shadow = {22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {22, 4}, .shadow = {22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 1}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 33, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {12, -11}, .shadow = {12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {23, -19}, .shadow = {23, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {24, -18}, .shadow = {24, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {23, -19}, .shadow = {23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {24, -18}, .shadow = {24, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 36, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -11}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -19}, .shadow = {0, -24} },
	{ .frames = 2, .unkFlags = 1, .poseId = 36, .offset = {1, -19}, .shadow = {1, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -19}, .shadow = {0, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {1, -19}, .shadow = {1, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 39, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 40, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-12, -11}, .shadow = {-12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-23, -19}, .shadow = {-23, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {-24, -18}, .shadow = {-24, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-23, -19}, .shadow = {-23, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-24, -18}, .shadow = {-24, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 42, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 43, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-10, 1}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-22, 3}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 42, .offset = {-22, 4}, .shadow = {-22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-22, 3}, .shadow = {-22, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-22, 4}, .shadow = {-22, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 1}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 45, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-10, 11}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-22, 25}, .shadow = {-22, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 45, .offset = {-23, 24}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-22, 25}, .shadow = {-22, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-23, 24}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 48, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 49, .offset = {0, 8}, .shadow = {0, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 24}, .shadow = {0, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 48}, .shadow = {0, 45} },
	{ .frames = 2, .unkFlags = 1, .poseId = 48, .offset = {1, 48}, .shadow = {1, 45} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 48}, .shadow = {0, 45} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 48}, .shadow = {1, 45} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 51, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 52, .offset = {8, 8}, .shadow = {8, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {24, 24}, .shadow = {24, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {46, 49}, .shadow = {46, 46} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {47, 48}, .shadow = {47, 45} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {46, 49}, .shadow = {46, 46} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {47, 48}, .shadow = {47, 45} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 54, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 55, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {24, 1}, .shadow = {24, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {46, 3}, .shadow = {46, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 54, .offset = {46, 4}, .shadow = {46, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {46, 3}, .shadow = {46, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {46, 4}, .shadow = {46, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {20, 1}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 57, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 58, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {25, -23}, .shadow = {25, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {47, -43}, .shadow = {47, -46} },
	{ .frames = 2, .unkFlags = 1, .poseId = 57, .offset = {48, -42}, .shadow = {48, -45} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {47, -43}, .shadow = {47, -46} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {48, -42}, .shadow = {48, -45} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {21, -19}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 60, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 61, .offset = {0, -8}, .shadow = {0, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -22}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -43}, .shadow = {0, -48} },
	{ .frames = 2, .unkFlags = 1, .poseId = 60, .offset = {1, -43}, .shadow = {1, -48} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -43}, .shadow = {0, -48} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {1, -43}, .shadow = {1, -48} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -16}, .shadow = {0, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 63, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 64, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-25, -23}, .shadow = {-25, -25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-47, -43}, .shadow = {-47, -46} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {-48, -42}, .shadow = {-48, -45} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-47, -43}, .shadow = {-47, -46} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-48, -42}, .shadow = {-48, -45} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-21, -19}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 66, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 67, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-24, 1}, .shadow = {-24, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-46, 3}, .shadow = {-46, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 66, .offset = {-46, 4}, .shadow = {-46, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-46, 3}, .shadow = {-46, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-46, 4}, .shadow = {-46, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-20, 1}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 69, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 70, .offset = {-8, 8}, .shadow = {-8, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-24, 24}, .shadow = {-24, 24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-46, 49}, .shadow = {-46, 46} },
	{ .frames = 2, .unkFlags = 1, .poseId = 69, .offset = {-47, 48}, .shadow = {-47, 45} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-46, 49}, .shadow = {-46, 46} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-47, 48}, .shadow = {-47, 45} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_5_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 96, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 96, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_5_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 103, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -4}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -4}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_5_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 102, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 102, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_5_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 101, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-1, -6}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 101, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-1, -6}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_5_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 100, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 100, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_5_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 99, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -6}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -6}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_5_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 98, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 98, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_5_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 97, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {1, -4}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 97, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {1, -4}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_6_1[] = {
	{ .frames = 16, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 105, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 105, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_8_1[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 115, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 114, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 116, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 114, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 115, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 114, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 116, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_8_2[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 118, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 117, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 119, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 117, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 118, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 117, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 119, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_8_3[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 121, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 120, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 122, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 120, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 121, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 120, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 122, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_8_4[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 124, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 123, .offset = {1, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 125, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 123, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 124, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 123, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 125, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_8_5[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 127, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 126, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 128, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 126, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 127, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 126, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 128, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_8_6[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 130, .offset = {-1, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 129, .offset = {-1, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 131, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 129, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 130, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 129, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 131, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_8_7[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 133, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 132, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 134, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 132, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 133, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 132, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 134, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_8_8[] = {
	{ .frames = 34, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 136, .offset = {-1, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 135, .offset = {-1, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 135, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 136, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 135, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 137, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {8, 4}, .shadow = {8, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {11, 12}, .shadow = {11, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {8, 19}, .shadow = {8, 19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 143, .offset = {-8, 19}, .shadow = {-8, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-11, 12}, .shadow = {-11, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {-8, 4}, .shadow = {-8, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {10, 1}, .shadow = {10, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {19, 6}, .shadow = {19, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {23, 16}, .shadow = {23, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 141, .offset = {23, 24}, .shadow = {23, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 142, .offset = {13, 25}, .shadow = {13, 25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {5, 17}, .shadow = {5, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {1, 8}, .shadow = {1, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {5, -4}, .shadow = {5, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {12, -4}, .shadow = {12, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {20, -2}, .shadow = {20, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {24, 3}, .shadow = {24, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 141, .offset = {17, 8}, .shadow = {17, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {11, 8}, .shadow = {11, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {4, 6}, .shadow = {4, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {6, -15}, .shadow = {6, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {14, -19}, .shadow = {14, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {22, -19}, .shadow = {22, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 140, .offset = {22, -12}, .shadow = {22, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {18, -7}, .shadow = {18, -7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {12, -1}, .shadow = {12, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {-9, -4}, .shadow = {-9, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-10, -11}, .shadow = {-10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-6, -17}, .shadow = {-6, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -20}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 139, .offset = {6, -17}, .shadow = {6, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {10, -11}, .shadow = {10, -11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {9, -4}, .shadow = {9, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-6, -15}, .shadow = {-6, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-14, -19}, .shadow = {-14, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {-22, -19}, .shadow = {-22, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 144, .offset = {-22, -12}, .shadow = {-22, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {-18, -7}, .shadow = {-18, -7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {-12, -1}, .shadow = {-12, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {-5, -4}, .shadow = {-5, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-12, -4}, .shadow = {-12, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-20, -2}, .shadow = {-20, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {-24, 3}, .shadow = {-24, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 143, .offset = {-17, 8}, .shadow = {-17, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {-11, 8}, .shadow = {-11, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {-4, 6}, .shadow = {-4, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {-10, 1}, .shadow = {-10, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-19, 6}, .shadow = {-19, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-23, 16}, .shadow = {-23, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {-23, 24}, .shadow = {-23, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 142, .offset = {-13, 25}, .shadow = {-13, 25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {-5, 17}, .shadow = {-5, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {-1, 8}, .shadow = {-1, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 155, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 156, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 159, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 161, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 162, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 165, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 168, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 168, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 171, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 173, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 174, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sLuvdiscAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 176, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 177, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sLuvdiscGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_1.4bpp.lz");
static const ax_sprite sLuvdiscSprites1[] = {
	{sLuvdiscGfx1, ARRAY_COUNT(sLuvdiscGfx1)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_2.4bpp.lz");
static const ax_sprite sLuvdiscSprites2[] = {
	{sLuvdiscGfx2, ARRAY_COUNT(sLuvdiscGfx2)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_3.4bpp.lz");
static const ax_sprite sLuvdiscSprites3[] = {
	{sLuvdiscGfx3, ARRAY_COUNT(sLuvdiscGfx3)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_4.4bpp.lz");
static const ax_sprite sLuvdiscSprites4[] = {
	{sLuvdiscGfx4, ARRAY_COUNT(sLuvdiscGfx4)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_5.4bpp.lz");
static const ax_sprite sLuvdiscSprites5[] = {
	{sLuvdiscGfx5, ARRAY_COUNT(sLuvdiscGfx5)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_6.4bpp.lz");
static const ax_sprite sLuvdiscSprites6[] = {
	{sLuvdiscGfx6, ARRAY_COUNT(sLuvdiscGfx6)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_7.4bpp.lz");
static const ax_sprite sLuvdiscSprites7[] = {
	{sLuvdiscGfx7, ARRAY_COUNT(sLuvdiscGfx7)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_8.4bpp.lz");
static const ax_sprite sLuvdiscSprites8[] = {
	{sLuvdiscGfx8, ARRAY_COUNT(sLuvdiscGfx8)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_9.4bpp.lz");
static const ax_sprite sLuvdiscSprites9[] = {
	{sLuvdiscGfx9, ARRAY_COUNT(sLuvdiscGfx9)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_10.4bpp.lz");
static const ax_sprite sLuvdiscSprites10[] = {
	{sLuvdiscGfx10, ARRAY_COUNT(sLuvdiscGfx10)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_11.4bpp.lz");
static const ax_sprite sLuvdiscSprites11[] = {
	{sLuvdiscGfx11, ARRAY_COUNT(sLuvdiscGfx11)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_12.4bpp.lz");
static const ax_sprite sLuvdiscSprites12[] = {
	{sLuvdiscGfx12, ARRAY_COUNT(sLuvdiscGfx12)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_13.4bpp.lz");
static const ax_sprite sLuvdiscSprites13[] = {
	{sLuvdiscGfx13, ARRAY_COUNT(sLuvdiscGfx13)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_14.4bpp.lz");
static const ax_sprite sLuvdiscSprites14[] = {
	{sLuvdiscGfx14, ARRAY_COUNT(sLuvdiscGfx14)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_15.4bpp.lz");
static const ax_sprite sLuvdiscSprites15[] = {
	{sLuvdiscGfx15, ARRAY_COUNT(sLuvdiscGfx15)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_16.4bpp.lz");
static const ax_sprite sLuvdiscSprites16[] = {
	{sLuvdiscGfx16, ARRAY_COUNT(sLuvdiscGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_17.4bpp.lz");
static const ax_sprite sLuvdiscSprites17[] = {
	{sLuvdiscGfx17, ARRAY_COUNT(sLuvdiscGfx17)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_18.4bpp.lz");
static const ax_sprite sLuvdiscSprites18[] = {
	{sLuvdiscGfx18, ARRAY_COUNT(sLuvdiscGfx18)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_19.4bpp.lz");
static const ax_sprite sLuvdiscSprites19[] = {
	{sLuvdiscGfx19, ARRAY_COUNT(sLuvdiscGfx19)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_20.4bpp.lz");
static const ax_sprite sLuvdiscSprites20[] = {
	{sLuvdiscGfx20, ARRAY_COUNT(sLuvdiscGfx20)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_21.4bpp.lz");
static const ax_sprite sLuvdiscSprites21[] = {
	{sLuvdiscGfx21, ARRAY_COUNT(sLuvdiscGfx21)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_22.4bpp.lz");
static const ax_sprite sLuvdiscSprites22[] = {
	{sLuvdiscGfx22, ARRAY_COUNT(sLuvdiscGfx22)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_23.4bpp.lz");
static const ax_sprite sLuvdiscSprites23[] = {
	{sLuvdiscGfx23, ARRAY_COUNT(sLuvdiscGfx23)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_24.4bpp.lz");
static const ax_sprite sLuvdiscSprites24[] = {
	{sLuvdiscGfx24, ARRAY_COUNT(sLuvdiscGfx24)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_25.4bpp.lz");
static const ax_sprite sLuvdiscSprites25[] = {
	{sLuvdiscGfx25, ARRAY_COUNT(sLuvdiscGfx25)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_26.4bpp.lz");
static const ax_sprite sLuvdiscSprites26[] = {
	{sLuvdiscGfx26, ARRAY_COUNT(sLuvdiscGfx26)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_27.4bpp.lz");
static const ax_sprite sLuvdiscSprites27[] = {
	{sLuvdiscGfx27, ARRAY_COUNT(sLuvdiscGfx27)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_28.4bpp.lz");
static const ax_sprite sLuvdiscSprites28[] = {
	{sLuvdiscGfx28, ARRAY_COUNT(sLuvdiscGfx28)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_29.4bpp.lz");
static const ax_sprite sLuvdiscSprites29[] = {
	{sLuvdiscGfx29, ARRAY_COUNT(sLuvdiscGfx29)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_30.4bpp.lz");
static const ax_sprite sLuvdiscSprites30[] = {
	{sLuvdiscGfx30, ARRAY_COUNT(sLuvdiscGfx30)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_31.4bpp.lz");
static const ax_sprite sLuvdiscSprites31[] = {
	{sLuvdiscGfx31, ARRAY_COUNT(sLuvdiscGfx31)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_32.4bpp.lz");
static const ax_sprite sLuvdiscSprites32[] = {
	{sLuvdiscGfx32, ARRAY_COUNT(sLuvdiscGfx32)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_33.4bpp.lz");
static const ax_sprite sLuvdiscSprites33[] = {
	{sLuvdiscGfx33, ARRAY_COUNT(sLuvdiscGfx33)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_34.4bpp.lz");
static const ax_sprite sLuvdiscSprites34[] = {
	{sLuvdiscGfx34, ARRAY_COUNT(sLuvdiscGfx34)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_35.4bpp.lz");
static const ax_sprite sLuvdiscSprites35[] = {
	{sLuvdiscGfx35, ARRAY_COUNT(sLuvdiscGfx35)}, 
	{NULL, 0}
};
static const u8 sLuvdiscGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/luvdisc/sprite_36.4bpp.lz");
static const ax_sprite sLuvdiscSprites36[] = {
	{sLuvdiscGfx36, ARRAY_COUNT(sLuvdiscGfx36)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesLuvdisc[] = {
	sLuvdiscPose1,
	sLuvdiscPose2,
	sLuvdiscPose3,
	sLuvdiscPose4,
	sLuvdiscPose5,
	sLuvdiscPose6,
	sLuvdiscPose7,
	sLuvdiscPose8,
	sLuvdiscPose9,
	sLuvdiscPose10,
	sLuvdiscPose11,
	sLuvdiscPose12,
	sLuvdiscPose13,
	sLuvdiscPose14,
	sLuvdiscPose15,
	sLuvdiscPose16,
	sLuvdiscPose17,
	sLuvdiscPose18,
	sLuvdiscPose19,
	sLuvdiscPose20,
	sLuvdiscPose21,
	sLuvdiscPose22,
	sLuvdiscPose23,
	sLuvdiscPose24,
	sLuvdiscPose1,
	sLuvdiscPose2,
	sLuvdiscPose3,
	sLuvdiscPose4,
	sLuvdiscPose5,
	sLuvdiscPose6,
	sLuvdiscPose7,
	sLuvdiscPose8,
	sLuvdiscPose9,
	sLuvdiscPose10,
	sLuvdiscPose11,
	sLuvdiscPose12,
	sLuvdiscPose13,
	sLuvdiscPose14,
	sLuvdiscPose15,
	sLuvdiscPose16,
	sLuvdiscPose17,
	sLuvdiscPose18,
	sLuvdiscPose19,
	sLuvdiscPose20,
	sLuvdiscPose21,
	sLuvdiscPose22,
	sLuvdiscPose23,
	sLuvdiscPose24,
	sLuvdiscPose1,
	sLuvdiscPose2,
	sLuvdiscPose3,
	sLuvdiscPose4,
	sLuvdiscPose5,
	sLuvdiscPose6,
	sLuvdiscPose7,
	sLuvdiscPose8,
	sLuvdiscPose9,
	sLuvdiscPose10,
	sLuvdiscPose11,
	sLuvdiscPose12,
	sLuvdiscPose13,
	sLuvdiscPose14,
	sLuvdiscPose15,
	sLuvdiscPose16,
	sLuvdiscPose17,
	sLuvdiscPose18,
	sLuvdiscPose19,
	sLuvdiscPose20,
	sLuvdiscPose21,
	sLuvdiscPose22,
	sLuvdiscPose23,
	sLuvdiscPose24,
	sLuvdiscPose1,
	sLuvdiscPose74,
	sLuvdiscPose75,
	sLuvdiscPose4,
	sLuvdiscPose77,
	sLuvdiscPose78,
	sLuvdiscPose7,
	sLuvdiscPose80,
	sLuvdiscPose81,
	sLuvdiscPose10,
	sLuvdiscPose83,
	sLuvdiscPose84,
	sLuvdiscPose13,
	sLuvdiscPose86,
	sLuvdiscPose87,
	sLuvdiscPose16,
	sLuvdiscPose89,
	sLuvdiscPose90,
	sLuvdiscPose19,
	sLuvdiscPose92,
	sLuvdiscPose93,
	sLuvdiscPose22,
	sLuvdiscPose95,
	sLuvdiscPose96,
	sLuvdiscPose1,
	sLuvdiscPose22,
	sLuvdiscPose19,
	sLuvdiscPose16,
	sLuvdiscPose13,
	sLuvdiscPose10,
	sLuvdiscPose7,
	sLuvdiscPose4,
	sLuvdiscPose105,
	sLuvdiscPose106,
	sLuvdiscPose107,
	sLuvdiscPose108,
	sLuvdiscPose109,
	sLuvdiscPose110,
	sLuvdiscPose111,
	sLuvdiscPose112,
	sLuvdiscPose113,
	sLuvdiscPose114,
	sLuvdiscPose1,
	sLuvdiscPose2,
	sLuvdiscPose3,
	sLuvdiscPose4,
	sLuvdiscPose5,
	sLuvdiscPose6,
	sLuvdiscPose7,
	sLuvdiscPose8,
	sLuvdiscPose9,
	sLuvdiscPose10,
	sLuvdiscPose11,
	sLuvdiscPose12,
	sLuvdiscPose13,
	sLuvdiscPose14,
	sLuvdiscPose15,
	sLuvdiscPose16,
	sLuvdiscPose17,
	sLuvdiscPose18,
	sLuvdiscPose19,
	sLuvdiscPose20,
	sLuvdiscPose21,
	sLuvdiscPose22,
	sLuvdiscPose23,
	sLuvdiscPose24,
	sLuvdiscPose75,
	sLuvdiscPose140,
	sLuvdiscPose93,
	sLuvdiscPose90,
	sLuvdiscPose143,
	sLuvdiscPose84,
	sLuvdiscPose81,
	sLuvdiscPose146,
	sLuvdiscPose74,
	sLuvdiscPose148,
	sLuvdiscPose149,
	sLuvdiscPose150,
	sLuvdiscPose151,
	sLuvdiscPose152,
	sLuvdiscPose153,
	sLuvdiscPose154,
	sLuvdiscPose1,
	sLuvdiscPose74,
	sLuvdiscPose75,
	sLuvdiscPose4,
	sLuvdiscPose159,
	sLuvdiscPose78,
	sLuvdiscPose7,
	sLuvdiscPose149,
	sLuvdiscPose81,
	sLuvdiscPose10,
	sLuvdiscPose83,
	sLuvdiscPose166,
	sLuvdiscPose13,
	sLuvdiscPose86,
	sLuvdiscPose87,
	sLuvdiscPose16,
	sLuvdiscPose89,
	sLuvdiscPose172,
	sLuvdiscPose19,
	sLuvdiscPose153,
	sLuvdiscPose93,
	sLuvdiscPose22,
	sLuvdiscPose177,
	sLuvdiscPose96,
	sLuvdiscPose75,
	sLuvdiscPose140,
	sLuvdiscPose93,
	sLuvdiscPose90,
	sLuvdiscPose143,
	sLuvdiscPose84,
	sLuvdiscPose81,
	sLuvdiscPose146,
	sLuvdiscPose1,
	sLuvdiscPose22,
	sLuvdiscPose19,
	sLuvdiscPose16,
	sLuvdiscPose13,
	sLuvdiscPose10,
	sLuvdiscPose7,
	sLuvdiscPose4,
};

static const struct PositionSets sAxPositionsLuvdisc[] = {
	[0] = { .set = { {0, -8}, {-4, -13}, {3, -13}, {-1, -13} } },
	[1] = { .set = { {1, -8}, {-3, -13}, {2, -15}, {-1, -13} } },
	[2] = { .set = { {-2, -8}, {-3, -14}, {3, -13}, {0, -13} } },
	[3] = { .set = { {6, -10}, {3, -15}, {0, -13}, {0, -12} } },
	[4] = { .set = { {5, -10}, {2, -16}, {-1, -13}, {-1, -12} } },
	[5] = { .set = { {7, -10}, {3, -17}, {2, -14}, {1, -12} } },
	[6] = { .set = { {8, -11}, {2, -15}, {0, -14}, {0, -12} } },
	[7] = { .set = { {8, -11}, {3, -16}, {1, -14}, {0, -12} } },
	[8] = { .set = { {8, -11}, {1, -16}, {2, -14}, {1, -12} } },
	[9] = { .set = { {4, -14}, {-2, -15}, {1, -14}, {0, -12} } },
	[10] = { .set = { {4, -14}, {-1, -16}, {1, -15}, {0, -12} } },
	[11] = { .set = { {4, -14}, {-1, -16}, {2, -16}, {1, -12} } },
	[12] = { .set = { {-1, -13}, {3, -15}, {-4, -15}, {0, -12} } },
	[13] = { .set = { {0, -13}, {4, -15}, {-3, -15}, {0, -12} } },
	[14] = { .set = { {-1, -13}, {2, -15}, {-5, -16}, {-1, -12} } },
	[15] = { .set = { {-5, -14}, {1, -15}, {-2, -14}, {-1, -12} } },
	[16] = { .set = { {-5, -14}, {0, -16}, {-2, -15}, {-1, -12} } },
	[17] = { .set = { {-5, -14}, {0, -16}, {-3, -16}, {-2, -12} } },
	[18] = { .set = { {-9, -11}, {-3, -15}, {-1, -14}, {-1, -12} } },
	[19] = { .set = { {-9, -11}, {-4, -16}, {-2, -14}, {-1, -12} } },
	[20] = { .set = { {-9, -11}, {-2, -16}, {-3, -14}, {-2, -12} } },
	[21] = { .set = { {-7, -10}, {-4, -15}, {-1, -13}, {-1, -12} } },
	[22] = { .set = { {-6, -10}, {-3, -16}, {0, -13}, {0, -12} } },
	[23] = { .set = { {-8, -10}, {-4, -17}, {-3, -14}, {-2, -12} } },
	[24] = { .set = { {0, -8}, {-4, -13}, {3, -13}, {-1, -13} } },
	[25] = { .set = { {1, -8}, {-3, -13}, {2, -15}, {-1, -13} } },
	[26] = { .set = { {-2, -8}, {-3, -14}, {3, -13}, {0, -13} } },
	[27] = { .set = { {6, -10}, {3, -15}, {0, -13}, {0, -12} } },
	[28] = { .set = { {5, -10}, {2, -16}, {-1, -13}, {-1, -12} } },
	[29] = { .set = { {7, -10}, {3, -17}, {2, -14}, {1, -12} } },
	[30] = { .set = { {8, -11}, {2, -15}, {0, -14}, {0, -12} } },
	[31] = { .set = { {8, -11}, {3, -16}, {1, -14}, {0, -12} } },
	[32] = { .set = { {8, -11}, {1, -16}, {2, -14}, {1, -12} } },
	[33] = { .set = { {4, -14}, {-2, -15}, {1, -14}, {0, -12} } },
	[34] = { .set = { {4, -14}, {-1, -16}, {1, -15}, {0, -12} } },
	[35] = { .set = { {4, -14}, {-1, -16}, {2, -16}, {1, -12} } },
	[36] = { .set = { {-1, -13}, {3, -15}, {-4, -15}, {0, -12} } },
	[37] = { .set = { {0, -13}, {4, -15}, {-3, -15}, {0, -12} } },
	[38] = { .set = { {-1, -13}, {2, -15}, {-5, -16}, {-1, -12} } },
	[39] = { .set = { {-5, -14}, {1, -15}, {-2, -14}, {-1, -12} } },
	[40] = { .set = { {-5, -14}, {0, -16}, {-2, -15}, {-1, -12} } },
	[41] = { .set = { {-5, -14}, {0, -16}, {-3, -16}, {-2, -12} } },
	[42] = { .set = { {-9, -11}, {-3, -15}, {-1, -14}, {-1, -12} } },
	[43] = { .set = { {-9, -11}, {-4, -16}, {-2, -14}, {-1, -12} } },
	[44] = { .set = { {-9, -11}, {-2, -16}, {-3, -14}, {-2, -12} } },
	[45] = { .set = { {-7, -10}, {-4, -15}, {-1, -13}, {-1, -12} } },
	[46] = { .set = { {-6, -10}, {-3, -16}, {0, -13}, {0, -12} } },
	[47] = { .set = { {-8, -10}, {-4, -17}, {-3, -14}, {-2, -12} } },
	[48] = { .set = { {0, -8}, {-4, -13}, {3, -13}, {-1, -13} } },
	[49] = { .set = { {1, -8}, {-3, -13}, {2, -15}, {-1, -13} } },
	[50] = { .set = { {-2, -8}, {-3, -14}, {3, -13}, {0, -13} } },
	[51] = { .set = { {6, -10}, {3, -15}, {0, -13}, {0, -12} } },
	[52] = { .set = { {5, -10}, {2, -16}, {-1, -13}, {-1, -12} } },
	[53] = { .set = { {7, -10}, {3, -17}, {2, -14}, {1, -12} } },
	[54] = { .set = { {8, -11}, {2, -15}, {0, -14}, {0, -12} } },
	[55] = { .set = { {8, -11}, {3, -16}, {1, -14}, {0, -12} } },
	[56] = { .set = { {8, -11}, {1, -16}, {2, -14}, {1, -12} } },
	[57] = { .set = { {4, -14}, {-2, -15}, {1, -14}, {0, -12} } },
	[58] = { .set = { {4, -14}, {-1, -16}, {1, -15}, {0, -12} } },
	[59] = { .set = { {4, -14}, {-1, -16}, {2, -16}, {1, -12} } },
	[60] = { .set = { {-1, -13}, {3, -15}, {-4, -15}, {0, -12} } },
	[61] = { .set = { {0, -13}, {4, -15}, {-3, -15}, {0, -12} } },
	[62] = { .set = { {-1, -13}, {2, -15}, {-5, -16}, {-1, -12} } },
	[63] = { .set = { {-5, -14}, {1, -15}, {-2, -14}, {-1, -12} } },
	[64] = { .set = { {-5, -14}, {0, -16}, {-2, -15}, {-1, -12} } },
	[65] = { .set = { {-5, -14}, {0, -16}, {-3, -16}, {-2, -12} } },
	[66] = { .set = { {-9, -11}, {-3, -15}, {-1, -14}, {-1, -12} } },
	[67] = { .set = { {-9, -11}, {-4, -16}, {-2, -14}, {-1, -12} } },
	[68] = { .set = { {-9, -11}, {-2, -16}, {-3, -14}, {-2, -12} } },
	[69] = { .set = { {-7, -10}, {-4, -15}, {-1, -13}, {-1, -12} } },
	[70] = { .set = { {-6, -10}, {-3, -16}, {0, -13}, {0, -12} } },
	[71] = { .set = { {-8, -10}, {-4, -17}, {-3, -14}, {-2, -12} } },
	[72] = { .set = { {0, -8}, {-4, -13}, {3, -13}, {-1, -13} } },
	[73] = { .set = { {-1, -16}, {-4, -16}, {3, -16}, {-1, -12} } },
	[74] = { .set = { {-1, -5}, {-4, -12}, {3, -12}, {-1, -12} } },
	[75] = { .set = { {6, -10}, {3, -15}, {0, -13}, {0, -12} } },
	[76] = { .set = { {3, -17}, {1, -19}, {-2, -16}, {0, -12} } },
	[77] = { .set = { {7, -9}, {4, -13}, {2, -11}, {0, -10} } },
	[78] = { .set = { {8, -11}, {2, -15}, {0, -14}, {0, -12} } },
	[79] = { .set = { {4, -19}, {-2, -18}, {-2, -16}, {0, -13} } },
	[80] = { .set = { {9, -11}, {2, -16}, {1, -14}, {0, -11} } },
	[81] = { .set = { {4, -14}, {-2, -15}, {1, -14}, {0, -12} } },
	[82] = { .set = { {3, -17}, {-3, -16}, {0, -15}, {0, -11} } },
	[83] = { .set = { {6, -14}, {1, -16}, {3, -14}, {0, -11} } },
	[84] = { .set = { {-1, -13}, {3, -15}, {-4, -15}, {0, -12} } },
	[85] = { .set = { {0, -22}, {3, -16}, {-4, -16}, {-1, -14} } },
	[86] = { .set = { {-1, -17}, {3, -16}, {-4, -16}, {-1, -12} } },
	[87] = { .set = { {-5, -14}, {1, -15}, {-2, -14}, {-1, -12} } },
	[88] = { .set = { {-4, -17}, {2, -16}, {-1, -15}, {-1, -11} } },
	[89] = { .set = { {-7, -14}, {-2, -16}, {-4, -14}, {-1, -11} } },
	[90] = { .set = { {-9, -11}, {-3, -15}, {-1, -14}, {-1, -12} } },
	[91] = { .set = { {-5, -19}, {1, -18}, {1, -16}, {-1, -13} } },
	[92] = { .set = { {-10, -11}, {-3, -16}, {-2, -14}, {-1, -11} } },
	[93] = { .set = { {-7, -10}, {-4, -15}, {-1, -13}, {-1, -12} } },
	[94] = { .set = { {-4, -17}, {-2, -19}, {1, -16}, {-1, -12} } },
	[95] = { .set = { {-8, -9}, {-5, -13}, {-3, -11}, {-1, -10} } },
	[96] = { .set = { {0, -8}, {-4, -13}, {3, -13}, {-1, -13} } },
	[97] = { .set = { {-7, -10}, {-4, -15}, {-1, -13}, {-1, -12} } },
	[98] = { .set = { {-9, -11}, {-3, -15}, {-1, -14}, {-1, -12} } },
	[99] = { .set = { {-5, -14}, {1, -15}, {-2, -14}, {-1, -12} } },
	[100] = { .set = { {-1, -13}, {3, -15}, {-4, -15}, {0, -12} } },
	[101] = { .set = { {4, -14}, {-2, -15}, {1, -14}, {0, -12} } },
	[102] = { .set = { {8, -11}, {2, -15}, {0, -14}, {0, -12} } },
	[103] = { .set = { {6, -10}, {3, -15}, {0, -13}, {0, -12} } },
	[104] = { .set = { {-9, -7}, {-4, -8}, {-4, -12}, {0, -10} } },
	[105] = { .set = { {-9, -8}, {-4, -9}, {-4, -13}, {0, -12} } },
	[106] = { .set = { {-8, -14}, {-4, -17}, {-2, -15}, {-1, -14} } },
	[107] = { .set = { {6, -14}, {-1, -17}, {2, -17}, {1, -13} } },
	[108] = { .set = { {1, -16}, {-3, -16}, {3, -16}, {0, -12} } },
	[109] = { .set = { {-6, -14}, {-1, -15}, {2, -16}, {-1, -13} } },
	[110] = { .set = { {8, -16}, {0, -15}, {-1, -17}, {-1, -12} } },
	[111] = { .set = { {5, -14}, {0, -15}, {-3, -16}, {0, -13} } },
	[112] = { .set = { {-2, -16}, {2, -16}, {-4, -16}, {-1, -12} } },
	[113] = { .set = { {-7, -14}, {0, -17}, {-3, -17}, {-2, -13} } },
	[114] = { .set = { {0, -8}, {-4, -13}, {3, -13}, {-1, -13} } },
	[115] = { .set = { {1, -8}, {-3, -13}, {2, -15}, {-1, -13} } },
	[116] = { .set = { {-2, -8}, {-3, -14}, {3, -13}, {0, -13} } },
	[117] = { .set = { {6, -10}, {3, -15}, {0, -13}, {0, -12} } },
	[118] = { .set = { {5, -10}, {2, -16}, {-1, -13}, {-1, -12} } },
	[119] = { .set = { {7, -10}, {3, -17}, {2, -14}, {1, -12} } },
	[120] = { .set = { {8, -11}, {2, -15}, {0, -14}, {0, -12} } },
	[121] = { .set = { {8, -11}, {3, -16}, {1, -14}, {0, -12} } },
	[122] = { .set = { {8, -11}, {1, -16}, {2, -14}, {1, -12} } },
	[123] = { .set = { {4, -14}, {-2, -15}, {1, -14}, {0, -12} } },
	[124] = { .set = { {4, -14}, {-1, -16}, {1, -15}, {0, -12} } },
	[125] = { .set = { {4, -14}, {-1, -16}, {2, -16}, {1, -12} } },
	[126] = { .set = { {-1, -13}, {3, -15}, {-4, -15}, {0, -12} } },
	[127] = { .set = { {0, -13}, {4, -15}, {-3, -15}, {0, -12} } },
	[128] = { .set = { {-1, -13}, {2, -15}, {-5, -16}, {-1, -12} } },
	[129] = { .set = { {-5, -14}, {1, -15}, {-2, -14}, {-1, -12} } },
	[130] = { .set = { {-5, -14}, {0, -16}, {-2, -15}, {-1, -12} } },
	[131] = { .set = { {-5, -14}, {0, -16}, {-3, -16}, {-2, -12} } },
	[132] = { .set = { {-9, -11}, {-3, -15}, {-1, -14}, {-1, -12} } },
	[133] = { .set = { {-9, -11}, {-4, -16}, {-2, -14}, {-1, -12} } },
	[134] = { .set = { {-9, -11}, {-2, -16}, {-3, -14}, {-2, -12} } },
	[135] = { .set = { {-7, -10}, {-4, -15}, {-1, -13}, {-1, -12} } },
	[136] = { .set = { {-6, -10}, {-3, -16}, {0, -13}, {0, -12} } },
	[137] = { .set = { {-8, -10}, {-4, -17}, {-3, -14}, {-2, -12} } },
	[138] = { .set = { {-1, -5}, {-4, -12}, {3, -12}, {-1, -12} } },
	[139] = { .set = { {-8, -10}, {-5, -14}, {-3, -12}, {-1, -11} } },
	[140] = { .set = { {-10, -11}, {-3, -16}, {-2, -14}, {-1, -11} } },
	[141] = { .set = { {-7, -14}, {-2, -16}, {-4, -14}, {-1, -11} } },
	[142] = { .set = { {-1, -16}, {3, -15}, {-4, -15}, {-1, -11} } },
	[143] = { .set = { {6, -14}, {1, -16}, {3, -14}, {0, -11} } },
	[144] = { .set = { {9, -11}, {2, -16}, {1, -14}, {0, -11} } },
	[145] = { .set = { {7, -10}, {4, -14}, {2, -12}, {0, -11} } },
	[146] = { .set = { {-1, -16}, {-4, -16}, {3, -16}, {-1, -12} } },
	[147] = { .set = { {4, -17}, {2, -19}, {-1, -16}, {1, -12} } },
	[148] = { .set = { {5, -19}, {-1, -18}, {-1, -16}, {1, -13} } },
	[149] = { .set = { {4, -18}, {-2, -17}, {1, -16}, {1, -12} } },
	[150] = { .set = { {0, -21}, {3, -15}, {-4, -15}, {-1, -13} } },
	[151] = { .set = { {-5, -18}, {1, -17}, {-2, -16}, {-2, -12} } },
	[152] = { .set = { {-6, -19}, {0, -18}, {0, -16}, {-2, -13} } },
	[153] = { .set = { {-5, -17}, {-3, -19}, {0, -16}, {-2, -12} } },
	[154] = { .set = { {0, -8}, {-4, -13}, {3, -13}, {-1, -13} } },
	[155] = { .set = { {-1, -16}, {-4, -16}, {3, -16}, {-1, -12} } },
	[156] = { .set = { {-1, -5}, {-4, -12}, {3, -12}, {-1, -12} } },
	[157] = { .set = { {6, -10}, {3, -15}, {0, -13}, {0, -12} } },
	[158] = { .set = { {4, -15}, {2, -17}, {-1, -14}, {1, -10} } },
	[159] = { .set = { {7, -9}, {4, -13}, {2, -11}, {0, -10} } },
	[160] = { .set = { {8, -11}, {2, -15}, {0, -14}, {0, -12} } },
	[161] = { .set = { {5, -19}, {-1, -18}, {-1, -16}, {1, -13} } },
	[162] = { .set = { {9, -11}, {2, -16}, {1, -14}, {0, -11} } },
	[163] = { .set = { {4, -14}, {-2, -15}, {1, -14}, {0, -12} } },
	[164] = { .set = { {3, -17}, {-3, -16}, {0, -15}, {0, -11} } },
	[165] = { .set = { {7, -14}, {2, -16}, {4, -14}, {1, -11} } },
	[166] = { .set = { {-1, -13}, {3, -15}, {-4, -15}, {0, -12} } },
	[167] = { .set = { {0, -22}, {3, -16}, {-4, -16}, {-1, -14} } },
	[168] = { .set = { {-1, -17}, {3, -16}, {-4, -16}, {-1, -12} } },
	[169] = { .set = { {-5, -14}, {1, -15}, {-2, -14}, {-1, -12} } },
	[170] = { .set = { {-4, -17}, {2, -16}, {-1, -15}, {-1, -11} } },
	[171] = { .set = { {-8, -14}, {-3, -16}, {-5, -14}, {-2, -11} } },
	[172] = { .set = { {-9, -11}, {-3, -15}, {-1, -14}, {-1, -12} } },
	[173] = { .set = { {-6, -19}, {0, -18}, {0, -16}, {-2, -13} } },
	[174] = { .set = { {-10, -11}, {-3, -16}, {-2, -14}, {-1, -11} } },
	[175] = { .set = { {-7, -10}, {-4, -15}, {-1, -13}, {-1, -12} } },
	[176] = { .set = { {-5, -15}, {-3, -17}, {0, -14}, {-2, -10} } },
	[177] = { .set = { {-8, -9}, {-5, -13}, {-3, -11}, {-1, -10} } },
	[178] = { .set = { {-1, -5}, {-4, -12}, {3, -12}, {-1, -12} } },
	[179] = { .set = { {-8, -10}, {-5, -14}, {-3, -12}, {-1, -11} } },
	[180] = { .set = { {-10, -11}, {-3, -16}, {-2, -14}, {-1, -11} } },
	[181] = { .set = { {-7, -14}, {-2, -16}, {-4, -14}, {-1, -11} } },
	[182] = { .set = { {-1, -16}, {3, -15}, {-4, -15}, {-1, -11} } },
	[183] = { .set = { {6, -14}, {1, -16}, {3, -14}, {0, -11} } },
	[184] = { .set = { {9, -11}, {2, -16}, {1, -14}, {0, -11} } },
	[185] = { .set = { {7, -10}, {4, -14}, {2, -12}, {0, -11} } },
	[186] = { .set = { {0, -8}, {-4, -13}, {3, -13}, {-1, -13} } },
	[187] = { .set = { {-7, -10}, {-4, -15}, {-1, -13}, {-1, -12} } },
	[188] = { .set = { {-9, -11}, {-3, -15}, {-1, -14}, {-1, -12} } },
	[189] = { .set = { {-5, -14}, {1, -15}, {-2, -14}, {-1, -12} } },
	[190] = { .set = { {-1, -13}, {3, -15}, {-4, -15}, {0, -12} } },
	[191] = { .set = { {4, -14}, {-2, -15}, {1, -14}, {0, -12} } },
	[192] = { .set = { {8, -11}, {2, -15}, {0, -14}, {0, -12} } },
	[193] = { .set = { {6, -10}, {3, -15}, {0, -13}, {0, -12} } },
};

static const ax_anim *const sLuvdiscAnimTable1[] = {
	sLuvdiscAnims_1_1,
	sLuvdiscAnims_1_2,
	sLuvdiscAnims_1_3,
	sLuvdiscAnims_1_4,
	sLuvdiscAnims_1_5,
	sLuvdiscAnims_1_6,
	sLuvdiscAnims_1_7,
	sLuvdiscAnims_1_8,
};

static const ax_anim *const sLuvdiscAnimTable2[] = {
	sLuvdiscAnims_2_1,
	sLuvdiscAnims_2_2,
	sLuvdiscAnims_2_3,
	sLuvdiscAnims_2_4,
	sLuvdiscAnims_2_5,
	sLuvdiscAnims_2_6,
	sLuvdiscAnims_2_7,
	sLuvdiscAnims_2_8,
};

static const ax_anim *const sLuvdiscAnimTable3[] = {
	sLuvdiscAnims_3_1,
	sLuvdiscAnims_3_2,
	sLuvdiscAnims_3_3,
	sLuvdiscAnims_3_4,
	sLuvdiscAnims_3_5,
	sLuvdiscAnims_3_6,
	sLuvdiscAnims_3_7,
	sLuvdiscAnims_3_8,
};

static const ax_anim *const sLuvdiscAnimTable4[] = {
	gAxSharedAnim_02096,
	gAxSharedAnim_02114,
	gAxSharedAnim_02137,
	gAxSharedAnim_02159,
	gAxSharedAnim_02194,
	gAxSharedAnim_02222,
	gAxSharedAnim_02251,
	gAxSharedAnim_02280,
};

static const ax_anim *const sLuvdiscAnimTable5[] = {
	sLuvdiscAnims_5_1,
	sLuvdiscAnims_5_2,
	sLuvdiscAnims_5_3,
	sLuvdiscAnims_5_4,
	sLuvdiscAnims_5_5,
	sLuvdiscAnims_5_6,
	sLuvdiscAnims_5_7,
	sLuvdiscAnims_5_8,
};

static const ax_anim *const sLuvdiscAnimTable6[] = {
	sLuvdiscAnims_6_1,
	sLuvdiscAnims_6_1,
	sLuvdiscAnims_6_1,
	sLuvdiscAnims_6_1,
	sLuvdiscAnims_6_1,
	sLuvdiscAnims_6_1,
	sLuvdiscAnims_6_1,
	sLuvdiscAnims_6_1,
};

static const ax_anim *const sLuvdiscAnimTable7[] = {
	gAxSharedAnim_00193,
	gAxSharedAnim_00201,
	gAxSharedAnim_00210,
	gAxSharedAnim_00218,
	gAxSharedAnim_00232,
	gAxSharedAnim_00244,
	gAxSharedAnim_00252,
	gAxSharedAnim_00259,
};

static const ax_anim *const sLuvdiscAnimTable8[] = {
	sLuvdiscAnims_8_1,
	sLuvdiscAnims_8_2,
	sLuvdiscAnims_8_3,
	sLuvdiscAnims_8_4,
	sLuvdiscAnims_8_5,
	sLuvdiscAnims_8_6,
	sLuvdiscAnims_8_7,
	sLuvdiscAnims_8_8,
};

static const ax_anim *const sLuvdiscAnimTable9[] = {
	sLuvdiscAnims_9_1,
	sLuvdiscAnims_9_2,
	sLuvdiscAnims_9_3,
	sLuvdiscAnims_9_4,
	sLuvdiscAnims_9_5,
	sLuvdiscAnims_9_6,
	sLuvdiscAnims_9_7,
	sLuvdiscAnims_9_8,
};

static const ax_anim *const sLuvdiscAnimTable10[] = {
	gAxSharedAnim_00540,
	gAxSharedAnim_00547,
	gAxSharedAnim_00555,
	gAxSharedAnim_00564,
	gAxSharedAnim_00574,
	gAxSharedAnim_00584,
	gAxSharedAnim_00593,
	gAxSharedAnim_00600,
};

static const ax_anim *const sLuvdiscAnimTable11[] = {
	sLuvdiscAnims_11_1,
	sLuvdiscAnims_11_2,
	sLuvdiscAnims_11_3,
	sLuvdiscAnims_11_4,
	sLuvdiscAnims_11_5,
	sLuvdiscAnims_11_6,
	sLuvdiscAnims_11_7,
	sLuvdiscAnims_11_8,
};

static const ax_anim *const sLuvdiscAnimTable12[] = {
	gAxSharedAnim_00907,
	gAxSharedAnim_00996,
	gAxSharedAnim_00971,
	gAxSharedAnim_00960,
	gAxSharedAnim_00959,
	gAxSharedAnim_00945,
	gAxSharedAnim_00925,
	gAxSharedAnim_00908,
};

static const ax_anim *const sLuvdiscAnimTable13[] = {
	gAxSharedAnim_01017,
	gAxSharedAnim_01123,
	gAxSharedAnim_01112,
	gAxSharedAnim_01093,
	gAxSharedAnim_01079,
	gAxSharedAnim_01063,
	gAxSharedAnim_01048,
	gAxSharedAnim_01028,
};

static const ax_anim *const *const sAxAnimationsLuvdisc[] = {
	sLuvdiscAnimTable1,
	sLuvdiscAnimTable2,
	sLuvdiscAnimTable3,
	sLuvdiscAnimTable4,
	sLuvdiscAnimTable5,
	sLuvdiscAnimTable6,
	sLuvdiscAnimTable7,
	sLuvdiscAnimTable8,
	sLuvdiscAnimTable9,
	sLuvdiscAnimTable10,
	sLuvdiscAnimTable11,
	sLuvdiscAnimTable12,
	sLuvdiscAnimTable13,
};

static const ax_sprite *const sAxSpritesLuvdisc[] = {
	sLuvdiscSprites1,
	sLuvdiscSprites2,
	sLuvdiscSprites3,
	sLuvdiscSprites4,
	sLuvdiscSprites5,
	sLuvdiscSprites6,
	sLuvdiscSprites7,
	sLuvdiscSprites8,
	sLuvdiscSprites9,
	sLuvdiscSprites10,
	sLuvdiscSprites11,
	sLuvdiscSprites12,
	sLuvdiscSprites13,
	sLuvdiscSprites14,
	sLuvdiscSprites15,
	sLuvdiscSprites16,
	sLuvdiscSprites17,
	sLuvdiscSprites18,
	sLuvdiscSprites19,
	sLuvdiscSprites20,
	sLuvdiscSprites21,
	sLuvdiscSprites22,
	sLuvdiscSprites23,
	sLuvdiscSprites24,
	sLuvdiscSprites25,
	sLuvdiscSprites26,
	sLuvdiscSprites27,
	sLuvdiscSprites28,
	sLuvdiscSprites29,
	sLuvdiscSprites30,
	sLuvdiscSprites31,
	sLuvdiscSprites32,
	sLuvdiscSprites33,
	sLuvdiscSprites34,
	sLuvdiscSprites35,
	sLuvdiscSprites36,
};

static const axmain sAxMainLuvdisc = {
	.poses = sAxPosesLuvdisc,
	.animations = sAxAnimationsLuvdisc,
	.animCount = ARRAY_COUNT(sAxAnimationsLuvdisc),
	.spriteData = sAxSpritesLuvdisc,
	.positions = sAxPositionsLuvdisc,
};
