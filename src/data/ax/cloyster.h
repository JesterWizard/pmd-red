/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainCloyster;
const SiroArchive gAxCloyster = {"SIRO", &sAxMainCloyster};

static const ax_pose sCloysterPose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose3[] = {
	AX_POSE(2, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose5[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose7[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose13[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose15[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose18[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose19[] = {
	AX_POSE(6, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose20[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose21[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose22[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose23[] = {
	AX_POSE(4, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose28[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose32[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose36[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose40[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose44[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose48[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose52[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose56[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose92[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose96[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose100[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose104[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose108[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose112[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose116[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose120[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose121[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose122[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose123[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose124[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose125[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose126[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose127[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose128[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose129[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose130[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose131[] = {
	AX_POSE(32, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose132[] = {
	AX_POSE(33, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose133[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose134[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose135[] = {
	AX_POSE(36, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose136[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose137[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose138[] = {
	AX_POSE(33, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose165[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose166[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose168[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose169[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose204[] = {
	AX_POSE(21, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose205[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose206[] = {
	AX_POSE(23, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose208[] = {
	AX_POSE(23, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCloysterPose210[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_anim sCloysterAnims_1_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_1_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 4, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 3, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_1_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 7, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 6, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_1_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 10, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 9, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_1_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_1_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 16, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 15, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 17, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_1_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 19, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 18, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 20, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_1_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 22, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 21, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 23, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 25, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 27, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 4}, .shadow = {0, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 29, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 31, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 33, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 35, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {4, 0}, .shadow = {4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 37, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 39, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {17, -17}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {18, -16}, .shadow = {18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {17, -17}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {18, -16}, .shadow = {18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {17, -17}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {18, -16}, .shadow = {18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {4, -4}, .shadow = {4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 41, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 43, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 45, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 47, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-16, -17}, .shadow = {-16, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-17, -16}, .shadow = {-17, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-16, -17}, .shadow = {-16, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-17, -16}, .shadow = {-17, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-16, -17}, .shadow = {-16, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-17, -16}, .shadow = {-17, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-4, -4}, .shadow = {-4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 49, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 51, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-4, 0}, .shadow = {-4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 53, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 55, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 57, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 59, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {1, 19}, .shadow = {1, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, 4}, .shadow = {0, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 61, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {4, 4}, .shadow = {4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 65, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 67, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {4, 0}, .shadow = {4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 69, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 71, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {17, -17}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {18, -16}, .shadow = {18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {17, -17}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {18, -16}, .shadow = {18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {17, -17}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {18, -16}, .shadow = {18, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {4, -4}, .shadow = {4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 73, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 75, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 75, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -17}, .shadow = {0, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, -17}, .shadow = {1, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 77, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 79, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 79, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-16, -17}, .shadow = {-16, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {-17, -16}, .shadow = {-17, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-16, -17}, .shadow = {-16, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-17, -16}, .shadow = {-17, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-16, -17}, .shadow = {-16, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-17, -16}, .shadow = {-17, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-4, -4}, .shadow = {-4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 81, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 83, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-4, 0}, .shadow = {-4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 6, .unkFlags = 0, .poseId = 85, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 2, .poseId = 87, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 87, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-18, 19}, .shadow = {-18, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 4, .unkFlags = 2, .poseId = 90, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 4, .unkFlags = 2, .poseId = 94, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 98, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 4, .unkFlags = 2, .poseId = 102, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 4, .unkFlags = 2, .poseId = 106, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 4, .unkFlags = 2, .poseId = 110, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 114, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 115, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 115, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 115, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 4, .unkFlags = 2, .poseId = 118, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 119, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_5_1[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_5_2[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_5_3[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_5_4[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_5_5[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_5_6[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_5_7[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_5_8[] = {
	{ .frames = 20, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_6_1[] = {
	{ .frames = 22, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 15, .unkFlags = 0, .poseId = 128, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 128, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 22, .unkFlags = 0, .poseId = 129, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 15, .unkFlags = 0, .poseId = 129, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 129, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_8_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 139, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 138, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 140, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_8_2[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 142, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 141, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 143, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_8_3[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 145, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 144, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 146, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_8_4[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 148, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 147, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 149, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_8_5[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 151, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 150, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 152, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_8_6[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 154, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 153, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 155, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_8_7[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 157, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 156, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 158, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_8_8[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 160, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 159, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 14, .unkFlags = 0, .poseId = 161, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {20, 11}, .shadow = {20, 11} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {19, 21}, .shadow = {19, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {10, 21}, .shadow = {10, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {16, -5}, .shadow = {16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 165, .offset = {18, 5}, .shadow = {18, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {12, 6}, .shadow = {12, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-9, -11}, .shadow = {-9, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-7, -16}, .shadow = {-7, -16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 163, .offset = {7, -16}, .shadow = {7, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {9, -9}, .shadow = {9, -9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-16, -5}, .shadow = {-16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 168, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 167, .offset = {-18, 5}, .shadow = {-18, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {-12, 6}, .shadow = {-12, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-20, 11}, .shadow = {-20, 11} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {-19, 21}, .shadow = {-19, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {-10, 21}, .shadow = {-10, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 185, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 185, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 185, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 186, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 184, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 188, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 189, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 187, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 191, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 192, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 192, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 190, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 194, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 194, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 195, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 195, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 195, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 193, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sCloysterAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 197, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 198, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 198, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 196, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sCloysterGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_1.4bpp.lz");
static const ax_sprite sCloysterSprites1[] = {
	{sCloysterGfx1, ARRAY_COUNT(sCloysterGfx1)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_2.4bpp.lz");
static const ax_sprite sCloysterSprites2[] = {
	{sCloysterGfx2, ARRAY_COUNT(sCloysterGfx2)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_3.4bpp.lz");
static const ax_sprite sCloysterSprites3[] = {
	{sCloysterGfx3, ARRAY_COUNT(sCloysterGfx3)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_4.4bpp.lz");
static const ax_sprite sCloysterSprites4[] = {
	{sCloysterGfx4, ARRAY_COUNT(sCloysterGfx4)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_5.4bpp.lz");
static const ax_sprite sCloysterSprites5[] = {
	{sCloysterGfx5, ARRAY_COUNT(sCloysterGfx5)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_6.4bpp.lz");
static const ax_sprite sCloysterSprites6[] = {
	{sCloysterGfx6, ARRAY_COUNT(sCloysterGfx6)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_7.4bpp.lz");
static const ax_sprite sCloysterSprites7[] = {
	{sCloysterGfx7, ARRAY_COUNT(sCloysterGfx7)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_8.4bpp.lz");
static const ax_sprite sCloysterSprites8[] = {
	{sCloysterGfx8, ARRAY_COUNT(sCloysterGfx8)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_9.4bpp.lz");
static const ax_sprite sCloysterSprites9[] = {
	{sCloysterGfx9, ARRAY_COUNT(sCloysterGfx9)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_10.4bpp.lz");
static const ax_sprite sCloysterSprites10[] = {
	{sCloysterGfx10, ARRAY_COUNT(sCloysterGfx10)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_11.4bpp.lz");
static const ax_sprite sCloysterSprites11[] = {
	{sCloysterGfx11, ARRAY_COUNT(sCloysterGfx11)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_12.4bpp.lz");
static const ax_sprite sCloysterSprites12[] = {
	{sCloysterGfx12, ARRAY_COUNT(sCloysterGfx12)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_13.4bpp.lz");
static const ax_sprite sCloysterSprites13[] = {
	{sCloysterGfx13, ARRAY_COUNT(sCloysterGfx13)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_14.4bpp.lz");
static const ax_sprite sCloysterSprites14[] = {
	{sCloysterGfx14, ARRAY_COUNT(sCloysterGfx14)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_15.4bpp.lz");
static const ax_sprite sCloysterSprites15[] = {
	{sCloysterGfx15, ARRAY_COUNT(sCloysterGfx15)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_16.4bpp.lz");
static const u8 sCloysterGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_16_1.4bpp.lz");
static const u8 sCloysterGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_16_2.4bpp.lz");
static const ax_sprite sCloysterSprites16[] = {
	{NULL, 32}, 
	{sCloysterGfx16, ARRAY_COUNT(sCloysterGfx16)}, 
	{NULL, 32}, 
	{sCloysterGfx16_1, ARRAY_COUNT(sCloysterGfx16_1)}, 
	{NULL, 32}, 
	{sCloysterGfx16_2, ARRAY_COUNT(sCloysterGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCloysterGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_17.4bpp.lz");
static const u8 sCloysterGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_17_1.4bpp.lz");
static const u8 sCloysterGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_17_2.4bpp.lz");
static const ax_sprite sCloysterSprites17[] = {
	{NULL, 64}, 
	{sCloysterGfx17, ARRAY_COUNT(sCloysterGfx17)}, 
	{NULL, 32}, 
	{sCloysterGfx17_1, ARRAY_COUNT(sCloysterGfx17_1)}, 
	{NULL, 32}, 
	{sCloysterGfx17_2, ARRAY_COUNT(sCloysterGfx17_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCloysterGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_18.4bpp.lz");
static const u8 sCloysterGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_18_1.4bpp.lz");
static const u8 sCloysterGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_18_2.4bpp.lz");
static const ax_sprite sCloysterSprites18[] = {
	{sCloysterGfx18, ARRAY_COUNT(sCloysterGfx18)}, 
	{NULL, 64}, 
	{sCloysterGfx18_1, ARRAY_COUNT(sCloysterGfx18_1)}, 
	{NULL, 32}, 
	{sCloysterGfx18_2, ARRAY_COUNT(sCloysterGfx18_2)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_19.4bpp.lz");
static const u8 sCloysterGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_19_1.4bpp.lz");
static const ax_sprite sCloysterSprites19[] = {
	{sCloysterGfx19, ARRAY_COUNT(sCloysterGfx19)}, 
	{NULL, 32}, 
	{sCloysterGfx19_1, ARRAY_COUNT(sCloysterGfx19_1)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_20.4bpp.lz");
static const u8 sCloysterGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_20_1.4bpp.lz");
static const ax_sprite sCloysterSprites20[] = {
	{sCloysterGfx20, ARRAY_COUNT(sCloysterGfx20)}, 
	{NULL, 32}, 
	{sCloysterGfx20_1, ARRAY_COUNT(sCloysterGfx20_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCloysterGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_21.4bpp.lz");
static const ax_sprite sCloysterSprites21[] = {
	{sCloysterGfx21, ARRAY_COUNT(sCloysterGfx21)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_22.4bpp.lz");
static const u8 sCloysterGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_22_1.4bpp.lz");
static const u8 sCloysterGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_22_2.4bpp.lz");
static const ax_sprite sCloysterSprites22[] = {
	{sCloysterGfx22, ARRAY_COUNT(sCloysterGfx22)}, 
	{NULL, 32}, 
	{sCloysterGfx22_1, ARRAY_COUNT(sCloysterGfx22_1)}, 
	{NULL, 32}, 
	{sCloysterGfx22_2, ARRAY_COUNT(sCloysterGfx22_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCloysterGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_23.4bpp.lz");
static const u8 sCloysterGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_23_1.4bpp.lz");
static const ax_sprite sCloysterSprites23[] = {
	{NULL, 32}, 
	{sCloysterGfx23, ARRAY_COUNT(sCloysterGfx23)}, 
	{NULL, 32}, 
	{sCloysterGfx23_1, ARRAY_COUNT(sCloysterGfx23_1)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_24.4bpp.lz");
static const u8 sCloysterGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_24_1.4bpp.lz");
static const u8 sCloysterGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_24_2.4bpp.lz");
static const u8 sCloysterGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_24_3.4bpp.lz");
static const ax_sprite sCloysterSprites24[] = {
	{sCloysterGfx24, ARRAY_COUNT(sCloysterGfx24)}, 
	{NULL, 32}, 
	{sCloysterGfx24_1, ARRAY_COUNT(sCloysterGfx24_1)}, 
	{NULL, 32}, 
	{sCloysterGfx24_2, ARRAY_COUNT(sCloysterGfx24_2)}, 
	{NULL, 32}, 
	{sCloysterGfx24_3, ARRAY_COUNT(sCloysterGfx24_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCloysterGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_25.4bpp.lz");
static const u8 sCloysterGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_25_1.4bpp.lz");
static const u8 sCloysterGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_25_2.4bpp.lz");
static const ax_sprite sCloysterSprites25[] = {
	{NULL, 32}, 
	{sCloysterGfx25, ARRAY_COUNT(sCloysterGfx25)}, 
	{NULL, 32}, 
	{sCloysterGfx25_1, ARRAY_COUNT(sCloysterGfx25_1)}, 
	{NULL, 32}, 
	{sCloysterGfx25_2, ARRAY_COUNT(sCloysterGfx25_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCloysterGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_26.4bpp.lz");
static const u8 sCloysterGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_26_1.4bpp.lz");
static const ax_sprite sCloysterSprites26[] = {
	{NULL, 32}, 
	{sCloysterGfx26, ARRAY_COUNT(sCloysterGfx26)}, 
	{NULL, 32}, 
	{sCloysterGfx26_1, ARRAY_COUNT(sCloysterGfx26_1)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_27.4bpp.lz");
static const u8 sCloysterGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_27_1.4bpp.lz");
static const ax_sprite sCloysterSprites27[] = {
	{sCloysterGfx27, ARRAY_COUNT(sCloysterGfx27)}, 
	{NULL, 32}, 
	{sCloysterGfx27_1, ARRAY_COUNT(sCloysterGfx27_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCloysterGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_28.4bpp.lz");
static const u8 sCloysterGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_28_1.4bpp.lz");
static const ax_sprite sCloysterSprites28[] = {
	{NULL, 32}, 
	{sCloysterGfx28, ARRAY_COUNT(sCloysterGfx28)}, 
	{NULL, 64}, 
	{sCloysterGfx28_1, ARRAY_COUNT(sCloysterGfx28_1)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_29.4bpp.lz");
static const u8 sCloysterGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_29_1.4bpp.lz");
static const ax_sprite sCloysterSprites29[] = {
	{sCloysterGfx29, ARRAY_COUNT(sCloysterGfx29)}, 
	{NULL, 32}, 
	{sCloysterGfx29_1, ARRAY_COUNT(sCloysterGfx29_1)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_30.4bpp.lz");
static const u8 sCloysterGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_30_1.4bpp.lz");
static const ax_sprite sCloysterSprites30[] = {
	{sCloysterGfx30, ARRAY_COUNT(sCloysterGfx30)}, 
	{NULL, 32}, 
	{sCloysterGfx30_1, ARRAY_COUNT(sCloysterGfx30_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCloysterGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_31.4bpp.lz");
static const ax_sprite sCloysterSprites31[] = {
	{sCloysterGfx31, ARRAY_COUNT(sCloysterGfx31)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_32.4bpp.lz");
static const ax_sprite sCloysterSprites32[] = {
	{sCloysterGfx32, ARRAY_COUNT(sCloysterGfx32)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_33.4bpp.lz");
static const ax_sprite sCloysterSprites33[] = {
	{sCloysterGfx33, ARRAY_COUNT(sCloysterGfx33)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_34.4bpp.lz");
static const ax_sprite sCloysterSprites34[] = {
	{sCloysterGfx34, ARRAY_COUNT(sCloysterGfx34)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_35.4bpp.lz");
static const ax_sprite sCloysterSprites35[] = {
	{sCloysterGfx35, ARRAY_COUNT(sCloysterGfx35)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_36.4bpp.lz");
static const ax_sprite sCloysterSprites36[] = {
	{sCloysterGfx36, ARRAY_COUNT(sCloysterGfx36)}, 
	{NULL, 0}
};
static const u8 sCloysterGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/cloyster/sprite_37.4bpp.lz");
static const ax_sprite sCloysterSprites37[] = {
	{sCloysterGfx37, ARRAY_COUNT(sCloysterGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesCloyster[] = {
	sCloysterPose1,
	sCloysterPose2,
	sCloysterPose3,
	sCloysterPose4,
	sCloysterPose5,
	sCloysterPose6,
	sCloysterPose7,
	sCloysterPose8,
	sCloysterPose9,
	sCloysterPose10,
	sCloysterPose11,
	sCloysterPose12,
	sCloysterPose13,
	sCloysterPose14,
	sCloysterPose15,
	sCloysterPose16,
	sCloysterPose17,
	sCloysterPose18,
	sCloysterPose19,
	sCloysterPose20,
	sCloysterPose21,
	sCloysterPose22,
	sCloysterPose23,
	sCloysterPose24,
	sCloysterPose1,
	sCloysterPose2,
	sCloysterPose3,
	sCloysterPose28,
	sCloysterPose4,
	sCloysterPose5,
	sCloysterPose6,
	sCloysterPose32,
	sCloysterPose7,
	sCloysterPose8,
	sCloysterPose9,
	sCloysterPose36,
	sCloysterPose10,
	sCloysterPose11,
	sCloysterPose12,
	sCloysterPose40,
	sCloysterPose13,
	sCloysterPose14,
	sCloysterPose15,
	sCloysterPose44,
	sCloysterPose16,
	sCloysterPose17,
	sCloysterPose18,
	sCloysterPose48,
	sCloysterPose19,
	sCloysterPose20,
	sCloysterPose21,
	sCloysterPose52,
	sCloysterPose22,
	sCloysterPose23,
	sCloysterPose24,
	sCloysterPose56,
	sCloysterPose1,
	sCloysterPose2,
	sCloysterPose3,
	sCloysterPose28,
	sCloysterPose4,
	sCloysterPose5,
	sCloysterPose6,
	sCloysterPose32,
	sCloysterPose7,
	sCloysterPose8,
	sCloysterPose9,
	sCloysterPose36,
	sCloysterPose10,
	sCloysterPose11,
	sCloysterPose12,
	sCloysterPose40,
	sCloysterPose13,
	sCloysterPose14,
	sCloysterPose15,
	sCloysterPose44,
	sCloysterPose16,
	sCloysterPose17,
	sCloysterPose18,
	sCloysterPose48,
	sCloysterPose19,
	sCloysterPose20,
	sCloysterPose21,
	sCloysterPose52,
	sCloysterPose22,
	sCloysterPose23,
	sCloysterPose24,
	sCloysterPose56,
	sCloysterPose1,
	sCloysterPose2,
	sCloysterPose3,
	sCloysterPose92,
	sCloysterPose4,
	sCloysterPose5,
	sCloysterPose6,
	sCloysterPose96,
	sCloysterPose7,
	sCloysterPose8,
	sCloysterPose9,
	sCloysterPose100,
	sCloysterPose10,
	sCloysterPose11,
	sCloysterPose12,
	sCloysterPose104,
	sCloysterPose13,
	sCloysterPose14,
	sCloysterPose15,
	sCloysterPose108,
	sCloysterPose16,
	sCloysterPose17,
	sCloysterPose18,
	sCloysterPose112,
	sCloysterPose19,
	sCloysterPose20,
	sCloysterPose21,
	sCloysterPose116,
	sCloysterPose22,
	sCloysterPose23,
	sCloysterPose24,
	sCloysterPose120,
	sCloysterPose121,
	sCloysterPose122,
	sCloysterPose123,
	sCloysterPose124,
	sCloysterPose125,
	sCloysterPose126,
	sCloysterPose127,
	sCloysterPose128,
	sCloysterPose129,
	sCloysterPose130,
	sCloysterPose131,
	sCloysterPose132,
	sCloysterPose133,
	sCloysterPose134,
	sCloysterPose135,
	sCloysterPose136,
	sCloysterPose137,
	sCloysterPose138,
	sCloysterPose1,
	sCloysterPose2,
	sCloysterPose3,
	sCloysterPose4,
	sCloysterPose5,
	sCloysterPose6,
	sCloysterPose7,
	sCloysterPose8,
	sCloysterPose9,
	sCloysterPose10,
	sCloysterPose11,
	sCloysterPose12,
	sCloysterPose13,
	sCloysterPose14,
	sCloysterPose15,
	sCloysterPose16,
	sCloysterPose17,
	sCloysterPose18,
	sCloysterPose19,
	sCloysterPose20,
	sCloysterPose21,
	sCloysterPose22,
	sCloysterPose23,
	sCloysterPose24,
	sCloysterPose92,
	sCloysterPose120,
	sCloysterPose165,
	sCloysterPose166,
	sCloysterPose108,
	sCloysterPose168,
	sCloysterPose169,
	sCloysterPose96,
	sCloysterPose92,
	sCloysterPose96,
	sCloysterPose169,
	sCloysterPose168,
	sCloysterPose108,
	sCloysterPose166,
	sCloysterPose165,
	sCloysterPose120,
	sCloysterPose1,
	sCloysterPose2,
	sCloysterPose3,
	sCloysterPose4,
	sCloysterPose5,
	sCloysterPose6,
	sCloysterPose7,
	sCloysterPose8,
	sCloysterPose9,
	sCloysterPose10,
	sCloysterPose11,
	sCloysterPose12,
	sCloysterPose13,
	sCloysterPose14,
	sCloysterPose15,
	sCloysterPose16,
	sCloysterPose17,
	sCloysterPose18,
	sCloysterPose19,
	sCloysterPose20,
	sCloysterPose21,
	sCloysterPose22,
	sCloysterPose23,
	sCloysterPose24,
	sCloysterPose92,
	sCloysterPose204,
	sCloysterPose205,
	sCloysterPose206,
	sCloysterPose108,
	sCloysterPose208,
	sCloysterPose169,
	sCloysterPose210,
	sCloysterPose1,
	sCloysterPose22,
	sCloysterPose19,
	sCloysterPose16,
	sCloysterPose13,
	sCloysterPose10,
	sCloysterPose7,
	sCloysterPose4,
};

static const struct PositionSets sAxPositionsCloyster[] = {
	[0] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[1] = { .set = { {-1, -1}, {-10, -9}, {7, -9}, {-1, -12} } },
	[2] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[3] = { .set = { {5, -2}, {8, -12}, {-5, -3}, {0, -9} } },
	[4] = { .set = { {5, -2}, {9, -12}, {-4, -3}, {-1, -9} } },
	[5] = { .set = { {5, -2}, {7, -11}, {-4, -3}, {-1, -9} } },
	[6] = { .set = { {9, -7}, {9, -13}, {5, -4}, {0, -9} } },
	[7] = { .set = { {9, -7}, {9, -12}, {3, -3}, {0, -9} } },
	[8] = { .set = { {9, -7}, {9, -12}, {4, -5}, {0, -9} } },
	[9] = { .set = { {7, -10}, {-2, -17}, {8, -7}, {1, -10} } },
	[10] = { .set = { {6, -10}, {-2, -17}, {8, -7}, {0, -10} } },
	[11] = { .set = { {8, -10}, {-2, -16}, {8, -8}, {0, -10} } },
	[12] = { .set = { {-1, -16}, {6, -13}, {-8, -13}, {-1, -11} } },
	[13] = { .set = { {-1, -15}, {7, -12}, {-9, -12}, {-1, -11} } },
	[14] = { .set = { {-1, -16}, {6, -12}, {-7, -12}, {-1, -11} } },
	[15] = { .set = { {-9, -10}, {0, -17}, {-10, -7}, {-3, -10} } },
	[16] = { .set = { {-8, -10}, {0, -17}, {-10, -7}, {-2, -10} } },
	[17] = { .set = { {-10, -10}, {0, -16}, {-10, -8}, {-2, -10} } },
	[18] = { .set = { {-11, -7}, {-11, -13}, {-7, -4}, {-2, -9} } },
	[19] = { .set = { {-11, -7}, {-11, -12}, {-5, -3}, {-2, -9} } },
	[20] = { .set = { {-11, -7}, {-11, -12}, {-6, -5}, {-2, -9} } },
	[21] = { .set = { {-7, -2}, {-10, -12}, {3, -3}, {-2, -9} } },
	[22] = { .set = { {-7, -2}, {-11, -12}, {2, -3}, {-1, -9} } },
	[23] = { .set = { {-7, -2}, {-9, -11}, {2, -3}, {-1, -9} } },
	[24] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[25] = { .set = { {-1, -1}, {-10, -9}, {7, -9}, {-1, -12} } },
	[26] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[27] = { .set = { {-1, -2}, {-10, -6}, {8, -6}, {-1, -11} } },
	[28] = { .set = { {5, -2}, {8, -12}, {-5, -3}, {0, -9} } },
	[29] = { .set = { {5, -2}, {9, -12}, {-4, -3}, {-1, -9} } },
	[30] = { .set = { {5, -2}, {7, -11}, {-4, -3}, {-1, -9} } },
	[31] = { .set = { {4, -3}, {8, -9}, {-3, -1}, {0, -9} } },
	[32] = { .set = { {9, -7}, {9, -13}, {5, -4}, {0, -9} } },
	[33] = { .set = { {9, -7}, {9, -12}, {3, -3}, {0, -9} } },
	[34] = { .set = { {9, -7}, {9, -12}, {4, -5}, {0, -9} } },
	[35] = { .set = { {8, -5}, {7, -14}, {6, -3}, {-1, -9} } },
	[36] = { .set = { {7, -10}, {-2, -17}, {8, -7}, {1, -10} } },
	[37] = { .set = { {6, -10}, {-2, -17}, {8, -7}, {0, -10} } },
	[38] = { .set = { {8, -10}, {-2, -16}, {8, -8}, {0, -10} } },
	[39] = { .set = { {7, -9}, {-1, -17}, {7, -8}, {1, -11} } },
	[40] = { .set = { {-1, -16}, {6, -13}, {-8, -13}, {-1, -11} } },
	[41] = { .set = { {-1, -15}, {7, -12}, {-9, -12}, {-1, -11} } },
	[42] = { .set = { {-1, -16}, {6, -12}, {-7, -12}, {-1, -11} } },
	[43] = { .set = { {-1, -17}, {6, -13}, {-8, -13}, {-1, -13} } },
	[44] = { .set = { {-9, -10}, {0, -17}, {-10, -7}, {-3, -10} } },
	[45] = { .set = { {-8, -10}, {0, -17}, {-10, -7}, {-2, -10} } },
	[46] = { .set = { {-10, -10}, {0, -16}, {-10, -8}, {-2, -10} } },
	[47] = { .set = { {-9, -9}, {-1, -17}, {-9, -8}, {-3, -11} } },
	[48] = { .set = { {-11, -7}, {-11, -13}, {-7, -4}, {-2, -9} } },
	[49] = { .set = { {-11, -7}, {-11, -12}, {-5, -3}, {-2, -9} } },
	[50] = { .set = { {-11, -7}, {-11, -12}, {-6, -5}, {-2, -9} } },
	[51] = { .set = { {-10, -5}, {-9, -14}, {-8, -3}, {-1, -9} } },
	[52] = { .set = { {-7, -2}, {-10, -12}, {3, -3}, {-2, -9} } },
	[53] = { .set = { {-7, -2}, {-11, -12}, {2, -3}, {-1, -9} } },
	[54] = { .set = { {-7, -2}, {-9, -11}, {2, -3}, {-1, -9} } },
	[55] = { .set = { {-6, -3}, {-10, -9}, {1, -1}, {-2, -9} } },
	[56] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[57] = { .set = { {-1, -1}, {-10, -9}, {7, -9}, {-1, -12} } },
	[58] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[59] = { .set = { {-1, -2}, {-10, -6}, {8, -6}, {-1, -11} } },
	[60] = { .set = { {5, -2}, {8, -12}, {-5, -3}, {0, -9} } },
	[61] = { .set = { {5, -2}, {9, -12}, {-4, -3}, {-1, -9} } },
	[62] = { .set = { {5, -2}, {7, -11}, {-4, -3}, {-1, -9} } },
	[63] = { .set = { {4, -3}, {8, -9}, {-3, -1}, {0, -9} } },
	[64] = { .set = { {9, -7}, {9, -13}, {5, -4}, {0, -9} } },
	[65] = { .set = { {9, -7}, {9, -12}, {3, -3}, {0, -9} } },
	[66] = { .set = { {9, -7}, {9, -12}, {4, -5}, {0, -9} } },
	[67] = { .set = { {8, -5}, {7, -14}, {6, -3}, {-1, -9} } },
	[68] = { .set = { {7, -10}, {-2, -17}, {8, -7}, {1, -10} } },
	[69] = { .set = { {6, -10}, {-2, -17}, {8, -7}, {0, -10} } },
	[70] = { .set = { {8, -10}, {-2, -16}, {8, -8}, {0, -10} } },
	[71] = { .set = { {7, -9}, {-1, -17}, {7, -8}, {1, -11} } },
	[72] = { .set = { {-1, -16}, {6, -13}, {-8, -13}, {-1, -11} } },
	[73] = { .set = { {-1, -15}, {7, -12}, {-9, -12}, {-1, -11} } },
	[74] = { .set = { {-1, -16}, {6, -12}, {-7, -12}, {-1, -11} } },
	[75] = { .set = { {-1, -17}, {6, -13}, {-8, -13}, {-1, -13} } },
	[76] = { .set = { {-9, -10}, {0, -17}, {-10, -7}, {-3, -10} } },
	[77] = { .set = { {-8, -10}, {0, -17}, {-10, -7}, {-2, -10} } },
	[78] = { .set = { {-10, -10}, {0, -16}, {-10, -8}, {-2, -10} } },
	[79] = { .set = { {-9, -9}, {-1, -17}, {-9, -8}, {-3, -11} } },
	[80] = { .set = { {-11, -7}, {-11, -13}, {-7, -4}, {-2, -9} } },
	[81] = { .set = { {-11, -7}, {-11, -12}, {-5, -3}, {-2, -9} } },
	[82] = { .set = { {-11, -7}, {-11, -12}, {-6, -5}, {-2, -9} } },
	[83] = { .set = { {-10, -5}, {-9, -14}, {-8, -3}, {-1, -9} } },
	[84] = { .set = { {-7, -2}, {-10, -12}, {3, -3}, {-2, -9} } },
	[85] = { .set = { {-7, -2}, {-11, -12}, {2, -3}, {-1, -9} } },
	[86] = { .set = { {-7, -2}, {-9, -11}, {2, -3}, {-1, -9} } },
	[87] = { .set = { {-6, -3}, {-10, -9}, {1, -1}, {-2, -9} } },
	[88] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[89] = { .set = { {-1, -1}, {-10, -9}, {7, -9}, {-1, -12} } },
	[90] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[91] = { .set = { {-1, -2}, {-10, -5}, {9, -5}, {-1, -12} } },
	[92] = { .set = { {5, -2}, {8, -12}, {-5, -3}, {0, -9} } },
	[93] = { .set = { {5, -2}, {9, -12}, {-4, -3}, {-1, -9} } },
	[94] = { .set = { {5, -2}, {7, -11}, {-4, -3}, {-1, -9} } },
	[95] = { .set = { {5, -3}, {10, -8}, {-5, -1}, {-1, -10} } },
	[96] = { .set = { {9, -7}, {9, -13}, {5, -4}, {0, -9} } },
	[97] = { .set = { {9, -7}, {9, -12}, {3, -3}, {0, -9} } },
	[98] = { .set = { {9, -7}, {9, -12}, {4, -5}, {0, -9} } },
	[99] = { .set = { {10, -6}, {9, -11}, {6, -1}, {0, -9} } },
	[100] = { .set = { {7, -10}, {-2, -17}, {8, -7}, {1, -10} } },
	[101] = { .set = { {6, -10}, {-2, -17}, {8, -7}, {0, -10} } },
	[102] = { .set = { {8, -10}, {-2, -16}, {8, -8}, {0, -10} } },
	[103] = { .set = { {6, -9}, {-4, -17}, {8, -9}, {0, -9} } },
	[104] = { .set = { {-1, -16}, {6, -13}, {-8, -13}, {-1, -11} } },
	[105] = { .set = { {-1, -15}, {7, -12}, {-9, -12}, {-1, -11} } },
	[106] = { .set = { {-1, -16}, {6, -12}, {-7, -12}, {-1, -11} } },
	[107] = { .set = { {-1, -16}, {8, -12}, {-9, -12}, {-1, -12} } },
	[108] = { .set = { {-9, -10}, {0, -17}, {-10, -7}, {-3, -10} } },
	[109] = { .set = { {-8, -10}, {0, -17}, {-10, -7}, {-2, -10} } },
	[110] = { .set = { {-10, -10}, {0, -16}, {-10, -8}, {-2, -10} } },
	[111] = { .set = { {-8, -9}, {2, -17}, {-10, -9}, {-2, -9} } },
	[112] = { .set = { {-11, -7}, {-11, -13}, {-7, -4}, {-2, -9} } },
	[113] = { .set = { {-11, -7}, {-11, -12}, {-5, -3}, {-2, -9} } },
	[114] = { .set = { {-11, -7}, {-11, -12}, {-6, -5}, {-2, -9} } },
	[115] = { .set = { {-12, -6}, {-11, -11}, {-8, -1}, {-2, -9} } },
	[116] = { .set = { {-7, -2}, {-10, -12}, {3, -3}, {-2, -9} } },
	[117] = { .set = { {-7, -2}, {-11, -12}, {2, -3}, {-1, -9} } },
	[118] = { .set = { {-7, -2}, {-9, -11}, {2, -3}, {-1, -9} } },
	[119] = { .set = { {-7, -3}, {-12, -8}, {3, -1}, {-1, -10} } },
	[120] = { .set = { {-1, -2}, {-8, -6}, {7, -6}, {-1, -11} } },
	[121] = { .set = { {5, -1}, {8, -7}, {-2, 0}, {0, -9} } },
	[122] = { .set = { {9, -4}, {9, -10}, {7, -3}, {2, -9} } },
	[123] = { .set = { {7, -9}, {-2, -17}, {8, -8}, {0, -10} } },
	[124] = { .set = { {-1, -17}, {6, -13}, {-8, -13}, {-1, -12} } },
	[125] = { .set = { {-9, -9}, {0, -17}, {-10, -8}, {-2, -10} } },
	[126] = { .set = { {-11, -4}, {-11, -10}, {-9, -3}, {-4, -9} } },
	[127] = { .set = { {-7, -1}, {-10, -7}, {0, 0}, {-2, -9} } },
	[128] = { .set = { {-7, -6}, {-10, -16}, {2, -7}, {-1, -13} } },
	[129] = { .set = { {-7, -6}, {-9, -14}, {1, -7}, {0, -12} } },
	[130] = { .set = { {-1, -3}, {-8, -9}, {6, -9}, {-1, -11} } },
	[131] = { .set = { {6, -8}, {8, -13}, {-1, -6}, {-1, -11} } },
	[132] = { .set = { {9, -10}, {7, -15}, {5, -7}, {0, -11} } },
	[133] = { .set = { {5, -12}, {-5, -17}, {5, -9}, {-2, -10} } },
	[134] = { .set = { {-1, -16}, {6, -14}, {-7, -14}, {-1, -12} } },
	[135] = { .set = { {-6, -12}, {4, -17}, {-6, -9}, {1, -10} } },
	[136] = { .set = { {-10, -10}, {-8, -15}, {-6, -7}, {-1, -11} } },
	[137] = { .set = { {-7, -8}, {-9, -13}, {0, -6}, {0, -11} } },
	[138] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[139] = { .set = { {-1, -1}, {-10, -9}, {7, -9}, {-1, -12} } },
	[140] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[141] = { .set = { {5, -2}, {8, -12}, {-5, -3}, {0, -9} } },
	[142] = { .set = { {5, -2}, {9, -12}, {-4, -3}, {-1, -9} } },
	[143] = { .set = { {5, -2}, {7, -11}, {-4, -3}, {-1, -9} } },
	[144] = { .set = { {9, -7}, {9, -13}, {5, -4}, {0, -9} } },
	[145] = { .set = { {9, -7}, {9, -12}, {3, -3}, {0, -9} } },
	[146] = { .set = { {9, -7}, {9, -12}, {4, -5}, {0, -9} } },
	[147] = { .set = { {7, -10}, {-2, -17}, {8, -7}, {1, -10} } },
	[148] = { .set = { {6, -10}, {-2, -17}, {8, -7}, {0, -10} } },
	[149] = { .set = { {8, -10}, {-2, -16}, {8, -8}, {0, -10} } },
	[150] = { .set = { {-1, -16}, {6, -13}, {-8, -13}, {-1, -11} } },
	[151] = { .set = { {-1, -15}, {7, -12}, {-9, -12}, {-1, -11} } },
	[152] = { .set = { {-1, -16}, {6, -12}, {-7, -12}, {-1, -11} } },
	[153] = { .set = { {-9, -10}, {0, -17}, {-10, -7}, {-3, -10} } },
	[154] = { .set = { {-8, -10}, {0, -17}, {-10, -7}, {-2, -10} } },
	[155] = { .set = { {-10, -10}, {0, -16}, {-10, -8}, {-2, -10} } },
	[156] = { .set = { {-11, -7}, {-11, -13}, {-7, -4}, {-2, -9} } },
	[157] = { .set = { {-11, -7}, {-11, -12}, {-5, -3}, {-2, -9} } },
	[158] = { .set = { {-11, -7}, {-11, -12}, {-6, -5}, {-2, -9} } },
	[159] = { .set = { {-7, -2}, {-10, -12}, {3, -3}, {-2, -9} } },
	[160] = { .set = { {-7, -2}, {-11, -12}, {2, -3}, {-1, -9} } },
	[161] = { .set = { {-7, -2}, {-9, -11}, {2, -3}, {-1, -9} } },
	[162] = { .set = { {-1, -2}, {-10, -5}, {9, -5}, {-1, -12} } },
	[163] = { .set = { {-7, -3}, {-12, -8}, {3, -1}, {-1, -10} } },
	[164] = { .set = { {-10, -6}, {-9, -11}, {-6, -1}, {0, -9} } },
	[165] = { .set = { {-7, -9}, {3, -17}, {-9, -9}, {-1, -9} } },
	[166] = { .set = { {-1, -16}, {8, -12}, {-9, -12}, {-1, -12} } },
	[167] = { .set = { {5, -9}, {-5, -17}, {7, -9}, {-1, -9} } },
	[168] = { .set = { {9, -6}, {8, -11}, {5, -1}, {-1, -9} } },
	[169] = { .set = { {5, -3}, {10, -8}, {-5, -1}, {-1, -10} } },
	[170] = { .set = { {-1, -2}, {-10, -5}, {9, -5}, {-1, -12} } },
	[171] = { .set = { {5, -3}, {10, -8}, {-5, -1}, {-1, -10} } },
	[172] = { .set = { {9, -6}, {8, -11}, {5, -1}, {-1, -9} } },
	[173] = { .set = { {5, -9}, {-5, -17}, {7, -9}, {-1, -9} } },
	[174] = { .set = { {-1, -16}, {8, -12}, {-9, -12}, {-1, -12} } },
	[175] = { .set = { {-7, -9}, {3, -17}, {-9, -9}, {-1, -9} } },
	[176] = { .set = { {-10, -6}, {-9, -11}, {-6, -1}, {0, -9} } },
	[177] = { .set = { {-7, -3}, {-12, -8}, {3, -1}, {-1, -10} } },
	[178] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[179] = { .set = { {-1, -1}, {-10, -9}, {7, -9}, {-1, -12} } },
	[180] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[181] = { .set = { {5, -2}, {8, -12}, {-5, -3}, {0, -9} } },
	[182] = { .set = { {5, -2}, {9, -12}, {-4, -3}, {-1, -9} } },
	[183] = { .set = { {5, -2}, {7, -11}, {-4, -3}, {-1, -9} } },
	[184] = { .set = { {9, -7}, {9, -13}, {5, -4}, {0, -9} } },
	[185] = { .set = { {9, -7}, {9, -12}, {3, -3}, {0, -9} } },
	[186] = { .set = { {9, -7}, {9, -12}, {4, -5}, {0, -9} } },
	[187] = { .set = { {7, -10}, {-2, -17}, {8, -7}, {1, -10} } },
	[188] = { .set = { {6, -10}, {-2, -17}, {8, -7}, {0, -10} } },
	[189] = { .set = { {8, -10}, {-2, -16}, {8, -8}, {0, -10} } },
	[190] = { .set = { {-1, -16}, {6, -13}, {-8, -13}, {-1, -11} } },
	[191] = { .set = { {-1, -15}, {7, -12}, {-9, -12}, {-1, -11} } },
	[192] = { .set = { {-1, -16}, {6, -12}, {-7, -12}, {-1, -11} } },
	[193] = { .set = { {-9, -10}, {0, -17}, {-10, -7}, {-3, -10} } },
	[194] = { .set = { {-8, -10}, {0, -17}, {-10, -7}, {-2, -10} } },
	[195] = { .set = { {-10, -10}, {0, -16}, {-10, -8}, {-2, -10} } },
	[196] = { .set = { {-11, -7}, {-11, -13}, {-7, -4}, {-2, -9} } },
	[197] = { .set = { {-11, -7}, {-11, -12}, {-5, -3}, {-2, -9} } },
	[198] = { .set = { {-11, -7}, {-11, -12}, {-6, -5}, {-2, -9} } },
	[199] = { .set = { {-7, -2}, {-10, -12}, {3, -3}, {-2, -9} } },
	[200] = { .set = { {-7, -2}, {-11, -12}, {2, -3}, {-1, -9} } },
	[201] = { .set = { {-7, -2}, {-9, -11}, {2, -3}, {-1, -9} } },
	[202] = { .set = { {-1, -2}, {-10, -5}, {9, -5}, {-1, -12} } },
	[203] = { .set = { {-7, -4}, {-12, -9}, {3, -2}, {-1, -11} } },
	[204] = { .set = { {-11, -6}, {-10, -11}, {-7, -1}, {-1, -9} } },
	[205] = { .set = { {-7, -8}, {3, -16}, {-9, -8}, {-1, -8} } },
	[206] = { .set = { {-1, -16}, {8, -12}, {-9, -12}, {-1, -12} } },
	[207] = { .set = { {7, -8}, {-3, -16}, {9, -8}, {1, -8} } },
	[208] = { .set = { {9, -6}, {8, -11}, {5, -1}, {-1, -9} } },
	[209] = { .set = { {9, -3}, {14, -8}, {-1, -1}, {3, -10} } },
	[210] = { .set = { {-1, -1}, {-9, -8}, {7, -8}, {-1, -12} } },
	[211] = { .set = { {-7, -2}, {-10, -12}, {3, -3}, {-2, -9} } },
	[212] = { .set = { {-11, -7}, {-11, -13}, {-7, -4}, {-2, -9} } },
	[213] = { .set = { {-9, -10}, {0, -17}, {-10, -7}, {-3, -10} } },
	[214] = { .set = { {-1, -16}, {6, -13}, {-8, -13}, {-1, -11} } },
	[215] = { .set = { {7, -10}, {-2, -17}, {8, -7}, {1, -10} } },
	[216] = { .set = { {9, -7}, {9, -13}, {5, -4}, {0, -9} } },
	[217] = { .set = { {5, -2}, {8, -12}, {-5, -3}, {0, -9} } },
};

static const ax_anim *const sCloysterAnimTable1[] = {
	sCloysterAnims_1_1,
	sCloysterAnims_1_2,
	sCloysterAnims_1_3,
	sCloysterAnims_1_4,
	sCloysterAnims_1_5,
	sCloysterAnims_1_6,
	sCloysterAnims_1_7,
	sCloysterAnims_1_8,
};

static const ax_anim *const sCloysterAnimTable2[] = {
	sCloysterAnims_2_1,
	sCloysterAnims_2_2,
	sCloysterAnims_2_3,
	sCloysterAnims_2_4,
	sCloysterAnims_2_5,
	sCloysterAnims_2_6,
	sCloysterAnims_2_7,
	sCloysterAnims_2_8,
};

static const ax_anim *const sCloysterAnimTable3[] = {
	sCloysterAnims_3_1,
	sCloysterAnims_3_2,
	sCloysterAnims_3_3,
	sCloysterAnims_3_4,
	sCloysterAnims_3_5,
	sCloysterAnims_3_6,
	sCloysterAnims_3_7,
	sCloysterAnims_3_8,
};

static const ax_anim *const sCloysterAnimTable4[] = {
	sCloysterAnims_4_1,
	sCloysterAnims_4_2,
	sCloysterAnims_4_3,
	sCloysterAnims_4_4,
	sCloysterAnims_4_5,
	sCloysterAnims_4_6,
	sCloysterAnims_4_7,
	sCloysterAnims_4_8,
};

static const ax_anim *const sCloysterAnimTable5[] = {
	sCloysterAnims_5_1,
	sCloysterAnims_5_2,
	sCloysterAnims_5_3,
	sCloysterAnims_5_4,
	sCloysterAnims_5_5,
	sCloysterAnims_5_6,
	sCloysterAnims_5_7,
	sCloysterAnims_5_8,
};

static const ax_anim *const sCloysterAnimTable6[] = {
	sCloysterAnims_6_1,
	sCloysterAnims_6_1,
	sCloysterAnims_6_1,
	sCloysterAnims_6_1,
	sCloysterAnims_6_1,
	sCloysterAnims_6_1,
	sCloysterAnims_6_1,
	sCloysterAnims_6_1,
};

static const ax_anim *const sCloysterAnimTable7[] = {
	gAxSharedAnim_00396,
	gAxSharedAnim_00402,
	gAxSharedAnim_00413,
	gAxSharedAnim_00422,
	gAxSharedAnim_00434,
	gAxSharedAnim_00442,
	gAxSharedAnim_00451,
	gAxSharedAnim_00461,
};

static const ax_anim *const sCloysterAnimTable8[] = {
	sCloysterAnims_8_1,
	sCloysterAnims_8_2,
	sCloysterAnims_8_3,
	sCloysterAnims_8_4,
	sCloysterAnims_8_5,
	sCloysterAnims_8_6,
	sCloysterAnims_8_7,
	sCloysterAnims_8_8,
};

static const ax_anim *const sCloysterAnimTable9[] = {
	gAxSharedAnim_00701,
	sCloysterAnims_9_2,
	sCloysterAnims_9_3,
	gAxSharedAnim_00757,
	sCloysterAnims_9_5,
	gAxSharedAnim_00734,
	sCloysterAnims_9_7,
	sCloysterAnims_9_8,
};

static const ax_anim *const sCloysterAnimTable10[] = {
	gAxSharedAnim_00801,
	gAxSharedAnim_00813,
	gAxSharedAnim_00827,
	gAxSharedAnim_00838,
	gAxSharedAnim_00849,
	gAxSharedAnim_00862,
	gAxSharedAnim_00879,
	gAxSharedAnim_00889,
};

static const ax_anim *const sCloysterAnimTable11[] = {
	gAxSharedAnim_00900,
	gAxSharedAnim_00941,
	sCloysterAnims_11_3,
	sCloysterAnims_11_4,
	sCloysterAnims_11_5,
	sCloysterAnims_11_6,
	sCloysterAnims_11_7,
	gAxSharedAnim_01198,
};

static const ax_anim *const sCloysterAnimTable12[] = {
	gAxSharedAnim_01243,
	gAxSharedAnim_01326,
	gAxSharedAnim_01308,
	gAxSharedAnim_01292,
	gAxSharedAnim_01291,
	gAxSharedAnim_01280,
	gAxSharedAnim_01260,
	gAxSharedAnim_01244,
};

static const ax_anim *const sCloysterAnimTable13[] = {
	gAxSharedAnim_01335,
	gAxSharedAnim_01409,
	gAxSharedAnim_01397,
	gAxSharedAnim_01386,
	gAxSharedAnim_01374,
	gAxSharedAnim_01366,
	gAxSharedAnim_01358,
	gAxSharedAnim_01348,
};

static const ax_anim *const *const sAxAnimationsCloyster[] = {
	sCloysterAnimTable1,
	sCloysterAnimTable2,
	sCloysterAnimTable3,
	sCloysterAnimTable4,
	sCloysterAnimTable5,
	sCloysterAnimTable6,
	sCloysterAnimTable7,
	sCloysterAnimTable8,
	sCloysterAnimTable9,
	sCloysterAnimTable10,
	sCloysterAnimTable11,
	sCloysterAnimTable12,
	sCloysterAnimTable13,
};

static const ax_sprite *const sAxSpritesCloyster[] = {
	sCloysterSprites1,
	sCloysterSprites2,
	sCloysterSprites3,
	sCloysterSprites4,
	sCloysterSprites5,
	sCloysterSprites6,
	sCloysterSprites7,
	sCloysterSprites8,
	sCloysterSprites9,
	sCloysterSprites10,
	sCloysterSprites11,
	sCloysterSprites12,
	sCloysterSprites13,
	sCloysterSprites14,
	sCloysterSprites15,
	sCloysterSprites16,
	sCloysterSprites17,
	sCloysterSprites18,
	sCloysterSprites19,
	sCloysterSprites20,
	sCloysterSprites21,
	sCloysterSprites22,
	sCloysterSprites23,
	sCloysterSprites24,
	sCloysterSprites25,
	sCloysterSprites26,
	sCloysterSprites27,
	sCloysterSprites28,
	sCloysterSprites29,
	sCloysterSprites30,
	sCloysterSprites31,
	sCloysterSprites32,
	sCloysterSprites33,
	sCloysterSprites34,
	sCloysterSprites35,
	sCloysterSprites36,
	sCloysterSprites37,
};

static const axmain sAxMainCloyster = {
	.poses = sAxPosesCloyster,
	.animations = sAxAnimationsCloyster,
	.animCount = ARRAY_COUNT(sAxAnimationsCloyster),
	.spriteData = sAxSpritesCloyster,
	.positions = sAxPositionsCloyster,
};
