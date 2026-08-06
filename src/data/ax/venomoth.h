/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainVenomoth;
const SiroArchive gAxVenomoth = {"SIRO", &sAxMainVenomoth};

static const ax_pose sVenomothPose1[] = {
	AX_POSE(0, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose2[] = {
	AX_POSE(1, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose3[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose4[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose5[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose7[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose8[] = {
	AX_POSE(7, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose9[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose10[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose11[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose12[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose13[] = {
	AX_POSE(12, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose14[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose15[] = {
	AX_POSE(14, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose16[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose17[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose18[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose19[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose20[] = {
	AX_POSE(7, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose21[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose22[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose23[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose28[] = {
	AX_POSE(15, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose32[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose36[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose40[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose44[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose48[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose52[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose56[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose137[] = {
	AX_POSE(20, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose138[] = {
	AX_POSE(21, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose139[] = {
	AX_POSE(22, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose140[] = {
	AX_POSE(23, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose141[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose142[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose143[] = {
	AX_POSE(26, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose144[] = {
	AX_POSE(25, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose145[] = {
	AX_POSE(24, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose146[] = {
	AX_POSE(23, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose162[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose163[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose164[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose174[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose175[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVenomothPose176[] = {
	AX_POSE(18, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_anim sVenomothAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -5}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 27, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 25}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 27, .offset = {1, 25}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 25}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {1, 25}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 14}, .shadow = {0, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-1, -2}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {-5, -6}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-6, -8}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-6, -8}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-6, -8}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 30, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 31, .offset = {4, 3}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {22, 23}, .shadow = {22, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {23, 23}, .shadow = {23, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {22, 23}, .shadow = {22, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {23, 23}, .shadow = {23, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {14, 14}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {-5, -2}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 35, .offset = {4, -1}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {14, 0}, .shadow = {14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {-1, 0}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-5, -1}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-6, -2}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {-6, -2}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-6, -2}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 39, .offset = {4, -8}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {10, -11}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {19, -16}, .shadow = {19, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {20, -16}, .shadow = {20, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {19, -16}, .shadow = {19, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {20, -16}, .shadow = {20, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {14, -14}, .shadow = {14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 43, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -16}, .shadow = {0, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {1, -16}, .shadow = {1, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -16}, .shadow = {0, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {1, -16}, .shadow = {1, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, -8}, .shadow = {0, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, 0}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {5, -1}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {6, -2}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {6, -2}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {6, -2}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 47, .offset = {-4, -8}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-10, -11}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-19, -16}, .shadow = {-19, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-20, -16}, .shadow = {-20, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-19, -16}, .shadow = {-19, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-20, -16}, .shadow = {-20, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-14, -14}, .shadow = {-14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {5, -2}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 50, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 51, .offset = {-4, -1}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 51, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-14, 0}, .shadow = {-14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {1, -2}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {5, -6}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 55, .offset = {-4, 3}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-22, 23}, .shadow = {-22, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {-23, 23}, .shadow = {-23, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-22, 23}, .shadow = {-22, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-23, 23}, .shadow = {-23, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-14, 14}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {0, -5}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {0, -6}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 59, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 25}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {1, 25}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 25}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {1, 25}, .shadow = {1, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, 14}, .shadow = {0, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {-1, -2}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {-5, -6}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-6, -8}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {-6, -8}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {-6, -8}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 63, .offset = {4, 3}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 63, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {22, 23}, .shadow = {22, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {23, 23}, .shadow = {23, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {22, 23}, .shadow = {22, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {23, 23}, .shadow = {23, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {14, 14}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-5, -2}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, -3}, .shadow = {-6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 67, .offset = {4, -1}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {14, 0}, .shadow = {14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-1, 0}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-5, -1}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-6, -2}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, -2}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-6, -2}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 71, .offset = {4, -8}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {10, -11}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {19, -16}, .shadow = {19, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {20, -16}, .shadow = {20, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {19, -16}, .shadow = {19, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {20, -16}, .shadow = {20, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {14, -14}, .shadow = {14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 74, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 75, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 75, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -16}, .shadow = {0, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {1, -16}, .shadow = {1, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, -16}, .shadow = {0, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, -16}, .shadow = {1, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -8}, .shadow = {0, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {1, 0}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {5, -1}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {6, -2}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {6, -2}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {6, -2}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 78, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 79, .offset = {-4, -8}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 79, .offset = {-10, -11}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-19, -16}, .shadow = {-19, -16} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {-20, -16}, .shadow = {-20, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-19, -16}, .shadow = {-19, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-20, -16}, .shadow = {-20, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-14, -14}, .shadow = {-14, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {5, -2}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {6, -3}, .shadow = {6, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 83, .offset = {-4, -1}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-14, 0}, .shadow = {-14, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {1, -2}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {5, -6}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {6, -8}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 87, .offset = {-4, 3}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 87, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-22, 23}, .shadow = {-22, 23} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {-23, 23}, .shadow = {-23, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-22, 23}, .shadow = {-22, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-23, 23}, .shadow = {-23, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-14, 14}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_4_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {1, 2}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 88, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 88, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {1, 2}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_4_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 91, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 1, .poseId = 91, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {1, 2}, .shadow = {1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_4_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {1, 2}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 94, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 94, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {1, 2}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {1, -1}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_4_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {1, -2}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 97, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 1, .poseId = 97, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {1, -2}, .shadow = {1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_4_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {1, 2}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 100, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 100, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {1, 2}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_4_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {-1, -2}, .shadow = {-1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 103, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 1, .poseId = 103, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {-1, -2}, .shadow = {-1, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_4_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-1, 2}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 106, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 106, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-1, 2}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-1, -1}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_4_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-1, 2}, .shadow = {-1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 109, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 1, .poseId = 109, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-1, 2}, .shadow = {-1, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_6_1[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 136, .offset = {3, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 136, .offset = {3, 1}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 136, .offset = {3, 1}, .shadow = {0, 0} },
	{ .frames = 30, .unkFlags = 0, .poseId = 137, .offset = {3, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 137, .offset = {3, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 137, .offset = {3, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_8_1[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 147, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 148, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 147, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 146, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_8_2[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 150, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 151, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 150, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 149, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_8_3[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 153, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 154, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 153, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 152, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_8_4[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 156, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 157, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 156, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 155, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_8_5[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 159, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 160, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 159, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 158, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_8_6[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 162, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 163, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 162, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 161, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_8_7[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 164, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 165, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 164, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 166, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 164, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 165, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 164, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_8_8[] = {
	{ .frames = 12, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 168, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 167, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 169, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 167, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 168, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 167, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {7, 16}, .shadow = {7, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, 22}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-7, 16}, .shadow = {-7, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {19, 3}, .shadow = {19, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {23, 10}, .shadow = {23, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {19, 21}, .shadow = {19, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {11, 21}, .shadow = {11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {16, -5}, .shadow = {16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {19, 1}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 173, .offset = {17, 4}, .shadow = {17, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {12, 7}, .shadow = {12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {4, 3}, .shadow = {4, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {12, -22}, .shadow = {12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {18, -19}, .shadow = {18, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 172, .offset = {22, -12}, .shadow = {22, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {7, 1}, .shadow = {7, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-12, -22}, .shadow = {-12, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {-18, -19}, .shadow = {-18, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 176, .offset = {-22, -12}, .shadow = {-22, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-16, -5}, .shadow = {-16, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {-19, -1}, .shadow = {-19, -1} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-17, 4}, .shadow = {-17, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {-12, 7}, .shadow = {-12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {-4, 3}, .shadow = {-4, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-19, 3}, .shadow = {-19, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-23, 10}, .shadow = {-23, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {-19, 21}, .shadow = {-19, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {-11, 21}, .shadow = {-11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 188, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 186, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 191, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 189, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 194, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 194, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 192, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 196, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 196, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 197, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 195, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 199, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 200, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 200, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 198, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 202, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 202, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 202, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 203, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 203, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 203, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 203, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 201, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 205, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 205, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 205, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 206, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 206, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 206, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 206, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 204, .offset = {0, 2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sVenomothAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 208, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 208, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 208, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 208, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 209, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 209, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 209, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 207, .offset = {0, 3}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sVenomothGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_1.4bpp.lz");
static const ax_sprite sVenomothSprites1[] = {
	{sVenomothGfx1, ARRAY_COUNT(sVenomothGfx1)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_2.4bpp.lz");
static const ax_sprite sVenomothSprites2[] = {
	{sVenomothGfx2, ARRAY_COUNT(sVenomothGfx2)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_3.4bpp.lz");
static const ax_sprite sVenomothSprites3[] = {
	{sVenomothGfx3, ARRAY_COUNT(sVenomothGfx3)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_4.4bpp.lz");
static const ax_sprite sVenomothSprites4[] = {
	{sVenomothGfx4, ARRAY_COUNT(sVenomothGfx4)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_5.4bpp.lz");
static const ax_sprite sVenomothSprites5[] = {
	{sVenomothGfx5, ARRAY_COUNT(sVenomothGfx5)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_6.4bpp.lz");
static const ax_sprite sVenomothSprites6[] = {
	{sVenomothGfx6, ARRAY_COUNT(sVenomothGfx6)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_7.4bpp.lz");
static const ax_sprite sVenomothSprites7[] = {
	{sVenomothGfx7, ARRAY_COUNT(sVenomothGfx7)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_8.4bpp.lz");
static const ax_sprite sVenomothSprites8[] = {
	{sVenomothGfx8, ARRAY_COUNT(sVenomothGfx8)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_9.4bpp.lz");
static const ax_sprite sVenomothSprites9[] = {
	{sVenomothGfx9, ARRAY_COUNT(sVenomothGfx9)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_10.4bpp.lz");
static const ax_sprite sVenomothSprites10[] = {
	{sVenomothGfx10, ARRAY_COUNT(sVenomothGfx10)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_11.4bpp.lz");
static const ax_sprite sVenomothSprites11[] = {
	{sVenomothGfx11, ARRAY_COUNT(sVenomothGfx11)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_12.4bpp.lz");
static const ax_sprite sVenomothSprites12[] = {
	{sVenomothGfx12, ARRAY_COUNT(sVenomothGfx12)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_13.4bpp.lz");
static const ax_sprite sVenomothSprites13[] = {
	{sVenomothGfx13, ARRAY_COUNT(sVenomothGfx13)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_14.4bpp.lz");
static const ax_sprite sVenomothSprites14[] = {
	{sVenomothGfx14, ARRAY_COUNT(sVenomothGfx14)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_15.4bpp.lz");
static const ax_sprite sVenomothSprites15[] = {
	{sVenomothGfx15, ARRAY_COUNT(sVenomothGfx15)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_16.4bpp.lz");
static const ax_sprite sVenomothSprites16[] = {
	{sVenomothGfx16, ARRAY_COUNT(sVenomothGfx16)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVenomothGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_17.4bpp.lz");
static const u8 sVenomothGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_17_1.4bpp.lz");
static const u8 sVenomothGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_17_2.4bpp.lz");
static const u8 sVenomothGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_17_3.4bpp.lz");
static const ax_sprite sVenomothSprites17[] = {
	{sVenomothGfx17, ARRAY_COUNT(sVenomothGfx17)}, 
	{NULL, 96}, 
	{sVenomothGfx17_1, ARRAY_COUNT(sVenomothGfx17_1)}, 
	{NULL, 32}, 
	{sVenomothGfx17_2, ARRAY_COUNT(sVenomothGfx17_2)}, 
	{NULL, 32}, 
	{sVenomothGfx17_3, ARRAY_COUNT(sVenomothGfx17_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVenomothGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_18.4bpp.lz");
static const u8 sVenomothGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_18_1.4bpp.lz");
static const u8 sVenomothGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_18_2.4bpp.lz");
static const u8 sVenomothGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_18_3.4bpp.lz");
static const ax_sprite sVenomothSprites18[] = {
	{sVenomothGfx18, ARRAY_COUNT(sVenomothGfx18)}, 
	{NULL, 64}, 
	{sVenomothGfx18_1, ARRAY_COUNT(sVenomothGfx18_1)}, 
	{NULL, 64}, 
	{sVenomothGfx18_2, ARRAY_COUNT(sVenomothGfx18_2)}, 
	{NULL, 64}, 
	{sVenomothGfx18_3, ARRAY_COUNT(sVenomothGfx18_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVenomothGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_19.4bpp.lz");
static const u8 sVenomothGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_19_1.4bpp.lz");
static const u8 sVenomothGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_19_2.4bpp.lz");
static const u8 sVenomothGfx19_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_19_3.4bpp.lz");
static const ax_sprite sVenomothSprites19[] = {
	{sVenomothGfx19, ARRAY_COUNT(sVenomothGfx19)}, 
	{NULL, 32}, 
	{sVenomothGfx19_1, ARRAY_COUNT(sVenomothGfx19_1)}, 
	{NULL, 32}, 
	{sVenomothGfx19_2, ARRAY_COUNT(sVenomothGfx19_2)}, 
	{NULL, 64}, 
	{sVenomothGfx19_3, ARRAY_COUNT(sVenomothGfx19_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sVenomothGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_20.4bpp.lz");
static const u8 sVenomothGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_20_1.4bpp.lz");
static const u8 sVenomothGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_20_2.4bpp.lz");
static const ax_sprite sVenomothSprites20[] = {
	{sVenomothGfx20, ARRAY_COUNT(sVenomothGfx20)}, 
	{NULL, 32}, 
	{sVenomothGfx20_1, ARRAY_COUNT(sVenomothGfx20_1)}, 
	{NULL, 32}, 
	{sVenomothGfx20_2, ARRAY_COUNT(sVenomothGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sVenomothGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_21.4bpp.lz");
static const ax_sprite sVenomothSprites21[] = {
	{sVenomothGfx21, ARRAY_COUNT(sVenomothGfx21)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_22.4bpp.lz");
static const ax_sprite sVenomothSprites22[] = {
	{sVenomothGfx22, ARRAY_COUNT(sVenomothGfx22)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_23.4bpp.lz");
static const ax_sprite sVenomothSprites23[] = {
	{sVenomothGfx23, ARRAY_COUNT(sVenomothGfx23)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_24.4bpp.lz");
static const ax_sprite sVenomothSprites24[] = {
	{sVenomothGfx24, ARRAY_COUNT(sVenomothGfx24)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_25.4bpp.lz");
static const ax_sprite sVenomothSprites25[] = {
	{sVenomothGfx25, ARRAY_COUNT(sVenomothGfx25)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_26.4bpp.lz");
static const ax_sprite sVenomothSprites26[] = {
	{sVenomothGfx26, ARRAY_COUNT(sVenomothGfx26)}, 
	{NULL, 0}
};
static const u8 sVenomothGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/venomoth/sprite_27.4bpp.lz");
static const ax_sprite sVenomothSprites27[] = {
	{sVenomothGfx27, ARRAY_COUNT(sVenomothGfx27)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesVenomoth[] = {
	sVenomothPose1,
	sVenomothPose2,
	sVenomothPose3,
	sVenomothPose4,
	sVenomothPose5,
	sVenomothPose6,
	sVenomothPose7,
	sVenomothPose8,
	sVenomothPose9,
	sVenomothPose10,
	sVenomothPose11,
	sVenomothPose12,
	sVenomothPose13,
	sVenomothPose14,
	sVenomothPose15,
	sVenomothPose16,
	sVenomothPose17,
	sVenomothPose18,
	sVenomothPose19,
	sVenomothPose20,
	sVenomothPose21,
	sVenomothPose22,
	sVenomothPose23,
	sVenomothPose24,
	sVenomothPose1,
	sVenomothPose2,
	sVenomothPose3,
	sVenomothPose28,
	sVenomothPose4,
	sVenomothPose5,
	sVenomothPose6,
	sVenomothPose32,
	sVenomothPose7,
	sVenomothPose8,
	sVenomothPose9,
	sVenomothPose36,
	sVenomothPose10,
	sVenomothPose11,
	sVenomothPose12,
	sVenomothPose40,
	sVenomothPose13,
	sVenomothPose14,
	sVenomothPose15,
	sVenomothPose44,
	sVenomothPose16,
	sVenomothPose17,
	sVenomothPose18,
	sVenomothPose48,
	sVenomothPose19,
	sVenomothPose20,
	sVenomothPose21,
	sVenomothPose52,
	sVenomothPose22,
	sVenomothPose23,
	sVenomothPose24,
	sVenomothPose56,
	sVenomothPose1,
	sVenomothPose2,
	sVenomothPose3,
	sVenomothPose28,
	sVenomothPose4,
	sVenomothPose5,
	sVenomothPose6,
	sVenomothPose32,
	sVenomothPose7,
	sVenomothPose8,
	sVenomothPose9,
	sVenomothPose36,
	sVenomothPose10,
	sVenomothPose11,
	sVenomothPose12,
	sVenomothPose40,
	sVenomothPose13,
	sVenomothPose14,
	sVenomothPose15,
	sVenomothPose44,
	sVenomothPose16,
	sVenomothPose17,
	sVenomothPose18,
	sVenomothPose48,
	sVenomothPose19,
	sVenomothPose20,
	sVenomothPose21,
	sVenomothPose52,
	sVenomothPose22,
	sVenomothPose23,
	sVenomothPose24,
	sVenomothPose56,
	sVenomothPose1,
	sVenomothPose2,
	sVenomothPose3,
	sVenomothPose4,
	sVenomothPose5,
	sVenomothPose6,
	sVenomothPose7,
	sVenomothPose8,
	sVenomothPose9,
	sVenomothPose10,
	sVenomothPose11,
	sVenomothPose12,
	sVenomothPose13,
	sVenomothPose14,
	sVenomothPose15,
	sVenomothPose16,
	sVenomothPose17,
	sVenomothPose18,
	sVenomothPose19,
	sVenomothPose20,
	sVenomothPose21,
	sVenomothPose22,
	sVenomothPose23,
	sVenomothPose24,
	sVenomothPose1,
	sVenomothPose2,
	sVenomothPose3,
	sVenomothPose4,
	sVenomothPose5,
	sVenomothPose6,
	sVenomothPose7,
	sVenomothPose8,
	sVenomothPose9,
	sVenomothPose10,
	sVenomothPose11,
	sVenomothPose12,
	sVenomothPose13,
	sVenomothPose14,
	sVenomothPose15,
	sVenomothPose16,
	sVenomothPose17,
	sVenomothPose18,
	sVenomothPose19,
	sVenomothPose20,
	sVenomothPose21,
	sVenomothPose22,
	sVenomothPose23,
	sVenomothPose24,
	sVenomothPose137,
	sVenomothPose138,
	sVenomothPose139,
	sVenomothPose140,
	sVenomothPose141,
	sVenomothPose142,
	sVenomothPose143,
	sVenomothPose144,
	sVenomothPose145,
	sVenomothPose146,
	sVenomothPose1,
	sVenomothPose2,
	sVenomothPose3,
	sVenomothPose4,
	sVenomothPose5,
	sVenomothPose6,
	sVenomothPose7,
	sVenomothPose8,
	sVenomothPose9,
	sVenomothPose10,
	sVenomothPose11,
	sVenomothPose12,
	sVenomothPose13,
	sVenomothPose14,
	sVenomothPose15,
	sVenomothPose162,
	sVenomothPose163,
	sVenomothPose164,
	sVenomothPose19,
	sVenomothPose20,
	sVenomothPose21,
	sVenomothPose22,
	sVenomothPose23,
	sVenomothPose24,
	sVenomothPose28,
	sVenomothPose56,
	sVenomothPose52,
	sVenomothPose174,
	sVenomothPose175,
	sVenomothPose176,
	sVenomothPose36,
	sVenomothPose32,
	sVenomothPose28,
	sVenomothPose32,
	sVenomothPose36,
	sVenomothPose176,
	sVenomothPose175,
	sVenomothPose174,
	sVenomothPose52,
	sVenomothPose56,
	sVenomothPose1,
	sVenomothPose2,
	sVenomothPose28,
	sVenomothPose4,
	sVenomothPose5,
	sVenomothPose32,
	sVenomothPose7,
	sVenomothPose8,
	sVenomothPose36,
	sVenomothPose10,
	sVenomothPose11,
	sVenomothPose40,
	sVenomothPose13,
	sVenomothPose14,
	sVenomothPose44,
	sVenomothPose16,
	sVenomothPose17,
	sVenomothPose48,
	sVenomothPose19,
	sVenomothPose20,
	sVenomothPose52,
	sVenomothPose22,
	sVenomothPose23,
	sVenomothPose56,
	sVenomothPose2,
	sVenomothPose23,
	sVenomothPose20,
	sVenomothPose17,
	sVenomothPose14,
	sVenomothPose11,
	sVenomothPose8,
	sVenomothPose5,
	sVenomothPose1,
	sVenomothPose22,
	sVenomothPose19,
	sVenomothPose16,
	sVenomothPose13,
	sVenomothPose10,
	sVenomothPose7,
	sVenomothPose4,
};

static const struct PositionSets sAxPositionsVenomoth[] = {
	[0] = { .set = { {-1, -9}, {-10, -20}, {8, -20}, {-1, -11} } },
	[1] = { .set = { {-1, -9}, {-12, -19}, {10, -19}, {-1, -11} } },
	[2] = { .set = { {-1, -9}, {-9, -23}, {7, -23}, {-1, -12} } },
	[3] = { .set = { {2, -10}, {5, -23}, {-10, -19}, {0, -10} } },
	[4] = { .set = { {2, -10}, {7, -22}, {-9, -18}, {0, -10} } },
	[5] = { .set = { {2, -10}, {3, -23}, {-10, -20}, {-1, -11} } },
	[6] = { .set = { {5, -10}, {-4, -24}, {-6, -17}, {1, -10} } },
	[7] = { .set = { {5, -10}, {-2, -24}, {-5, -16}, {1, -9} } },
	[8] = { .set = { {5, -10}, {-7, -24}, {-9, -18}, {1, -9} } },
	[9] = { .set = { {4, -15}, {-8, -22}, {4, -16}, {0, -13} } },
	[10] = { .set = { {4, -15}, {-7, -24}, {7, -17}, {0, -13} } },
	[11] = { .set = { {6, -14}, {-9, -21}, {2, -15}, {0, -12} } },
	[12] = { .set = { {-1, -16}, {7, -21}, {-9, -21}, {-1, -14} } },
	[13] = { .set = { {-1, -16}, {11, -22}, {-13, -22}, {-1, -14} } },
	[14] = { .set = { {-1, -16}, {6, -20}, {-8, -20}, {-1, -14} } },
	[15] = { .set = { {-5, -15}, {7, -22}, {-5, -16}, {-1, -13} } },
	[16] = { .set = { {-5, -15}, {6, -24}, {-8, -17}, {-1, -13} } },
	[17] = { .set = { {-7, -14}, {8, -21}, {-3, -15}, {-1, -12} } },
	[18] = { .set = { {-6, -10}, {3, -24}, {5, -17}, {-2, -10} } },
	[19] = { .set = { {-6, -10}, {1, -24}, {4, -16}, {-2, -9} } },
	[20] = { .set = { {-6, -10}, {6, -24}, {8, -18}, {-2, -9} } },
	[21] = { .set = { {-3, -10}, {-6, -23}, {9, -19}, {-1, -10} } },
	[22] = { .set = { {-3, -10}, {-8, -22}, {8, -18}, {-1, -10} } },
	[23] = { .set = { {-3, -10}, {-4, -23}, {9, -20}, {0, -11} } },
	[24] = { .set = { {-1, -9}, {-10, -20}, {8, -20}, {-1, -11} } },
	[25] = { .set = { {-1, -9}, {-12, -19}, {10, -19}, {-1, -11} } },
	[26] = { .set = { {-1, -9}, {-9, -23}, {7, -23}, {-1, -12} } },
	[27] = { .set = { {-1, -6}, {-11, -19}, {9, -19}, {-1, -9} } },
	[28] = { .set = { {2, -10}, {5, -23}, {-10, -19}, {0, -10} } },
	[29] = { .set = { {2, -10}, {7, -22}, {-9, -18}, {0, -10} } },
	[30] = { .set = { {2, -10}, {3, -23}, {-10, -20}, {-1, -11} } },
	[31] = { .set = { {2, -6}, {6, -20}, {-7, -18}, {-1, -9} } },
	[32] = { .set = { {5, -10}, {-4, -24}, {-6, -17}, {1, -10} } },
	[33] = { .set = { {5, -10}, {-2, -24}, {-5, -16}, {1, -9} } },
	[34] = { .set = { {5, -10}, {-7, -24}, {-9, -18}, {1, -9} } },
	[35] = { .set = { {4, -8}, {0, -23}, {0, -17}, {0, -10} } },
	[36] = { .set = { {4, -15}, {-8, -22}, {4, -16}, {0, -13} } },
	[37] = { .set = { {4, -15}, {-7, -24}, {7, -17}, {0, -13} } },
	[38] = { .set = { {6, -14}, {-9, -21}, {2, -15}, {0, -12} } },
	[39] = { .set = { {4, -13}, {-5, -24}, {9, -16}, {0, -13} } },
	[40] = { .set = { {-1, -16}, {7, -21}, {-9, -21}, {-1, -14} } },
	[41] = { .set = { {-1, -16}, {11, -22}, {-13, -22}, {-1, -14} } },
	[42] = { .set = { {-1, -16}, {6, -20}, {-8, -20}, {-1, -14} } },
	[43] = { .set = { {-1, -15}, {8, -22}, {-10, -22}, {-1, -14} } },
	[44] = { .set = { {-5, -15}, {7, -22}, {-5, -16}, {-1, -13} } },
	[45] = { .set = { {-5, -15}, {6, -24}, {-8, -17}, {-1, -13} } },
	[46] = { .set = { {-7, -14}, {8, -21}, {-3, -15}, {-1, -12} } },
	[47] = { .set = { {-5, -13}, {4, -24}, {-10, -16}, {-1, -13} } },
	[48] = { .set = { {-6, -10}, {3, -24}, {5, -17}, {-2, -10} } },
	[49] = { .set = { {-6, -10}, {1, -24}, {4, -16}, {-2, -9} } },
	[50] = { .set = { {-6, -10}, {6, -24}, {8, -18}, {-2, -9} } },
	[51] = { .set = { {-5, -8}, {-1, -23}, {-1, -17}, {-1, -10} } },
	[52] = { .set = { {-3, -10}, {-6, -23}, {9, -19}, {-1, -10} } },
	[53] = { .set = { {-3, -10}, {-8, -22}, {8, -18}, {-1, -10} } },
	[54] = { .set = { {-3, -10}, {-4, -23}, {9, -20}, {0, -11} } },
	[55] = { .set = { {-3, -6}, {-7, -20}, {6, -18}, {0, -9} } },
	[56] = { .set = { {-1, -9}, {-10, -20}, {8, -20}, {-1, -11} } },
	[57] = { .set = { {-1, -9}, {-12, -19}, {10, -19}, {-1, -11} } },
	[58] = { .set = { {-1, -9}, {-9, -23}, {7, -23}, {-1, -12} } },
	[59] = { .set = { {-1, -6}, {-11, -19}, {9, -19}, {-1, -9} } },
	[60] = { .set = { {2, -10}, {5, -23}, {-10, -19}, {0, -10} } },
	[61] = { .set = { {2, -10}, {7, -22}, {-9, -18}, {0, -10} } },
	[62] = { .set = { {2, -10}, {3, -23}, {-10, -20}, {-1, -11} } },
	[63] = { .set = { {2, -6}, {6, -20}, {-7, -18}, {-1, -9} } },
	[64] = { .set = { {5, -10}, {-4, -24}, {-6, -17}, {1, -10} } },
	[65] = { .set = { {5, -10}, {-2, -24}, {-5, -16}, {1, -9} } },
	[66] = { .set = { {5, -10}, {-7, -24}, {-9, -18}, {1, -9} } },
	[67] = { .set = { {4, -8}, {0, -23}, {0, -17}, {0, -10} } },
	[68] = { .set = { {4, -15}, {-8, -22}, {4, -16}, {0, -13} } },
	[69] = { .set = { {4, -15}, {-7, -24}, {7, -17}, {0, -13} } },
	[70] = { .set = { {6, -14}, {-9, -21}, {2, -15}, {0, -12} } },
	[71] = { .set = { {4, -13}, {-5, -24}, {9, -16}, {0, -13} } },
	[72] = { .set = { {-1, -16}, {7, -21}, {-9, -21}, {-1, -14} } },
	[73] = { .set = { {-1, -16}, {11, -22}, {-13, -22}, {-1, -14} } },
	[74] = { .set = { {-1, -16}, {6, -20}, {-8, -20}, {-1, -14} } },
	[75] = { .set = { {-1, -15}, {8, -22}, {-10, -22}, {-1, -14} } },
	[76] = { .set = { {-5, -15}, {7, -22}, {-5, -16}, {-1, -13} } },
	[77] = { .set = { {-5, -15}, {6, -24}, {-8, -17}, {-1, -13} } },
	[78] = { .set = { {-7, -14}, {8, -21}, {-3, -15}, {-1, -12} } },
	[79] = { .set = { {-5, -13}, {4, -24}, {-10, -16}, {-1, -13} } },
	[80] = { .set = { {-6, -10}, {3, -24}, {5, -17}, {-2, -10} } },
	[81] = { .set = { {-6, -10}, {1, -24}, {4, -16}, {-2, -9} } },
	[82] = { .set = { {-6, -10}, {6, -24}, {8, -18}, {-2, -9} } },
	[83] = { .set = { {-5, -8}, {-1, -23}, {-1, -17}, {-1, -10} } },
	[84] = { .set = { {-3, -10}, {-6, -23}, {9, -19}, {-1, -10} } },
	[85] = { .set = { {-3, -10}, {-8, -22}, {8, -18}, {-1, -10} } },
	[86] = { .set = { {-3, -10}, {-4, -23}, {9, -20}, {0, -11} } },
	[87] = { .set = { {-3, -6}, {-7, -20}, {6, -18}, {0, -9} } },
	[88] = { .set = { {-1, -9}, {-10, -20}, {8, -20}, {-1, -11} } },
	[89] = { .set = { {-1, -9}, {-12, -19}, {10, -19}, {-1, -11} } },
	[90] = { .set = { {-1, -9}, {-9, -23}, {7, -23}, {-1, -12} } },
	[91] = { .set = { {2, -10}, {5, -23}, {-10, -19}, {0, -10} } },
	[92] = { .set = { {2, -10}, {7, -22}, {-9, -18}, {0, -10} } },
	[93] = { .set = { {2, -10}, {3, -23}, {-10, -20}, {-1, -11} } },
	[94] = { .set = { {5, -10}, {-4, -24}, {-6, -17}, {1, -10} } },
	[95] = { .set = { {5, -10}, {-2, -24}, {-5, -16}, {1, -9} } },
	[96] = { .set = { {5, -10}, {-7, -24}, {-9, -18}, {1, -9} } },
	[97] = { .set = { {4, -15}, {-8, -22}, {4, -16}, {0, -13} } },
	[98] = { .set = { {4, -15}, {-7, -24}, {7, -17}, {0, -13} } },
	[99] = { .set = { {6, -14}, {-9, -21}, {2, -15}, {0, -12} } },
	[100] = { .set = { {-1, -16}, {7, -21}, {-9, -21}, {-1, -14} } },
	[101] = { .set = { {-1, -16}, {11, -22}, {-13, -22}, {-1, -14} } },
	[102] = { .set = { {-1, -16}, {6, -20}, {-8, -20}, {-1, -14} } },
	[103] = { .set = { {-5, -15}, {7, -22}, {-5, -16}, {-1, -13} } },
	[104] = { .set = { {-5, -15}, {6, -24}, {-8, -17}, {-1, -13} } },
	[105] = { .set = { {-7, -14}, {8, -21}, {-3, -15}, {-1, -12} } },
	[106] = { .set = { {-6, -10}, {3, -24}, {5, -17}, {-2, -10} } },
	[107] = { .set = { {-6, -10}, {1, -24}, {4, -16}, {-2, -9} } },
	[108] = { .set = { {-6, -10}, {6, -24}, {8, -18}, {-2, -9} } },
	[109] = { .set = { {-3, -10}, {-6, -23}, {9, -19}, {-1, -10} } },
	[110] = { .set = { {-3, -10}, {-8, -22}, {8, -18}, {-1, -10} } },
	[111] = { .set = { {-3, -10}, {-4, -23}, {9, -20}, {0, -11} } },
	[112] = { .set = { {-1, -9}, {-10, -20}, {8, -20}, {-1, -11} } },
	[113] = { .set = { {-1, -9}, {-12, -19}, {10, -19}, {-1, -11} } },
	[114] = { .set = { {-1, -9}, {-9, -23}, {7, -23}, {-1, -12} } },
	[115] = { .set = { {2, -10}, {5, -23}, {-10, -19}, {0, -10} } },
	[116] = { .set = { {2, -10}, {7, -22}, {-9, -18}, {0, -10} } },
	[117] = { .set = { {2, -10}, {3, -23}, {-10, -20}, {-1, -11} } },
	[118] = { .set = { {5, -10}, {-4, -24}, {-6, -17}, {1, -10} } },
	[119] = { .set = { {5, -10}, {-2, -24}, {-5, -16}, {1, -9} } },
	[120] = { .set = { {5, -10}, {-7, -24}, {-9, -18}, {1, -9} } },
	[121] = { .set = { {4, -15}, {-8, -22}, {4, -16}, {0, -13} } },
	[122] = { .set = { {4, -15}, {-7, -24}, {7, -17}, {0, -13} } },
	[123] = { .set = { {6, -14}, {-9, -21}, {2, -15}, {0, -12} } },
	[124] = { .set = { {-1, -16}, {7, -21}, {-9, -21}, {-1, -14} } },
	[125] = { .set = { {-1, -16}, {11, -22}, {-13, -22}, {-1, -14} } },
	[126] = { .set = { {-1, -16}, {6, -20}, {-8, -20}, {-1, -14} } },
	[127] = { .set = { {-5, -15}, {7, -22}, {-5, -16}, {-1, -13} } },
	[128] = { .set = { {-5, -15}, {6, -24}, {-8, -17}, {-1, -13} } },
	[129] = { .set = { {-7, -14}, {8, -21}, {-3, -15}, {-1, -12} } },
	[130] = { .set = { {-6, -10}, {3, -24}, {5, -17}, {-2, -10} } },
	[131] = { .set = { {-6, -10}, {1, -24}, {4, -16}, {-2, -9} } },
	[132] = { .set = { {-6, -10}, {6, -24}, {8, -18}, {-2, -9} } },
	[133] = { .set = { {-3, -10}, {-6, -23}, {9, -19}, {-1, -10} } },
	[134] = { .set = { {-3, -10}, {-8, -22}, {8, -18}, {-1, -10} } },
	[135] = { .set = { {-3, -10}, {-4, -23}, {9, -20}, {0, -11} } },
	[136] = { .set = { {-6, -7}, {-5, -23}, {0, -23}, {-2, -9} } },
	[137] = { .set = { {-6, -5}, {-12, -19}, {3, -20}, {-2, -8} } },
	[138] = { .set = { {-1, -9}, {-9, -19}, {7, -19}, {-1, -11} } },
	[139] = { .set = { {2, -9}, {0, -24}, {-12, -20}, {-2, -11} } },
	[140] = { .set = { {5, -11}, {-7, -21}, {-10, -17}, {1, -9} } },
	[141] = { .set = { {4, -14}, {-15, -16}, {-1, -12}, {-2, -10} } },
	[142] = { .set = { {0, -14}, {7, -17}, {-7, -17}, {0, -11} } },
	[143] = { .set = { {-5, -14}, {14, -16}, {0, -12}, {1, -10} } },
	[144] = { .set = { {-6, -11}, {6, -21}, {9, -17}, {-2, -9} } },
	[145] = { .set = { {-3, -9}, {-1, -24}, {11, -20}, {1, -11} } },
	[146] = { .set = { {-1, -9}, {-10, -20}, {8, -20}, {-1, -11} } },
	[147] = { .set = { {-1, -9}, {-12, -19}, {10, -19}, {-1, -11} } },
	[148] = { .set = { {-1, -9}, {-9, -23}, {7, -23}, {-1, -12} } },
	[149] = { .set = { {2, -10}, {5, -23}, {-10, -19}, {0, -10} } },
	[150] = { .set = { {2, -10}, {7, -22}, {-9, -18}, {0, -10} } },
	[151] = { .set = { {2, -10}, {3, -23}, {-10, -20}, {-1, -11} } },
	[152] = { .set = { {5, -10}, {-4, -24}, {-6, -17}, {1, -10} } },
	[153] = { .set = { {5, -10}, {-2, -24}, {-5, -16}, {1, -9} } },
	[154] = { .set = { {5, -10}, {-7, -24}, {-9, -18}, {1, -9} } },
	[155] = { .set = { {4, -15}, {-8, -22}, {4, -16}, {0, -13} } },
	[156] = { .set = { {4, -15}, {-7, -24}, {7, -17}, {0, -13} } },
	[157] = { .set = { {6, -14}, {-9, -21}, {2, -15}, {0, -12} } },
	[158] = { .set = { {-1, -16}, {7, -21}, {-9, -21}, {-1, -14} } },
	[159] = { .set = { {-1, -16}, {11, -22}, {-13, -22}, {-1, -14} } },
	[160] = { .set = { {-1, -16}, {6, -20}, {-8, -20}, {-1, -14} } },
	[161] = { .set = { {-6, -15}, {6, -22}, {-6, -16}, {-2, -13} } },
	[162] = { .set = { {-6, -15}, {5, -24}, {-9, -17}, {-2, -13} } },
	[163] = { .set = { {-8, -14}, {7, -21}, {-4, -15}, {-2, -12} } },
	[164] = { .set = { {-6, -10}, {3, -24}, {5, -17}, {-2, -10} } },
	[165] = { .set = { {-6, -10}, {1, -24}, {4, -16}, {-2, -9} } },
	[166] = { .set = { {-6, -10}, {6, -24}, {8, -18}, {-2, -9} } },
	[167] = { .set = { {-3, -10}, {-6, -23}, {9, -19}, {-1, -10} } },
	[168] = { .set = { {-3, -10}, {-8, -22}, {8, -18}, {-1, -10} } },
	[169] = { .set = { {-3, -10}, {-4, -23}, {9, -20}, {0, -11} } },
	[170] = { .set = { {-1, -6}, {-11, -19}, {9, -19}, {-1, -9} } },
	[171] = { .set = { {-3, -6}, {-7, -20}, {6, -18}, {0, -9} } },
	[172] = { .set = { {-5, -8}, {-1, -23}, {-1, -17}, {-1, -10} } },
	[173] = { .set = { {-5, -12}, {4, -23}, {-10, -15}, {-1, -12} } },
	[174] = { .set = { {-1, -13}, {8, -20}, {-10, -20}, {-1, -12} } },
	[175] = { .set = { {4, -12}, {-5, -23}, {9, -15}, {0, -12} } },
	[176] = { .set = { {4, -8}, {0, -23}, {0, -17}, {0, -10} } },
	[177] = { .set = { {2, -6}, {6, -20}, {-7, -18}, {-1, -9} } },
	[178] = { .set = { {-1, -6}, {-11, -19}, {9, -19}, {-1, -9} } },
	[179] = { .set = { {2, -6}, {6, -20}, {-7, -18}, {-1, -9} } },
	[180] = { .set = { {4, -8}, {0, -23}, {0, -17}, {0, -10} } },
	[181] = { .set = { {4, -12}, {-5, -23}, {9, -15}, {0, -12} } },
	[182] = { .set = { {-1, -13}, {8, -20}, {-10, -20}, {-1, -12} } },
	[183] = { .set = { {-5, -12}, {4, -23}, {-10, -15}, {-1, -12} } },
	[184] = { .set = { {-5, -8}, {-1, -23}, {-1, -17}, {-1, -10} } },
	[185] = { .set = { {-3, -6}, {-7, -20}, {6, -18}, {0, -9} } },
	[186] = { .set = { {-1, -9}, {-10, -20}, {8, -20}, {-1, -11} } },
	[187] = { .set = { {-1, -9}, {-12, -19}, {10, -19}, {-1, -11} } },
	[188] = { .set = { {-1, -6}, {-11, -19}, {9, -19}, {-1, -9} } },
	[189] = { .set = { {2, -10}, {5, -23}, {-10, -19}, {0, -10} } },
	[190] = { .set = { {2, -10}, {7, -22}, {-9, -18}, {0, -10} } },
	[191] = { .set = { {2, -6}, {6, -20}, {-7, -18}, {-1, -9} } },
	[192] = { .set = { {5, -10}, {-4, -24}, {-6, -17}, {1, -10} } },
	[193] = { .set = { {5, -10}, {-2, -24}, {-5, -16}, {1, -9} } },
	[194] = { .set = { {4, -8}, {0, -23}, {0, -17}, {0, -10} } },
	[195] = { .set = { {4, -15}, {-8, -22}, {4, -16}, {0, -13} } },
	[196] = { .set = { {4, -15}, {-7, -24}, {7, -17}, {0, -13} } },
	[197] = { .set = { {4, -13}, {-5, -24}, {9, -16}, {0, -13} } },
	[198] = { .set = { {-1, -16}, {7, -21}, {-9, -21}, {-1, -14} } },
	[199] = { .set = { {-1, -16}, {11, -22}, {-13, -22}, {-1, -14} } },
	[200] = { .set = { {-1, -15}, {8, -22}, {-10, -22}, {-1, -14} } },
	[201] = { .set = { {-5, -15}, {7, -22}, {-5, -16}, {-1, -13} } },
	[202] = { .set = { {-5, -15}, {6, -24}, {-8, -17}, {-1, -13} } },
	[203] = { .set = { {-5, -13}, {4, -24}, {-10, -16}, {-1, -13} } },
	[204] = { .set = { {-6, -10}, {3, -24}, {5, -17}, {-2, -10} } },
	[205] = { .set = { {-6, -10}, {1, -24}, {4, -16}, {-2, -9} } },
	[206] = { .set = { {-5, -8}, {-1, -23}, {-1, -17}, {-1, -10} } },
	[207] = { .set = { {-3, -10}, {-6, -23}, {9, -19}, {-1, -10} } },
	[208] = { .set = { {-3, -10}, {-8, -22}, {8, -18}, {-1, -10} } },
	[209] = { .set = { {-3, -6}, {-7, -20}, {6, -18}, {0, -9} } },
	[210] = { .set = { {-1, -9}, {-12, -19}, {10, -19}, {-1, -11} } },
	[211] = { .set = { {-3, -10}, {-8, -22}, {8, -18}, {-1, -10} } },
	[212] = { .set = { {-6, -10}, {1, -24}, {4, -16}, {-2, -9} } },
	[213] = { .set = { {-5, -15}, {6, -24}, {-8, -17}, {-1, -13} } },
	[214] = { .set = { {-1, -16}, {11, -22}, {-13, -22}, {-1, -14} } },
	[215] = { .set = { {4, -15}, {-7, -24}, {7, -17}, {0, -13} } },
	[216] = { .set = { {5, -10}, {-2, -24}, {-5, -16}, {1, -9} } },
	[217] = { .set = { {2, -10}, {7, -22}, {-9, -18}, {0, -10} } },
	[218] = { .set = { {-1, -9}, {-10, -20}, {8, -20}, {-1, -11} } },
	[219] = { .set = { {-3, -10}, {-6, -23}, {9, -19}, {-1, -10} } },
	[220] = { .set = { {-6, -10}, {3, -24}, {5, -17}, {-2, -10} } },
	[221] = { .set = { {-5, -15}, {7, -22}, {-5, -16}, {-1, -13} } },
	[222] = { .set = { {-1, -16}, {7, -21}, {-9, -21}, {-1, -14} } },
	[223] = { .set = { {4, -15}, {-8, -22}, {4, -16}, {0, -13} } },
	[224] = { .set = { {5, -10}, {-4, -24}, {-6, -17}, {1, -10} } },
	[225] = { .set = { {2, -10}, {5, -23}, {-10, -19}, {0, -10} } },
};

static const ax_anim *const sVenomothAnimTable1[] = {
	gAxSharedAnim_02608,
	gAxSharedAnim_02684,
	gAxSharedAnim_02693,
	gAxSharedAnim_02702,
	gAxSharedAnim_02620,
	gAxSharedAnim_02639,
	gAxSharedAnim_02652,
	gAxSharedAnim_02661,
};

static const ax_anim *const sVenomothAnimTable2[] = {
	sVenomothAnims_2_1,
	sVenomothAnims_2_2,
	sVenomothAnims_2_3,
	sVenomothAnims_2_4,
	sVenomothAnims_2_5,
	sVenomothAnims_2_6,
	sVenomothAnims_2_7,
	sVenomothAnims_2_8,
};

static const ax_anim *const sVenomothAnimTable3[] = {
	sVenomothAnims_3_1,
	sVenomothAnims_3_2,
	sVenomothAnims_3_3,
	sVenomothAnims_3_4,
	sVenomothAnims_3_5,
	sVenomothAnims_3_6,
	sVenomothAnims_3_7,
	sVenomothAnims_3_8,
};

static const ax_anim *const sVenomothAnimTable4[] = {
	sVenomothAnims_4_1,
	sVenomothAnims_4_2,
	sVenomothAnims_4_3,
	sVenomothAnims_4_4,
	sVenomothAnims_4_5,
	sVenomothAnims_4_6,
	sVenomothAnims_4_7,
	sVenomothAnims_4_8,
};

static const ax_anim *const sVenomothAnimTable5[] = {
	sVenomothAnims_5_1,
	sVenomothAnims_5_2,
	sVenomothAnims_5_3,
	sVenomothAnims_5_4,
	sVenomothAnims_5_5,
	sVenomothAnims_5_6,
	sVenomothAnims_5_7,
	sVenomothAnims_5_8,
};

static const ax_anim *const sVenomothAnimTable6[] = {
	sVenomothAnims_6_1,
	sVenomothAnims_6_1,
	sVenomothAnims_6_1,
	sVenomothAnims_6_1,
	sVenomothAnims_6_1,
	sVenomothAnims_6_1,
	sVenomothAnims_6_1,
	sVenomothAnims_6_1,
};

static const ax_anim *const sVenomothAnimTable7[] = {
	gAxSharedAnim_00466,
	gAxSharedAnim_00479,
	gAxSharedAnim_00487,
	gAxSharedAnim_00496,
	gAxSharedAnim_00508,
	gAxSharedAnim_00517,
	gAxSharedAnim_00523,
	gAxSharedAnim_00529,
};

static const ax_anim *const sVenomothAnimTable8[] = {
	sVenomothAnims_8_1,
	sVenomothAnims_8_2,
	sVenomothAnims_8_3,
	sVenomothAnims_8_4,
	sVenomothAnims_8_5,
	sVenomothAnims_8_6,
	sVenomothAnims_8_7,
	sVenomothAnims_8_8,
};

static const ax_anim *const sVenomothAnimTable9[] = {
	sVenomothAnims_9_1,
	sVenomothAnims_9_2,
	sVenomothAnims_9_3,
	sVenomothAnims_9_4,
	gAxSharedAnim_00845,
	sVenomothAnims_9_6,
	sVenomothAnims_9_7,
	sVenomothAnims_9_8,
};

static const ax_anim *const sVenomothAnimTable10[] = {
	gAxSharedAnim_00905,
	gAxSharedAnim_00918,
	gAxSharedAnim_00930,
	gAxSharedAnim_00942,
	gAxSharedAnim_00955,
	gAxSharedAnim_00965,
	gAxSharedAnim_00978,
	gAxSharedAnim_00993,
};

static const ax_anim *const sVenomothAnimTable11[] = {
	sVenomothAnims_11_1,
	sVenomothAnims_11_2,
	sVenomothAnims_11_3,
	sVenomothAnims_11_4,
	sVenomothAnims_11_5,
	sVenomothAnims_11_6,
	sVenomothAnims_11_7,
	sVenomothAnims_11_8,
};

static const ax_anim *const sVenomothAnimTable12[] = {
	gAxSharedAnim_01337,
	gAxSharedAnim_01414,
	gAxSharedAnim_01392,
	gAxSharedAnim_01380,
	gAxSharedAnim_01379,
	gAxSharedAnim_01368,
	gAxSharedAnim_01354,
	gAxSharedAnim_01338,
};

static const ax_anim *const sVenomothAnimTable13[] = {
	gAxSharedAnim_01422,
	gAxSharedAnim_01464,
	gAxSharedAnim_01461,
	gAxSharedAnim_01456,
	gAxSharedAnim_01446,
	gAxSharedAnim_01443,
	gAxSharedAnim_01438,
	gAxSharedAnim_01429,
};

static const ax_anim *const *const sAxAnimationsVenomoth[] = {
	sVenomothAnimTable1,
	sVenomothAnimTable2,
	sVenomothAnimTable3,
	sVenomothAnimTable4,
	sVenomothAnimTable5,
	sVenomothAnimTable6,
	sVenomothAnimTable7,
	sVenomothAnimTable8,
	sVenomothAnimTable9,
	sVenomothAnimTable10,
	sVenomothAnimTable11,
	sVenomothAnimTable12,
	sVenomothAnimTable13,
};

static const ax_sprite *const sAxSpritesVenomoth[] = {
	sVenomothSprites1,
	sVenomothSprites2,
	sVenomothSprites3,
	sVenomothSprites4,
	sVenomothSprites5,
	sVenomothSprites6,
	sVenomothSprites7,
	sVenomothSprites8,
	sVenomothSprites9,
	sVenomothSprites10,
	sVenomothSprites11,
	sVenomothSprites12,
	sVenomothSprites13,
	sVenomothSprites14,
	sVenomothSprites15,
	sVenomothSprites16,
	sVenomothSprites17,
	sVenomothSprites18,
	sVenomothSprites19,
	sVenomothSprites20,
	sVenomothSprites21,
	sVenomothSprites22,
	sVenomothSprites23,
	sVenomothSprites24,
	sVenomothSprites25,
	sVenomothSprites26,
	sVenomothSprites27,
};

static const axmain sAxMainVenomoth = {
	.poses = sAxPosesVenomoth,
	.animations = sAxAnimationsVenomoth,
	.animCount = ARRAY_COUNT(sAxAnimationsVenomoth),
	.spriteData = sAxSpritesVenomoth,
	.positions = sAxPositionsVenomoth,
};
