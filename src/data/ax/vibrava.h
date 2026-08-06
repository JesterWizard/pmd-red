/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainVibrava;
const SiroArchive gAxVibrava = {"SIRO", &sAxMainVibrava};

static const ax_pose sVibravaPose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose9[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose10[] = {
	AX_POSE(9, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose11[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose12[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose14[] = {
	AX_POSE(13, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose15[] = {
	AX_POSE(14, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose16[] = {
	AX_POSE(9, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose17[] = {
	AX_POSE(10, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose18[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose19[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose21[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose22[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose23[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose24[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose98[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose100[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose102[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose104[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose106[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose108[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose110[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose112[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose121[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose122[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose123[] = {
	AX_POSE(22, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(3, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 10)),
	AX_POSE(23, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(4, 3, 10)),
	AX_POSE(24, OAM1(221, ST_OAM_SQUARE     , 1), OAM2(3, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(5, 3, 10)),
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(11, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(6, 3, 10)),
	AX_POSE(26, OAM1(229, ST_OAM_V_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(7, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose124[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose125[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose126[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose127[] = {
	AX_POSE(30, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose128[] = {
	AX_POSE(29, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose129[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose130[] = {
	AX_POSE(27, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose164[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose165[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose166[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose167[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose168[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose169[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose170[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose182[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose183[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose184[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose213[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose214[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose215[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose216[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVibravaPose217[] = {
	AX_POSE(8, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 10)),
	AX_POSE_TERMINATOR
};
static const ax_anim sVibravaAnims_1_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_1_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_1_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_1_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 9, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_1_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 12, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_1_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 15, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_1_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 18, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 18, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_1_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 21, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 21, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 32, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 35, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {3, -1}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 36, .offset = {9, 4}, .shadow = {9, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {16, 14}, .shadow = {16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {8, 8}, .shadow = {8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 38, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {4, -3}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 39, .offset = {9, -5}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {13, -4}, .shadow = {13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 40, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {6, 0}, .shadow = {6, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 41, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {3, -9}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 42, .offset = {8, -17}, .shadow = {8, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {16, -20}, .shadow = {16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, -5}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 45, .offset = {0, -11}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, -16}, .shadow = {0, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 47, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-3, -9}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 48, .offset = {-8, -17}, .shadow = {-8, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-16, -20}, .shadow = {-16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 49, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 50, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-4, -3}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 51, .offset = {-9, -5}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-13, -4}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {-6, 0}, .shadow = {-6, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 53, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-3, -1}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 54, .offset = {-9, 4}, .shadow = {-9, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-16, 14}, .shadow = {-16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-19, 19}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {-20, 18}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-19, 19}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-20, 18}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-8, 8}, .shadow = {-8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 66, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 67, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {3, -1}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 68, .offset = {9, 4}, .shadow = {9, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {16, 14}, .shadow = {16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 69, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {19, 19}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {8, 8}, .shadow = {8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 70, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {4, -3}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 71, .offset = {9, -5}, .shadow = {9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {13, -4}, .shadow = {13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 72, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {17, 1}, .shadow = {17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {6, 0}, .shadow = {6, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 73, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {3, -9}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 74, .offset = {8, -17}, .shadow = {8, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {16, -20}, .shadow = {16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 76, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -5}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 77, .offset = {0, -11}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -16}, .shadow = {0, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 78, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 79, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-3, -9}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 80, .offset = {-8, -17}, .shadow = {-8, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-16, -20}, .shadow = {-16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 81, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-4, -3}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 83, .offset = {-9, -5}, .shadow = {-9, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-13, -4}, .shadow = {-13, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 84, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-17, 1}, .shadow = {-17, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-6, 0}, .shadow = {-6, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 85, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-3, -1}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 2, .poseId = 86, .offset = {-9, 4}, .shadow = {-9, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-16, 14}, .shadow = {-16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-19, 19}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {-20, 18}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-19, 19}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-20, 18}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-8, 8}, .shadow = {-8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, -2}, .shadow = {1, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 96, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 97, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {1, 4}, .shadow = {1, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-1, -3}, .shadow = {-1, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 98, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-2, 1}, .shadow = {-2, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 100, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 101, .offset = {5, 1}, .shadow = {5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {5, 1}, .shadow = {5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {5, 1}, .shadow = {5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-1, 3}, .shadow = {-1, 3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 102, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {5, -3}, .shadow = {5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {5, -3}, .shadow = {5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {5, -3}, .shadow = {5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 104, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 1, .poseId = 105, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 106, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-5, -3}, .shadow = {-5, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {2, 1}, .shadow = {2, 1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 108, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 109, .offset = {-5, 1}, .shadow = {-5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-5, 1}, .shadow = {-5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-5, 1}, .shadow = {-5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 110, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_8_1[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 132, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_8_2[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 135, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_8_3[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 138, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_8_4[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 141, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_8_5[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 144, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_8_6[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 147, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_8_7[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 150, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_8_8[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 153, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 152, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 152, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 152, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 152, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 152, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 152, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {7, 4}, .shadow = {7, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {11, 10}, .shadow = {11, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {8, 16}, .shadow = {8, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 166, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 167, .offset = {-8, 16}, .shadow = {-8, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-11, 10}, .shadow = {-11, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {-7, 4}, .shadow = {-7, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {7, 0}, .shadow = {7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {17, 5}, .shadow = {17, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {21, 13}, .shadow = {21, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {19, 18}, .shadow = {19, 18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {11, 21}, .shadow = {11, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {1, 17}, .shadow = {1, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {-2, 8}, .shadow = {-2, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {3, -4}, .shadow = {3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {9, -6}, .shadow = {9, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {17, -2}, .shadow = {17, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {20, 3}, .shadow = {20, 3} },
	{ .frames = 2, .unkFlags = 3, .poseId = 165, .offset = {19, 5}, .shadow = {19, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {8, 7}, .shadow = {8, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {3, 5}, .shadow = {3, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {-3, -10}, .shadow = {-3, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {2, -17}, .shadow = {2, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {10, -24}, .shadow = {10, -24} },
	{ .frames = 3, .unkFlags = 0, .poseId = 163, .offset = {18, -21}, .shadow = {18, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 164, .offset = {22, -15}, .shadow = {22, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {18, -5}, .shadow = {18, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {-8, -3}, .shadow = {-8, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-8, -18}, .shadow = {-8, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 163, .offset = {8, -18}, .shadow = {8, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {12, -12}, .shadow = {12, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {8, -3}, .shadow = {8, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {3, -10}, .shadow = {3, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {-2, -17}, .shadow = {-2, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {-10, -24}, .shadow = {-10, -24} },
	{ .frames = 3, .unkFlags = 0, .poseId = 169, .offset = {-18, -21}, .shadow = {-18, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 168, .offset = {-22, -15}, .shadow = {-22, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {-18, -5}, .shadow = {-18, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {-3, -4}, .shadow = {-3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {-9, -6}, .shadow = {-9, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-17, -2}, .shadow = {-17, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 168, .offset = {-20, 3}, .shadow = {-20, 3} },
	{ .frames = 2, .unkFlags = 3, .poseId = 167, .offset = {-19, 5}, .shadow = {-19, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {-8, 7}, .shadow = {-8, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {-3, 5}, .shadow = {-3, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {-7, 0}, .shadow = {-7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-17, 5}, .shadow = {-17, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-21, 13}, .shadow = {-21, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {-19, 18}, .shadow = {-19, 18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 166, .offset = {-11, 21}, .shadow = {-11, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {-1, 17}, .shadow = {-1, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {2, 8}, .shadow = {2, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 186, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 189, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 192, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 194, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 196, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 196, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 195, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 199, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 198, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 200, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 202, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 202, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 202, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 201, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 203, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 203, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 203, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 205, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 205, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 205, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 204, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 206, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 206, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 206, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVibravaAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 208, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 208, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 208, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 208, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 207, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 209, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 209, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sVibravaGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_1.4bpp.lz");
static const ax_sprite sVibravaSprites1[] = {
	{sVibravaGfx1, ARRAY_COUNT(sVibravaGfx1)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_2.4bpp.lz");
static const ax_sprite sVibravaSprites2[] = {
	{sVibravaGfx2, ARRAY_COUNT(sVibravaGfx2)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_3.4bpp.lz");
static const ax_sprite sVibravaSprites3[] = {
	{sVibravaGfx3, ARRAY_COUNT(sVibravaGfx3)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_4.4bpp.lz");
static const ax_sprite sVibravaSprites4[] = {
	{sVibravaGfx4, ARRAY_COUNT(sVibravaGfx4)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_5.4bpp.lz");
static const ax_sprite sVibravaSprites5[] = {
	{sVibravaGfx5, ARRAY_COUNT(sVibravaGfx5)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_6.4bpp.lz");
static const ax_sprite sVibravaSprites6[] = {
	{sVibravaGfx6, ARRAY_COUNT(sVibravaGfx6)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_7.4bpp.lz");
static const ax_sprite sVibravaSprites7[] = {
	{sVibravaGfx7, ARRAY_COUNT(sVibravaGfx7)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_8.4bpp.lz");
static const ax_sprite sVibravaSprites8[] = {
	{sVibravaGfx8, ARRAY_COUNT(sVibravaGfx8)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_9.4bpp.lz");
static const ax_sprite sVibravaSprites9[] = {
	{sVibravaGfx9, ARRAY_COUNT(sVibravaGfx9)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_10.4bpp.lz");
static const ax_sprite sVibravaSprites10[] = {
	{sVibravaGfx10, ARRAY_COUNT(sVibravaGfx10)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_11.4bpp.lz");
static const ax_sprite sVibravaSprites11[] = {
	{sVibravaGfx11, ARRAY_COUNT(sVibravaGfx11)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_12.4bpp.lz");
static const ax_sprite sVibravaSprites12[] = {
	{sVibravaGfx12, ARRAY_COUNT(sVibravaGfx12)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_13.4bpp.lz");
static const ax_sprite sVibravaSprites13[] = {
	{sVibravaGfx13, ARRAY_COUNT(sVibravaGfx13)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_14.4bpp.lz");
static const ax_sprite sVibravaSprites14[] = {
	{sVibravaGfx14, ARRAY_COUNT(sVibravaGfx14)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_15.4bpp.lz");
static const ax_sprite sVibravaSprites15[] = {
	{sVibravaGfx15, ARRAY_COUNT(sVibravaGfx15)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_16.4bpp.lz");
static const ax_sprite sVibravaSprites16[] = {
	{sVibravaGfx16, ARRAY_COUNT(sVibravaGfx16)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVibravaGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_17.4bpp.lz");
static const u8 sVibravaGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_17_1.4bpp.lz");
static const ax_sprite sVibravaSprites17[] = {
	{sVibravaGfx17, ARRAY_COUNT(sVibravaGfx17)}, 
	{NULL, 32}, 
	{sVibravaGfx17_1, ARRAY_COUNT(sVibravaGfx17_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sVibravaGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_18.4bpp.lz");
static const u8 sVibravaGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_18_1.4bpp.lz");
static const u8 sVibravaGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_18_2.4bpp.lz");
static const u8 sVibravaGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_18_3.4bpp.lz");
static const ax_sprite sVibravaSprites18[] = {
	{sVibravaGfx18, ARRAY_COUNT(sVibravaGfx18)}, 
	{NULL, 32}, 
	{sVibravaGfx18_1, ARRAY_COUNT(sVibravaGfx18_1)}, 
	{NULL, 32}, 
	{sVibravaGfx18_2, ARRAY_COUNT(sVibravaGfx18_2)}, 
	{NULL, 32}, 
	{sVibravaGfx18_3, ARRAY_COUNT(sVibravaGfx18_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVibravaGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_19.4bpp.lz");
static const u8 sVibravaGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_19_1.4bpp.lz");
static const u8 sVibravaGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_19_2.4bpp.lz");
static const u8 sVibravaGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_19_3.4bpp.lz");
static const ax_sprite sVibravaSprites19[] = {
	{NULL, 32}, 
	{sVibravaGfx19, ARRAY_COUNT(sVibravaGfx19)}, 
	{NULL, 96}, 
	{sVibravaGfx19_1, ARRAY_COUNT(sVibravaGfx19_1)}, 
	{NULL, 32}, 
	{sVibravaGfx19_2, ARRAY_COUNT(sVibravaGfx19_2)}, 
	{NULL, 32}, 
	{sVibravaGfx19_3, ARRAY_COUNT(sVibravaGfx19_3)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_20.4bpp.lz");
static const u8 sVibravaGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_20_1.4bpp.lz");
static const u8 sVibravaGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_20_2.4bpp.lz");
static const ax_sprite sVibravaSprites20[] = {
	{NULL, 32}, 
	{sVibravaGfx20, ARRAY_COUNT(sVibravaGfx20)}, 
	{NULL, 32}, 
	{sVibravaGfx20_1, ARRAY_COUNT(sVibravaGfx20_1)}, 
	{NULL, 32}, 
	{sVibravaGfx20_2, ARRAY_COUNT(sVibravaGfx20_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVibravaGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_21.4bpp.lz");
static const ax_sprite sVibravaSprites21[] = {
	{sVibravaGfx21, ARRAY_COUNT(sVibravaGfx21)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_22.4bpp.lz");
static const ax_sprite sVibravaSprites22[] = {
	{sVibravaGfx22, ARRAY_COUNT(sVibravaGfx22)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_23.4bpp.lz");
static const ax_sprite sVibravaSprites23[] = {
	{sVibravaGfx23, ARRAY_COUNT(sVibravaGfx23)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_24.4bpp.lz");
static const ax_sprite sVibravaSprites24[] = {
	{sVibravaGfx24, ARRAY_COUNT(sVibravaGfx24)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_25.4bpp.lz");
static const ax_sprite sVibravaSprites25[] = {
	{sVibravaGfx25, ARRAY_COUNT(sVibravaGfx25)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_26.4bpp.lz");
static const ax_sprite sVibravaSprites26[] = {
	{sVibravaGfx26, ARRAY_COUNT(sVibravaGfx26)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_27.4bpp.lz");
static const ax_sprite sVibravaSprites27[] = {
	{sVibravaGfx27, ARRAY_COUNT(sVibravaGfx27)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_28.4bpp.lz");
static const ax_sprite sVibravaSprites28[] = {
	{sVibravaGfx28, ARRAY_COUNT(sVibravaGfx28)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_29.4bpp.lz");
static const ax_sprite sVibravaSprites29[] = {
	{sVibravaGfx29, ARRAY_COUNT(sVibravaGfx29)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_30.4bpp.lz");
static const ax_sprite sVibravaSprites30[] = {
	{sVibravaGfx30, ARRAY_COUNT(sVibravaGfx30)}, 
	{NULL, 0}
};
static const u8 sVibravaGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/vibrava/sprite_31.4bpp.lz");
static const ax_sprite sVibravaSprites31[] = {
	{sVibravaGfx31, ARRAY_COUNT(sVibravaGfx31)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesVibrava[] = {
	sVibravaPose1,
	sVibravaPose2,
	sVibravaPose3,
	sVibravaPose4,
	sVibravaPose5,
	sVibravaPose6,
	sVibravaPose7,
	sVibravaPose8,
	sVibravaPose9,
	sVibravaPose10,
	sVibravaPose11,
	sVibravaPose12,
	sVibravaPose13,
	sVibravaPose14,
	sVibravaPose15,
	sVibravaPose16,
	sVibravaPose17,
	sVibravaPose18,
	sVibravaPose19,
	sVibravaPose20,
	sVibravaPose21,
	sVibravaPose22,
	sVibravaPose23,
	sVibravaPose24,
	sVibravaPose1,
	sVibravaPose22,
	sVibravaPose19,
	sVibravaPose16,
	sVibravaPose13,
	sVibravaPose10,
	sVibravaPose7,
	sVibravaPose4,
	sVibravaPose1,
	sVibravaPose2,
	sVibravaPose3,
	sVibravaPose4,
	sVibravaPose5,
	sVibravaPose6,
	sVibravaPose7,
	sVibravaPose8,
	sVibravaPose9,
	sVibravaPose10,
	sVibravaPose11,
	sVibravaPose12,
	sVibravaPose13,
	sVibravaPose14,
	sVibravaPose15,
	sVibravaPose16,
	sVibravaPose17,
	sVibravaPose18,
	sVibravaPose19,
	sVibravaPose20,
	sVibravaPose21,
	sVibravaPose22,
	sVibravaPose23,
	sVibravaPose24,
	sVibravaPose1,
	sVibravaPose22,
	sVibravaPose19,
	sVibravaPose16,
	sVibravaPose13,
	sVibravaPose10,
	sVibravaPose7,
	sVibravaPose4,
	sVibravaPose1,
	sVibravaPose2,
	sVibravaPose3,
	sVibravaPose4,
	sVibravaPose5,
	sVibravaPose6,
	sVibravaPose7,
	sVibravaPose8,
	sVibravaPose9,
	sVibravaPose10,
	sVibravaPose11,
	sVibravaPose12,
	sVibravaPose13,
	sVibravaPose14,
	sVibravaPose15,
	sVibravaPose16,
	sVibravaPose17,
	sVibravaPose18,
	sVibravaPose19,
	sVibravaPose20,
	sVibravaPose21,
	sVibravaPose22,
	sVibravaPose23,
	sVibravaPose24,
	sVibravaPose1,
	sVibravaPose22,
	sVibravaPose19,
	sVibravaPose16,
	sVibravaPose13,
	sVibravaPose10,
	sVibravaPose7,
	sVibravaPose4,
	sVibravaPose1,
	sVibravaPose98,
	sVibravaPose4,
	sVibravaPose100,
	sVibravaPose7,
	sVibravaPose102,
	sVibravaPose10,
	sVibravaPose104,
	sVibravaPose13,
	sVibravaPose106,
	sVibravaPose16,
	sVibravaPose108,
	sVibravaPose19,
	sVibravaPose110,
	sVibravaPose22,
	sVibravaPose112,
	sVibravaPose1,
	sVibravaPose22,
	sVibravaPose19,
	sVibravaPose16,
	sVibravaPose13,
	sVibravaPose10,
	sVibravaPose7,
	sVibravaPose4,
	sVibravaPose121,
	sVibravaPose122,
	sVibravaPose123,
	sVibravaPose124,
	sVibravaPose125,
	sVibravaPose126,
	sVibravaPose127,
	sVibravaPose128,
	sVibravaPose129,
	sVibravaPose130,
	sVibravaPose1,
	sVibravaPose2,
	sVibravaPose3,
	sVibravaPose4,
	sVibravaPose5,
	sVibravaPose6,
	sVibravaPose7,
	sVibravaPose8,
	sVibravaPose9,
	sVibravaPose10,
	sVibravaPose11,
	sVibravaPose12,
	sVibravaPose13,
	sVibravaPose14,
	sVibravaPose15,
	sVibravaPose16,
	sVibravaPose17,
	sVibravaPose18,
	sVibravaPose19,
	sVibravaPose20,
	sVibravaPose21,
	sVibravaPose22,
	sVibravaPose23,
	sVibravaPose24,
	sVibravaPose1,
	sVibravaPose22,
	sVibravaPose19,
	sVibravaPose16,
	sVibravaPose13,
	sVibravaPose10,
	sVibravaPose7,
	sVibravaPose4,
	sVibravaPose2,
	sVibravaPose164,
	sVibravaPose165,
	sVibravaPose166,
	sVibravaPose167,
	sVibravaPose168,
	sVibravaPose169,
	sVibravaPose170,
	sVibravaPose1,
	sVibravaPose22,
	sVibravaPose19,
	sVibravaPose16,
	sVibravaPose13,
	sVibravaPose10,
	sVibravaPose7,
	sVibravaPose4,
	sVibravaPose98,
	sVibravaPose100,
	sVibravaPose102,
	sVibravaPose182,
	sVibravaPose183,
	sVibravaPose184,
	sVibravaPose110,
	sVibravaPose112,
	sVibravaPose1,
	sVibravaPose2,
	sVibravaPose3,
	sVibravaPose4,
	sVibravaPose5,
	sVibravaPose6,
	sVibravaPose7,
	sVibravaPose8,
	sVibravaPose9,
	sVibravaPose10,
	sVibravaPose11,
	sVibravaPose12,
	sVibravaPose13,
	sVibravaPose14,
	sVibravaPose15,
	sVibravaPose16,
	sVibravaPose17,
	sVibravaPose18,
	sVibravaPose19,
	sVibravaPose20,
	sVibravaPose21,
	sVibravaPose22,
	sVibravaPose23,
	sVibravaPose24,
	sVibravaPose3,
	sVibravaPose24,
	sVibravaPose213,
	sVibravaPose214,
	sVibravaPose215,
	sVibravaPose216,
	sVibravaPose217,
	sVibravaPose6,
	sVibravaPose1,
	sVibravaPose22,
	sVibravaPose19,
	sVibravaPose16,
	sVibravaPose13,
	sVibravaPose10,
	sVibravaPose7,
	sVibravaPose4,
};

static const struct PositionSets sAxPositionsVibrava[] = {
	[0] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[1] = { .set = { {-1, -1}, {-8, -1}, {6, -1}, {-1, -7} } },
	[2] = { .set = { {-1, 2}, {-8, 1}, {6, 1}, {-1, -5} } },
	[3] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
	[4] = { .set = { {6, -4}, {1, -8}, {-4, -2}, {-2, -9} } },
	[5] = { .set = { {7, -1}, {6, -6}, {-1, 1}, {0, -7} } },
	[6] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[7] = { .set = { {5, -6}, {1, -8}, {1, -1}, {-1, -9} } },
	[8] = { .set = { {6, -4}, {3, -7}, {3, 0}, {1, -7} } },
	[9] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[10] = { .set = { {4, -11}, {-5, -11}, {5, -6}, {-2, -9} } },
	[11] = { .set = { {5, -9}, {-2, -11}, {6, -6}, {-1, -10} } },
	[12] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[13] = { .set = { {-1, -15}, {4, -9}, {-4, -9}, {-1, -10} } },
	[14] = { .set = { {-1, -14}, {3, -10}, {-4, -10}, {-1, -10} } },
	[15] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[16] = { .set = { {-6, -11}, {3, -11}, {-7, -6}, {0, -9} } },
	[17] = { .set = { {-7, -9}, {0, -11}, {-8, -6}, {-1, -10} } },
	[18] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[19] = { .set = { {-7, -6}, {-3, -8}, {-3, -1}, {-1, -9} } },
	[20] = { .set = { {-8, -4}, {-5, -7}, {-5, 0}, {-3, -7} } },
	[21] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[22] = { .set = { {-8, -4}, {-3, -8}, {2, -2}, {0, -9} } },
	[23] = { .set = { {-9, -1}, {-8, -6}, {-1, 1}, {-2, -7} } },
	[24] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[25] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[26] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[27] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[28] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[29] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[30] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[31] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
	[32] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[33] = { .set = { {-1, -1}, {-8, -1}, {6, -1}, {-1, -7} } },
	[34] = { .set = { {-1, 2}, {-8, 1}, {6, 1}, {-1, -5} } },
	[35] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
	[36] = { .set = { {6, -4}, {1, -8}, {-4, -2}, {-2, -9} } },
	[37] = { .set = { {7, -1}, {6, -6}, {-1, 1}, {0, -7} } },
	[38] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[39] = { .set = { {5, -6}, {1, -8}, {1, -1}, {-1, -9} } },
	[40] = { .set = { {6, -4}, {3, -7}, {3, 0}, {1, -7} } },
	[41] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[42] = { .set = { {4, -11}, {-5, -11}, {5, -6}, {-2, -9} } },
	[43] = { .set = { {5, -9}, {-2, -11}, {6, -6}, {-1, -10} } },
	[44] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[45] = { .set = { {-1, -15}, {4, -9}, {-4, -9}, {-1, -10} } },
	[46] = { .set = { {-1, -14}, {3, -10}, {-4, -10}, {-1, -10} } },
	[47] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[48] = { .set = { {-6, -11}, {3, -11}, {-7, -6}, {0, -9} } },
	[49] = { .set = { {-7, -9}, {0, -11}, {-8, -6}, {-1, -10} } },
	[50] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[51] = { .set = { {-7, -6}, {-3, -8}, {-3, -1}, {-1, -9} } },
	[52] = { .set = { {-8, -4}, {-5, -7}, {-5, 0}, {-3, -7} } },
	[53] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[54] = { .set = { {-8, -4}, {-3, -8}, {2, -2}, {0, -9} } },
	[55] = { .set = { {-9, -1}, {-8, -6}, {-1, 1}, {-2, -7} } },
	[56] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[57] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[58] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[59] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[60] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[61] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[62] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[63] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
	[64] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[65] = { .set = { {-1, -1}, {-8, -1}, {6, -1}, {-1, -7} } },
	[66] = { .set = { {-1, 2}, {-8, 1}, {6, 1}, {-1, -5} } },
	[67] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
	[68] = { .set = { {6, -4}, {1, -8}, {-4, -2}, {-2, -9} } },
	[69] = { .set = { {7, -1}, {6, -6}, {-1, 1}, {0, -7} } },
	[70] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[71] = { .set = { {5, -6}, {1, -8}, {1, -1}, {-1, -9} } },
	[72] = { .set = { {6, -4}, {3, -7}, {3, 0}, {1, -7} } },
	[73] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[74] = { .set = { {4, -11}, {-5, -11}, {5, -6}, {-2, -9} } },
	[75] = { .set = { {5, -9}, {-2, -11}, {6, -6}, {-1, -10} } },
	[76] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[77] = { .set = { {-1, -15}, {4, -9}, {-4, -9}, {-1, -10} } },
	[78] = { .set = { {-1, -14}, {3, -10}, {-4, -10}, {-1, -10} } },
	[79] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[80] = { .set = { {-6, -11}, {3, -11}, {-7, -6}, {0, -9} } },
	[81] = { .set = { {-7, -9}, {0, -11}, {-8, -6}, {-1, -10} } },
	[82] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[83] = { .set = { {-7, -6}, {-3, -8}, {-3, -1}, {-1, -9} } },
	[84] = { .set = { {-8, -4}, {-5, -7}, {-5, 0}, {-3, -7} } },
	[85] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[86] = { .set = { {-8, -4}, {-3, -8}, {2, -2}, {0, -9} } },
	[87] = { .set = { {-9, -1}, {-8, -6}, {-1, 1}, {-2, -7} } },
	[88] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[89] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[90] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[91] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[92] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[93] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[94] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[95] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
	[96] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[97] = { .set = { {-1, -1}, {-7, 0}, {5, 0}, {-1, -7} } },
	[98] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
	[99] = { .set = { {4, -4}, {4, -2}, {-3, 0}, {-2, -7} } },
	[100] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[101] = { .set = { {6, -7}, {1, -6}, {1, 0}, {-2, -7} } },
	[102] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[103] = { .set = { {4, -10}, {-5, -9}, {1, -4}, {-2, -8} } },
	[104] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[105] = { .set = { {-1, -10}, {4, -5}, {-5, -5}, {-1, -5} } },
	[106] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[107] = { .set = { {-6, -10}, {3, -9}, {-3, -4}, {0, -8} } },
	[108] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[109] = { .set = { {-8, -7}, {-3, -6}, {-3, 0}, {0, -7} } },
	[110] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[111] = { .set = { {-6, -4}, {-6, -2}, {1, 0}, {0, -7} } },
	[112] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[113] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[114] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[115] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[116] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[117] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[118] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[119] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
	[120] = { .set = { {-1, 3}, {-8, 0}, {6, 0}, {-1, -6} } },
	[121] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -7} } },
	[122] = { .set = { {-1, 2}, {-9, -3}, {7, -3}, {-1, -6} } },
	[123] = { .set = { {8, 1}, {7, -5}, {0, 0}, {1, -6} } },
	[124] = { .set = { {4, -1}, {3, -3}, {2, 0}, {0, -5} } },
	[125] = { .set = { {5, -5}, {0, -10}, {6, -1}, {-1, -5} } },
	[126] = { .set = { {-1, -8}, {5, -6}, {-7, -6}, {-1, -5} } },
	[127] = { .set = { {-6, -5}, {-1, -10}, {-7, -1}, {0, -5} } },
	[128] = { .set = { {-3, -1}, {-2, -3}, {-1, 0}, {1, -5} } },
	[129] = { .set = { {-5, 1}, {-4, -5}, {3, 0}, {2, -6} } },
	[130] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[131] = { .set = { {-1, -1}, {-8, -1}, {6, -1}, {-1, -7} } },
	[132] = { .set = { {-1, 2}, {-8, 1}, {6, 1}, {-1, -5} } },
	[133] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
	[134] = { .set = { {6, -4}, {1, -8}, {-4, -2}, {-2, -9} } },
	[135] = { .set = { {7, -1}, {6, -6}, {-1, 1}, {0, -7} } },
	[136] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[137] = { .set = { {5, -6}, {1, -8}, {1, -1}, {-1, -9} } },
	[138] = { .set = { {6, -4}, {3, -7}, {3, 0}, {1, -7} } },
	[139] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[140] = { .set = { {4, -11}, {-5, -11}, {5, -6}, {-2, -9} } },
	[141] = { .set = { {5, -9}, {-2, -11}, {6, -6}, {-1, -10} } },
	[142] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[143] = { .set = { {-1, -15}, {4, -9}, {-4, -9}, {-1, -10} } },
	[144] = { .set = { {-1, -14}, {3, -10}, {-4, -10}, {-1, -10} } },
	[145] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[146] = { .set = { {-6, -11}, {3, -11}, {-7, -6}, {0, -9} } },
	[147] = { .set = { {-7, -9}, {0, -11}, {-8, -6}, {-1, -10} } },
	[148] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[149] = { .set = { {-7, -6}, {-3, -8}, {-3, -1}, {-1, -9} } },
	[150] = { .set = { {-8, -4}, {-5, -7}, {-5, 0}, {-3, -7} } },
	[151] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[152] = { .set = { {-8, -4}, {-3, -8}, {2, -2}, {0, -9} } },
	[153] = { .set = { {-9, -1}, {-8, -6}, {-1, 1}, {-2, -7} } },
	[154] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[155] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[156] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[157] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[158] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[159] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[160] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[161] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
	[162] = { .set = { {-1, -1}, {-8, -1}, {6, -1}, {-1, -7} } },
	[163] = { .set = { {-8, -3}, {-3, -7}, {2, -1}, {0, -8} } },
	[164] = { .set = { {-6, -5}, {-2, -7}, {-2, 0}, {0, -8} } },
	[165] = { .set = { {-6, -9}, {3, -9}, {-7, -4}, {0, -7} } },
	[166] = { .set = { {-1, -13}, {4, -7}, {-4, -7}, {-1, -8} } },
	[167] = { .set = { {4, -9}, {-5, -9}, {5, -4}, {-2, -7} } },
	[168] = { .set = { {5, -5}, {1, -7}, {1, 0}, {-1, -8} } },
	[169] = { .set = { {6, -3}, {1, -7}, {-4, -1}, {-2, -8} } },
	[170] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[171] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[172] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[173] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[174] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[175] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[176] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[177] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
	[178] = { .set = { {-1, -1}, {-7, 0}, {5, 0}, {-1, -7} } },
	[179] = { .set = { {4, -4}, {4, -2}, {-3, 0}, {-2, -7} } },
	[180] = { .set = { {6, -7}, {1, -6}, {1, 0}, {-2, -7} } },
	[181] = { .set = { {4, -9}, {-5, -8}, {1, -3}, {-2, -7} } },
	[182] = { .set = { {-1, -12}, {4, -7}, {-5, -7}, {-1, -7} } },
	[183] = { .set = { {-6, -9}, {3, -8}, {-3, -3}, {0, -7} } },
	[184] = { .set = { {-8, -7}, {-3, -6}, {-3, 0}, {0, -7} } },
	[185] = { .set = { {-6, -4}, {-6, -2}, {1, 0}, {0, -7} } },
	[186] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[187] = { .set = { {-1, -1}, {-8, -1}, {6, -1}, {-1, -7} } },
	[188] = { .set = { {-1, 2}, {-8, 1}, {6, 1}, {-1, -5} } },
	[189] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
	[190] = { .set = { {6, -4}, {1, -8}, {-4, -2}, {-2, -9} } },
	[191] = { .set = { {7, -1}, {6, -6}, {-1, 1}, {0, -7} } },
	[192] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[193] = { .set = { {5, -6}, {1, -8}, {1, -1}, {-1, -9} } },
	[194] = { .set = { {6, -4}, {3, -7}, {3, 0}, {1, -7} } },
	[195] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[196] = { .set = { {4, -11}, {-5, -11}, {5, -6}, {-2, -9} } },
	[197] = { .set = { {5, -9}, {-2, -11}, {6, -6}, {-1, -10} } },
	[198] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[199] = { .set = { {-1, -15}, {4, -9}, {-4, -9}, {-1, -10} } },
	[200] = { .set = { {-1, -14}, {3, -10}, {-4, -10}, {-1, -10} } },
	[201] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[202] = { .set = { {-6, -11}, {3, -11}, {-7, -6}, {0, -9} } },
	[203] = { .set = { {-7, -9}, {0, -11}, {-8, -6}, {-1, -10} } },
	[204] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[205] = { .set = { {-7, -6}, {-3, -8}, {-3, -1}, {-1, -9} } },
	[206] = { .set = { {-8, -4}, {-5, -7}, {-5, 0}, {-3, -7} } },
	[207] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[208] = { .set = { {-8, -4}, {-3, -8}, {2, -2}, {0, -9} } },
	[209] = { .set = { {-9, -1}, {-8, -6}, {-1, 1}, {-2, -7} } },
	[210] = { .set = { {-1, 2}, {-8, 1}, {6, 1}, {-1, -5} } },
	[211] = { .set = { {-9, -1}, {-8, -6}, {-1, 1}, {-2, -7} } },
	[212] = { .set = { {-7, -3}, {-4, -6}, {-4, 1}, {-2, -6} } },
	[213] = { .set = { {-6, -7}, {1, -9}, {-7, -4}, {0, -8} } },
	[214] = { .set = { {-1, -11}, {3, -7}, {-4, -7}, {-1, -7} } },
	[215] = { .set = { {5, -7}, {-2, -9}, {6, -4}, {-1, -8} } },
	[216] = { .set = { {6, -3}, {3, -6}, {3, 1}, {1, -6} } },
	[217] = { .set = { {7, -1}, {6, -6}, {-1, 1}, {0, -7} } },
	[218] = { .set = { {-1, 2}, {-8, 0}, {6, 0}, {-1, -5} } },
	[219] = { .set = { {-9, 0}, {-8, -5}, {1, 0}, {-1, -6} } },
	[220] = { .set = { {-8, -2}, {-4, -4}, {-4, 1}, {-2, -6} } },
	[221] = { .set = { {-7, -7}, {1, -9}, {-7, -3}, {-1, -7} } },
	[222] = { .set = { {-1, -12}, {3, -7}, {-5, -7}, {-1, -8} } },
	[223] = { .set = { {5, -7}, {-3, -9}, {5, -3}, {-1, -7} } },
	[224] = { .set = { {6, -2}, {2, -4}, {2, 1}, {0, -6} } },
	[225] = { .set = { {7, 0}, {6, -5}, {-3, 0}, {-1, -6} } },
};

static const ax_anim *const sVibravaAnimTable1[] = {
	sVibravaAnims_1_1,
	sVibravaAnims_1_2,
	sVibravaAnims_1_3,
	sVibravaAnims_1_4,
	sVibravaAnims_1_5,
	sVibravaAnims_1_6,
	sVibravaAnims_1_7,
	sVibravaAnims_1_8,
};

static const ax_anim *const sVibravaAnimTable2[] = {
	sVibravaAnims_2_1,
	sVibravaAnims_2_2,
	sVibravaAnims_2_3,
	sVibravaAnims_2_4,
	sVibravaAnims_2_5,
	sVibravaAnims_2_6,
	sVibravaAnims_2_7,
	sVibravaAnims_2_8,
};

static const ax_anim *const sVibravaAnimTable3[] = {
	sVibravaAnims_3_1,
	sVibravaAnims_3_2,
	sVibravaAnims_3_3,
	sVibravaAnims_3_4,
	sVibravaAnims_3_5,
	sVibravaAnims_3_6,
	sVibravaAnims_3_7,
	sVibravaAnims_3_8,
};

static const ax_anim *const sVibravaAnimTable4[] = {
	sVibravaAnims_4_1,
	sVibravaAnims_4_2,
	sVibravaAnims_4_3,
	sVibravaAnims_4_4,
	sVibravaAnims_4_5,
	sVibravaAnims_4_6,
	sVibravaAnims_4_7,
	sVibravaAnims_4_8,
};

static const ax_anim *const sVibravaAnimTable5[] = {
	gAxSharedAnim_00249,
	gAxSharedAnim_00309,
	gAxSharedAnim_00301,
	gAxSharedAnim_00294,
	gAxSharedAnim_00285,
	gAxSharedAnim_00276,
	gAxSharedAnim_00270,
	gAxSharedAnim_00258,
};

static const ax_anim *const sVibravaAnimTable6[] = {
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
};

static const ax_anim *const sVibravaAnimTable7[] = {
	gAxSharedAnim_00330,
	gAxSharedAnim_00340,
	gAxSharedAnim_00348,
	gAxSharedAnim_00356,
	gAxSharedAnim_00368,
	gAxSharedAnim_00376,
	gAxSharedAnim_00383,
	gAxSharedAnim_00390,
};

static const ax_anim *const sVibravaAnimTable8[] = {
	sVibravaAnims_8_1,
	sVibravaAnims_8_2,
	sVibravaAnims_8_3,
	sVibravaAnims_8_4,
	sVibravaAnims_8_5,
	sVibravaAnims_8_6,
	sVibravaAnims_8_7,
	sVibravaAnims_8_8,
};

static const ax_anim *const sVibravaAnimTable9[] = {
	sVibravaAnims_9_1,
	sVibravaAnims_9_2,
	sVibravaAnims_9_3,
	sVibravaAnims_9_4,
	sVibravaAnims_9_5,
	sVibravaAnims_9_6,
	sVibravaAnims_9_7,
	sVibravaAnims_9_8,
};

static const ax_anim *const sVibravaAnimTable10[] = {
	gAxSharedAnim_00905,
	gAxSharedAnim_00918,
	gAxSharedAnim_00930,
	gAxSharedAnim_00942,
	gAxSharedAnim_00955,
	gAxSharedAnim_00965,
	gAxSharedAnim_00978,
	gAxSharedAnim_00993,
};

static const ax_anim *const sVibravaAnimTable11[] = {
	sVibravaAnims_11_1,
	sVibravaAnims_11_2,
	sVibravaAnims_11_3,
	sVibravaAnims_11_4,
	sVibravaAnims_11_5,
	sVibravaAnims_11_6,
	sVibravaAnims_11_7,
	sVibravaAnims_11_8,
};

static const ax_anim *const sVibravaAnimTable12[] = {
	gAxSharedAnim_01337,
	gAxSharedAnim_01414,
	gAxSharedAnim_01392,
	gAxSharedAnim_01380,
	gAxSharedAnim_01379,
	gAxSharedAnim_01368,
	gAxSharedAnim_01354,
	gAxSharedAnim_01338,
};

static const ax_anim *const sVibravaAnimTable13[] = {
	gAxSharedAnim_01422,
	gAxSharedAnim_01464,
	gAxSharedAnim_01461,
	gAxSharedAnim_01456,
	gAxSharedAnim_01446,
	gAxSharedAnim_01443,
	gAxSharedAnim_01438,
	gAxSharedAnim_01429,
};

static const ax_anim *const *const sAxAnimationsVibrava[] = {
	sVibravaAnimTable1,
	sVibravaAnimTable2,
	sVibravaAnimTable3,
	sVibravaAnimTable4,
	sVibravaAnimTable5,
	sVibravaAnimTable6,
	sVibravaAnimTable7,
	sVibravaAnimTable8,
	sVibravaAnimTable9,
	sVibravaAnimTable10,
	sVibravaAnimTable11,
	sVibravaAnimTable12,
	sVibravaAnimTable13,
};

static const ax_sprite *const sAxSpritesVibrava[] = {
	sVibravaSprites1,
	sVibravaSprites2,
	sVibravaSprites3,
	sVibravaSprites4,
	sVibravaSprites5,
	sVibravaSprites6,
	sVibravaSprites7,
	sVibravaSprites8,
	sVibravaSprites9,
	sVibravaSprites10,
	sVibravaSprites11,
	sVibravaSprites12,
	sVibravaSprites13,
	sVibravaSprites14,
	sVibravaSprites15,
	sVibravaSprites16,
	sVibravaSprites17,
	sVibravaSprites18,
	sVibravaSprites19,
	sVibravaSprites20,
	sVibravaSprites21,
	sVibravaSprites22,
	sVibravaSprites23,
	sVibravaSprites24,
	sVibravaSprites25,
	sVibravaSprites26,
	sVibravaSprites27,
	sVibravaSprites28,
	sVibravaSprites29,
	sVibravaSprites30,
	sVibravaSprites31,
};

static const axmain sAxMainVibrava = {
	.poses = sAxPosesVibrava,
	.animations = sAxAnimationsVibrava,
	.animCount = ARRAY_COUNT(sAxAnimationsVibrava),
	.spriteData = sAxSpritesVibrava,
	.positions = sAxPositionsVibrava,
};
