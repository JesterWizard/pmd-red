/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainShroomish;
const SiroArchive gAxShroomish = {"SIRO", &sAxMainShroomish};

static const ax_pose sShroomishPose1[] = {
	AX_POSE(0, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose2[] = {
	AX_POSE(1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose4[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose5[] = {
	AX_POSE(4, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose7[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose8[] = {
	AX_POSE(7, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose9[] = {
	AX_POSE(8, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose10[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose12[] = {
	AX_POSE(11, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose13[] = {
	AX_POSE(12, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose14[] = {
	AX_POSE(13, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose15[] = {
	AX_POSE(14, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose16[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose17[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose18[] = {
	AX_POSE(11, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose19[] = {
	AX_POSE(6, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose20[] = {
	AX_POSE(7, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose21[] = {
	AX_POSE(8, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose22[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose23[] = {
	AX_POSE(4, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose24[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose76[] = {
	AX_POSE(15, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose80[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose84[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose88[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose92[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose96[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose100[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose104[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose116[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose118[] = {
	AX_POSE(18, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose121[] = {
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose122[] = {
	AX_POSE(21, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose123[] = {
	AX_POSE(22, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose124[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose125[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose126[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose127[] = {
	AX_POSE(26, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose128[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose129[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose130[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose164[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose165[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose169[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose170[] = {
	AX_POSE(16, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose178[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose179[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose180[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose182[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_pose sShroomishPose193[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 8)),
	AX_POSE_TERMINATOR
};
static const ax_anim sShroomishAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 29, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {19, 20}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {19, 20}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 35, .offset = {10, -13}, .shadow = {10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {20, -24}, .shadow = {20, -24} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {21, -23}, .shadow = {21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {20, -24}, .shadow = {20, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {21, -23}, .shadow = {21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 40, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 41, .offset = {-10, -13}, .shadow = {-10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-20, -24}, .shadow = {-20, -24} },
	{ .frames = 2, .unkFlags = 1, .poseId = 40, .offset = {-21, -23}, .shadow = {-21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-20, -24}, .shadow = {-20, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-21, -23}, .shadow = {-21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 47, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 52, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 53, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {19, 20}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {19, 20}, .shadow = {19, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 58, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 59, .offset = {10, -13}, .shadow = {10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {20, -24}, .shadow = {20, -24} },
	{ .frames = 2, .unkFlags = 1, .poseId = 58, .offset = {21, -23}, .shadow = {21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {20, -24}, .shadow = {20, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {21, -23}, .shadow = {21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 64, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 65, .offset = {-10, -13}, .shadow = {-10, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-20, -24}, .shadow = {-20, -24} },
	{ .frames = 2, .unkFlags = 1, .poseId = 64, .offset = {-21, -23}, .shadow = {-21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-20, -24}, .shadow = {-20, -24} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-21, -23}, .shadow = {-21, -23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 70, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 71, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 70, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-19, 20}, .shadow = {-19, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 6, .unkFlags = 2, .poseId = 72, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 75, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 75, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 75, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {1, 3}, .shadow = {1, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 6, .unkFlags = 2, .poseId = 76, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 79, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 79, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {4, 2}, .shadow = {4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 80, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 83, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, 1}, .shadow = {3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 6, .unkFlags = 2, .poseId = 84, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 87, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 87, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {1, -1}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 6, .unkFlags = 2, .poseId = 88, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 91, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {1, -3}, .shadow = {1, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -1}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 6, .unkFlags = 2, .poseId = 92, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-4, -2}, .shadow = {-4, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-1, -1}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 96, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 99, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-3, 1}, .shadow = {-3, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 6, .unkFlags = 2, .poseId = 100, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 2, .unkFlags = 1, .poseId = 103, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-4, 2}, .shadow = {-4, 2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_5_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 104, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_5_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_5_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 110, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_5_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_5_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 108, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_5_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 107, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_5_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_5_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_7_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 123, .offset = {-3, -3}, .shadow = {-2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 123, .offset = {-4, -4}, .shadow = {-3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_8_1[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 132, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_8_2[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 135, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_8_3[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 138, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_8_4[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 141, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_8_5[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 144, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_8_6[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 147, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_8_7[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 150, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_8_8[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 152, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 153, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {12, 12}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {7, 20}, .shadow = {7, 15} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, 22}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-7, 20}, .shadow = {-7, 15} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-12, 12}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {11, -1}, .shadow = {11, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {22, 4}, .shadow = {22, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {28, 13}, .shadow = {28, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {23, 21}, .shadow = {23, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {12, 22}, .shadow = {12, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {6, 20}, .shadow = {6, 20} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {-1, 11}, .shadow = {-1, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {4, -5}, .shadow = {4, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {11, -7}, .shadow = {11, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {20, -5}, .shadow = {20, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {23, 0}, .shadow = {23, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 157, .offset = {18, 5}, .shadow = {18, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {12, 6}, .shadow = {12, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {-2, -9}, .shadow = {-2, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {4, -18}, .shadow = {4, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {12, -23}, .shadow = {12, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {21, -22}, .shadow = {21, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 156, .offset = {24, -12}, .shadow = {24, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-11, -11}, .shadow = {-11, -11} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-8, -19}, .shadow = {-8, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {0, -23}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 155, .offset = {8, -19}, .shadow = {8, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {11, -11}, .shadow = {11, -11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {2, -9}, .shadow = {2, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {-4, -18}, .shadow = {-4, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-12, -23}, .shadow = {-12, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {-21, -22}, .shadow = {-21, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 160, .offset = {-24, -12}, .shadow = {-24, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {-4, -5}, .shadow = {-4, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-11, -7}, .shadow = {-11, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-20, -5}, .shadow = {-20, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {-23, 0}, .shadow = {-23, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-18, 5}, .shadow = {-18, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {-12, 6}, .shadow = {-12, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {-11, -1}, .shadow = {-11, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-22, 4}, .shadow = {-22, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-28, 13}, .shadow = {-28, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {-23, 21}, .shadow = {-23, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {-12, 22}, .shadow = {-12, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {-6, 20}, .shadow = {-6, 20} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {1, 11}, .shadow = {1, 11} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 170, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 171, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 172, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 173, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 174, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 175, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 176, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 177, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 178, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 178, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 178, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 179, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 179, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 179, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sShroomishAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 182, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 182, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 183, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 183, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sShroomishGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_1.4bpp.lz");
static const ax_sprite sShroomishSprites1[] = {
	{sShroomishGfx1, ARRAY_COUNT(sShroomishGfx1)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_2.4bpp.lz");
static const ax_sprite sShroomishSprites2[] = {
	{sShroomishGfx2, ARRAY_COUNT(sShroomishGfx2)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_3.4bpp.lz");
static const ax_sprite sShroomishSprites3[] = {
	{sShroomishGfx3, ARRAY_COUNT(sShroomishGfx3)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_4.4bpp.lz");
static const ax_sprite sShroomishSprites4[] = {
	{sShroomishGfx4, ARRAY_COUNT(sShroomishGfx4)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_5.4bpp.lz");
static const ax_sprite sShroomishSprites5[] = {
	{sShroomishGfx5, ARRAY_COUNT(sShroomishGfx5)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_6.4bpp.lz");
static const ax_sprite sShroomishSprites6[] = {
	{sShroomishGfx6, ARRAY_COUNT(sShroomishGfx6)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_7.4bpp.lz");
static const ax_sprite sShroomishSprites7[] = {
	{sShroomishGfx7, ARRAY_COUNT(sShroomishGfx7)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_8.4bpp.lz");
static const ax_sprite sShroomishSprites8[] = {
	{sShroomishGfx8, ARRAY_COUNT(sShroomishGfx8)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_9.4bpp.lz");
static const ax_sprite sShroomishSprites9[] = {
	{sShroomishGfx9, ARRAY_COUNT(sShroomishGfx9)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_10.4bpp.lz");
static const ax_sprite sShroomishSprites10[] = {
	{sShroomishGfx10, ARRAY_COUNT(sShroomishGfx10)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_11.4bpp.lz");
static const ax_sprite sShroomishSprites11[] = {
	{sShroomishGfx11, ARRAY_COUNT(sShroomishGfx11)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_12.4bpp.lz");
static const ax_sprite sShroomishSprites12[] = {
	{sShroomishGfx12, ARRAY_COUNT(sShroomishGfx12)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_13.4bpp.lz");
static const ax_sprite sShroomishSprites13[] = {
	{sShroomishGfx13, ARRAY_COUNT(sShroomishGfx13)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_14.4bpp.lz");
static const ax_sprite sShroomishSprites14[] = {
	{sShroomishGfx14, ARRAY_COUNT(sShroomishGfx14)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_15.4bpp.lz");
static const ax_sprite sShroomishSprites15[] = {
	{sShroomishGfx15, ARRAY_COUNT(sShroomishGfx15)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_16.4bpp.lz");
static const u8 sShroomishGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_16_1.4bpp.lz");
static const ax_sprite sShroomishSprites16[] = {
	{NULL, 128}, 
	{sShroomishGfx16, ARRAY_COUNT(sShroomishGfx16)}, 
	{NULL, 32}, 
	{sShroomishGfx16_1, ARRAY_COUNT(sShroomishGfx16_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sShroomishGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_17.4bpp.lz");
static const ax_sprite sShroomishSprites17[] = {
	{NULL, 128}, 
	{sShroomishGfx17, ARRAY_COUNT(sShroomishGfx17)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sShroomishGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_18.4bpp.lz");
static const u8 sShroomishGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_18_1.4bpp.lz");
static const u8 sShroomishGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_18_2.4bpp.lz");
static const u8 sShroomishGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_18_3.4bpp.lz");
static const ax_sprite sShroomishSprites18[] = {
	{NULL, 32}, 
	{sShroomishGfx18, ARRAY_COUNT(sShroomishGfx18)}, 
	{NULL, 32}, 
	{sShroomishGfx18_1, ARRAY_COUNT(sShroomishGfx18_1)}, 
	{NULL, 32}, 
	{sShroomishGfx18_2, ARRAY_COUNT(sShroomishGfx18_2)}, 
	{NULL, 64}, 
	{sShroomishGfx18_3, ARRAY_COUNT(sShroomishGfx18_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sShroomishGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_19.4bpp.lz");
static const u8 sShroomishGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_19_1.4bpp.lz");
static const ax_sprite sShroomishSprites19[] = {
	{NULL, 32}, 
	{sShroomishGfx19, ARRAY_COUNT(sShroomishGfx19)}, 
	{NULL, 32}, 
	{sShroomishGfx19_1, ARRAY_COUNT(sShroomishGfx19_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sShroomishGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_20.4bpp.lz");
static const u8 sShroomishGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_20_1.4bpp.lz");
static const ax_sprite sShroomishSprites20[] = {
	{NULL, 32}, 
	{sShroomishGfx20, ARRAY_COUNT(sShroomishGfx20)}, 
	{NULL, 32}, 
	{sShroomishGfx20_1, ARRAY_COUNT(sShroomishGfx20_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sShroomishGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_21.4bpp.lz");
static const ax_sprite sShroomishSprites21[] = {
	{sShroomishGfx21, ARRAY_COUNT(sShroomishGfx21)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_22.4bpp.lz");
static const ax_sprite sShroomishSprites22[] = {
	{sShroomishGfx22, ARRAY_COUNT(sShroomishGfx22)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_23.4bpp.lz");
static const ax_sprite sShroomishSprites23[] = {
	{sShroomishGfx23, ARRAY_COUNT(sShroomishGfx23)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_24.4bpp.lz");
static const ax_sprite sShroomishSprites24[] = {
	{sShroomishGfx24, ARRAY_COUNT(sShroomishGfx24)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_25.4bpp.lz");
static const ax_sprite sShroomishSprites25[] = {
	{sShroomishGfx25, ARRAY_COUNT(sShroomishGfx25)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_26.4bpp.lz");
static const ax_sprite sShroomishSprites26[] = {
	{sShroomishGfx26, ARRAY_COUNT(sShroomishGfx26)}, 
	{NULL, 0}
};
static const u8 sShroomishGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/shroomish/sprite_27.4bpp.lz");
static const ax_sprite sShroomishSprites27[] = {
	{sShroomishGfx27, ARRAY_COUNT(sShroomishGfx27)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesShroomish[] = {
	sShroomishPose1,
	sShroomishPose2,
	sShroomishPose3,
	sShroomishPose4,
	sShroomishPose5,
	sShroomishPose6,
	sShroomishPose7,
	sShroomishPose8,
	sShroomishPose9,
	sShroomishPose10,
	sShroomishPose11,
	sShroomishPose12,
	sShroomishPose13,
	sShroomishPose14,
	sShroomishPose15,
	sShroomishPose16,
	sShroomishPose17,
	sShroomishPose18,
	sShroomishPose19,
	sShroomishPose20,
	sShroomishPose21,
	sShroomishPose22,
	sShroomishPose23,
	sShroomishPose24,
	sShroomishPose1,
	sShroomishPose2,
	sShroomishPose3,
	sShroomishPose4,
	sShroomishPose5,
	sShroomishPose6,
	sShroomishPose7,
	sShroomishPose8,
	sShroomishPose9,
	sShroomishPose10,
	sShroomishPose11,
	sShroomishPose12,
	sShroomishPose13,
	sShroomishPose14,
	sShroomishPose15,
	sShroomishPose16,
	sShroomishPose17,
	sShroomishPose18,
	sShroomishPose19,
	sShroomishPose20,
	sShroomishPose21,
	sShroomishPose22,
	sShroomishPose23,
	sShroomishPose24,
	sShroomishPose1,
	sShroomishPose2,
	sShroomishPose3,
	sShroomishPose4,
	sShroomishPose5,
	sShroomishPose6,
	sShroomishPose7,
	sShroomishPose8,
	sShroomishPose9,
	sShroomishPose10,
	sShroomishPose11,
	sShroomishPose12,
	sShroomishPose13,
	sShroomishPose14,
	sShroomishPose15,
	sShroomishPose16,
	sShroomishPose17,
	sShroomishPose18,
	sShroomishPose19,
	sShroomishPose20,
	sShroomishPose21,
	sShroomishPose22,
	sShroomishPose23,
	sShroomishPose24,
	sShroomishPose1,
	sShroomishPose2,
	sShroomishPose3,
	sShroomishPose76,
	sShroomishPose4,
	sShroomishPose5,
	sShroomishPose6,
	sShroomishPose80,
	sShroomishPose7,
	sShroomishPose8,
	sShroomishPose9,
	sShroomishPose84,
	sShroomishPose10,
	sShroomishPose11,
	sShroomishPose12,
	sShroomishPose88,
	sShroomishPose13,
	sShroomishPose14,
	sShroomishPose15,
	sShroomishPose92,
	sShroomishPose16,
	sShroomishPose17,
	sShroomishPose18,
	sShroomishPose96,
	sShroomishPose19,
	sShroomishPose20,
	sShroomishPose21,
	sShroomishPose100,
	sShroomishPose22,
	sShroomishPose23,
	sShroomishPose24,
	sShroomishPose104,
	sShroomishPose1,
	sShroomishPose22,
	sShroomishPose19,
	sShroomishPose16,
	sShroomishPose13,
	sShroomishPose10,
	sShroomishPose7,
	sShroomishPose4,
	sShroomishPose76,
	sShroomishPose104,
	sShroomishPose100,
	sShroomishPose116,
	sShroomishPose92,
	sShroomishPose118,
	sShroomishPose84,
	sShroomishPose80,
	sShroomishPose121,
	sShroomishPose122,
	sShroomishPose123,
	sShroomishPose124,
	sShroomishPose125,
	sShroomishPose126,
	sShroomishPose127,
	sShroomishPose128,
	sShroomishPose129,
	sShroomishPose130,
	sShroomishPose1,
	sShroomishPose2,
	sShroomishPose3,
	sShroomishPose4,
	sShroomishPose5,
	sShroomishPose6,
	sShroomishPose7,
	sShroomishPose8,
	sShroomishPose9,
	sShroomishPose10,
	sShroomishPose11,
	sShroomishPose12,
	sShroomishPose13,
	sShroomishPose14,
	sShroomishPose15,
	sShroomishPose16,
	sShroomishPose17,
	sShroomishPose18,
	sShroomishPose19,
	sShroomishPose20,
	sShroomishPose21,
	sShroomishPose22,
	sShroomishPose23,
	sShroomishPose24,
	sShroomishPose76,
	sShroomishPose104,
	sShroomishPose100,
	sShroomishPose96,
	sShroomishPose92,
	sShroomishPose88,
	sShroomishPose84,
	sShroomishPose80,
	sShroomishPose76,
	sShroomishPose164,
	sShroomishPose165,
	sShroomishPose88,
	sShroomishPose92,
	sShroomishPose96,
	sShroomishPose169,
	sShroomishPose170,
	sShroomishPose1,
	sShroomishPose76,
	sShroomishPose4,
	sShroomishPose164,
	sShroomishPose7,
	sShroomishPose165,
	sShroomishPose10,
	sShroomishPose178,
	sShroomishPose179,
	sShroomishPose180,
	sShroomishPose16,
	sShroomishPose182,
	sShroomishPose19,
	sShroomishPose169,
	sShroomishPose22,
	sShroomishPose170,
	sShroomishPose76,
	sShroomishPose170,
	sShroomishPose169,
	sShroomishPose96,
	sShroomishPose92,
	sShroomishPose118,
	sShroomishPose193,
	sShroomishPose164,
	sShroomishPose1,
	sShroomishPose22,
	sShroomishPose19,
	sShroomishPose16,
	sShroomishPose13,
	sShroomishPose10,
	sShroomishPose7,
	sShroomishPose4,
};

static const struct PositionSets sAxPositionsShroomish[] = {
	[0] = { .set = { {-1, -5}, {-8, -4}, {7, -4}, {-1, -6} } },
	[1] = { .set = { {0, -4}, {-8, -3}, {7, -4}, {0, -5} } },
	[2] = { .set = { {-1, -4}, {-8, -4}, {7, -3}, {-1, -5} } },
	[3] = { .set = { {4, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
	[4] = { .set = { {3, -4}, {7, -5}, {-7, -2}, {-1, -5} } },
	[5] = { .set = { {5, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
	[6] = { .set = { {6, -6}, {2, -8}, {-3, -2}, {-1, -7} } },
	[7] = { .set = { {6, -5}, {2, -7}, {-4, -1}, {-1, -6} } },
	[8] = { .set = { {7, -5}, {-1, -7}, {-2, 0}, {-1, -6} } },
	[9] = { .set = { {3, -7}, {-6, -9}, {7, -3}, {0, -7} } },
	[10] = { .set = { {3, -7}, {-4, -9}, {5, -1}, {0, -6} } },
	[11] = { .set = { {2, -7}, {-7, -7}, {6, -1}, {0, -6} } },
	[12] = { .set = { {-1, -6}, {7, -5}, {-8, -5}, {-1, -7} } },
	[13] = { .set = { {-1, -5}, {7, -3}, {-8, -5}, {0, -6} } },
	[14] = { .set = { {0, -5}, {7, -4}, {-8, -2}, {-1, -6} } },
	[15] = { .set = { {-4, -7}, {5, -9}, {-8, -3}, {-1, -7} } },
	[16] = { .set = { {-4, -7}, {3, -9}, {-6, -1}, {-1, -6} } },
	[17] = { .set = { {-3, -7}, {6, -7}, {-7, -1}, {-1, -6} } },
	[18] = { .set = { {-7, -6}, {-3, -8}, {2, -2}, {0, -7} } },
	[19] = { .set = { {-7, -5}, {-3, -7}, {3, -1}, {0, -6} } },
	[20] = { .set = { {-8, -5}, {0, -7}, {1, 0}, {0, -6} } },
	[21] = { .set = { {-5, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[22] = { .set = { {-4, -4}, {-8, -5}, {6, -2}, {0, -5} } },
	[23] = { .set = { {-6, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[24] = { .set = { {-1, -5}, {-8, -4}, {7, -4}, {-1, -6} } },
	[25] = { .set = { {0, -4}, {-8, -3}, {7, -4}, {0, -5} } },
	[26] = { .set = { {-1, -4}, {-8, -4}, {7, -3}, {-1, -5} } },
	[27] = { .set = { {4, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
	[28] = { .set = { {3, -4}, {7, -5}, {-7, -2}, {-1, -5} } },
	[29] = { .set = { {5, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
	[30] = { .set = { {6, -6}, {2, -8}, {-3, -2}, {-1, -7} } },
	[31] = { .set = { {6, -5}, {2, -7}, {-4, -1}, {-1, -6} } },
	[32] = { .set = { {7, -5}, {-1, -7}, {-2, 0}, {-1, -6} } },
	[33] = { .set = { {3, -7}, {-6, -9}, {7, -3}, {0, -7} } },
	[34] = { .set = { {3, -7}, {-4, -9}, {5, -1}, {0, -6} } },
	[35] = { .set = { {2, -7}, {-7, -7}, {6, -1}, {0, -6} } },
	[36] = { .set = { {-1, -6}, {7, -5}, {-8, -5}, {-1, -7} } },
	[37] = { .set = { {-1, -5}, {7, -3}, {-8, -5}, {0, -6} } },
	[38] = { .set = { {0, -5}, {7, -4}, {-8, -2}, {-1, -6} } },
	[39] = { .set = { {-4, -7}, {5, -9}, {-8, -3}, {-1, -7} } },
	[40] = { .set = { {-4, -7}, {3, -9}, {-6, -1}, {-1, -6} } },
	[41] = { .set = { {-3, -7}, {6, -7}, {-7, -1}, {-1, -6} } },
	[42] = { .set = { {-7, -6}, {-3, -8}, {2, -2}, {0, -7} } },
	[43] = { .set = { {-7, -5}, {-3, -7}, {3, -1}, {0, -6} } },
	[44] = { .set = { {-8, -5}, {0, -7}, {1, 0}, {0, -6} } },
	[45] = { .set = { {-5, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[46] = { .set = { {-4, -4}, {-8, -5}, {6, -2}, {0, -5} } },
	[47] = { .set = { {-6, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[48] = { .set = { {-1, -5}, {-8, -4}, {7, -4}, {-1, -6} } },
	[49] = { .set = { {0, -4}, {-8, -3}, {7, -4}, {0, -5} } },
	[50] = { .set = { {-1, -4}, {-8, -4}, {7, -3}, {-1, -5} } },
	[51] = { .set = { {4, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
	[52] = { .set = { {3, -4}, {7, -5}, {-7, -2}, {-1, -5} } },
	[53] = { .set = { {5, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
	[54] = { .set = { {6, -6}, {2, -8}, {-3, -2}, {-1, -7} } },
	[55] = { .set = { {6, -5}, {2, -7}, {-4, -1}, {-1, -6} } },
	[56] = { .set = { {7, -5}, {-1, -7}, {-2, 0}, {-1, -6} } },
	[57] = { .set = { {3, -7}, {-6, -9}, {7, -3}, {0, -7} } },
	[58] = { .set = { {3, -7}, {-4, -9}, {5, -1}, {0, -6} } },
	[59] = { .set = { {2, -7}, {-7, -7}, {6, -1}, {0, -6} } },
	[60] = { .set = { {-1, -6}, {7, -5}, {-8, -5}, {-1, -7} } },
	[61] = { .set = { {-1, -5}, {7, -3}, {-8, -5}, {0, -6} } },
	[62] = { .set = { {0, -5}, {7, -4}, {-8, -2}, {-1, -6} } },
	[63] = { .set = { {-4, -7}, {5, -9}, {-8, -3}, {-1, -7} } },
	[64] = { .set = { {-4, -7}, {3, -9}, {-6, -1}, {-1, -6} } },
	[65] = { .set = { {-3, -7}, {6, -7}, {-7, -1}, {-1, -6} } },
	[66] = { .set = { {-7, -6}, {-3, -8}, {2, -2}, {0, -7} } },
	[67] = { .set = { {-7, -5}, {-3, -7}, {3, -1}, {0, -6} } },
	[68] = { .set = { {-8, -5}, {0, -7}, {1, 0}, {0, -6} } },
	[69] = { .set = { {-5, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[70] = { .set = { {-4, -4}, {-8, -5}, {6, -2}, {0, -5} } },
	[71] = { .set = { {-6, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[72] = { .set = { {-1, -5}, {-8, -4}, {7, -4}, {-1, -6} } },
	[73] = { .set = { {0, -4}, {-8, -3}, {7, -4}, {0, -5} } },
	[74] = { .set = { {-1, -4}, {-8, -4}, {7, -3}, {-1, -5} } },
	[75] = { .set = { {-1, -1}, {-9, -4}, {8, -4}, {-1, -5} } },
	[76] = { .set = { {4, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
	[77] = { .set = { {3, -4}, {7, -5}, {-7, -2}, {-1, -5} } },
	[78] = { .set = { {5, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
	[79] = { .set = { {5, -2}, {7, -7}, {-6, -3}, {0, -6} } },
	[80] = { .set = { {6, -6}, {2, -8}, {-3, -2}, {-1, -7} } },
	[81] = { .set = { {6, -5}, {2, -7}, {-4, -1}, {-1, -6} } },
	[82] = { .set = { {7, -5}, {-1, -7}, {-2, 0}, {-1, -6} } },
	[83] = { .set = { {7, -4}, {7, -8}, {0, -2}, {1, -8} } },
	[84] = { .set = { {3, -7}, {-6, -9}, {7, -3}, {0, -7} } },
	[85] = { .set = { {3, -7}, {-4, -9}, {5, -1}, {0, -6} } },
	[86] = { .set = { {2, -7}, {-7, -7}, {6, -1}, {0, -6} } },
	[87] = { .set = { {0, -6}, {-7, -8}, {7, -5}, {-1, -9} } },
	[88] = { .set = { {-1, -6}, {7, -5}, {-8, -5}, {-1, -7} } },
	[89] = { .set = { {-1, -5}, {7, -3}, {-8, -5}, {0, -6} } },
	[90] = { .set = { {0, -5}, {7, -4}, {-8, -2}, {-1, -6} } },
	[91] = { .set = { {-1, -7}, {8, -8}, {-9, -8}, {-1, -10} } },
	[92] = { .set = { {-4, -7}, {5, -9}, {-8, -3}, {-1, -7} } },
	[93] = { .set = { {-4, -7}, {3, -9}, {-6, -1}, {-1, -6} } },
	[94] = { .set = { {-3, -7}, {6, -7}, {-7, -1}, {-1, -6} } },
	[95] = { .set = { {-1, -6}, {6, -8}, {-8, -5}, {0, -9} } },
	[96] = { .set = { {-7, -6}, {-3, -8}, {2, -2}, {0, -7} } },
	[97] = { .set = { {-7, -5}, {-3, -7}, {3, -1}, {0, -6} } },
	[98] = { .set = { {-8, -5}, {0, -7}, {1, 0}, {0, -6} } },
	[99] = { .set = { {-8, -4}, {-8, -8}, {-1, -2}, {-2, -8} } },
	[100] = { .set = { {-5, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[101] = { .set = { {-4, -4}, {-8, -5}, {6, -2}, {0, -5} } },
	[102] = { .set = { {-6, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[103] = { .set = { {-6, -2}, {-8, -7}, {5, -3}, {-1, -6} } },
	[104] = { .set = { {-1, -5}, {-8, -4}, {7, -4}, {-1, -6} } },
	[105] = { .set = { {-5, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[106] = { .set = { {-7, -6}, {-3, -8}, {2, -2}, {0, -7} } },
	[107] = { .set = { {-4, -7}, {5, -9}, {-8, -3}, {-1, -7} } },
	[108] = { .set = { {-1, -6}, {7, -5}, {-8, -5}, {-1, -7} } },
	[109] = { .set = { {3, -7}, {-6, -9}, {7, -3}, {0, -7} } },
	[110] = { .set = { {6, -6}, {2, -8}, {-3, -2}, {-1, -7} } },
	[111] = { .set = { {4, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
	[112] = { .set = { {-1, -1}, {-9, -4}, {8, -4}, {-1, -5} } },
	[113] = { .set = { {-6, -2}, {-8, -7}, {5, -3}, {-1, -6} } },
	[114] = { .set = { {-8, -4}, {-8, -8}, {-1, -2}, {-2, -8} } },
	[115] = { .set = { {-2, -6}, {5, -8}, {-9, -5}, {-1, -9} } },
	[116] = { .set = { {-1, -7}, {8, -8}, {-9, -8}, {-1, -10} } },
	[117] = { .set = { {1, -6}, {-6, -8}, {8, -5}, {0, -9} } },
	[118] = { .set = { {7, -4}, {7, -8}, {0, -2}, {1, -8} } },
	[119] = { .set = { {5, -2}, {7, -7}, {-6, -3}, {0, -6} } },
	[120] = { .set = { {-4, -2}, {-7, -5}, {5, 0}, {0, -5} } },
	[121] = { .set = { {-5, -1}, {-7, -4}, {6, 1}, {0, -4} } },
	[122] = { .set = { {-1, -9}, {-8, -6}, {7, -6}, {-1, -10} } },
	[123] = { .set = { {3, -9}, {8, -9}, {-7, -4}, {-1, -9} } },
	[124] = { .set = { {4, -11}, {1, -9}, {3, -2}, {-1, -9} } },
	[125] = { .set = { {3, -13}, {-5, -11}, {3, -2}, {-1, -9} } },
	[126] = { .set = { {-1, -13}, {7, -8}, {-8, -8}, {-1, -9} } },
	[127] = { .set = { {-4, -13}, {4, -11}, {-4, -2}, {0, -9} } },
	[128] = { .set = { {-5, -11}, {-2, -9}, {-4, -2}, {0, -9} } },
	[129] = { .set = { {-4, -9}, {-9, -9}, {6, -4}, {0, -9} } },
	[130] = { .set = { {-1, -5}, {-8, -4}, {7, -4}, {-1, -6} } },
	[131] = { .set = { {0, -4}, {-8, -3}, {7, -4}, {0, -5} } },
	[132] = { .set = { {-1, -4}, {-8, -4}, {7, -3}, {-1, -5} } },
	[133] = { .set = { {4, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
	[134] = { .set = { {3, -4}, {7, -5}, {-7, -2}, {-1, -5} } },
	[135] = { .set = { {5, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
	[136] = { .set = { {6, -6}, {2, -8}, {-3, -2}, {-1, -7} } },
	[137] = { .set = { {6, -5}, {2, -7}, {-4, -1}, {-1, -6} } },
	[138] = { .set = { {7, -5}, {-1, -7}, {-2, 0}, {-1, -6} } },
	[139] = { .set = { {3, -7}, {-6, -9}, {7, -3}, {0, -7} } },
	[140] = { .set = { {3, -7}, {-4, -9}, {5, -1}, {0, -6} } },
	[141] = { .set = { {2, -7}, {-7, -7}, {6, -1}, {0, -6} } },
	[142] = { .set = { {-1, -6}, {7, -5}, {-8, -5}, {-1, -7} } },
	[143] = { .set = { {-1, -5}, {7, -3}, {-8, -5}, {0, -6} } },
	[144] = { .set = { {0, -5}, {7, -4}, {-8, -2}, {-1, -6} } },
	[145] = { .set = { {-4, -7}, {5, -9}, {-8, -3}, {-1, -7} } },
	[146] = { .set = { {-4, -7}, {3, -9}, {-6, -1}, {-1, -6} } },
	[147] = { .set = { {-3, -7}, {6, -7}, {-7, -1}, {-1, -6} } },
	[148] = { .set = { {-7, -6}, {-3, -8}, {2, -2}, {0, -7} } },
	[149] = { .set = { {-7, -5}, {-3, -7}, {3, -1}, {0, -6} } },
	[150] = { .set = { {-8, -5}, {0, -7}, {1, 0}, {0, -6} } },
	[151] = { .set = { {-5, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[152] = { .set = { {-4, -4}, {-8, -5}, {6, -2}, {0, -5} } },
	[153] = { .set = { {-6, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[154] = { .set = { {-1, -1}, {-9, -4}, {8, -4}, {-1, -5} } },
	[155] = { .set = { {-6, -2}, {-8, -7}, {5, -3}, {-1, -6} } },
	[156] = { .set = { {-8, -4}, {-8, -8}, {-1, -2}, {-2, -8} } },
	[157] = { .set = { {-1, -6}, {6, -8}, {-8, -5}, {0, -9} } },
	[158] = { .set = { {-1, -7}, {8, -8}, {-9, -8}, {-1, -10} } },
	[159] = { .set = { {0, -6}, {-7, -8}, {7, -5}, {-1, -9} } },
	[160] = { .set = { {7, -4}, {7, -8}, {0, -2}, {1, -8} } },
	[161] = { .set = { {5, -2}, {7, -7}, {-6, -3}, {0, -6} } },
	[162] = { .set = { {-1, -1}, {-9, -4}, {8, -4}, {-1, -5} } },
	[163] = { .set = { {4, -2}, {6, -7}, {-7, -3}, {-1, -6} } },
	[164] = { .set = { {5, -4}, {5, -8}, {-2, -2}, {-1, -8} } },
	[165] = { .set = { {0, -6}, {-7, -8}, {7, -5}, {-1, -9} } },
	[166] = { .set = { {-1, -7}, {8, -8}, {-9, -8}, {-1, -10} } },
	[167] = { .set = { {-1, -6}, {6, -8}, {-8, -5}, {0, -9} } },
	[168] = { .set = { {-6, -4}, {-6, -8}, {1, -2}, {0, -8} } },
	[169] = { .set = { {-5, -2}, {-7, -7}, {6, -3}, {0, -6} } },
	[170] = { .set = { {-1, -5}, {-8, -4}, {7, -4}, {-1, -6} } },
	[171] = { .set = { {-1, -1}, {-9, -4}, {8, -4}, {-1, -5} } },
	[172] = { .set = { {4, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
	[173] = { .set = { {4, -2}, {6, -7}, {-7, -3}, {-1, -6} } },
	[174] = { .set = { {6, -6}, {2, -8}, {-3, -2}, {-1, -7} } },
	[175] = { .set = { {5, -4}, {5, -8}, {-2, -2}, {-1, -8} } },
	[176] = { .set = { {3, -7}, {-6, -9}, {7, -3}, {0, -7} } },
	[177] = { .set = { {-1, -3}, {-8, -5}, {6, -2}, {-2, -6} } },
	[178] = { .set = { {-1, -7}, {7, -6}, {-8, -6}, {-1, -8} } },
	[179] = { .set = { {-1, -4}, {8, -5}, {-9, -5}, {-1, -7} } },
	[180] = { .set = { {-4, -7}, {5, -9}, {-8, -3}, {-1, -7} } },
	[181] = { .set = { {-2, -3}, {5, -5}, {-9, -2}, {-1, -6} } },
	[182] = { .set = { {-7, -6}, {-3, -8}, {2, -2}, {0, -7} } },
	[183] = { .set = { {-6, -4}, {-6, -8}, {1, -2}, {0, -8} } },
	[184] = { .set = { {-5, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[185] = { .set = { {-5, -2}, {-7, -7}, {6, -3}, {0, -6} } },
	[186] = { .set = { {-1, -1}, {-9, -4}, {8, -4}, {-1, -5} } },
	[187] = { .set = { {-5, -2}, {-7, -7}, {6, -3}, {0, -6} } },
	[188] = { .set = { {-6, -4}, {-6, -8}, {1, -2}, {0, -8} } },
	[189] = { .set = { {-1, -6}, {6, -8}, {-8, -5}, {0, -9} } },
	[190] = { .set = { {-1, -7}, {8, -8}, {-9, -8}, {-1, -10} } },
	[191] = { .set = { {1, -6}, {-6, -8}, {8, -5}, {0, -9} } },
	[192] = { .set = { {6, -4}, {6, -8}, {-1, -2}, {0, -8} } },
	[193] = { .set = { {4, -2}, {6, -7}, {-7, -3}, {-1, -6} } },
	[194] = { .set = { {-1, -5}, {-8, -4}, {7, -4}, {-1, -6} } },
	[195] = { .set = { {-5, -5}, {-7, -6}, {5, -2}, {0, -6} } },
	[196] = { .set = { {-7, -6}, {-3, -8}, {2, -2}, {0, -7} } },
	[197] = { .set = { {-4, -7}, {5, -9}, {-8, -3}, {-1, -7} } },
	[198] = { .set = { {-1, -6}, {7, -5}, {-8, -5}, {-1, -7} } },
	[199] = { .set = { {3, -7}, {-6, -9}, {7, -3}, {0, -7} } },
	[200] = { .set = { {6, -6}, {2, -8}, {-3, -2}, {-1, -7} } },
	[201] = { .set = { {4, -5}, {6, -6}, {-6, -2}, {-1, -6} } },
};

static const ax_anim *const sShroomishAnimTable1[] = {
	gAxSharedAnim_02602,
	gAxSharedAnim_02678,
	gAxSharedAnim_02687,
	gAxSharedAnim_02696,
	gAxSharedAnim_02614,
	gAxSharedAnim_02636,
	gAxSharedAnim_02649,
	gAxSharedAnim_02658,
};

static const ax_anim *const sShroomishAnimTable2[] = {
	gAxSharedAnim_01560,
	sShroomishAnims_2_2,
	gAxSharedAnim_01819,
	sShroomishAnims_2_4,
	gAxSharedAnim_01891,
	sShroomishAnims_2_6,
	gAxSharedAnim_01931,
	sShroomishAnims_2_8,
};

static const ax_anim *const sShroomishAnimTable3[] = {
	gAxSharedAnim_01963,
	sShroomishAnims_3_2,
	gAxSharedAnim_01993,
	sShroomishAnims_3_4,
	gAxSharedAnim_02029,
	sShroomishAnims_3_6,
	gAxSharedAnim_02061,
	sShroomishAnims_3_8,
};

static const ax_anim *const sShroomishAnimTable4[] = {
	sShroomishAnims_4_1,
	sShroomishAnims_4_2,
	sShroomishAnims_4_3,
	sShroomishAnims_4_4,
	sShroomishAnims_4_5,
	sShroomishAnims_4_6,
	sShroomishAnims_4_7,
	sShroomishAnims_4_8,
};

static const ax_anim *const sShroomishAnimTable5[] = {
	sShroomishAnims_5_1,
	sShroomishAnims_5_2,
	sShroomishAnims_5_3,
	sShroomishAnims_5_4,
	sShroomishAnims_5_5,
	sShroomishAnims_5_6,
	sShroomishAnims_5_7,
	sShroomishAnims_5_8,
};

static const ax_anim *const sShroomishAnimTable6[] = {
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
};

static const ax_anim *const sShroomishAnimTable7[] = {
	gAxSharedAnim_00330,
	sShroomishAnims_7_2,
	gAxSharedAnim_00348,
	gAxSharedAnim_00356,
	gAxSharedAnim_00368,
	gAxSharedAnim_00376,
	gAxSharedAnim_00383,
	gAxSharedAnim_00390,
};

static const ax_anim *const sShroomishAnimTable8[] = {
	sShroomishAnims_8_1,
	sShroomishAnims_8_2,
	sShroomishAnims_8_3,
	sShroomishAnims_8_4,
	sShroomishAnims_8_5,
	sShroomishAnims_8_6,
	sShroomishAnims_8_7,
	sShroomishAnims_8_8,
};

static const ax_anim *const sShroomishAnimTable9[] = {
	sShroomishAnims_9_1,
	sShroomishAnims_9_2,
	sShroomishAnims_9_3,
	sShroomishAnims_9_4,
	sShroomishAnims_9_5,
	sShroomishAnims_9_6,
	sShroomishAnims_9_7,
	sShroomishAnims_9_8,
};

static const ax_anim *const sShroomishAnimTable10[] = {
	gAxSharedAnim_00705,
	gAxSharedAnim_00714,
	gAxSharedAnim_00725,
	gAxSharedAnim_00737,
	gAxSharedAnim_00750,
	gAxSharedAnim_00760,
	gAxSharedAnim_00772,
	gAxSharedAnim_00781,
};

static const ax_anim *const sShroomishAnimTable11[] = {
	sShroomishAnims_11_1,
	sShroomishAnims_11_2,
	sShroomishAnims_11_3,
	sShroomishAnims_11_4,
	sShroomishAnims_11_5,
	gAxSharedAnim_00927,
	sShroomishAnims_11_7,
	gAxSharedAnim_00972,
};

static const ax_anim *const sShroomishAnimTable12[] = {
	gAxSharedAnim_01018,
	gAxSharedAnim_01127,
	gAxSharedAnim_01099,
	gAxSharedAnim_01085,
	gAxSharedAnim_01084,
	gAxSharedAnim_01065,
	gAxSharedAnim_01034,
	gAxSharedAnim_01019,
};

static const ax_anim *const sShroomishAnimTable13[] = {
	gAxSharedAnim_01145,
	gAxSharedAnim_01227,
	gAxSharedAnim_01218,
	gAxSharedAnim_01201,
	gAxSharedAnim_01190,
	gAxSharedAnim_01179,
	gAxSharedAnim_01168,
	gAxSharedAnim_01157,
};

static const ax_anim *const *const sAxAnimationsShroomish[] = {
	sShroomishAnimTable1,
	sShroomishAnimTable2,
	sShroomishAnimTable3,
	sShroomishAnimTable4,
	sShroomishAnimTable5,
	sShroomishAnimTable6,
	sShroomishAnimTable7,
	sShroomishAnimTable8,
	sShroomishAnimTable9,
	sShroomishAnimTable10,
	sShroomishAnimTable11,
	sShroomishAnimTable12,
	sShroomishAnimTable13,
};

static const ax_sprite *const sAxSpritesShroomish[] = {
	sShroomishSprites1,
	sShroomishSprites2,
	sShroomishSprites3,
	sShroomishSprites4,
	sShroomishSprites5,
	sShroomishSprites6,
	sShroomishSprites7,
	sShroomishSprites8,
	sShroomishSprites9,
	sShroomishSprites10,
	sShroomishSprites11,
	sShroomishSprites12,
	sShroomishSprites13,
	sShroomishSprites14,
	sShroomishSprites15,
	sShroomishSprites16,
	sShroomishSprites17,
	sShroomishSprites18,
	sShroomishSprites19,
	sShroomishSprites20,
	sShroomishSprites21,
	sShroomishSprites22,
	sShroomishSprites23,
	sShroomishSprites24,
	sShroomishSprites25,
	sShroomishSprites26,
	sShroomishSprites27,
};

static const axmain sAxMainShroomish = {
	.poses = sAxPosesShroomish,
	.animations = sAxAnimationsShroomish,
	.animCount = ARRAY_COUNT(sAxAnimationsShroomish),
	.spriteData = sAxSpritesShroomish,
	.positions = sAxPositionsShroomish,
};
