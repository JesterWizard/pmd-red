/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainBeldum;
const SiroArchive gAxBeldum = {"SIRO", &sAxMainBeldum};

static const ax_pose sBeldumPose1[] = {
	AX_POSE(0, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose2[] = {
	AX_POSE(1, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose3[] = {
	AX_POSE(2, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose4[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose5[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose6[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose7[] = {
	AX_POSE(6, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose8[] = {
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose9[] = {
	AX_POSE(8, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose10[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose11[] = {
	AX_POSE(10, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose12[] = {
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose16[] = {
	AX_POSE(9, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose17[] = {
	AX_POSE(10, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose18[] = {
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose19[] = {
	AX_POSE(6, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose20[] = {
	AX_POSE(7, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose21[] = {
	AX_POSE(8, OAM1(237, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose22[] = {
	AX_POSE(3, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose23[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose24[] = {
	AX_POSE(5, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose73[] = {
	AX_POSE(0, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose74[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose75[] = {
	AX_POSE(6, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose76[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose77[] = {
	AX_POSE(12, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose78[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose79[] = {
	AX_POSE(6, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose80[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose89[] = {
	AX_POSE(15, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose90[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose91[] = {
	AX_POSE(17, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose92[] = {
	AX_POSE(18, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose93[] = {
	AX_POSE(19, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(20, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE(21, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 11)),
	AX_POSE(22, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose94[] = {
	AX_POSE(23, OAM1(225, ST_OAM_H_RECTANGLE, 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(24, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE(25, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 11)),
	AX_POSE(26, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(14, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose95[] = {
	AX_POSE(27, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose96[] = {
	AX_POSE(23, OAM1(225, ST_OAM_H_RECTANGLE, 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(24, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE(25, OAM1(241, ST_OAM_V_RECTANGLE, 1), OAM2(5, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 11)),
	AX_POSE(26, OAM1(217, ST_OAM_SQUARE     , 1), OAM2(13, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose97[] = {
	AX_POSE(19, OAM1(226, ST_OAM_H_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE(20, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 11)),
	AX_POSE(21, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(6, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 11)),
	AX_POSE(22, OAM1(218, ST_OAM_SQUARE     , 1), OAM2(14, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(14, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_pose sBeldumPose98[] = {
	AX_POSE(18, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 11)),
	AX_POSE_TERMINATOR
};
static const ax_anim sBeldumAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 17, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 17, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 20, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 20, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 23, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 23, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 1, .poseId = 25, .offset = {0, 21}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {1, 21}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 21}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {1, 21}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {10, 11}, .shadow = {10, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {16, 20}, .shadow = {16, 17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {20, 23}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {21, 22}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {20, 23}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {21, 22}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {21, 2}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {21, 3}, .shadow = {21, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {21, 2}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {21, 3}, .shadow = {21, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {4, -5}, .shadow = {4, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {10, -11}, .shadow = {10, -11} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {20, -18}, .shadow = {21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {21, -17}, .shadow = {22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {20, -18}, .shadow = {21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {21, -17}, .shadow = {22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {0, -18}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {1, -18}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -18}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {1, -18}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-4, -5}, .shadow = {-4, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {-10, -11}, .shadow = {-10, -11} },
	{ .frames = 2, .unkFlags = 1, .poseId = 40, .offset = {-20, -18}, .shadow = {-21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-21, -17}, .shadow = {-22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-20, -18}, .shadow = {-21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-21, -17}, .shadow = {-22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {-21, 2}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-21, 3}, .shadow = {-21, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-21, 2}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-21, 3}, .shadow = {-21, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-10, 11}, .shadow = {-10, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-16, 20}, .shadow = {-16, 17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {-20, 23}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-21, 22}, .shadow = {-21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-20, 23}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-21, 22}, .shadow = {-21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 1, .poseId = 49, .offset = {0, 21}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, 21}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 21}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, 21}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {10, 11}, .shadow = {10, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {16, 20}, .shadow = {16, 17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {20, 23}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {21, 22}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {20, 23}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {21, 22}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {21, 2}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {21, 3}, .shadow = {21, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {21, 2}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {21, 3}, .shadow = {21, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {4, -5}, .shadow = {4, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {10, -11}, .shadow = {10, -11} },
	{ .frames = 2, .unkFlags = 1, .poseId = 58, .offset = {20, -18}, .shadow = {21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {21, -17}, .shadow = {22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {20, -18}, .shadow = {21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {21, -17}, .shadow = {22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 1, .poseId = 61, .offset = {0, -18}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {1, -18}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -18}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {1, -18}, .shadow = {1, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-4, -5}, .shadow = {-4, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {-10, -11}, .shadow = {-10, -11} },
	{ .frames = 2, .unkFlags = 1, .poseId = 64, .offset = {-20, -18}, .shadow = {-21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-21, -17}, .shadow = {-22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-20, -18}, .shadow = {-21, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-21, -17}, .shadow = {-22, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {-21, 2}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-21, 3}, .shadow = {-21, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-21, 2}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-21, 3}, .shadow = {-21, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-10, 11}, .shadow = {-10, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-16, 20}, .shadow = {-16, 17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 70, .offset = {-20, 23}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-21, 22}, .shadow = {-21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-20, 23}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-21, 22}, .shadow = {-21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_6_1[] = {
	{ .frames = 16, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 88, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 88, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 89, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 89, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_8_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 98, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 99, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 98, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 100, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_8_2[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 101, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 102, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 101, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 103, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_8_3[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 104, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 104, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 106, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_8_4[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 107, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 108, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 107, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 108, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_8_5[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 111, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 112, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 110, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 111, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 110, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 112, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_8_6[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 113, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 114, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 113, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 115, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 113, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 114, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 113, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_8_7[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 116, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 117, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 116, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 118, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 116, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 117, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 116, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 118, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_8_8[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 119, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 120, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 119, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 121, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 120, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 119, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 121, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 123, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {7, 15}, .shadow = {7, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 127, .offset = {-7, 15}, .shadow = {-7, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 122, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {19, 4}, .shadow = {19, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {21, 10}, .shadow = {21, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 125, .offset = {20, 17}, .shadow = {20, 17} },
	{ .frames = 2, .unkFlags = 3, .poseId = 126, .offset = {11, 19}, .shadow = {11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {11, -7}, .shadow = {11, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {16, -5}, .shadow = {16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 124, .offset = {18, -2}, .shadow = {18, -1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 125, .offset = {16, 4}, .shadow = {16, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {10, 6}, .shadow = {10, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {3, 5}, .shadow = {3, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {3, -15}, .shadow = {3, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {11, -20}, .shadow = {11, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 123, .offset = {19, -21}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 124, .offset = {22, -14}, .shadow = {22, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {18, -6}, .shadow = {18, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {9, -1}, .shadow = {9, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 122, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 123, .offset = {7, -18}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {9, -12}, .shadow = {9, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 124, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {-3, -15}, .shadow = {-3, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {-11, -20}, .shadow = {-11, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {-19, -21}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 128, .offset = {-22, -14}, .shadow = {-22, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {-18, -6}, .shadow = {-18, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {-9, -1}, .shadow = {-9, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 123, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {-11, -7}, .shadow = {-11, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-16, -5}, .shadow = {-16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 128, .offset = {-18, -2}, .shadow = {-18, -1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 127, .offset = {-16, 4}, .shadow = {-16, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {-10, 6}, .shadow = {-10, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 125, .offset = {-3, 5}, .shadow = {-3, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 122, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-19, 4}, .shadow = {-19, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {-21, 10}, .shadow = {-21, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 127, .offset = {-20, 17}, .shadow = {-20, 17} },
	{ .frames = 2, .unkFlags = 3, .poseId = 126, .offset = {-11, 19}, .shadow = {-11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 124, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 138, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 138, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 141, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 141, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 145, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 144, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 146, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 144, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 148, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 148, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 147, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 149, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 147, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 151, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 151, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 151, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 150, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 150, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 153, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 153, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 156, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 156, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sBeldumAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 159, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 159, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sBeldumGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_1.4bpp.lz");
static const ax_sprite sBeldumSprites1[] = {
	{sBeldumGfx1, ARRAY_COUNT(sBeldumGfx1)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_2.4bpp.lz");
static const ax_sprite sBeldumSprites2[] = {
	{sBeldumGfx2, ARRAY_COUNT(sBeldumGfx2)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_3.4bpp.lz");
static const ax_sprite sBeldumSprites3[] = {
	{sBeldumGfx3, ARRAY_COUNT(sBeldumGfx3)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_4.4bpp.lz");
static const ax_sprite sBeldumSprites4[] = {
	{sBeldumGfx4, ARRAY_COUNT(sBeldumGfx4)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_5.4bpp.lz");
static const ax_sprite sBeldumSprites5[] = {
	{sBeldumGfx5, ARRAY_COUNT(sBeldumGfx5)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_6.4bpp.lz");
static const ax_sprite sBeldumSprites6[] = {
	{sBeldumGfx6, ARRAY_COUNT(sBeldumGfx6)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_7.4bpp.lz");
static const ax_sprite sBeldumSprites7[] = {
	{sBeldumGfx7, ARRAY_COUNT(sBeldumGfx7)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_8.4bpp.lz");
static const ax_sprite sBeldumSprites8[] = {
	{sBeldumGfx8, ARRAY_COUNT(sBeldumGfx8)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_9.4bpp.lz");
static const ax_sprite sBeldumSprites9[] = {
	{sBeldumGfx9, ARRAY_COUNT(sBeldumGfx9)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_10.4bpp.lz");
static const ax_sprite sBeldumSprites10[] = {
	{sBeldumGfx10, ARRAY_COUNT(sBeldumGfx10)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_11.4bpp.lz");
static const ax_sprite sBeldumSprites11[] = {
	{sBeldumGfx11, ARRAY_COUNT(sBeldumGfx11)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_12.4bpp.lz");
static const ax_sprite sBeldumSprites12[] = {
	{sBeldumGfx12, ARRAY_COUNT(sBeldumGfx12)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_13.4bpp.lz");
static const ax_sprite sBeldumSprites13[] = {
	{sBeldumGfx13, ARRAY_COUNT(sBeldumGfx13)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_14.4bpp.lz");
static const ax_sprite sBeldumSprites14[] = {
	{sBeldumGfx14, ARRAY_COUNT(sBeldumGfx14)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_15.4bpp.lz");
static const ax_sprite sBeldumSprites15[] = {
	{sBeldumGfx15, ARRAY_COUNT(sBeldumGfx15)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_16.4bpp.lz");
static const ax_sprite sBeldumSprites16[] = {
	{sBeldumGfx16, ARRAY_COUNT(sBeldumGfx16)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_17.4bpp.lz");
static const ax_sprite sBeldumSprites17[] = {
	{sBeldumGfx17, ARRAY_COUNT(sBeldumGfx17)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_18.4bpp.lz");
static const ax_sprite sBeldumSprites18[] = {
	{sBeldumGfx18, ARRAY_COUNT(sBeldumGfx18)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_19.4bpp.lz");
static const ax_sprite sBeldumSprites19[] = {
	{sBeldumGfx19, ARRAY_COUNT(sBeldumGfx19)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_20.4bpp.lz");
static const ax_sprite sBeldumSprites20[] = {
	{sBeldumGfx20, ARRAY_COUNT(sBeldumGfx20)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_21.4bpp.lz");
static const ax_sprite sBeldumSprites21[] = {
	{sBeldumGfx21, ARRAY_COUNT(sBeldumGfx21)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_22.4bpp.lz");
static const ax_sprite sBeldumSprites22[] = {
	{sBeldumGfx22, ARRAY_COUNT(sBeldumGfx22)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_23.4bpp.lz");
static const ax_sprite sBeldumSprites23[] = {
	{sBeldumGfx23, ARRAY_COUNT(sBeldumGfx23)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_24.4bpp.lz");
static const ax_sprite sBeldumSprites24[] = {
	{sBeldumGfx24, ARRAY_COUNT(sBeldumGfx24)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_25.4bpp.lz");
static const ax_sprite sBeldumSprites25[] = {
	{sBeldumGfx25, ARRAY_COUNT(sBeldumGfx25)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_26.4bpp.lz");
static const ax_sprite sBeldumSprites26[] = {
	{sBeldumGfx26, ARRAY_COUNT(sBeldumGfx26)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_27.4bpp.lz");
static const ax_sprite sBeldumSprites27[] = {
	{sBeldumGfx27, ARRAY_COUNT(sBeldumGfx27)}, 
	{NULL, 0}
};
static const u8 sBeldumGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/beldum/sprite_28.4bpp.lz");
static const ax_sprite sBeldumSprites28[] = {
	{sBeldumGfx28, ARRAY_COUNT(sBeldumGfx28)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesBeldum[] = {
	sBeldumPose1,
	sBeldumPose2,
	sBeldumPose3,
	sBeldumPose4,
	sBeldumPose5,
	sBeldumPose6,
	sBeldumPose7,
	sBeldumPose8,
	sBeldumPose9,
	sBeldumPose10,
	sBeldumPose11,
	sBeldumPose12,
	sBeldumPose13,
	sBeldumPose14,
	sBeldumPose15,
	sBeldumPose16,
	sBeldumPose17,
	sBeldumPose18,
	sBeldumPose19,
	sBeldumPose20,
	sBeldumPose21,
	sBeldumPose22,
	sBeldumPose23,
	sBeldumPose24,
	sBeldumPose1,
	sBeldumPose2,
	sBeldumPose3,
	sBeldumPose4,
	sBeldumPose5,
	sBeldumPose6,
	sBeldumPose7,
	sBeldumPose8,
	sBeldumPose9,
	sBeldumPose10,
	sBeldumPose11,
	sBeldumPose12,
	sBeldumPose13,
	sBeldumPose14,
	sBeldumPose15,
	sBeldumPose16,
	sBeldumPose17,
	sBeldumPose18,
	sBeldumPose19,
	sBeldumPose20,
	sBeldumPose21,
	sBeldumPose22,
	sBeldumPose23,
	sBeldumPose24,
	sBeldumPose1,
	sBeldumPose2,
	sBeldumPose3,
	sBeldumPose4,
	sBeldumPose5,
	sBeldumPose6,
	sBeldumPose7,
	sBeldumPose8,
	sBeldumPose9,
	sBeldumPose10,
	sBeldumPose11,
	sBeldumPose12,
	sBeldumPose13,
	sBeldumPose14,
	sBeldumPose15,
	sBeldumPose16,
	sBeldumPose17,
	sBeldumPose18,
	sBeldumPose19,
	sBeldumPose20,
	sBeldumPose21,
	sBeldumPose22,
	sBeldumPose23,
	sBeldumPose24,
	sBeldumPose73,
	sBeldumPose74,
	sBeldumPose75,
	sBeldumPose76,
	sBeldumPose77,
	sBeldumPose78,
	sBeldumPose79,
	sBeldumPose80,
	sBeldumPose73,
	sBeldumPose74,
	sBeldumPose75,
	sBeldumPose76,
	sBeldumPose77,
	sBeldumPose78,
	sBeldumPose79,
	sBeldumPose80,
	sBeldumPose89,
	sBeldumPose90,
	sBeldumPose91,
	sBeldumPose92,
	sBeldumPose93,
	sBeldumPose94,
	sBeldumPose95,
	sBeldumPose96,
	sBeldumPose97,
	sBeldumPose98,
	sBeldumPose1,
	sBeldumPose2,
	sBeldumPose3,
	sBeldumPose4,
	sBeldumPose5,
	sBeldumPose6,
	sBeldumPose7,
	sBeldumPose8,
	sBeldumPose9,
	sBeldumPose10,
	sBeldumPose11,
	sBeldumPose12,
	sBeldumPose13,
	sBeldumPose14,
	sBeldumPose15,
	sBeldumPose16,
	sBeldumPose17,
	sBeldumPose18,
	sBeldumPose19,
	sBeldumPose20,
	sBeldumPose21,
	sBeldumPose22,
	sBeldumPose23,
	sBeldumPose24,
	sBeldumPose73,
	sBeldumPose74,
	sBeldumPose75,
	sBeldumPose76,
	sBeldumPose77,
	sBeldumPose78,
	sBeldumPose79,
	sBeldumPose80,
	sBeldumPose1,
	sBeldumPose4,
	sBeldumPose7,
	sBeldumPose10,
	sBeldumPose13,
	sBeldumPose16,
	sBeldumPose19,
	sBeldumPose22,
	sBeldumPose1,
	sBeldumPose2,
	sBeldumPose3,
	sBeldumPose4,
	sBeldumPose5,
	sBeldumPose6,
	sBeldumPose7,
	sBeldumPose8,
	sBeldumPose9,
	sBeldumPose10,
	sBeldumPose11,
	sBeldumPose12,
	sBeldumPose13,
	sBeldumPose14,
	sBeldumPose15,
	sBeldumPose16,
	sBeldumPose17,
	sBeldumPose18,
	sBeldumPose19,
	sBeldumPose20,
	sBeldumPose21,
	sBeldumPose22,
	sBeldumPose23,
	sBeldumPose24,
	sBeldumPose73,
	sBeldumPose74,
	sBeldumPose75,
	sBeldumPose76,
	sBeldumPose77,
	sBeldumPose78,
	sBeldumPose79,
	sBeldumPose80,
	sBeldumPose73,
	sBeldumPose74,
	sBeldumPose75,
	sBeldumPose76,
	sBeldumPose77,
	sBeldumPose78,
	sBeldumPose79,
	sBeldumPose80,
};

static const struct PositionSets sAxPositionsBeldum[] = {
	[0] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[1] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[2] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[3] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -13} } },
	[4] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -13} } },
	[5] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -14} } },
	[6] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[7] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[8] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[9] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[10] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[11] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[12] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[13] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[14] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[15] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[16] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[17] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[18] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[19] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[20] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[21] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -13} } },
	[22] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -13} } },
	[23] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -14} } },
	[24] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[25] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[26] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[27] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -13} } },
	[28] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -13} } },
	[29] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -14} } },
	[30] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[31] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[32] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[33] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[34] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[35] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[36] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[37] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[38] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[39] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[40] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[41] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[42] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[43] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[44] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[45] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -13} } },
	[46] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -13} } },
	[47] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -14} } },
	[48] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[49] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[50] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[51] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -13} } },
	[52] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -13} } },
	[53] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -14} } },
	[54] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[55] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[56] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[57] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[58] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[59] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[60] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[61] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[62] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[63] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[64] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[65] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[66] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[67] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[68] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[69] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -13} } },
	[70] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -13} } },
	[71] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -14} } },
	[72] = { .set = { {-1, 1}, {-6, -6}, {4, -6}, {-1, -9} } },
	[73] = { .set = { {-7, 0}, {-5, -6}, {0, -5}, {0, -9} } },
	[74] = { .set = { {-10, -5}, {-4, -11}, {-3, -5}, {0, -7} } },
	[75] = { .set = { {-6, -8}, {2, -10}, {-5, -6}, {-1, -8} } },
	[76] = { .set = { {-1, -14}, {3, -9}, {-5, -9}, {-1, -9} } },
	[77] = { .set = { {5, -8}, {-3, -10}, {4, -6}, {0, -8} } },
	[78] = { .set = { {9, -5}, {3, -11}, {2, -5}, {-1, -7} } },
	[79] = { .set = { {6, 0}, {4, -6}, {-1, -5}, {-1, -9} } },
	[80] = { .set = { {-1, 1}, {-6, -6}, {4, -6}, {-1, -9} } },
	[81] = { .set = { {-7, 0}, {-5, -6}, {0, -5}, {0, -9} } },
	[82] = { .set = { {-10, -5}, {-4, -11}, {-3, -5}, {0, -7} } },
	[83] = { .set = { {-6, -8}, {2, -10}, {-5, -6}, {-1, -8} } },
	[84] = { .set = { {-1, -14}, {3, -9}, {-5, -9}, {-1, -9} } },
	[85] = { .set = { {5, -8}, {-3, -10}, {4, -6}, {0, -8} } },
	[86] = { .set = { {9, -5}, {3, -11}, {2, -5}, {-1, -7} } },
	[87] = { .set = { {6, 0}, {4, -6}, {-1, -5}, {-1, -9} } },
	[88] = { .set = { {-7, 0}, {-5, -7}, {0, -5}, {0, -9} } },
	[89] = { .set = { {-7, -1}, {-5, -8}, {0, -6}, {0, -10} } },
	[90] = { .set = { {-1, -26}, {-6, -18}, {4, -18}, {-1, -16} } },
	[91] = { .set = { {-7, -23}, {-2, -18}, {-8, -15}, {-3, -14} } },
	[92] = { .set = { {-4, -25}, {-6, -19}, {-5, -17}, {-4, -13} } },
	[93] = { .set = { {-3, -24}, {-7, -15}, {-1, -17}, {-3, -13} } },
	[94] = { .set = { {0, -26}, {5, -16}, {-5, -16}, {0, -16} } },
	[95] = { .set = { {2, -24}, {6, -15}, {0, -17}, {2, -13} } },
	[96] = { .set = { {3, -25}, {5, -19}, {4, -17}, {3, -13} } },
	[97] = { .set = { {6, -23}, {1, -18}, {7, -15}, {2, -14} } },
	[98] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[99] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[100] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[101] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -13} } },
	[102] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -13} } },
	[103] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -14} } },
	[104] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[105] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[106] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[107] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[108] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[109] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[110] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[111] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[112] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[113] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[114] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[115] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[116] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[117] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[118] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[119] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -13} } },
	[120] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -13} } },
	[121] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -14} } },
	[122] = { .set = { {-1, 1}, {-6, -6}, {4, -6}, {-1, -9} } },
	[123] = { .set = { {-7, 0}, {-5, -6}, {0, -5}, {0, -9} } },
	[124] = { .set = { {-10, -5}, {-4, -11}, {-3, -5}, {0, -7} } },
	[125] = { .set = { {-6, -8}, {2, -10}, {-5, -6}, {-1, -8} } },
	[126] = { .set = { {-1, -14}, {3, -9}, {-5, -9}, {-1, -9} } },
	[127] = { .set = { {5, -8}, {-3, -10}, {4, -6}, {0, -8} } },
	[128] = { .set = { {9, -5}, {3, -11}, {2, -5}, {-1, -7} } },
	[129] = { .set = { {6, 0}, {4, -6}, {-1, -5}, {-1, -9} } },
	[130] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[131] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -13} } },
	[132] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[133] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[134] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[135] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[136] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[137] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -13} } },
	[138] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[139] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[140] = { .set = { {-1, -3}, {-6, -10}, {4, -10}, {-1, -13} } },
	[141] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -13} } },
	[142] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -13} } },
	[143] = { .set = { {6, -4}, {4, -10}, {-1, -9}, {-1, -14} } },
	[144] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[145] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[146] = { .set = { {9, -9}, {3, -15}, {2, -9}, {-1, -11} } },
	[147] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[148] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[149] = { .set = { {5, -12}, {-3, -14}, {4, -10}, {0, -12} } },
	[150] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[151] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[152] = { .set = { {-1, -18}, {3, -13}, {-5, -13}, {-1, -13} } },
	[153] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[154] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[155] = { .set = { {-6, -12}, {2, -14}, {-5, -10}, {-1, -12} } },
	[156] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[157] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[158] = { .set = { {-10, -9}, {-4, -15}, {-3, -9}, {0, -11} } },
	[159] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -13} } },
	[160] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -13} } },
	[161] = { .set = { {-7, -4}, {-5, -10}, {0, -9}, {0, -14} } },
	[162] = { .set = { {-1, 1}, {-6, -6}, {4, -6}, {-1, -9} } },
	[163] = { .set = { {-7, 0}, {-5, -6}, {0, -5}, {0, -9} } },
	[164] = { .set = { {-10, -5}, {-4, -11}, {-3, -5}, {0, -7} } },
	[165] = { .set = { {-6, -8}, {2, -10}, {-5, -6}, {-1, -8} } },
	[166] = { .set = { {-1, -14}, {3, -9}, {-5, -9}, {-1, -9} } },
	[167] = { .set = { {5, -8}, {-3, -10}, {4, -6}, {0, -8} } },
	[168] = { .set = { {9, -5}, {3, -11}, {2, -5}, {-1, -7} } },
	[169] = { .set = { {6, 0}, {4, -6}, {-1, -5}, {-1, -9} } },
	[170] = { .set = { {-1, 1}, {-6, -6}, {4, -6}, {-1, -9} } },
	[171] = { .set = { {-7, 0}, {-5, -6}, {0, -5}, {0, -9} } },
	[172] = { .set = { {-10, -5}, {-4, -11}, {-3, -5}, {0, -7} } },
	[173] = { .set = { {-6, -8}, {2, -10}, {-5, -6}, {-1, -8} } },
	[174] = { .set = { {-1, -14}, {3, -9}, {-5, -9}, {-1, -9} } },
	[175] = { .set = { {5, -8}, {-3, -10}, {4, -6}, {0, -8} } },
	[176] = { .set = { {9, -5}, {3, -11}, {2, -5}, {-1, -7} } },
	[177] = { .set = { {6, 0}, {4, -6}, {-1, -5}, {-1, -9} } },
};

static const ax_anim *const sBeldumAnimTable1[] = {
	sBeldumAnims_1_1,
	sBeldumAnims_1_2,
	sBeldumAnims_1_3,
	sBeldumAnims_1_4,
	sBeldumAnims_1_5,
	sBeldumAnims_1_6,
	sBeldumAnims_1_7,
	sBeldumAnims_1_8,
};

static const ax_anim *const sBeldumAnimTable2[] = {
	sBeldumAnims_2_1,
	sBeldumAnims_2_2,
	sBeldumAnims_2_3,
	sBeldumAnims_2_4,
	sBeldumAnims_2_5,
	sBeldumAnims_2_6,
	sBeldumAnims_2_7,
	sBeldumAnims_2_8,
};

static const ax_anim *const sBeldumAnimTable3[] = {
	sBeldumAnims_3_1,
	sBeldumAnims_3_2,
	sBeldumAnims_3_3,
	sBeldumAnims_3_4,
	sBeldumAnims_3_5,
	sBeldumAnims_3_6,
	sBeldumAnims_3_7,
	sBeldumAnims_3_8,
};

static const ax_anim *const sBeldumAnimTable4[] = {
	gAxSharedAnim_02094,
	gAxSharedAnim_02142,
	gAxSharedAnim_02128,
	gAxSharedAnim_02124,
	gAxSharedAnim_02122,
	gAxSharedAnim_02113,
	gAxSharedAnim_02101,
	gAxSharedAnim_02095,
};

static const ax_anim *const sBeldumAnimTable5[] = {
	gAxSharedAnim_02147,
	gAxSharedAnim_02206,
	gAxSharedAnim_02200,
	gAxSharedAnim_02192,
	gAxSharedAnim_02181,
	gAxSharedAnim_02171,
	gAxSharedAnim_02165,
	gAxSharedAnim_02156,
};

static const ax_anim *const sBeldumAnimTable6[] = {
	sBeldumAnims_6_1,
	sBeldumAnims_6_1,
	sBeldumAnims_6_1,
	sBeldumAnims_6_1,
	sBeldumAnims_6_1,
	sBeldumAnims_6_1,
	sBeldumAnims_6_1,
	sBeldumAnims_6_1,
};

static const ax_anim *const sBeldumAnimTable7[] = {
	gAxSharedAnim_02235,
	gAxSharedAnim_02243,
	gAxSharedAnim_02255,
	gAxSharedAnim_02264,
	gAxSharedAnim_02278,
	gAxSharedAnim_02289,
	gAxSharedAnim_02295,
	gAxSharedAnim_02302,
};

static const ax_anim *const sBeldumAnimTable8[] = {
	sBeldumAnims_8_1,
	sBeldumAnims_8_2,
	sBeldumAnims_8_3,
	sBeldumAnims_8_4,
	sBeldumAnims_8_5,
	sBeldumAnims_8_6,
	sBeldumAnims_8_7,
	sBeldumAnims_8_8,
};

static const ax_anim *const sBeldumAnimTable9[] = {
	sBeldumAnims_9_1,
	sBeldumAnims_9_2,
	sBeldumAnims_9_3,
	sBeldumAnims_9_4,
	sBeldumAnims_9_5,
	sBeldumAnims_9_6,
	sBeldumAnims_9_7,
	sBeldumAnims_9_8,
};

static const ax_anim *const sBeldumAnimTable10[] = {
	gAxSharedAnim_00400,
	gAxSharedAnim_00408,
	gAxSharedAnim_00417,
	gAxSharedAnim_00426,
	gAxSharedAnim_00432,
	gAxSharedAnim_00439,
	gAxSharedAnim_00447,
	gAxSharedAnim_00458,
};

static const ax_anim *const sBeldumAnimTable11[] = {
	sBeldumAnims_11_1,
	sBeldumAnims_11_2,
	sBeldumAnims_11_3,
	sBeldumAnims_11_4,
	sBeldumAnims_11_5,
	sBeldumAnims_11_6,
	sBeldumAnims_11_7,
	sBeldumAnims_11_8,
};

static const ax_anim *const sBeldumAnimTable12[] = {
	gAxSharedAnim_00707,
	gAxSharedAnim_00783,
	gAxSharedAnim_00765,
	gAxSharedAnim_00755,
	gAxSharedAnim_00754,
	gAxSharedAnim_00740,
	gAxSharedAnim_00719,
	gAxSharedAnim_00708,
};

static const ax_anim *const sBeldumAnimTable13[] = {
	gAxSharedAnim_00803,
	gAxSharedAnim_00888,
	gAxSharedAnim_00881,
	gAxSharedAnim_00864,
	gAxSharedAnim_00851,
	gAxSharedAnim_00841,
	gAxSharedAnim_00830,
	gAxSharedAnim_00816,
};

static const ax_anim *const *const sAxAnimationsBeldum[] = {
	sBeldumAnimTable1,
	sBeldumAnimTable2,
	sBeldumAnimTable3,
	sBeldumAnimTable4,
	sBeldumAnimTable5,
	sBeldumAnimTable6,
	sBeldumAnimTable7,
	sBeldumAnimTable8,
	sBeldumAnimTable9,
	sBeldumAnimTable10,
	sBeldumAnimTable11,
	sBeldumAnimTable12,
	sBeldumAnimTable13,
};

static const ax_sprite *const sAxSpritesBeldum[] = {
	sBeldumSprites1,
	sBeldumSprites2,
	sBeldumSprites3,
	sBeldumSprites4,
	sBeldumSprites5,
	sBeldumSprites6,
	sBeldumSprites7,
	sBeldumSprites8,
	sBeldumSprites9,
	sBeldumSprites10,
	sBeldumSprites11,
	sBeldumSprites12,
	sBeldumSprites13,
	sBeldumSprites14,
	sBeldumSprites15,
	sBeldumSprites16,
	sBeldumSprites17,
	sBeldumSprites18,
	sBeldumSprites19,
	sBeldumSprites20,
	sBeldumSprites21,
	sBeldumSprites22,
	sBeldumSprites23,
	sBeldumSprites24,
	sBeldumSprites25,
	sBeldumSprites26,
	sBeldumSprites27,
	sBeldumSprites28,
};

static const axmain sAxMainBeldum = {
	.poses = sAxPosesBeldum,
	.animations = sAxAnimationsBeldum,
	.animCount = ARRAY_COUNT(sAxAnimationsBeldum),
	.spriteData = sAxSpritesBeldum,
	.positions = sAxPositionsBeldum,
};
