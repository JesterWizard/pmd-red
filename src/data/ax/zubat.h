/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainZubat;
const SiroArchive gAxZubat = {"SIRO", &sAxMainZubat};

static const ax_pose sZubatPose1[] = {
	AX_POSE(0, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose2[] = {
	AX_POSE(1, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose3[] = {
	AX_POSE(2, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose4[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose5[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose6[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose7[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose8[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose9[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose10[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose11[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose12[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose13[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose14[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose15[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose16[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose17[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose18[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose19[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose20[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose21[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose22[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose23[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose24[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose121[] = {
	AX_POSE(15, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose122[] = {
	AX_POSE(16, OAM1(241, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose123[] = {
	AX_POSE(17, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose124[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose125[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose126[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose127[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose128[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose129[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_pose sZubatPose130[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 7)),
	AX_POSE_TERMINATOR
};
static const ax_anim sZubatAnims_1_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_1_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {2, -1}, .shadow = {2, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {1, -3}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {2, -1}, .shadow = {2, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_1_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {2, -1}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {1, -2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {1, -2}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_1_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {2, -2}, .shadow = {2, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {2, -1}, .shadow = {2, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {1, -3}, .shadow = {1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {2, -2}, .shadow = {2, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_1_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_1_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {-2, -2}, .shadow = {-2, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {-2, -1}, .shadow = {-2, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {-1, -3}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {-2, -2}, .shadow = {-2, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_1_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {-2, -1}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {-1, -2}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, -1}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_1_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {-2, -1}, .shadow = {-2, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {-1, -3}, .shadow = {-1, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {-2, -1}, .shadow = {-2, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {2, -1}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {1, -3}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {2, -1}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 100, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {2, -1}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {1, -3}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {2, -1}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {2, -1}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {1, -2}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {1, -2}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 103, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {2, -1}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 102, .offset = {1, -2}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {2, -2}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {2, -1}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {1, -3}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {2, -2}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 106, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {2, -2}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {2, -1}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 105, .offset = {1, -3}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {2, -2}, .shadow = {2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 109, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 108, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-2, -2}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-2, -1}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {-1, -3}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-2, -2}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 112, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-2, -2}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-2, -1}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {-1, -3}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {-2, -2}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-2, -1}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {-1, -2}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {1, -1}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 115, .offset = {-1, -1}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {-2, -1}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 114, .offset = {-1, -2}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {1, -1}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-2, -1}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {-1, -3}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-2, -1}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 118, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-2, -1}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 117, .offset = {-1, -3}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {-2, -1}, .shadow = {-2, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_8_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 132, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 132, .offset = {0, 2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 132, .offset = {0, 3}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 130, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 132, .offset = {0, 1}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 131, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_8_2[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {0, 2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {0, 3}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 133, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 135, .offset = {0, 1}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 134, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_8_3[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 138, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 138, .offset = {0, 2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 138, .offset = {0, 3}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 136, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 138, .offset = {0, 1}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 137, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_8_4[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 141, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 141, .offset = {0, 2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 141, .offset = {0, 3}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 139, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 140, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 141, .offset = {0, 1}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 140, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_8_5[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 144, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 144, .offset = {0, 2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 144, .offset = {0, 3}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 142, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 144, .offset = {0, 1}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 143, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_8_6[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 147, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 147, .offset = {0, 2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 147, .offset = {0, 3}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 145, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 147, .offset = {0, 1}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 146, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_8_7[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 150, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 150, .offset = {0, 2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 150, .offset = {0, 3}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 148, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 150, .offset = {0, 1}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 149, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_8_8[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 153, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 153, .offset = {0, 2}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 153, .offset = {0, 3}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 151, .offset = {0, 4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {0, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 153, .offset = {0, 1}, .shadow = {-1, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 152, .offset = {0, -1}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {14, 3}, .shadow = {14, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {19, 10}, .shadow = {19, 8} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {19, 26}, .shadow = {19, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {11, 28}, .shadow = {11, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {3, 19}, .shadow = {3, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {16, -2}, .shadow = {16, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {19, 4}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 157, .offset = {18, 8}, .shadow = {18, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {12, 10}, .shadow = {12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {4, 5}, .shadow = {4, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-16, -2}, .shadow = {-16, -3} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {-19, 4}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-18, 8}, .shadow = {-18, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {-12, 10}, .shadow = {-12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {-4, 5}, .shadow = {-4, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-14, 3}, .shadow = {-14, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-19, 10}, .shadow = {-19, 8} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {-19, 26}, .shadow = {-19, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {-11, 28}, .shadow = {-11, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {-3, 19}, .shadow = {-3, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 171, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 170, .offset = {0, 6}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 173, .offset = {0, 6}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 177, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 178, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 176, .offset = {0, 6}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 180, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 180, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 180, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 181, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 181, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 181, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 179, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 183, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 182, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 182, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 186, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -8}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 185, .offset = {0, 7}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 189, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 188, .offset = {0, 6}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sZubatAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 192, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 192, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, -9}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 191, .offset = {0, 6}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sZubatGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_1.4bpp.lz");
static const ax_sprite sZubatSprites1[] = {
	{sZubatGfx1, ARRAY_COUNT(sZubatGfx1)}, 
	{NULL, 0}
};
static const u8 sZubatGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_2.4bpp.lz");
static const ax_sprite sZubatSprites2[] = {
	{sZubatGfx2, ARRAY_COUNT(sZubatGfx2)}, 
	{NULL, 0}
};
static const u8 sZubatGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_3.4bpp.lz");
static const ax_sprite sZubatSprites3[] = {
	{sZubatGfx3, ARRAY_COUNT(sZubatGfx3)}, 
	{NULL, 0}
};
static const u8 sZubatGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_4.4bpp.lz");
static const ax_sprite sZubatSprites4[] = {
	{sZubatGfx4, ARRAY_COUNT(sZubatGfx4)}, 
	{NULL, 0}
};
static const u8 sZubatGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_5.4bpp.lz");
static const ax_sprite sZubatSprites5[] = {
	{sZubatGfx5, ARRAY_COUNT(sZubatGfx5)}, 
	{NULL, 0}
};
static const u8 sZubatGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_6.4bpp.lz");
static const ax_sprite sZubatSprites6[] = {
	{sZubatGfx6, ARRAY_COUNT(sZubatGfx6)}, 
	{NULL, 0}
};
static const u8 sZubatGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_7.4bpp.lz");
static const ax_sprite sZubatSprites7[] = {
	{sZubatGfx7, ARRAY_COUNT(sZubatGfx7)}, 
	{NULL, 0}
};
static const u8 sZubatGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_8.4bpp.lz");
static const ax_sprite sZubatSprites8[] = {
	{sZubatGfx8, ARRAY_COUNT(sZubatGfx8)}, 
	{NULL, 0}
};
static const u8 sZubatGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_9.4bpp.lz");
static const ax_sprite sZubatSprites9[] = {
	{sZubatGfx9, ARRAY_COUNT(sZubatGfx9)}, 
	{NULL, 0}
};
static const u8 sZubatGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_10.4bpp.lz");
static const ax_sprite sZubatSprites10[] = {
	{sZubatGfx10, ARRAY_COUNT(sZubatGfx10)}, 
	{NULL, 0}
};
static const u8 sZubatGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_11.4bpp.lz");
static const ax_sprite sZubatSprites11[] = {
	{sZubatGfx11, ARRAY_COUNT(sZubatGfx11)}, 
	{NULL, 0}
};
static const u8 sZubatGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_12.4bpp.lz");
static const ax_sprite sZubatSprites12[] = {
	{sZubatGfx12, ARRAY_COUNT(sZubatGfx12)}, 
	{NULL, 0}
};
static const u8 sZubatGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_13.4bpp.lz");
static const ax_sprite sZubatSprites13[] = {
	{sZubatGfx13, ARRAY_COUNT(sZubatGfx13)}, 
	{NULL, 0}
};
static const u8 sZubatGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_14.4bpp.lz");
static const ax_sprite sZubatSprites14[] = {
	{sZubatGfx14, ARRAY_COUNT(sZubatGfx14)}, 
	{NULL, 0}
};
static const u8 sZubatGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_15.4bpp.lz");
static const ax_sprite sZubatSprites15[] = {
	{sZubatGfx15, ARRAY_COUNT(sZubatGfx15)}, 
	{NULL, 0}
};
static const u8 sZubatGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_16.4bpp.lz");
static const ax_sprite sZubatSprites16[] = {
	{sZubatGfx16, ARRAY_COUNT(sZubatGfx16)}, 
	{NULL, 0}
};
static const u8 sZubatGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_17.4bpp.lz");
static const ax_sprite sZubatSprites17[] = {
	{sZubatGfx17, ARRAY_COUNT(sZubatGfx17)}, 
	{NULL, 0}
};
static const u8 sZubatGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_18.4bpp.lz");
static const ax_sprite sZubatSprites18[] = {
	{sZubatGfx18, ARRAY_COUNT(sZubatGfx18)}, 
	{NULL, 0}
};
static const u8 sZubatGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_19.4bpp.lz");
static const ax_sprite sZubatSprites19[] = {
	{sZubatGfx19, ARRAY_COUNT(sZubatGfx19)}, 
	{NULL, 0}
};
static const u8 sZubatGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_20.4bpp.lz");
static const ax_sprite sZubatSprites20[] = {
	{sZubatGfx20, ARRAY_COUNT(sZubatGfx20)}, 
	{NULL, 0}
};
static const u8 sZubatGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_21.4bpp.lz");
static const ax_sprite sZubatSprites21[] = {
	{sZubatGfx21, ARRAY_COUNT(sZubatGfx21)}, 
	{NULL, 0}
};
static const u8 sZubatGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/zubat/sprite_22.4bpp.lz");
static const ax_sprite sZubatSprites22[] = {
	{sZubatGfx22, ARRAY_COUNT(sZubatGfx22)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesZubat[] = {
	sZubatPose1,
	sZubatPose2,
	sZubatPose3,
	sZubatPose4,
	sZubatPose5,
	sZubatPose6,
	sZubatPose7,
	sZubatPose8,
	sZubatPose9,
	sZubatPose10,
	sZubatPose11,
	sZubatPose12,
	sZubatPose13,
	sZubatPose14,
	sZubatPose15,
	sZubatPose16,
	sZubatPose17,
	sZubatPose18,
	sZubatPose19,
	sZubatPose20,
	sZubatPose21,
	sZubatPose22,
	sZubatPose23,
	sZubatPose24,
	sZubatPose1,
	sZubatPose2,
	sZubatPose3,
	sZubatPose4,
	sZubatPose5,
	sZubatPose6,
	sZubatPose7,
	sZubatPose8,
	sZubatPose9,
	sZubatPose10,
	sZubatPose11,
	sZubatPose12,
	sZubatPose13,
	sZubatPose14,
	sZubatPose15,
	sZubatPose16,
	sZubatPose17,
	sZubatPose18,
	sZubatPose19,
	sZubatPose20,
	sZubatPose21,
	sZubatPose22,
	sZubatPose23,
	sZubatPose24,
	sZubatPose1,
	sZubatPose2,
	sZubatPose3,
	sZubatPose4,
	sZubatPose5,
	sZubatPose6,
	sZubatPose7,
	sZubatPose8,
	sZubatPose9,
	sZubatPose10,
	sZubatPose11,
	sZubatPose12,
	sZubatPose13,
	sZubatPose14,
	sZubatPose15,
	sZubatPose16,
	sZubatPose17,
	sZubatPose18,
	sZubatPose19,
	sZubatPose20,
	sZubatPose21,
	sZubatPose22,
	sZubatPose23,
	sZubatPose24,
	sZubatPose1,
	sZubatPose2,
	sZubatPose3,
	sZubatPose4,
	sZubatPose5,
	sZubatPose6,
	sZubatPose7,
	sZubatPose8,
	sZubatPose9,
	sZubatPose10,
	sZubatPose11,
	sZubatPose12,
	sZubatPose13,
	sZubatPose14,
	sZubatPose15,
	sZubatPose16,
	sZubatPose17,
	sZubatPose18,
	sZubatPose19,
	sZubatPose20,
	sZubatPose21,
	sZubatPose22,
	sZubatPose23,
	sZubatPose24,
	sZubatPose1,
	sZubatPose2,
	sZubatPose3,
	sZubatPose4,
	sZubatPose5,
	sZubatPose6,
	sZubatPose7,
	sZubatPose8,
	sZubatPose9,
	sZubatPose10,
	sZubatPose11,
	sZubatPose12,
	sZubatPose13,
	sZubatPose14,
	sZubatPose15,
	sZubatPose16,
	sZubatPose17,
	sZubatPose18,
	sZubatPose19,
	sZubatPose20,
	sZubatPose21,
	sZubatPose22,
	sZubatPose23,
	sZubatPose24,
	sZubatPose121,
	sZubatPose122,
	sZubatPose123,
	sZubatPose124,
	sZubatPose125,
	sZubatPose126,
	sZubatPose127,
	sZubatPose128,
	sZubatPose129,
	sZubatPose130,
	sZubatPose1,
	sZubatPose2,
	sZubatPose3,
	sZubatPose4,
	sZubatPose5,
	sZubatPose6,
	sZubatPose7,
	sZubatPose8,
	sZubatPose9,
	sZubatPose10,
	sZubatPose11,
	sZubatPose12,
	sZubatPose13,
	sZubatPose14,
	sZubatPose15,
	sZubatPose16,
	sZubatPose17,
	sZubatPose18,
	sZubatPose19,
	sZubatPose20,
	sZubatPose21,
	sZubatPose22,
	sZubatPose23,
	sZubatPose24,
	sZubatPose1,
	sZubatPose22,
	sZubatPose19,
	sZubatPose16,
	sZubatPose13,
	sZubatPose10,
	sZubatPose7,
	sZubatPose4,
	sZubatPose3,
	sZubatPose6,
	sZubatPose9,
	sZubatPose12,
	sZubatPose15,
	sZubatPose18,
	sZubatPose21,
	sZubatPose24,
	sZubatPose1,
	sZubatPose2,
	sZubatPose3,
	sZubatPose4,
	sZubatPose5,
	sZubatPose6,
	sZubatPose7,
	sZubatPose8,
	sZubatPose9,
	sZubatPose10,
	sZubatPose11,
	sZubatPose12,
	sZubatPose13,
	sZubatPose14,
	sZubatPose15,
	sZubatPose16,
	sZubatPose17,
	sZubatPose18,
	sZubatPose19,
	sZubatPose20,
	sZubatPose21,
	sZubatPose22,
	sZubatPose23,
	sZubatPose24,
	sZubatPose1,
	sZubatPose22,
	sZubatPose19,
	sZubatPose16,
	sZubatPose13,
	sZubatPose10,
	sZubatPose7,
	sZubatPose4,
	sZubatPose1,
	sZubatPose22,
	sZubatPose19,
	sZubatPose16,
	sZubatPose13,
	sZubatPose10,
	sZubatPose7,
	sZubatPose4,
};

static const struct PositionSets sAxPositionsZubat[] = {
	[0] = { .set = { {0, -15}, {-9, -20}, {9, -20}, {0, -16} } },
	[1] = { .set = { {0, -15}, {-7, -14}, {7, -14}, {0, -16} } },
	[2] = { .set = { {0, -15}, {-8, -23}, {8, -23}, {0, -16} } },
	[3] = { .set = { {4, -16}, {8, -22}, {-6, -17}, {1, -16} } },
	[4] = { .set = { {4, -16}, {9, -17}, {-1, -12}, {0, -15} } },
	[5] = { .set = { {4, -16}, {4, -25}, {-7, -22}, {0, -16} } },
	[6] = { .set = { {6, -17}, {0, -24}, {0, -15}, {1, -16} } },
	[7] = { .set = { {6, -17}, {5, -17}, {3, -11}, {0, -16} } },
	[8] = { .set = { {6, -17}, {-2, -25}, {-2, -20}, {0, -16} } },
	[9] = { .set = { {3, -20}, {-3, -25}, {8, -18}, {1, -19} } },
	[10] = { .set = { {3, -20}, {-3, -21}, {7, -15}, {1, -19} } },
	[11] = { .set = { {3, -20}, {-6, -26}, {6, -20}, {1, -19} } },
	[12] = { .set = { {0, -20}, {9, -22}, {-9, -22}, {0, -19} } },
	[13] = { .set = { {0, -20}, {7, -18}, {-7, -18}, {0, -18} } },
	[14] = { .set = { {0, -20}, {7, -24}, {-7, -24}, {0, -19} } },
	[15] = { .set = { {-3, -20}, {3, -25}, {-8, -18}, {-1, -19} } },
	[16] = { .set = { {-3, -20}, {3, -21}, {-7, -15}, {-1, -19} } },
	[17] = { .set = { {-3, -20}, {6, -26}, {-6, -20}, {-1, -19} } },
	[18] = { .set = { {-6, -17}, {0, -24}, {0, -15}, {-1, -16} } },
	[19] = { .set = { {-6, -17}, {-5, -17}, {-3, -11}, {0, -16} } },
	[20] = { .set = { {-6, -17}, {2, -25}, {2, -20}, {0, -16} } },
	[21] = { .set = { {-4, -16}, {-8, -22}, {6, -17}, {-1, -16} } },
	[22] = { .set = { {-4, -16}, {-9, -17}, {1, -12}, {0, -15} } },
	[23] = { .set = { {-4, -16}, {-4, -25}, {7, -22}, {0, -16} } },
	[24] = { .set = { {0, -15}, {-9, -20}, {9, -20}, {0, -16} } },
	[25] = { .set = { {0, -15}, {-7, -14}, {7, -14}, {0, -16} } },
	[26] = { .set = { {0, -15}, {-8, -23}, {8, -23}, {0, -16} } },
	[27] = { .set = { {4, -16}, {8, -22}, {-6, -17}, {1, -16} } },
	[28] = { .set = { {4, -16}, {9, -17}, {-1, -12}, {0, -15} } },
	[29] = { .set = { {4, -16}, {4, -25}, {-7, -22}, {0, -16} } },
	[30] = { .set = { {6, -17}, {0, -24}, {0, -15}, {1, -16} } },
	[31] = { .set = { {6, -17}, {5, -17}, {3, -11}, {0, -16} } },
	[32] = { .set = { {6, -17}, {-2, -25}, {-2, -20}, {0, -16} } },
	[33] = { .set = { {3, -20}, {-3, -25}, {8, -18}, {1, -19} } },
	[34] = { .set = { {3, -20}, {-3, -21}, {7, -15}, {1, -19} } },
	[35] = { .set = { {3, -20}, {-6, -26}, {6, -20}, {1, -19} } },
	[36] = { .set = { {0, -20}, {9, -22}, {-9, -22}, {0, -19} } },
	[37] = { .set = { {0, -20}, {7, -18}, {-7, -18}, {0, -18} } },
	[38] = { .set = { {0, -20}, {7, -24}, {-7, -24}, {0, -19} } },
	[39] = { .set = { {-3, -20}, {3, -25}, {-8, -18}, {-1, -19} } },
	[40] = { .set = { {-3, -20}, {3, -21}, {-7, -15}, {-1, -19} } },
	[41] = { .set = { {-3, -20}, {6, -26}, {-6, -20}, {-1, -19} } },
	[42] = { .set = { {-6, -17}, {0, -24}, {0, -15}, {-1, -16} } },
	[43] = { .set = { {-6, -17}, {-5, -17}, {-3, -11}, {0, -16} } },
	[44] = { .set = { {-6, -17}, {2, -25}, {2, -20}, {0, -16} } },
	[45] = { .set = { {-4, -16}, {-8, -22}, {6, -17}, {-1, -16} } },
	[46] = { .set = { {-4, -16}, {-9, -17}, {1, -12}, {0, -15} } },
	[47] = { .set = { {-4, -16}, {-4, -25}, {7, -22}, {0, -16} } },
	[48] = { .set = { {0, -15}, {-9, -20}, {9, -20}, {0, -16} } },
	[49] = { .set = { {0, -15}, {-7, -14}, {7, -14}, {0, -16} } },
	[50] = { .set = { {0, -15}, {-8, -23}, {8, -23}, {0, -16} } },
	[51] = { .set = { {4, -16}, {8, -22}, {-6, -17}, {1, -16} } },
	[52] = { .set = { {4, -16}, {9, -17}, {-1, -12}, {0, -15} } },
	[53] = { .set = { {4, -16}, {4, -25}, {-7, -22}, {0, -16} } },
	[54] = { .set = { {6, -17}, {0, -24}, {0, -15}, {1, -16} } },
	[55] = { .set = { {6, -17}, {5, -17}, {3, -11}, {0, -16} } },
	[56] = { .set = { {6, -17}, {-2, -25}, {-2, -20}, {0, -16} } },
	[57] = { .set = { {3, -20}, {-3, -25}, {8, -18}, {1, -19} } },
	[58] = { .set = { {3, -20}, {-3, -21}, {7, -15}, {1, -19} } },
	[59] = { .set = { {3, -20}, {-6, -26}, {6, -20}, {1, -19} } },
	[60] = { .set = { {0, -20}, {9, -22}, {-9, -22}, {0, -19} } },
	[61] = { .set = { {0, -20}, {7, -18}, {-7, -18}, {0, -18} } },
	[62] = { .set = { {0, -20}, {7, -24}, {-7, -24}, {0, -19} } },
	[63] = { .set = { {-3, -20}, {3, -25}, {-8, -18}, {-1, -19} } },
	[64] = { .set = { {-3, -20}, {3, -21}, {-7, -15}, {-1, -19} } },
	[65] = { .set = { {-3, -20}, {6, -26}, {-6, -20}, {-1, -19} } },
	[66] = { .set = { {-6, -17}, {0, -24}, {0, -15}, {-1, -16} } },
	[67] = { .set = { {-6, -17}, {-5, -17}, {-3, -11}, {0, -16} } },
	[68] = { .set = { {-6, -17}, {2, -25}, {2, -20}, {0, -16} } },
	[69] = { .set = { {-4, -16}, {-8, -22}, {6, -17}, {-1, -16} } },
	[70] = { .set = { {-4, -16}, {-9, -17}, {1, -12}, {0, -15} } },
	[71] = { .set = { {-4, -16}, {-4, -25}, {7, -22}, {0, -16} } },
	[72] = { .set = { {0, -15}, {-9, -20}, {9, -20}, {0, -16} } },
	[73] = { .set = { {0, -15}, {-7, -14}, {7, -14}, {0, -16} } },
	[74] = { .set = { {0, -15}, {-8, -23}, {8, -23}, {0, -16} } },
	[75] = { .set = { {4, -16}, {8, -22}, {-6, -17}, {1, -16} } },
	[76] = { .set = { {4, -16}, {9, -17}, {-1, -12}, {0, -15} } },
	[77] = { .set = { {4, -16}, {4, -25}, {-7, -22}, {0, -16} } },
	[78] = { .set = { {6, -17}, {0, -24}, {0, -15}, {1, -16} } },
	[79] = { .set = { {6, -17}, {5, -17}, {3, -11}, {0, -16} } },
	[80] = { .set = { {6, -17}, {-2, -25}, {-2, -20}, {0, -16} } },
	[81] = { .set = { {3, -20}, {-3, -25}, {8, -18}, {1, -19} } },
	[82] = { .set = { {3, -20}, {-3, -21}, {7, -15}, {1, -19} } },
	[83] = { .set = { {3, -20}, {-6, -26}, {6, -20}, {1, -19} } },
	[84] = { .set = { {0, -20}, {9, -22}, {-9, -22}, {0, -19} } },
	[85] = { .set = { {0, -20}, {7, -18}, {-7, -18}, {0, -18} } },
	[86] = { .set = { {0, -20}, {7, -24}, {-7, -24}, {0, -19} } },
	[87] = { .set = { {-3, -20}, {3, -25}, {-8, -18}, {-1, -19} } },
	[88] = { .set = { {-3, -20}, {3, -21}, {-7, -15}, {-1, -19} } },
	[89] = { .set = { {-3, -20}, {6, -26}, {-6, -20}, {-1, -19} } },
	[90] = { .set = { {-6, -17}, {0, -24}, {0, -15}, {-1, -16} } },
	[91] = { .set = { {-6, -17}, {-5, -17}, {-3, -11}, {0, -16} } },
	[92] = { .set = { {-6, -17}, {2, -25}, {2, -20}, {0, -16} } },
	[93] = { .set = { {-4, -16}, {-8, -22}, {6, -17}, {-1, -16} } },
	[94] = { .set = { {-4, -16}, {-9, -17}, {1, -12}, {0, -15} } },
	[95] = { .set = { {-4, -16}, {-4, -25}, {7, -22}, {0, -16} } },
	[96] = { .set = { {0, -15}, {-9, -20}, {9, -20}, {0, -16} } },
	[97] = { .set = { {0, -15}, {-7, -14}, {7, -14}, {0, -16} } },
	[98] = { .set = { {0, -15}, {-8, -23}, {8, -23}, {0, -16} } },
	[99] = { .set = { {4, -16}, {8, -22}, {-6, -17}, {1, -16} } },
	[100] = { .set = { {4, -16}, {9, -17}, {-1, -12}, {0, -15} } },
	[101] = { .set = { {4, -16}, {4, -25}, {-7, -22}, {0, -16} } },
	[102] = { .set = { {6, -17}, {0, -24}, {0, -15}, {1, -16} } },
	[103] = { .set = { {6, -17}, {5, -17}, {3, -11}, {0, -16} } },
	[104] = { .set = { {6, -17}, {-2, -25}, {-2, -20}, {0, -16} } },
	[105] = { .set = { {3, -20}, {-3, -25}, {8, -18}, {1, -19} } },
	[106] = { .set = { {3, -20}, {-3, -21}, {7, -15}, {1, -19} } },
	[107] = { .set = { {3, -20}, {-6, -26}, {6, -20}, {1, -19} } },
	[108] = { .set = { {0, -20}, {9, -22}, {-9, -22}, {0, -19} } },
	[109] = { .set = { {0, -20}, {7, -18}, {-7, -18}, {0, -18} } },
	[110] = { .set = { {0, -20}, {7, -24}, {-7, -24}, {0, -19} } },
	[111] = { .set = { {-3, -20}, {3, -25}, {-8, -18}, {-1, -19} } },
	[112] = { .set = { {-3, -20}, {3, -21}, {-7, -15}, {-1, -19} } },
	[113] = { .set = { {-3, -20}, {6, -26}, {-6, -20}, {-1, -19} } },
	[114] = { .set = { {-6, -17}, {0, -24}, {0, -15}, {-1, -16} } },
	[115] = { .set = { {-6, -17}, {-5, -17}, {-3, -11}, {0, -16} } },
	[116] = { .set = { {-6, -17}, {2, -25}, {2, -20}, {0, -16} } },
	[117] = { .set = { {-4, -16}, {-8, -22}, {6, -17}, {-1, -16} } },
	[118] = { .set = { {-4, -16}, {-9, -17}, {1, -12}, {0, -15} } },
	[119] = { .set = { {-4, -16}, {-4, -25}, {7, -22}, {0, -16} } },
	[120] = { .set = { {0, -6}, {-7, -3}, {7, -3}, {0, -5} } },
	[121] = { .set = { {0, -4}, {-8, -3}, {8, -3}, {0, -5} } },
	[122] = { .set = { {1, 2}, {-9, -9}, {5, -12}, {0, -4} } },
	[123] = { .set = { {3, 1}, {5, -12}, {-4, -16}, {1, -4} } },
	[124] = { .set = { {5, 0}, {3, -12}, {-1, -14}, {0, -4} } },
	[125] = { .set = { {3, -1}, {-5, -12}, {7, -16}, {-1, -5} } },
	[126] = { .set = { {0, -5}, {6, -6}, {-6, -12}, {0, -4} } },
	[127] = { .set = { {-4, -1}, {4, -12}, {-8, -16}, {0, -5} } },
	[128] = { .set = { {-6, -1}, {-4, -13}, {0, -15}, {-1, -5} } },
	[129] = { .set = { {-3, 1}, {-5, -12}, {4, -16}, {-1, -4} } },
	[130] = { .set = { {0, -15}, {-9, -20}, {9, -20}, {0, -16} } },
	[131] = { .set = { {0, -15}, {-7, -14}, {7, -14}, {0, -16} } },
	[132] = { .set = { {0, -15}, {-8, -23}, {8, -23}, {0, -16} } },
	[133] = { .set = { {4, -16}, {8, -22}, {-6, -17}, {1, -16} } },
	[134] = { .set = { {4, -16}, {9, -17}, {-1, -12}, {0, -15} } },
	[135] = { .set = { {4, -16}, {4, -25}, {-7, -22}, {0, -16} } },
	[136] = { .set = { {6, -17}, {0, -24}, {0, -15}, {1, -16} } },
	[137] = { .set = { {6, -17}, {5, -17}, {3, -11}, {0, -16} } },
	[138] = { .set = { {6, -17}, {-2, -25}, {-2, -20}, {0, -16} } },
	[139] = { .set = { {3, -20}, {-3, -25}, {8, -18}, {1, -19} } },
	[140] = { .set = { {3, -20}, {-3, -21}, {7, -15}, {1, -19} } },
	[141] = { .set = { {3, -20}, {-6, -26}, {6, -20}, {1, -19} } },
	[142] = { .set = { {0, -20}, {9, -22}, {-9, -22}, {0, -19} } },
	[143] = { .set = { {0, -20}, {7, -18}, {-7, -18}, {0, -18} } },
	[144] = { .set = { {0, -20}, {7, -24}, {-7, -24}, {0, -19} } },
	[145] = { .set = { {-3, -20}, {3, -25}, {-8, -18}, {-1, -19} } },
	[146] = { .set = { {-3, -20}, {3, -21}, {-7, -15}, {-1, -19} } },
	[147] = { .set = { {-3, -20}, {6, -26}, {-6, -20}, {-1, -19} } },
	[148] = { .set = { {-6, -17}, {0, -24}, {0, -15}, {-1, -16} } },
	[149] = { .set = { {-6, -17}, {-5, -17}, {-3, -11}, {0, -16} } },
	[150] = { .set = { {-6, -17}, {2, -25}, {2, -20}, {0, -16} } },
	[151] = { .set = { {-4, -16}, {-8, -22}, {6, -17}, {-1, -16} } },
	[152] = { .set = { {-4, -16}, {-9, -17}, {1, -12}, {0, -15} } },
	[153] = { .set = { {-4, -16}, {-4, -25}, {7, -22}, {0, -16} } },
	[154] = { .set = { {0, -15}, {-9, -20}, {9, -20}, {0, -16} } },
	[155] = { .set = { {-4, -16}, {-8, -22}, {6, -17}, {-1, -16} } },
	[156] = { .set = { {-6, -17}, {0, -24}, {0, -15}, {-1, -16} } },
	[157] = { .set = { {-3, -20}, {3, -25}, {-8, -18}, {-1, -19} } },
	[158] = { .set = { {0, -20}, {9, -22}, {-9, -22}, {0, -19} } },
	[159] = { .set = { {3, -20}, {-3, -25}, {8, -18}, {1, -19} } },
	[160] = { .set = { {6, -17}, {0, -24}, {0, -15}, {1, -16} } },
	[161] = { .set = { {4, -16}, {8, -22}, {-6, -17}, {1, -16} } },
	[162] = { .set = { {0, -15}, {-8, -23}, {8, -23}, {0, -16} } },
	[163] = { .set = { {4, -16}, {4, -25}, {-7, -22}, {0, -16} } },
	[164] = { .set = { {6, -17}, {-2, -25}, {-2, -20}, {0, -16} } },
	[165] = { .set = { {3, -20}, {-6, -26}, {6, -20}, {1, -19} } },
	[166] = { .set = { {0, -20}, {7, -24}, {-7, -24}, {0, -19} } },
	[167] = { .set = { {-3, -20}, {6, -26}, {-6, -20}, {-1, -19} } },
	[168] = { .set = { {-6, -17}, {2, -25}, {2, -20}, {0, -16} } },
	[169] = { .set = { {-4, -16}, {-4, -25}, {7, -22}, {0, -16} } },
	[170] = { .set = { {0, -15}, {-9, -20}, {9, -20}, {0, -16} } },
	[171] = { .set = { {0, -15}, {-7, -14}, {7, -14}, {0, -16} } },
	[172] = { .set = { {0, -15}, {-8, -23}, {8, -23}, {0, -16} } },
	[173] = { .set = { {4, -16}, {8, -22}, {-6, -17}, {1, -16} } },
	[174] = { .set = { {4, -16}, {9, -17}, {-1, -12}, {0, -15} } },
	[175] = { .set = { {4, -16}, {4, -25}, {-7, -22}, {0, -16} } },
	[176] = { .set = { {6, -17}, {0, -24}, {0, -15}, {1, -16} } },
	[177] = { .set = { {6, -17}, {5, -17}, {3, -11}, {0, -16} } },
	[178] = { .set = { {6, -17}, {-2, -25}, {-2, -20}, {0, -16} } },
	[179] = { .set = { {3, -20}, {-3, -25}, {8, -18}, {1, -19} } },
	[180] = { .set = { {3, -20}, {-3, -21}, {7, -15}, {1, -19} } },
	[181] = { .set = { {3, -20}, {-6, -26}, {6, -20}, {1, -19} } },
	[182] = { .set = { {0, -20}, {9, -22}, {-9, -22}, {0, -19} } },
	[183] = { .set = { {0, -20}, {7, -18}, {-7, -18}, {0, -18} } },
	[184] = { .set = { {0, -20}, {7, -24}, {-7, -24}, {0, -19} } },
	[185] = { .set = { {-3, -20}, {3, -25}, {-8, -18}, {-1, -19} } },
	[186] = { .set = { {-3, -20}, {3, -21}, {-7, -15}, {-1, -19} } },
	[187] = { .set = { {-3, -20}, {6, -26}, {-6, -20}, {-1, -19} } },
	[188] = { .set = { {-6, -17}, {0, -24}, {0, -15}, {-1, -16} } },
	[189] = { .set = { {-6, -17}, {-5, -17}, {-3, -11}, {0, -16} } },
	[190] = { .set = { {-6, -17}, {2, -25}, {2, -20}, {0, -16} } },
	[191] = { .set = { {-4, -16}, {-8, -22}, {6, -17}, {-1, -16} } },
	[192] = { .set = { {-4, -16}, {-9, -17}, {1, -12}, {0, -15} } },
	[193] = { .set = { {-4, -16}, {-4, -25}, {7, -22}, {0, -16} } },
	[194] = { .set = { {0, -15}, {-9, -20}, {9, -20}, {0, -16} } },
	[195] = { .set = { {-4, -16}, {-8, -22}, {6, -17}, {-1, -16} } },
	[196] = { .set = { {-6, -17}, {0, -24}, {0, -15}, {-1, -16} } },
	[197] = { .set = { {-3, -20}, {3, -25}, {-8, -18}, {-1, -19} } },
	[198] = { .set = { {0, -20}, {9, -22}, {-9, -22}, {0, -19} } },
	[199] = { .set = { {3, -20}, {-3, -25}, {8, -18}, {1, -19} } },
	[200] = { .set = { {6, -17}, {0, -24}, {0, -15}, {1, -16} } },
	[201] = { .set = { {4, -16}, {8, -22}, {-6, -17}, {1, -16} } },
	[202] = { .set = { {0, -15}, {-9, -20}, {9, -20}, {0, -16} } },
	[203] = { .set = { {-4, -16}, {-8, -22}, {6, -17}, {-1, -16} } },
	[204] = { .set = { {-6, -17}, {0, -24}, {0, -15}, {-1, -16} } },
	[205] = { .set = { {-3, -20}, {3, -25}, {-8, -18}, {-1, -19} } },
	[206] = { .set = { {0, -20}, {9, -22}, {-9, -22}, {0, -19} } },
	[207] = { .set = { {3, -20}, {-3, -25}, {8, -18}, {1, -19} } },
	[208] = { .set = { {6, -17}, {0, -24}, {0, -15}, {1, -16} } },
	[209] = { .set = { {4, -16}, {8, -22}, {-6, -17}, {1, -16} } },
};

static const ax_anim *const sZubatAnimTable1[] = {
	sZubatAnims_1_1,
	sZubatAnims_1_2,
	sZubatAnims_1_3,
	sZubatAnims_1_4,
	sZubatAnims_1_5,
	sZubatAnims_1_6,
	sZubatAnims_1_7,
	sZubatAnims_1_8,
};

static const ax_anim *const sZubatAnimTable2[] = {
	gAxSharedAnim_01630,
	gAxSharedAnim_01755,
	gAxSharedAnim_01825,
	gAxSharedAnim_01867,
	gAxSharedAnim_01896,
	gAxSharedAnim_01920,
	gAxSharedAnim_01936,
	gAxSharedAnim_01955,
};

static const ax_anim *const sZubatAnimTable3[] = {
	gAxSharedAnim_01977,
	gAxSharedAnim_01985,
	gAxSharedAnim_01997,
	gAxSharedAnim_02012,
	gAxSharedAnim_02033,
	gAxSharedAnim_02053,
	gAxSharedAnim_02067,
	gAxSharedAnim_02079,
};

static const ax_anim *const sZubatAnimTable4[] = {
	gAxSharedAnim_02087,
	gAxSharedAnim_02109,
	gAxSharedAnim_02133,
	gAxSharedAnim_02155,
	gAxSharedAnim_02180,
	gAxSharedAnim_02208,
	gAxSharedAnim_02238,
	gAxSharedAnim_02267,
};

static const ax_anim *const sZubatAnimTable5[] = {
	sZubatAnims_5_1,
	sZubatAnims_5_2,
	sZubatAnims_5_3,
	sZubatAnims_5_4,
	sZubatAnims_5_5,
	sZubatAnims_5_6,
	sZubatAnims_5_7,
	sZubatAnims_5_8,
};

static const ax_anim *const sZubatAnimTable6[] = {
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
};

static const ax_anim *const sZubatAnimTable7[] = {
	gAxSharedAnim_00330,
	gAxSharedAnim_00340,
	gAxSharedAnim_00348,
	gAxSharedAnim_00356,
	gAxSharedAnim_00368,
	gAxSharedAnim_00376,
	gAxSharedAnim_00383,
	gAxSharedAnim_00390,
};

static const ax_anim *const sZubatAnimTable8[] = {
	sZubatAnims_8_1,
	sZubatAnims_8_2,
	sZubatAnims_8_3,
	sZubatAnims_8_4,
	sZubatAnims_8_5,
	sZubatAnims_8_6,
	sZubatAnims_8_7,
	sZubatAnims_8_8,
};

static const ax_anim *const sZubatAnimTable9[] = {
	gAxSharedAnim_00610,
	sZubatAnims_9_2,
	sZubatAnims_9_3,
	gAxSharedAnim_00658,
	gAxSharedAnim_00647,
	gAxSharedAnim_00638,
	sZubatAnims_9_7,
	sZubatAnims_9_8,
};

static const ax_anim *const sZubatAnimTable10[] = {
	gAxSharedAnim_00705,
	gAxSharedAnim_00714,
	gAxSharedAnim_00725,
	gAxSharedAnim_00737,
	gAxSharedAnim_00750,
	gAxSharedAnim_00760,
	gAxSharedAnim_00772,
	gAxSharedAnim_00781,
};

static const ax_anim *const sZubatAnimTable11[] = {
	sZubatAnims_11_1,
	sZubatAnims_11_2,
	sZubatAnims_11_3,
	sZubatAnims_11_4,
	sZubatAnims_11_5,
	sZubatAnims_11_6,
	sZubatAnims_11_7,
	sZubatAnims_11_8,
};

static const ax_anim *const sZubatAnimTable12[] = {
	gAxSharedAnim_01147,
	gAxSharedAnim_01230,
	gAxSharedAnim_01208,
	gAxSharedAnim_01194,
	gAxSharedAnim_01193,
	gAxSharedAnim_01181,
	gAxSharedAnim_01161,
	gAxSharedAnim_01148,
};

static const ax_anim *const sZubatAnimTable13[] = {
	gAxSharedAnim_01242,
	gAxSharedAnim_01323,
	gAxSharedAnim_01314,
	gAxSharedAnim_01301,
	gAxSharedAnim_01286,
	gAxSharedAnim_01278,
	gAxSharedAnim_01267,
	gAxSharedAnim_01253,
};

static const ax_anim *const *const sAxAnimationsZubat[] = {
	sZubatAnimTable1,
	sZubatAnimTable2,
	sZubatAnimTable3,
	sZubatAnimTable4,
	sZubatAnimTable5,
	sZubatAnimTable6,
	sZubatAnimTable7,
	sZubatAnimTable8,
	sZubatAnimTable9,
	sZubatAnimTable10,
	sZubatAnimTable11,
	sZubatAnimTable12,
	sZubatAnimTable13,
};

static const ax_sprite *const sAxSpritesZubat[] = {
	sZubatSprites1,
	sZubatSprites2,
	sZubatSprites3,
	sZubatSprites4,
	sZubatSprites5,
	sZubatSprites6,
	sZubatSprites7,
	sZubatSprites8,
	sZubatSprites9,
	sZubatSprites10,
	sZubatSprites11,
	sZubatSprites12,
	sZubatSprites13,
	sZubatSprites14,
	sZubatSprites15,
	sZubatSprites16,
	sZubatSprites17,
	sZubatSprites18,
	sZubatSprites19,
	sZubatSprites20,
	sZubatSprites21,
	sZubatSprites22,
};

static const axmain sAxMainZubat = {
	.poses = sAxPosesZubat,
	.animations = sAxAnimationsZubat,
	.animCount = ARRAY_COUNT(sAxAnimationsZubat),
	.spriteData = sAxSpritesZubat,
	.positions = sAxPositionsZubat,
};
