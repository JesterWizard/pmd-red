/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainCastform;
const SiroArchive gAxCastform = {"SIRO", &sAxMainCastform};

static const ax_pose sCastformPose1[] = {
	AX_POSE(0, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose2[] = {
	AX_POSE(1, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose3[] = {
	AX_POSE(2, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose4[] = {
	AX_POSE(3, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose5[] = {
	AX_POSE(4, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose6[] = {
	AX_POSE(5, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose7[] = {
	AX_POSE(6, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose8[] = {
	AX_POSE(7, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose9[] = {
	AX_POSE(8, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose10[] = {
	AX_POSE(9, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose11[] = {
	AX_POSE(10, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose12[] = {
	AX_POSE(11, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose13[] = {
	AX_POSE(12, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose14[] = {
	AX_POSE(13, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose15[] = {
	AX_POSE(14, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose16[] = {
	AX_POSE(9, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose17[] = {
	AX_POSE(10, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose18[] = {
	AX_POSE(11, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose19[] = {
	AX_POSE(6, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose20[] = {
	AX_POSE(7, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose21[] = {
	AX_POSE(8, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose22[] = {
	AX_POSE(3, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose23[] = {
	AX_POSE(4, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose24[] = {
	AX_POSE(5, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose34[] = {
	AX_POSE(15, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose35[] = {
	AX_POSE(16, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose37[] = {
	AX_POSE(17, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose38[] = {
	AX_POSE(18, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose40[] = {
	AX_POSE(19, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose41[] = {
	AX_POSE(20, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose43[] = {
	AX_POSE(21, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose44[] = {
	AX_POSE(22, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose46[] = {
	AX_POSE(23, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose47[] = {
	AX_POSE(24, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose49[] = {
	AX_POSE(21, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose50[] = {
	AX_POSE(22, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose52[] = {
	AX_POSE(19, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose53[] = {
	AX_POSE(20, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose55[] = {
	AX_POSE(17, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose56[] = {
	AX_POSE(18, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose193[] = {
	AX_POSE(25, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose194[] = {
	AX_POSE(26, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose195[] = {
	AX_POSE(27, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose196[] = {
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose197[] = {
	AX_POSE(29, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose198[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose199[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose200[] = {
	AX_POSE(30, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose201[] = {
	AX_POSE(29, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose202[] = {
	AX_POSE(28, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose239[] = {
	AX_POSE(24, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose243[] = {
	AX_POSE(15, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose244[] = {
	AX_POSE(17, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose245[] = {
	AX_POSE(19, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(250, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose246[] = {
	AX_POSE(21, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose247[] = {
	AX_POSE(23, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose248[] = {
	AX_POSE(21, OAM1(231, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose249[] = {
	AX_POSE(19, OAM1(232, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose250[] = {
	AX_POSE(17, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose284[] = {
	AX_POSE(18, OAM1(240, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose285[] = {
	AX_POSE(20, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCastformPose286[] = {
	AX_POSE(22, OAM1(233, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sCastformAnims_1_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_1_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_1_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_1_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_1_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_1_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_1_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_1_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 32, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 13}, .shadow = {0, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 13}, .shadow = {0, 13} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 35, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {13, 12}, .shadow = {13, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {22, 22}, .shadow = {22, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {23, 21}, .shadow = {23, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {22, 22}, .shadow = {22, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {23, 21}, .shadow = {23, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 38, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {14, 0}, .shadow = {13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {23, 1}, .shadow = {23, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 40, .offset = {23, 2}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {23, 1}, .shadow = {23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {23, 2}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 41, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {10, -11}, .shadow = {10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {20, -20}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {21, -19}, .shadow = {20, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {20, -20}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {21, -19}, .shadow = {20, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 44, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, -18}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {1, -18}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, -18}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {1, -18}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 47, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-10, -11}, .shadow = {-10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-20, -20}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 49, .offset = {-21, -19}, .shadow = {-20, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-20, -20}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-21, -19}, .shadow = {-20, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 50, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {-14, 0}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-23, 1}, .shadow = {-23, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {-23, 2}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-23, 1}, .shadow = {-23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-23, 2}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 53, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {-13, 12}, .shadow = {-13, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-22, 22}, .shadow = {-22, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {-23, 21}, .shadow = {-23, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-22, 22}, .shadow = {-22, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-23, 21}, .shadow = {-23, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 65, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 64, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {0, 13}, .shadow = {0, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 66, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 13}, .shadow = {0, 13} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 68, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 67, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {13, 12}, .shadow = {13, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {22, 22}, .shadow = {22, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 69, .offset = {23, 21}, .shadow = {23, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {22, 22}, .shadow = {22, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {23, 21}, .shadow = {23, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 71, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 70, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {14, 0}, .shadow = {13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {23, 1}, .shadow = {23, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 72, .offset = {23, 2}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {23, 1}, .shadow = {23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {23, 2}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 74, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 73, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {10, -11}, .shadow = {10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {20, -20}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {21, -19}, .shadow = {20, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {20, -20}, .shadow = {19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {21, -19}, .shadow = {20, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 77, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 76, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {0, -11}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -18}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 78, .offset = {1, -18}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -18}, .shadow = {0, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {1, -18}, .shadow = {1, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 80, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 79, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 79, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 79, .offset = {-10, -11}, .shadow = {-10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-20, -20}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 81, .offset = {-21, -19}, .shadow = {-20, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-20, -20}, .shadow = {-19, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-21, -19}, .shadow = {-20, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 83, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 82, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {-14, 0}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-23, 1}, .shadow = {-23, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 84, .offset = {-23, 2}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-23, 1}, .shadow = {-23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-23, 2}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 86, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 85, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {-13, 12}, .shadow = {-13, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-22, 22}, .shadow = {-22, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {-23, 21}, .shadow = {-23, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-22, 22}, .shadow = {-22, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-23, 21}, .shadow = {-23, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_5_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 164, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 162, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_5_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 172, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 170, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_5_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 180, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 178, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_5_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 188, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 185, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 186, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_6_1[] = {
	{ .frames = 35, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 30, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_8_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 202, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 203, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 204, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 203, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 202, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 203, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_8_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 205, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 206, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 207, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 206, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 205, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 206, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_8_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 208, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 209, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 210, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 209, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 208, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 209, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_8_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 211, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 212, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 213, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 212, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 211, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 212, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_8_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 214, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 215, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 216, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 215, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 214, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 215, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_8_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 217, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 218, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 219, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 218, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 217, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_8_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 221, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 222, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 221, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 220, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 221, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_8_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 223, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 224, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 225, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 224, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 223, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 235, .offset = {6, 4}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 236, .offset = {9, 13}, .shadow = {9, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 237, .offset = {7, 21}, .shadow = {7, 20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 238, .offset = {0, 23}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 239, .offset = {-7, 21}, .shadow = {-7, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 240, .offset = {-9, 13}, .shadow = {-9, 13} },
	{ .frames = 1, .unkFlags = 0, .poseId = 241, .offset = {-6, 4}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 234, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 234, .offset = {10, 2}, .shadow = {10, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {22, 9}, .shadow = {22, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 236, .offset = {26, 16}, .shadow = {26, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 237, .offset = {24, 22}, .shadow = {24, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 238, .offset = {13, 21}, .shadow = {13, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 239, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 241, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 240, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 241, .offset = {4, -3}, .shadow = {4, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {11, -5}, .shadow = {11, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {20, -3}, .shadow = {20, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 236, .offset = {25, 2}, .shadow = {25, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 237, .offset = {21, 5}, .shadow = {21, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 238, .offset = {13, 6}, .shadow = {13, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 239, .offset = {5, 4}, .shadow = {5, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 239, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {4, -15}, .shadow = {4, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {13, -21}, .shadow = {13, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 235, .offset = {24, -22}, .shadow = {24, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 236, .offset = {24, -13}, .shadow = {24, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 237, .offset = {21, -6}, .shadow = {21, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 238, .offset = {13, -2}, .shadow = {13, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 239, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 238, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 239, .offset = {-5, -2}, .shadow = {-5, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 240, .offset = {-10, -11}, .shadow = {-10, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {-7, -20}, .shadow = {-7, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 234, .offset = {0, -23}, .shadow = {0, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 235, .offset = {7, -20}, .shadow = {7, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 236, .offset = {10, -9}, .shadow = {10, -9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 237, .offset = {5, -2}, .shadow = {5, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 238, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 237, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 236, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {-4, -15}, .shadow = {-4, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {-13, -21}, .shadow = {-13, -21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 241, .offset = {-24, -22}, .shadow = {-24, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 240, .offset = {-24, -13}, .shadow = {-24, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 239, .offset = {-21, -6}, .shadow = {-21, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 238, .offset = {-13, -2}, .shadow = {-13, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 237, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 236, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 235, .offset = {-4, -3}, .shadow = {-4, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {-11, -5}, .shadow = {-11, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {-20, -3}, .shadow = {-20, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 240, .offset = {-25, 2}, .shadow = {-25, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 239, .offset = {-21, 5}, .shadow = {-21, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 238, .offset = {-13, 6}, .shadow = {-13, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 237, .offset = {-5, 4}, .shadow = {-5, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 236, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 234, .offset = {-10, 2}, .shadow = {-10, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {-22, 9}, .shadow = {-22, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 240, .offset = {-26, 16}, .shadow = {-26, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 239, .offset = {-24, 22}, .shadow = {-24, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 238, .offset = {-13, 21}, .shadow = {-13, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 237, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 236, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 235, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 250, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 251, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 251, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 251, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 251, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 250, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 252, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 252, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 252, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 250, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 253, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 254, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 254, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 254, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 254, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 253, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 255, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 255, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 255, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 253, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 256, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 257, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 257, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 257, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 257, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 256, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 258, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 258, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 258, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 256, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 259, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 260, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 260, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 260, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 260, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 259, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 261, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 261, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 261, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 259, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 262, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 263, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 263, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 263, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 263, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 262, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 264, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 264, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 264, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 262, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 265, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 266, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 266, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 266, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 266, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 265, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 267, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 267, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 267, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 265, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 268, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 269, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 269, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 269, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 269, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 268, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 270, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 270, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 270, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 268, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCastformAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 271, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 272, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 272, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 272, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 272, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 271, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 273, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 273, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 273, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 271, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sCastformGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_1.4bpp.lz");
static const ax_sprite sCastformSprites1[] = {
	{sCastformGfx1, ARRAY_COUNT(sCastformGfx1)}, 
	{NULL, 0}
};
static const u8 sCastformGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_2.4bpp.lz");
static const ax_sprite sCastformSprites2[] = {
	{sCastformGfx2, ARRAY_COUNT(sCastformGfx2)}, 
	{NULL, 0}
};
static const u8 sCastformGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_3.4bpp.lz");
static const ax_sprite sCastformSprites3[] = {
	{sCastformGfx3, ARRAY_COUNT(sCastformGfx3)}, 
	{NULL, 0}
};
static const u8 sCastformGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_4.4bpp.lz");
static const ax_sprite sCastformSprites4[] = {
	{sCastformGfx4, ARRAY_COUNT(sCastformGfx4)}, 
	{NULL, 0}
};
static const u8 sCastformGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_5.4bpp.lz");
static const ax_sprite sCastformSprites5[] = {
	{sCastformGfx5, ARRAY_COUNT(sCastformGfx5)}, 
	{NULL, 0}
};
static const u8 sCastformGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_6.4bpp.lz");
static const ax_sprite sCastformSprites6[] = {
	{sCastformGfx6, ARRAY_COUNT(sCastformGfx6)}, 
	{NULL, 0}
};
static const u8 sCastformGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_7.4bpp.lz");
static const ax_sprite sCastformSprites7[] = {
	{sCastformGfx7, ARRAY_COUNT(sCastformGfx7)}, 
	{NULL, 0}
};
static const u8 sCastformGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_8.4bpp.lz");
static const ax_sprite sCastformSprites8[] = {
	{sCastformGfx8, ARRAY_COUNT(sCastformGfx8)}, 
	{NULL, 0}
};
static const u8 sCastformGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_9.4bpp.lz");
static const ax_sprite sCastformSprites9[] = {
	{sCastformGfx9, ARRAY_COUNT(sCastformGfx9)}, 
	{NULL, 0}
};
static const u8 sCastformGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_10.4bpp.lz");
static const ax_sprite sCastformSprites10[] = {
	{sCastformGfx10, ARRAY_COUNT(sCastformGfx10)}, 
	{NULL, 0}
};
static const u8 sCastformGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_11.4bpp.lz");
static const ax_sprite sCastformSprites11[] = {
	{sCastformGfx11, ARRAY_COUNT(sCastformGfx11)}, 
	{NULL, 0}
};
static const u8 sCastformGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_12.4bpp.lz");
static const ax_sprite sCastformSprites12[] = {
	{sCastformGfx12, ARRAY_COUNT(sCastformGfx12)}, 
	{NULL, 0}
};
static const u8 sCastformGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_13.4bpp.lz");
static const ax_sprite sCastformSprites13[] = {
	{sCastformGfx13, ARRAY_COUNT(sCastformGfx13)}, 
	{NULL, 0}
};
static const u8 sCastformGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_14.4bpp.lz");
static const ax_sprite sCastformSprites14[] = {
	{sCastformGfx14, ARRAY_COUNT(sCastformGfx14)}, 
	{NULL, 0}
};
static const u8 sCastformGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_15.4bpp.lz");
static const ax_sprite sCastformSprites15[] = {
	{sCastformGfx15, ARRAY_COUNT(sCastformGfx15)}, 
	{NULL, 0}
};
static const u8 sCastformGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_16.4bpp.lz");
static const ax_sprite sCastformSprites16[] = {
	{sCastformGfx16, ARRAY_COUNT(sCastformGfx16)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCastformGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_17.4bpp.lz");
static const ax_sprite sCastformSprites17[] = {
	{sCastformGfx17, ARRAY_COUNT(sCastformGfx17)}, 
	{NULL, 0}
};
static const u8 sCastformGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_18.4bpp.lz");
static const ax_sprite sCastformSprites18[] = {
	{sCastformGfx18, ARRAY_COUNT(sCastformGfx18)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCastformGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_19.4bpp.lz");
static const ax_sprite sCastformSprites19[] = {
	{sCastformGfx19, ARRAY_COUNT(sCastformGfx19)}, 
	{NULL, 0}
};
static const u8 sCastformGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_20.4bpp.lz");
static const ax_sprite sCastformSprites20[] = {
	{NULL, 32}, 
	{sCastformGfx20, ARRAY_COUNT(sCastformGfx20)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCastformGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_21.4bpp.lz");
static const ax_sprite sCastformSprites21[] = {
	{sCastformGfx21, ARRAY_COUNT(sCastformGfx21)}, 
	{NULL, 0}
};
static const u8 sCastformGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_22.4bpp.lz");
static const ax_sprite sCastformSprites22[] = {
	{NULL, 32}, 
	{sCastformGfx22, ARRAY_COUNT(sCastformGfx22)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCastformGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_23.4bpp.lz");
static const u8 sCastformGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_23_1.4bpp.lz");
static const ax_sprite sCastformSprites23[] = {
	{sCastformGfx23, ARRAY_COUNT(sCastformGfx23)}, 
	{NULL, 32}, 
	{sCastformGfx23_1, ARRAY_COUNT(sCastformGfx23_1)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCastformGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_24.4bpp.lz");
static const ax_sprite sCastformSprites24[] = {
	{sCastformGfx24, ARRAY_COUNT(sCastformGfx24)}, 
	{NULL, 0}
};
static const u8 sCastformGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_25.4bpp.lz");
static const ax_sprite sCastformSprites25[] = {
	{sCastformGfx25, ARRAY_COUNT(sCastformGfx25)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sCastformGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_26.4bpp.lz");
static const ax_sprite sCastformSprites26[] = {
	{sCastformGfx26, ARRAY_COUNT(sCastformGfx26)}, 
	{NULL, 0}
};
static const u8 sCastformGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_27.4bpp.lz");
static const ax_sprite sCastformSprites27[] = {
	{sCastformGfx27, ARRAY_COUNT(sCastformGfx27)}, 
	{NULL, 0}
};
static const u8 sCastformGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_28.4bpp.lz");
static const ax_sprite sCastformSprites28[] = {
	{sCastformGfx28, ARRAY_COUNT(sCastformGfx28)}, 
	{NULL, 0}
};
static const u8 sCastformGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_29.4bpp.lz");
static const ax_sprite sCastformSprites29[] = {
	{sCastformGfx29, ARRAY_COUNT(sCastformGfx29)}, 
	{NULL, 0}
};
static const u8 sCastformGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_30.4bpp.lz");
static const ax_sprite sCastformSprites30[] = {
	{sCastformGfx30, ARRAY_COUNT(sCastformGfx30)}, 
	{NULL, 0}
};
static const u8 sCastformGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_31.4bpp.lz");
static const ax_sprite sCastformSprites31[] = {
	{sCastformGfx31, ARRAY_COUNT(sCastformGfx31)}, 
	{NULL, 0}
};
static const u8 sCastformGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/castform/sprite_32.4bpp.lz");
static const ax_sprite sCastformSprites32[] = {
	{sCastformGfx32, ARRAY_COUNT(sCastformGfx32)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesCastform[] = {
	sCastformPose1,
	sCastformPose2,
	sCastformPose3,
	sCastformPose4,
	sCastformPose5,
	sCastformPose6,
	sCastformPose7,
	sCastformPose8,
	sCastformPose9,
	sCastformPose10,
	sCastformPose11,
	sCastformPose12,
	sCastformPose13,
	sCastformPose14,
	sCastformPose15,
	sCastformPose16,
	sCastformPose17,
	sCastformPose18,
	sCastformPose19,
	sCastformPose20,
	sCastformPose21,
	sCastformPose22,
	sCastformPose23,
	sCastformPose24,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
	sCastformPose1,
	sCastformPose34,
	sCastformPose35,
	sCastformPose4,
	sCastformPose37,
	sCastformPose38,
	sCastformPose7,
	sCastformPose40,
	sCastformPose41,
	sCastformPose10,
	sCastformPose43,
	sCastformPose44,
	sCastformPose13,
	sCastformPose46,
	sCastformPose47,
	sCastformPose16,
	sCastformPose49,
	sCastformPose50,
	sCastformPose19,
	sCastformPose52,
	sCastformPose53,
	sCastformPose22,
	sCastformPose55,
	sCastformPose56,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
	sCastformPose1,
	sCastformPose34,
	sCastformPose35,
	sCastformPose4,
	sCastformPose37,
	sCastformPose38,
	sCastformPose7,
	sCastformPose40,
	sCastformPose41,
	sCastformPose10,
	sCastformPose43,
	sCastformPose44,
	sCastformPose13,
	sCastformPose46,
	sCastformPose47,
	sCastformPose16,
	sCastformPose49,
	sCastformPose50,
	sCastformPose19,
	sCastformPose52,
	sCastformPose53,
	sCastformPose22,
	sCastformPose55,
	sCastformPose56,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
	sCastformPose1,
	sCastformPose34,
	sCastformPose35,
	sCastformPose4,
	sCastformPose37,
	sCastformPose38,
	sCastformPose7,
	sCastformPose40,
	sCastformPose41,
	sCastformPose10,
	sCastformPose43,
	sCastformPose44,
	sCastformPose13,
	sCastformPose46,
	sCastformPose47,
	sCastformPose16,
	sCastformPose49,
	sCastformPose50,
	sCastformPose19,
	sCastformPose52,
	sCastformPose53,
	sCastformPose22,
	sCastformPose55,
	sCastformPose56,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
	sCastformPose4,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose7,
	sCastformPose4,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
	sCastformPose1,
	sCastformPose22,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
	sCastformPose1,
	sCastformPose193,
	sCastformPose194,
	sCastformPose195,
	sCastformPose196,
	sCastformPose197,
	sCastformPose198,
	sCastformPose199,
	sCastformPose200,
	sCastformPose201,
	sCastformPose202,
	sCastformPose1,
	sCastformPose2,
	sCastformPose3,
	sCastformPose4,
	sCastformPose5,
	sCastformPose6,
	sCastformPose7,
	sCastformPose8,
	sCastformPose9,
	sCastformPose10,
	sCastformPose11,
	sCastformPose12,
	sCastformPose13,
	sCastformPose14,
	sCastformPose15,
	sCastformPose16,
	sCastformPose17,
	sCastformPose18,
	sCastformPose19,
	sCastformPose20,
	sCastformPose21,
	sCastformPose22,
	sCastformPose23,
	sCastformPose24,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
	sCastformPose35,
	sCastformPose56,
	sCastformPose53,
	sCastformPose50,
	sCastformPose239,
	sCastformPose44,
	sCastformPose41,
	sCastformPose38,
	sCastformPose243,
	sCastformPose244,
	sCastformPose245,
	sCastformPose246,
	sCastformPose247,
	sCastformPose248,
	sCastformPose249,
	sCastformPose250,
	sCastformPose1,
	sCastformPose34,
	sCastformPose35,
	sCastformPose4,
	sCastformPose37,
	sCastformPose38,
	sCastformPose7,
	sCastformPose40,
	sCastformPose41,
	sCastformPose10,
	sCastformPose43,
	sCastformPose44,
	sCastformPose13,
	sCastformPose46,
	sCastformPose47,
	sCastformPose16,
	sCastformPose49,
	sCastformPose50,
	sCastformPose19,
	sCastformPose52,
	sCastformPose53,
	sCastformPose22,
	sCastformPose55,
	sCastformPose56,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
	sCastformPose35,
	sCastformPose284,
	sCastformPose285,
	sCastformPose286,
	sCastformPose239,
	sCastformPose44,
	sCastformPose41,
	sCastformPose38,
	sCastformPose1,
	sCastformPose22,
	sCastformPose19,
	sCastformPose16,
	sCastformPose13,
	sCastformPose10,
	sCastformPose7,
	sCastformPose4,
};

static const struct PositionSets sAxPositionsCastform[] = {
	[0] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[1] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[2] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[3] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[4] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[5] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[6] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[7] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[8] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[9] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[10] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[11] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[12] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[13] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[14] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[15] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[16] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[17] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[18] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[19] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[20] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[21] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[22] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[23] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[24] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[25] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[26] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[27] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[28] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[29] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[30] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[31] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[32] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[33] = { .set = { {-1, -10}, {-3, -6}, {1, -6}, {-1, -11} } },
	[34] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -7} } },
	[35] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[36] = { .set = { {-1, -10}, {1, -7}, {-2, -6}, {-3, -11} } },
	[37] = { .set = { {0, -6}, {1, -3}, {-2, -3}, {0, -8} } },
	[38] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[39] = { .set = { {0, -9}, {1, -6}, {-1, -4}, {-3, -10} } },
	[40] = { .set = { {2, -6}, {0, -4}, {-1, -3}, {0, -9} } },
	[41] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[42] = { .set = { {0, -9}, {-1, -6}, {1, -5}, {-3, -9} } },
	[43] = { .set = { {2, -7}, {-1, -4}, {0, -3}, {0, -9} } },
	[44] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[45] = { .set = { {-1, -9}, {1, -4}, {-3, -4}, {-1, -8} } },
	[46] = { .set = { {-1, -12}, {1, -6}, {-3, -6}, {-1, -11} } },
	[47] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[48] = { .set = { {-2, -9}, {-1, -6}, {-3, -5}, {1, -9} } },
	[49] = { .set = { {-4, -7}, {-1, -4}, {-2, -3}, {-2, -9} } },
	[50] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[51] = { .set = { {-2, -9}, {-3, -6}, {-1, -4}, {1, -10} } },
	[52] = { .set = { {-4, -6}, {-2, -4}, {-1, -3}, {-2, -9} } },
	[53] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[54] = { .set = { {-1, -10}, {-3, -7}, {0, -6}, {1, -11} } },
	[55] = { .set = { {-2, -6}, {-3, -3}, {0, -3}, {-2, -8} } },
	[56] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[57] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[58] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[59] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[60] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[61] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[62] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[63] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[64] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[65] = { .set = { {-1, -10}, {-3, -6}, {1, -6}, {-1, -11} } },
	[66] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -7} } },
	[67] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[68] = { .set = { {-1, -10}, {1, -7}, {-2, -6}, {-3, -11} } },
	[69] = { .set = { {0, -6}, {1, -3}, {-2, -3}, {0, -8} } },
	[70] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[71] = { .set = { {0, -9}, {1, -6}, {-1, -4}, {-3, -10} } },
	[72] = { .set = { {2, -6}, {0, -4}, {-1, -3}, {0, -9} } },
	[73] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[74] = { .set = { {0, -9}, {-1, -6}, {1, -5}, {-3, -9} } },
	[75] = { .set = { {2, -7}, {-1, -4}, {0, -3}, {0, -9} } },
	[76] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[77] = { .set = { {-1, -9}, {1, -4}, {-3, -4}, {-1, -8} } },
	[78] = { .set = { {-1, -12}, {1, -6}, {-3, -6}, {-1, -11} } },
	[79] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[80] = { .set = { {-2, -9}, {-1, -6}, {-3, -5}, {1, -9} } },
	[81] = { .set = { {-4, -7}, {-1, -4}, {-2, -3}, {-2, -9} } },
	[82] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[83] = { .set = { {-2, -9}, {-3, -6}, {-1, -4}, {1, -10} } },
	[84] = { .set = { {-4, -6}, {-2, -4}, {-1, -3}, {-2, -9} } },
	[85] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[86] = { .set = { {-1, -10}, {-3, -7}, {0, -6}, {1, -11} } },
	[87] = { .set = { {-2, -6}, {-3, -3}, {0, -3}, {-2, -8} } },
	[88] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[89] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[90] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[91] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[92] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[93] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[94] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[95] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[96] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[97] = { .set = { {-1, -10}, {-3, -6}, {1, -6}, {-1, -11} } },
	[98] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -7} } },
	[99] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[100] = { .set = { {-1, -10}, {1, -7}, {-2, -6}, {-3, -11} } },
	[101] = { .set = { {0, -6}, {1, -3}, {-2, -3}, {0, -8} } },
	[102] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[103] = { .set = { {0, -9}, {1, -6}, {-1, -4}, {-3, -10} } },
	[104] = { .set = { {2, -6}, {0, -4}, {-1, -3}, {0, -9} } },
	[105] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[106] = { .set = { {0, -9}, {-1, -6}, {1, -5}, {-3, -9} } },
	[107] = { .set = { {2, -7}, {-1, -4}, {0, -3}, {0, -9} } },
	[108] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[109] = { .set = { {-1, -9}, {1, -4}, {-3, -4}, {-1, -8} } },
	[110] = { .set = { {-1, -12}, {1, -6}, {-3, -6}, {-1, -11} } },
	[111] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[112] = { .set = { {-2, -9}, {-1, -6}, {-3, -5}, {1, -9} } },
	[113] = { .set = { {-4, -7}, {-1, -4}, {-2, -3}, {-2, -9} } },
	[114] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[115] = { .set = { {-2, -9}, {-3, -6}, {-1, -4}, {1, -10} } },
	[116] = { .set = { {-4, -6}, {-2, -4}, {-1, -3}, {-2, -9} } },
	[117] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[118] = { .set = { {-1, -10}, {-3, -7}, {0, -6}, {1, -11} } },
	[119] = { .set = { {-2, -6}, {-3, -3}, {0, -3}, {-2, -8} } },
	[120] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[121] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[122] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[123] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[124] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[125] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[126] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[127] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[128] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[129] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[130] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[131] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[132] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[133] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[134] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[135] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[136] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[137] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[138] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[139] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[140] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[141] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[142] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[143] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[144] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[145] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[146] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[147] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[148] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[149] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[150] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[151] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[152] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[153] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[154] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[155] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[156] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[157] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[158] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[159] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[160] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[161] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[162] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[163] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[164] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[165] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[166] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[167] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[168] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[169] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[170] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[171] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[172] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[173] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[174] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[175] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[176] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[177] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[178] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[179] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[180] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[181] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[182] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[183] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[184] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[185] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[186] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[187] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[188] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[189] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[190] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[191] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[192] = { .set = { {-2, -5}, {-2, -2}, {0, -1}, {0, -7} } },
	[193] = { .set = { {-2, -4}, {-2, -2}, {0, -1}, {0, -6} } },
	[194] = { .set = { {0, -10}, {-2, -6}, {2, -6}, {0, -12} } },
	[195] = { .set = { {1, -8}, {3, -5}, {1, -4}, {-1, -10} } },
	[196] = { .set = { {2, -9}, {3, -7}, {3, -6}, {-2, -9} } },
	[197] = { .set = { {1, -10}, {0, -7}, {2, -6}, {-2, -10} } },
	[198] = { .set = { {0, -12}, {2, -6}, {-2, -6}, {0, -10} } },
	[199] = { .set = { {-1, -10}, {0, -7}, {-2, -6}, {2, -10} } },
	[200] = { .set = { {-2, -9}, {-3, -7}, {-3, -6}, {2, -9} } },
	[201] = { .set = { {-1, -8}, {-3, -5}, {-1, -4}, {1, -10} } },
	[202] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[203] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[204] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[205] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[206] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[207] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[208] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[209] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[210] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[211] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[212] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[213] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[214] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[215] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[216] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[217] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[218] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[219] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[220] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[221] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[222] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[223] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[224] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[225] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[226] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[227] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[228] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[229] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[230] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[231] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[232] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[233] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[234] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -7} } },
	[235] = { .set = { {-2, -6}, {-3, -3}, {0, -3}, {-2, -8} } },
	[236] = { .set = { {-4, -6}, {-2, -4}, {-1, -3}, {-2, -9} } },
	[237] = { .set = { {-4, -7}, {-1, -4}, {-2, -3}, {-2, -9} } },
	[238] = { .set = { {-1, -10}, {1, -4}, {-3, -4}, {-1, -9} } },
	[239] = { .set = { {2, -7}, {-1, -4}, {0, -3}, {0, -9} } },
	[240] = { .set = { {2, -6}, {0, -4}, {-1, -3}, {0, -9} } },
	[241] = { .set = { {0, -6}, {1, -3}, {-2, -3}, {0, -8} } },
	[242] = { .set = { {-1, -9}, {-3, -5}, {1, -5}, {-1, -10} } },
	[243] = { .set = { {1, -10}, {3, -7}, {0, -6}, {-1, -11} } },
	[244] = { .set = { {3, -10}, {4, -7}, {2, -5}, {0, -11} } },
	[245] = { .set = { {2, -11}, {1, -8}, {3, -7}, {-1, -11} } },
	[246] = { .set = { {-1, -12}, {1, -7}, {-3, -7}, {-1, -11} } },
	[247] = { .set = { {-3, -11}, {-2, -8}, {-4, -7}, {0, -11} } },
	[248] = { .set = { {-4, -10}, {-5, -7}, {-3, -5}, {-1, -11} } },
	[249] = { .set = { {-2, -10}, {-4, -7}, {-1, -6}, {0, -11} } },
	[250] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[251] = { .set = { {-1, -10}, {-3, -6}, {1, -6}, {-1, -11} } },
	[252] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -7} } },
	[253] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[254] = { .set = { {-1, -10}, {1, -7}, {-2, -6}, {-3, -11} } },
	[255] = { .set = { {0, -6}, {1, -3}, {-2, -3}, {0, -8} } },
	[256] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[257] = { .set = { {0, -9}, {1, -6}, {-1, -4}, {-3, -10} } },
	[258] = { .set = { {2, -6}, {0, -4}, {-1, -3}, {0, -9} } },
	[259] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[260] = { .set = { {0, -9}, {-1, -6}, {1, -5}, {-3, -9} } },
	[261] = { .set = { {2, -7}, {-1, -4}, {0, -3}, {0, -9} } },
	[262] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[263] = { .set = { {-1, -9}, {1, -4}, {-3, -4}, {-1, -8} } },
	[264] = { .set = { {-1, -12}, {1, -6}, {-3, -6}, {-1, -11} } },
	[265] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[266] = { .set = { {-2, -9}, {-1, -6}, {-3, -5}, {1, -9} } },
	[267] = { .set = { {-4, -7}, {-1, -4}, {-2, -3}, {-2, -9} } },
	[268] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[269] = { .set = { {-2, -9}, {-3, -6}, {-1, -4}, {1, -10} } },
	[270] = { .set = { {-4, -6}, {-2, -4}, {-1, -3}, {-2, -9} } },
	[271] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[272] = { .set = { {-1, -10}, {-3, -7}, {0, -6}, {1, -11} } },
	[273] = { .set = { {-2, -6}, {-3, -3}, {0, -3}, {-2, -8} } },
	[274] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[275] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[276] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[277] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[278] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[279] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[280] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[281] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
	[282] = { .set = { {-1, -6}, {-3, -3}, {1, -3}, {-1, -7} } },
	[283] = { .set = { {-1, -6}, {-2, -3}, {1, -3}, {-1, -8} } },
	[284] = { .set = { {-3, -6}, {-1, -4}, {0, -3}, {-1, -9} } },
	[285] = { .set = { {-3, -7}, {0, -4}, {-1, -3}, {-1, -9} } },
	[286] = { .set = { {-1, -10}, {1, -4}, {-3, -4}, {-1, -9} } },
	[287] = { .set = { {2, -7}, {-1, -4}, {0, -3}, {0, -9} } },
	[288] = { .set = { {2, -6}, {0, -4}, {-1, -3}, {0, -9} } },
	[289] = { .set = { {0, -6}, {1, -3}, {-2, -3}, {0, -8} } },
	[290] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -9} } },
	[291] = { .set = { {-3, -7}, {-3, -5}, {-1, -4}, {-2, -9} } },
	[292] = { .set = { {-4, -8}, {-3, -5}, {-3, -4}, {-1, -9} } },
	[293] = { .set = { {-3, -10}, {-1, -5}, {-3, -5}, {-1, -10} } },
	[294] = { .set = { {-1, -10}, {1, -5}, {-3, -5}, {-1, -11} } },
	[295] = { .set = { {1, -10}, {-1, -5}, {1, -5}, {-1, -10} } },
	[296] = { .set = { {2, -8}, {1, -5}, {1, -4}, {-1, -9} } },
	[297] = { .set = { {1, -7}, {1, -5}, {-1, -4}, {0, -9} } },
};

static const ax_anim *const sCastformAnimTable1[] = {
	sCastformAnims_1_1,
	sCastformAnims_1_2,
	sCastformAnims_1_3,
	sCastformAnims_1_4,
	sCastformAnims_1_5,
	sCastformAnims_1_6,
	sCastformAnims_1_7,
	sCastformAnims_1_8,
};

static const ax_anim *const sCastformAnimTable2[] = {
	sCastformAnims_2_1,
	sCastformAnims_2_2,
	sCastformAnims_2_3,
	sCastformAnims_2_4,
	sCastformAnims_2_5,
	sCastformAnims_2_6,
	sCastformAnims_2_7,
	sCastformAnims_2_8,
};

static const ax_anim *const sCastformAnimTable3[] = {
	sCastformAnims_3_1,
	sCastformAnims_3_2,
	sCastformAnims_3_3,
	sCastformAnims_3_4,
	sCastformAnims_3_5,
	sCastformAnims_3_6,
	sCastformAnims_3_7,
	sCastformAnims_3_8,
};

static const ax_anim *const sCastformAnimTable4[] = {
	gAxSharedAnim_02299,
	gAxSharedAnim_00151,
	gAxSharedAnim_00168,
	gAxSharedAnim_00191,
	gAxSharedAnim_00223,
	gAxSharedAnim_00253,
	gAxSharedAnim_00279,
	gAxSharedAnim_00305,
};

static const ax_anim *const sCastformAnimTable5[] = {
	gAxSharedAnim_02505,
	gAxSharedAnim_02512,
	gAxSharedAnim_02513,
	gAxSharedAnim_02520,
	sCastformAnims_5_5,
	sCastformAnims_5_6,
	sCastformAnims_5_7,
	sCastformAnims_5_8,
};

static const ax_anim *const sCastformAnimTable6[] = {
	sCastformAnims_6_1,
	sCastformAnims_6_1,
	sCastformAnims_6_1,
	sCastformAnims_6_1,
	sCastformAnims_6_1,
	sCastformAnims_6_1,
	sCastformAnims_6_1,
	sCastformAnims_6_1,
};

static const ax_anim *const sCastformAnimTable7[] = {
	gAxSharedAnim_01131,
	gAxSharedAnim_01149,
	gAxSharedAnim_01160,
	gAxSharedAnim_01172,
	gAxSharedAnim_01192,
	gAxSharedAnim_01204,
	gAxSharedAnim_01221,
	gAxSharedAnim_01232,
};

static const ax_anim *const sCastformAnimTable8[] = {
	sCastformAnims_8_1,
	sCastformAnims_8_2,
	sCastformAnims_8_3,
	sCastformAnims_8_4,
	sCastformAnims_8_5,
	sCastformAnims_8_6,
	sCastformAnims_8_7,
	sCastformAnims_8_8,
};

static const ax_anim *const sCastformAnimTable9[] = {
	sCastformAnims_9_1,
	sCastformAnims_9_2,
	sCastformAnims_9_3,
	sCastformAnims_9_4,
	sCastformAnims_9_5,
	sCastformAnims_9_6,
	sCastformAnims_9_7,
	sCastformAnims_9_8,
};

static const ax_anim *const sCastformAnimTable10[] = {
	gAxSharedAnim_01585,
	gAxSharedAnim_01590,
	gAxSharedAnim_01596,
	gAxSharedAnim_01601,
	gAxSharedAnim_01604,
	gAxSharedAnim_01611,
	gAxSharedAnim_01619,
	gAxSharedAnim_01625,
};

static const ax_anim *const sCastformAnimTable11[] = {
	sCastformAnims_11_1,
	sCastformAnims_11_2,
	sCastformAnims_11_3,
	sCastformAnims_11_4,
	sCastformAnims_11_5,
	sCastformAnims_11_6,
	sCastformAnims_11_7,
	sCastformAnims_11_8,
};

static const ax_anim *const sCastformAnimTable12[] = {
	gAxSharedAnim_01773,
	gAxSharedAnim_01790,
	gAxSharedAnim_01787,
	gAxSharedAnim_01785,
	gAxSharedAnim_01784,
	gAxSharedAnim_01782,
	gAxSharedAnim_01777,
	gAxSharedAnim_01774,
};

static const ax_anim *const sCastformAnimTable13[] = {
	gAxSharedAnim_01796,
	gAxSharedAnim_01813,
	gAxSharedAnim_01812,
	gAxSharedAnim_01810,
	gAxSharedAnim_01808,
	gAxSharedAnim_01805,
	gAxSharedAnim_01803,
	gAxSharedAnim_01800,
};

static const ax_anim *const *const sAxAnimationsCastform[] = {
	sCastformAnimTable1,
	sCastformAnimTable2,
	sCastformAnimTable3,
	sCastformAnimTable4,
	sCastformAnimTable5,
	sCastformAnimTable6,
	sCastformAnimTable7,
	sCastformAnimTable8,
	sCastformAnimTable9,
	sCastformAnimTable10,
	sCastformAnimTable11,
	sCastformAnimTable12,
	sCastformAnimTable13,
};

static const ax_sprite *const sAxSpritesCastform[] = {
	sCastformSprites1,
	sCastformSprites2,
	sCastformSprites3,
	sCastformSprites4,
	sCastformSprites5,
	sCastformSprites6,
	sCastformSprites7,
	sCastformSprites8,
	sCastformSprites9,
	sCastformSprites10,
	sCastformSprites11,
	sCastformSprites12,
	sCastformSprites13,
	sCastformSprites14,
	sCastformSprites15,
	sCastformSprites16,
	sCastformSprites17,
	sCastformSprites18,
	sCastformSprites19,
	sCastformSprites20,
	sCastformSprites21,
	sCastformSprites22,
	sCastformSprites23,
	sCastformSprites24,
	sCastformSprites25,
	sCastformSprites26,
	sCastformSprites27,
	sCastformSprites28,
	sCastformSprites29,
	sCastformSprites30,
	sCastformSprites31,
	sCastformSprites32,
};

static const axmain sAxMainCastform = {
	.poses = sAxPosesCastform,
	.animations = sAxAnimationsCastform,
	.animCount = ARRAY_COUNT(sAxAnimationsCastform),
	.spriteData = sAxSpritesCastform,
	.positions = sAxPositionsCastform,
};
