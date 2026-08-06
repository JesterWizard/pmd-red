/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainGlalie;
const SiroArchive gAxGlalie = {"SIRO", &sAxMainGlalie};

static const ax_pose sGlaliePose1[] = {
	AX_POSE(0, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose2[] = {
	AX_POSE(1, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose3[] = {
	AX_POSE(2, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose4[] = {
	AX_POSE(3, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose5[] = {
	AX_POSE(4, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose6[] = {
	AX_POSE(5, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose7[] = {
	AX_POSE(6, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose8[] = {
	AX_POSE(7, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose10[] = {
	AX_POSE(8, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose11[] = {
	AX_POSE(9, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose12[] = {
	AX_POSE(10, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose13[] = {
	AX_POSE(11, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose14[] = {
	AX_POSE(12, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose15[] = {
	AX_POSE(13, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose16[] = {
	AX_POSE(8, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose17[] = {
	AX_POSE(9, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose18[] = {
	AX_POSE(10, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose19[] = {
	AX_POSE(6, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose20[] = {
	AX_POSE(14, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose21[] = {
	AX_POSE(7, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose22[] = {
	AX_POSE(3, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose23[] = {
	AX_POSE(4, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose24[] = {
	AX_POSE(5, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose26[] = {
	AX_POSE(15, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose27[] = {
	AX_POSE(16, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose29[] = {
	AX_POSE(17, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose30[] = {
	AX_POSE(18, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose32[] = {
	AX_POSE(19, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose33[] = {
	AX_POSE(20, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose35[] = {
	AX_POSE(21, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose36[] = {
	AX_POSE(22, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose38[] = {
	AX_POSE(23, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose39[] = {
	AX_POSE(24, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose41[] = {
	AX_POSE(21, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose42[] = {
	AX_POSE(22, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose44[] = {
	AX_POSE(19, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose45[] = {
	AX_POSE(20, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose47[] = {
	AX_POSE(17, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose48[] = {
	AX_POSE(18, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose75[] = {
	AX_POSE(25, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose78[] = {
	AX_POSE(26, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose81[] = {
	AX_POSE(27, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose93[] = {
	AX_POSE(27, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose96[] = {
	AX_POSE(26, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose105[] = {
	AX_POSE(28, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose106[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose107[] = {
	AX_POSE(30, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose108[] = {
	AX_POSE(31, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose109[] = {
	AX_POSE(32, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose110[] = {
	AX_POSE(33, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose111[] = {
	AX_POSE(34, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose112[] = {
	AX_POSE(33, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose113[] = {
	AX_POSE(32, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose114[] = {
	AX_POSE(31, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sGlaliePose143[] = {
	AX_POSE(24, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sGlalieAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 26, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 25, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 23}, .shadow = {0, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {1, 23}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 29, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {10, 11}, .shadow = {10, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {19, 23}, .shadow = {19, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {20, 22}, .shadow = {20, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {19, 23}, .shadow = {19, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {20, 22}, .shadow = {20, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 7}, .shadow = {6, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 35, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {13, -13}, .shadow = {13, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {19, -19}, .shadow = {19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {7, -6}, .shadow = {7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 38, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 41, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 40, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-13, -13}, .shadow = {-13, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 40, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-19, -19}, .shadow = {-19, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-7, -6}, .shadow = {-7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 47, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-10, 11}, .shadow = {-10, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-19, 23}, .shadow = {-19, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {-20, 22}, .shadow = {-20, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-19, 23}, .shadow = {-19, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-20, 22}, .shadow = {-20, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 7}, .shadow = {-6, 7} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_3_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 8}, .shadow = {0, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 14}, .shadow = {0, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 6, .unkFlags = 0, .poseId = 50, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 2, .poseId = 49, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 49, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, 22}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 4}, .shadow = {0, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_3_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {13, 15}, .shadow = {13, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {17, 20}, .shadow = {17, 20} },
	{ .frames = 6, .unkFlags = 0, .poseId = 53, .offset = {17, 20}, .shadow = {17, 20} },
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {20, 21}, .shadow = {20, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {20, 21}, .shadow = {20, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {20, 21}, .shadow = {20, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {19, 22}, .shadow = {19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {11, 13}, .shadow = {11, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {4, 4}, .shadow = {4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_3_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 56, .offset = {17, 0}, .shadow = {17, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 55, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {20, 1}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {20, 1}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {20, 1}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {4, 0}, .shadow = {4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_3_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {9, -7}, .shadow = {9, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {13, -10}, .shadow = {13, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {17, -13}, .shadow = {17, -13} },
	{ .frames = 6, .unkFlags = 0, .poseId = 59, .offset = {17, -13}, .shadow = {17, -13} },
	{ .frames = 2, .unkFlags = 2, .poseId = 58, .offset = {19, -15}, .shadow = {19, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {20, -14}, .shadow = {20, -14} },
	{ .frames = 2, .unkFlags = 1, .poseId = 58, .offset = {19, -15}, .shadow = {19, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {20, -14}, .shadow = {20, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {19, -15}, .shadow = {19, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {20, -14}, .shadow = {20, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {19, -15}, .shadow = {19, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {13, -10}, .shadow = {13, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {5, -4}, .shadow = {5, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_3_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 6, .unkFlags = 0, .poseId = 62, .offset = {0, -14}, .shadow = {0, -14} },
	{ .frames = 2, .unkFlags = 2, .poseId = 61, .offset = {0, -16}, .shadow = {0, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {1, -16}, .shadow = {1, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 61, .offset = {0, -16}, .shadow = {0, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {1, -16}, .shadow = {1, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -16}, .shadow = {0, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {1, -16}, .shadow = {1, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -16}, .shadow = {0, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_3_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {-9, -7}, .shadow = {-9, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-13, -10}, .shadow = {-13, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-17, -13}, .shadow = {-17, -13} },
	{ .frames = 6, .unkFlags = 0, .poseId = 65, .offset = {-17, -13}, .shadow = {-17, -13} },
	{ .frames = 2, .unkFlags = 2, .poseId = 64, .offset = {-19, -15}, .shadow = {-19, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-20, -14}, .shadow = {-20, -14} },
	{ .frames = 2, .unkFlags = 1, .poseId = 64, .offset = {-19, -15}, .shadow = {-19, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-20, -14}, .shadow = {-20, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-19, -15}, .shadow = {-19, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-20, -14}, .shadow = {-20, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-19, -15}, .shadow = {-19, -15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-13, -10}, .shadow = {-13, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-5, -4}, .shadow = {-5, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_3_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 68, .offset = {-17, 0}, .shadow = {-17, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-20, 1}, .shadow = {-20, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-20, 1}, .shadow = {-20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-20, 1}, .shadow = {-20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-4, 0}, .shadow = {-4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_3_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-13, 15}, .shadow = {-13, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-17, 20}, .shadow = {-17, 20} },
	{ .frames = 6, .unkFlags = 0, .poseId = 71, .offset = {-17, 20}, .shadow = {-17, 20} },
	{ .frames = 2, .unkFlags = 2, .poseId = 70, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-20, 21}, .shadow = {-20, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 70, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-20, 21}, .shadow = {-20, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-20, 21}, .shadow = {-20, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-19, 22}, .shadow = {-19, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-11, 13}, .shadow = {-11, 13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 73, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 74, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 76, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 77, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {5, 3}, .shadow = {5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 79, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 80, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 82, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 85, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 86, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 88, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 89, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 91, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 92, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 94, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-5, 3}, .shadow = {-5, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_8_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_8_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_8_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 121, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 122, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_8_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 124, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 123, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 125, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 123, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_8_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 127, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 126, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 128, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 126, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_8_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 130, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 129, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 129, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_8_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 133, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 132, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 132, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_8_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 136, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {10, 11}, .shadow = {10, 11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {7, 21}, .shadow = {7, 20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, 24}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 143, .offset = {-7, 21}, .shadow = {-7, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-10, 11}, .shadow = {-10, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {10, 1}, .shadow = {10, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {21, 7}, .shadow = {21, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {24, 15}, .shadow = {24, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 141, .offset = {20, 23}, .shadow = {20, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 142, .offset = {10, 23}, .shadow = {10, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, 8}, .shadow = {0, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {4, -3}, .shadow = {4, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {11, -5}, .shadow = {11, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {21, 2}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 141, .offset = {16, 4}, .shadow = {16, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {12, 5}, .shadow = {12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {3, -12}, .shadow = {3, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {10, -17}, .shadow = {10, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {19, -16}, .shadow = {19, -18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 140, .offset = {20, -9}, .shadow = {20, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {9, 1}, .shadow = {9, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {-7, -3}, .shadow = {-7, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-9, -9}, .shadow = {-9, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-7, -15}, .shadow = {-7, -16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -17}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 139, .offset = {7, -15}, .shadow = {7, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {9, -9}, .shadow = {9, -9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {7, -3}, .shadow = {7, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-3, -12}, .shadow = {-3, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-10, -17}, .shadow = {-10, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {-19, -16}, .shadow = {-19, -18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 144, .offset = {-20, -9}, .shadow = {-20, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {-9, -1}, .shadow = {-9, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-11, -5}, .shadow = {-11, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {-21, 2}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 143, .offset = {-16, 4}, .shadow = {-16, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {-12, 5}, .shadow = {-12, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {-8, 5}, .shadow = {-8, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {-10, 1}, .shadow = {-10, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-21, 7}, .shadow = {-21, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-24, 15}, .shadow = {-24, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {-20, 23}, .shadow = {-20, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 142, .offset = {-10, 23}, .shadow = {-10, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, 7}, .shadow = {0, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 155, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 154, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 156, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 159, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 161, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 160, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 162, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 162, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 162, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 165, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 167, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 167, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 167, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 166, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 168, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 168, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 168, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 169, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 171, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 173, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 174, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sGlalieAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 176, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 177, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sGlalieGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_1.4bpp.lz");
static const ax_sprite sGlalieSprites1[] = {
	{sGlalieGfx1, ARRAY_COUNT(sGlalieGfx1)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_2.4bpp.lz");
static const ax_sprite sGlalieSprites2[] = {
	{sGlalieGfx2, ARRAY_COUNT(sGlalieGfx2)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_3.4bpp.lz");
static const ax_sprite sGlalieSprites3[] = {
	{sGlalieGfx3, ARRAY_COUNT(sGlalieGfx3)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_4.4bpp.lz");
static const ax_sprite sGlalieSprites4[] = {
	{sGlalieGfx4, ARRAY_COUNT(sGlalieGfx4)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_5.4bpp.lz");
static const ax_sprite sGlalieSprites5[] = {
	{sGlalieGfx5, ARRAY_COUNT(sGlalieGfx5)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_6.4bpp.lz");
static const ax_sprite sGlalieSprites6[] = {
	{sGlalieGfx6, ARRAY_COUNT(sGlalieGfx6)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_7.4bpp.lz");
static const ax_sprite sGlalieSprites7[] = {
	{sGlalieGfx7, ARRAY_COUNT(sGlalieGfx7)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_8.4bpp.lz");
static const ax_sprite sGlalieSprites8[] = {
	{sGlalieGfx8, ARRAY_COUNT(sGlalieGfx8)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_9.4bpp.lz");
static const ax_sprite sGlalieSprites9[] = {
	{sGlalieGfx9, ARRAY_COUNT(sGlalieGfx9)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_10.4bpp.lz");
static const ax_sprite sGlalieSprites10[] = {
	{sGlalieGfx10, ARRAY_COUNT(sGlalieGfx10)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_11.4bpp.lz");
static const ax_sprite sGlalieSprites11[] = {
	{sGlalieGfx11, ARRAY_COUNT(sGlalieGfx11)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_12.4bpp.lz");
static const ax_sprite sGlalieSprites12[] = {
	{sGlalieGfx12, ARRAY_COUNT(sGlalieGfx12)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_13.4bpp.lz");
static const ax_sprite sGlalieSprites13[] = {
	{sGlalieGfx13, ARRAY_COUNT(sGlalieGfx13)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_14.4bpp.lz");
static const ax_sprite sGlalieSprites14[] = {
	{sGlalieGfx14, ARRAY_COUNT(sGlalieGfx14)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_15.4bpp.lz");
static const ax_sprite sGlalieSprites15[] = {
	{sGlalieGfx15, ARRAY_COUNT(sGlalieGfx15)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_16.4bpp.lz");
static const u8 sGlalieGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_16_1.4bpp.lz");
static const ax_sprite sGlalieSprites16[] = {
	{NULL, 32}, 
	{sGlalieGfx16, ARRAY_COUNT(sGlalieGfx16)}, 
	{NULL, 32}, 
	{sGlalieGfx16_1, ARRAY_COUNT(sGlalieGfx16_1)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_17.4bpp.lz");
static const u8 sGlalieGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_17_1.4bpp.lz");
static const ax_sprite sGlalieSprites17[] = {
	{NULL, 32}, 
	{sGlalieGfx17, ARRAY_COUNT(sGlalieGfx17)}, 
	{NULL, 32}, 
	{sGlalieGfx17_1, ARRAY_COUNT(sGlalieGfx17_1)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_18.4bpp.lz");
static const u8 sGlalieGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_18_1.4bpp.lz");
static const ax_sprite sGlalieSprites18[] = {
	{sGlalieGfx18, ARRAY_COUNT(sGlalieGfx18)}, 
	{NULL, 32}, 
	{sGlalieGfx18_1, ARRAY_COUNT(sGlalieGfx18_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGlalieGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_19.4bpp.lz");
static const u8 sGlalieGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_19_1.4bpp.lz");
static const u8 sGlalieGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_19_2.4bpp.lz");
static const ax_sprite sGlalieSprites19[] = {
	{sGlalieGfx19, ARRAY_COUNT(sGlalieGfx19)}, 
	{NULL, 64}, 
	{sGlalieGfx19_1, ARRAY_COUNT(sGlalieGfx19_1)}, 
	{NULL, 32}, 
	{sGlalieGfx19_2, ARRAY_COUNT(sGlalieGfx19_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGlalieGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_20.4bpp.lz");
static const u8 sGlalieGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_20_1.4bpp.lz");
static const u8 sGlalieGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_20_2.4bpp.lz");
static const u8 sGlalieGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_20_3.4bpp.lz");
static const ax_sprite sGlalieSprites20[] = {
	{sGlalieGfx20, ARRAY_COUNT(sGlalieGfx20)}, 
	{NULL, 32}, 
	{sGlalieGfx20_1, ARRAY_COUNT(sGlalieGfx20_1)}, 
	{NULL, 32}, 
	{sGlalieGfx20_2, ARRAY_COUNT(sGlalieGfx20_2)}, 
	{NULL, 32}, 
	{sGlalieGfx20_3, ARRAY_COUNT(sGlalieGfx20_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGlalieGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_21.4bpp.lz");
static const u8 sGlalieGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_21_1.4bpp.lz");
static const u8 sGlalieGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_21_2.4bpp.lz");
static const u8 sGlalieGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_21_3.4bpp.lz");
static const ax_sprite sGlalieSprites21[] = {
	{NULL, 32}, 
	{sGlalieGfx21, ARRAY_COUNT(sGlalieGfx21)}, 
	{NULL, 32}, 
	{sGlalieGfx21_1, ARRAY_COUNT(sGlalieGfx21_1)}, 
	{NULL, 32}, 
	{sGlalieGfx21_2, ARRAY_COUNT(sGlalieGfx21_2)}, 
	{NULL, 32}, 
	{sGlalieGfx21_3, ARRAY_COUNT(sGlalieGfx21_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGlalieGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_22.4bpp.lz");
static const u8 sGlalieGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_22_1.4bpp.lz");
static const ax_sprite sGlalieSprites22[] = {
	{NULL, 32}, 
	{sGlalieGfx22, ARRAY_COUNT(sGlalieGfx22)}, 
	{NULL, 32}, 
	{sGlalieGfx22_1, ARRAY_COUNT(sGlalieGfx22_1)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_23.4bpp.lz");
static const u8 sGlalieGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_23_1.4bpp.lz");
static const u8 sGlalieGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_23_2.4bpp.lz");
static const ax_sprite sGlalieSprites23[] = {
	{NULL, 32}, 
	{sGlalieGfx23, ARRAY_COUNT(sGlalieGfx23)}, 
	{NULL, 32}, 
	{sGlalieGfx23_1, ARRAY_COUNT(sGlalieGfx23_1)}, 
	{NULL, 32}, 
	{sGlalieGfx23_2, ARRAY_COUNT(sGlalieGfx23_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGlalieGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_24.4bpp.lz");
static const ax_sprite sGlalieSprites24[] = {
	{sGlalieGfx24, ARRAY_COUNT(sGlalieGfx24)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_25.4bpp.lz");
static const u8 sGlalieGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_25_1.4bpp.lz");
static const ax_sprite sGlalieSprites25[] = {
	{NULL, 32}, 
	{sGlalieGfx25, ARRAY_COUNT(sGlalieGfx25)}, 
	{NULL, 32}, 
	{sGlalieGfx25_1, ARRAY_COUNT(sGlalieGfx25_1)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_26.4bpp.lz");
static const u8 sGlalieGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_26_1.4bpp.lz");
static const ax_sprite sGlalieSprites26[] = {
	{NULL, 32}, 
	{sGlalieGfx26, ARRAY_COUNT(sGlalieGfx26)}, 
	{NULL, 32}, 
	{sGlalieGfx26_1, ARRAY_COUNT(sGlalieGfx26_1)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_27.4bpp.lz");
static const u8 sGlalieGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_27_1.4bpp.lz");
static const ax_sprite sGlalieSprites27[] = {
	{sGlalieGfx27, ARRAY_COUNT(sGlalieGfx27)}, 
	{NULL, 32}, 
	{sGlalieGfx27_1, ARRAY_COUNT(sGlalieGfx27_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGlalieGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_28.4bpp.lz");
static const u8 sGlalieGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_28_1.4bpp.lz");
static const u8 sGlalieGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_28_2.4bpp.lz");
static const u8 sGlalieGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_28_3.4bpp.lz");
static const ax_sprite sGlalieSprites28[] = {
	{sGlalieGfx28, ARRAY_COUNT(sGlalieGfx28)}, 
	{NULL, 32}, 
	{sGlalieGfx28_1, ARRAY_COUNT(sGlalieGfx28_1)}, 
	{NULL, 32}, 
	{sGlalieGfx28_2, ARRAY_COUNT(sGlalieGfx28_2)}, 
	{NULL, 32}, 
	{sGlalieGfx28_3, ARRAY_COUNT(sGlalieGfx28_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sGlalieGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_29.4bpp.lz");
static const ax_sprite sGlalieSprites29[] = {
	{sGlalieGfx29, ARRAY_COUNT(sGlalieGfx29)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_30.4bpp.lz");
static const ax_sprite sGlalieSprites30[] = {
	{sGlalieGfx30, ARRAY_COUNT(sGlalieGfx30)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_31.4bpp.lz");
static const ax_sprite sGlalieSprites31[] = {
	{sGlalieGfx31, ARRAY_COUNT(sGlalieGfx31)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_32.4bpp.lz");
static const ax_sprite sGlalieSprites32[] = {
	{sGlalieGfx32, ARRAY_COUNT(sGlalieGfx32)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_33.4bpp.lz");
static const ax_sprite sGlalieSprites33[] = {
	{sGlalieGfx33, ARRAY_COUNT(sGlalieGfx33)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_34.4bpp.lz");
static const ax_sprite sGlalieSprites34[] = {
	{sGlalieGfx34, ARRAY_COUNT(sGlalieGfx34)}, 
	{NULL, 0}
};
static const u8 sGlalieGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/glalie/sprite_35.4bpp.lz");
static const ax_sprite sGlalieSprites35[] = {
	{sGlalieGfx35, ARRAY_COUNT(sGlalieGfx35)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesGlalie[] = {
	sGlaliePose1,
	sGlaliePose2,
	sGlaliePose3,
	sGlaliePose4,
	sGlaliePose5,
	sGlaliePose6,
	sGlaliePose7,
	sGlaliePose8,
	sGlaliePose8,
	sGlaliePose10,
	sGlaliePose11,
	sGlaliePose12,
	sGlaliePose13,
	sGlaliePose14,
	sGlaliePose15,
	sGlaliePose16,
	sGlaliePose17,
	sGlaliePose18,
	sGlaliePose19,
	sGlaliePose20,
	sGlaliePose21,
	sGlaliePose22,
	sGlaliePose23,
	sGlaliePose24,
	sGlaliePose1,
	sGlaliePose26,
	sGlaliePose27,
	sGlaliePose4,
	sGlaliePose29,
	sGlaliePose30,
	sGlaliePose7,
	sGlaliePose32,
	sGlaliePose33,
	sGlaliePose10,
	sGlaliePose35,
	sGlaliePose36,
	sGlaliePose13,
	sGlaliePose38,
	sGlaliePose39,
	sGlaliePose16,
	sGlaliePose41,
	sGlaliePose42,
	sGlaliePose19,
	sGlaliePose44,
	sGlaliePose45,
	sGlaliePose22,
	sGlaliePose47,
	sGlaliePose48,
	sGlaliePose1,
	sGlaliePose26,
	sGlaliePose27,
	sGlaliePose4,
	sGlaliePose29,
	sGlaliePose30,
	sGlaliePose7,
	sGlaliePose32,
	sGlaliePose33,
	sGlaliePose10,
	sGlaliePose35,
	sGlaliePose36,
	sGlaliePose13,
	sGlaliePose38,
	sGlaliePose39,
	sGlaliePose16,
	sGlaliePose41,
	sGlaliePose42,
	sGlaliePose19,
	sGlaliePose44,
	sGlaliePose45,
	sGlaliePose22,
	sGlaliePose47,
	sGlaliePose48,
	sGlaliePose1,
	sGlaliePose27,
	sGlaliePose75,
	sGlaliePose4,
	sGlaliePose30,
	sGlaliePose78,
	sGlaliePose7,
	sGlaliePose33,
	sGlaliePose81,
	sGlaliePose10,
	sGlaliePose36,
	sGlaliePose35,
	sGlaliePose13,
	sGlaliePose39,
	sGlaliePose38,
	sGlaliePose16,
	sGlaliePose42,
	sGlaliePose41,
	sGlaliePose19,
	sGlaliePose45,
	sGlaliePose93,
	sGlaliePose22,
	sGlaliePose48,
	sGlaliePose96,
	sGlaliePose1,
	sGlaliePose22,
	sGlaliePose19,
	sGlaliePose16,
	sGlaliePose13,
	sGlaliePose10,
	sGlaliePose7,
	sGlaliePose4,
	sGlaliePose105,
	sGlaliePose106,
	sGlaliePose107,
	sGlaliePose108,
	sGlaliePose109,
	sGlaliePose110,
	sGlaliePose111,
	sGlaliePose112,
	sGlaliePose113,
	sGlaliePose114,
	sGlaliePose1,
	sGlaliePose2,
	sGlaliePose3,
	sGlaliePose4,
	sGlaliePose5,
	sGlaliePose6,
	sGlaliePose7,
	sGlaliePose8,
	sGlaliePose8,
	sGlaliePose10,
	sGlaliePose11,
	sGlaliePose12,
	sGlaliePose13,
	sGlaliePose14,
	sGlaliePose15,
	sGlaliePose16,
	sGlaliePose17,
	sGlaliePose18,
	sGlaliePose19,
	sGlaliePose20,
	sGlaliePose21,
	sGlaliePose22,
	sGlaliePose23,
	sGlaliePose24,
	sGlaliePose27,
	sGlaliePose48,
	sGlaliePose45,
	sGlaliePose42,
	sGlaliePose143,
	sGlaliePose36,
	sGlaliePose33,
	sGlaliePose30,
	sGlaliePose27,
	sGlaliePose30,
	sGlaliePose33,
	sGlaliePose36,
	sGlaliePose39,
	sGlaliePose42,
	sGlaliePose45,
	sGlaliePose48,
	sGlaliePose1,
	sGlaliePose27,
	sGlaliePose75,
	sGlaliePose4,
	sGlaliePose30,
	sGlaliePose78,
	sGlaliePose7,
	sGlaliePose33,
	sGlaliePose81,
	sGlaliePose10,
	sGlaliePose36,
	sGlaliePose35,
	sGlaliePose13,
	sGlaliePose39,
	sGlaliePose38,
	sGlaliePose16,
	sGlaliePose42,
	sGlaliePose41,
	sGlaliePose19,
	sGlaliePose45,
	sGlaliePose93,
	sGlaliePose22,
	sGlaliePose48,
	sGlaliePose96,
	sGlaliePose26,
	sGlaliePose47,
	sGlaliePose44,
	sGlaliePose41,
	sGlaliePose38,
	sGlaliePose35,
	sGlaliePose32,
	sGlaliePose29,
	sGlaliePose1,
	sGlaliePose22,
	sGlaliePose19,
	sGlaliePose16,
	sGlaliePose13,
	sGlaliePose10,
	sGlaliePose7,
	sGlaliePose4,
};

static const struct PositionSets sAxPositionsGlalie[] = {
	[0] = { .set = { {-1, -6}, {-9, -10}, {8, -10}, {0, -12} } },
	[1] = { .set = { {-1, -6}, {-8, -10}, {8, -10}, {0, -12} } },
	[2] = { .set = { {-1, -6}, {-8, -10}, {8, -10}, {0, -12} } },
	[3] = { .set = { {5, -7}, {9, -12}, {-5, -7}, {-1, -11} } },
	[4] = { .set = { {5, -7}, {9, -11}, {-5, -7}, {-1, -11} } },
	[5] = { .set = { {5, -7}, {9, -11}, {-5, -7}, {-1, -11} } },
	[6] = { .set = { {9, -8}, {8, -15}, {4, -8}, {-2, -12} } },
	[7] = { .set = { {9, -8}, {8, -15}, {4, -8}, {-2, -12} } },
	[8] = { .set = { {9, -8}, {8, -15}, {4, -8}, {-2, -12} } },
	[9] = { .set = { {2, -12}, {-7, -19}, {8, -11}, {-2, -12} } },
	[10] = { .set = { {3, -12}, {-7, -19}, {7, -10}, {-2, -11} } },
	[11] = { .set = { {3, -12}, {-7, -20}, {8, -10}, {-3, -11} } },
	[12] = { .set = { {0, -9}, {9, -14}, {-10, -14}, {0, -13} } },
	[13] = { .set = { {0, -9}, {9, -14}, {-10, -14}, {0, -13} } },
	[14] = { .set = { {0, -8}, {9, -14}, {-10, -14}, {0, -13} } },
	[15] = { .set = { {-3, -12}, {6, -19}, {-9, -11}, {1, -12} } },
	[16] = { .set = { {-4, -12}, {6, -19}, {-8, -10}, {1, -11} } },
	[17] = { .set = { {-4, -12}, {6, -20}, {-9, -10}, {2, -11} } },
	[18] = { .set = { {-10, -8}, {-9, -15}, {-5, -8}, {1, -12} } },
	[19] = { .set = { {-10, -8}, {-9, -15}, {-4, -8}, {1, -12} } },
	[20] = { .set = { {-10, -8}, {-9, -15}, {-5, -8}, {1, -12} } },
	[21] = { .set = { {-6, -7}, {-10, -12}, {4, -7}, {0, -11} } },
	[22] = { .set = { {-6, -7}, {-10, -11}, {4, -7}, {0, -11} } },
	[23] = { .set = { {-6, -7}, {-10, -11}, {4, -7}, {0, -11} } },
	[24] = { .set = { {-1, -6}, {-9, -10}, {8, -10}, {0, -12} } },
	[25] = { .set = { {0, -4}, {-9, -9}, {8, -9}, {-1, -13} } },
	[26] = { .set = { {0, -11}, {-9, -15}, {8, -15}, {-1, -15} } },
	[27] = { .set = { {5, -7}, {9, -12}, {-5, -7}, {-1, -11} } },
	[28] = { .set = { {5, -5}, {9, -13}, {-6, -8}, {1, -13} } },
	[29] = { .set = { {4, -12}, {9, -16}, {-7, -11}, {2, -14} } },
	[30] = { .set = { {9, -8}, {8, -15}, {4, -8}, {-2, -12} } },
	[31] = { .set = { {6, -5}, {7, -16}, {0, -6}, {0, -14} } },
	[32] = { .set = { {10, -14}, {1, -21}, {1, -8}, {0, -13} } },
	[33] = { .set = { {2, -12}, {-7, -19}, {8, -11}, {-2, -12} } },
	[34] = { .set = { {1, -14}, {-9, -19}, {9, -12}, {-3, -14} } },
	[35] = { .set = { {6, -16}, {-9, -17}, {5, -12}, {-2, -14} } },
	[36] = { .set = { {0, -9}, {9, -14}, {-10, -14}, {0, -13} } },
	[37] = { .set = { {-1, -10}, {10, -15}, {-11, -15}, {-1, -13} } },
	[38] = { .set = { {-1, -15}, {10, -14}, {-11, -13}, {-1, -13} } },
	[39] = { .set = { {-3, -12}, {6, -19}, {-9, -11}, {1, -12} } },
	[40] = { .set = { {-2, -14}, {8, -19}, {-10, -12}, {2, -14} } },
	[41] = { .set = { {-7, -16}, {8, -17}, {-6, -12}, {1, -14} } },
	[42] = { .set = { {-10, -8}, {-9, -15}, {-5, -8}, {1, -12} } },
	[43] = { .set = { {-7, -5}, {-8, -16}, {-1, -6}, {-1, -14} } },
	[44] = { .set = { {-11, -14}, {-2, -21}, {-2, -8}, {-1, -13} } },
	[45] = { .set = { {-6, -7}, {-10, -12}, {4, -7}, {0, -11} } },
	[46] = { .set = { {-6, -5}, {-10, -13}, {5, -8}, {-2, -13} } },
	[47] = { .set = { {-5, -12}, {-10, -16}, {6, -11}, {-3, -14} } },
	[48] = { .set = { {-1, -6}, {-9, -10}, {8, -10}, {0, -12} } },
	[49] = { .set = { {0, -4}, {-9, -9}, {8, -9}, {-1, -13} } },
	[50] = { .set = { {0, -11}, {-9, -15}, {8, -15}, {-1, -15} } },
	[51] = { .set = { {5, -7}, {9, -12}, {-5, -7}, {-1, -11} } },
	[52] = { .set = { {5, -5}, {9, -13}, {-6, -8}, {1, -13} } },
	[53] = { .set = { {4, -12}, {9, -16}, {-7, -11}, {2, -14} } },
	[54] = { .set = { {9, -8}, {8, -15}, {4, -8}, {-2, -12} } },
	[55] = { .set = { {6, -5}, {7, -16}, {0, -6}, {0, -14} } },
	[56] = { .set = { {10, -14}, {1, -21}, {1, -8}, {0, -13} } },
	[57] = { .set = { {2, -12}, {-7, -19}, {8, -11}, {-2, -12} } },
	[58] = { .set = { {1, -14}, {-9, -19}, {9, -12}, {-3, -14} } },
	[59] = { .set = { {6, -16}, {-9, -17}, {5, -12}, {-2, -14} } },
	[60] = { .set = { {0, -9}, {9, -14}, {-10, -14}, {0, -13} } },
	[61] = { .set = { {-1, -10}, {10, -15}, {-11, -15}, {-1, -13} } },
	[62] = { .set = { {-1, -15}, {10, -14}, {-11, -13}, {-1, -13} } },
	[63] = { .set = { {-3, -12}, {6, -19}, {-9, -11}, {1, -12} } },
	[64] = { .set = { {-2, -14}, {8, -19}, {-10, -12}, {2, -14} } },
	[65] = { .set = { {-7, -16}, {8, -17}, {-6, -12}, {1, -14} } },
	[66] = { .set = { {-10, -8}, {-9, -15}, {-5, -8}, {1, -12} } },
	[67] = { .set = { {-7, -5}, {-8, -16}, {-1, -6}, {-1, -14} } },
	[68] = { .set = { {-11, -14}, {-2, -21}, {-2, -8}, {-1, -13} } },
	[69] = { .set = { {-6, -7}, {-10, -12}, {4, -7}, {0, -11} } },
	[70] = { .set = { {-6, -5}, {-10, -13}, {5, -8}, {-2, -13} } },
	[71] = { .set = { {-5, -12}, {-10, -16}, {6, -11}, {-3, -14} } },
	[72] = { .set = { {-1, -6}, {-9, -10}, {8, -10}, {0, -12} } },
	[73] = { .set = { {0, -11}, {-9, -15}, {8, -15}, {-1, -15} } },
	[74] = { .set = { {-1, -4}, {-9, -11}, {8, -11}, {-1, -13} } },
	[75] = { .set = { {5, -7}, {9, -12}, {-5, -7}, {-1, -11} } },
	[76] = { .set = { {4, -12}, {9, -16}, {-7, -11}, {2, -14} } },
	[77] = { .set = { {5, -4}, {10, -13}, {-6, -7}, {1, -13} } },
	[78] = { .set = { {9, -8}, {8, -15}, {4, -8}, {-2, -12} } },
	[79] = { .set = { {10, -14}, {1, -21}, {1, -8}, {0, -13} } },
	[80] = { .set = { {5, -4}, {7, -15}, {-1, -6}, {1, -13} } },
	[81] = { .set = { {2, -12}, {-7, -19}, {8, -11}, {-2, -12} } },
	[82] = { .set = { {6, -16}, {-9, -17}, {5, -12}, {-2, -14} } },
	[83] = { .set = { {1, -14}, {-9, -19}, {9, -12}, {-3, -14} } },
	[84] = { .set = { {0, -9}, {9, -14}, {-10, -14}, {0, -13} } },
	[85] = { .set = { {-1, -15}, {10, -14}, {-11, -13}, {-1, -13} } },
	[86] = { .set = { {-1, -10}, {10, -15}, {-11, -15}, {-1, -13} } },
	[87] = { .set = { {-3, -12}, {6, -19}, {-9, -11}, {1, -12} } },
	[88] = { .set = { {-7, -16}, {8, -17}, {-6, -12}, {1, -14} } },
	[89] = { .set = { {-2, -14}, {8, -19}, {-10, -12}, {2, -14} } },
	[90] = { .set = { {-10, -8}, {-9, -15}, {-5, -8}, {1, -12} } },
	[91] = { .set = { {-11, -14}, {-2, -21}, {-2, -8}, {-1, -13} } },
	[92] = { .set = { {-6, -4}, {-8, -15}, {0, -6}, {-2, -13} } },
	[93] = { .set = { {-6, -7}, {-10, -12}, {4, -7}, {0, -11} } },
	[94] = { .set = { {-5, -12}, {-10, -16}, {6, -11}, {-3, -14} } },
	[95] = { .set = { {-6, -4}, {-11, -13}, {5, -7}, {-2, -13} } },
	[96] = { .set = { {-1, -6}, {-9, -10}, {8, -10}, {0, -12} } },
	[97] = { .set = { {-6, -7}, {-10, -12}, {4, -7}, {0, -11} } },
	[98] = { .set = { {-10, -8}, {-9, -15}, {-5, -8}, {1, -12} } },
	[99] = { .set = { {-3, -12}, {6, -19}, {-9, -11}, {1, -12} } },
	[100] = { .set = { {0, -9}, {9, -14}, {-10, -14}, {0, -13} } },
	[101] = { .set = { {2, -12}, {-7, -19}, {8, -11}, {-2, -12} } },
	[102] = { .set = { {9, -8}, {8, -15}, {4, -8}, {-2, -12} } },
	[103] = { .set = { {5, -7}, {9, -12}, {-5, -7}, {-1, -11} } },
	[104] = { .set = { {-6, -5}, {-8, -12}, {6, -5}, {-1, -7} } },
	[105] = { .set = { {-5, -7}, {-7, -13}, {6, -6}, {0, -9} } },
	[106] = { .set = { {-1, -8}, {-8, -12}, {7, -12}, {0, -13} } },
	[107] = { .set = { {4, -9}, {7, -15}, {-7, -10}, {-2, -13} } },
	[108] = { .set = { {8, -9}, {7, -18}, {3, -11}, {-2, -12} } },
	[109] = { .set = { {3, -13}, {-9, -20}, {8, -12}, {-2, -11} } },
	[110] = { .set = { {0, -12}, {9, -14}, {-10, -14}, {-1, -12} } },
	[111] = { .set = { {-4, -13}, {8, -20}, {-9, -12}, {1, -11} } },
	[112] = { .set = { {-9, -9}, {-8, -18}, {-4, -11}, {1, -12} } },
	[113] = { .set = { {-5, -9}, {-8, -15}, {6, -10}, {1, -13} } },
	[114] = { .set = { {-1, -6}, {-9, -10}, {8, -10}, {0, -12} } },
	[115] = { .set = { {-1, -6}, {-8, -10}, {8, -10}, {0, -12} } },
	[116] = { .set = { {-1, -6}, {-8, -10}, {8, -10}, {0, -12} } },
	[117] = { .set = { {5, -7}, {9, -12}, {-5, -7}, {-1, -11} } },
	[118] = { .set = { {5, -7}, {9, -11}, {-5, -7}, {-1, -11} } },
	[119] = { .set = { {5, -7}, {9, -11}, {-5, -7}, {-1, -11} } },
	[120] = { .set = { {9, -8}, {8, -15}, {4, -8}, {-2, -12} } },
	[121] = { .set = { {9, -8}, {8, -15}, {4, -8}, {-2, -12} } },
	[122] = { .set = { {9, -8}, {8, -15}, {4, -8}, {-2, -12} } },
	[123] = { .set = { {2, -12}, {-7, -19}, {8, -11}, {-2, -12} } },
	[124] = { .set = { {3, -12}, {-7, -19}, {7, -10}, {-2, -11} } },
	[125] = { .set = { {3, -12}, {-7, -20}, {8, -10}, {-3, -11} } },
	[126] = { .set = { {0, -9}, {9, -14}, {-10, -14}, {0, -13} } },
	[127] = { .set = { {0, -9}, {9, -14}, {-10, -14}, {0, -13} } },
	[128] = { .set = { {0, -8}, {9, -14}, {-10, -14}, {0, -13} } },
	[129] = { .set = { {-3, -12}, {6, -19}, {-9, -11}, {1, -12} } },
	[130] = { .set = { {-4, -12}, {6, -19}, {-8, -10}, {1, -11} } },
	[131] = { .set = { {-4, -12}, {6, -20}, {-9, -10}, {2, -11} } },
	[132] = { .set = { {-10, -8}, {-9, -15}, {-5, -8}, {1, -12} } },
	[133] = { .set = { {-10, -8}, {-9, -15}, {-4, -8}, {1, -12} } },
	[134] = { .set = { {-10, -8}, {-9, -15}, {-5, -8}, {1, -12} } },
	[135] = { .set = { {-6, -7}, {-10, -12}, {4, -7}, {0, -11} } },
	[136] = { .set = { {-6, -7}, {-10, -11}, {4, -7}, {0, -11} } },
	[137] = { .set = { {-6, -7}, {-10, -11}, {4, -7}, {0, -11} } },
	[138] = { .set = { {0, -11}, {-9, -15}, {8, -15}, {-1, -15} } },
	[139] = { .set = { {-5, -12}, {-10, -16}, {6, -11}, {-3, -14} } },
	[140] = { .set = { {-11, -14}, {-2, -21}, {-2, -8}, {-1, -13} } },
	[141] = { .set = { {-7, -16}, {8, -17}, {-6, -12}, {1, -14} } },
	[142] = { .set = { {0, -15}, {-11, -14}, {10, -13}, {0, -13} } },
	[143] = { .set = { {6, -16}, {-9, -17}, {5, -12}, {-2, -14} } },
	[144] = { .set = { {10, -14}, {1, -21}, {1, -8}, {0, -13} } },
	[145] = { .set = { {4, -12}, {9, -16}, {-7, -11}, {2, -14} } },
	[146] = { .set = { {0, -11}, {-9, -15}, {8, -15}, {-1, -15} } },
	[147] = { .set = { {4, -12}, {9, -16}, {-7, -11}, {2, -14} } },
	[148] = { .set = { {10, -14}, {1, -21}, {1, -8}, {0, -13} } },
	[149] = { .set = { {6, -16}, {-9, -17}, {5, -12}, {-2, -14} } },
	[150] = { .set = { {-1, -15}, {10, -14}, {-11, -13}, {-1, -13} } },
	[151] = { .set = { {-7, -16}, {8, -17}, {-6, -12}, {1, -14} } },
	[152] = { .set = { {-11, -14}, {-2, -21}, {-2, -8}, {-1, -13} } },
	[153] = { .set = { {-5, -12}, {-10, -16}, {6, -11}, {-3, -14} } },
	[154] = { .set = { {-1, -6}, {-9, -10}, {8, -10}, {0, -12} } },
	[155] = { .set = { {0, -11}, {-9, -15}, {8, -15}, {-1, -15} } },
	[156] = { .set = { {-1, -4}, {-9, -11}, {8, -11}, {-1, -13} } },
	[157] = { .set = { {5, -7}, {9, -12}, {-5, -7}, {-1, -11} } },
	[158] = { .set = { {4, -12}, {9, -16}, {-7, -11}, {2, -14} } },
	[159] = { .set = { {5, -4}, {10, -13}, {-6, -7}, {1, -13} } },
	[160] = { .set = { {9, -8}, {8, -15}, {4, -8}, {-2, -12} } },
	[161] = { .set = { {10, -14}, {1, -21}, {1, -8}, {0, -13} } },
	[162] = { .set = { {5, -4}, {7, -15}, {-1, -6}, {1, -13} } },
	[163] = { .set = { {2, -12}, {-7, -19}, {8, -11}, {-2, -12} } },
	[164] = { .set = { {6, -16}, {-9, -17}, {5, -12}, {-2, -14} } },
	[165] = { .set = { {1, -14}, {-9, -19}, {9, -12}, {-3, -14} } },
	[166] = { .set = { {0, -9}, {9, -14}, {-10, -14}, {0, -13} } },
	[167] = { .set = { {-1, -15}, {10, -14}, {-11, -13}, {-1, -13} } },
	[168] = { .set = { {-1, -10}, {10, -15}, {-11, -15}, {-1, -13} } },
	[169] = { .set = { {-3, -12}, {6, -19}, {-9, -11}, {1, -12} } },
	[170] = { .set = { {-7, -16}, {8, -17}, {-6, -12}, {1, -14} } },
	[171] = { .set = { {-2, -14}, {8, -19}, {-10, -12}, {2, -14} } },
	[172] = { .set = { {-10, -8}, {-9, -15}, {-5, -8}, {1, -12} } },
	[173] = { .set = { {-11, -14}, {-2, -21}, {-2, -8}, {-1, -13} } },
	[174] = { .set = { {-6, -4}, {-8, -15}, {0, -6}, {-2, -13} } },
	[175] = { .set = { {-6, -7}, {-10, -12}, {4, -7}, {0, -11} } },
	[176] = { .set = { {-5, -12}, {-10, -16}, {6, -11}, {-3, -14} } },
	[177] = { .set = { {-6, -4}, {-11, -13}, {5, -7}, {-2, -13} } },
	[178] = { .set = { {0, -4}, {-9, -9}, {8, -9}, {-1, -13} } },
	[179] = { .set = { {-6, -5}, {-10, -13}, {5, -8}, {-2, -13} } },
	[180] = { .set = { {-7, -5}, {-8, -16}, {-1, -6}, {-1, -14} } },
	[181] = { .set = { {-2, -14}, {8, -19}, {-10, -12}, {2, -14} } },
	[182] = { .set = { {-1, -10}, {10, -15}, {-11, -15}, {-1, -13} } },
	[183] = { .set = { {1, -14}, {-9, -19}, {9, -12}, {-3, -14} } },
	[184] = { .set = { {6, -5}, {7, -16}, {0, -6}, {0, -14} } },
	[185] = { .set = { {5, -5}, {9, -13}, {-6, -8}, {1, -13} } },
	[186] = { .set = { {-1, -6}, {-9, -10}, {8, -10}, {0, -12} } },
	[187] = { .set = { {-6, -7}, {-10, -12}, {4, -7}, {0, -11} } },
	[188] = { .set = { {-10, -8}, {-9, -15}, {-5, -8}, {1, -12} } },
	[189] = { .set = { {-3, -12}, {6, -19}, {-9, -11}, {1, -12} } },
	[190] = { .set = { {0, -9}, {9, -14}, {-10, -14}, {0, -13} } },
	[191] = { .set = { {2, -12}, {-7, -19}, {8, -11}, {-2, -12} } },
	[192] = { .set = { {9, -8}, {8, -15}, {4, -8}, {-2, -12} } },
	[193] = { .set = { {5, -7}, {9, -12}, {-5, -7}, {-1, -11} } },
};

static const ax_anim *const sGlalieAnimTable1[] = {
	gAxSharedAnim_02476,
	gAxSharedAnim_02541,
	gAxSharedAnim_02550,
	gAxSharedAnim_02558,
	gAxSharedAnim_02498,
	gAxSharedAnim_02518,
	gAxSharedAnim_02525,
	gAxSharedAnim_02534,
};

static const ax_anim *const sGlalieAnimTable2[] = {
	sGlalieAnims_2_1,
	sGlalieAnims_2_2,
	gAxSharedAnim_01834,
	sGlalieAnims_2_4,
	sGlalieAnims_2_5,
	sGlalieAnims_2_6,
	gAxSharedAnim_01941,
	sGlalieAnims_2_8,
};

static const ax_anim *const sGlalieAnimTable3[] = {
	sGlalieAnims_3_1,
	sGlalieAnims_3_2,
	sGlalieAnims_3_3,
	sGlalieAnims_3_4,
	sGlalieAnims_3_5,
	sGlalieAnims_3_6,
	sGlalieAnims_3_7,
	sGlalieAnims_3_8,
};

static const ax_anim *const sGlalieAnimTable4[] = {
	sGlalieAnims_4_1,
	sGlalieAnims_4_2,
	sGlalieAnims_4_3,
	sGlalieAnims_4_4,
	sGlalieAnims_4_5,
	sGlalieAnims_4_6,
	sGlalieAnims_4_7,
	sGlalieAnims_4_8,
};

static const ax_anim *const sGlalieAnimTable5[] = {
	gAxSharedAnim_02292,
	gAxSharedAnim_00169,
	gAxSharedAnim_00162,
	gAxSharedAnim_00159,
	gAxSharedAnim_00154,
	gAxSharedAnim_02316,
	gAxSharedAnim_02311,
	gAxSharedAnim_02300,
};

static const ax_anim *const sGlalieAnimTable6[] = {
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
	gAxSharedAnim_02360,
};

static const ax_anim *const sGlalieAnimTable7[] = {
	gAxSharedAnim_00194,
	gAxSharedAnim_00202,
	gAxSharedAnim_00211,
	gAxSharedAnim_00219,
	gAxSharedAnim_00233,
	gAxSharedAnim_00245,
	gAxSharedAnim_00254,
	gAxSharedAnim_00260,
};

static const ax_anim *const sGlalieAnimTable8[] = {
	sGlalieAnims_8_1,
	sGlalieAnims_8_2,
	sGlalieAnims_8_3,
	sGlalieAnims_8_4,
	sGlalieAnims_8_5,
	sGlalieAnims_8_6,
	sGlalieAnims_8_7,
	sGlalieAnims_8_8,
};

static const ax_anim *const sGlalieAnimTable9[] = {
	sGlalieAnims_9_1,
	sGlalieAnims_9_2,
	sGlalieAnims_9_3,
	sGlalieAnims_9_4,
	sGlalieAnims_9_5,
	sGlalieAnims_9_6,
	sGlalieAnims_9_7,
	sGlalieAnims_9_8,
};

static const ax_anim *const sGlalieAnimTable10[] = {
	gAxSharedAnim_00540,
	gAxSharedAnim_00547,
	gAxSharedAnim_00555,
	gAxSharedAnim_00564,
	gAxSharedAnim_00574,
	gAxSharedAnim_00584,
	gAxSharedAnim_00593,
	gAxSharedAnim_00600,
};

static const ax_anim *const sGlalieAnimTable11[] = {
	sGlalieAnims_11_1,
	sGlalieAnims_11_2,
	sGlalieAnims_11_3,
	sGlalieAnims_11_4,
	sGlalieAnims_11_5,
	sGlalieAnims_11_6,
	sGlalieAnims_11_7,
	sGlalieAnims_11_8,
};

static const ax_anim *const sGlalieAnimTable12[] = {
	gAxSharedAnim_00907,
	gAxSharedAnim_00996,
	gAxSharedAnim_00971,
	gAxSharedAnim_00960,
	gAxSharedAnim_00959,
	gAxSharedAnim_00945,
	gAxSharedAnim_00925,
	gAxSharedAnim_00908,
};

static const ax_anim *const sGlalieAnimTable13[] = {
	gAxSharedAnim_01017,
	gAxSharedAnim_01123,
	gAxSharedAnim_01112,
	gAxSharedAnim_01093,
	gAxSharedAnim_01079,
	gAxSharedAnim_01063,
	gAxSharedAnim_01048,
	gAxSharedAnim_01028,
};

static const ax_anim *const *const sAxAnimationsGlalie[] = {
	sGlalieAnimTable1,
	sGlalieAnimTable2,
	sGlalieAnimTable3,
	sGlalieAnimTable4,
	sGlalieAnimTable5,
	sGlalieAnimTable6,
	sGlalieAnimTable7,
	sGlalieAnimTable8,
	sGlalieAnimTable9,
	sGlalieAnimTable10,
	sGlalieAnimTable11,
	sGlalieAnimTable12,
	sGlalieAnimTable13,
};

static const ax_sprite *const sAxSpritesGlalie[] = {
	sGlalieSprites1,
	sGlalieSprites2,
	sGlalieSprites3,
	sGlalieSprites4,
	sGlalieSprites5,
	sGlalieSprites6,
	sGlalieSprites7,
	sGlalieSprites8,
	sGlalieSprites9,
	sGlalieSprites10,
	sGlalieSprites11,
	sGlalieSprites12,
	sGlalieSprites13,
	sGlalieSprites14,
	sGlalieSprites15,
	sGlalieSprites16,
	sGlalieSprites17,
	sGlalieSprites18,
	sGlalieSprites19,
	sGlalieSprites20,
	sGlalieSprites21,
	sGlalieSprites22,
	sGlalieSprites23,
	sGlalieSprites24,
	sGlalieSprites25,
	sGlalieSprites26,
	sGlalieSprites27,
	sGlalieSprites28,
	sGlalieSprites29,
	sGlalieSprites30,
	sGlalieSprites31,
	sGlalieSprites32,
	sGlalieSprites33,
	sGlalieSprites34,
	sGlalieSprites35,
};

static const axmain sAxMainGlalie = {
	.poses = sAxPosesGlalie,
	.animations = sAxAnimationsGlalie,
	.animCount = ARRAY_COUNT(sAxAnimationsGlalie),
	.spriteData = sAxSpritesGlalie,
	.positions = sAxPositionsGlalie,
};
