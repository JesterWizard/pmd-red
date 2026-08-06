/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainDecoy;
const SiroArchive gAxDecoy = {"SIRO", &sAxMainDecoy};

static const ax_pose sDecoyPose1[] = {
	AX_POSE(0, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose4[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose5[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose6[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose7[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose8[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose9[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose10[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose11[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose12[] = {
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose13[] = {
	AX_POSE(9, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose14[] = {
	AX_POSE(8, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose15[] = {
	AX_POSE(7, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose16[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose81[] = {
	AX_POSE(10, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose82[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose83[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose84[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose85[] = {
	AX_POSE(14, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose86[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose87[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose88[] = {
	AX_POSE(15, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose89[] = {
	AX_POSE(14, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sDecoyPose90[] = {
	AX_POSE(13, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_anim sDecoyAnims_1_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 0, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 0, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 0, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 0, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 0, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 8, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_1_2[] = {
	{ .frames = 5, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 1, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 1, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 1, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 1, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 1, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 1, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_1_3[] = {
	{ .frames = 5, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 2, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 2, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 2, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 2, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 2, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 2, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_1_4[] = {
	{ .frames = 5, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 3, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 3, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 3, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 3, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 3, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 3, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 3, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 11, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_1_5[] = {
	{ .frames = 5, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 4, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 4, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 4, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 4, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 4, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 4, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 4, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_1_6[] = {
	{ .frames = 5, .unkFlags = 0, .poseId = 5, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 5, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 5, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 5, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 5, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 5, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 5, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 5, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_1_7[] = {
	{ .frames = 5, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 6, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 6, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 6, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 6, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 6, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 6, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 6, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_1_8[] = {
	{ .frames = 5, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 7, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 7, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 7, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 7, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 7, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 7, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 7, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 5, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 16, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 16, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 16, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 16, .offset = {0, 10}, .shadow = {0, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 24}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 16, .offset = {1, 24}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, 24}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {1, 24}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 16, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 17, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 17, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 17, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 17, .offset = {10, 10}, .shadow = {10, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {23, 24}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 17, .offset = {24, 23}, .shadow = {24, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 17, .offset = {23, 24}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 17, .offset = {24, 23}, .shadow = {24, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 17, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 18, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 18, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 18, .offset = {10, 1}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {23, 2}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 18, .offset = {23, 1}, .shadow = {23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {23, 2}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {23, 1}, .shadow = {23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 18, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 19, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 19, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 19, .offset = {6, -5}, .shadow = {6, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 19, .offset = {14, -11}, .shadow = {14, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {23, -17}, .shadow = {23, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 19, .offset = {22, -18}, .shadow = {22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 19, .offset = {23, -17}, .shadow = {23, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 19, .offset = {22, -18}, .shadow = {22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 19, .offset = {7, -5}, .shadow = {7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 20, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 20, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 20, .offset = {0, -11}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {0, -17}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 20, .offset = {1, -17}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {0, -17}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {1, -17}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 20, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 21, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 21, .offset = {-6, -5}, .shadow = {-6, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 21, .offset = {-14, -11}, .shadow = {-14, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {-23, -17}, .shadow = {-23, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 21, .offset = {-24, -16}, .shadow = {-24, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {-23, -17}, .shadow = {-23, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {-24, -16}, .shadow = {-24, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 21, .offset = {-7, -5}, .shadow = {-7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 22, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 22, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 22, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 22, .offset = {-10, 1}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-23, 2}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 22, .offset = {-23, 1}, .shadow = {-23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {-23, 2}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {-23, 1}, .shadow = {-23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 22, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 23, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 23, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 23, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 23, .offset = {-10, 10}, .shadow = {-10, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-23, 24}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 23, .offset = {-24, 23}, .shadow = {-24, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 23, .offset = {-23, 24}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 23, .offset = {-24, 23}, .shadow = {-24, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 23, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 32, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 32, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 32, .offset = {0, 10}, .shadow = {0, 8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {0, 24}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {1, 24}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 24}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {1, 24}, .shadow = {1, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 33, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 33, .offset = {10, 10}, .shadow = {10, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {23, 24}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 33, .offset = {24, 23}, .shadow = {24, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {23, 24}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {24, 23}, .shadow = {24, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 34, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {10, 1}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {23, 2}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {23, 1}, .shadow = {23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {23, 2}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {23, 1}, .shadow = {23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 35, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 35, .offset = {6, -5}, .shadow = {6, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {14, -11}, .shadow = {14, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {23, -17}, .shadow = {23, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {22, -18}, .shadow = {22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {23, -17}, .shadow = {23, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {22, -18}, .shadow = {22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {7, -5}, .shadow = {7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 36, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 36, .offset = {0, -11}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, -17}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 36, .offset = {1, -17}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -17}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {1, -17}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 37, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {-6, -5}, .shadow = {-6, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {-14, -11}, .shadow = {-14, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-23, -17}, .shadow = {-23, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {-24, -16}, .shadow = {-24, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {-23, -17}, .shadow = {-23, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {-24, -16}, .shadow = {-24, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {-7, -5}, .shadow = {-7, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 38, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 38, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {-10, 1}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-23, 2}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {-23, 1}, .shadow = {-23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-23, 2}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-23, 1}, .shadow = {-23, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 39, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 39, .offset = {-10, 10}, .shadow = {-10, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-23, 24}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {-24, 23}, .shadow = {-24, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-23, 24}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-24, 23}, .shadow = {-24, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 50, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_8_1[] = {
	{ .frames = 32, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 90, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 90, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_8_2[] = {
	{ .frames = 32, .unkFlags = 0, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_8_3[] = {
	{ .frames = 32, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_8_4[] = {
	{ .frames = 32, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_8_5[] = {
	{ .frames = 32, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_8_6[] = {
	{ .frames = 32, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 95, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_8_7[] = {
	{ .frames = 32, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 96, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 96, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_8_8[] = {
	{ .frames = 32, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 97, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 97, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {7, 18}, .shadow = {7, 18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 110, .offset = {0, 22}, .shadow = {0, 22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 109, .offset = {-7, 18}, .shadow = {-7, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {11, 0}, .shadow = {11, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {21, 3}, .shadow = {21, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {26, 10}, .shadow = {26, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 111, .offset = {20, 18}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 110, .offset = {11, 19}, .shadow = {11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {13, -6}, .shadow = {13, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {20, -5}, .shadow = {20, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 112, .offset = {23, 0}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 111, .offset = {20, 4}, .shadow = {20, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {14, 7}, .shadow = {14, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {6, 5}, .shadow = {6, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {4, -17}, .shadow = {4, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {15, -22}, .shadow = {15, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 113, .offset = {21, -21}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 112, .offset = {24, -13}, .shadow = {24, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {19, -4}, .shadow = {19, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {9, 0}, .shadow = {9, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-7, -20}, .shadow = {-7, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 106, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 113, .offset = {7, -20}, .shadow = {7, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {1, -6}, .shadow = {1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-4, -17}, .shadow = {-4, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-15, -22}, .shadow = {-15, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 107, .offset = {-21, -21}, .shadow = {-21, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 108, .offset = {-24, -13}, .shadow = {-24, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {-19, -4}, .shadow = {-19, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-9, 0}, .shadow = {-9, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {-13, -6}, .shadow = {-13, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-20, -5}, .shadow = {-20, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 108, .offset = {-23, 0}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 109, .offset = {-20, 4}, .shadow = {-20, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-14, 7}, .shadow = {-14, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-6, 5}, .shadow = {-6, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-11, 0}, .shadow = {-11, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {-21, 3}, .shadow = {-21, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {-26, 10}, .shadow = {-26, 10} },
	{ .frames = 3, .unkFlags = 0, .poseId = 109, .offset = {-20, 18}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 110, .offset = {-11, 19}, .shadow = {-11, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 138, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 138, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 139, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 141, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 141, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 141, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 141, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 144, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 144, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 145, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 145, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sDecoyAnims_12_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sDecoyGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_1.4bpp.lz");
static const ax_sprite sDecoySprites1[] = {
	{sDecoyGfx1, ARRAY_COUNT(sDecoyGfx1)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_2.4bpp.lz");
static const ax_sprite sDecoySprites2[] = {
	{sDecoyGfx2, ARRAY_COUNT(sDecoyGfx2)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_3.4bpp.lz");
static const ax_sprite sDecoySprites3[] = {
	{sDecoyGfx3, ARRAY_COUNT(sDecoyGfx3)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_4.4bpp.lz");
static const ax_sprite sDecoySprites4[] = {
	{sDecoyGfx4, ARRAY_COUNT(sDecoyGfx4)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_5.4bpp.lz");
static const ax_sprite sDecoySprites5[] = {
	{sDecoyGfx5, ARRAY_COUNT(sDecoyGfx5)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_6.4bpp.lz");
static const ax_sprite sDecoySprites6[] = {
	{sDecoyGfx6, ARRAY_COUNT(sDecoyGfx6)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_7.4bpp.lz");
static const ax_sprite sDecoySprites7[] = {
	{sDecoyGfx7, ARRAY_COUNT(sDecoyGfx7)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_8.4bpp.lz");
static const ax_sprite sDecoySprites8[] = {
	{sDecoyGfx8, ARRAY_COUNT(sDecoyGfx8)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_9.4bpp.lz");
static const ax_sprite sDecoySprites9[] = {
	{sDecoyGfx9, ARRAY_COUNT(sDecoyGfx9)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_10.4bpp.lz");
static const ax_sprite sDecoySprites10[] = {
	{sDecoyGfx10, ARRAY_COUNT(sDecoyGfx10)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_11.4bpp.lz");
static const ax_sprite sDecoySprites11[] = {
	{sDecoyGfx11, ARRAY_COUNT(sDecoyGfx11)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_12.4bpp.lz");
static const ax_sprite sDecoySprites12[] = {
	{sDecoyGfx12, ARRAY_COUNT(sDecoyGfx12)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_13.4bpp.lz");
static const ax_sprite sDecoySprites13[] = {
	{sDecoyGfx13, ARRAY_COUNT(sDecoyGfx13)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_14.4bpp.lz");
static const ax_sprite sDecoySprites14[] = {
	{sDecoyGfx14, ARRAY_COUNT(sDecoyGfx14)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_15.4bpp.lz");
static const ax_sprite sDecoySprites15[] = {
	{sDecoyGfx15, ARRAY_COUNT(sDecoyGfx15)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_16.4bpp.lz");
static const ax_sprite sDecoySprites16[] = {
	{sDecoyGfx16, ARRAY_COUNT(sDecoyGfx16)}, 
	{NULL, 0}
};
static const u8 sDecoyGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/decoy/sprite_17.4bpp.lz");
static const ax_sprite sDecoySprites17[] = {
	{sDecoyGfx17, ARRAY_COUNT(sDecoyGfx17)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesDecoy[] = {
	sDecoyPose1,
	sDecoyPose2,
	sDecoyPose3,
	sDecoyPose4,
	sDecoyPose5,
	sDecoyPose6,
	sDecoyPose7,
	sDecoyPose8,
	sDecoyPose9,
	sDecoyPose10,
	sDecoyPose11,
	sDecoyPose12,
	sDecoyPose13,
	sDecoyPose14,
	sDecoyPose15,
	sDecoyPose16,
	sDecoyPose1,
	sDecoyPose2,
	sDecoyPose3,
	sDecoyPose4,
	sDecoyPose5,
	sDecoyPose6,
	sDecoyPose7,
	sDecoyPose8,
	sDecoyPose9,
	sDecoyPose10,
	sDecoyPose11,
	sDecoyPose12,
	sDecoyPose13,
	sDecoyPose14,
	sDecoyPose15,
	sDecoyPose16,
	sDecoyPose1,
	sDecoyPose2,
	sDecoyPose3,
	sDecoyPose4,
	sDecoyPose5,
	sDecoyPose6,
	sDecoyPose7,
	sDecoyPose8,
	sDecoyPose9,
	sDecoyPose10,
	sDecoyPose11,
	sDecoyPose12,
	sDecoyPose13,
	sDecoyPose14,
	sDecoyPose15,
	sDecoyPose16,
	sDecoyPose1,
	sDecoyPose2,
	sDecoyPose3,
	sDecoyPose4,
	sDecoyPose5,
	sDecoyPose6,
	sDecoyPose7,
	sDecoyPose8,
	sDecoyPose9,
	sDecoyPose10,
	sDecoyPose11,
	sDecoyPose12,
	sDecoyPose13,
	sDecoyPose14,
	sDecoyPose15,
	sDecoyPose16,
	sDecoyPose1,
	sDecoyPose2,
	sDecoyPose3,
	sDecoyPose4,
	sDecoyPose5,
	sDecoyPose6,
	sDecoyPose7,
	sDecoyPose8,
	sDecoyPose9,
	sDecoyPose10,
	sDecoyPose11,
	sDecoyPose12,
	sDecoyPose13,
	sDecoyPose14,
	sDecoyPose15,
	sDecoyPose16,
	sDecoyPose81,
	sDecoyPose82,
	sDecoyPose83,
	sDecoyPose84,
	sDecoyPose85,
	sDecoyPose86,
	sDecoyPose87,
	sDecoyPose88,
	sDecoyPose89,
	sDecoyPose90,
	sDecoyPose1,
	sDecoyPose2,
	sDecoyPose3,
	sDecoyPose4,
	sDecoyPose5,
	sDecoyPose6,
	sDecoyPose7,
	sDecoyPose8,
	sDecoyPose9,
	sDecoyPose10,
	sDecoyPose11,
	sDecoyPose12,
	sDecoyPose13,
	sDecoyPose14,
	sDecoyPose15,
	sDecoyPose16,
	sDecoyPose1,
	sDecoyPose2,
	sDecoyPose3,
	sDecoyPose4,
	sDecoyPose5,
	sDecoyPose6,
	sDecoyPose7,
	sDecoyPose8,
	sDecoyPose9,
	sDecoyPose10,
	sDecoyPose11,
	sDecoyPose12,
	sDecoyPose13,
	sDecoyPose14,
	sDecoyPose15,
	sDecoyPose16,
	sDecoyPose1,
	sDecoyPose2,
	sDecoyPose3,
	sDecoyPose4,
	sDecoyPose5,
	sDecoyPose6,
	sDecoyPose7,
	sDecoyPose8,
	sDecoyPose9,
	sDecoyPose10,
	sDecoyPose11,
	sDecoyPose12,
	sDecoyPose13,
	sDecoyPose14,
	sDecoyPose15,
	sDecoyPose16,
	sDecoyPose1,
	sDecoyPose2,
	sDecoyPose3,
	sDecoyPose4,
	sDecoyPose5,
	sDecoyPose6,
	sDecoyPose7,
	sDecoyPose8,
	sDecoyPose9,
	sDecoyPose10,
	sDecoyPose11,
	sDecoyPose12,
	sDecoyPose13,
	sDecoyPose14,
	sDecoyPose15,
	sDecoyPose16,
	sDecoyPose1,
	sDecoyPose2,
	sDecoyPose3,
	sDecoyPose4,
	sDecoyPose5,
	sDecoyPose6,
	sDecoyPose7,
	sDecoyPose8,
	sDecoyPose9,
	sDecoyPose10,
	sDecoyPose11,
	sDecoyPose12,
	sDecoyPose13,
	sDecoyPose14,
	sDecoyPose15,
	sDecoyPose16,
	sDecoyPose1,
	sDecoyPose2,
	sDecoyPose3,
	sDecoyPose4,
	sDecoyPose5,
	sDecoyPose6,
	sDecoyPose7,
	sDecoyPose8,
	sDecoyPose9,
	sDecoyPose10,
	sDecoyPose11,
	sDecoyPose12,
	sDecoyPose13,
	sDecoyPose14,
	sDecoyPose15,
	sDecoyPose16,
};

static const struct PositionSets sAxPositionsDecoy[] = {
	[0] = { .set = { {-1, -6}, {-7, -5}, {7, -5}, {0, -5} } },
	[1] = { .set = { {5, -7}, {9, -5}, {-4, -4}, {0, -6} } },
	[2] = { .set = { {8, -9}, {7, -5}, {5, -4}, {-1, -6} } },
	[3] = { .set = { {6, -12}, {-1, -10}, {8, -7}, {0, -6} } },
	[4] = { .set = { {0, -13}, {7, -9}, {-8, -9}, {-1, -6} } },
	[5] = { .set = { {-6, -12}, {1, -10}, {-8, -7}, {0, -6} } },
	[6] = { .set = { {-9, -9}, {-8, -5}, {-6, -4}, {0, -6} } },
	[7] = { .set = { {-6, -7}, {-10, -5}, {3, -4}, {-1, -6} } },
	[8] = { .set = { {0, -5}, {-9, -4}, {7, -4}, {0, -4} } },
	[9] = { .set = { {5, -6}, {10, -4}, {-5, -3}, {0, -5} } },
	[10] = { .set = { {9, -7}, {8, -4}, {6, -3}, {-1, -5} } },
	[11] = { .set = { {6, -11}, {-2, -8}, {9, -5}, {-1, -5} } },
	[12] = { .set = { {0, -10}, {8, -8}, {-9, -8}, {0, -5} } },
	[13] = { .set = { {-6, -11}, {2, -8}, {-9, -5}, {1, -5} } },
	[14] = { .set = { {-10, -7}, {-9, -4}, {-7, -3}, {0, -5} } },
	[15] = { .set = { {-6, -6}, {-11, -4}, {4, -3}, {-1, -5} } },
	[16] = { .set = { {-1, -6}, {-7, -5}, {7, -5}, {0, -5} } },
	[17] = { .set = { {5, -7}, {9, -5}, {-4, -4}, {0, -6} } },
	[18] = { .set = { {8, -9}, {7, -5}, {5, -4}, {-1, -6} } },
	[19] = { .set = { {6, -12}, {-1, -10}, {8, -7}, {0, -6} } },
	[20] = { .set = { {0, -13}, {7, -9}, {-8, -9}, {-1, -6} } },
	[21] = { .set = { {-6, -12}, {1, -10}, {-8, -7}, {0, -6} } },
	[22] = { .set = { {-9, -9}, {-8, -5}, {-6, -4}, {0, -6} } },
	[23] = { .set = { {-6, -7}, {-10, -5}, {3, -4}, {-1, -6} } },
	[24] = { .set = { {0, -5}, {-9, -4}, {7, -4}, {0, -4} } },
	[25] = { .set = { {5, -6}, {10, -4}, {-5, -3}, {0, -5} } },
	[26] = { .set = { {9, -7}, {8, -4}, {6, -3}, {-1, -5} } },
	[27] = { .set = { {6, -11}, {-2, -8}, {9, -5}, {-1, -5} } },
	[28] = { .set = { {0, -10}, {8, -8}, {-9, -8}, {0, -5} } },
	[29] = { .set = { {-6, -11}, {2, -8}, {-9, -5}, {1, -5} } },
	[30] = { .set = { {-10, -7}, {-9, -4}, {-7, -3}, {0, -5} } },
	[31] = { .set = { {-6, -6}, {-11, -4}, {4, -3}, {-1, -5} } },
	[32] = { .set = { {-1, -6}, {-7, -5}, {7, -5}, {0, -5} } },
	[33] = { .set = { {5, -7}, {9, -5}, {-4, -4}, {0, -6} } },
	[34] = { .set = { {8, -9}, {7, -5}, {5, -4}, {-1, -6} } },
	[35] = { .set = { {6, -12}, {-1, -10}, {8, -7}, {0, -6} } },
	[36] = { .set = { {0, -13}, {7, -9}, {-8, -9}, {-1, -6} } },
	[37] = { .set = { {-6, -12}, {1, -10}, {-8, -7}, {0, -6} } },
	[38] = { .set = { {-9, -9}, {-8, -5}, {-6, -4}, {0, -6} } },
	[39] = { .set = { {-6, -7}, {-10, -5}, {3, -4}, {-1, -6} } },
	[40] = { .set = { {0, -5}, {-9, -4}, {7, -4}, {0, -4} } },
	[41] = { .set = { {5, -6}, {10, -4}, {-5, -3}, {0, -5} } },
	[42] = { .set = { {9, -7}, {8, -4}, {6, -3}, {-1, -5} } },
	[43] = { .set = { {6, -11}, {-2, -8}, {9, -5}, {-1, -5} } },
	[44] = { .set = { {0, -10}, {8, -8}, {-9, -8}, {0, -5} } },
	[45] = { .set = { {-6, -11}, {2, -8}, {-9, -5}, {1, -5} } },
	[46] = { .set = { {-10, -7}, {-9, -4}, {-7, -3}, {0, -5} } },
	[47] = { .set = { {-6, -6}, {-11, -4}, {4, -3}, {-1, -5} } },
	[48] = { .set = { {-1, -6}, {-7, -5}, {7, -5}, {0, -5} } },
	[49] = { .set = { {5, -7}, {9, -5}, {-4, -4}, {0, -6} } },
	[50] = { .set = { {8, -9}, {7, -5}, {5, -4}, {-1, -6} } },
	[51] = { .set = { {6, -12}, {-1, -10}, {8, -7}, {0, -6} } },
	[52] = { .set = { {0, -13}, {7, -9}, {-8, -9}, {-1, -6} } },
	[53] = { .set = { {-6, -12}, {1, -10}, {-8, -7}, {0, -6} } },
	[54] = { .set = { {-9, -9}, {-8, -5}, {-6, -4}, {0, -6} } },
	[55] = { .set = { {-6, -7}, {-10, -5}, {3, -4}, {-1, -6} } },
	[56] = { .set = { {0, -5}, {-9, -4}, {7, -4}, {0, -4} } },
	[57] = { .set = { {5, -6}, {10, -4}, {-5, -3}, {0, -5} } },
	[58] = { .set = { {9, -7}, {8, -4}, {6, -3}, {-1, -5} } },
	[59] = { .set = { {6, -11}, {-2, -8}, {9, -5}, {-1, -5} } },
	[60] = { .set = { {0, -10}, {8, -8}, {-9, -8}, {0, -5} } },
	[61] = { .set = { {-6, -11}, {2, -8}, {-9, -5}, {1, -5} } },
	[62] = { .set = { {-10, -7}, {-9, -4}, {-7, -3}, {0, -5} } },
	[63] = { .set = { {-6, -6}, {-11, -4}, {4, -3}, {-1, -5} } },
	[64] = { .set = { {-1, -6}, {-7, -5}, {7, -5}, {0, -5} } },
	[65] = { .set = { {5, -7}, {9, -5}, {-4, -4}, {0, -6} } },
	[66] = { .set = { {8, -9}, {7, -5}, {5, -4}, {-1, -6} } },
	[67] = { .set = { {6, -12}, {-1, -10}, {8, -7}, {0, -6} } },
	[68] = { .set = { {0, -13}, {7, -9}, {-8, -9}, {-1, -6} } },
	[69] = { .set = { {-6, -12}, {1, -10}, {-8, -7}, {0, -6} } },
	[70] = { .set = { {-9, -9}, {-8, -5}, {-6, -4}, {0, -6} } },
	[71] = { .set = { {-6, -7}, {-10, -5}, {3, -4}, {-1, -6} } },
	[72] = { .set = { {0, -5}, {-9, -4}, {7, -4}, {0, -4} } },
	[73] = { .set = { {5, -6}, {10, -4}, {-5, -3}, {0, -5} } },
	[74] = { .set = { {9, -7}, {8, -4}, {6, -3}, {-1, -5} } },
	[75] = { .set = { {6, -11}, {-2, -8}, {9, -5}, {-1, -5} } },
	[76] = { .set = { {0, -10}, {8, -8}, {-9, -8}, {0, -5} } },
	[77] = { .set = { {-6, -11}, {2, -8}, {-9, -5}, {1, -5} } },
	[78] = { .set = { {-10, -7}, {-9, -4}, {-7, -3}, {0, -5} } },
	[79] = { .set = { {-6, -6}, {-11, -4}, {4, -3}, {-1, -5} } },
	[80] = { .set = { {-10, 1}, {-9, -3}, {2, 4}, {0, -5} } },
	[81] = { .set = { {-10, 1}, {-9, -2}, {2, 4}, {1, -5} } },
	[82] = { .set = { {0, 2}, {-9, 2}, {9, 2}, {-1, -6} } },
	[83] = { .set = { {9, 1}, {8, -3}, {-3, 4}, {0, -4} } },
	[84] = { .set = { {11, -2}, {5, -7}, {3, 2}, {0, -4} } },
	[85] = { .set = { {7, -8}, {-2, -7}, {8, -2}, {-2, -4} } },
	[86] = { .set = { {0, -8}, {10, -4}, {-9, -5}, {0, -3} } },
	[87] = { .set = { {-8, -8}, {1, -7}, {-9, -2}, {1, -4} } },
	[88] = { .set = { {-12, -2}, {-6, -7}, {-4, 2}, {-1, -4} } },
	[89] = { .set = { {-9, 1}, {-8, -3}, {3, 4}, {0, -4} } },
	[90] = { .set = { {-1, -6}, {-7, -5}, {7, -5}, {0, -5} } },
	[91] = { .set = { {5, -7}, {9, -5}, {-4, -4}, {0, -6} } },
	[92] = { .set = { {8, -9}, {7, -5}, {5, -4}, {-1, -6} } },
	[93] = { .set = { {6, -12}, {-1, -10}, {8, -7}, {0, -6} } },
	[94] = { .set = { {0, -13}, {7, -9}, {-8, -9}, {-1, -6} } },
	[95] = { .set = { {-6, -12}, {1, -10}, {-8, -7}, {0, -6} } },
	[96] = { .set = { {-9, -9}, {-8, -5}, {-6, -4}, {0, -6} } },
	[97] = { .set = { {-6, -7}, {-10, -5}, {3, -4}, {-1, -6} } },
	[98] = { .set = { {0, -5}, {-9, -4}, {7, -4}, {0, -4} } },
	[99] = { .set = { {5, -6}, {10, -4}, {-5, -3}, {0, -5} } },
	[100] = { .set = { {9, -7}, {8, -4}, {6, -3}, {-1, -5} } },
	[101] = { .set = { {6, -11}, {-2, -8}, {9, -5}, {-1, -5} } },
	[102] = { .set = { {0, -10}, {8, -8}, {-9, -8}, {0, -5} } },
	[103] = { .set = { {-6, -11}, {2, -8}, {-9, -5}, {1, -5} } },
	[104] = { .set = { {-10, -7}, {-9, -4}, {-7, -3}, {0, -5} } },
	[105] = { .set = { {-6, -6}, {-11, -4}, {4, -3}, {-1, -5} } },
	[106] = { .set = { {-1, -6}, {-7, -5}, {7, -5}, {0, -5} } },
	[107] = { .set = { {5, -7}, {9, -5}, {-4, -4}, {0, -6} } },
	[108] = { .set = { {8, -9}, {7, -5}, {5, -4}, {-1, -6} } },
	[109] = { .set = { {6, -12}, {-1, -10}, {8, -7}, {0, -6} } },
	[110] = { .set = { {0, -13}, {7, -9}, {-8, -9}, {-1, -6} } },
	[111] = { .set = { {-6, -12}, {1, -10}, {-8, -7}, {0, -6} } },
	[112] = { .set = { {-9, -9}, {-8, -5}, {-6, -4}, {0, -6} } },
	[113] = { .set = { {-6, -7}, {-10, -5}, {3, -4}, {-1, -6} } },
	[114] = { .set = { {0, -5}, {-9, -4}, {7, -4}, {0, -4} } },
	[115] = { .set = { {5, -6}, {10, -4}, {-5, -3}, {0, -5} } },
	[116] = { .set = { {9, -7}, {8, -4}, {6, -3}, {-1, -5} } },
	[117] = { .set = { {6, -11}, {-2, -8}, {9, -5}, {-1, -5} } },
	[118] = { .set = { {0, -10}, {8, -8}, {-9, -8}, {0, -5} } },
	[119] = { .set = { {-6, -11}, {2, -8}, {-9, -5}, {1, -5} } },
	[120] = { .set = { {-10, -7}, {-9, -4}, {-7, -3}, {0, -5} } },
	[121] = { .set = { {-6, -6}, {-11, -4}, {4, -3}, {-1, -5} } },
	[122] = { .set = { {-1, -6}, {-7, -5}, {7, -5}, {0, -5} } },
	[123] = { .set = { {5, -7}, {9, -5}, {-4, -4}, {0, -6} } },
	[124] = { .set = { {8, -9}, {7, -5}, {5, -4}, {-1, -6} } },
	[125] = { .set = { {6, -12}, {-1, -10}, {8, -7}, {0, -6} } },
	[126] = { .set = { {0, -13}, {7, -9}, {-8, -9}, {-1, -6} } },
	[127] = { .set = { {-6, -12}, {1, -10}, {-8, -7}, {0, -6} } },
	[128] = { .set = { {-9, -9}, {-8, -5}, {-6, -4}, {0, -6} } },
	[129] = { .set = { {-6, -7}, {-10, -5}, {3, -4}, {-1, -6} } },
	[130] = { .set = { {0, -5}, {-9, -4}, {7, -4}, {0, -4} } },
	[131] = { .set = { {5, -6}, {10, -4}, {-5, -3}, {0, -5} } },
	[132] = { .set = { {9, -7}, {8, -4}, {6, -3}, {-1, -5} } },
	[133] = { .set = { {6, -11}, {-2, -8}, {9, -5}, {-1, -5} } },
	[134] = { .set = { {0, -10}, {8, -8}, {-9, -8}, {0, -5} } },
	[135] = { .set = { {-6, -11}, {2, -8}, {-9, -5}, {1, -5} } },
	[136] = { .set = { {-10, -7}, {-9, -4}, {-7, -3}, {0, -5} } },
	[137] = { .set = { {-6, -6}, {-11, -4}, {4, -3}, {-1, -5} } },
	[138] = { .set = { {-1, -6}, {-7, -5}, {7, -5}, {0, -5} } },
	[139] = { .set = { {5, -7}, {9, -5}, {-4, -4}, {0, -6} } },
	[140] = { .set = { {8, -9}, {7, -5}, {5, -4}, {-1, -6} } },
	[141] = { .set = { {6, -12}, {-1, -10}, {8, -7}, {0, -6} } },
	[142] = { .set = { {0, -13}, {7, -9}, {-8, -9}, {-1, -6} } },
	[143] = { .set = { {-6, -12}, {1, -10}, {-8, -7}, {0, -6} } },
	[144] = { .set = { {-9, -9}, {-8, -5}, {-6, -4}, {0, -6} } },
	[145] = { .set = { {-6, -7}, {-10, -5}, {3, -4}, {-1, -6} } },
	[146] = { .set = { {0, -5}, {-9, -4}, {7, -4}, {0, -4} } },
	[147] = { .set = { {5, -6}, {10, -4}, {-5, -3}, {0, -5} } },
	[148] = { .set = { {9, -7}, {8, -4}, {6, -3}, {-1, -5} } },
	[149] = { .set = { {6, -11}, {-2, -8}, {9, -5}, {-1, -5} } },
	[150] = { .set = { {0, -10}, {8, -8}, {-9, -8}, {0, -5} } },
	[151] = { .set = { {-6, -11}, {2, -8}, {-9, -5}, {1, -5} } },
	[152] = { .set = { {-10, -7}, {-9, -4}, {-7, -3}, {0, -5} } },
	[153] = { .set = { {-6, -6}, {-11, -4}, {4, -3}, {-1, -5} } },
	[154] = { .set = { {-1, -6}, {-7, -5}, {7, -5}, {0, -5} } },
	[155] = { .set = { {5, -7}, {9, -5}, {-4, -4}, {0, -6} } },
	[156] = { .set = { {8, -9}, {7, -5}, {5, -4}, {-1, -6} } },
	[157] = { .set = { {6, -12}, {-1, -10}, {8, -7}, {0, -6} } },
	[158] = { .set = { {0, -13}, {7, -9}, {-8, -9}, {-1, -6} } },
	[159] = { .set = { {-6, -12}, {1, -10}, {-8, -7}, {0, -6} } },
	[160] = { .set = { {-9, -9}, {-8, -5}, {-6, -4}, {0, -6} } },
	[161] = { .set = { {-6, -7}, {-10, -5}, {3, -4}, {-1, -6} } },
	[162] = { .set = { {0, -5}, {-9, -4}, {7, -4}, {0, -4} } },
	[163] = { .set = { {5, -6}, {10, -4}, {-5, -3}, {0, -5} } },
	[164] = { .set = { {9, -7}, {8, -4}, {6, -3}, {-1, -5} } },
	[165] = { .set = { {6, -11}, {-2, -8}, {9, -5}, {-1, -5} } },
	[166] = { .set = { {0, -10}, {8, -8}, {-9, -8}, {0, -5} } },
	[167] = { .set = { {-6, -11}, {2, -8}, {-9, -5}, {1, -5} } },
	[168] = { .set = { {-10, -7}, {-9, -4}, {-7, -3}, {0, -5} } },
	[169] = { .set = { {-6, -6}, {-11, -4}, {4, -3}, {-1, -5} } },
	[170] = { .set = { {-1, -6}, {-7, -5}, {7, -5}, {0, -5} } },
	[171] = { .set = { {5, -7}, {9, -5}, {-4, -4}, {0, -6} } },
	[172] = { .set = { {8, -9}, {7, -5}, {5, -4}, {-1, -6} } },
	[173] = { .set = { {6, -12}, {-1, -10}, {8, -7}, {0, -6} } },
	[174] = { .set = { {0, -13}, {7, -9}, {-8, -9}, {-1, -6} } },
	[175] = { .set = { {-6, -12}, {1, -10}, {-8, -7}, {0, -6} } },
	[176] = { .set = { {-9, -9}, {-8, -5}, {-6, -4}, {0, -6} } },
	[177] = { .set = { {-6, -7}, {-10, -5}, {3, -4}, {-1, -6} } },
	[178] = { .set = { {0, -5}, {-9, -4}, {7, -4}, {0, -4} } },
	[179] = { .set = { {5, -6}, {10, -4}, {-5, -3}, {0, -5} } },
	[180] = { .set = { {9, -7}, {8, -4}, {6, -3}, {-1, -5} } },
	[181] = { .set = { {6, -11}, {-2, -8}, {9, -5}, {-1, -5} } },
	[182] = { .set = { {0, -10}, {8, -8}, {-9, -8}, {0, -5} } },
	[183] = { .set = { {-6, -11}, {2, -8}, {-9, -5}, {1, -5} } },
	[184] = { .set = { {-10, -7}, {-9, -4}, {-7, -3}, {0, -5} } },
	[185] = { .set = { {-6, -6}, {-11, -4}, {4, -3}, {-1, -5} } },
};

static const ax_anim *const sDecoyAnimTable1[] = {
	sDecoyAnims_1_1,
	sDecoyAnims_1_2,
	sDecoyAnims_1_3,
	sDecoyAnims_1_4,
	sDecoyAnims_1_5,
	sDecoyAnims_1_6,
	sDecoyAnims_1_7,
	sDecoyAnims_1_8,
};

static const ax_anim *const sDecoyAnimTable2[] = {
	sDecoyAnims_2_1,
	sDecoyAnims_2_2,
	sDecoyAnims_2_3,
	sDecoyAnims_2_4,
	sDecoyAnims_2_5,
	sDecoyAnims_2_6,
	sDecoyAnims_2_7,
	sDecoyAnims_2_8,
};

static const ax_anim *const sDecoyAnimTable3[] = {
	sDecoyAnims_3_1,
	sDecoyAnims_3_2,
	sDecoyAnims_3_3,
	sDecoyAnims_3_4,
	sDecoyAnims_3_5,
	sDecoyAnims_3_6,
	sDecoyAnims_3_7,
	sDecoyAnims_3_8,
};

static const ax_anim *const sDecoyAnimTable4[] = {
	sDecoyAnims_4_1,
	sDecoyAnims_4_2,
	sDecoyAnims_4_3,
	sDecoyAnims_4_4,
	sDecoyAnims_4_5,
	sDecoyAnims_4_6,
	sDecoyAnims_4_7,
	sDecoyAnims_4_8,
};

static const ax_anim *const sDecoyAnimTable5[] = {
	sDecoyAnims_5_1,
	sDecoyAnims_5_2,
	sDecoyAnims_5_3,
	sDecoyAnims_5_4,
	sDecoyAnims_5_5,
	sDecoyAnims_5_6,
	sDecoyAnims_5_7,
	sDecoyAnims_5_8,
};

static const ax_anim *const sDecoyAnimTable6[] = {
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
	gAxSharedAnim_02404,
};

static const ax_anim *const sDecoyAnimTable7[] = {
	gAxSharedAnim_02162,
	gAxSharedAnim_02168,
	gAxSharedAnim_02176,
	gAxSharedAnim_02190,
	gAxSharedAnim_02201,
	gAxSharedAnim_02213,
	gAxSharedAnim_02221,
	gAxSharedAnim_02231,
};

static const ax_anim *const sDecoyAnimTable8[] = {
	sDecoyAnims_8_1,
	sDecoyAnims_8_2,
	sDecoyAnims_8_3,
	sDecoyAnims_8_4,
	sDecoyAnims_8_5,
	sDecoyAnims_8_6,
	sDecoyAnims_8_7,
	sDecoyAnims_8_8,
};

static const ax_anim *const sDecoyAnimTable9[] = {
	sDecoyAnims_9_1,
	sDecoyAnims_9_2,
	sDecoyAnims_9_3,
	sDecoyAnims_9_4,
	sDecoyAnims_9_5,
	sDecoyAnims_9_6,
	sDecoyAnims_9_7,
	sDecoyAnims_9_8,
};

static const ax_anim *const sDecoyAnimTable10[] = {
	gAxSharedAnim_00335,
	gAxSharedAnim_00343,
	gAxSharedAnim_00353,
	gAxSharedAnim_00359,
	gAxSharedAnim_00365,
	gAxSharedAnim_00374,
	gAxSharedAnim_00379,
	gAxSharedAnim_00388,
};

static const ax_anim *const sDecoyAnimTable11[] = {
	sDecoyAnims_11_1,
	sDecoyAnims_11_2,
	sDecoyAnims_11_3,
	sDecoyAnims_11_4,
	sDecoyAnims_11_5,
	sDecoyAnims_11_6,
	sDecoyAnims_11_7,
	sDecoyAnims_11_8,
};

static const ax_anim *const sDecoyAnimTable12[] = {
	gAxSharedAnim_00613,
	sDecoyAnims_12_2,
	gAxSharedAnim_00627,
	gAxSharedAnim_00634,
	gAxSharedAnim_00655,
	gAxSharedAnim_00662,
	gAxSharedAnim_00669,
	gAxSharedAnim_00681,
};

static const ax_anim *const sDecoyAnimTable13[] = {
	gAxSharedAnim_00803,
	gAxSharedAnim_00816,
	gAxSharedAnim_00830,
	gAxSharedAnim_00841,
	gAxSharedAnim_00851,
	gAxSharedAnim_00864,
	gAxSharedAnim_00881,
	gAxSharedAnim_00888,
};

static const ax_anim *const *const sAxAnimationsDecoy[] = {
	sDecoyAnimTable1,
	sDecoyAnimTable2,
	sDecoyAnimTable3,
	sDecoyAnimTable4,
	sDecoyAnimTable5,
	sDecoyAnimTable6,
	sDecoyAnimTable7,
	sDecoyAnimTable8,
	sDecoyAnimTable9,
	sDecoyAnimTable10,
	sDecoyAnimTable11,
	sDecoyAnimTable12,
	sDecoyAnimTable13,
};

static const ax_sprite *const sAxSpritesDecoy[] = {
	sDecoySprites1,
	sDecoySprites2,
	sDecoySprites3,
	sDecoySprites4,
	sDecoySprites5,
	sDecoySprites6,
	sDecoySprites7,
	sDecoySprites8,
	sDecoySprites9,
	sDecoySprites10,
	sDecoySprites11,
	sDecoySprites12,
	sDecoySprites13,
	sDecoySprites14,
	sDecoySprites15,
	sDecoySprites16,
	sDecoySprites17,
};

static const axmain sAxMainDecoy = {
	.poses = sAxPosesDecoy,
	.animations = sAxAnimationsDecoy,
	.animCount = ARRAY_COUNT(sAxAnimationsDecoy),
	.spriteData = sAxSpritesDecoy,
	.positions = sAxPositionsDecoy,
};
