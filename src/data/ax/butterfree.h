/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainButterfree;
const SiroArchive gAxButterfree = {"SIRO", &sAxMainButterfree};

static const ax_pose sButterfreePose1[] = {
	AX_POSE(0, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose2[] = {
	AX_POSE(1, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose3[] = {
	AX_POSE(2, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose4[] = {
	AX_POSE(3, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose5[] = {
	AX_POSE(4, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose6[] = {
	AX_POSE(5, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose7[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose8[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose9[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose10[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose11[] = {
	AX_POSE(10, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose12[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose13[] = {
	AX_POSE(12, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose14[] = {
	AX_POSE(13, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose15[] = {
	AX_POSE(14, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose16[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose17[] = {
	AX_POSE(10, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose18[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose19[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose20[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose21[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose22[] = {
	AX_POSE(3, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose23[] = {
	AX_POSE(4, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose24[] = {
	AX_POSE(5, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose34[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose35[] = {
	AX_POSE(10, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose36[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose81[] = {
	AX_POSE(15, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose82[] = {
	AX_POSE(16, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose91[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose92[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose101[] = {
	AX_POSE(19, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(247, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose102[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose111[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose112[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose121[] = {
	AX_POSE(23, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose122[] = {
	AX_POSE(24, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose131[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose132[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose141[] = {
	AX_POSE(19, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose142[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose151[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose152[] = {
	AX_POSE(18, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose177[] = {
	AX_POSE(25, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose178[] = {
	AX_POSE(26, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose179[] = {
	AX_POSE(27, OAM1(222, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose180[] = {
	AX_POSE(28, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose181[] = {
	AX_POSE(29, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose182[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose183[] = {
	AX_POSE(31, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose184[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose185[] = {
	AX_POSE(29, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sButterfreePose186[] = {
	AX_POSE(28, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sButterfreeAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -5}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 26, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 25}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 25, .offset = {1, 25}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 25}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {1, 25}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 14}, .shadow = {0, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-1, -2}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-5, -6}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-6, -8}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-6, -8}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-6, -8}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 29, .offset = {4, 3}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {14, 14}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-5, -2}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 32, .offset = {4, -1}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {14, 0}, .shadow = {14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-1, 0}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-5, -1}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-6, -2}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-6, -2}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-6, -2}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 35, .offset = {4, -8}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {10, -11}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {16, -13}, .shadow = {16, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {17, -13}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {16, -13}, .shadow = {16, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {17, -13}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {11, -11}, .shadow = {11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 38, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {1, -13}, .shadow = {1, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {1, -13}, .shadow = {1, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -8}, .shadow = {0, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {1, 0}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {5, -1}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {6, -2}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {6, -2}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {6, -2}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 41, .offset = {-4, -8}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {-10, -11}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-16, -13}, .shadow = {-16, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 40, .offset = {-17, -13}, .shadow = {-17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-16, -13}, .shadow = {-16, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-17, -13}, .shadow = {-17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-11, -11}, .shadow = {-11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {5, -2}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 44, .offset = {-4, -1}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-14, 0}, .shadow = {-14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {1, -2}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {5, -6}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 47, .offset = {-4, 3}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {-21, 20}, .shadow = {-21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-21, 20}, .shadow = {-21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-14, 14}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -5}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 50, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 25}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 49, .offset = {1, 25}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 25}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 25}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 14}, .shadow = {0, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-1, -2}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-5, -6}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-6, -8}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-6, -8}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-6, -8}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 53, .offset = {4, 3}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {21, 20}, .shadow = {21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {14, 14}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-5, -2}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 56, .offset = {4, -1}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 56, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {14, 0}, .shadow = {14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-1, 0}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-5, -1}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {-6, -2}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-6, -2}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {-6, -2}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 59, .offset = {4, -8}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {10, -11}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {16, -13}, .shadow = {16, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 58, .offset = {17, -13}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {16, -13}, .shadow = {16, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {17, -13}, .shadow = {17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {11, -11}, .shadow = {11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 62, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 1, .poseId = 61, .offset = {1, -13}, .shadow = {1, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -13}, .shadow = {0, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {1, -13}, .shadow = {1, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -8}, .shadow = {0, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {1, 0}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {5, -1}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {6, -2}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {6, -2}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {6, -2}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 65, .offset = {-4, -8}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {-10, -11}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-16, -13}, .shadow = {-16, -17} },
	{ .frames = 2, .unkFlags = 1, .poseId = 64, .offset = {-17, -13}, .shadow = {-17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-16, -13}, .shadow = {-16, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-17, -13}, .shadow = {-17, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-11, -11}, .shadow = {-11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {5, -2}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 68, .offset = {-4, -1}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-14, 0}, .shadow = {-14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {1, -2}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {5, -6}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 71, .offset = {-4, 3}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 70, .offset = {-21, 20}, .shadow = {-21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-20, 20}, .shadow = {-20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-21, 20}, .shadow = {-21, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-14, 14}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 77, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 78, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 80, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 2, .poseId = 80, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 81, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {1, 5}, .shadow = {1, 5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 85, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 90, .offset = {-1, -1}, .shadow = {-2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 90, .offset = {-2, -2}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {3, 5}, .shadow = {3, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {3, 5}, .shadow = {3, 5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 100, .offset = {-1, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 100, .offset = {-2, -1}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 101, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {4, 1}, .shadow = {4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {4, 1}, .shadow = {4, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 110, .offset = {-1, 1}, .shadow = {-2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 110, .offset = {-2, 2}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {3, -5}, .shadow = {3, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 120, .offset = {0, 1}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 120, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 121, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, -5}, .shadow = {0, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 130, .offset = {1, 1}, .shadow = {2, 2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 130, .offset = {2, 2}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 131, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {-3, -5}, .shadow = {-3, -5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {1, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 140, .offset = {2, -1}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 141, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {-4, 1}, .shadow = {-4, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {-4, 1}, .shadow = {-4, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 3, .unkFlags = 0, .poseId = 150, .offset = {1, -1}, .shadow = {2, -2} },
	{ .frames = 6, .unkFlags = 2, .poseId = 150, .offset = {2, -2}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 151, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-3, 5}, .shadow = {-3, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {-3, 5}, .shadow = {-3, 5} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_5_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_5_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_5_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_5_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_5_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_5_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_5_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_5_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 168, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_6_1[] = {
	{ .frames = 35, .unkFlags = 0, .poseId = 176, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 30, .unkFlags = 0, .poseId = 177, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_8_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 187, .offset = {0, -1}, .shadow = {0, 1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 186, .offset = {0, -2}, .shadow = {0, 1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 188, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_8_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 190, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 189, .offset = {1, -2}, .shadow = {1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 191, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_8_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 193, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 192, .offset = {1, -2}, .shadow = {1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 194, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_8_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 196, .offset = {0, -1}, .shadow = {1, -1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 195, .offset = {0, -2}, .shadow = {1, -1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 197, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_8_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 199, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 198, .offset = {0, -2}, .shadow = {0, -1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 200, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_8_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 202, .offset = {0, -1}, .shadow = {-1, -1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 201, .offset = {0, -2}, .shadow = {-1, -1} },
	{ .frames = 8, .unkFlags = 0, .poseId = 203, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_8_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 205, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 204, .offset = {-1, -2}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 206, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_8_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 208, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 207, .offset = {-1, -2}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 209, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 211, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {11, 12}, .shadow = {11, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {9, 22}, .shadow = {9, 19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 214, .offset = {1, 28}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 215, .offset = {-9, 22}, .shadow = {-9, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 216, .offset = {-11, 12}, .shadow = {-11, 12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 210, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 210, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {24, 11}, .shadow = {24, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 213, .offset = {23, 26}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 214, .offset = {11, 29}, .shadow = {11, 25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 215, .offset = {2, 18}, .shadow = {2, 18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 216, .offset = {-2, 10}, .shadow = {-2, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 216, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 217, .offset = {3, -4}, .shadow = {3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {8, -6}, .shadow = {8, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {17, -3}, .shadow = {17, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 212, .offset = {23, 4}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 213, .offset = {17, 8}, .shadow = {17, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {12, 10}, .shadow = {12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 215, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 216, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 215, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 216, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {4, -14}, .shadow = {4, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {9, -18}, .shadow = {9, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 211, .offset = {17, -18}, .shadow = {17, -18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 212, .offset = {19, -11}, .shadow = {19, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {13, -1}, .shadow = {13, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 214, .offset = {7, 1}, .shadow = {7, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 215, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 215, .offset = {-6, -4}, .shadow = {-6, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 216, .offset = {-8, -9}, .shadow = {-8, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {-7, -13}, .shadow = {-7, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 210, .offset = {-1, -16}, .shadow = {-1, -16} },
	{ .frames = 2, .unkFlags = 3, .poseId = 211, .offset = {4, -14}, .shadow = {4, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {5, -8}, .shadow = {5, -8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 213, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 214, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 212, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {-4, -14}, .shadow = {-4, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {-9, -18}, .shadow = {-9, -18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 217, .offset = {-17, -18}, .shadow = {-17, -18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 216, .offset = {-19, -11}, .shadow = {-19, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 215, .offset = {-13, -1}, .shadow = {-13, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 214, .offset = {-7, 1}, .shadow = {-7, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 213, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 212, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 211, .offset = {-3, -4}, .shadow = {-3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 210, .offset = {-8, -6}, .shadow = {-8, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {-17, -3}, .shadow = {-17, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 216, .offset = {-23, 4}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 215, .offset = {-17, 9}, .shadow = {-17, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 214, .offset = {-12, 10}, .shadow = {-12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 213, .offset = {-4, 5}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 212, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 211, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 210, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 217, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 216, .offset = {-24, 11}, .shadow = {-24, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 215, .offset = {-23, 26}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 214, .offset = {-11, 29}, .shadow = {-11, 25} },
	{ .frames = 2, .unkFlags = 0, .poseId = 213, .offset = {-2, 18}, .shadow = {-2, 18} },
	{ .frames = 1, .unkFlags = 0, .poseId = 212, .offset = {2, 10}, .shadow = {2, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 211, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 226, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 227, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 227, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 227, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 227, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 228, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 228, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 228, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 228, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 226, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 229, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 230, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 230, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 230, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 230, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 231, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 231, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 231, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 231, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 229, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 232, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 233, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 233, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 233, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 233, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 234, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 234, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 234, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 234, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 232, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 236, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 236, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 236, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 236, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 237, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 237, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 237, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 237, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 235, .offset = {0, 6}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 238, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 239, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 239, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 239, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 239, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 240, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 240, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 240, .offset = {0, -14}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 238, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 241, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 242, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 242, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 242, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 242, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 243, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 243, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 243, .offset = {0, -15}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 243, .offset = {0, -7}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 241, .offset = {0, 6}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 244, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 245, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 245, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 245, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 245, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 246, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 246, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 246, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 246, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 244, .offset = {0, 4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sButterfreeAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 247, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 248, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 248, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 248, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 248, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 249, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 249, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 249, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 249, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 247, .offset = {0, 5}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sButterfreeGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_1.4bpp.lz");
static const ax_sprite sButterfreeSprites1[] = {
	{sButterfreeGfx1, ARRAY_COUNT(sButterfreeGfx1)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_2.4bpp.lz");
static const ax_sprite sButterfreeSprites2[] = {
	{sButterfreeGfx2, ARRAY_COUNT(sButterfreeGfx2)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_3.4bpp.lz");
static const ax_sprite sButterfreeSprites3[] = {
	{sButterfreeGfx3, ARRAY_COUNT(sButterfreeGfx3)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_4.4bpp.lz");
static const ax_sprite sButterfreeSprites4[] = {
	{sButterfreeGfx4, ARRAY_COUNT(sButterfreeGfx4)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_5.4bpp.lz");
static const ax_sprite sButterfreeSprites5[] = {
	{sButterfreeGfx5, ARRAY_COUNT(sButterfreeGfx5)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_6.4bpp.lz");
static const ax_sprite sButterfreeSprites6[] = {
	{sButterfreeGfx6, ARRAY_COUNT(sButterfreeGfx6)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_7.4bpp.lz");
static const ax_sprite sButterfreeSprites7[] = {
	{sButterfreeGfx7, ARRAY_COUNT(sButterfreeGfx7)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_8.4bpp.lz");
static const ax_sprite sButterfreeSprites8[] = {
	{sButterfreeGfx8, ARRAY_COUNT(sButterfreeGfx8)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_9.4bpp.lz");
static const ax_sprite sButterfreeSprites9[] = {
	{sButterfreeGfx9, ARRAY_COUNT(sButterfreeGfx9)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_10.4bpp.lz");
static const ax_sprite sButterfreeSprites10[] = {
	{sButterfreeGfx10, ARRAY_COUNT(sButterfreeGfx10)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_11.4bpp.lz");
static const ax_sprite sButterfreeSprites11[] = {
	{sButterfreeGfx11, ARRAY_COUNT(sButterfreeGfx11)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_12.4bpp.lz");
static const ax_sprite sButterfreeSprites12[] = {
	{sButterfreeGfx12, ARRAY_COUNT(sButterfreeGfx12)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_13.4bpp.lz");
static const ax_sprite sButterfreeSprites13[] = {
	{sButterfreeGfx13, ARRAY_COUNT(sButterfreeGfx13)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_14.4bpp.lz");
static const ax_sprite sButterfreeSprites14[] = {
	{sButterfreeGfx14, ARRAY_COUNT(sButterfreeGfx14)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_15.4bpp.lz");
static const ax_sprite sButterfreeSprites15[] = {
	{sButterfreeGfx15, ARRAY_COUNT(sButterfreeGfx15)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_16.4bpp.lz");
static const ax_sprite sButterfreeSprites16[] = {
	{sButterfreeGfx16, ARRAY_COUNT(sButterfreeGfx16)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_17.4bpp.lz");
static const ax_sprite sButterfreeSprites17[] = {
	{sButterfreeGfx17, ARRAY_COUNT(sButterfreeGfx17)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_18.4bpp.lz");
static const u8 sButterfreeGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_18_1.4bpp.lz");
static const u8 sButterfreeGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_18_2.4bpp.lz");
static const u8 sButterfreeGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_18_3.4bpp.lz");
static const ax_sprite sButterfreeSprites18[] = {
	{sButterfreeGfx18, ARRAY_COUNT(sButterfreeGfx18)}, 
	{NULL, 32}, 
	{sButterfreeGfx18_1, ARRAY_COUNT(sButterfreeGfx18_1)}, 
	{NULL, 32}, 
	{sButterfreeGfx18_2, ARRAY_COUNT(sButterfreeGfx18_2)}, 
	{NULL, 64}, 
	{sButterfreeGfx18_3, ARRAY_COUNT(sButterfreeGfx18_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_19.4bpp.lz");
static const u8 sButterfreeGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_19_1.4bpp.lz");
static const u8 sButterfreeGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_19_2.4bpp.lz");
static const ax_sprite sButterfreeSprites19[] = {
	{sButterfreeGfx19, ARRAY_COUNT(sButterfreeGfx19)}, 
	{NULL, 64}, 
	{sButterfreeGfx19_1, ARRAY_COUNT(sButterfreeGfx19_1)}, 
	{NULL, 32}, 
	{sButterfreeGfx19_2, ARRAY_COUNT(sButterfreeGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_20.4bpp.lz");
static const u8 sButterfreeGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_20_1.4bpp.lz");
static const ax_sprite sButterfreeSprites20[] = {
	{sButterfreeGfx20, ARRAY_COUNT(sButterfreeGfx20)}, 
	{NULL, 32}, 
	{sButterfreeGfx20_1, ARRAY_COUNT(sButterfreeGfx20_1)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_21.4bpp.lz");
static const u8 sButterfreeGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_21_1.4bpp.lz");
static const u8 sButterfreeGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_21_2.4bpp.lz");
static const u8 sButterfreeGfx21_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_21_3.4bpp.lz");
static const ax_sprite sButterfreeSprites21[] = {
	{NULL, 32}, 
	{sButterfreeGfx21, ARRAY_COUNT(sButterfreeGfx21)}, 
	{NULL, 32}, 
	{sButterfreeGfx21_1, ARRAY_COUNT(sButterfreeGfx21_1)}, 
	{NULL, 32}, 
	{sButterfreeGfx21_2, ARRAY_COUNT(sButterfreeGfx21_2)}, 
	{NULL, 64}, 
	{sButterfreeGfx21_3, ARRAY_COUNT(sButterfreeGfx21_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_22.4bpp.lz");
static const u8 sButterfreeGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_22_1.4bpp.lz");
static const u8 sButterfreeGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_22_2.4bpp.lz");
static const ax_sprite sButterfreeSprites22[] = {
	{sButterfreeGfx22, ARRAY_COUNT(sButterfreeGfx22)}, 
	{NULL, 32}, 
	{sButterfreeGfx22_1, ARRAY_COUNT(sButterfreeGfx22_1)}, 
	{NULL, 32}, 
	{sButterfreeGfx22_2, ARRAY_COUNT(sButterfreeGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_23.4bpp.lz");
static const u8 sButterfreeGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_23_1.4bpp.lz");
static const u8 sButterfreeGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_23_2.4bpp.lz");
static const ax_sprite sButterfreeSprites23[] = {
	{sButterfreeGfx23, ARRAY_COUNT(sButterfreeGfx23)}, 
	{NULL, 32}, 
	{sButterfreeGfx23_1, ARRAY_COUNT(sButterfreeGfx23_1)}, 
	{NULL, 32}, 
	{sButterfreeGfx23_2, ARRAY_COUNT(sButterfreeGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_24.4bpp.lz");
static const ax_sprite sButterfreeSprites24[] = {
	{sButterfreeGfx24, ARRAY_COUNT(sButterfreeGfx24)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_25.4bpp.lz");
static const ax_sprite sButterfreeSprites25[] = {
	{sButterfreeGfx25, ARRAY_COUNT(sButterfreeGfx25)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_26.4bpp.lz");
static const ax_sprite sButterfreeSprites26[] = {
	{sButterfreeGfx26, ARRAY_COUNT(sButterfreeGfx26)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_27.4bpp.lz");
static const ax_sprite sButterfreeSprites27[] = {
	{sButterfreeGfx27, ARRAY_COUNT(sButterfreeGfx27)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_28.4bpp.lz");
static const ax_sprite sButterfreeSprites28[] = {
	{sButterfreeGfx28, ARRAY_COUNT(sButterfreeGfx28)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_29.4bpp.lz");
static const ax_sprite sButterfreeSprites29[] = {
	{sButterfreeGfx29, ARRAY_COUNT(sButterfreeGfx29)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_30.4bpp.lz");
static const ax_sprite sButterfreeSprites30[] = {
	{sButterfreeGfx30, ARRAY_COUNT(sButterfreeGfx30)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_31.4bpp.lz");
static const ax_sprite sButterfreeSprites31[] = {
	{sButterfreeGfx31, ARRAY_COUNT(sButterfreeGfx31)}, 
	{NULL, 0}
};
static const u8 sButterfreeGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/butterfree/sprite_32.4bpp.lz");
static const ax_sprite sButterfreeSprites32[] = {
	{sButterfreeGfx32, ARRAY_COUNT(sButterfreeGfx32)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesButterfree[] = {
	sButterfreePose1,
	sButterfreePose2,
	sButterfreePose3,
	sButterfreePose4,
	sButterfreePose5,
	sButterfreePose6,
	sButterfreePose7,
	sButterfreePose8,
	sButterfreePose9,
	sButterfreePose10,
	sButterfreePose11,
	sButterfreePose12,
	sButterfreePose13,
	sButterfreePose14,
	sButterfreePose15,
	sButterfreePose16,
	sButterfreePose17,
	sButterfreePose18,
	sButterfreePose19,
	sButterfreePose20,
	sButterfreePose21,
	sButterfreePose22,
	sButterfreePose23,
	sButterfreePose24,
	sButterfreePose1,
	sButterfreePose2,
	sButterfreePose3,
	sButterfreePose4,
	sButterfreePose5,
	sButterfreePose6,
	sButterfreePose7,
	sButterfreePose8,
	sButterfreePose9,
	sButterfreePose34,
	sButterfreePose35,
	sButterfreePose36,
	sButterfreePose13,
	sButterfreePose14,
	sButterfreePose15,
	sButterfreePose16,
	sButterfreePose17,
	sButterfreePose18,
	sButterfreePose19,
	sButterfreePose20,
	sButterfreePose21,
	sButterfreePose22,
	sButterfreePose23,
	sButterfreePose24,
	sButterfreePose1,
	sButterfreePose2,
	sButterfreePose3,
	sButterfreePose4,
	sButterfreePose5,
	sButterfreePose6,
	sButterfreePose7,
	sButterfreePose8,
	sButterfreePose9,
	sButterfreePose34,
	sButterfreePose35,
	sButterfreePose36,
	sButterfreePose13,
	sButterfreePose14,
	sButterfreePose15,
	sButterfreePose16,
	sButterfreePose17,
	sButterfreePose18,
	sButterfreePose19,
	sButterfreePose20,
	sButterfreePose21,
	sButterfreePose22,
	sButterfreePose23,
	sButterfreePose24,
	sButterfreePose1,
	sButterfreePose22,
	sButterfreePose19,
	sButterfreePose16,
	sButterfreePose13,
	sButterfreePose10,
	sButterfreePose7,
	sButterfreePose4,
	sButterfreePose81,
	sButterfreePose82,
	sButterfreePose1,
	sButterfreePose22,
	sButterfreePose19,
	sButterfreePose16,
	sButterfreePose13,
	sButterfreePose10,
	sButterfreePose7,
	sButterfreePose4,
	sButterfreePose91,
	sButterfreePose92,
	sButterfreePose1,
	sButterfreePose22,
	sButterfreePose19,
	sButterfreePose16,
	sButterfreePose13,
	sButterfreePose10,
	sButterfreePose7,
	sButterfreePose4,
	sButterfreePose101,
	sButterfreePose102,
	sButterfreePose1,
	sButterfreePose22,
	sButterfreePose19,
	sButterfreePose16,
	sButterfreePose13,
	sButterfreePose10,
	sButterfreePose7,
	sButterfreePose4,
	sButterfreePose111,
	sButterfreePose112,
	sButterfreePose1,
	sButterfreePose22,
	sButterfreePose19,
	sButterfreePose16,
	sButterfreePose13,
	sButterfreePose10,
	sButterfreePose7,
	sButterfreePose4,
	sButterfreePose121,
	sButterfreePose122,
	sButterfreePose1,
	sButterfreePose22,
	sButterfreePose19,
	sButterfreePose16,
	sButterfreePose13,
	sButterfreePose10,
	sButterfreePose7,
	sButterfreePose4,
	sButterfreePose131,
	sButterfreePose132,
	sButterfreePose1,
	sButterfreePose22,
	sButterfreePose19,
	sButterfreePose16,
	sButterfreePose13,
	sButterfreePose10,
	sButterfreePose7,
	sButterfreePose4,
	sButterfreePose141,
	sButterfreePose142,
	sButterfreePose1,
	sButterfreePose22,
	sButterfreePose19,
	sButterfreePose16,
	sButterfreePose13,
	sButterfreePose10,
	sButterfreePose7,
	sButterfreePose4,
	sButterfreePose151,
	sButterfreePose152,
	sButterfreePose1,
	sButterfreePose2,
	sButterfreePose3,
	sButterfreePose22,
	sButterfreePose23,
	sButterfreePose24,
	sButterfreePose19,
	sButterfreePose20,
	sButterfreePose21,
	sButterfreePose16,
	sButterfreePose17,
	sButterfreePose18,
	sButterfreePose13,
	sButterfreePose14,
	sButterfreePose15,
	sButterfreePose10,
	sButterfreePose11,
	sButterfreePose12,
	sButterfreePose7,
	sButterfreePose8,
	sButterfreePose9,
	sButterfreePose4,
	sButterfreePose5,
	sButterfreePose6,
	sButterfreePose177,
	sButterfreePose178,
	sButterfreePose179,
	sButterfreePose180,
	sButterfreePose181,
	sButterfreePose182,
	sButterfreePose183,
	sButterfreePose184,
	sButterfreePose185,
	sButterfreePose186,
	sButterfreePose1,
	sButterfreePose2,
	sButterfreePose3,
	sButterfreePose4,
	sButterfreePose5,
	sButterfreePose6,
	sButterfreePose7,
	sButterfreePose8,
	sButterfreePose9,
	sButterfreePose10,
	sButterfreePose11,
	sButterfreePose12,
	sButterfreePose13,
	sButterfreePose14,
	sButterfreePose15,
	sButterfreePose16,
	sButterfreePose17,
	sButterfreePose18,
	sButterfreePose19,
	sButterfreePose20,
	sButterfreePose21,
	sButterfreePose22,
	sButterfreePose23,
	sButterfreePose24,
	sButterfreePose1,
	sButterfreePose22,
	sButterfreePose19,
	sButterfreePose16,
	sButterfreePose13,
	sButterfreePose10,
	sButterfreePose7,
	sButterfreePose4,
	sButterfreePose2,
	sButterfreePose5,
	sButterfreePose8,
	sButterfreePose11,
	sButterfreePose14,
	sButterfreePose17,
	sButterfreePose20,
	sButterfreePose23,
	sButterfreePose1,
	sButterfreePose81,
	sButterfreePose82,
	sButterfreePose4,
	sButterfreePose91,
	sButterfreePose92,
	sButterfreePose7,
	sButterfreePose101,
	sButterfreePose102,
	sButterfreePose10,
	sButterfreePose111,
	sButterfreePose112,
	sButterfreePose13,
	sButterfreePose121,
	sButterfreePose122,
	sButterfreePose16,
	sButterfreePose131,
	sButterfreePose132,
	sButterfreePose19,
	sButterfreePose141,
	sButterfreePose142,
	sButterfreePose22,
	sButterfreePose151,
	sButterfreePose152,
	sButterfreePose81,
	sButterfreePose151,
	sButterfreePose141,
	sButterfreePose131,
	sButterfreePose121,
	sButterfreePose111,
	sButterfreePose101,
	sButterfreePose91,
	sButterfreePose1,
	sButterfreePose22,
	sButterfreePose19,
	sButterfreePose16,
	sButterfreePose13,
	sButterfreePose10,
	sButterfreePose7,
	sButterfreePose4,
};

static const struct PositionSets sAxPositionsButterfree[] = {
	[0] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[1] = { .set = { {-1, -11}, {-13, -14}, {12, -14}, {-1, -12} } },
	[2] = { .set = { {-1, -11}, {-9, -18}, {8, -18}, {-1, -13} } },
	[3] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[4] = { .set = { {5, -11}, {6, -20}, {-11, -12}, {0, -13} } },
	[5] = { .set = { {5, -11}, {2, -24}, {-10, -20}, {-1, -15} } },
	[6] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[7] = { .set = { {7, -13}, {-3, -22}, {-5, -13}, {1, -13} } },
	[8] = { .set = { {7, -12}, {-8, -21}, {-10, -16}, {0, -14} } },
	[9] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[10] = { .set = { {7, -18}, {-6, -21}, {10, -14}, {2, -16} } },
	[11] = { .set = { {6, -17}, {-10, -21}, {4, -15}, {-1, -16} } },
	[12] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[13] = { .set = { {-1, -16}, {12, -17}, {-13, -17}, {0, -15} } },
	[14] = { .set = { {-1, -17}, {8, -17}, {-9, -17}, {0, -15} } },
	[15] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[16] = { .set = { {-7, -18}, {6, -21}, {-10, -14}, {-2, -16} } },
	[17] = { .set = { {-6, -17}, {10, -21}, {-4, -15}, {1, -16} } },
	[18] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[19] = { .set = { {-7, -13}, {3, -22}, {5, -13}, {-1, -13} } },
	[20] = { .set = { {-7, -12}, {8, -21}, {10, -16}, {0, -14} } },
	[21] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[22] = { .set = { {-5, -11}, {-6, -20}, {11, -12}, {0, -13} } },
	[23] = { .set = { {-5, -11}, {-2, -24}, {10, -20}, {1, -15} } },
	[24] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[25] = { .set = { {-1, -11}, {-13, -14}, {12, -14}, {-1, -12} } },
	[26] = { .set = { {-1, -11}, {-9, -18}, {8, -18}, {-1, -13} } },
	[27] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[28] = { .set = { {5, -11}, {6, -20}, {-11, -12}, {0, -13} } },
	[29] = { .set = { {5, -11}, {2, -24}, {-10, -20}, {-1, -15} } },
	[30] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[31] = { .set = { {7, -13}, {-3, -22}, {-5, -13}, {1, -13} } },
	[32] = { .set = { {7, -12}, {-8, -21}, {-10, -16}, {0, -14} } },
	[33] = { .set = { {5, -18}, {-10, -20}, {7, -15}, {-1, -16} } },
	[34] = { .set = { {6, -18}, {-7, -21}, {9, -14}, {1, -16} } },
	[35] = { .set = { {5, -17}, {-11, -21}, {3, -15}, {-2, -16} } },
	[36] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[37] = { .set = { {-1, -16}, {12, -17}, {-13, -17}, {0, -15} } },
	[38] = { .set = { {-1, -17}, {8, -17}, {-9, -17}, {0, -15} } },
	[39] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[40] = { .set = { {-7, -18}, {6, -21}, {-10, -14}, {-2, -16} } },
	[41] = { .set = { {-6, -17}, {10, -21}, {-4, -15}, {1, -16} } },
	[42] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[43] = { .set = { {-7, -13}, {3, -22}, {5, -13}, {-1, -13} } },
	[44] = { .set = { {-7, -12}, {8, -21}, {10, -16}, {0, -14} } },
	[45] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[46] = { .set = { {-5, -11}, {-6, -20}, {11, -12}, {0, -13} } },
	[47] = { .set = { {-5, -11}, {-2, -24}, {10, -20}, {1, -15} } },
	[48] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[49] = { .set = { {-1, -11}, {-13, -14}, {12, -14}, {-1, -12} } },
	[50] = { .set = { {-1, -11}, {-9, -18}, {8, -18}, {-1, -13} } },
	[51] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[52] = { .set = { {5, -11}, {6, -20}, {-11, -12}, {0, -13} } },
	[53] = { .set = { {5, -11}, {2, -24}, {-10, -20}, {-1, -15} } },
	[54] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[55] = { .set = { {7, -13}, {-3, -22}, {-5, -13}, {1, -13} } },
	[56] = { .set = { {7, -12}, {-8, -21}, {-10, -16}, {0, -14} } },
	[57] = { .set = { {5, -18}, {-10, -20}, {7, -15}, {-1, -16} } },
	[58] = { .set = { {6, -18}, {-7, -21}, {9, -14}, {1, -16} } },
	[59] = { .set = { {5, -17}, {-11, -21}, {3, -15}, {-2, -16} } },
	[60] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[61] = { .set = { {-1, -16}, {12, -17}, {-13, -17}, {0, -15} } },
	[62] = { .set = { {-1, -17}, {8, -17}, {-9, -17}, {0, -15} } },
	[63] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[64] = { .set = { {-7, -18}, {6, -21}, {-10, -14}, {-2, -16} } },
	[65] = { .set = { {-6, -17}, {10, -21}, {-4, -15}, {1, -16} } },
	[66] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[67] = { .set = { {-7, -13}, {3, -22}, {5, -13}, {-1, -13} } },
	[68] = { .set = { {-7, -12}, {8, -21}, {10, -16}, {0, -14} } },
	[69] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[70] = { .set = { {-5, -11}, {-6, -20}, {11, -12}, {0, -13} } },
	[71] = { .set = { {-5, -11}, {-2, -24}, {10, -20}, {1, -15} } },
	[72] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[73] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[74] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[75] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[76] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[77] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[78] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[79] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[80] = { .set = { {-1, -14}, {-12, -16}, {11, -16}, {0, -14} } },
	[81] = { .set = { {0, -7}, {-12, -13}, {11, -13}, {-1, -10} } },
	[82] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[83] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[84] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[85] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[86] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[87] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[88] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[89] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[90] = { .set = { {3, -13}, {4, -21}, {-12, -12}, {-2, -13} } },
	[91] = { .set = { {4, -7}, {9, -17}, {-9, -11}, {1, -10} } },
	[92] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[93] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[94] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[95] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[96] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[97] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[98] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[99] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[100] = { .set = { {4, -15}, {-1, -22}, {-6, -14}, {0, -13} } },
	[101] = { .set = { {5, -9}, {-2, -24}, {3, -11}, {0, -13} } },
	[102] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[103] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[104] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[105] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[106] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[107] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[108] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[109] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[110] = { .set = { {4, -17}, {-8, -22}, {9, -14}, {-1, -15} } },
	[111] = { .set = { {6, -15}, {-6, -23}, {10, -12}, {0, -15} } },
	[112] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[113] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[114] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[115] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[116] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[117] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[118] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[119] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[120] = { .set = { {-1, -19}, {11, -20}, {-12, -20}, {0, -16} } },
	[121] = { .set = { {-1, -17}, {11, -19}, {-12, -19}, {0, -16} } },
	[122] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[123] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[124] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[125] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[126] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[127] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[128] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[129] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[130] = { .set = { {-5, -17}, {7, -22}, {-10, -14}, {0, -15} } },
	[131] = { .set = { {-7, -15}, {5, -23}, {-11, -12}, {-1, -15} } },
	[132] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[133] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[134] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[135] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[136] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[137] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[138] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[139] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[140] = { .set = { {-5, -15}, {0, -22}, {5, -14}, {-1, -13} } },
	[141] = { .set = { {-6, -9}, {1, -24}, {-4, -11}, {-1, -13} } },
	[142] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[143] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[144] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[145] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[146] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[147] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[148] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[149] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[150] = { .set = { {-4, -13}, {-5, -21}, {11, -12}, {1, -13} } },
	[151] = { .set = { {-5, -7}, {-10, -17}, {8, -11}, {-2, -10} } },
	[152] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[153] = { .set = { {-1, -11}, {-13, -14}, {12, -14}, {-1, -12} } },
	[154] = { .set = { {-1, -11}, {-9, -18}, {8, -18}, {-1, -13} } },
	[155] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[156] = { .set = { {-5, -11}, {-6, -20}, {11, -12}, {0, -13} } },
	[157] = { .set = { {-5, -11}, {-2, -24}, {10, -20}, {1, -15} } },
	[158] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[159] = { .set = { {-7, -13}, {3, -22}, {5, -13}, {-1, -13} } },
	[160] = { .set = { {-7, -12}, {8, -21}, {10, -16}, {0, -14} } },
	[161] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[162] = { .set = { {-7, -18}, {6, -21}, {-10, -14}, {-2, -16} } },
	[163] = { .set = { {-6, -17}, {10, -21}, {-4, -15}, {1, -16} } },
	[164] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[165] = { .set = { {-1, -16}, {12, -17}, {-13, -17}, {0, -15} } },
	[166] = { .set = { {-1, -17}, {8, -17}, {-9, -17}, {0, -15} } },
	[167] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[168] = { .set = { {7, -18}, {-6, -21}, {10, -14}, {2, -16} } },
	[169] = { .set = { {6, -17}, {-10, -21}, {4, -15}, {-1, -16} } },
	[170] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[171] = { .set = { {7, -13}, {-3, -22}, {-5, -13}, {1, -13} } },
	[172] = { .set = { {7, -12}, {-8, -21}, {-10, -16}, {0, -14} } },
	[173] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[174] = { .set = { {5, -11}, {6, -20}, {-11, -12}, {0, -13} } },
	[175] = { .set = { {5, -11}, {2, -24}, {-10, -20}, {-1, -15} } },
	[176] = { .set = { {-6, -1}, {4, -12}, {6, -12}, {0, -4} } },
	[177] = { .set = { {-6, 0}, {3, -11}, {6, -12}, {0, -4} } },
	[178] = { .set = { {-1, -12}, {14, -15}, {-15, -15}, {-1, -11} } },
	[179] = { .set = { {0, -14}, {3, -22}, {-12, -6}, {-1, -11} } },
	[180] = { .set = { {3, -14}, {-8, -18}, {-10, -7}, {-1, -10} } },
	[181] = { .set = { {0, -15}, {-14, -16}, {10, -11}, {-1, -10} } },
	[182] = { .set = { {-1, -11}, {13, -10}, {-14, -10}, {0, -8} } },
	[183] = { .set = { {-1, -15}, {13, -16}, {-11, -11}, {0, -10} } },
	[184] = { .set = { {-4, -14}, {7, -18}, {9, -7}, {0, -10} } },
	[185] = { .set = { {-1, -14}, {-4, -22}, {11, -6}, {0, -11} } },
	[186] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[187] = { .set = { {-1, -11}, {-13, -14}, {12, -14}, {-1, -12} } },
	[188] = { .set = { {-1, -11}, {-9, -18}, {8, -18}, {-1, -13} } },
	[189] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[190] = { .set = { {5, -11}, {6, -20}, {-11, -12}, {0, -13} } },
	[191] = { .set = { {5, -11}, {2, -24}, {-10, -20}, {-1, -15} } },
	[192] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[193] = { .set = { {7, -13}, {-3, -22}, {-5, -13}, {1, -13} } },
	[194] = { .set = { {7, -12}, {-8, -21}, {-10, -16}, {0, -14} } },
	[195] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[196] = { .set = { {7, -18}, {-6, -21}, {10, -14}, {2, -16} } },
	[197] = { .set = { {6, -17}, {-10, -21}, {4, -15}, {-1, -16} } },
	[198] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[199] = { .set = { {-1, -16}, {12, -17}, {-13, -17}, {0, -15} } },
	[200] = { .set = { {-1, -17}, {8, -17}, {-9, -17}, {0, -15} } },
	[201] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[202] = { .set = { {-7, -18}, {6, -21}, {-10, -14}, {-2, -16} } },
	[203] = { .set = { {-6, -17}, {10, -21}, {-4, -15}, {1, -16} } },
	[204] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[205] = { .set = { {-7, -13}, {3, -22}, {5, -13}, {-1, -13} } },
	[206] = { .set = { {-7, -12}, {8, -21}, {10, -16}, {0, -14} } },
	[207] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[208] = { .set = { {-5, -11}, {-6, -20}, {11, -12}, {0, -13} } },
	[209] = { .set = { {-5, -11}, {-2, -24}, {10, -20}, {1, -15} } },
	[210] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[211] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[212] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[213] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[214] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[215] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[216] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[217] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[218] = { .set = { {-1, -11}, {-13, -14}, {12, -14}, {-1, -12} } },
	[219] = { .set = { {5, -11}, {6, -20}, {-11, -12}, {0, -13} } },
	[220] = { .set = { {7, -13}, {-3, -22}, {-5, -13}, {1, -13} } },
	[221] = { .set = { {7, -18}, {-6, -21}, {10, -14}, {2, -16} } },
	[222] = { .set = { {-1, -16}, {12, -17}, {-13, -17}, {0, -15} } },
	[223] = { .set = { {-7, -18}, {6, -21}, {-10, -14}, {-2, -16} } },
	[224] = { .set = { {-7, -13}, {3, -22}, {5, -13}, {-1, -13} } },
	[225] = { .set = { {-5, -11}, {-6, -20}, {11, -12}, {0, -13} } },
	[226] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[227] = { .set = { {-1, -14}, {-12, -16}, {11, -16}, {0, -14} } },
	[228] = { .set = { {0, -7}, {-12, -13}, {11, -13}, {-1, -10} } },
	[229] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
	[230] = { .set = { {3, -13}, {4, -21}, {-12, -12}, {-2, -13} } },
	[231] = { .set = { {4, -7}, {9, -17}, {-9, -11}, {1, -10} } },
	[232] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[233] = { .set = { {4, -15}, {-1, -22}, {-6, -14}, {0, -13} } },
	[234] = { .set = { {5, -9}, {-2, -24}, {3, -11}, {0, -13} } },
	[235] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[236] = { .set = { {4, -17}, {-8, -22}, {9, -14}, {-1, -15} } },
	[237] = { .set = { {6, -15}, {-6, -23}, {10, -12}, {0, -15} } },
	[238] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[239] = { .set = { {-1, -19}, {11, -20}, {-12, -20}, {0, -16} } },
	[240] = { .set = { {-1, -17}, {11, -19}, {-12, -19}, {0, -16} } },
	[241] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[242] = { .set = { {-5, -17}, {7, -22}, {-10, -14}, {0, -15} } },
	[243] = { .set = { {-7, -15}, {5, -23}, {-11, -12}, {-1, -15} } },
	[244] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[245] = { .set = { {-5, -15}, {0, -22}, {5, -14}, {-1, -13} } },
	[246] = { .set = { {-6, -9}, {1, -24}, {-4, -11}, {-1, -13} } },
	[247] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[248] = { .set = { {-4, -13}, {-5, -21}, {11, -12}, {1, -13} } },
	[249] = { .set = { {-5, -7}, {-10, -17}, {8, -11}, {-2, -10} } },
	[250] = { .set = { {-1, -14}, {-12, -16}, {11, -16}, {0, -14} } },
	[251] = { .set = { {-4, -13}, {-5, -21}, {11, -12}, {1, -13} } },
	[252] = { .set = { {-5, -15}, {0, -22}, {5, -14}, {-1, -13} } },
	[253] = { .set = { {-5, -17}, {7, -22}, {-10, -14}, {0, -15} } },
	[254] = { .set = { {-1, -19}, {11, -20}, {-12, -20}, {0, -16} } },
	[255] = { .set = { {4, -17}, {-8, -22}, {9, -14}, {-1, -15} } },
	[256] = { .set = { {4, -15}, {-1, -22}, {-6, -14}, {0, -13} } },
	[257] = { .set = { {3, -13}, {4, -21}, {-12, -12}, {-2, -13} } },
	[258] = { .set = { {-1, -11}, {-11, -17}, {10, -17}, {-1, -12} } },
	[259] = { .set = { {-5, -11}, {-3, -24}, {10, -16}, {0, -13} } },
	[260] = { .set = { {-7, -13}, {5, -21}, {7, -14}, {-1, -12} } },
	[261] = { .set = { {-6, -18}, {9, -20}, {-8, -15}, {0, -16} } },
	[262] = { .set = { {-1, -17}, {10, -18}, {-11, -18}, {0, -15} } },
	[263] = { .set = { {6, -18}, {-9, -20}, {8, -15}, {0, -16} } },
	[264] = { .set = { {7, -13}, {-5, -21}, {-7, -14}, {1, -12} } },
	[265] = { .set = { {5, -11}, {3, -24}, {-10, -16}, {0, -13} } },
};

static const ax_anim *const sButterfreeAnimTable1[] = {
	gAxSharedAnim_02608,
	gAxSharedAnim_02684,
	gAxSharedAnim_02693,
	gAxSharedAnim_02702,
	gAxSharedAnim_02620,
	gAxSharedAnim_02639,
	gAxSharedAnim_02652,
	gAxSharedAnim_02661,
};

static const ax_anim *const sButterfreeAnimTable2[] = {
	sButterfreeAnims_2_1,
	sButterfreeAnims_2_2,
	sButterfreeAnims_2_3,
	sButterfreeAnims_2_4,
	sButterfreeAnims_2_5,
	sButterfreeAnims_2_6,
	sButterfreeAnims_2_7,
	sButterfreeAnims_2_8,
};

static const ax_anim *const sButterfreeAnimTable3[] = {
	sButterfreeAnims_3_1,
	sButterfreeAnims_3_2,
	sButterfreeAnims_3_3,
	sButterfreeAnims_3_4,
	sButterfreeAnims_3_5,
	sButterfreeAnims_3_6,
	sButterfreeAnims_3_7,
	sButterfreeAnims_3_8,
};

static const ax_anim *const sButterfreeAnimTable4[] = {
	sButterfreeAnims_4_1,
	sButterfreeAnims_4_2,
	sButterfreeAnims_4_3,
	sButterfreeAnims_4_4,
	sButterfreeAnims_4_5,
	sButterfreeAnims_4_6,
	sButterfreeAnims_4_7,
	sButterfreeAnims_4_8,
};

static const ax_anim *const sButterfreeAnimTable5[] = {
	sButterfreeAnims_5_1,
	sButterfreeAnims_5_2,
	sButterfreeAnims_5_3,
	sButterfreeAnims_5_4,
	sButterfreeAnims_5_5,
	sButterfreeAnims_5_6,
	sButterfreeAnims_5_7,
	sButterfreeAnims_5_8,
};

static const ax_anim *const sButterfreeAnimTable6[] = {
	sButterfreeAnims_6_1,
	sButterfreeAnims_6_1,
	sButterfreeAnims_6_1,
	sButterfreeAnims_6_1,
	sButterfreeAnims_6_1,
	sButterfreeAnims_6_1,
	sButterfreeAnims_6_1,
	sButterfreeAnims_6_1,
};

static const ax_anim *const sButterfreeAnimTable7[] = {
	gAxSharedAnim_00897,
	gAxSharedAnim_00910,
	gAxSharedAnim_00924,
	gAxSharedAnim_00935,
	gAxSharedAnim_00958,
	gAxSharedAnim_00970,
	gAxSharedAnim_00983,
	gAxSharedAnim_00999,
};

static const ax_anim *const sButterfreeAnimTable8[] = {
	sButterfreeAnims_8_1,
	sButterfreeAnims_8_2,
	sButterfreeAnims_8_3,
	sButterfreeAnims_8_4,
	sButterfreeAnims_8_5,
	sButterfreeAnims_8_6,
	sButterfreeAnims_8_7,
	sButterfreeAnims_8_8,
};

static const ax_anim *const sButterfreeAnimTable9[] = {
	sButterfreeAnims_9_1,
	sButterfreeAnims_9_2,
	sButterfreeAnims_9_3,
	sButterfreeAnims_9_4,
	sButterfreeAnims_9_5,
	sButterfreeAnims_9_6,
	sButterfreeAnims_9_7,
	sButterfreeAnims_9_8,
};

static const ax_anim *const sButterfreeAnimTable10[] = {
	gAxSharedAnim_01420,
	gAxSharedAnim_01427,
	gAxSharedAnim_01436,
	gAxSharedAnim_01442,
	gAxSharedAnim_01445,
	gAxSharedAnim_01455,
	gAxSharedAnim_01460,
	gAxSharedAnim_01465,
};

static const ax_anim *const sButterfreeAnimTable11[] = {
	sButterfreeAnims_11_1,
	sButterfreeAnims_11_2,
	sButterfreeAnims_11_3,
	sButterfreeAnims_11_4,
	sButterfreeAnims_11_5,
	sButterfreeAnims_11_6,
	sButterfreeAnims_11_7,
	sButterfreeAnims_11_8,
};

static const ax_anim *const sButterfreeAnimTable12[] = {
	gAxSharedAnim_01639,
	gAxSharedAnim_01674,
	gAxSharedAnim_01665,
	gAxSharedAnim_01661,
	gAxSharedAnim_01660,
	gAxSharedAnim_01655,
	gAxSharedAnim_01646,
	gAxSharedAnim_01640,
};

static const ax_anim *const sButterfreeAnimTable13[] = {
	gAxSharedAnim_01678,
	gAxSharedAnim_01710,
	gAxSharedAnim_01708,
	gAxSharedAnim_01704,
	gAxSharedAnim_01698,
	gAxSharedAnim_01694,
	gAxSharedAnim_01692,
	gAxSharedAnim_01682,
};

static const ax_anim *const *const sAxAnimationsButterfree[] = {
	sButterfreeAnimTable1,
	sButterfreeAnimTable2,
	sButterfreeAnimTable3,
	sButterfreeAnimTable4,
	sButterfreeAnimTable5,
	sButterfreeAnimTable6,
	sButterfreeAnimTable7,
	sButterfreeAnimTable8,
	sButterfreeAnimTable9,
	sButterfreeAnimTable10,
	sButterfreeAnimTable11,
	sButterfreeAnimTable12,
	sButterfreeAnimTable13,
};

static const ax_sprite *const sAxSpritesButterfree[] = {
	sButterfreeSprites1,
	sButterfreeSprites2,
	sButterfreeSprites3,
	sButterfreeSprites4,
	sButterfreeSprites5,
	sButterfreeSprites6,
	sButterfreeSprites7,
	sButterfreeSprites8,
	sButterfreeSprites9,
	sButterfreeSprites10,
	sButterfreeSprites11,
	sButterfreeSprites12,
	sButterfreeSprites13,
	sButterfreeSprites14,
	sButterfreeSprites15,
	sButterfreeSprites16,
	sButterfreeSprites17,
	sButterfreeSprites18,
	sButterfreeSprites19,
	sButterfreeSprites20,
	sButterfreeSprites21,
	sButterfreeSprites22,
	sButterfreeSprites23,
	sButterfreeSprites24,
	sButterfreeSprites25,
	sButterfreeSprites26,
	sButterfreeSprites27,
	sButterfreeSprites28,
	sButterfreeSprites29,
	sButterfreeSprites30,
	sButterfreeSprites31,
	sButterfreeSprites32,
};

static const axmain sAxMainButterfree = {
	.poses = sAxPosesButterfree,
	.animations = sAxAnimationsButterfree,
	.animCount = ARRAY_COUNT(sAxAnimationsButterfree),
	.spriteData = sAxSpritesButterfree,
	.positions = sAxPositionsButterfree,
};
