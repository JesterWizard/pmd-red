/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainWailord;
const SiroArchive gAxWailord = {"SIRO", &sAxMainWailord};

static const ax_pose sWailordPose1[] = {
	AX_POSE(0, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose2[] = {
	AX_POSE(1, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose3[] = {
	AX_POSE(2, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose4[] = {
	AX_POSE(3, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(220, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose5[] = {
	AX_POSE(4, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(220, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose6[] = {
	AX_POSE(5, OAM1(206, ST_OAM_SQUARE     , 1), OAM2(220, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose7[] = {
	AX_POSE(6, OAM1(216, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose8[] = {
	AX_POSE(7, OAM1(212, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose9[] = {
	AX_POSE(8, OAM1(216, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose10[] = {
	AX_POSE(9, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(221, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose11[] = {
	AX_POSE(10, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(221, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose12[] = {
	AX_POSE(11, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(221, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose13[] = {
	AX_POSE(12, OAM1(203, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose14[] = {
	AX_POSE(13, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose15[] = {
	AX_POSE(14, OAM1(204, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose16[] = {
	AX_POSE(9, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(227, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose17[] = {
	AX_POSE(10, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(227, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose18[] = {
	AX_POSE(11, OAM1(208, ST_OAM_SQUARE     , 1), OAM2(227, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose19[] = {
	AX_POSE(6, OAM1(216, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose20[] = {
	AX_POSE(7, OAM1(212, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose21[] = {
	AX_POSE(8, OAM1(216, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose22[] = {
	AX_POSE(3, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose23[] = {
	AX_POSE(4, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose24[] = {
	AX_POSE(5, OAM1(206, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose28[] = {
	AX_POSE(15, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose32[] = {
	AX_POSE(16, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(220, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose36[] = {
	AX_POSE(17, OAM1(214, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose40[] = {
	AX_POSE(18, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(221, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose44[] = {
	AX_POSE(19, OAM1(203, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose48[] = {
	AX_POSE(18, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(227, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose52[] = {
	AX_POSE(17, OAM1(214, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose56[] = {
	AX_POSE(16, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose91[] = {
	AX_POSE(20, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose94[] = {
	AX_POSE(21, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(220, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose97[] = {
	AX_POSE(22, OAM1(214, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose100[] = {
	AX_POSE(23, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(221, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose103[] = {
	AX_POSE(24, OAM1(205, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose106[] = {
	AX_POSE(23, OAM1(207, ST_OAM_SQUARE     , 1), OAM2(227, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose109[] = {
	AX_POSE(22, OAM1(214, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose112[] = {
	AX_POSE(21, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose137[] = {
	AX_POSE(24, OAM1(203, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose153[] = {
	AX_POSE(25, OAM1(213, ST_OAM_H_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(26, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(27, OAM1(245, ST_OAM_H_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(36, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose154[] = {
	AX_POSE(28, OAM1(214, ST_OAM_H_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(29, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(226, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(32, 3, 5)),
	AX_POSE(30, OAM1(246, ST_OAM_H_RECTANGLE, 1), OAM2(2, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(36, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose155[] = {
	AX_POSE(31, OAM1(197, ST_OAM_SQUARE     , 1), OAM2(224, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose156[] = {
	AX_POSE(32, OAM1(193, ST_OAM_SQUARE     , 1), OAM2(222, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose157[] = {
	AX_POSE(33, OAM1(193, ST_OAM_SQUARE     , 1), OAM2(212, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose158[] = {
	AX_POSE(34, OAM1(197, ST_OAM_SQUARE     , 1), OAM2(219, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose159[] = {
	AX_POSE(35, OAM1(202, ST_OAM_SQUARE     , 1), OAM2(227, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose160[] = {
	AX_POSE(34, OAM1(197, ST_OAM_SQUARE     , 1), OAM2(229, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose161[] = {
	AX_POSE(33, OAM1(195, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose162[] = {
	AX_POSE(32, OAM1(193, ST_OAM_SQUARE     , 1), OAM2(226, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose188[] = {
	AX_POSE(3, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose189[] = {
	AX_POSE(6, OAM1(216, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose190[] = {
	AX_POSE(9, OAM1(210, ST_OAM_SQUARE     , 1), OAM2(228, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose191[] = {
	AX_POSE(12, OAM1(205, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose192[] = {
	AX_POSE(9, OAM1(210, ST_OAM_SQUARE     , 1), OAM2(220, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose193[] = {
	AX_POSE(6, OAM1(216, ST_OAM_SQUARE     , 1), OAM2(220, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose194[] = {
	AX_POSE(3, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(217, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose196[] = {
	AX_POSE(21, OAM1(199, ST_OAM_SQUARE     , 1), OAM2(217, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose197[] = {
	AX_POSE(22, OAM1(214, ST_OAM_SQUARE     , 1), OAM2(219, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose198[] = {
	AX_POSE(23, OAM1(209, ST_OAM_SQUARE     , 1), OAM2(219, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose199[] = {
	AX_POSE(24, OAM1(203, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose200[] = {
	AX_POSE(23, OAM1(209, ST_OAM_SQUARE     , 1), OAM2(229, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose201[] = {
	AX_POSE(22, OAM1(214, ST_OAM_SQUARE     , 1), OAM2(229, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose202[] = {
	AX_POSE(21, OAM1(199, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose228[] = {
	AX_POSE(16, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose230[] = {
	AX_POSE(18, OAM1(209, ST_OAM_SQUARE     , 1), OAM2(227, ST_OAM_SIZE_3, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose232[] = {
	AX_POSE(18, OAM1(209, ST_OAM_SQUARE     , 1), OAM2(221, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sWailordPose234[] = {
	AX_POSE(16, OAM1(200, ST_OAM_SQUARE     , 1), OAM2(217, ST_OAM_SIZE_3, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sWailordAnims_1_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 2, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_1_2[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 5, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_1_3[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 8, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_1_4[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 11, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_1_5[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 14, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_1_6[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 17, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 17, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 17, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_1_7[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 20, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 20, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 20, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_1_8[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 23, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 23, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 23, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 28, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {3, -1}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 29, .offset = {7, 2}, .shadow = {7, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {12, 10}, .shadow = {12, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {15, 21}, .shadow = {15, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {16, 20}, .shadow = {16, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {15, 21}, .shadow = {15, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {16, 20}, .shadow = {16, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {6, 9}, .shadow = {6, 9} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 32, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {1, -3}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 33, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {10, -4}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {14, 4}, .shadow = {14, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {14, 5}, .shadow = {14, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {14, 4}, .shadow = {14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {14, 5}, .shadow = {14, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {1, -4}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 37, .offset = {4, -7}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {10, -8}, .shadow = {10, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {14, -8}, .shadow = {15, -13} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {15, -7}, .shadow = {16, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {14, -8}, .shadow = {15, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {15, -7}, .shadow = {16, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 40, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 41, .offset = {0, -7}, .shadow = {0, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -10}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -11}, .shadow = {0, -15} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {1, -11}, .shadow = {1, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -11}, .shadow = {0, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {1, -11}, .shadow = {1, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-1, -4}, .shadow = {-1, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 45, .offset = {-4, -7}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-10, -8}, .shadow = {-10, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-14, -8}, .shadow = {-15, -13} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-15, -7}, .shadow = {-16, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-14, -8}, .shadow = {-15, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-15, -7}, .shadow = {-16, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {-1, -3}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 49, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-10, -4}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-14, 4}, .shadow = {-14, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {-14, 5}, .shadow = {-14, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-14, 4}, .shadow = {-14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-14, 5}, .shadow = {-14, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 52, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {-3, -1}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 53, .offset = {-7, 2}, .shadow = {-7, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-12, 10}, .shadow = {-12, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-15, 21}, .shadow = {-15, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {-16, 20}, .shadow = {-16, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-15, 21}, .shadow = {-15, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-16, 20}, .shadow = {-16, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-6, 9}, .shadow = {-6, 9} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {3, -1}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 61, .offset = {7, 2}, .shadow = {7, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {12, 10}, .shadow = {12, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {15, 21}, .shadow = {15, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {16, 20}, .shadow = {16, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {15, 21}, .shadow = {15, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {16, 20}, .shadow = {16, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {6, 9}, .shadow = {6, 9} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {1, -3}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 65, .offset = {6, -4}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {10, -4}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {14, 4}, .shadow = {14, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {14, 5}, .shadow = {14, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {14, 4}, .shadow = {14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {14, 5}, .shadow = {14, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 68, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {1, -4}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 69, .offset = {4, -7}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {10, -8}, .shadow = {10, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {14, -8}, .shadow = {15, -13} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {15, -7}, .shadow = {16, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {14, -8}, .shadow = {15, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {15, -7}, .shadow = {16, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 72, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 73, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 73, .offset = {0, -7}, .shadow = {0, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -10}, .shadow = {0, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -11}, .shadow = {0, -15} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {1, -11}, .shadow = {1, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -11}, .shadow = {0, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, -11}, .shadow = {1, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 76, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {-1, -4}, .shadow = {-1, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 77, .offset = {-4, -7}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-10, -8}, .shadow = {-10, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-14, -8}, .shadow = {-15, -13} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {-15, -7}, .shadow = {-16, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-14, -8}, .shadow = {-15, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-15, -7}, .shadow = {-16, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 80, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {-1, -3}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 81, .offset = {-6, -4}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-10, -4}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-14, 4}, .shadow = {-14, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {-14, 5}, .shadow = {-14, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-14, 4}, .shadow = {-14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-14, 5}, .shadow = {-14, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {-3, -1}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 85, .offset = {-7, 2}, .shadow = {-7, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-12, 10}, .shadow = {-12, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-15, 21}, .shadow = {-15, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {-16, 20}, .shadow = {-16, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-15, 21}, .shadow = {-15, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-16, 20}, .shadow = {-16, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-6, 9}, .shadow = {-6, 9} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 89, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 4, .unkFlags = 0, .poseId = 89, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 4, .unkFlags = 2, .poseId = 89, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 1, .poseId = 90, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 92, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 4, .unkFlags = 2, .poseId = 92, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 93, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 95, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 95, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 96, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 98, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 4, .unkFlags = 2, .poseId = 98, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 101, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 4, .unkFlags = 0, .poseId = 101, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 4, .unkFlags = 2, .poseId = 101, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 102, .offset = {1, -4}, .shadow = {1, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {1, -4}, .shadow = {1, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {1, -4}, .shadow = {1, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 104, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 4, .unkFlags = 2, .poseId = 104, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 105, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 107, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 107, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 108, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 110, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 4, .unkFlags = 2, .poseId = 110, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_5_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 115, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 115, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 116, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 116, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_5_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 120, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 120, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 120, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 121, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {1, -6}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {1, -6}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {1, -6}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 121, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {1, -6}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_5_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 125, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 125, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 125, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 126, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 126, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_5_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 130, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 130, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 130, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 131, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {-1, -6}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {-1, -6}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {-1, -6}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 131, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {-1, -6}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_5_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 135, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 135, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 136, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 136, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {1, -5}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_5_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 141, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {1, -6}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {1, -6}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {1, -6}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 141, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {1, -6}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_5_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 145, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 146, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 146, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_5_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 150, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 150, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 150, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 151, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-1, -6}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-1, -6}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-1, -6}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 151, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-1, -6}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_8_1[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 163, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 163, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 24, .unkFlags = 0, .poseId = 163, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 162, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 162, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_8_2[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 166, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 166, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 24, .unkFlags = 0, .poseId = 166, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 165, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 165, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_8_3[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 169, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 169, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 24, .unkFlags = 0, .poseId = 169, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 168, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 168, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_8_4[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 172, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 172, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 24, .unkFlags = 0, .poseId = 172, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 171, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 171, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_8_5[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 175, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 175, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 24, .unkFlags = 0, .poseId = 175, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 174, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 174, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_8_6[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 178, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 178, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 24, .unkFlags = 0, .poseId = 178, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 177, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 177, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_8_7[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 181, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 181, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 24, .unkFlags = 0, .poseId = 181, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 180, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 180, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_8_8[] = {
	{ .frames = 24, .unkFlags = 0, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 184, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 184, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 24, .unkFlags = 0, .poseId = 184, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 183, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 183, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {5, 15}, .shadow = {5, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, 15}, .shadow = {0, 15} },
	{ .frames = 2, .unkFlags = 3, .poseId = 191, .offset = {-5, 15}, .shadow = {-5, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {9, 7}, .shadow = {9, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {9, 15}, .shadow = {9, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {8, 20}, .shadow = {6, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 190, .offset = {2, 18}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {-5, 16}, .shadow = {-5, 16} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {-5, 9}, .shadow = {-5, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {1, 1}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {3, 2}, .shadow = {3, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {5, 4}, .shadow = {5, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {7, 8}, .shadow = {7, 3} },
	{ .frames = 2, .unkFlags = 3, .poseId = 189, .offset = {6, 9}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {3, 9}, .shadow = {3, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {1, 6}, .shadow = {1, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {1, -1}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {3, -3}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {7, -2}, .shadow = {7, -7} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {10, 0}, .shadow = {10, -5} },
	{ .frames = 2, .unkFlags = 3, .poseId = 188, .offset = {10, 2}, .shadow = {10, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {9, 4}, .shadow = {9, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {4, 3}, .shadow = {4, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {-1, 0}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {-2, 1}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {-1, 0}, .shadow = {-1, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 3, .poseId = 187, .offset = {1, 0}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {2, 2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {1, 1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {-1, -1}, .shadow = {-1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {-3, -3}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {-7, -2}, .shadow = {-7, -7} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {-10, 0}, .shadow = {-10, -5} },
	{ .frames = 2, .unkFlags = 3, .poseId = 192, .offset = {-10, 2}, .shadow = {-10, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {-9, 4}, .shadow = {-9, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {-4, 3}, .shadow = {-4, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {-1, 1}, .shadow = {-1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {-3, 2}, .shadow = {-3, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {-5, 4}, .shadow = {-5, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 192, .offset = {-7, 8}, .shadow = {-7, 3} },
	{ .frames = 2, .unkFlags = 3, .poseId = 191, .offset = {-6, 9}, .shadow = {-6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {-3, 9}, .shadow = {-3, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {-1, 6}, .shadow = {-1, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {-9, 7}, .shadow = {-9, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {-9, 15}, .shadow = {-9, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {-8, 20}, .shadow = {-6, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 190, .offset = {-2, 18}, .shadow = {-1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {5, 16}, .shadow = {5, 16} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {5, 9}, .shadow = {5, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 203, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 203, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 203, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 203, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 202, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 204, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 204, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 202, .offset = {0, 6}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 206, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 206, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 206, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 206, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 205, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 207, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 207, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 207, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 205, .offset = {0, 6}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 208, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 209, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 209, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 209, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 208, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 210, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 210, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 208, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 212, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 212, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 212, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 211, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 213, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 213, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 211, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 215, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 215, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 215, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 215, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 214, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 214, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 214, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 214, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 218, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 218, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 217, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 219, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 217, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 221, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 221, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 221, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 221, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 220, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 222, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 222, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 220, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sWailordAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 223, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 224, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 224, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 223, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 225, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 223, .offset = {0, 6}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sWailordGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_1.4bpp.lz");
static const ax_sprite sWailordSprites1[] = {
	{sWailordGfx1, ARRAY_COUNT(sWailordGfx1)}, 
	{NULL, 0}
};
static const u8 sWailordGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_2.4bpp.lz");
static const ax_sprite sWailordSprites2[] = {
	{sWailordGfx2, ARRAY_COUNT(sWailordGfx2)}, 
	{NULL, 0}
};
static const u8 sWailordGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_3.4bpp.lz");
static const ax_sprite sWailordSprites3[] = {
	{sWailordGfx3, ARRAY_COUNT(sWailordGfx3)}, 
	{NULL, 0}
};
static const u8 sWailordGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_4.4bpp.lz");
static const ax_sprite sWailordSprites4[] = {
	{sWailordGfx4, ARRAY_COUNT(sWailordGfx4)}, 
	{NULL, 0}
};
static const u8 sWailordGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_5.4bpp.lz");
static const ax_sprite sWailordSprites5[] = {
	{sWailordGfx5, ARRAY_COUNT(sWailordGfx5)}, 
	{NULL, 0}
};
static const u8 sWailordGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_6.4bpp.lz");
static const ax_sprite sWailordSprites6[] = {
	{sWailordGfx6, ARRAY_COUNT(sWailordGfx6)}, 
	{NULL, 0}
};
static const u8 sWailordGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_7.4bpp.lz");
static const ax_sprite sWailordSprites7[] = {
	{sWailordGfx7, ARRAY_COUNT(sWailordGfx7)}, 
	{NULL, 0}
};
static const u8 sWailordGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_8.4bpp.lz");
static const ax_sprite sWailordSprites8[] = {
	{sWailordGfx8, ARRAY_COUNT(sWailordGfx8)}, 
	{NULL, 0}
};
static const u8 sWailordGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_9.4bpp.lz");
static const ax_sprite sWailordSprites9[] = {
	{sWailordGfx9, ARRAY_COUNT(sWailordGfx9)}, 
	{NULL, 0}
};
static const u8 sWailordGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_10.4bpp.lz");
static const ax_sprite sWailordSprites10[] = {
	{sWailordGfx10, ARRAY_COUNT(sWailordGfx10)}, 
	{NULL, 0}
};
static const u8 sWailordGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_11.4bpp.lz");
static const ax_sprite sWailordSprites11[] = {
	{sWailordGfx11, ARRAY_COUNT(sWailordGfx11)}, 
	{NULL, 0}
};
static const u8 sWailordGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_12.4bpp.lz");
static const ax_sprite sWailordSprites12[] = {
	{sWailordGfx12, ARRAY_COUNT(sWailordGfx12)}, 
	{NULL, 0}
};
static const u8 sWailordGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_13.4bpp.lz");
static const ax_sprite sWailordSprites13[] = {
	{sWailordGfx13, ARRAY_COUNT(sWailordGfx13)}, 
	{NULL, 0}
};
static const u8 sWailordGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_14.4bpp.lz");
static const ax_sprite sWailordSprites14[] = {
	{sWailordGfx14, ARRAY_COUNT(sWailordGfx14)}, 
	{NULL, 0}
};
static const u8 sWailordGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_15.4bpp.lz");
static const ax_sprite sWailordSprites15[] = {
	{sWailordGfx15, ARRAY_COUNT(sWailordGfx15)}, 
	{NULL, 0}
};
static const u8 sWailordGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_16.4bpp.lz");
static const u8 sWailordGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_16_1.4bpp.lz");
static const u8 sWailordGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_16_2.4bpp.lz");
static const u8 sWailordGfx16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_16_3.4bpp.lz");
static const u8 sWailordGfx16_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_16_4.4bpp.lz");
static const u8 sWailordGfx16_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_16_5.4bpp.lz");
static const u8 sWailordGfx16_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_16_6.4bpp.lz");
static const u8 sWailordGfx16_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_16_7.4bpp.lz");
static const ax_sprite sWailordSprites16[] = {
	{NULL, 32}, 
	{sWailordGfx16, ARRAY_COUNT(sWailordGfx16)}, 
	{NULL, 160}, 
	{sWailordGfx16_1, ARRAY_COUNT(sWailordGfx16_1)}, 
	{NULL, 160}, 
	{sWailordGfx16_2, ARRAY_COUNT(sWailordGfx16_2)}, 
	{NULL, 96}, 
	{sWailordGfx16_3, ARRAY_COUNT(sWailordGfx16_3)}, 
	{NULL, 64}, 
	{sWailordGfx16_4, ARRAY_COUNT(sWailordGfx16_4)}, 
	{NULL, 64}, 
	{sWailordGfx16_5, ARRAY_COUNT(sWailordGfx16_5)}, 
	{NULL, 96}, 
	{sWailordGfx16_6, ARRAY_COUNT(sWailordGfx16_6)}, 
	{NULL, 128}, 
	{sWailordGfx16_7, ARRAY_COUNT(sWailordGfx16_7)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sWailordGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_17.4bpp.lz");
static const u8 sWailordGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_17_1.4bpp.lz");
static const u8 sWailordGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_17_2.4bpp.lz");
static const u8 sWailordGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_17_3.4bpp.lz");
static const u8 sWailordGfx17_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_17_4.4bpp.lz");
static const u8 sWailordGfx17_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_17_5.4bpp.lz");
static const u8 sWailordGfx17_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_17_6.4bpp.lz");
static const u8 sWailordGfx17_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_17_7.4bpp.lz");
static const ax_sprite sWailordSprites17[] = {
	{NULL, 128}, 
	{sWailordGfx17, ARRAY_COUNT(sWailordGfx17)}, 
	{NULL, 192}, 
	{sWailordGfx17_1, ARRAY_COUNT(sWailordGfx17_1)}, 
	{NULL, 64}, 
	{sWailordGfx17_2, ARRAY_COUNT(sWailordGfx17_2)}, 
	{NULL, 32}, 
	{sWailordGfx17_3, ARRAY_COUNT(sWailordGfx17_3)}, 
	{NULL, 32}, 
	{sWailordGfx17_4, ARRAY_COUNT(sWailordGfx17_4)}, 
	{NULL, 32}, 
	{sWailordGfx17_5, ARRAY_COUNT(sWailordGfx17_5)}, 
	{NULL, 64}, 
	{sWailordGfx17_6, ARRAY_COUNT(sWailordGfx17_6)}, 
	{NULL, 64}, 
	{sWailordGfx17_7, ARRAY_COUNT(sWailordGfx17_7)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sWailordGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_18.4bpp.lz");
static const u8 sWailordGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_18_1.4bpp.lz");
static const u8 sWailordGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_18_2.4bpp.lz");
static const ax_sprite sWailordSprites18[] = {
	{NULL, 32}, 
	{sWailordGfx18, ARRAY_COUNT(sWailordGfx18)}, 
	{NULL, 32}, 
	{sWailordGfx18_1, ARRAY_COUNT(sWailordGfx18_1)}, 
	{NULL, 32}, 
	{sWailordGfx18_2, ARRAY_COUNT(sWailordGfx18_2)}, 
	{NULL, 800}, 
	{NULL, 0}
};
static const u8 sWailordGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_19.4bpp.lz");
static const u8 sWailordGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_19_1.4bpp.lz");
static const u8 sWailordGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_19_2.4bpp.lz");
static const u8 sWailordGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_19_3.4bpp.lz");
static const u8 sWailordGfx19_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_19_4.4bpp.lz");
static const u8 sWailordGfx19_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_19_5.4bpp.lz");
static const u8 sWailordGfx19_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_19_6.4bpp.lz");
static const ax_sprite sWailordSprites19[] = {
	{NULL, 32}, 
	{sWailordGfx19, ARRAY_COUNT(sWailordGfx19)}, 
	{NULL, 128}, 
	{sWailordGfx19_1, ARRAY_COUNT(sWailordGfx19_1)}, 
	{NULL, 64}, 
	{sWailordGfx19_2, ARRAY_COUNT(sWailordGfx19_2)}, 
	{NULL, 64}, 
	{sWailordGfx19_3, ARRAY_COUNT(sWailordGfx19_3)}, 
	{NULL, 32}, 
	{sWailordGfx19_4, ARRAY_COUNT(sWailordGfx19_4)}, 
	{NULL, 32}, 
	{sWailordGfx19_5, ARRAY_COUNT(sWailordGfx19_5)}, 
	{NULL, 128}, 
	{sWailordGfx19_6, ARRAY_COUNT(sWailordGfx19_6)}, 
	{NULL, 288}, 
	{NULL, 0}
};
static const u8 sWailordGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_20.4bpp.lz");
static const u8 sWailordGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_20_1.4bpp.lz");
static const u8 sWailordGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_20_2.4bpp.lz");
static const u8 sWailordGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_20_3.4bpp.lz");
static const u8 sWailordGfx20_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_20_4.4bpp.lz");
static const u8 sWailordGfx20_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_20_5.4bpp.lz");
static const u8 sWailordGfx20_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_20_6.4bpp.lz");
static const ax_sprite sWailordSprites20[] = {
	{NULL, 288}, 
	{sWailordGfx20, ARRAY_COUNT(sWailordGfx20)}, 
	{NULL, 96}, 
	{sWailordGfx20_1, ARRAY_COUNT(sWailordGfx20_1)}, 
	{NULL, 64}, 
	{sWailordGfx20_2, ARRAY_COUNT(sWailordGfx20_2)}, 
	{NULL, 64}, 
	{sWailordGfx20_3, ARRAY_COUNT(sWailordGfx20_3)}, 
	{NULL, 64}, 
	{sWailordGfx20_4, ARRAY_COUNT(sWailordGfx20_4)}, 
	{NULL, 128}, 
	{sWailordGfx20_5, ARRAY_COUNT(sWailordGfx20_5)}, 
	{NULL, 128}, 
	{sWailordGfx20_6, ARRAY_COUNT(sWailordGfx20_6)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sWailordGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_21.4bpp.lz");
static const u8 sWailordGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_21_1.4bpp.lz");
static const u8 sWailordGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_21_2.4bpp.lz");
static const u8 sWailordGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_21_3.4bpp.lz");
static const u8 sWailordGfx21_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_21_4.4bpp.lz");
static const u8 sWailordGfx21_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_21_5.4bpp.lz");
static const u8 sWailordGfx21_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_21_6.4bpp.lz");
static const u8 sWailordGfx21_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_21_7.4bpp.lz");
static const ax_sprite sWailordSprites21[] = {
	{NULL, 32}, 
	{sWailordGfx21, ARRAY_COUNT(sWailordGfx21)}, 
	{NULL, 128}, 
	{sWailordGfx21_1, ARRAY_COUNT(sWailordGfx21_1)}, 
	{NULL, 128}, 
	{sWailordGfx21_2, ARRAY_COUNT(sWailordGfx21_2)}, 
	{NULL, 96}, 
	{sWailordGfx21_3, ARRAY_COUNT(sWailordGfx21_3)}, 
	{NULL, 64}, 
	{sWailordGfx21_4, ARRAY_COUNT(sWailordGfx21_4)}, 
	{NULL, 64}, 
	{sWailordGfx21_5, ARRAY_COUNT(sWailordGfx21_5)}, 
	{NULL, 64}, 
	{sWailordGfx21_6, ARRAY_COUNT(sWailordGfx21_6)}, 
	{NULL, 128}, 
	{sWailordGfx21_7, ARRAY_COUNT(sWailordGfx21_7)}, 
	{NULL, 96}, 
	{NULL, 0}
};
static const u8 sWailordGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_22.4bpp.lz");
static const u8 sWailordGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_22_1.4bpp.lz");
static const u8 sWailordGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_22_2.4bpp.lz");
static const u8 sWailordGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_22_3.4bpp.lz");
static const u8 sWailordGfx22_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_22_4.4bpp.lz");
static const u8 sWailordGfx22_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_22_5.4bpp.lz");
static const u8 sWailordGfx22_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_22_6.4bpp.lz");
static const u8 sWailordGfx22_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_22_7.4bpp.lz");
static const ax_sprite sWailordSprites22[] = {
	{NULL, 128}, 
	{sWailordGfx22, ARRAY_COUNT(sWailordGfx22)}, 
	{NULL, 192}, 
	{sWailordGfx22_1, ARRAY_COUNT(sWailordGfx22_1)}, 
	{NULL, 64}, 
	{sWailordGfx22_2, ARRAY_COUNT(sWailordGfx22_2)}, 
	{NULL, 32}, 
	{sWailordGfx22_3, ARRAY_COUNT(sWailordGfx22_3)}, 
	{NULL, 32}, 
	{sWailordGfx22_4, ARRAY_COUNT(sWailordGfx22_4)}, 
	{NULL, 64}, 
	{sWailordGfx22_5, ARRAY_COUNT(sWailordGfx22_5)}, 
	{NULL, 64}, 
	{sWailordGfx22_6, ARRAY_COUNT(sWailordGfx22_6)}, 
	{NULL, 96}, 
	{sWailordGfx22_7, ARRAY_COUNT(sWailordGfx22_7)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sWailordGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_23.4bpp.lz");
static const u8 sWailordGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_23_1.4bpp.lz");
static const ax_sprite sWailordSprites23[] = {
	{sWailordGfx23, ARRAY_COUNT(sWailordGfx23)}, 
	{NULL, 32}, 
	{sWailordGfx23_1, ARRAY_COUNT(sWailordGfx23_1)}, 
	{NULL, 832}, 
	{NULL, 0}
};
static const u8 sWailordGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_24.4bpp.lz");
static const u8 sWailordGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_24_1.4bpp.lz");
static const u8 sWailordGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_24_2.4bpp.lz");
static const u8 sWailordGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_24_3.4bpp.lz");
static const u8 sWailordGfx24_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_24_4.4bpp.lz");
static const ax_sprite sWailordSprites24[] = {
	{sWailordGfx24, ARRAY_COUNT(sWailordGfx24)}, 
	{NULL, 128}, 
	{sWailordGfx24_1, ARRAY_COUNT(sWailordGfx24_1)}, 
	{NULL, 64}, 
	{sWailordGfx24_2, ARRAY_COUNT(sWailordGfx24_2)}, 
	{NULL, 32}, 
	{sWailordGfx24_3, ARRAY_COUNT(sWailordGfx24_3)}, 
	{NULL, 32}, 
	{sWailordGfx24_4, ARRAY_COUNT(sWailordGfx24_4)}, 
	{NULL, 544}, 
	{NULL, 0}
};
static const u8 sWailordGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_25.4bpp.lz");
static const u8 sWailordGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_25_1.4bpp.lz");
static const u8 sWailordGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_25_2.4bpp.lz");
static const u8 sWailordGfx25_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_25_3.4bpp.lz");
static const u8 sWailordGfx25_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_25_4.4bpp.lz");
static const u8 sWailordGfx25_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_25_5.4bpp.lz");
static const u8 sWailordGfx25_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_25_6.4bpp.lz");
static const ax_sprite sWailordSprites25[] = {
	{NULL, 32}, 
	{sWailordGfx25, ARRAY_COUNT(sWailordGfx25)}, 
	{NULL, 128}, 
	{sWailordGfx25_1, ARRAY_COUNT(sWailordGfx25_1)}, 
	{NULL, 96}, 
	{sWailordGfx25_2, ARRAY_COUNT(sWailordGfx25_2)}, 
	{NULL, 64}, 
	{sWailordGfx25_3, ARRAY_COUNT(sWailordGfx25_3)}, 
	{NULL, 64}, 
	{sWailordGfx25_4, ARRAY_COUNT(sWailordGfx25_4)}, 
	{NULL, 64}, 
	{sWailordGfx25_5, ARRAY_COUNT(sWailordGfx25_5)}, 
	{NULL, 128}, 
	{sWailordGfx25_6, ARRAY_COUNT(sWailordGfx25_6)}, 
	{NULL, 352}, 
	{NULL, 0}
};
static const u8 sWailordGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_26.4bpp.lz");
static const ax_sprite sWailordSprites26[] = {
	{sWailordGfx26, ARRAY_COUNT(sWailordGfx26)}, 
	{NULL, 0}
};
static const u8 sWailordGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_27.4bpp.lz");
static const ax_sprite sWailordSprites27[] = {
	{sWailordGfx27, ARRAY_COUNT(sWailordGfx27)}, 
	{NULL, 0}
};
static const u8 sWailordGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_28.4bpp.lz");
static const ax_sprite sWailordSprites28[] = {
	{sWailordGfx28, ARRAY_COUNT(sWailordGfx28)}, 
	{NULL, 0}
};
static const u8 sWailordGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_29.4bpp.lz");
static const ax_sprite sWailordSprites29[] = {
	{sWailordGfx29, ARRAY_COUNT(sWailordGfx29)}, 
	{NULL, 0}
};
static const u8 sWailordGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_30.4bpp.lz");
static const ax_sprite sWailordSprites30[] = {
	{sWailordGfx30, ARRAY_COUNT(sWailordGfx30)}, 
	{NULL, 0}
};
static const u8 sWailordGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_31.4bpp.lz");
static const ax_sprite sWailordSprites31[] = {
	{sWailordGfx31, ARRAY_COUNT(sWailordGfx31)}, 
	{NULL, 0}
};
static const u8 sWailordGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_32.4bpp.lz");
static const ax_sprite sWailordSprites32[] = {
	{sWailordGfx32, ARRAY_COUNT(sWailordGfx32)}, 
	{NULL, 0}
};
static const u8 sWailordGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_33.4bpp.lz");
static const ax_sprite sWailordSprites33[] = {
	{sWailordGfx33, ARRAY_COUNT(sWailordGfx33)}, 
	{NULL, 0}
};
static const u8 sWailordGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_34.4bpp.lz");
static const ax_sprite sWailordSprites34[] = {
	{sWailordGfx34, ARRAY_COUNT(sWailordGfx34)}, 
	{NULL, 0}
};
static const u8 sWailordGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_35.4bpp.lz");
static const ax_sprite sWailordSprites35[] = {
	{sWailordGfx35, ARRAY_COUNT(sWailordGfx35)}, 
	{NULL, 0}
};
static const u8 sWailordGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/wailord/sprite_36.4bpp.lz");
static const ax_sprite sWailordSprites36[] = {
	{sWailordGfx36, ARRAY_COUNT(sWailordGfx36)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesWailord[] = {
	sWailordPose1,
	sWailordPose2,
	sWailordPose3,
	sWailordPose4,
	sWailordPose5,
	sWailordPose6,
	sWailordPose7,
	sWailordPose8,
	sWailordPose9,
	sWailordPose10,
	sWailordPose11,
	sWailordPose12,
	sWailordPose13,
	sWailordPose14,
	sWailordPose15,
	sWailordPose16,
	sWailordPose17,
	sWailordPose18,
	sWailordPose19,
	sWailordPose20,
	sWailordPose21,
	sWailordPose22,
	sWailordPose23,
	sWailordPose24,
	sWailordPose1,
	sWailordPose2,
	sWailordPose3,
	sWailordPose28,
	sWailordPose4,
	sWailordPose5,
	sWailordPose6,
	sWailordPose32,
	sWailordPose7,
	sWailordPose8,
	sWailordPose9,
	sWailordPose36,
	sWailordPose10,
	sWailordPose11,
	sWailordPose12,
	sWailordPose40,
	sWailordPose13,
	sWailordPose14,
	sWailordPose15,
	sWailordPose44,
	sWailordPose16,
	sWailordPose17,
	sWailordPose18,
	sWailordPose48,
	sWailordPose19,
	sWailordPose20,
	sWailordPose21,
	sWailordPose52,
	sWailordPose22,
	sWailordPose23,
	sWailordPose24,
	sWailordPose56,
	sWailordPose1,
	sWailordPose2,
	sWailordPose3,
	sWailordPose28,
	sWailordPose4,
	sWailordPose5,
	sWailordPose6,
	sWailordPose32,
	sWailordPose7,
	sWailordPose8,
	sWailordPose9,
	sWailordPose36,
	sWailordPose10,
	sWailordPose11,
	sWailordPose12,
	sWailordPose40,
	sWailordPose13,
	sWailordPose14,
	sWailordPose15,
	sWailordPose44,
	sWailordPose16,
	sWailordPose17,
	sWailordPose18,
	sWailordPose48,
	sWailordPose19,
	sWailordPose20,
	sWailordPose21,
	sWailordPose52,
	sWailordPose22,
	sWailordPose23,
	sWailordPose24,
	sWailordPose56,
	sWailordPose1,
	sWailordPose28,
	sWailordPose91,
	sWailordPose4,
	sWailordPose32,
	sWailordPose94,
	sWailordPose7,
	sWailordPose36,
	sWailordPose97,
	sWailordPose10,
	sWailordPose40,
	sWailordPose100,
	sWailordPose13,
	sWailordPose44,
	sWailordPose103,
	sWailordPose16,
	sWailordPose48,
	sWailordPose106,
	sWailordPose19,
	sWailordPose52,
	sWailordPose109,
	sWailordPose22,
	sWailordPose56,
	sWailordPose112,
	sWailordPose1,
	sWailordPose2,
	sWailordPose3,
	sWailordPose28,
	sWailordPose91,
	sWailordPose4,
	sWailordPose5,
	sWailordPose6,
	sWailordPose32,
	sWailordPose94,
	sWailordPose7,
	sWailordPose8,
	sWailordPose9,
	sWailordPose36,
	sWailordPose97,
	sWailordPose10,
	sWailordPose11,
	sWailordPose12,
	sWailordPose40,
	sWailordPose100,
	sWailordPose13,
	sWailordPose14,
	sWailordPose15,
	sWailordPose44,
	sWailordPose137,
	sWailordPose16,
	sWailordPose17,
	sWailordPose18,
	sWailordPose48,
	sWailordPose106,
	sWailordPose19,
	sWailordPose20,
	sWailordPose21,
	sWailordPose52,
	sWailordPose109,
	sWailordPose22,
	sWailordPose23,
	sWailordPose24,
	sWailordPose56,
	sWailordPose112,
	sWailordPose153,
	sWailordPose154,
	sWailordPose155,
	sWailordPose156,
	sWailordPose157,
	sWailordPose158,
	sWailordPose159,
	sWailordPose160,
	sWailordPose161,
	sWailordPose162,
	sWailordPose1,
	sWailordPose2,
	sWailordPose3,
	sWailordPose4,
	sWailordPose5,
	sWailordPose6,
	sWailordPose7,
	sWailordPose8,
	sWailordPose9,
	sWailordPose10,
	sWailordPose11,
	sWailordPose12,
	sWailordPose13,
	sWailordPose14,
	sWailordPose15,
	sWailordPose16,
	sWailordPose17,
	sWailordPose18,
	sWailordPose19,
	sWailordPose20,
	sWailordPose21,
	sWailordPose22,
	sWailordPose23,
	sWailordPose24,
	sWailordPose1,
	sWailordPose188,
	sWailordPose189,
	sWailordPose190,
	sWailordPose191,
	sWailordPose192,
	sWailordPose193,
	sWailordPose194,
	sWailordPose91,
	sWailordPose196,
	sWailordPose197,
	sWailordPose198,
	sWailordPose199,
	sWailordPose200,
	sWailordPose201,
	sWailordPose202,
	sWailordPose1,
	sWailordPose91,
	sWailordPose28,
	sWailordPose4,
	sWailordPose94,
	sWailordPose32,
	sWailordPose7,
	sWailordPose97,
	sWailordPose36,
	sWailordPose10,
	sWailordPose100,
	sWailordPose40,
	sWailordPose13,
	sWailordPose103,
	sWailordPose44,
	sWailordPose16,
	sWailordPose106,
	sWailordPose48,
	sWailordPose19,
	sWailordPose109,
	sWailordPose52,
	sWailordPose22,
	sWailordPose112,
	sWailordPose56,
	sWailordPose28,
	sWailordPose228,
	sWailordPose52,
	sWailordPose230,
	sWailordPose44,
	sWailordPose232,
	sWailordPose36,
	sWailordPose234,
	sWailordPose1,
	sWailordPose22,
	sWailordPose19,
	sWailordPose16,
	sWailordPose13,
	sWailordPose10,
	sWailordPose7,
	sWailordPose4,
};

static const struct PositionSets sAxPositionsWailord[] = {
	[0] = { .set = { {-1, -2}, {-21, -21}, {20, -22}, {-1, -20} } },
	[1] = { .set = { {0, -3}, {-21, -21}, {19, -22}, {-1, -22} } },
	[2] = { .set = { {-1, -1}, {-21, -22}, {19, -21}, {-1, -22} } },
	[3] = { .set = { {20, -7}, {12, -33}, {-11, -11}, {4, -22} } },
	[4] = { .set = { {19, -8}, {15, -34}, {-9, -12}, {4, -25} } },
	[5] = { .set = { {19, -5}, {12, -32}, {-11, -8}, {1, -18} } },
	[6] = { .set = { {27, -20}, {2, -31}, {2, -8}, {2, -22} } },
	[7] = { .set = { {27, -21}, {3, -32}, {1, -10}, {2, -23} } },
	[8] = { .set = { {28, -19}, {3, -31}, {3, -8}, {2, -21} } },
	[9] = { .set = { {18, -40}, {-9, -35}, {16, -12}, {-1, -28} } },
	[10] = { .set = { {18, -41}, {-11, -37}, {16, -15}, {-1, -29} } },
	[11] = { .set = { {19, -37}, {-9, -35}, {17, -10}, {2, -23} } },
	[12] = { .set = { {-1, -45}, {17, -25}, {-19, -25}, {-1, -26} } },
	[13] = { .set = { {-1, -47}, {17, -27}, {-18, -27}, {-1, -26} } },
	[14] = { .set = { {-1, -42}, {17, -24}, {-19, -22}, {-1, -24} } },
	[15] = { .set = { {-19, -40}, {8, -35}, {-17, -12}, {0, -28} } },
	[16] = { .set = { {-19, -41}, {10, -37}, {-17, -15}, {0, -29} } },
	[17] = { .set = { {-20, -37}, {8, -35}, {-18, -10}, {-3, -23} } },
	[18] = { .set = { {-28, -20}, {-3, -31}, {-3, -8}, {-3, -22} } },
	[19] = { .set = { {-28, -21}, {-4, -32}, {-2, -10}, {-3, -23} } },
	[20] = { .set = { {-29, -19}, {-4, -31}, {-4, -8}, {-3, -21} } },
	[21] = { .set = { {-21, -7}, {-13, -33}, {10, -11}, {-5, -22} } },
	[22] = { .set = { {-20, -8}, {-16, -34}, {8, -12}, {-5, -25} } },
	[23] = { .set = { {-20, -5}, {-13, -32}, {10, -8}, {-2, -18} } },
	[24] = { .set = { {-1, -2}, {-21, -21}, {20, -22}, {-1, -20} } },
	[25] = { .set = { {0, -3}, {-21, -21}, {19, -22}, {-1, -22} } },
	[26] = { .set = { {-1, -1}, {-21, -22}, {19, -21}, {-1, -22} } },
	[27] = { .set = { {-1, 2}, {-21, -20}, {19, -20}, {0, -20} } },
	[28] = { .set = { {20, -7}, {12, -33}, {-11, -11}, {4, -22} } },
	[29] = { .set = { {19, -8}, {15, -34}, {-9, -12}, {4, -25} } },
	[30] = { .set = { {19, -5}, {12, -32}, {-11, -8}, {1, -18} } },
	[31] = { .set = { {19, -3}, {20, -27}, {-12, -9}, {4, -24} } },
	[32] = { .set = { {27, -20}, {2, -31}, {2, -8}, {2, -22} } },
	[33] = { .set = { {27, -21}, {3, -32}, {1, -10}, {2, -23} } },
	[34] = { .set = { {28, -19}, {3, -31}, {3, -8}, {2, -21} } },
	[35] = { .set = { {26, -15}, {4, -30}, {2, -9}, {2, -21} } },
	[36] = { .set = { {18, -40}, {-9, -35}, {16, -12}, {-1, -28} } },
	[37] = { .set = { {18, -41}, {-11, -37}, {16, -15}, {-1, -29} } },
	[38] = { .set = { {19, -37}, {-9, -35}, {17, -10}, {2, -23} } },
	[39] = { .set = { {19, -38}, {-9, -37}, {18, -13}, {1, -27} } },
	[40] = { .set = { {-1, -45}, {17, -25}, {-19, -25}, {-1, -26} } },
	[41] = { .set = { {-1, -47}, {17, -27}, {-18, -27}, {-1, -26} } },
	[42] = { .set = { {-1, -42}, {17, -24}, {-19, -22}, {-1, -24} } },
	[43] = { .set = { {-1, -40}, {18, -27}, {-20, -27}, {-1, -23} } },
	[44] = { .set = { {-19, -40}, {8, -35}, {-17, -12}, {0, -28} } },
	[45] = { .set = { {-19, -41}, {10, -37}, {-17, -15}, {0, -29} } },
	[46] = { .set = { {-20, -37}, {8, -35}, {-18, -10}, {-3, -23} } },
	[47] = { .set = { {-20, -38}, {8, -37}, {-19, -13}, {-2, -27} } },
	[48] = { .set = { {-28, -20}, {-3, -31}, {-3, -8}, {-3, -22} } },
	[49] = { .set = { {-28, -21}, {-4, -32}, {-2, -10}, {-3, -23} } },
	[50] = { .set = { {-29, -19}, {-4, -31}, {-4, -8}, {-3, -21} } },
	[51] = { .set = { {-27, -15}, {-5, -30}, {-3, -9}, {-3, -21} } },
	[52] = { .set = { {-21, -7}, {-13, -33}, {10, -11}, {-5, -22} } },
	[53] = { .set = { {-20, -8}, {-16, -34}, {8, -12}, {-5, -25} } },
	[54] = { .set = { {-20, -5}, {-13, -32}, {10, -8}, {-2, -18} } },
	[55] = { .set = { {-20, -3}, {-21, -27}, {11, -9}, {-5, -24} } },
	[56] = { .set = { {-1, -2}, {-21, -21}, {20, -22}, {-1, -20} } },
	[57] = { .set = { {0, -3}, {-21, -21}, {19, -22}, {-1, -22} } },
	[58] = { .set = { {-1, -1}, {-21, -22}, {19, -21}, {-1, -22} } },
	[59] = { .set = { {-1, 2}, {-21, -20}, {19, -20}, {0, -20} } },
	[60] = { .set = { {20, -7}, {12, -33}, {-11, -11}, {4, -22} } },
	[61] = { .set = { {19, -8}, {15, -34}, {-9, -12}, {4, -25} } },
	[62] = { .set = { {19, -5}, {12, -32}, {-11, -8}, {1, -18} } },
	[63] = { .set = { {19, -3}, {20, -27}, {-12, -9}, {4, -24} } },
	[64] = { .set = { {27, -20}, {2, -31}, {2, -8}, {2, -22} } },
	[65] = { .set = { {27, -21}, {3, -32}, {1, -10}, {2, -23} } },
	[66] = { .set = { {28, -19}, {3, -31}, {3, -8}, {2, -21} } },
	[67] = { .set = { {26, -15}, {4, -30}, {2, -9}, {2, -21} } },
	[68] = { .set = { {18, -40}, {-9, -35}, {16, -12}, {-1, -28} } },
	[69] = { .set = { {18, -41}, {-11, -37}, {16, -15}, {-1, -29} } },
	[70] = { .set = { {19, -37}, {-9, -35}, {17, -10}, {2, -23} } },
	[71] = { .set = { {19, -38}, {-9, -37}, {18, -13}, {1, -27} } },
	[72] = { .set = { {-1, -45}, {17, -25}, {-19, -25}, {-1, -26} } },
	[73] = { .set = { {-1, -47}, {17, -27}, {-18, -27}, {-1, -26} } },
	[74] = { .set = { {-1, -42}, {17, -24}, {-19, -22}, {-1, -24} } },
	[75] = { .set = { {-1, -40}, {18, -27}, {-20, -27}, {-1, -23} } },
	[76] = { .set = { {-19, -40}, {8, -35}, {-17, -12}, {0, -28} } },
	[77] = { .set = { {-19, -41}, {10, -37}, {-17, -15}, {0, -29} } },
	[78] = { .set = { {-20, -37}, {8, -35}, {-18, -10}, {-3, -23} } },
	[79] = { .set = { {-20, -38}, {8, -37}, {-19, -13}, {-2, -27} } },
	[80] = { .set = { {-28, -20}, {-3, -31}, {-3, -8}, {-3, -22} } },
	[81] = { .set = { {-28, -21}, {-4, -32}, {-2, -10}, {-3, -23} } },
	[82] = { .set = { {-29, -19}, {-4, -31}, {-4, -8}, {-3, -21} } },
	[83] = { .set = { {-27, -15}, {-5, -30}, {-3, -9}, {-3, -21} } },
	[84] = { .set = { {-21, -7}, {-13, -33}, {10, -11}, {-5, -22} } },
	[85] = { .set = { {-20, -8}, {-16, -34}, {8, -12}, {-5, -25} } },
	[86] = { .set = { {-20, -5}, {-13, -32}, {10, -8}, {-2, -18} } },
	[87] = { .set = { {-20, -3}, {-21, -27}, {11, -9}, {-5, -24} } },
	[88] = { .set = { {-1, -2}, {-21, -21}, {20, -22}, {-1, -20} } },
	[89] = { .set = { {-1, 2}, {-21, -20}, {19, -20}, {0, -20} } },
	[90] = { .set = { {-1, -2}, {-22, -18}, {20, -17}, {-1, -23} } },
	[91] = { .set = { {20, -7}, {12, -33}, {-11, -11}, {4, -22} } },
	[92] = { .set = { {19, -3}, {20, -27}, {-12, -9}, {4, -24} } },
	[93] = { .set = { {17, -6}, {21, -26}, {-10, -5}, {4, -25} } },
	[94] = { .set = { {27, -20}, {2, -31}, {2, -8}, {2, -22} } },
	[95] = { .set = { {26, -15}, {4, -30}, {2, -9}, {2, -21} } },
	[96] = { .set = { {24, -16}, {6, -30}, {4, -6}, {2, -21} } },
	[97] = { .set = { {18, -40}, {-9, -35}, {16, -12}, {-1, -28} } },
	[98] = { .set = { {19, -38}, {-9, -37}, {18, -13}, {1, -27} } },
	[99] = { .set = { {18, -33}, {-10, -36}, {19, -13}, {1, -28} } },
	[100] = { .set = { {-1, -45}, {17, -25}, {-19, -25}, {-1, -26} } },
	[101] = { .set = { {-1, -40}, {18, -27}, {-20, -27}, {-1, -23} } },
	[102] = { .set = { {0, -42}, {17, -25}, {-19, -25}, {-1, -24} } },
	[103] = { .set = { {-19, -40}, {8, -35}, {-17, -12}, {0, -28} } },
	[104] = { .set = { {-20, -38}, {8, -37}, {-19, -13}, {-2, -27} } },
	[105] = { .set = { {-19, -33}, {9, -36}, {-20, -13}, {-2, -28} } },
	[106] = { .set = { {-28, -20}, {-3, -31}, {-3, -8}, {-3, -22} } },
	[107] = { .set = { {-27, -15}, {-5, -30}, {-3, -9}, {-3, -21} } },
	[108] = { .set = { {-25, -16}, {-7, -30}, {-5, -6}, {-3, -21} } },
	[109] = { .set = { {-21, -7}, {-13, -33}, {10, -11}, {-5, -22} } },
	[110] = { .set = { {-20, -3}, {-21, -27}, {11, -9}, {-5, -24} } },
	[111] = { .set = { {-18, -6}, {-22, -26}, {9, -5}, {-5, -25} } },
	[112] = { .set = { {-1, -2}, {-21, -21}, {20, -22}, {-1, -20} } },
	[113] = { .set = { {0, -3}, {-21, -21}, {19, -22}, {-1, -22} } },
	[114] = { .set = { {-1, -1}, {-21, -22}, {19, -21}, {-1, -22} } },
	[115] = { .set = { {-1, 2}, {-21, -20}, {19, -20}, {0, -20} } },
	[116] = { .set = { {-1, -2}, {-22, -18}, {20, -17}, {-1, -23} } },
	[117] = { .set = { {20, -7}, {12, -33}, {-11, -11}, {4, -22} } },
	[118] = { .set = { {19, -8}, {15, -34}, {-9, -12}, {4, -25} } },
	[119] = { .set = { {19, -5}, {12, -32}, {-11, -8}, {1, -18} } },
	[120] = { .set = { {19, -3}, {20, -27}, {-12, -9}, {4, -24} } },
	[121] = { .set = { {17, -6}, {21, -26}, {-10, -5}, {4, -25} } },
	[122] = { .set = { {27, -20}, {2, -31}, {2, -8}, {2, -22} } },
	[123] = { .set = { {27, -21}, {3, -32}, {1, -10}, {2, -23} } },
	[124] = { .set = { {28, -19}, {3, -31}, {3, -8}, {2, -21} } },
	[125] = { .set = { {26, -15}, {4, -30}, {2, -9}, {2, -21} } },
	[126] = { .set = { {24, -16}, {6, -30}, {4, -6}, {2, -21} } },
	[127] = { .set = { {18, -40}, {-9, -35}, {16, -12}, {-1, -28} } },
	[128] = { .set = { {18, -41}, {-11, -37}, {16, -15}, {-1, -29} } },
	[129] = { .set = { {19, -37}, {-9, -35}, {17, -10}, {2, -23} } },
	[130] = { .set = { {19, -38}, {-9, -37}, {18, -13}, {1, -27} } },
	[131] = { .set = { {18, -33}, {-10, -36}, {19, -13}, {1, -28} } },
	[132] = { .set = { {-1, -45}, {17, -25}, {-19, -25}, {-1, -26} } },
	[133] = { .set = { {-1, -47}, {17, -27}, {-18, -27}, {-1, -26} } },
	[134] = { .set = { {-1, -42}, {17, -24}, {-19, -22}, {-1, -24} } },
	[135] = { .set = { {-1, -40}, {18, -27}, {-20, -27}, {-1, -23} } },
	[136] = { .set = { {0, -44}, {17, -27}, {-19, -27}, {-1, -26} } },
	[137] = { .set = { {-19, -40}, {8, -35}, {-17, -12}, {0, -28} } },
	[138] = { .set = { {-19, -41}, {10, -37}, {-17, -15}, {0, -29} } },
	[139] = { .set = { {-20, -37}, {8, -35}, {-18, -10}, {-3, -23} } },
	[140] = { .set = { {-20, -38}, {8, -37}, {-19, -13}, {-2, -27} } },
	[141] = { .set = { {-19, -33}, {9, -36}, {-20, -13}, {-2, -28} } },
	[142] = { .set = { {-28, -20}, {-3, -31}, {-3, -8}, {-3, -22} } },
	[143] = { .set = { {-28, -21}, {-4, -32}, {-2, -10}, {-3, -23} } },
	[144] = { .set = { {-29, -19}, {-4, -31}, {-4, -8}, {-3, -21} } },
	[145] = { .set = { {-27, -15}, {-5, -30}, {-3, -9}, {-3, -21} } },
	[146] = { .set = { {-25, -16}, {-7, -30}, {-5, -6}, {-3, -21} } },
	[147] = { .set = { {-21, -7}, {-13, -33}, {10, -11}, {-5, -22} } },
	[148] = { .set = { {-20, -8}, {-16, -34}, {8, -12}, {-5, -25} } },
	[149] = { .set = { {-20, -5}, {-13, -32}, {10, -8}, {-2, -18} } },
	[150] = { .set = { {-20, -3}, {-21, -27}, {11, -9}, {-5, -24} } },
	[151] = { .set = { {-18, -6}, {-22, -26}, {9, -5}, {-5, -25} } },
	[152] = { .set = { {-29, -20}, {-4, -30}, {-2, -8}, {-3, -22} } },
	[153] = { .set = { {-29, -20}, {-3, -30}, {-1, -12}, {-3, -21} } },
	[154] = { .set = { {-9, -35}, {-23, -18}, {13, -31}, {-4, -22} } },
	[155] = { .set = { {12, -39}, {22, -34}, {-10, -27}, {3, -16} } },
	[156] = { .set = { {-1, -45}, {-7, -28}, {-6, -19}, {2, -21} } },
	[157] = { .set = { {13, -44}, {-13, -32}, {17, -21}, {-2, -20} } },
	[158] = { .set = { {8, -43}, {21, -22}, {-16, -33}, {0, -24} } },
	[159] = { .set = { {-14, -44}, {12, -32}, {-18, -21}, {1, -20} } },
	[160] = { .set = { {-2, -43}, {4, -26}, {3, -17}, {-5, -19} } },
	[161] = { .set = { {-13, -39}, {-23, -34}, {9, -27}, {-4, -16} } },
	[162] = { .set = { {-1, -2}, {-21, -21}, {20, -22}, {-1, -20} } },
	[163] = { .set = { {0, -3}, {-21, -21}, {19, -22}, {-1, -22} } },
	[164] = { .set = { {-1, -1}, {-21, -22}, {19, -21}, {-1, -22} } },
	[165] = { .set = { {20, -7}, {12, -33}, {-11, -11}, {4, -22} } },
	[166] = { .set = { {19, -8}, {15, -34}, {-9, -12}, {4, -25} } },
	[167] = { .set = { {19, -5}, {12, -32}, {-11, -8}, {1, -18} } },
	[168] = { .set = { {27, -20}, {2, -31}, {2, -8}, {2, -22} } },
	[169] = { .set = { {27, -21}, {3, -32}, {1, -10}, {2, -23} } },
	[170] = { .set = { {28, -19}, {3, -31}, {3, -8}, {2, -21} } },
	[171] = { .set = { {18, -40}, {-9, -35}, {16, -12}, {-1, -28} } },
	[172] = { .set = { {18, -41}, {-11, -37}, {16, -15}, {-1, -29} } },
	[173] = { .set = { {19, -37}, {-9, -35}, {17, -10}, {2, -23} } },
	[174] = { .set = { {-1, -45}, {17, -25}, {-19, -25}, {-1, -26} } },
	[175] = { .set = { {-1, -47}, {17, -27}, {-18, -27}, {-1, -26} } },
	[176] = { .set = { {-1, -42}, {17, -24}, {-19, -22}, {-1, -24} } },
	[177] = { .set = { {-19, -40}, {8, -35}, {-17, -12}, {0, -28} } },
	[178] = { .set = { {-19, -41}, {10, -37}, {-17, -15}, {0, -29} } },
	[179] = { .set = { {-20, -37}, {8, -35}, {-18, -10}, {-3, -23} } },
	[180] = { .set = { {-28, -20}, {-3, -31}, {-3, -8}, {-3, -22} } },
	[181] = { .set = { {-28, -21}, {-4, -32}, {-2, -10}, {-3, -23} } },
	[182] = { .set = { {-29, -19}, {-4, -31}, {-4, -8}, {-3, -21} } },
	[183] = { .set = { {-21, -7}, {-13, -33}, {10, -11}, {-5, -22} } },
	[184] = { .set = { {-20, -8}, {-16, -34}, {8, -12}, {-5, -25} } },
	[185] = { .set = { {-20, -5}, {-13, -32}, {10, -8}, {-2, -18} } },
	[186] = { .set = { {-1, -2}, {-21, -21}, {20, -22}, {-1, -20} } },
	[187] = { .set = { {-18, -7}, {-10, -33}, {13, -11}, {-2, -22} } },
	[188] = { .set = { {-26, -20}, {-1, -31}, {-1, -8}, {-1, -22} } },
	[189] = { .set = { {-18, -38}, {9, -33}, {-16, -10}, {1, -26} } },
	[190] = { .set = { {-1, -43}, {17, -23}, {-19, -23}, {-1, -24} } },
	[191] = { .set = { {17, -38}, {-10, -33}, {15, -10}, {-2, -26} } },
	[192] = { .set = { {25, -20}, {0, -31}, {0, -8}, {0, -22} } },
	[193] = { .set = { {17, -7}, {9, -33}, {-14, -11}, {1, -22} } },
	[194] = { .set = { {-1, -2}, {-22, -18}, {20, -17}, {-1, -23} } },
	[195] = { .set = { {14, -7}, {18, -27}, {-13, -6}, {1, -26} } },
	[196] = { .set = { {21, -16}, {3, -30}, {1, -6}, {-1, -21} } },
	[197] = { .set = { {16, -31}, {-12, -34}, {17, -11}, {-1, -26} } },
	[198] = { .set = { {1, -44}, {18, -27}, {-18, -27}, {0, -26} } },
	[199] = { .set = { {-17, -31}, {11, -34}, {-18, -11}, {0, -26} } },
	[200] = { .set = { {-22, -16}, {-4, -30}, {-2, -6}, {0, -21} } },
	[201] = { .set = { {-15, -7}, {-19, -27}, {12, -6}, {-2, -26} } },
	[202] = { .set = { {-1, -2}, {-21, -21}, {20, -22}, {-1, -20} } },
	[203] = { .set = { {-1, -2}, {-22, -18}, {20, -17}, {-1, -23} } },
	[204] = { .set = { {-1, 2}, {-21, -20}, {19, -20}, {0, -20} } },
	[205] = { .set = { {20, -7}, {12, -33}, {-11, -11}, {4, -22} } },
	[206] = { .set = { {17, -6}, {21, -26}, {-10, -5}, {4, -25} } },
	[207] = { .set = { {19, -3}, {20, -27}, {-12, -9}, {4, -24} } },
	[208] = { .set = { {27, -20}, {2, -31}, {2, -8}, {2, -22} } },
	[209] = { .set = { {24, -16}, {6, -30}, {4, -6}, {2, -21} } },
	[210] = { .set = { {26, -15}, {4, -30}, {2, -9}, {2, -21} } },
	[211] = { .set = { {18, -40}, {-9, -35}, {16, -12}, {-1, -28} } },
	[212] = { .set = { {18, -33}, {-10, -36}, {19, -13}, {1, -28} } },
	[213] = { .set = { {19, -38}, {-9, -37}, {18, -13}, {1, -27} } },
	[214] = { .set = { {-1, -45}, {17, -25}, {-19, -25}, {-1, -26} } },
	[215] = { .set = { {0, -42}, {17, -25}, {-19, -25}, {-1, -24} } },
	[216] = { .set = { {-1, -40}, {18, -27}, {-20, -27}, {-1, -23} } },
	[217] = { .set = { {-19, -40}, {8, -35}, {-17, -12}, {0, -28} } },
	[218] = { .set = { {-19, -33}, {9, -36}, {-20, -13}, {-2, -28} } },
	[219] = { .set = { {-20, -38}, {8, -37}, {-19, -13}, {-2, -27} } },
	[220] = { .set = { {-28, -20}, {-3, -31}, {-3, -8}, {-3, -22} } },
	[221] = { .set = { {-25, -16}, {-7, -30}, {-5, -6}, {-3, -21} } },
	[222] = { .set = { {-27, -15}, {-5, -30}, {-3, -9}, {-3, -21} } },
	[223] = { .set = { {-21, -7}, {-13, -33}, {10, -11}, {-5, -22} } },
	[224] = { .set = { {-18, -6}, {-22, -26}, {9, -5}, {-5, -25} } },
	[225] = { .set = { {-20, -3}, {-21, -27}, {11, -9}, {-5, -24} } },
	[226] = { .set = { {-1, 2}, {-21, -20}, {19, -20}, {0, -20} } },
	[227] = { .set = { {-17, -3}, {-18, -27}, {14, -9}, {-2, -24} } },
	[228] = { .set = { {-27, -15}, {-5, -30}, {-3, -9}, {-3, -21} } },
	[229] = { .set = { {-20, -36}, {8, -35}, {-19, -11}, {-2, -25} } },
	[230] = { .set = { {-1, -40}, {18, -27}, {-20, -27}, {-1, -23} } },
	[231] = { .set = { {19, -36}, {-9, -35}, {18, -11}, {1, -25} } },
	[232] = { .set = { {26, -15}, {4, -30}, {2, -9}, {2, -21} } },
	[233] = { .set = { {16, -3}, {17, -27}, {-15, -9}, {1, -24} } },
	[234] = { .set = { {-1, -2}, {-21, -21}, {20, -22}, {-1, -20} } },
	[235] = { .set = { {-21, -7}, {-13, -33}, {10, -11}, {-5, -22} } },
	[236] = { .set = { {-28, -20}, {-3, -31}, {-3, -8}, {-3, -22} } },
	[237] = { .set = { {-19, -40}, {8, -35}, {-17, -12}, {0, -28} } },
	[238] = { .set = { {-1, -45}, {17, -25}, {-19, -25}, {-1, -26} } },
	[239] = { .set = { {18, -40}, {-9, -35}, {16, -12}, {-1, -28} } },
	[240] = { .set = { {27, -20}, {2, -31}, {2, -8}, {2, -22} } },
	[241] = { .set = { {20, -7}, {12, -33}, {-11, -11}, {4, -22} } },
};

static const ax_anim *const sWailordAnimTable1[] = {
	sWailordAnims_1_1,
	sWailordAnims_1_2,
	sWailordAnims_1_3,
	sWailordAnims_1_4,
	sWailordAnims_1_5,
	sWailordAnims_1_6,
	sWailordAnims_1_7,
	sWailordAnims_1_8,
};

static const ax_anim *const sWailordAnimTable2[] = {
	gAxSharedAnim_01571,
	sWailordAnims_2_2,
	sWailordAnims_2_3,
	sWailordAnims_2_4,
	sWailordAnims_2_5,
	sWailordAnims_2_6,
	sWailordAnims_2_7,
	sWailordAnims_2_8,
};

static const ax_anim *const sWailordAnimTable3[] = {
	gAxSharedAnim_02007,
	sWailordAnims_3_2,
	sWailordAnims_3_3,
	sWailordAnims_3_4,
	sWailordAnims_3_5,
	sWailordAnims_3_6,
	sWailordAnims_3_7,
	sWailordAnims_3_8,
};

static const ax_anim *const sWailordAnimTable4[] = {
	sWailordAnims_4_1,
	sWailordAnims_4_2,
	sWailordAnims_4_3,
	sWailordAnims_4_4,
	sWailordAnims_4_5,
	sWailordAnims_4_6,
	sWailordAnims_4_7,
	sWailordAnims_4_8,
};

static const ax_anim *const sWailordAnimTable5[] = {
	sWailordAnims_5_1,
	sWailordAnims_5_2,
	sWailordAnims_5_3,
	sWailordAnims_5_4,
	sWailordAnims_5_5,
	sWailordAnims_5_6,
	sWailordAnims_5_7,
	sWailordAnims_5_8,
};

static const ax_anim *const sWailordAnimTable6[] = {
	gAxSharedAnim_00144,
	gAxSharedAnim_00144,
	gAxSharedAnim_00144,
	gAxSharedAnim_00144,
	gAxSharedAnim_00144,
	gAxSharedAnim_00144,
	gAxSharedAnim_00144,
	gAxSharedAnim_00144,
};

static const ax_anim *const sWailordAnimTable7[] = {
	gAxSharedAnim_00606,
	gAxSharedAnim_00617,
	gAxSharedAnim_00626,
	gAxSharedAnim_00637,
	gAxSharedAnim_00654,
	gAxSharedAnim_00665,
	gAxSharedAnim_00680,
	gAxSharedAnim_00691,
};

static const ax_anim *const sWailordAnimTable8[] = {
	sWailordAnims_8_1,
	sWailordAnims_8_2,
	sWailordAnims_8_3,
	sWailordAnims_8_4,
	sWailordAnims_8_5,
	sWailordAnims_8_6,
	sWailordAnims_8_7,
	sWailordAnims_8_8,
};

static const ax_anim *const sWailordAnimTable9[] = {
	sWailordAnims_9_1,
	sWailordAnims_9_2,
	sWailordAnims_9_3,
	sWailordAnims_9_4,
	sWailordAnims_9_5,
	sWailordAnims_9_6,
	sWailordAnims_9_7,
	sWailordAnims_9_8,
};

static const ax_anim *const sWailordAnimTable10[] = {
	gAxSharedAnim_01143,
	gAxSharedAnim_01156,
	gAxSharedAnim_01167,
	gAxSharedAnim_01178,
	gAxSharedAnim_01189,
	gAxSharedAnim_01200,
	gAxSharedAnim_01217,
	gAxSharedAnim_01228,
};

static const ax_anim *const sWailordAnimTable11[] = {
	sWailordAnims_11_1,
	sWailordAnims_11_2,
	sWailordAnims_11_3,
	sWailordAnims_11_4,
	sWailordAnims_11_5,
	sWailordAnims_11_6,
	sWailordAnims_11_7,
	sWailordAnims_11_8,
};

static const ax_anim *const sWailordAnimTable12[] = {
	gAxSharedAnim_01472,
	gAxSharedAnim_01520,
	gAxSharedAnim_01507,
	gAxSharedAnim_01500,
	gAxSharedAnim_01499,
	gAxSharedAnim_01491,
	gAxSharedAnim_01481,
	gAxSharedAnim_01473,
};

static const ax_anim *const sWailordAnimTable13[] = {
	gAxSharedAnim_01525,
	gAxSharedAnim_01579,
	gAxSharedAnim_01577,
	gAxSharedAnim_01555,
	gAxSharedAnim_01549,
	gAxSharedAnim_01544,
	gAxSharedAnim_01539,
	gAxSharedAnim_01531,
};

static const ax_anim *const *const sAxAnimationsWailord[] = {
	sWailordAnimTable1,
	sWailordAnimTable2,
	sWailordAnimTable3,
	sWailordAnimTable4,
	sWailordAnimTable5,
	sWailordAnimTable6,
	sWailordAnimTable7,
	sWailordAnimTable8,
	sWailordAnimTable9,
	sWailordAnimTable10,
	sWailordAnimTable11,
	sWailordAnimTable12,
	sWailordAnimTable13,
};

static const ax_sprite *const sAxSpritesWailord[] = {
	sWailordSprites1,
	sWailordSprites2,
	sWailordSprites3,
	sWailordSprites4,
	sWailordSprites5,
	sWailordSprites6,
	sWailordSprites7,
	sWailordSprites8,
	sWailordSprites9,
	sWailordSprites10,
	sWailordSprites11,
	sWailordSprites12,
	sWailordSprites13,
	sWailordSprites14,
	sWailordSprites15,
	sWailordSprites16,
	sWailordSprites17,
	sWailordSprites18,
	sWailordSprites19,
	sWailordSprites20,
	sWailordSprites21,
	sWailordSprites22,
	sWailordSprites23,
	sWailordSprites24,
	sWailordSprites25,
	sWailordSprites26,
	sWailordSprites27,
	sWailordSprites28,
	sWailordSprites29,
	sWailordSprites30,
	sWailordSprites31,
	sWailordSprites32,
	sWailordSprites33,
	sWailordSprites34,
	sWailordSprites35,
	sWailordSprites36,
};

static const axmain sAxMainWailord = {
	.poses = sAxPosesWailord,
	.animations = sAxAnimationsWailord,
	.animCount = ARRAY_COUNT(sAxAnimationsWailord),
	.spriteData = sAxSpritesWailord,
	.positions = sAxPositionsWailord,
};
