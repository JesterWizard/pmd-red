/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainPidgey;
const SiroArchive gAxPidgey = {"SIRO", &sAxMainPidgey};

static const ax_pose sPidgeyPose1[] = {
	AX_POSE(0, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose2[] = {
	AX_POSE(1, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose4[] = {
	AX_POSE(3, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose5[] = {
	AX_POSE(4, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose6[] = {
	AX_POSE(5, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose7[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose8[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose9[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose10[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose12[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose16[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose17[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose18[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose19[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose20[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose21[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose22[] = {
	AX_POSE(3, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose23[] = {
	AX_POSE(4, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose24[] = {
	AX_POSE(5, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose26[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose27[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose28[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose30[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose31[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose32[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose34[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose35[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose36[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose38[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose39[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose40[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose42[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose43[] = {
	AX_POSE(28, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose44[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose46[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose47[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose48[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose50[] = {
	AX_POSE(21, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose51[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose52[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose54[] = {
	AX_POSE(18, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose55[] = {
	AX_POSE(19, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose56[] = {
	AX_POSE(20, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose119[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose120[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose123[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose124[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose129[] = {
	AX_POSE(30, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose130[] = {
	AX_POSE(31, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose131[] = {
	AX_POSE(32, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose132[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose133[] = {
	AX_POSE(34, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose134[] = {
	AX_POSE(35, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose135[] = {
	AX_POSE(36, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose136[] = {
	AX_POSE(35, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose137[] = {
	AX_POSE(34, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose138[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose182[] = {
	AX_POSE(5, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose185[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose188[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose191[] = {
	AX_POSE(14, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose194[] = {
	AX_POSE(11, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose197[] = {
	AX_POSE(8, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sPidgeyPose200[] = {
	AX_POSE(5, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_anim sPidgeyAnims_8_1[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_8_2[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_8_3[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 145, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 145, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 145, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_8_4[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 148, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 148, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 148, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_8_5[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 151, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 151, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 151, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_8_6[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_8_7[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_8_8[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {7, 19}, .shadow = {7, 19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 166, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 167, .offset = {-7, 19}, .shadow = {-7, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {22, 9}, .shadow = {22, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {21, 21}, .shadow = {21, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {11, 21}, .shadow = {11, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {2, 12}, .shadow = {2, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {-1, 8}, .shadow = {-1, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {22, 1}, .shadow = {22, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 165, .offset = {18, 7}, .shadow = {18, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {10, 7}, .shadow = {10, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {2, -16}, .shadow = {2, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {11, -23}, .shadow = {11, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 163, .offset = {21, -23}, .shadow = {21, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 164, .offset = {21, -12}, .shadow = {21, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {16, -4}, .shadow = {16, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-8, -10}, .shadow = {-8, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -24}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 163, .offset = {7, -18}, .shadow = {7, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {8, -8}, .shadow = {8, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {6, -4}, .shadow = {6, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {-2, -16}, .shadow = {-2, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {-11, -23}, .shadow = {-11, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 169, .offset = {-21, -23}, .shadow = {-21, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 168, .offset = {-21, -12}, .shadow = {-21, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {-16, -4}, .shadow = {-16, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 168, .offset = {-22, 1}, .shadow = {-22, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 167, .offset = {-18, 7}, .shadow = {-18, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {-10, 7}, .shadow = {-10, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sPidgeyAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {-8, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-22, 9}, .shadow = {-24, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {-21, 21}, .shadow = {-23, 16} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {-11, 21}, .shadow = {-11, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {-2, 12}, .shadow = {-4, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {1, 8}, .shadow = {-3, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sPidgeyGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_1.4bpp.lz");
static const ax_sprite sPidgeySprites1[] = {
	{sPidgeyGfx1, ARRAY_COUNT(sPidgeyGfx1)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_2.4bpp.lz");
static const ax_sprite sPidgeySprites2[] = {
	{sPidgeyGfx2, ARRAY_COUNT(sPidgeyGfx2)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_3.4bpp.lz");
static const ax_sprite sPidgeySprites3[] = {
	{sPidgeyGfx3, ARRAY_COUNT(sPidgeyGfx3)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_4.4bpp.lz");
static const ax_sprite sPidgeySprites4[] = {
	{sPidgeyGfx4, ARRAY_COUNT(sPidgeyGfx4)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_5.4bpp.lz");
static const ax_sprite sPidgeySprites5[] = {
	{sPidgeyGfx5, ARRAY_COUNT(sPidgeyGfx5)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_6.4bpp.lz");
static const ax_sprite sPidgeySprites6[] = {
	{sPidgeyGfx6, ARRAY_COUNT(sPidgeyGfx6)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_7.4bpp.lz");
static const ax_sprite sPidgeySprites7[] = {
	{sPidgeyGfx7, ARRAY_COUNT(sPidgeyGfx7)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_8.4bpp.lz");
static const ax_sprite sPidgeySprites8[] = {
	{sPidgeyGfx8, ARRAY_COUNT(sPidgeyGfx8)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_9.4bpp.lz");
static const ax_sprite sPidgeySprites9[] = {
	{sPidgeyGfx9, ARRAY_COUNT(sPidgeyGfx9)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_10.4bpp.lz");
static const ax_sprite sPidgeySprites10[] = {
	{sPidgeyGfx10, ARRAY_COUNT(sPidgeyGfx10)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_11.4bpp.lz");
static const ax_sprite sPidgeySprites11[] = {
	{sPidgeyGfx11, ARRAY_COUNT(sPidgeyGfx11)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_12.4bpp.lz");
static const ax_sprite sPidgeySprites12[] = {
	{sPidgeyGfx12, ARRAY_COUNT(sPidgeyGfx12)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_13.4bpp.lz");
static const ax_sprite sPidgeySprites13[] = {
	{sPidgeyGfx13, ARRAY_COUNT(sPidgeyGfx13)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_14.4bpp.lz");
static const ax_sprite sPidgeySprites14[] = {
	{sPidgeyGfx14, ARRAY_COUNT(sPidgeyGfx14)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_15.4bpp.lz");
static const ax_sprite sPidgeySprites15[] = {
	{sPidgeyGfx15, ARRAY_COUNT(sPidgeyGfx15)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_16.4bpp.lz");
static const u8 sPidgeyGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_16_1.4bpp.lz");
static const ax_sprite sPidgeySprites16[] = {
	{NULL, 128}, 
	{sPidgeyGfx16, ARRAY_COUNT(sPidgeyGfx16)}, 
	{NULL, 32}, 
	{sPidgeyGfx16_1, ARRAY_COUNT(sPidgeyGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_17.4bpp.lz");
static const u8 sPidgeyGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_17_1.4bpp.lz");
static const u8 sPidgeyGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_17_2.4bpp.lz");
static const u8 sPidgeyGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_17_3.4bpp.lz");
static const ax_sprite sPidgeySprites17[] = {
	{NULL, 32}, 
	{sPidgeyGfx17, ARRAY_COUNT(sPidgeyGfx17)}, 
	{NULL, 64}, 
	{sPidgeyGfx17_1, ARRAY_COUNT(sPidgeyGfx17_1)}, 
	{NULL, 32}, 
	{sPidgeyGfx17_2, ARRAY_COUNT(sPidgeyGfx17_2)}, 
	{NULL, 32}, 
	{sPidgeyGfx17_3, ARRAY_COUNT(sPidgeyGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_18.4bpp.lz");
static const u8 sPidgeyGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_18_1.4bpp.lz");
static const u8 sPidgeyGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_18_2.4bpp.lz");
static const ax_sprite sPidgeySprites18[] = {
	{NULL, 32}, 
	{sPidgeyGfx18, ARRAY_COUNT(sPidgeyGfx18)}, 
	{NULL, 32}, 
	{sPidgeyGfx18_1, ARRAY_COUNT(sPidgeyGfx18_1)}, 
	{NULL, 32}, 
	{sPidgeyGfx18_2, ARRAY_COUNT(sPidgeyGfx18_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_19.4bpp.lz");
static const u8 sPidgeyGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_19_1.4bpp.lz");
static const ax_sprite sPidgeySprites19[] = {
	{NULL, 128}, 
	{sPidgeyGfx19, ARRAY_COUNT(sPidgeyGfx19)}, 
	{NULL, 32}, 
	{sPidgeyGfx19_1, ARRAY_COUNT(sPidgeyGfx19_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_20.4bpp.lz");
static const u8 sPidgeyGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_20_1.4bpp.lz");
static const u8 sPidgeyGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_20_2.4bpp.lz");
static const u8 sPidgeyGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_20_3.4bpp.lz");
static const ax_sprite sPidgeySprites20[] = {
	{NULL, 32}, 
	{sPidgeyGfx20, ARRAY_COUNT(sPidgeyGfx20)}, 
	{NULL, 96}, 
	{sPidgeyGfx20_1, ARRAY_COUNT(sPidgeyGfx20_1)}, 
	{NULL, 32}, 
	{sPidgeyGfx20_2, ARRAY_COUNT(sPidgeyGfx20_2)}, 
	{NULL, 64}, 
	{sPidgeyGfx20_3, ARRAY_COUNT(sPidgeyGfx20_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_21.4bpp.lz");
static const u8 sPidgeyGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_21_1.4bpp.lz");
static const u8 sPidgeyGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_21_2.4bpp.lz");
static const u8 sPidgeyGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_21_3.4bpp.lz");
static const ax_sprite sPidgeySprites21[] = {
	{sPidgeyGfx21, ARRAY_COUNT(sPidgeyGfx21)}, 
	{NULL, 64}, 
	{sPidgeyGfx21_1, ARRAY_COUNT(sPidgeyGfx21_1)}, 
	{NULL, 32}, 
	{sPidgeyGfx21_2, ARRAY_COUNT(sPidgeyGfx21_2)}, 
	{NULL, 32}, 
	{sPidgeyGfx21_3, ARRAY_COUNT(sPidgeyGfx21_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_22.4bpp.lz");
static const u8 sPidgeyGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_22_1.4bpp.lz");
static const u8 sPidgeyGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_22_2.4bpp.lz");
static const ax_sprite sPidgeySprites22[] = {
	{NULL, 128}, 
	{sPidgeyGfx22, ARRAY_COUNT(sPidgeyGfx22)}, 
	{NULL, 32}, 
	{sPidgeyGfx22_1, ARRAY_COUNT(sPidgeyGfx22_1)}, 
	{NULL, 64}, 
	{sPidgeyGfx22_2, ARRAY_COUNT(sPidgeyGfx22_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_23.4bpp.lz");
static const u8 sPidgeyGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_23_1.4bpp.lz");
static const u8 sPidgeyGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_23_2.4bpp.lz");
static const ax_sprite sPidgeySprites23[] = {
	{NULL, 32}, 
	{sPidgeyGfx23, ARRAY_COUNT(sPidgeyGfx23)}, 
	{NULL, 64}, 
	{sPidgeyGfx23_1, ARRAY_COUNT(sPidgeyGfx23_1)}, 
	{NULL, 64}, 
	{sPidgeyGfx23_2, ARRAY_COUNT(sPidgeyGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_24.4bpp.lz");
static const u8 sPidgeyGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_24_1.4bpp.lz");
static const u8 sPidgeyGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_24_2.4bpp.lz");
static const ax_sprite sPidgeySprites24[] = {
	{NULL, 32}, 
	{sPidgeyGfx24, ARRAY_COUNT(sPidgeyGfx24)}, 
	{NULL, 32}, 
	{sPidgeyGfx24_1, ARRAY_COUNT(sPidgeyGfx24_1)}, 
	{NULL, 64}, 
	{sPidgeyGfx24_2, ARRAY_COUNT(sPidgeyGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_25.4bpp.lz");
static const ax_sprite sPidgeySprites25[] = {
	{NULL, 128}, 
	{sPidgeyGfx25, ARRAY_COUNT(sPidgeyGfx25)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_26.4bpp.lz");
static const u8 sPidgeyGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_26_1.4bpp.lz");
static const u8 sPidgeyGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_26_2.4bpp.lz");
static const ax_sprite sPidgeySprites26[] = {
	{NULL, 32}, 
	{sPidgeyGfx26, ARRAY_COUNT(sPidgeyGfx26)}, 
	{NULL, 64}, 
	{sPidgeyGfx26_1, ARRAY_COUNT(sPidgeyGfx26_1)}, 
	{NULL, 32}, 
	{sPidgeyGfx26_2, ARRAY_COUNT(sPidgeyGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_27.4bpp.lz");
static const u8 sPidgeyGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_27_1.4bpp.lz");
static const u8 sPidgeyGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_27_2.4bpp.lz");
static const ax_sprite sPidgeySprites27[] = {
	{NULL, 32}, 
	{sPidgeyGfx27, ARRAY_COUNT(sPidgeyGfx27)}, 
	{NULL, 64}, 
	{sPidgeyGfx27_1, ARRAY_COUNT(sPidgeyGfx27_1)}, 
	{NULL, 32}, 
	{sPidgeyGfx27_2, ARRAY_COUNT(sPidgeyGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_28.4bpp.lz");
static const u8 sPidgeyGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_28_1.4bpp.lz");
static const ax_sprite sPidgeySprites28[] = {
	{NULL, 128}, 
	{sPidgeyGfx28, ARRAY_COUNT(sPidgeyGfx28)}, 
	{NULL, 32}, 
	{sPidgeyGfx28_1, ARRAY_COUNT(sPidgeyGfx28_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_29.4bpp.lz");
static const u8 sPidgeyGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_29_1.4bpp.lz");
static const u8 sPidgeyGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_29_2.4bpp.lz");
static const ax_sprite sPidgeySprites29[] = {
	{NULL, 32}, 
	{sPidgeyGfx29, ARRAY_COUNT(sPidgeyGfx29)}, 
	{NULL, 64}, 
	{sPidgeyGfx29_1, ARRAY_COUNT(sPidgeyGfx29_1)}, 
	{NULL, 32}, 
	{sPidgeyGfx29_2, ARRAY_COUNT(sPidgeyGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_30.4bpp.lz");
static const u8 sPidgeyGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_30_1.4bpp.lz");
static const ax_sprite sPidgeySprites30[] = {
	{NULL, 32}, 
	{sPidgeyGfx30, ARRAY_COUNT(sPidgeyGfx30)}, 
	{NULL, 32}, 
	{sPidgeyGfx30_1, ARRAY_COUNT(sPidgeyGfx30_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_31.4bpp.lz");
static const ax_sprite sPidgeySprites31[] = {
	{sPidgeyGfx31, ARRAY_COUNT(sPidgeyGfx31)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_32.4bpp.lz");
static const ax_sprite sPidgeySprites32[] = {
	{sPidgeyGfx32, ARRAY_COUNT(sPidgeyGfx32)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_33.4bpp.lz");
static const ax_sprite sPidgeySprites33[] = {
	{sPidgeyGfx33, ARRAY_COUNT(sPidgeyGfx33)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_34.4bpp.lz");
static const ax_sprite sPidgeySprites34[] = {
	{sPidgeyGfx34, ARRAY_COUNT(sPidgeyGfx34)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_35.4bpp.lz");
static const ax_sprite sPidgeySprites35[] = {
	{sPidgeyGfx35, ARRAY_COUNT(sPidgeyGfx35)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_36.4bpp.lz");
static const ax_sprite sPidgeySprites36[] = {
	{sPidgeyGfx36, ARRAY_COUNT(sPidgeyGfx36)}, 
	{NULL, 0}
};
static const u8 sPidgeyGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/pidgey/sprite_37.4bpp.lz");
static const ax_sprite sPidgeySprites37[] = {
	{sPidgeyGfx37, ARRAY_COUNT(sPidgeyGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesPidgey[] = {
	sPidgeyPose1,
	sPidgeyPose2,
	sPidgeyPose3,
	sPidgeyPose4,
	sPidgeyPose5,
	sPidgeyPose6,
	sPidgeyPose7,
	sPidgeyPose8,
	sPidgeyPose9,
	sPidgeyPose10,
	sPidgeyPose11,
	sPidgeyPose12,
	sPidgeyPose13,
	sPidgeyPose14,
	sPidgeyPose15,
	sPidgeyPose16,
	sPidgeyPose17,
	sPidgeyPose18,
	sPidgeyPose19,
	sPidgeyPose20,
	sPidgeyPose21,
	sPidgeyPose22,
	sPidgeyPose23,
	sPidgeyPose24,
	sPidgeyPose1,
	sPidgeyPose26,
	sPidgeyPose27,
	sPidgeyPose28,
	sPidgeyPose4,
	sPidgeyPose30,
	sPidgeyPose31,
	sPidgeyPose32,
	sPidgeyPose7,
	sPidgeyPose34,
	sPidgeyPose35,
	sPidgeyPose36,
	sPidgeyPose10,
	sPidgeyPose38,
	sPidgeyPose39,
	sPidgeyPose40,
	sPidgeyPose13,
	sPidgeyPose42,
	sPidgeyPose43,
	sPidgeyPose44,
	sPidgeyPose16,
	sPidgeyPose46,
	sPidgeyPose47,
	sPidgeyPose48,
	sPidgeyPose19,
	sPidgeyPose50,
	sPidgeyPose51,
	sPidgeyPose52,
	sPidgeyPose22,
	sPidgeyPose54,
	sPidgeyPose55,
	sPidgeyPose56,
	sPidgeyPose1,
	sPidgeyPose26,
	sPidgeyPose27,
	sPidgeyPose28,
	sPidgeyPose4,
	sPidgeyPose30,
	sPidgeyPose31,
	sPidgeyPose32,
	sPidgeyPose7,
	sPidgeyPose34,
	sPidgeyPose35,
	sPidgeyPose36,
	sPidgeyPose10,
	sPidgeyPose38,
	sPidgeyPose39,
	sPidgeyPose40,
	sPidgeyPose13,
	sPidgeyPose42,
	sPidgeyPose43,
	sPidgeyPose44,
	sPidgeyPose16,
	sPidgeyPose46,
	sPidgeyPose47,
	sPidgeyPose48,
	sPidgeyPose19,
	sPidgeyPose50,
	sPidgeyPose51,
	sPidgeyPose52,
	sPidgeyPose22,
	sPidgeyPose54,
	sPidgeyPose55,
	sPidgeyPose56,
	sPidgeyPose1,
	sPidgeyPose27,
	sPidgeyPose28,
	sPidgeyPose4,
	sPidgeyPose31,
	sPidgeyPose32,
	sPidgeyPose7,
	sPidgeyPose35,
	sPidgeyPose36,
	sPidgeyPose10,
	sPidgeyPose39,
	sPidgeyPose40,
	sPidgeyPose13,
	sPidgeyPose43,
	sPidgeyPose44,
	sPidgeyPose16,
	sPidgeyPose47,
	sPidgeyPose48,
	sPidgeyPose19,
	sPidgeyPose51,
	sPidgeyPose52,
	sPidgeyPose22,
	sPidgeyPose55,
	sPidgeyPose56,
	sPidgeyPose27,
	sPidgeyPose28,
	sPidgeyPose31,
	sPidgeyPose32,
	sPidgeyPose35,
	sPidgeyPose36,
	sPidgeyPose119,
	sPidgeyPose120,
	sPidgeyPose43,
	sPidgeyPose44,
	sPidgeyPose123,
	sPidgeyPose124,
	sPidgeyPose51,
	sPidgeyPose52,
	sPidgeyPose55,
	sPidgeyPose56,
	sPidgeyPose129,
	sPidgeyPose130,
	sPidgeyPose131,
	sPidgeyPose132,
	sPidgeyPose133,
	sPidgeyPose134,
	sPidgeyPose135,
	sPidgeyPose136,
	sPidgeyPose137,
	sPidgeyPose138,
	sPidgeyPose1,
	sPidgeyPose2,
	sPidgeyPose3,
	sPidgeyPose4,
	sPidgeyPose5,
	sPidgeyPose6,
	sPidgeyPose7,
	sPidgeyPose8,
	sPidgeyPose9,
	sPidgeyPose10,
	sPidgeyPose11,
	sPidgeyPose12,
	sPidgeyPose13,
	sPidgeyPose14,
	sPidgeyPose15,
	sPidgeyPose16,
	sPidgeyPose17,
	sPidgeyPose18,
	sPidgeyPose19,
	sPidgeyPose20,
	sPidgeyPose21,
	sPidgeyPose22,
	sPidgeyPose23,
	sPidgeyPose24,
	sPidgeyPose26,
	sPidgeyPose54,
	sPidgeyPose50,
	sPidgeyPose46,
	sPidgeyPose42,
	sPidgeyPose38,
	sPidgeyPose34,
	sPidgeyPose30,
	sPidgeyPose28,
	sPidgeyPose32,
	sPidgeyPose36,
	sPidgeyPose40,
	sPidgeyPose44,
	sPidgeyPose48,
	sPidgeyPose52,
	sPidgeyPose56,
	sPidgeyPose3,
	sPidgeyPose27,
	sPidgeyPose28,
	sPidgeyPose182,
	sPidgeyPose31,
	sPidgeyPose32,
	sPidgeyPose185,
	sPidgeyPose35,
	sPidgeyPose36,
	sPidgeyPose188,
	sPidgeyPose39,
	sPidgeyPose40,
	sPidgeyPose191,
	sPidgeyPose43,
	sPidgeyPose44,
	sPidgeyPose194,
	sPidgeyPose47,
	sPidgeyPose48,
	sPidgeyPose197,
	sPidgeyPose51,
	sPidgeyPose52,
	sPidgeyPose200,
	sPidgeyPose55,
	sPidgeyPose56,
	sPidgeyPose28,
	sPidgeyPose56,
	sPidgeyPose52,
	sPidgeyPose48,
	sPidgeyPose44,
	sPidgeyPose40,
	sPidgeyPose36,
	sPidgeyPose32,
	sPidgeyPose1,
	sPidgeyPose22,
	sPidgeyPose19,
	sPidgeyPose16,
	sPidgeyPose13,
	sPidgeyPose10,
	sPidgeyPose7,
	sPidgeyPose4,
};

static const struct PositionSets sAxPositionsPidgey[] = {
	[0] = { .set = { {-1, -3}, {-6, -4}, {4, -4}, {-1, -5} } },
	[1] = { .set = { {-1, -6}, {-6, -7}, {4, -7}, {-1, -8} } },
	[2] = { .set = { {-1, 0}, {-6, -2}, {4, -2}, {-1, -2} } },
	[3] = { .set = { {6, -5}, {3, -6}, {-4, -4}, {1, -6} } },
	[4] = { .set = { {7, -7}, {3, -10}, {-6, -8}, {1, -7} } },
	[5] = { .set = { {7, -3}, {4, -7}, {-5, -4}, {1, -4} } },
	[6] = { .set = { {8, -7}, {-3, -6}, {-5, -3}, {1, -6} } },
	[7] = { .set = { {9, -10}, {-3, -8}, {-5, -5}, {1, -8} } },
	[8] = { .set = { {11, -4}, {-1, -5}, {-3, -2}, {2, -4} } },
	[9] = { .set = { {6, -10}, {-6, -4}, {-1, -2}, {0, -7} } },
	[10] = { .set = { {7, -12}, {-6, -6}, {-1, -4}, {0, -8} } },
	[11] = { .set = { {8, -9}, {-4, -6}, {-1, -1}, {1, -6} } },
	[12] = { .set = { {-1, -9}, {2, -4}, {-4, -4}, {-1, -6} } },
	[13] = { .set = { {-1, -14}, {2, -6}, {-4, -6}, {-1, -8} } },
	[14] = { .set = { {-1, -8}, {3, -3}, {-5, -3}, {-1, -6} } },
	[15] = { .set = { {-7, -10}, {5, -4}, {0, -2}, {-1, -7} } },
	[16] = { .set = { {-8, -12}, {5, -6}, {0, -4}, {-1, -8} } },
	[17] = { .set = { {-9, -9}, {3, -6}, {0, -1}, {-2, -6} } },
	[18] = { .set = { {-9, -7}, {2, -6}, {4, -3}, {-2, -6} } },
	[19] = { .set = { {-10, -10}, {2, -8}, {4, -5}, {-2, -8} } },
	[20] = { .set = { {-12, -4}, {0, -5}, {2, -2}, {-3, -4} } },
	[21] = { .set = { {-7, -5}, {-4, -6}, {3, -4}, {-2, -6} } },
	[22] = { .set = { {-8, -7}, {-4, -10}, {5, -8}, {-2, -7} } },
	[23] = { .set = { {-8, -3}, {-5, -7}, {4, -4}, {-2, -4} } },
	[24] = { .set = { {-1, -3}, {-6, -4}, {4, -4}, {-1, -5} } },
	[25] = { .set = { {-1, 0}, {-11, -7}, {9, -7}, {-1, -5} } },
	[26] = { .set = { {-1, -6}, {-8, -2}, {6, -2}, {-1, -7} } },
	[27] = { .set = { {-1, -6}, {-9, -15}, {7, -15}, {-1, -7} } },
	[28] = { .set = { {6, -5}, {3, -6}, {-4, -4}, {1, -6} } },
	[29] = { .set = { {7, -3}, {9, -12}, {-7, -3}, {0, -8} } },
	[30] = { .set = { {4, -7}, {8, -4}, {-2, -2}, {-1, -7} } },
	[31] = { .set = { {4, -7}, {6, -16}, {-9, -11}, {-1, -7} } },
	[32] = { .set = { {8, -7}, {-3, -6}, {-5, -3}, {1, -6} } },
	[33] = { .set = { {9, -6}, {0, -14}, {0, -1}, {0, -8} } },
	[34] = { .set = { {5, -9}, {4, -7}, {4, -4}, {0, -8} } },
	[35] = { .set = { {7, -10}, {-4, -17}, {-6, -10}, {-2, -9} } },
	[36] = { .set = { {6, -10}, {-6, -4}, {-1, -2}, {0, -7} } },
	[37] = { .set = { {6, -13}, {-8, -11}, {7, -4}, {-1, -9} } },
	[38] = { .set = { {4, -14}, {-6, -7}, {6, -5}, {-1, -9} } },
	[39] = { .set = { {3, -14}, {-7, -14}, {5, -11}, {-2, -8} } },
	[40] = { .set = { {-1, -9}, {2, -4}, {-4, -4}, {-1, -6} } },
	[41] = { .set = { {-1, -11}, {7, -8}, {-10, -8}, {-1, -8} } },
	[42] = { .set = { {-1, -13}, {6, -5}, {-8, -5}, {-1, -9} } },
	[43] = { .set = { {-1, -14}, {7, -12}, {-9, -12}, {-1, -8} } },
	[44] = { .set = { {-7, -10}, {5, -4}, {0, -2}, {-1, -7} } },
	[45] = { .set = { {-7, -13}, {7, -11}, {-8, -4}, {0, -9} } },
	[46] = { .set = { {-5, -14}, {5, -7}, {-7, -5}, {0, -9} } },
	[47] = { .set = { {-4, -14}, {6, -14}, {-6, -11}, {1, -8} } },
	[48] = { .set = { {-9, -7}, {2, -6}, {4, -3}, {-2, -6} } },
	[49] = { .set = { {-10, -6}, {-1, -14}, {-1, -1}, {-1, -8} } },
	[50] = { .set = { {-6, -9}, {-5, -7}, {-5, -4}, {-1, -8} } },
	[51] = { .set = { {-8, -10}, {3, -17}, {5, -10}, {1, -9} } },
	[52] = { .set = { {-7, -5}, {-4, -6}, {3, -4}, {-2, -6} } },
	[53] = { .set = { {-8, -3}, {-10, -12}, {6, -3}, {-1, -8} } },
	[54] = { .set = { {-5, -7}, {-9, -4}, {1, -2}, {0, -7} } },
	[55] = { .set = { {-5, -7}, {-7, -16}, {8, -11}, {0, -7} } },
	[56] = { .set = { {-1, -3}, {-6, -4}, {4, -4}, {-1, -5} } },
	[57] = { .set = { {-1, 0}, {-11, -7}, {9, -7}, {-1, -5} } },
	[58] = { .set = { {-1, -6}, {-8, -2}, {6, -2}, {-1, -7} } },
	[59] = { .set = { {-1, -6}, {-9, -15}, {7, -15}, {-1, -7} } },
	[60] = { .set = { {6, -5}, {3, -6}, {-4, -4}, {1, -6} } },
	[61] = { .set = { {7, -3}, {9, -12}, {-7, -3}, {0, -8} } },
	[62] = { .set = { {4, -7}, {8, -4}, {-2, -2}, {-1, -7} } },
	[63] = { .set = { {4, -7}, {6, -16}, {-9, -11}, {-1, -7} } },
	[64] = { .set = { {8, -7}, {-3, -6}, {-5, -3}, {1, -6} } },
	[65] = { .set = { {9, -6}, {0, -14}, {0, -1}, {0, -8} } },
	[66] = { .set = { {5, -9}, {4, -7}, {4, -4}, {0, -8} } },
	[67] = { .set = { {7, -10}, {-4, -17}, {-6, -10}, {-2, -9} } },
	[68] = { .set = { {6, -10}, {-6, -4}, {-1, -2}, {0, -7} } },
	[69] = { .set = { {6, -13}, {-8, -11}, {7, -4}, {-1, -9} } },
	[70] = { .set = { {4, -14}, {-6, -7}, {6, -5}, {-1, -9} } },
	[71] = { .set = { {3, -14}, {-7, -14}, {5, -11}, {-2, -8} } },
	[72] = { .set = { {-1, -9}, {2, -4}, {-4, -4}, {-1, -6} } },
	[73] = { .set = { {-1, -11}, {7, -8}, {-10, -8}, {-1, -8} } },
	[74] = { .set = { {-1, -13}, {6, -5}, {-8, -5}, {-1, -9} } },
	[75] = { .set = { {-1, -14}, {7, -12}, {-9, -12}, {-1, -8} } },
	[76] = { .set = { {-7, -10}, {5, -4}, {0, -2}, {-1, -7} } },
	[77] = { .set = { {-7, -13}, {7, -11}, {-8, -4}, {0, -9} } },
	[78] = { .set = { {-5, -14}, {5, -7}, {-7, -5}, {0, -9} } },
	[79] = { .set = { {-4, -14}, {6, -14}, {-6, -11}, {1, -8} } },
	[80] = { .set = { {-9, -7}, {2, -6}, {4, -3}, {-2, -6} } },
	[81] = { .set = { {-10, -6}, {-1, -14}, {-1, -1}, {-1, -8} } },
	[82] = { .set = { {-6, -9}, {-5, -7}, {-5, -4}, {-1, -8} } },
	[83] = { .set = { {-8, -10}, {3, -17}, {5, -10}, {1, -9} } },
	[84] = { .set = { {-7, -5}, {-4, -6}, {3, -4}, {-2, -6} } },
	[85] = { .set = { {-8, -3}, {-10, -12}, {6, -3}, {-1, -8} } },
	[86] = { .set = { {-5, -7}, {-9, -4}, {1, -2}, {0, -7} } },
	[87] = { .set = { {-5, -7}, {-7, -16}, {8, -11}, {0, -7} } },
	[88] = { .set = { {-1, -3}, {-6, -4}, {4, -4}, {-1, -5} } },
	[89] = { .set = { {-1, -6}, {-8, -2}, {6, -2}, {-1, -7} } },
	[90] = { .set = { {-1, -6}, {-9, -15}, {7, -15}, {-1, -7} } },
	[91] = { .set = { {6, -5}, {3, -6}, {-4, -4}, {1, -6} } },
	[92] = { .set = { {4, -7}, {8, -4}, {-2, -2}, {-1, -7} } },
	[93] = { .set = { {4, -7}, {6, -16}, {-9, -11}, {-1, -7} } },
	[94] = { .set = { {8, -7}, {-3, -6}, {-5, -3}, {1, -6} } },
	[95] = { .set = { {5, -9}, {4, -7}, {4, -4}, {0, -8} } },
	[96] = { .set = { {7, -10}, {-4, -17}, {-6, -10}, {-2, -9} } },
	[97] = { .set = { {6, -10}, {-6, -4}, {-1, -2}, {0, -7} } },
	[98] = { .set = { {4, -14}, {-6, -7}, {6, -5}, {-1, -9} } },
	[99] = { .set = { {3, -14}, {-7, -14}, {5, -11}, {-2, -8} } },
	[100] = { .set = { {-1, -9}, {2, -4}, {-4, -4}, {-1, -6} } },
	[101] = { .set = { {-1, -13}, {6, -5}, {-8, -5}, {-1, -9} } },
	[102] = { .set = { {-1, -14}, {7, -12}, {-9, -12}, {-1, -8} } },
	[103] = { .set = { {-7, -10}, {5, -4}, {0, -2}, {-1, -7} } },
	[104] = { .set = { {-5, -14}, {5, -7}, {-7, -5}, {0, -9} } },
	[105] = { .set = { {-4, -14}, {6, -14}, {-6, -11}, {1, -8} } },
	[106] = { .set = { {-9, -7}, {2, -6}, {4, -3}, {-2, -6} } },
	[107] = { .set = { {-6, -9}, {-5, -7}, {-5, -4}, {-1, -8} } },
	[108] = { .set = { {-8, -10}, {3, -17}, {5, -10}, {1, -9} } },
	[109] = { .set = { {-7, -5}, {-4, -6}, {3, -4}, {-2, -6} } },
	[110] = { .set = { {-5, -7}, {-9, -4}, {1, -2}, {0, -7} } },
	[111] = { .set = { {-5, -7}, {-7, -16}, {8, -11}, {0, -7} } },
	[112] = { .set = { {-1, -6}, {-8, -2}, {6, -2}, {-1, -7} } },
	[113] = { .set = { {-1, -6}, {-9, -15}, {7, -15}, {-1, -7} } },
	[114] = { .set = { {4, -7}, {8, -4}, {-2, -2}, {-1, -7} } },
	[115] = { .set = { {4, -7}, {6, -16}, {-9, -11}, {-1, -7} } },
	[116] = { .set = { {5, -9}, {4, -7}, {4, -4}, {0, -8} } },
	[117] = { .set = { {7, -10}, {-4, -17}, {-6, -10}, {-2, -9} } },
	[118] = { .set = { {5, -14}, {-5, -7}, {7, -5}, {0, -9} } },
	[119] = { .set = { {4, -14}, {-6, -14}, {6, -11}, {-1, -8} } },
	[120] = { .set = { {-1, -13}, {6, -5}, {-8, -5}, {-1, -9} } },
	[121] = { .set = { {-1, -14}, {7, -12}, {-9, -12}, {-1, -8} } },
	[122] = { .set = { {-6, -14}, {4, -7}, {-8, -5}, {-1, -9} } },
	[123] = { .set = { {-5, -14}, {5, -14}, {-7, -11}, {0, -8} } },
	[124] = { .set = { {-6, -9}, {-5, -7}, {-5, -4}, {-1, -8} } },
	[125] = { .set = { {-8, -10}, {3, -17}, {5, -10}, {1, -9} } },
	[126] = { .set = { {-5, -7}, {-9, -4}, {1, -2}, {0, -7} } },
	[127] = { .set = { {-5, -7}, {-7, -16}, {8, -11}, {0, -7} } },
	[128] = { .set = { {-8, -3}, {-3, -6}, {3, -4}, {0, -5} } },
	[129] = { .set = { {-8, -1}, {-3, -5}, {3, -3}, {0, -4} } },
	[130] = { .set = { {0, 2}, {-7, -9}, {7, -9}, {0, -5} } },
	[131] = { .set = { {5, 1}, {6, -11}, {-8, -9}, {-1, -6} } },
	[132] = { .set = { {8, -3}, {-3, -11}, {-6, -9}, {-1, -6} } },
	[133] = { .set = { {6, -7}, {-8, -8}, {-1, -3}, {-1, -4} } },
	[134] = { .set = { {0, -4}, {7, -6}, {-7, -6}, {0, -5} } },
	[135] = { .set = { {-7, -7}, {7, -8}, {0, -3}, {0, -4} } },
	[136] = { .set = { {-9, -3}, {2, -11}, {5, -9}, {0, -6} } },
	[137] = { .set = { {-6, 1}, {-7, -11}, {7, -9}, {0, -6} } },
	[138] = { .set = { {-1, -3}, {-6, -4}, {4, -4}, {-1, -5} } },
	[139] = { .set = { {-1, -6}, {-6, -7}, {4, -7}, {-1, -8} } },
	[140] = { .set = { {-1, 0}, {-6, -2}, {4, -2}, {-1, -2} } },
	[141] = { .set = { {6, -5}, {3, -6}, {-4, -4}, {1, -6} } },
	[142] = { .set = { {7, -7}, {3, -10}, {-6, -8}, {1, -7} } },
	[143] = { .set = { {7, -3}, {4, -7}, {-5, -4}, {1, -4} } },
	[144] = { .set = { {8, -7}, {-3, -6}, {-5, -3}, {1, -6} } },
	[145] = { .set = { {9, -10}, {-3, -8}, {-5, -5}, {1, -8} } },
	[146] = { .set = { {11, -4}, {-1, -5}, {-3, -2}, {2, -4} } },
	[147] = { .set = { {6, -10}, {-6, -4}, {-1, -2}, {0, -7} } },
	[148] = { .set = { {7, -12}, {-6, -6}, {-1, -4}, {0, -8} } },
	[149] = { .set = { {8, -9}, {-4, -6}, {-1, -1}, {1, -6} } },
	[150] = { .set = { {-1, -9}, {2, -4}, {-4, -4}, {-1, -6} } },
	[151] = { .set = { {-1, -14}, {2, -6}, {-4, -6}, {-1, -8} } },
	[152] = { .set = { {-1, -8}, {3, -3}, {-5, -3}, {-1, -6} } },
	[153] = { .set = { {-7, -10}, {5, -4}, {0, -2}, {-1, -7} } },
	[154] = { .set = { {-8, -12}, {5, -6}, {0, -4}, {-1, -8} } },
	[155] = { .set = { {-9, -9}, {3, -6}, {0, -1}, {-2, -6} } },
	[156] = { .set = { {-9, -7}, {2, -6}, {4, -3}, {-2, -6} } },
	[157] = { .set = { {-10, -10}, {2, -8}, {4, -5}, {-2, -8} } },
	[158] = { .set = { {-12, -4}, {0, -5}, {2, -2}, {-3, -4} } },
	[159] = { .set = { {-7, -5}, {-4, -6}, {3, -4}, {-2, -6} } },
	[160] = { .set = { {-8, -7}, {-4, -10}, {5, -8}, {-2, -7} } },
	[161] = { .set = { {-8, -3}, {-5, -7}, {4, -4}, {-2, -4} } },
	[162] = { .set = { {-1, 0}, {-11, -7}, {9, -7}, {-1, -5} } },
	[163] = { .set = { {-8, -3}, {-10, -12}, {6, -3}, {-1, -8} } },
	[164] = { .set = { {-10, -6}, {-1, -14}, {-1, -1}, {-1, -8} } },
	[165] = { .set = { {-7, -13}, {7, -11}, {-8, -4}, {0, -9} } },
	[166] = { .set = { {-1, -11}, {7, -8}, {-10, -8}, {-1, -8} } },
	[167] = { .set = { {6, -13}, {-8, -11}, {7, -4}, {-1, -9} } },
	[168] = { .set = { {9, -6}, {0, -14}, {0, -1}, {0, -8} } },
	[169] = { .set = { {7, -3}, {9, -12}, {-7, -3}, {0, -8} } },
	[170] = { .set = { {-1, -6}, {-9, -15}, {7, -15}, {-1, -7} } },
	[171] = { .set = { {4, -7}, {6, -16}, {-9, -11}, {-1, -7} } },
	[172] = { .set = { {7, -10}, {-4, -17}, {-6, -10}, {-2, -9} } },
	[173] = { .set = { {3, -14}, {-7, -14}, {5, -11}, {-2, -8} } },
	[174] = { .set = { {-1, -14}, {7, -12}, {-9, -12}, {-1, -8} } },
	[175] = { .set = { {-4, -14}, {6, -14}, {-6, -11}, {1, -8} } },
	[176] = { .set = { {-8, -10}, {3, -17}, {5, -10}, {1, -9} } },
	[177] = { .set = { {-5, -7}, {-7, -16}, {8, -11}, {0, -7} } },
	[178] = { .set = { {-1, 0}, {-6, -2}, {4, -2}, {-1, -2} } },
	[179] = { .set = { {-1, -6}, {-8, -2}, {6, -2}, {-1, -7} } },
	[180] = { .set = { {-1, -6}, {-9, -15}, {7, -15}, {-1, -7} } },
	[181] = { .set = { {7, -4}, {4, -8}, {-5, -5}, {1, -5} } },
	[182] = { .set = { {4, -7}, {8, -4}, {-2, -2}, {-1, -7} } },
	[183] = { .set = { {4, -7}, {6, -16}, {-9, -11}, {-1, -7} } },
	[184] = { .set = { {9, -4}, {-3, -5}, {-5, -2}, {0, -4} } },
	[185] = { .set = { {5, -9}, {4, -7}, {4, -4}, {0, -8} } },
	[186] = { .set = { {7, -10}, {-4, -17}, {-6, -10}, {-2, -9} } },
	[187] = { .set = { {7, -9}, {-5, -6}, {-2, -1}, {0, -6} } },
	[188] = { .set = { {4, -14}, {-6, -7}, {6, -5}, {-1, -9} } },
	[189] = { .set = { {3, -14}, {-7, -14}, {5, -11}, {-2, -8} } },
	[190] = { .set = { {-1, -7}, {3, -2}, {-5, -2}, {-1, -5} } },
	[191] = { .set = { {-1, -13}, {6, -5}, {-8, -5}, {-1, -9} } },
	[192] = { .set = { {-1, -14}, {7, -12}, {-9, -12}, {-1, -8} } },
	[193] = { .set = { {-8, -9}, {4, -6}, {1, -1}, {-1, -6} } },
	[194] = { .set = { {-5, -14}, {5, -7}, {-7, -5}, {0, -9} } },
	[195] = { .set = { {-4, -14}, {6, -14}, {-6, -11}, {1, -8} } },
	[196] = { .set = { {-10, -4}, {2, -5}, {4, -2}, {-1, -4} } },
	[197] = { .set = { {-6, -9}, {-5, -7}, {-5, -4}, {-1, -8} } },
	[198] = { .set = { {-8, -10}, {3, -17}, {5, -10}, {1, -9} } },
	[199] = { .set = { {-8, -4}, {-5, -8}, {4, -5}, {-2, -5} } },
	[200] = { .set = { {-5, -7}, {-9, -4}, {1, -2}, {0, -7} } },
	[201] = { .set = { {-5, -7}, {-7, -16}, {8, -11}, {0, -7} } },
	[202] = { .set = { {-1, -6}, {-9, -15}, {7, -15}, {-1, -7} } },
	[203] = { .set = { {-5, -7}, {-7, -16}, {8, -11}, {0, -7} } },
	[204] = { .set = { {-8, -10}, {3, -17}, {5, -10}, {1, -9} } },
	[205] = { .set = { {-4, -14}, {6, -14}, {-6, -11}, {1, -8} } },
	[206] = { .set = { {-1, -14}, {7, -12}, {-9, -12}, {-1, -8} } },
	[207] = { .set = { {3, -14}, {-7, -14}, {5, -11}, {-2, -8} } },
	[208] = { .set = { {7, -10}, {-4, -17}, {-6, -10}, {-2, -9} } },
	[209] = { .set = { {4, -7}, {6, -16}, {-9, -11}, {-1, -7} } },
	[210] = { .set = { {-1, -3}, {-6, -4}, {4, -4}, {-1, -5} } },
	[211] = { .set = { {-7, -5}, {-4, -6}, {3, -4}, {-2, -6} } },
	[212] = { .set = { {-9, -7}, {2, -6}, {4, -3}, {-2, -6} } },
	[213] = { .set = { {-7, -10}, {5, -4}, {0, -2}, {-1, -7} } },
	[214] = { .set = { {-1, -9}, {2, -4}, {-4, -4}, {-1, -6} } },
	[215] = { .set = { {6, -10}, {-6, -4}, {-1, -2}, {0, -7} } },
	[216] = { .set = { {8, -7}, {-3, -6}, {-5, -3}, {1, -6} } },
	[217] = { .set = { {6, -5}, {3, -6}, {-4, -4}, {1, -6} } },
};

static const ax_anim *const sPidgeyAnimTable1[] = {
	gAxSharedAnim_02473,
	gAxSharedAnim_02539,
	gAxSharedAnim_02547,
	gAxSharedAnim_02556,
	gAxSharedAnim_02496,
	gAxSharedAnim_02516,
	gAxSharedAnim_02523,
	gAxSharedAnim_02532,
};

static const ax_anim *const sPidgeyAnimTable2[] = {
	gAxSharedAnim_01687,
	gAxSharedAnim_01822,
	gAxSharedAnim_01868,
	gAxSharedAnim_01899,
	gAxSharedAnim_01927,
	gAxSharedAnim_01954,
	gAxSharedAnim_01982,
	gAxSharedAnim_01995,
};

static const ax_anim *const sPidgeyAnimTable3[] = {
	gAxSharedAnim_02015,
	gAxSharedAnim_02036,
	gAxSharedAnim_02057,
	gAxSharedAnim_02076,
	gAxSharedAnim_02102,
	gAxSharedAnim_02129,
	gAxSharedAnim_02163,
	gAxSharedAnim_02198,
};

static const ax_anim *const sPidgeyAnimTable4[] = {
	gAxSharedAnim_02354,
	gAxSharedAnim_02355,
	gAxSharedAnim_02356,
	gAxSharedAnim_02358,
	gAxSharedAnim_02329,
	gAxSharedAnim_02331,
	gAxSharedAnim_02334,
	gAxSharedAnim_02336,
};

static const ax_anim *const sPidgeyAnimTable5[] = {
	gAxSharedAnim_00247,
	gAxSharedAnim_00268,
	gAxSharedAnim_00283,
	gAxSharedAnim_00299,
	gAxSharedAnim_00319,
	gAxSharedAnim_00333,
	gAxSharedAnim_00352,
	gAxSharedAnim_00364,
};

static const ax_anim *const sPidgeyAnimTable6[] = {
	gAxSharedAnim_02407,
	gAxSharedAnim_02407,
	gAxSharedAnim_02407,
	gAxSharedAnim_02407,
	gAxSharedAnim_02407,
	gAxSharedAnim_02407,
	gAxSharedAnim_02407,
	gAxSharedAnim_02407,
};

static const ax_anim *const sPidgeyAnimTable7[] = {
	gAxSharedAnim_00397,
	gAxSharedAnim_00403,
	gAxSharedAnim_00414,
	gAxSharedAnim_00423,
	gAxSharedAnim_00435,
	gAxSharedAnim_00443,
	gAxSharedAnim_00453,
	gAxSharedAnim_00463,
};

static const ax_anim *const sPidgeyAnimTable8[] = {
	sPidgeyAnims_8_1,
	sPidgeyAnims_8_2,
	sPidgeyAnims_8_3,
	sPidgeyAnims_8_4,
	sPidgeyAnims_8_5,
	sPidgeyAnims_8_6,
	sPidgeyAnims_8_7,
	sPidgeyAnims_8_8,
};

static const ax_anim *const sPidgeyAnimTable9[] = {
	sPidgeyAnims_9_1,
	sPidgeyAnims_9_2,
	sPidgeyAnims_9_3,
	sPidgeyAnims_9_4,
	sPidgeyAnims_9_5,
	sPidgeyAnims_9_6,
	sPidgeyAnims_9_7,
	sPidgeyAnims_9_8,
};

static const ax_anim *const sPidgeyAnimTable10[] = {
	gAxSharedAnim_00801,
	gAxSharedAnim_00813,
	gAxSharedAnim_00827,
	gAxSharedAnim_00838,
	gAxSharedAnim_00849,
	gAxSharedAnim_00862,
	gAxSharedAnim_00879,
	gAxSharedAnim_00889,
};

static const ax_anim *const sPidgeyAnimTable11[] = {
	gAxSharedAnim_00900,
	gAxSharedAnim_00941,
	gAxSharedAnim_00976,
	gAxSharedAnim_01026,
	gAxSharedAnim_01076,
	gAxSharedAnim_01122,
	gAxSharedAnim_01166,
	gAxSharedAnim_01198,
};

static const ax_anim *const sPidgeyAnimTable12[] = {
	gAxSharedAnim_01243,
	gAxSharedAnim_01327,
	gAxSharedAnim_01308,
	gAxSharedAnim_01292,
	gAxSharedAnim_01291,
	gAxSharedAnim_01280,
	gAxSharedAnim_01260,
	gAxSharedAnim_01244,
};

static const ax_anim *const sPidgeyAnimTable13[] = {
	gAxSharedAnim_01335,
	gAxSharedAnim_01409,
	gAxSharedAnim_01397,
	gAxSharedAnim_01386,
	gAxSharedAnim_01374,
	gAxSharedAnim_01366,
	gAxSharedAnim_01358,
	gAxSharedAnim_01348,
};

static const ax_anim *const *const sAxAnimationsPidgey[] = {
	sPidgeyAnimTable1,
	sPidgeyAnimTable2,
	sPidgeyAnimTable3,
	sPidgeyAnimTable4,
	sPidgeyAnimTable5,
	sPidgeyAnimTable6,
	sPidgeyAnimTable7,
	sPidgeyAnimTable8,
	sPidgeyAnimTable9,
	sPidgeyAnimTable10,
	sPidgeyAnimTable11,
	sPidgeyAnimTable12,
	sPidgeyAnimTable13,
};

static const ax_sprite *const sAxSpritesPidgey[] = {
	sPidgeySprites1,
	sPidgeySprites2,
	sPidgeySprites3,
	sPidgeySprites4,
	sPidgeySprites5,
	sPidgeySprites6,
	sPidgeySprites7,
	sPidgeySprites8,
	sPidgeySprites9,
	sPidgeySprites10,
	sPidgeySprites11,
	sPidgeySprites12,
	sPidgeySprites13,
	sPidgeySprites14,
	sPidgeySprites15,
	sPidgeySprites16,
	sPidgeySprites17,
	sPidgeySprites18,
	sPidgeySprites19,
	sPidgeySprites20,
	sPidgeySprites21,
	sPidgeySprites22,
	sPidgeySprites23,
	sPidgeySprites24,
	sPidgeySprites25,
	sPidgeySprites26,
	sPidgeySprites27,
	sPidgeySprites28,
	sPidgeySprites29,
	sPidgeySprites30,
	sPidgeySprites31,
	sPidgeySprites32,
	sPidgeySprites33,
	sPidgeySprites34,
	sPidgeySprites35,
	sPidgeySprites36,
	sPidgeySprites37,
};

static const axmain sAxMainPidgey = {
	.poses = sAxPosesPidgey,
	.animations = sAxAnimationsPidgey,
	.animCount = ARRAY_COUNT(sAxAnimationsPidgey),
	.spriteData = sAxSpritesPidgey,
	.positions = sAxPositionsPidgey,
};
