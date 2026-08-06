/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainGastly;
const SiroArchive gAxGastly = {"SIRO", &sAxMainGastly};

static const ax_pose sGastlyPose1[] = {
	AX_POSE(0, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose2[] = {
	AX_POSE(1, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose3[] = {
	AX_POSE(2, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose4[] = {
	AX_POSE(3, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose5[] = {
	AX_POSE(4, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose6[] = {
	AX_POSE(5, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose7[] = {
	AX_POSE(6, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose8[] = {
	AX_POSE(7, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose9[] = {
	AX_POSE(8, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose13[] = {
	AX_POSE(12, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose14[] = {
	AX_POSE(13, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose15[] = {
	AX_POSE(14, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose18[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose19[] = {
	AX_POSE(6, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose20[] = {
	AX_POSE(7, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose21[] = {
	AX_POSE(8, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose22[] = {
	AX_POSE(3, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose23[] = {
	AX_POSE(4, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose24[] = {
	AX_POSE(5, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose100[] = {
	AX_POSE(15, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose101[] = {
	AX_POSE(16, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose105[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose106[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose110[] = {
	AX_POSE(19, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose111[] = {
	AX_POSE(20, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose115[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose116[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose120[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose121[] = {
	AX_POSE(24, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose125[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose126[] = {
	AX_POSE(22, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose130[] = {
	AX_POSE(19, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose131[] = {
	AX_POSE(20, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose135[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose136[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose141[] = {
	AX_POSE(16, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose146[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose151[] = {
	AX_POSE(20, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose156[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose161[] = {
	AX_POSE(24, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose166[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose171[] = {
	AX_POSE(20, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose176[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose177[] = {
	AX_POSE(25, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose178[] = {
	AX_POSE(26, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose179[] = {
	AX_POSE(27, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose180[] = {
	AX_POSE(28, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose181[] = {
	AX_POSE(29, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose182[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose183[] = {
	AX_POSE(31, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose184[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose185[] = {
	AX_POSE(29, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose186[] = {
	AX_POSE(28, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose219[] = {
	AX_POSE(0, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose220[] = {
	AX_POSE(3, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGastlyPose226[] = {
	AX_POSE(3, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 2)),
	AX_POSE_TERMINATOR
};
static const ax_anim sGastlyAnims_1_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_1_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_1_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_1_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_1_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_1_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_1_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_1_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 32, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 11}, .shadow = {0, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 32, .offset = {0, 8}, .shadow = {0, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 35, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {10, 12}, .shadow = {10, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {18, 22}, .shadow = {18, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {18, 22}, .shadow = {18, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 35, .offset = {7, 9}, .shadow = {7, 9} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 38, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {10, 1}, .shadow = {10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {18, 2}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {18, 1}, .shadow = {18, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {18, 2}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {18, 1}, .shadow = {18, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 38, .offset = {7, 1}, .shadow = {7, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 41, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {8, -8}, .shadow = {8, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {16, -16}, .shadow = {16, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 41, .offset = {15, -17}, .shadow = {15, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {16, -16}, .shadow = {16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {15, -17}, .shadow = {15, -17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 41, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 44, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 47, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 48, .offset = {-8, -8}, .shadow = {-8, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {-16, -16}, .shadow = {-16, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-15, -17}, .shadow = {-15, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {-16, -16}, .shadow = {-16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-15, -17}, .shadow = {-15, -17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 47, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 50, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {-10, 1}, .shadow = {-10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {-18, 2}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 50, .offset = {-18, 1}, .shadow = {-18, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-18, 2}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-18, 1}, .shadow = {-18, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 50, .offset = {-7, 1}, .shadow = {-7, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 53, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {-10, 12}, .shadow = {-10, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {-18, 22}, .shadow = {-18, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-18, 22}, .shadow = {-18, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 53, .offset = {-7, 9}, .shadow = {-7, 9} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 64, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {0, 11}, .shadow = {0, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 64, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 64, .offset = {0, 8}, .shadow = {0, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {10, 12}, .shadow = {10, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 69, .offset = {18, 22}, .shadow = {18, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {18, 22}, .shadow = {18, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 67, .offset = {7, 9}, .shadow = {7, 9} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 70, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {10, 1}, .shadow = {10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 72, .offset = {18, 2}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 70, .offset = {18, 1}, .shadow = {18, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {18, 2}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {18, 1}, .shadow = {18, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 70, .offset = {7, 1}, .shadow = {7, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 73, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 74, .offset = {8, -8}, .shadow = {8, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 75, .offset = {16, -16}, .shadow = {16, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 73, .offset = {15, -17}, .shadow = {15, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {16, -16}, .shadow = {16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {15, -17}, .shadow = {15, -17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 73, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 76, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {0, -9}, .shadow = {0, -9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 78, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 76, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 76, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 79, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 80, .offset = {-8, -8}, .shadow = {-8, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 81, .offset = {-16, -16}, .shadow = {-16, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {-15, -17}, .shadow = {-15, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-16, -16}, .shadow = {-16, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-15, -17}, .shadow = {-15, -17} },
	{ .frames = 3, .unkFlags = 0, .poseId = 79, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 82, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {-10, 1}, .shadow = {-10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 84, .offset = {-18, 2}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 82, .offset = {-18, 1}, .shadow = {-18, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-18, 2}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-18, 1}, .shadow = {-18, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 82, .offset = {-7, 1}, .shadow = {-7, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 85, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {-10, 12}, .shadow = {-10, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 87, .offset = {-18, 22}, .shadow = {-18, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 85, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-18, 22}, .shadow = {-18, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 85, .offset = {-7, 9}, .shadow = {-7, 9} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_4_1[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 98, .offset = {0, -1}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 99, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 100, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, 6}, .shadow = {1, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, 6}, .shadow = {1, 6} },
	{ .frames = 2, .unkFlags = 1, .poseId = 100, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {1, 6}, .shadow = {1, 6} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_4_2[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 102, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 103, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 104, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 105, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {5, 7}, .shadow = {5, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {5, 7}, .shadow = {5, 7} },
	{ .frames = 2, .unkFlags = 1, .poseId = 105, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {5, 7}, .shadow = {5, 7} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_4_3[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 107, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 108, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 109, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 110, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {6, 1}, .shadow = {6, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {6, 1}, .shadow = {6, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 110, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {6, 1}, .shadow = {6, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_4_4[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 112, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 113, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 114, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 115, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {5, -7}, .shadow = {5, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {5, -7}, .shadow = {5, -7} },
	{ .frames = 2, .unkFlags = 1, .poseId = 115, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {5, -7}, .shadow = {5, -7} },
	{ .frames = 4, .unkFlags = 0, .poseId = 114, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_4_5[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 117, .offset = {0, 1}, .shadow = {0, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 118, .offset = {0, 1}, .shadow = {0, 2} },
	{ .frames = 3, .unkFlags = 0, .poseId = 119, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 120, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 1, .poseId = 120, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 4, .unkFlags = 0, .poseId = 119, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_4_6[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 122, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 123, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 124, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 125, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-5, -7}, .shadow = {-5, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-5, -7}, .shadow = {-5, -7} },
	{ .frames = 2, .unkFlags = 1, .poseId = 125, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {-5, -7}, .shadow = {-5, -7} },
	{ .frames = 4, .unkFlags = 0, .poseId = 124, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_4_7[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 127, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 128, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 130, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-6, 1}, .shadow = {-6, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-6, 1}, .shadow = {-6, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 130, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-6, 1}, .shadow = {-6, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 129, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_4_8[] = {
	{ .frames = 3, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 133, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 134, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 2, .poseId = 135, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-5, 7}, .shadow = {-5, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-5, 7}, .shadow = {-5, 7} },
	{ .frames = 2, .unkFlags = 1, .poseId = 135, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {-5, 7}, .shadow = {-5, 7} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 137, .offset = {0, 8}, .shadow = {0, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 4, .unkFlags = 0, .poseId = 136, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 5, .unkFlags = 0, .poseId = 137, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 6, .unkFlags = 0, .poseId = 138, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 2, .unkFlags = 2, .poseId = 139, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 139, .offset = {0, 16}, .shadow = {0, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 136, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {8, 8}, .shadow = {8, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {16, 16}, .shadow = {16, 16} },
	{ .frames = 4, .unkFlags = 0, .poseId = 141, .offset = {16, 16}, .shadow = {16, 16} },
	{ .frames = 5, .unkFlags = 0, .poseId = 142, .offset = {16, 16}, .shadow = {16, 16} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {16, 16}, .shadow = {16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {16, 16}, .shadow = {16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {16, 16}, .shadow = {16, 16} },
	{ .frames = 2, .unkFlags = 2, .poseId = 144, .offset = {16, 16}, .shadow = {16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {16, 16}, .shadow = {16, 16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 144, .offset = {16, 16}, .shadow = {16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 147, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 148, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 149, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 149, .offset = {16, 0}, .shadow = {16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {14, -14}, .shadow = {14, -14} },
	{ .frames = 4, .unkFlags = 0, .poseId = 151, .offset = {14, -14}, .shadow = {14, -14} },
	{ .frames = 5, .unkFlags = 0, .poseId = 152, .offset = {14, -14}, .shadow = {14, -14} },
	{ .frames = 6, .unkFlags = 0, .poseId = 153, .offset = {14, -14}, .shadow = {14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {14, -14}, .shadow = {14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {14, -14}, .shadow = {14, -14} },
	{ .frames = 2, .unkFlags = 2, .poseId = 154, .offset = {14, -14}, .shadow = {14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {14, -14}, .shadow = {14, -14} },
	{ .frames = 2, .unkFlags = 1, .poseId = 154, .offset = {14, -14}, .shadow = {14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 4, .unkFlags = 0, .poseId = 156, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 5, .unkFlags = 0, .poseId = 157, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 6, .unkFlags = 0, .poseId = 158, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 2, .unkFlags = 2, .poseId = 159, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 2, .unkFlags = 1, .poseId = 159, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {-14, -14}, .shadow = {-14, -14} },
	{ .frames = 4, .unkFlags = 0, .poseId = 161, .offset = {-14, -14}, .shadow = {-14, -14} },
	{ .frames = 5, .unkFlags = 0, .poseId = 162, .offset = {-14, -14}, .shadow = {-14, -14} },
	{ .frames = 6, .unkFlags = 0, .poseId = 163, .offset = {-14, -14}, .shadow = {-14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {-14, -14}, .shadow = {-14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {-14, -14}, .shadow = {-14, -14} },
	{ .frames = 2, .unkFlags = 2, .poseId = 164, .offset = {-14, -14}, .shadow = {-14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {-14, -14}, .shadow = {-14, -14} },
	{ .frames = 2, .unkFlags = 1, .poseId = 164, .offset = {-14, -14}, .shadow = {-14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 167, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 168, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 169, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 169, .offset = {-16, 0}, .shadow = {-16, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {-8, 8}, .shadow = {-8, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {-16, 16}, .shadow = {-16, 16} },
	{ .frames = 4, .unkFlags = 0, .poseId = 171, .offset = {-16, 16}, .shadow = {-16, 16} },
	{ .frames = 5, .unkFlags = 0, .poseId = 172, .offset = {-16, 16}, .shadow = {-16, 16} },
	{ .frames = 6, .unkFlags = 0, .poseId = 173, .offset = {-16, 16}, .shadow = {-16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {-16, 16}, .shadow = {-16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {-16, 16}, .shadow = {-16, 16} },
	{ .frames = 2, .unkFlags = 2, .poseId = 174, .offset = {-16, 16}, .shadow = {-16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {-16, 16}, .shadow = {-16, 16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 174, .offset = {-16, 16}, .shadow = {-16, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_6_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 176, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 176, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 177, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 177, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 177, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 176, .offset = {0, 1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_8_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 187, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 188, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 187, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 188, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_8_2[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 190, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 191, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 190, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 191, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_8_3[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 193, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 194, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 193, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 194, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_8_4[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 196, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 197, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 196, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 197, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_8_5[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 199, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 200, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 199, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 200, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_8_6[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 202, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 203, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 202, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 203, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_8_7[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 205, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 206, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 205, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 206, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_8_8[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 208, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 209, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 208, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 10, .unkFlags = 0, .poseId = 209, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 220, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 221, .offset = {7, 19}, .shadow = {7, 19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 222, .offset = {1, 24}, .shadow = {1, 24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 223, .offset = {-6, 19}, .shadow = {-6, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 220, .offset = {24, 9}, .shadow = {24, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 221, .offset = {23, 21}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 222, .offset = {11, 21}, .shadow = {11, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 223, .offset = {2, 12}, .shadow = {2, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 225, .offset = {3, -4}, .shadow = {3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 220, .offset = {20, 1}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 221, .offset = {17, 5}, .shadow = {17, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 222, .offset = {12, 7}, .shadow = {12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 223, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 223, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 224, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {11, -20}, .shadow = {11, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 219, .offset = {19, -20}, .shadow = {19, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 220, .offset = {18, -12}, .shadow = {18, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 221, .offset = {16, -6}, .shadow = {16, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 223, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 223, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {-8, -10}, .shadow = {-8, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {-7, -18}, .shadow = {-7, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 218, .offset = {-1, -24}, .shadow = {-1, -24} },
	{ .frames = 2, .unkFlags = 3, .poseId = 219, .offset = {4, -19}, .shadow = {4, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 220, .offset = {5, -9}, .shadow = {5, -9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 221, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 221, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {-11, -20}, .shadow = {-11, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 225, .offset = {-19, -20}, .shadow = {-19, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 224, .offset = {-18, -12}, .shadow = {-18, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 223, .offset = {-16, -6}, .shadow = {-16, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 222, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 221, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {-3, -4}, .shadow = {-3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 218, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 224, .offset = {-20, 1}, .shadow = {-20, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 223, .offset = {-17, 5}, .shadow = {-17, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 222, .offset = {-12, 7}, .shadow = {-12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 221, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 219, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 218, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 225, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 224, .offset = {-24, 9}, .shadow = {-24, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 223, .offset = {-23, 21}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 222, .offset = {-11, 21}, .shadow = {-11, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 221, .offset = {-2, 12}, .shadow = {-2, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 220, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 219, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 237, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 238, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 238, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 238, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 236, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 234, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 236, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 234, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 239, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 242, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 243, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 243, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 243, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 241, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 239, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 240, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 241, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 239, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 244, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 247, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 248, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 248, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 248, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 246, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 244, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 245, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 246, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 244, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 249, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 252, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 253, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 253, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 253, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 251, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 249, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 250, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 251, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 249, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 254, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 257, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 258, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 258, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 258, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 256, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 254, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 255, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 256, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 254, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 259, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 262, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 263, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 263, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 263, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 261, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 259, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 260, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 261, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 259, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 264, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 267, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 268, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 268, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 268, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 266, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 264, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 265, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 266, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 264, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 269, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 272, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 273, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 273, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 273, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 271, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 269, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 270, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 271, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 269, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGastlyAnims_12_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 281, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 281, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 281, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 281, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 281, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 281, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 281, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 281, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 281, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 281, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sGastlyGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_1.4bpp.lz");
static const ax_sprite sGastlySprites1[] = {
	{sGastlyGfx1, ARRAY_COUNT(sGastlyGfx1)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_2.4bpp.lz");
static const ax_sprite sGastlySprites2[] = {
	{sGastlyGfx2, ARRAY_COUNT(sGastlyGfx2)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_3.4bpp.lz");
static const ax_sprite sGastlySprites3[] = {
	{sGastlyGfx3, ARRAY_COUNT(sGastlyGfx3)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_4.4bpp.lz");
static const ax_sprite sGastlySprites4[] = {
	{sGastlyGfx4, ARRAY_COUNT(sGastlyGfx4)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_5.4bpp.lz");
static const ax_sprite sGastlySprites5[] = {
	{sGastlyGfx5, ARRAY_COUNT(sGastlyGfx5)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_6.4bpp.lz");
static const ax_sprite sGastlySprites6[] = {
	{sGastlyGfx6, ARRAY_COUNT(sGastlyGfx6)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_7.4bpp.lz");
static const ax_sprite sGastlySprites7[] = {
	{sGastlyGfx7, ARRAY_COUNT(sGastlyGfx7)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_8.4bpp.lz");
static const ax_sprite sGastlySprites8[] = {
	{sGastlyGfx8, ARRAY_COUNT(sGastlyGfx8)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_9.4bpp.lz");
static const ax_sprite sGastlySprites9[] = {
	{sGastlyGfx9, ARRAY_COUNT(sGastlyGfx9)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_10.4bpp.lz");
static const ax_sprite sGastlySprites10[] = {
	{sGastlyGfx10, ARRAY_COUNT(sGastlyGfx10)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_11.4bpp.lz");
static const ax_sprite sGastlySprites11[] = {
	{sGastlyGfx11, ARRAY_COUNT(sGastlyGfx11)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_12.4bpp.lz");
static const ax_sprite sGastlySprites12[] = {
	{sGastlyGfx12, ARRAY_COUNT(sGastlyGfx12)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_13.4bpp.lz");
static const ax_sprite sGastlySprites13[] = {
	{sGastlyGfx13, ARRAY_COUNT(sGastlyGfx13)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_14.4bpp.lz");
static const ax_sprite sGastlySprites14[] = {
	{sGastlyGfx14, ARRAY_COUNT(sGastlyGfx14)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_15.4bpp.lz");
static const ax_sprite sGastlySprites15[] = {
	{sGastlyGfx15, ARRAY_COUNT(sGastlyGfx15)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_16.4bpp.lz");
static const ax_sprite sGastlySprites16[] = {
	{sGastlyGfx16, ARRAY_COUNT(sGastlyGfx16)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_17.4bpp.lz");
static const ax_sprite sGastlySprites17[] = {
	{sGastlyGfx17, ARRAY_COUNT(sGastlyGfx17)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_18.4bpp.lz");
static const ax_sprite sGastlySprites18[] = {
	{sGastlyGfx18, ARRAY_COUNT(sGastlyGfx18)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_19.4bpp.lz");
static const ax_sprite sGastlySprites19[] = {
	{NULL, 32}, 
	{sGastlyGfx19, ARRAY_COUNT(sGastlyGfx19)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGastlyGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_20.4bpp.lz");
static const u8 sGastlyGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_20_1.4bpp.lz");
static const ax_sprite sGastlySprites20[] = {
	{sGastlyGfx20, ARRAY_COUNT(sGastlyGfx20)}, 
	{NULL, 32}, 
	{sGastlyGfx20_1, ARRAY_COUNT(sGastlyGfx20_1)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_21.4bpp.lz");
static const u8 sGastlyGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_21_1.4bpp.lz");
static const ax_sprite sGastlySprites21[] = {
	{NULL, 32}, 
	{sGastlyGfx21, ARRAY_COUNT(sGastlyGfx21)}, 
	{NULL, 32}, 
	{sGastlyGfx21_1, ARRAY_COUNT(sGastlyGfx21_1)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_22.4bpp.lz");
static const u8 sGastlyGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_22_1.4bpp.lz");
static const ax_sprite sGastlySprites22[] = {
	{sGastlyGfx22, ARRAY_COUNT(sGastlyGfx22)}, 
	{NULL, 32}, 
	{sGastlyGfx22_1, ARRAY_COUNT(sGastlyGfx22_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGastlyGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_23.4bpp.lz");
static const ax_sprite sGastlySprites23[] = {
	{sGastlyGfx23, ARRAY_COUNT(sGastlyGfx23)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sGastlyGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_24.4bpp.lz");
static const u8 sGastlyGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_24_1.4bpp.lz");
static const ax_sprite sGastlySprites24[] = {
	{sGastlyGfx24, ARRAY_COUNT(sGastlyGfx24)}, 
	{NULL, 32}, 
	{sGastlyGfx24_1, ARRAY_COUNT(sGastlyGfx24_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGastlyGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_25.4bpp.lz");
static const ax_sprite sGastlySprites25[] = {
	{sGastlyGfx25, ARRAY_COUNT(sGastlyGfx25)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGastlyGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_26.4bpp.lz");
static const ax_sprite sGastlySprites26[] = {
	{sGastlyGfx26, ARRAY_COUNT(sGastlyGfx26)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_27.4bpp.lz");
static const ax_sprite sGastlySprites27[] = {
	{sGastlyGfx27, ARRAY_COUNT(sGastlyGfx27)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_28.4bpp.lz");
static const ax_sprite sGastlySprites28[] = {
	{sGastlyGfx28, ARRAY_COUNT(sGastlyGfx28)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_29.4bpp.lz");
static const ax_sprite sGastlySprites29[] = {
	{sGastlyGfx29, ARRAY_COUNT(sGastlyGfx29)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_30.4bpp.lz");
static const ax_sprite sGastlySprites30[] = {
	{sGastlyGfx30, ARRAY_COUNT(sGastlyGfx30)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_31.4bpp.lz");
static const ax_sprite sGastlySprites31[] = {
	{sGastlyGfx31, ARRAY_COUNT(sGastlyGfx31)}, 
	{NULL, 0}
};
static const u8 sGastlyGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/gastly/sprite_32.4bpp.lz");
static const ax_sprite sGastlySprites32[] = {
	{sGastlyGfx32, ARRAY_COUNT(sGastlyGfx32)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesGastly[] = {
	sGastlyPose1,
	sGastlyPose2,
	sGastlyPose3,
	sGastlyPose4,
	sGastlyPose5,
	sGastlyPose6,
	sGastlyPose7,
	sGastlyPose8,
	sGastlyPose9,
	sGastlyPose10,
	sGastlyPose11,
	sGastlyPose12,
	sGastlyPose13,
	sGastlyPose14,
	sGastlyPose15,
	sGastlyPose16,
	sGastlyPose17,
	sGastlyPose18,
	sGastlyPose19,
	sGastlyPose20,
	sGastlyPose21,
	sGastlyPose22,
	sGastlyPose23,
	sGastlyPose24,
	sGastlyPose1,
	sGastlyPose22,
	sGastlyPose19,
	sGastlyPose16,
	sGastlyPose13,
	sGastlyPose10,
	sGastlyPose7,
	sGastlyPose4,
	sGastlyPose1,
	sGastlyPose2,
	sGastlyPose3,
	sGastlyPose4,
	sGastlyPose5,
	sGastlyPose6,
	sGastlyPose7,
	sGastlyPose8,
	sGastlyPose9,
	sGastlyPose10,
	sGastlyPose11,
	sGastlyPose12,
	sGastlyPose13,
	sGastlyPose14,
	sGastlyPose15,
	sGastlyPose16,
	sGastlyPose17,
	sGastlyPose18,
	sGastlyPose19,
	sGastlyPose20,
	sGastlyPose21,
	sGastlyPose22,
	sGastlyPose23,
	sGastlyPose24,
	sGastlyPose1,
	sGastlyPose22,
	sGastlyPose19,
	sGastlyPose16,
	sGastlyPose13,
	sGastlyPose10,
	sGastlyPose7,
	sGastlyPose4,
	sGastlyPose1,
	sGastlyPose2,
	sGastlyPose3,
	sGastlyPose4,
	sGastlyPose5,
	sGastlyPose6,
	sGastlyPose7,
	sGastlyPose8,
	sGastlyPose9,
	sGastlyPose10,
	sGastlyPose11,
	sGastlyPose12,
	sGastlyPose13,
	sGastlyPose14,
	sGastlyPose15,
	sGastlyPose16,
	sGastlyPose17,
	sGastlyPose18,
	sGastlyPose19,
	sGastlyPose20,
	sGastlyPose21,
	sGastlyPose22,
	sGastlyPose23,
	sGastlyPose24,
	sGastlyPose1,
	sGastlyPose22,
	sGastlyPose19,
	sGastlyPose16,
	sGastlyPose13,
	sGastlyPose10,
	sGastlyPose7,
	sGastlyPose4,
	sGastlyPose1,
	sGastlyPose2,
	sGastlyPose3,
	sGastlyPose100,
	sGastlyPose101,
	sGastlyPose4,
	sGastlyPose5,
	sGastlyPose6,
	sGastlyPose105,
	sGastlyPose106,
	sGastlyPose7,
	sGastlyPose8,
	sGastlyPose9,
	sGastlyPose110,
	sGastlyPose111,
	sGastlyPose10,
	sGastlyPose11,
	sGastlyPose12,
	sGastlyPose115,
	sGastlyPose116,
	sGastlyPose13,
	sGastlyPose14,
	sGastlyPose15,
	sGastlyPose120,
	sGastlyPose121,
	sGastlyPose16,
	sGastlyPose17,
	sGastlyPose18,
	sGastlyPose125,
	sGastlyPose126,
	sGastlyPose19,
	sGastlyPose20,
	sGastlyPose21,
	sGastlyPose130,
	sGastlyPose131,
	sGastlyPose22,
	sGastlyPose23,
	sGastlyPose24,
	sGastlyPose135,
	sGastlyPose136,
	sGastlyPose1,
	sGastlyPose2,
	sGastlyPose3,
	sGastlyPose100,
	sGastlyPose141,
	sGastlyPose4,
	sGastlyPose5,
	sGastlyPose6,
	sGastlyPose105,
	sGastlyPose146,
	sGastlyPose7,
	sGastlyPose8,
	sGastlyPose9,
	sGastlyPose110,
	sGastlyPose151,
	sGastlyPose10,
	sGastlyPose11,
	sGastlyPose12,
	sGastlyPose115,
	sGastlyPose156,
	sGastlyPose13,
	sGastlyPose14,
	sGastlyPose15,
	sGastlyPose120,
	sGastlyPose161,
	sGastlyPose16,
	sGastlyPose17,
	sGastlyPose18,
	sGastlyPose125,
	sGastlyPose166,
	sGastlyPose19,
	sGastlyPose20,
	sGastlyPose21,
	sGastlyPose130,
	sGastlyPose171,
	sGastlyPose22,
	sGastlyPose23,
	sGastlyPose24,
	sGastlyPose135,
	sGastlyPose176,
	sGastlyPose177,
	sGastlyPose178,
	sGastlyPose179,
	sGastlyPose180,
	sGastlyPose181,
	sGastlyPose182,
	sGastlyPose183,
	sGastlyPose184,
	sGastlyPose185,
	sGastlyPose186,
	sGastlyPose1,
	sGastlyPose2,
	sGastlyPose3,
	sGastlyPose4,
	sGastlyPose5,
	sGastlyPose6,
	sGastlyPose7,
	sGastlyPose8,
	sGastlyPose9,
	sGastlyPose10,
	sGastlyPose11,
	sGastlyPose12,
	sGastlyPose13,
	sGastlyPose14,
	sGastlyPose15,
	sGastlyPose16,
	sGastlyPose17,
	sGastlyPose18,
	sGastlyPose19,
	sGastlyPose20,
	sGastlyPose21,
	sGastlyPose22,
	sGastlyPose23,
	sGastlyPose24,
	sGastlyPose1,
	sGastlyPose22,
	sGastlyPose19,
	sGastlyPose16,
	sGastlyPose13,
	sGastlyPose10,
	sGastlyPose7,
	sGastlyPose4,
	sGastlyPose219,
	sGastlyPose220,
	sGastlyPose19,
	sGastlyPose16,
	sGastlyPose13,
	sGastlyPose10,
	sGastlyPose7,
	sGastlyPose226,
	sGastlyPose101,
	sGastlyPose106,
	sGastlyPose111,
	sGastlyPose116,
	sGastlyPose121,
	sGastlyPose126,
	sGastlyPose131,
	sGastlyPose136,
	sGastlyPose1,
	sGastlyPose2,
	sGastlyPose3,
	sGastlyPose100,
	sGastlyPose101,
	sGastlyPose4,
	sGastlyPose5,
	sGastlyPose6,
	sGastlyPose105,
	sGastlyPose106,
	sGastlyPose7,
	sGastlyPose8,
	sGastlyPose9,
	sGastlyPose110,
	sGastlyPose111,
	sGastlyPose10,
	sGastlyPose11,
	sGastlyPose12,
	sGastlyPose115,
	sGastlyPose116,
	sGastlyPose13,
	sGastlyPose14,
	sGastlyPose15,
	sGastlyPose120,
	sGastlyPose121,
	sGastlyPose16,
	sGastlyPose17,
	sGastlyPose18,
	sGastlyPose125,
	sGastlyPose126,
	sGastlyPose19,
	sGastlyPose20,
	sGastlyPose21,
	sGastlyPose130,
	sGastlyPose131,
	sGastlyPose22,
	sGastlyPose23,
	sGastlyPose24,
	sGastlyPose135,
	sGastlyPose136,
	sGastlyPose101,
	sGastlyPose136,
	sGastlyPose131,
	sGastlyPose126,
	sGastlyPose121,
	sGastlyPose116,
	sGastlyPose111,
	sGastlyPose106,
	sGastlyPose219,
	sGastlyPose220,
	sGastlyPose19,
	sGastlyPose16,
	sGastlyPose13,
	sGastlyPose10,
	sGastlyPose7,
	sGastlyPose226,
};

static const struct PositionSets sAxPositionsGastly[] = {
	[0] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -12} } },
	[1] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[2] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[3] = { .set = { {3, -5}, {6, -12}, {-2, -6}, {1, -11} } },
	[4] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[5] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[6] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[7] = { .set = { {3, -5}, {4, -15}, {0, -5}, {0, -11} } },
	[8] = { .set = { {3, -5}, {4, -16}, {0, -5}, {0, -12} } },
	[9] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[10] = { .set = { {4, -9}, {-2, -17}, {5, -9}, {-1, -12} } },
	[11] = { .set = { {5, -9}, {-2, -16}, {4, -9}, {-1, -12} } },
	[12] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[13] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[14] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[15] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[16] = { .set = { {-5, -9}, {1, -17}, {-6, -9}, {0, -12} } },
	[17] = { .set = { {-6, -9}, {1, -16}, {-5, -9}, {0, -12} } },
	[18] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[19] = { .set = { {-4, -5}, {-5, -15}, {-1, -5}, {-1, -11} } },
	[20] = { .set = { {-4, -5}, {-5, -16}, {-1, -5}, {-1, -12} } },
	[21] = { .set = { {-4, -5}, {-7, -12}, {1, -6}, {-2, -11} } },
	[22] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[23] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[24] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -12} } },
	[25] = { .set = { {-4, -5}, {-7, -12}, {1, -6}, {-2, -11} } },
	[26] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[27] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[28] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[29] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[30] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[31] = { .set = { {3, -5}, {6, -12}, {-2, -6}, {1, -11} } },
	[32] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -12} } },
	[33] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[34] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[35] = { .set = { {3, -5}, {6, -12}, {-2, -6}, {1, -11} } },
	[36] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[37] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[38] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[39] = { .set = { {3, -5}, {4, -15}, {0, -5}, {0, -11} } },
	[40] = { .set = { {3, -5}, {4, -16}, {0, -5}, {0, -12} } },
	[41] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[42] = { .set = { {4, -9}, {-2, -17}, {5, -9}, {-1, -12} } },
	[43] = { .set = { {5, -9}, {-2, -16}, {4, -9}, {-1, -12} } },
	[44] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[45] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[46] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[47] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[48] = { .set = { {-5, -9}, {1, -17}, {-6, -9}, {0, -12} } },
	[49] = { .set = { {-6, -9}, {1, -16}, {-5, -9}, {0, -12} } },
	[50] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[51] = { .set = { {-4, -5}, {-5, -15}, {-1, -5}, {-1, -11} } },
	[52] = { .set = { {-4, -5}, {-5, -16}, {-1, -5}, {-1, -12} } },
	[53] = { .set = { {-4, -5}, {-7, -12}, {1, -6}, {-2, -11} } },
	[54] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[55] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[56] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -12} } },
	[57] = { .set = { {-4, -5}, {-7, -12}, {1, -6}, {-2, -11} } },
	[58] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[59] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[60] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[61] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[62] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[63] = { .set = { {3, -5}, {6, -12}, {-2, -6}, {1, -11} } },
	[64] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -12} } },
	[65] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[66] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[67] = { .set = { {3, -5}, {6, -12}, {-2, -6}, {1, -11} } },
	[68] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[69] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[70] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[71] = { .set = { {3, -5}, {4, -15}, {0, -5}, {0, -11} } },
	[72] = { .set = { {3, -5}, {4, -16}, {0, -5}, {0, -12} } },
	[73] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[74] = { .set = { {4, -9}, {-2, -17}, {5, -9}, {-1, -12} } },
	[75] = { .set = { {5, -9}, {-2, -16}, {4, -9}, {-1, -12} } },
	[76] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[77] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[78] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[79] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[80] = { .set = { {-5, -9}, {1, -17}, {-6, -9}, {0, -12} } },
	[81] = { .set = { {-6, -9}, {1, -16}, {-5, -9}, {0, -12} } },
	[82] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[83] = { .set = { {-4, -5}, {-5, -15}, {-1, -5}, {-1, -11} } },
	[84] = { .set = { {-4, -5}, {-5, -16}, {-1, -5}, {-1, -12} } },
	[85] = { .set = { {-4, -5}, {-7, -12}, {1, -6}, {-2, -11} } },
	[86] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[87] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[88] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -12} } },
	[89] = { .set = { {-4, -5}, {-7, -12}, {1, -6}, {-2, -11} } },
	[90] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[91] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[92] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[93] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[94] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[95] = { .set = { {3, -5}, {6, -12}, {-2, -6}, {1, -11} } },
	[96] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -12} } },
	[97] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[98] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[99] = { .set = { {0, -5}, {-7, -12}, {6, -12}, {0, -10} } },
	[100] = { .set = { {-1, -5}, {-7, -13}, {6, -13}, {0, -12} } },
	[101] = { .set = { {3, -5}, {6, -12}, {-2, -6}, {1, -11} } },
	[102] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[103] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[104] = { .set = { {3, -6}, {6, -13}, {-5, -9}, {1, -11} } },
	[105] = { .set = { {4, -5}, {6, -14}, {-4, -10}, {1, -11} } },
	[106] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[107] = { .set = { {3, -5}, {4, -15}, {0, -5}, {0, -11} } },
	[108] = { .set = { {3, -5}, {4, -16}, {0, -5}, {0, -12} } },
	[109] = { .set = { {5, -7}, {2, -17}, {0, -7}, {0, -11} } },
	[110] = { .set = { {5, -7}, {2, -18}, {0, -7}, {0, -11} } },
	[111] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[112] = { .set = { {4, -9}, {-2, -17}, {5, -9}, {-1, -12} } },
	[113] = { .set = { {5, -9}, {-2, -16}, {4, -9}, {-1, -12} } },
	[114] = { .set = { {7, -11}, {-2, -18}, {4, -9}, {0, -12} } },
	[115] = { .set = { {6, -12}, {-3, -18}, {4, -9}, {-1, -12} } },
	[116] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[117] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[118] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[119] = { .set = { {-1, -21}, {5, -13}, {-7, -13}, {-1, -13} } },
	[120] = { .set = { {-1, -20}, {5, -12}, {-6, -12}, {-1, -12} } },
	[121] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[122] = { .set = { {-5, -9}, {1, -17}, {-6, -9}, {0, -12} } },
	[123] = { .set = { {-6, -9}, {1, -16}, {-5, -9}, {0, -12} } },
	[124] = { .set = { {-8, -11}, {1, -18}, {-5, -9}, {-1, -12} } },
	[125] = { .set = { {-7, -12}, {2, -18}, {-5, -9}, {0, -12} } },
	[126] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[127] = { .set = { {-4, -5}, {-5, -15}, {-1, -5}, {-1, -11} } },
	[128] = { .set = { {-4, -5}, {-5, -16}, {-1, -5}, {-1, -12} } },
	[129] = { .set = { {-6, -7}, {-3, -17}, {-1, -7}, {-1, -11} } },
	[130] = { .set = { {-6, -7}, {-3, -18}, {-1, -7}, {-1, -11} } },
	[131] = { .set = { {-4, -5}, {-7, -12}, {1, -6}, {-2, -11} } },
	[132] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[133] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[134] = { .set = { {-4, -6}, {-7, -13}, {4, -9}, {-2, -11} } },
	[135] = { .set = { {-5, -5}, {-7, -14}, {3, -10}, {-2, -11} } },
	[136] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -12} } },
	[137] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[138] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[139] = { .set = { {0, -5}, {-7, -12}, {6, -12}, {0, -10} } },
	[140] = { .set = { {-1, -4}, {-7, -12}, {6, -12}, {0, -11} } },
	[141] = { .set = { {3, -5}, {6, -12}, {-2, -6}, {1, -11} } },
	[142] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[143] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[144] = { .set = { {3, -6}, {6, -13}, {-5, -9}, {1, -11} } },
	[145] = { .set = { {4, -4}, {6, -13}, {-4, -9}, {1, -10} } },
	[146] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[147] = { .set = { {3, -5}, {4, -15}, {0, -5}, {0, -11} } },
	[148] = { .set = { {3, -5}, {4, -16}, {0, -5}, {0, -12} } },
	[149] = { .set = { {5, -7}, {2, -17}, {0, -7}, {0, -11} } },
	[150] = { .set = { {5, -6}, {2, -17}, {0, -6}, {0, -10} } },
	[151] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[152] = { .set = { {4, -9}, {-2, -17}, {5, -9}, {-1, -12} } },
	[153] = { .set = { {5, -9}, {-2, -16}, {4, -9}, {-1, -12} } },
	[154] = { .set = { {7, -11}, {-2, -18}, {4, -9}, {0, -12} } },
	[155] = { .set = { {6, -11}, {-3, -17}, {4, -8}, {-1, -11} } },
	[156] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[157] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[158] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[159] = { .set = { {-1, -21}, {5, -13}, {-7, -13}, {-1, -13} } },
	[160] = { .set = { {-1, -21}, {5, -13}, {-6, -13}, {-1, -13} } },
	[161] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[162] = { .set = { {-5, -9}, {1, -17}, {-6, -9}, {0, -12} } },
	[163] = { .set = { {-6, -9}, {1, -16}, {-5, -9}, {0, -12} } },
	[164] = { .set = { {-8, -11}, {1, -18}, {-5, -9}, {-1, -12} } },
	[165] = { .set = { {-7, -11}, {2, -17}, {-5, -8}, {0, -11} } },
	[166] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[167] = { .set = { {-4, -5}, {-5, -15}, {-1, -5}, {-1, -11} } },
	[168] = { .set = { {-4, -5}, {-5, -16}, {-1, -5}, {-1, -12} } },
	[169] = { .set = { {-6, -7}, {-3, -17}, {-1, -7}, {-1, -11} } },
	[170] = { .set = { {-6, -6}, {-3, -17}, {-1, -6}, {-1, -10} } },
	[171] = { .set = { {-4, -5}, {-7, -12}, {1, -6}, {-2, -11} } },
	[172] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[173] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[174] = { .set = { {-4, -6}, {-7, -13}, {4, -9}, {-2, -11} } },
	[175] = { .set = { {-5, -4}, {-7, -13}, {3, -9}, {-2, -10} } },
	[176] = { .set = { {0, -5}, {-7, -12}, {6, -12}, {-1, -12} } },
	[177] = { .set = { {0, -5}, {-7, -12}, {6, -12}, {-1, -11} } },
	[178] = { .set = { {0, -9}, {-6, -12}, {5, -12}, {0, -14} } },
	[179] = { .set = { {0, -10}, {3, -15}, {-7, -9}, {-1, -14} } },
	[180] = { .set = { {1, -8}, {1, -18}, {-3, -8}, {-3, -13} } },
	[181] = { .set = { {4, -12}, {-5, -17}, {3, -9}, {-2, -12} } },
	[182] = { .set = { {0, -18}, {6, -12}, {-6, -12}, {0, -11} } },
	[183] = { .set = { {-5, -12}, {4, -17}, {-4, -9}, {1, -12} } },
	[184] = { .set = { {-2, -8}, {-2, -18}, {2, -8}, {2, -13} } },
	[185] = { .set = { {-1, -10}, {-4, -15}, {6, -9}, {0, -14} } },
	[186] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -12} } },
	[187] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[188] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[189] = { .set = { {3, -5}, {6, -12}, {-2, -6}, {1, -11} } },
	[190] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[191] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[192] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[193] = { .set = { {3, -5}, {4, -15}, {0, -5}, {0, -11} } },
	[194] = { .set = { {3, -5}, {4, -16}, {0, -5}, {0, -12} } },
	[195] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[196] = { .set = { {4, -9}, {-2, -17}, {5, -9}, {-1, -12} } },
	[197] = { .set = { {5, -9}, {-2, -16}, {4, -9}, {-1, -12} } },
	[198] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[199] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[200] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[201] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[202] = { .set = { {-5, -9}, {1, -17}, {-6, -9}, {0, -12} } },
	[203] = { .set = { {-6, -9}, {1, -16}, {-5, -9}, {0, -12} } },
	[204] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[205] = { .set = { {-4, -5}, {-5, -15}, {-1, -5}, {-1, -11} } },
	[206] = { .set = { {-4, -5}, {-5, -16}, {-1, -5}, {-1, -12} } },
	[207] = { .set = { {-4, -5}, {-7, -12}, {1, -6}, {-2, -11} } },
	[208] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[209] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[210] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -12} } },
	[211] = { .set = { {-4, -5}, {-7, -12}, {1, -6}, {-2, -11} } },
	[212] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[213] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[214] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[215] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[216] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[217] = { .set = { {3, -5}, {6, -12}, {-2, -6}, {1, -11} } },
	[218] = { .set = { {0, -6}, {-7, -12}, {6, -12}, {0, -13} } },
	[219] = { .set = { {-4, -6}, {-7, -13}, {1, -7}, {-2, -12} } },
	[220] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[221] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[222] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[223] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[224] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[225] = { .set = { {3, -6}, {6, -13}, {-2, -7}, {1, -12} } },
	[226] = { .set = { {-1, -5}, {-7, -13}, {6, -13}, {0, -12} } },
	[227] = { .set = { {4, -5}, {6, -14}, {-4, -10}, {1, -11} } },
	[228] = { .set = { {5, -7}, {2, -18}, {0, -7}, {0, -11} } },
	[229] = { .set = { {6, -12}, {-3, -18}, {4, -9}, {-1, -12} } },
	[230] = { .set = { {-1, -20}, {5, -12}, {-6, -12}, {-1, -12} } },
	[231] = { .set = { {-7, -12}, {2, -18}, {-5, -9}, {0, -12} } },
	[232] = { .set = { {-6, -7}, {-3, -18}, {-1, -7}, {-1, -11} } },
	[233] = { .set = { {-5, -5}, {-7, -14}, {3, -10}, {-2, -11} } },
	[234] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -12} } },
	[235] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[236] = { .set = { {0, -5}, {-7, -11}, {6, -11}, {0, -13} } },
	[237] = { .set = { {0, -5}, {-7, -12}, {6, -12}, {0, -10} } },
	[238] = { .set = { {-1, -5}, {-7, -13}, {6, -13}, {0, -12} } },
	[239] = { .set = { {3, -5}, {6, -12}, {-2, -6}, {1, -11} } },
	[240] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[241] = { .set = { {1, -4}, {6, -11}, {-3, -6}, {1, -12} } },
	[242] = { .set = { {3, -6}, {6, -13}, {-5, -9}, {1, -11} } },
	[243] = { .set = { {4, -5}, {6, -14}, {-4, -10}, {1, -11} } },
	[244] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[245] = { .set = { {3, -5}, {4, -15}, {0, -5}, {0, -11} } },
	[246] = { .set = { {3, -5}, {4, -16}, {0, -5}, {0, -12} } },
	[247] = { .set = { {5, -7}, {2, -17}, {0, -7}, {0, -11} } },
	[248] = { .set = { {5, -7}, {2, -18}, {0, -7}, {0, -11} } },
	[249] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[250] = { .set = { {4, -9}, {-2, -17}, {5, -9}, {-1, -12} } },
	[251] = { .set = { {5, -9}, {-2, -16}, {4, -9}, {-1, -12} } },
	[252] = { .set = { {7, -11}, {-2, -18}, {4, -9}, {0, -12} } },
	[253] = { .set = { {6, -12}, {-3, -18}, {4, -9}, {-1, -12} } },
	[254] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[255] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[256] = { .set = { {0, -16}, {6, -13}, {-6, -13}, {0, -12} } },
	[257] = { .set = { {-1, -21}, {5, -13}, {-7, -13}, {-1, -13} } },
	[258] = { .set = { {-1, -20}, {5, -12}, {-6, -12}, {-1, -12} } },
	[259] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[260] = { .set = { {-5, -9}, {1, -17}, {-6, -9}, {0, -12} } },
	[261] = { .set = { {-6, -9}, {1, -16}, {-5, -9}, {0, -12} } },
	[262] = { .set = { {-8, -11}, {1, -18}, {-5, -9}, {-1, -12} } },
	[263] = { .set = { {-7, -12}, {2, -18}, {-5, -9}, {0, -12} } },
	[264] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[265] = { .set = { {-4, -5}, {-5, -15}, {-1, -5}, {-1, -11} } },
	[266] = { .set = { {-4, -5}, {-5, -16}, {-1, -5}, {-1, -12} } },
	[267] = { .set = { {-6, -7}, {-3, -17}, {-1, -7}, {-1, -11} } },
	[268] = { .set = { {-6, -7}, {-3, -18}, {-1, -7}, {-1, -11} } },
	[269] = { .set = { {-4, -5}, {-7, -12}, {1, -6}, {-2, -11} } },
	[270] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[271] = { .set = { {-2, -4}, {-7, -11}, {2, -6}, {-2, -12} } },
	[272] = { .set = { {-4, -6}, {-7, -13}, {4, -9}, {-2, -11} } },
	[273] = { .set = { {-5, -5}, {-7, -14}, {3, -10}, {-2, -11} } },
	[274] = { .set = { {-1, -5}, {-7, -13}, {6, -13}, {0, -12} } },
	[275] = { .set = { {-5, -5}, {-7, -14}, {3, -10}, {-2, -11} } },
	[276] = { .set = { {-6, -7}, {-3, -18}, {-1, -7}, {-1, -11} } },
	[277] = { .set = { {-7, -12}, {2, -18}, {-5, -9}, {0, -12} } },
	[278] = { .set = { {-1, -20}, {5, -12}, {-6, -12}, {-1, -12} } },
	[279] = { .set = { {6, -12}, {-3, -18}, {4, -9}, {-1, -12} } },
	[280] = { .set = { {5, -7}, {2, -18}, {0, -7}, {0, -11} } },
	[281] = { .set = { {4, -5}, {6, -14}, {-4, -10}, {1, -11} } },
	[282] = { .set = { {0, -6}, {-7, -12}, {6, -12}, {0, -13} } },
	[283] = { .set = { {-4, -6}, {-7, -13}, {1, -7}, {-2, -12} } },
	[284] = { .set = { {-4, -5}, {-5, -15}, {-2, -6}, {-1, -12} } },
	[285] = { .set = { {-6, -10}, {1, -17}, {-6, -8}, {-1, -12} } },
	[286] = { .set = { {-1, -16}, {5, -13}, {-7, -13}, {-1, -12} } },
	[287] = { .set = { {5, -10}, {-2, -17}, {5, -8}, {0, -12} } },
	[288] = { .set = { {3, -5}, {4, -15}, {1, -6}, {0, -12} } },
	[289] = { .set = { {3, -6}, {6, -13}, {-2, -7}, {1, -12} } },
};

static const ax_anim *const sGastlyAnimTable1[] = {
	sGastlyAnims_1_1,
	sGastlyAnims_1_2,
	sGastlyAnims_1_3,
	sGastlyAnims_1_4,
	sGastlyAnims_1_5,
	sGastlyAnims_1_6,
	sGastlyAnims_1_7,
	sGastlyAnims_1_8,
};

static const ax_anim *const sGastlyAnimTable2[] = {
	sGastlyAnims_2_1,
	sGastlyAnims_2_2,
	sGastlyAnims_2_3,
	sGastlyAnims_2_4,
	sGastlyAnims_2_5,
	sGastlyAnims_2_6,
	sGastlyAnims_2_7,
	sGastlyAnims_2_8,
};

static const ax_anim *const sGastlyAnimTable3[] = {
	sGastlyAnims_3_1,
	sGastlyAnims_3_2,
	sGastlyAnims_3_3,
	sGastlyAnims_3_4,
	sGastlyAnims_3_5,
	sGastlyAnims_3_6,
	sGastlyAnims_3_7,
	sGastlyAnims_3_8,
};

static const ax_anim *const sGastlyAnimTable4[] = {
	sGastlyAnims_4_1,
	sGastlyAnims_4_2,
	sGastlyAnims_4_3,
	sGastlyAnims_4_4,
	sGastlyAnims_4_5,
	sGastlyAnims_4_6,
	sGastlyAnims_4_7,
	sGastlyAnims_4_8,
};

static const ax_anim *const sGastlyAnimTable5[] = {
	sGastlyAnims_5_1,
	sGastlyAnims_5_2,
	sGastlyAnims_5_3,
	sGastlyAnims_5_4,
	sGastlyAnims_5_5,
	sGastlyAnims_5_6,
	sGastlyAnims_5_7,
	sGastlyAnims_5_8,
};

static const ax_anim *const sGastlyAnimTable6[] = {
	sGastlyAnims_6_1,
	sGastlyAnims_6_1,
	sGastlyAnims_6_1,
	sGastlyAnims_6_1,
	sGastlyAnims_6_1,
	sGastlyAnims_6_1,
	sGastlyAnims_6_1,
	sGastlyAnims_6_1,
};

static const ax_anim *const sGastlyAnimTable7[] = {
	gAxSharedAnim_00896,
	gAxSharedAnim_00909,
	gAxSharedAnim_00923,
	gAxSharedAnim_00934,
	gAxSharedAnim_00957,
	gAxSharedAnim_00969,
	gAxSharedAnim_00982,
	gAxSharedAnim_00998,
};

static const ax_anim *const sGastlyAnimTable8[] = {
	sGastlyAnims_8_1,
	sGastlyAnims_8_2,
	sGastlyAnims_8_3,
	sGastlyAnims_8_4,
	sGastlyAnims_8_5,
	sGastlyAnims_8_6,
	sGastlyAnims_8_7,
	sGastlyAnims_8_8,
};

static const ax_anim *const sGastlyAnimTable9[] = {
	sGastlyAnims_9_1,
	sGastlyAnims_9_2,
	sGastlyAnims_9_3,
	sGastlyAnims_9_4,
	sGastlyAnims_9_5,
	sGastlyAnims_9_6,
	sGastlyAnims_9_7,
	sGastlyAnims_9_8,
};

static const ax_anim *const sGastlyAnimTable10[] = {
	gAxSharedAnim_01469,
	gAxSharedAnim_01476,
	gAxSharedAnim_01484,
	gAxSharedAnim_01489,
	gAxSharedAnim_01496,
	gAxSharedAnim_01503,
	gAxSharedAnim_01510,
	gAxSharedAnim_01517,
};

static const ax_anim *const sGastlyAnimTable11[] = {
	sGastlyAnims_11_1,
	sGastlyAnims_11_2,
	sGastlyAnims_11_3,
	sGastlyAnims_11_4,
	sGastlyAnims_11_5,
	sGastlyAnims_11_6,
	sGastlyAnims_11_7,
	sGastlyAnims_11_8,
};

static const ax_anim *const sGastlyAnimTable12[] = {
	gAxSharedAnim_01742,
	sGastlyAnims_12_2,
	gAxSharedAnim_01765,
	gAxSharedAnim_01752,
	gAxSharedAnim_01751,
	gAxSharedAnim_01748,
	gAxSharedAnim_01745,
	gAxSharedAnim_01743,
};

static const ax_anim *const sGastlyAnimTable13[] = {
	gAxSharedAnim_01772,
	gAxSharedAnim_01789,
	gAxSharedAnim_01788,
	gAxSharedAnim_01786,
	gAxSharedAnim_01783,
	gAxSharedAnim_01781,
	gAxSharedAnim_01779,
	gAxSharedAnim_01776,
};

static const ax_anim *const *const sAxAnimationsGastly[] = {
	sGastlyAnimTable1,
	sGastlyAnimTable2,
	sGastlyAnimTable3,
	sGastlyAnimTable4,
	sGastlyAnimTable5,
	sGastlyAnimTable6,
	sGastlyAnimTable7,
	sGastlyAnimTable8,
	sGastlyAnimTable9,
	sGastlyAnimTable10,
	sGastlyAnimTable11,
	sGastlyAnimTable12,
	sGastlyAnimTable13,
};

static const ax_sprite *const sAxSpritesGastly[] = {
	sGastlySprites1,
	sGastlySprites2,
	sGastlySprites3,
	sGastlySprites4,
	sGastlySprites5,
	sGastlySprites6,
	sGastlySprites7,
	sGastlySprites8,
	sGastlySprites9,
	sGastlySprites10,
	sGastlySprites11,
	sGastlySprites12,
	sGastlySprites13,
	sGastlySprites14,
	sGastlySprites15,
	sGastlySprites16,
	sGastlySprites17,
	sGastlySprites18,
	sGastlySprites19,
	sGastlySprites20,
	sGastlySprites21,
	sGastlySprites22,
	sGastlySprites23,
	sGastlySprites24,
	sGastlySprites25,
	sGastlySprites26,
	sGastlySprites27,
	sGastlySprites28,
	sGastlySprites29,
	sGastlySprites30,
	sGastlySprites31,
	sGastlySprites32,
};

static const axmain sAxMainGastly = {
	.poses = sAxPosesGastly,
	.animations = sAxAnimationsGastly,
	.animCount = ARRAY_COUNT(sAxAnimationsGastly),
	.spriteData = sAxSpritesGastly,
	.positions = sAxPositionsGastly,
};
