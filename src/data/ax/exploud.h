/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainExploud;
const SiroArchive gAxExploud = {"SIRO", &sAxMainExploud};

static const ax_pose sExploudPose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose3[] = {
	AX_POSE(2, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose12[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose15[] = {
	AX_POSE(14, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose18[] = {
	AX_POSE(11, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose21[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose22[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose23[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose24[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose28[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose32[] = {
	AX_POSE(16, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(17, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(237, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(253, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose36[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose40[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose44[] = {
	AX_POSE(21, OAM1(233, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(22, OAM1(249, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose48[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose52[] = {
	AX_POSE(19, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose56[] = {
	AX_POSE(16, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(17, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(250, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose92[] = {
	AX_POSE(16, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(17, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(254, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose94[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose102[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose104[] = {
	AX_POSE(16, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(17, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose113[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose114[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose115[] = {
	AX_POSE(25, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose116[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose117[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose118[] = {
	AX_POSE(28, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose119[] = {
	AX_POSE(29, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose120[] = {
	AX_POSE(28, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose121[] = {
	AX_POSE(27, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose122[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose130[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose132[] = {
	AX_POSE(21, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(22, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose134[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose140[] = {
	AX_POSE(16, OAM1(235, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(17, OAM1(251, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE(18, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(251, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(12, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose190[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose191[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose202[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sExploudPose203[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_anim sExploudAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 38, .offset = {13, -12}, .shadow = {13, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 39, .offset = {21, -17}, .shadow = {21, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {21, -17}, .shadow = {21, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 45, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-13, -12}, .shadow = {-13, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-21, -17}, .shadow = {-21, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-21, -17}, .shadow = {-21, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 52, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 53, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 54, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-17, 18}, .shadow = {-17, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {-18, 17}, .shadow = {-18, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-17, 18}, .shadow = {-17, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {-18, 17}, .shadow = {-18, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 61, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 62, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {17, 18}, .shadow = {17, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 63, .offset = {18, 17}, .shadow = {18, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {17, 18}, .shadow = {17, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {18, 17}, .shadow = {18, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {6, 6}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 65, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 66, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {19, 1}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {19, 0}, .shadow = {19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {19, 1}, .shadow = {19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 68, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 69, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {13, -12}, .shadow = {13, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {21, -17}, .shadow = {21, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {20, -18}, .shadow = {20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {21, -17}, .shadow = {21, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 76, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 78, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 2, .poseId = 77, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 78, .offset = {-13, -12}, .shadow = {-13, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 79, .offset = {-21, -17}, .shadow = {-21, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-20, -18}, .shadow = {-20, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {-21, -17}, .shadow = {-21, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 80, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 81, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {-19, 1}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-19, 0}, .shadow = {-19, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {-19, 1}, .shadow = {-19, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 85, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-17, 18}, .shadow = {-17, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 87, .offset = {-18, 17}, .shadow = {-18, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-17, 18}, .shadow = {-17, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {-18, 17}, .shadow = {-18, 17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_4_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 89, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 89, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_4_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_4_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 92, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 93, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_4_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 95, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_4_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_4_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 99, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_4_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 101, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 101, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_4_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 2, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 1, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 106, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 110, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 111, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 105, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 109, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 110, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 104, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 108, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 111, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 107, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 108, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 110, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 106, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 107, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 109, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 105, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 106, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 108, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 111, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 104, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 105, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 107, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 110, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 111, .offset = {0, -6}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 104, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_8_1[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_8_2[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_8_3[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_8_4[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_8_5[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_8_6[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_8_7[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 135, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_8_8[] = {
	{ .frames = 40, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 136, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {11, 9}, .shadow = {11, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {10, 16}, .shadow = {10, 16} },
	{ .frames = 3, .unkFlags = 0, .poseId = 142, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 143, .offset = {-10, 16}, .shadow = {-10, 16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-11, 9}, .shadow = {-11, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {24, 11}, .shadow = {24, 11} },
	{ .frames = 3, .unkFlags = 0, .poseId = 141, .offset = {22, 21}, .shadow = {22, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 142, .offset = {12, 23}, .shadow = {12, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {3, 16}, .shadow = {3, 16} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 145, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {10, -7}, .shadow = {10, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {19, -6}, .shadow = {19, -6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 140, .offset = {21, 0}, .shadow = {21, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 141, .offset = {17, 7}, .shadow = {17, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {10, 8}, .shadow = {10, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {13, -22}, .shadow = {13, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 139, .offset = {20, -21}, .shadow = {20, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 140, .offset = {22, -13}, .shadow = {22, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {19, -6}, .shadow = {19, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {8, -1}, .shadow = {8, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-8, -19}, .shadow = {-8, -19} },
	{ .frames = 3, .unkFlags = 0, .poseId = 138, .offset = {0, -22}, .shadow = {0, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 139, .offset = {8, -19}, .shadow = {8, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-13, -22}, .shadow = {-13, -22} },
	{ .frames = 3, .unkFlags = 0, .poseId = 145, .offset = {-20, -21}, .shadow = {-20, -21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 144, .offset = {-22, -13}, .shadow = {-22, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {-19, -6}, .shadow = {-19, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 142, .offset = {-8, -1}, .shadow = {-8, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 138, .offset = {-10, -7}, .shadow = {-10, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-19, -6}, .shadow = {-19, -6} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {-21, 0}, .shadow = {-21, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 143, .offset = {-17, 7}, .shadow = {-17, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {-10, 8}, .shadow = {-10, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 141, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 138, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {-24, 11}, .shadow = {-24, 11} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {-22, 21}, .shadow = {-22, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 142, .offset = {-12, 23}, .shadow = {-12, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 141, .offset = {-3, 16}, .shadow = {-3, 16} },
	{ .frames = 1, .unkFlags = 0, .poseId = 140, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 183, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 183, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 183, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 183, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 182, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 184, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 184, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 184, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 182, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 186, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 186, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 186, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 185, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 185, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 189, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 189, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 189, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 188, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 192, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 192, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 192, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 191, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 195, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 195, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 195, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 194, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 196, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 198, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 198, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 198, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 197, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 199, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 197, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 201, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 201, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 201, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 200, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 202, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 202, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sExploudAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 203, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 204, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 204, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 204, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 203, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 205, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 205, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 203, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sExploudGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_1.4bpp.lz");
static const ax_sprite sExploudSprites1[] = {
	{sExploudGfx1, ARRAY_COUNT(sExploudGfx1)}, 
	{NULL, 0}
};
static const u8 sExploudGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_2.4bpp.lz");
static const ax_sprite sExploudSprites2[] = {
	{sExploudGfx2, ARRAY_COUNT(sExploudGfx2)}, 
	{NULL, 0}
};
static const u8 sExploudGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_3.4bpp.lz");
static const ax_sprite sExploudSprites3[] = {
	{sExploudGfx3, ARRAY_COUNT(sExploudGfx3)}, 
	{NULL, 0}
};
static const u8 sExploudGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_4.4bpp.lz");
static const ax_sprite sExploudSprites4[] = {
	{sExploudGfx4, ARRAY_COUNT(sExploudGfx4)}, 
	{NULL, 0}
};
static const u8 sExploudGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_5.4bpp.lz");
static const ax_sprite sExploudSprites5[] = {
	{sExploudGfx5, ARRAY_COUNT(sExploudGfx5)}, 
	{NULL, 0}
};
static const u8 sExploudGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_6.4bpp.lz");
static const ax_sprite sExploudSprites6[] = {
	{sExploudGfx6, ARRAY_COUNT(sExploudGfx6)}, 
	{NULL, 0}
};
static const u8 sExploudGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_7.4bpp.lz");
static const ax_sprite sExploudSprites7[] = {
	{sExploudGfx7, ARRAY_COUNT(sExploudGfx7)}, 
	{NULL, 0}
};
static const u8 sExploudGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_8.4bpp.lz");
static const ax_sprite sExploudSprites8[] = {
	{sExploudGfx8, ARRAY_COUNT(sExploudGfx8)}, 
	{NULL, 0}
};
static const u8 sExploudGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_9.4bpp.lz");
static const ax_sprite sExploudSprites9[] = {
	{sExploudGfx9, ARRAY_COUNT(sExploudGfx9)}, 
	{NULL, 0}
};
static const u8 sExploudGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_10.4bpp.lz");
static const ax_sprite sExploudSprites10[] = {
	{sExploudGfx10, ARRAY_COUNT(sExploudGfx10)}, 
	{NULL, 0}
};
static const u8 sExploudGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_11.4bpp.lz");
static const ax_sprite sExploudSprites11[] = {
	{sExploudGfx11, ARRAY_COUNT(sExploudGfx11)}, 
	{NULL, 0}
};
static const u8 sExploudGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_12.4bpp.lz");
static const ax_sprite sExploudSprites12[] = {
	{sExploudGfx12, ARRAY_COUNT(sExploudGfx12)}, 
	{NULL, 0}
};
static const u8 sExploudGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_13.4bpp.lz");
static const ax_sprite sExploudSprites13[] = {
	{sExploudGfx13, ARRAY_COUNT(sExploudGfx13)}, 
	{NULL, 0}
};
static const u8 sExploudGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_14.4bpp.lz");
static const ax_sprite sExploudSprites14[] = {
	{sExploudGfx14, ARRAY_COUNT(sExploudGfx14)}, 
	{NULL, 0}
};
static const u8 sExploudGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_15.4bpp.lz");
static const ax_sprite sExploudSprites15[] = {
	{sExploudGfx15, ARRAY_COUNT(sExploudGfx15)}, 
	{NULL, 0}
};
static const u8 sExploudGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_16.4bpp.lz");
static const ax_sprite sExploudSprites16[] = {
	{sExploudGfx16, ARRAY_COUNT(sExploudGfx16)}, 
	{NULL, 0}
};
static const u8 sExploudGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_17.4bpp.lz");
static const ax_sprite sExploudSprites17[] = {
	{sExploudGfx17, ARRAY_COUNT(sExploudGfx17)}, 
	{NULL, 0}
};
static const u8 sExploudGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_18.4bpp.lz");
static const ax_sprite sExploudSprites18[] = {
	{sExploudGfx18, ARRAY_COUNT(sExploudGfx18)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExploudGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_19.4bpp.lz");
static const ax_sprite sExploudSprites19[] = {
	{sExploudGfx19, ARRAY_COUNT(sExploudGfx19)}, 
	{NULL, 0}
};
static const u8 sExploudGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_20.4bpp.lz");
static const u8 sExploudGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_20_1.4bpp.lz");
static const ax_sprite sExploudSprites20[] = {
	{sExploudGfx20, ARRAY_COUNT(sExploudGfx20)}, 
	{NULL, 32}, 
	{sExploudGfx20_1, ARRAY_COUNT(sExploudGfx20_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExploudGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_21.4bpp.lz");
static const u8 sExploudGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_21_1.4bpp.lz");
static const ax_sprite sExploudSprites21[] = {
	{NULL, 32}, 
	{sExploudGfx21, ARRAY_COUNT(sExploudGfx21)}, 
	{NULL, 32}, 
	{sExploudGfx21_1, ARRAY_COUNT(sExploudGfx21_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sExploudGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_22.4bpp.lz");
static const ax_sprite sExploudSprites22[] = {
	{sExploudGfx22, ARRAY_COUNT(sExploudGfx22)}, 
	{NULL, 0}
};
static const u8 sExploudGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_23.4bpp.lz");
static const ax_sprite sExploudSprites23[] = {
	{sExploudGfx23, ARRAY_COUNT(sExploudGfx23)}, 
	{NULL, 0}
};
static const u8 sExploudGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_24.4bpp.lz");
static const ax_sprite sExploudSprites24[] = {
	{sExploudGfx24, ARRAY_COUNT(sExploudGfx24)}, 
	{NULL, 0}
};
static const u8 sExploudGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_25.4bpp.lz");
static const ax_sprite sExploudSprites25[] = {
	{sExploudGfx25, ARRAY_COUNT(sExploudGfx25)}, 
	{NULL, 0}
};
static const u8 sExploudGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_26.4bpp.lz");
static const ax_sprite sExploudSprites26[] = {
	{sExploudGfx26, ARRAY_COUNT(sExploudGfx26)}, 
	{NULL, 0}
};
static const u8 sExploudGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_27.4bpp.lz");
static const ax_sprite sExploudSprites27[] = {
	{sExploudGfx27, ARRAY_COUNT(sExploudGfx27)}, 
	{NULL, 0}
};
static const u8 sExploudGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_28.4bpp.lz");
static const ax_sprite sExploudSprites28[] = {
	{sExploudGfx28, ARRAY_COUNT(sExploudGfx28)}, 
	{NULL, 0}
};
static const u8 sExploudGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_29.4bpp.lz");
static const ax_sprite sExploudSprites29[] = {
	{sExploudGfx29, ARRAY_COUNT(sExploudGfx29)}, 
	{NULL, 0}
};
static const u8 sExploudGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/exploud/sprite_30.4bpp.lz");
static const ax_sprite sExploudSprites30[] = {
	{sExploudGfx30, ARRAY_COUNT(sExploudGfx30)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesExploud[] = {
	sExploudPose1,
	sExploudPose2,
	sExploudPose3,
	sExploudPose4,
	sExploudPose5,
	sExploudPose6,
	sExploudPose7,
	sExploudPose8,
	sExploudPose9,
	sExploudPose10,
	sExploudPose11,
	sExploudPose12,
	sExploudPose13,
	sExploudPose14,
	sExploudPose15,
	sExploudPose16,
	sExploudPose17,
	sExploudPose18,
	sExploudPose19,
	sExploudPose20,
	sExploudPose21,
	sExploudPose22,
	sExploudPose23,
	sExploudPose24,
	sExploudPose1,
	sExploudPose2,
	sExploudPose3,
	sExploudPose28,
	sExploudPose4,
	sExploudPose5,
	sExploudPose6,
	sExploudPose32,
	sExploudPose7,
	sExploudPose8,
	sExploudPose9,
	sExploudPose36,
	sExploudPose10,
	sExploudPose11,
	sExploudPose12,
	sExploudPose40,
	sExploudPose13,
	sExploudPose14,
	sExploudPose15,
	sExploudPose44,
	sExploudPose16,
	sExploudPose17,
	sExploudPose18,
	sExploudPose48,
	sExploudPose19,
	sExploudPose20,
	sExploudPose21,
	sExploudPose52,
	sExploudPose22,
	sExploudPose23,
	sExploudPose24,
	sExploudPose56,
	sExploudPose1,
	sExploudPose2,
	sExploudPose3,
	sExploudPose28,
	sExploudPose4,
	sExploudPose5,
	sExploudPose6,
	sExploudPose32,
	sExploudPose7,
	sExploudPose8,
	sExploudPose9,
	sExploudPose36,
	sExploudPose10,
	sExploudPose11,
	sExploudPose12,
	sExploudPose40,
	sExploudPose13,
	sExploudPose14,
	sExploudPose15,
	sExploudPose44,
	sExploudPose16,
	sExploudPose17,
	sExploudPose18,
	sExploudPose48,
	sExploudPose19,
	sExploudPose20,
	sExploudPose21,
	sExploudPose52,
	sExploudPose22,
	sExploudPose23,
	sExploudPose24,
	sExploudPose56,
	sExploudPose1,
	sExploudPose28,
	sExploudPose4,
	sExploudPose92,
	sExploudPose7,
	sExploudPose94,
	sExploudPose10,
	sExploudPose40,
	sExploudPose13,
	sExploudPose44,
	sExploudPose16,
	sExploudPose48,
	sExploudPose19,
	sExploudPose102,
	sExploudPose22,
	sExploudPose104,
	sExploudPose1,
	sExploudPose22,
	sExploudPose19,
	sExploudPose16,
	sExploudPose13,
	sExploudPose10,
	sExploudPose7,
	sExploudPose4,
	sExploudPose113,
	sExploudPose114,
	sExploudPose115,
	sExploudPose116,
	sExploudPose117,
	sExploudPose118,
	sExploudPose119,
	sExploudPose120,
	sExploudPose121,
	sExploudPose122,
	sExploudPose1,
	sExploudPose28,
	sExploudPose4,
	sExploudPose32,
	sExploudPose7,
	sExploudPose36,
	sExploudPose10,
	sExploudPose130,
	sExploudPose13,
	sExploudPose132,
	sExploudPose16,
	sExploudPose134,
	sExploudPose19,
	sExploudPose52,
	sExploudPose22,
	sExploudPose56,
	sExploudPose28,
	sExploudPose140,
	sExploudPose102,
	sExploudPose48,
	sExploudPose44,
	sExploudPose40,
	sExploudPose94,
	sExploudPose32,
	sExploudPose92,
	sExploudPose94,
	sExploudPose92,
	sExploudPose40,
	sExploudPose94,
	sExploudPose92,
	sExploudPose44,
	sExploudPose40,
	sExploudPose94,
	sExploudPose92,
	sExploudPose48,
	sExploudPose44,
	sExploudPose40,
	sExploudPose94,
	sExploudPose92,
	sExploudPose102,
	sExploudPose48,
	sExploudPose44,
	sExploudPose40,
	sExploudPose94,
	sExploudPose92,
	sExploudPose104,
	sExploudPose102,
	sExploudPose48,
	sExploudPose44,
	sExploudPose40,
	sExploudPose94,
	sExploudPose92,
	sExploudPose2,
	sExploudPose6,
	sExploudPose9,
	sExploudPose12,
	sExploudPose14,
	sExploudPose17,
	sExploudPose21,
	sExploudPose24,
	sExploudPose1,
	sExploudPose2,
	sExploudPose3,
	sExploudPose4,
	sExploudPose5,
	sExploudPose6,
	sExploudPose7,
	sExploudPose190,
	sExploudPose191,
	sExploudPose10,
	sExploudPose11,
	sExploudPose12,
	sExploudPose13,
	sExploudPose14,
	sExploudPose15,
	sExploudPose16,
	sExploudPose17,
	sExploudPose18,
	sExploudPose19,
	sExploudPose202,
	sExploudPose203,
	sExploudPose22,
	sExploudPose23,
	sExploudPose24,
	sExploudPose1,
	sExploudPose22,
	sExploudPose19,
	sExploudPose16,
	sExploudPose13,
	sExploudPose10,
	sExploudPose7,
	sExploudPose4,
	sExploudPose1,
	sExploudPose22,
	sExploudPose19,
	sExploudPose16,
	sExploudPose13,
	sExploudPose10,
	sExploudPose7,
	sExploudPose4,
};

static const struct PositionSets sAxPositionsExploud[] = {
	[0] = { .set = { {-1, -3}, {-12, -6}, {10, -6}, {-1, -6} } },
	[1] = { .set = { {0, -2}, {-12, -7}, {10, -3}, {0, -4} } },
	[2] = { .set = { {-2, -2}, {-12, -3}, {10, -7}, {-2, -4} } },
	[3] = { .set = { {3, -3}, {8, -6}, {-9, -3}, {0, -6} } },
	[4] = { .set = { {3, -3}, {3, -6}, {-7, -1}, {-1, -5} } },
	[5] = { .set = { {5, -3}, {10, -3}, {-10, -4}, {1, -5} } },
	[6] = { .set = { {6, -5}, {0, -5}, {-1, -1}, {-1, -8} } },
	[7] = { .set = { {7, -3}, {-4, -4}, {3, 0}, {-1, -7} } },
	[8] = { .set = { {7, -4}, {3, -4}, {-3, -2}, {1, -7} } },
	[9] = { .set = { {3, -9}, {-6, -8}, {8, -2}, {-1, -11} } },
	[10] = { .set = { {3, -8}, {-7, -8}, {11, -4}, {0, -10} } },
	[11] = { .set = { {2, -10}, {1, -9}, {5, -2}, {-1, -10} } },
	[12] = { .set = { {-1, -8}, {10, -7}, {-12, -7}, {-1, -10} } },
	[13] = { .set = { {-2, -8}, {9, -8}, {-11, -5}, {-1, -9} } },
	[14] = { .set = { {0, -8}, {9, -5}, {-11, -8}, {-1, -9} } },
	[15] = { .set = { {-5, -9}, {4, -8}, {-10, -2}, {-1, -11} } },
	[16] = { .set = { {-5, -8}, {5, -8}, {-13, -4}, {-2, -10} } },
	[17] = { .set = { {-4, -10}, {-3, -9}, {-7, -2}, {-1, -10} } },
	[18] = { .set = { {-8, -5}, {-2, -5}, {-1, -1}, {-1, -8} } },
	[19] = { .set = { {-9, -3}, {2, -4}, {-5, 0}, {-1, -7} } },
	[20] = { .set = { {-9, -4}, {-5, -4}, {1, -2}, {-3, -7} } },
	[21] = { .set = { {-5, -3}, {-10, -6}, {7, -3}, {-2, -6} } },
	[22] = { .set = { {-5, -3}, {-5, -6}, {5, -1}, {-1, -5} } },
	[23] = { .set = { {-7, -3}, {-12, -3}, {8, -4}, {-3, -5} } },
	[24] = { .set = { {-1, -3}, {-12, -6}, {10, -6}, {-1, -6} } },
	[25] = { .set = { {0, -2}, {-12, -7}, {10, -3}, {0, -4} } },
	[26] = { .set = { {-2, -2}, {-12, -3}, {10, -7}, {-2, -4} } },
	[27] = { .set = { {-1, -4}, {-14, -6}, {12, -6}, {-1, -9} } },
	[28] = { .set = { {3, -3}, {8, -6}, {-9, -3}, {0, -6} } },
	[29] = { .set = { {3, -3}, {3, -6}, {-7, -1}, {-1, -5} } },
	[30] = { .set = { {5, -3}, {10, -3}, {-10, -4}, {1, -5} } },
	[31] = { .set = { {4, -5}, {10, -9}, {-10, -6}, {-1, -7} } },
	[32] = { .set = { {6, -5}, {0, -5}, {-1, -1}, {-1, -8} } },
	[33] = { .set = { {7, -3}, {-4, -4}, {3, 0}, {-1, -7} } },
	[34] = { .set = { {7, -4}, {3, -4}, {-3, -2}, {1, -7} } },
	[35] = { .set = { {4, -5}, {-3, -7}, {-3, -2}, {-2, -8} } },
	[36] = { .set = { {3, -9}, {-6, -8}, {8, -2}, {-1, -11} } },
	[37] = { .set = { {3, -8}, {-7, -8}, {11, -4}, {0, -10} } },
	[38] = { .set = { {2, -10}, {1, -9}, {5, -2}, {-1, -10} } },
	[39] = { .set = { {0, -10}, {-8, -8}, {8, -5}, {-2, -12} } },
	[40] = { .set = { {-1, -8}, {10, -7}, {-12, -7}, {-1, -10} } },
	[41] = { .set = { {-2, -8}, {9, -8}, {-11, -5}, {-1, -9} } },
	[42] = { .set = { {0, -8}, {9, -5}, {-11, -8}, {-1, -9} } },
	[43] = { .set = { {-1, -8}, {11, -8}, {-13, -8}, {-1, -11} } },
	[44] = { .set = { {-5, -9}, {4, -8}, {-10, -2}, {-1, -11} } },
	[45] = { .set = { {-5, -8}, {5, -8}, {-13, -4}, {-2, -10} } },
	[46] = { .set = { {-4, -10}, {-3, -9}, {-7, -2}, {-1, -10} } },
	[47] = { .set = { {-2, -10}, {6, -8}, {-10, -5}, {0, -12} } },
	[48] = { .set = { {-8, -5}, {-2, -5}, {-1, -1}, {-1, -8} } },
	[49] = { .set = { {-9, -3}, {2, -4}, {-5, 0}, {-1, -7} } },
	[50] = { .set = { {-9, -4}, {-5, -4}, {1, -2}, {-3, -7} } },
	[51] = { .set = { {-6, -5}, {1, -7}, {1, -2}, {0, -8} } },
	[52] = { .set = { {-5, -3}, {-10, -6}, {7, -3}, {-2, -6} } },
	[53] = { .set = { {-5, -3}, {-5, -6}, {5, -1}, {-1, -5} } },
	[54] = { .set = { {-7, -3}, {-12, -3}, {8, -4}, {-3, -5} } },
	[55] = { .set = { {-6, -5}, {-12, -9}, {8, -6}, {-1, -7} } },
	[56] = { .set = { {-1, -3}, {-12, -6}, {10, -6}, {-1, -6} } },
	[57] = { .set = { {0, -2}, {-12, -7}, {10, -3}, {0, -4} } },
	[58] = { .set = { {-2, -2}, {-12, -3}, {10, -7}, {-2, -4} } },
	[59] = { .set = { {-1, -4}, {-14, -6}, {12, -6}, {-1, -9} } },
	[60] = { .set = { {3, -3}, {8, -6}, {-9, -3}, {0, -6} } },
	[61] = { .set = { {3, -3}, {3, -6}, {-7, -1}, {-1, -5} } },
	[62] = { .set = { {5, -3}, {10, -3}, {-10, -4}, {1, -5} } },
	[63] = { .set = { {4, -5}, {10, -9}, {-10, -6}, {-1, -7} } },
	[64] = { .set = { {6, -5}, {0, -5}, {-1, -1}, {-1, -8} } },
	[65] = { .set = { {7, -3}, {-4, -4}, {3, 0}, {-1, -7} } },
	[66] = { .set = { {7, -4}, {3, -4}, {-3, -2}, {1, -7} } },
	[67] = { .set = { {4, -5}, {-3, -7}, {-3, -2}, {-2, -8} } },
	[68] = { .set = { {3, -9}, {-6, -8}, {8, -2}, {-1, -11} } },
	[69] = { .set = { {3, -8}, {-7, -8}, {11, -4}, {0, -10} } },
	[70] = { .set = { {2, -10}, {1, -9}, {5, -2}, {-1, -10} } },
	[71] = { .set = { {0, -10}, {-8, -8}, {8, -5}, {-2, -12} } },
	[72] = { .set = { {-1, -8}, {10, -7}, {-12, -7}, {-1, -10} } },
	[73] = { .set = { {-2, -8}, {9, -8}, {-11, -5}, {-1, -9} } },
	[74] = { .set = { {0, -8}, {9, -5}, {-11, -8}, {-1, -9} } },
	[75] = { .set = { {-1, -8}, {11, -8}, {-13, -8}, {-1, -11} } },
	[76] = { .set = { {-5, -9}, {4, -8}, {-10, -2}, {-1, -11} } },
	[77] = { .set = { {-5, -8}, {5, -8}, {-13, -4}, {-2, -10} } },
	[78] = { .set = { {-4, -10}, {-3, -9}, {-7, -2}, {-1, -10} } },
	[79] = { .set = { {-2, -10}, {6, -8}, {-10, -5}, {0, -12} } },
	[80] = { .set = { {-8, -5}, {-2, -5}, {-1, -1}, {-1, -8} } },
	[81] = { .set = { {-9, -3}, {2, -4}, {-5, 0}, {-1, -7} } },
	[82] = { .set = { {-9, -4}, {-5, -4}, {1, -2}, {-3, -7} } },
	[83] = { .set = { {-6, -5}, {1, -7}, {1, -2}, {0, -8} } },
	[84] = { .set = { {-5, -3}, {-10, -6}, {7, -3}, {-2, -6} } },
	[85] = { .set = { {-5, -3}, {-5, -6}, {5, -1}, {-1, -5} } },
	[86] = { .set = { {-7, -3}, {-12, -3}, {8, -4}, {-3, -5} } },
	[87] = { .set = { {-6, -5}, {-12, -9}, {8, -6}, {-1, -7} } },
	[88] = { .set = { {-1, -3}, {-12, -6}, {10, -6}, {-1, -6} } },
	[89] = { .set = { {-1, -4}, {-14, -6}, {12, -6}, {-1, -9} } },
	[90] = { .set = { {3, -3}, {8, -6}, {-9, -3}, {0, -6} } },
	[91] = { .set = { {5, -5}, {11, -9}, {-9, -6}, {0, -7} } },
	[92] = { .set = { {6, -5}, {0, -5}, {-1, -1}, {-1, -8} } },
	[93] = { .set = { {4, -6}, {-3, -8}, {-3, -3}, {-2, -9} } },
	[94] = { .set = { {3, -9}, {-6, -8}, {8, -2}, {-1, -11} } },
	[95] = { .set = { {0, -10}, {-8, -8}, {8, -5}, {-2, -12} } },
	[96] = { .set = { {-1, -8}, {10, -7}, {-12, -7}, {-1, -10} } },
	[97] = { .set = { {-1, -8}, {11, -8}, {-13, -8}, {-1, -11} } },
	[98] = { .set = { {-5, -9}, {4, -8}, {-10, -2}, {-1, -11} } },
	[99] = { .set = { {-2, -10}, {6, -8}, {-10, -5}, {0, -12} } },
	[100] = { .set = { {-8, -5}, {-2, -5}, {-1, -1}, {-1, -8} } },
	[101] = { .set = { {-6, -6}, {1, -8}, {1, -3}, {0, -9} } },
	[102] = { .set = { {-5, -3}, {-10, -6}, {7, -3}, {-2, -6} } },
	[103] = { .set = { {-7, -5}, {-13, -9}, {7, -6}, {-2, -7} } },
	[104] = { .set = { {-1, -3}, {-12, -6}, {10, -6}, {-1, -6} } },
	[105] = { .set = { {-5, -3}, {-10, -6}, {7, -3}, {-2, -6} } },
	[106] = { .set = { {-8, -5}, {-2, -5}, {-1, -1}, {-1, -8} } },
	[107] = { .set = { {-5, -9}, {4, -8}, {-10, -2}, {-1, -11} } },
	[108] = { .set = { {-1, -8}, {10, -7}, {-12, -7}, {-1, -10} } },
	[109] = { .set = { {3, -9}, {-6, -8}, {8, -2}, {-1, -11} } },
	[110] = { .set = { {6, -5}, {0, -5}, {-1, -1}, {-1, -8} } },
	[111] = { .set = { {3, -3}, {8, -6}, {-9, -3}, {0, -6} } },
	[112] = { .set = { {0, -8}, {-5, -1}, {1, 0}, {3, -7} } },
	[113] = { .set = { {0, -8}, {-5, -1}, {1, 0}, {3, -8} } },
	[114] = { .set = { {-1, 1}, {-13, 2}, {11, 2}, {-1, -6} } },
	[115] = { .set = { {2, 2}, {10, -2}, {-10, 3}, {-3, -5} } },
	[116] = { .set = { {7, 0}, {8, -1}, {3, 5}, {-5, -5} } },
	[117] = { .set = { {3, -4}, {-5, -6}, {9, 1}, {-2, -3} } },
	[118] = { .set = { {-1, 0}, {10, -3}, {-12, -3}, {-1, -3} } },
	[119] = { .set = { {-4, -4}, {4, -6}, {-10, 1}, {1, -3} } },
	[120] = { .set = { {-8, 0}, {-9, -1}, {-4, 5}, {4, -5} } },
	[121] = { .set = { {-3, 2}, {-11, -2}, {9, 3}, {2, -5} } },
	[122] = { .set = { {-1, -3}, {-12, -6}, {10, -6}, {-1, -6} } },
	[123] = { .set = { {-1, -4}, {-14, -6}, {12, -6}, {-1, -9} } },
	[124] = { .set = { {3, -3}, {8, -6}, {-9, -3}, {0, -6} } },
	[125] = { .set = { {4, -5}, {10, -9}, {-10, -6}, {-1, -7} } },
	[126] = { .set = { {6, -5}, {0, -5}, {-1, -1}, {-1, -8} } },
	[127] = { .set = { {4, -5}, {-3, -7}, {-3, -2}, {-2, -8} } },
	[128] = { .set = { {3, -9}, {-6, -8}, {8, -2}, {-1, -11} } },
	[129] = { .set = { {-1, -10}, {-9, -8}, {7, -5}, {-3, -12} } },
	[130] = { .set = { {-1, -8}, {10, -7}, {-12, -7}, {-1, -10} } },
	[131] = { .set = { {-1, -6}, {11, -6}, {-13, -6}, {-1, -9} } },
	[132] = { .set = { {-5, -9}, {4, -8}, {-10, -2}, {-1, -11} } },
	[133] = { .set = { {-1, -10}, {7, -8}, {-9, -5}, {1, -12} } },
	[134] = { .set = { {-8, -5}, {-2, -5}, {-1, -1}, {-1, -8} } },
	[135] = { .set = { {-6, -5}, {1, -7}, {1, -2}, {0, -8} } },
	[136] = { .set = { {-5, -3}, {-10, -6}, {7, -3}, {-2, -6} } },
	[137] = { .set = { {-6, -5}, {-12, -9}, {8, -6}, {-1, -7} } },
	[138] = { .set = { {-1, -4}, {-14, -6}, {12, -6}, {-1, -9} } },
	[139] = { .set = { {-5, -5}, {-11, -9}, {9, -6}, {0, -7} } },
	[140] = { .set = { {-6, -6}, {1, -8}, {1, -3}, {0, -9} } },
	[141] = { .set = { {-2, -10}, {6, -8}, {-10, -5}, {0, -12} } },
	[142] = { .set = { {-1, -8}, {11, -8}, {-13, -8}, {-1, -11} } },
	[143] = { .set = { {0, -10}, {-8, -8}, {8, -5}, {-2, -12} } },
	[144] = { .set = { {4, -6}, {-3, -8}, {-3, -3}, {-2, -9} } },
	[145] = { .set = { {4, -5}, {10, -9}, {-10, -6}, {-1, -7} } },
	[146] = { .set = { {5, -5}, {11, -9}, {-9, -6}, {0, -7} } },
	[147] = { .set = { {4, -6}, {-3, -8}, {-3, -3}, {-2, -9} } },
	[148] = { .set = { {5, -5}, {11, -9}, {-9, -6}, {0, -7} } },
	[149] = { .set = { {0, -10}, {-8, -8}, {8, -5}, {-2, -12} } },
	[150] = { .set = { {4, -6}, {-3, -8}, {-3, -3}, {-2, -9} } },
	[151] = { .set = { {5, -5}, {11, -9}, {-9, -6}, {0, -7} } },
	[152] = { .set = { {-1, -8}, {11, -8}, {-13, -8}, {-1, -11} } },
	[153] = { .set = { {0, -10}, {-8, -8}, {8, -5}, {-2, -12} } },
	[154] = { .set = { {4, -6}, {-3, -8}, {-3, -3}, {-2, -9} } },
	[155] = { .set = { {5, -5}, {11, -9}, {-9, -6}, {0, -7} } },
	[156] = { .set = { {-2, -10}, {6, -8}, {-10, -5}, {0, -12} } },
	[157] = { .set = { {-1, -8}, {11, -8}, {-13, -8}, {-1, -11} } },
	[158] = { .set = { {0, -10}, {-8, -8}, {8, -5}, {-2, -12} } },
	[159] = { .set = { {4, -6}, {-3, -8}, {-3, -3}, {-2, -9} } },
	[160] = { .set = { {5, -5}, {11, -9}, {-9, -6}, {0, -7} } },
	[161] = { .set = { {-6, -6}, {1, -8}, {1, -3}, {0, -9} } },
	[162] = { .set = { {-2, -10}, {6, -8}, {-10, -5}, {0, -12} } },
	[163] = { .set = { {-1, -8}, {11, -8}, {-13, -8}, {-1, -11} } },
	[164] = { .set = { {0, -10}, {-8, -8}, {8, -5}, {-2, -12} } },
	[165] = { .set = { {4, -6}, {-3, -8}, {-3, -3}, {-2, -9} } },
	[166] = { .set = { {5, -5}, {11, -9}, {-9, -6}, {0, -7} } },
	[167] = { .set = { {-7, -5}, {-13, -9}, {7, -6}, {-2, -7} } },
	[168] = { .set = { {-6, -6}, {1, -8}, {1, -3}, {0, -9} } },
	[169] = { .set = { {-2, -10}, {6, -8}, {-10, -5}, {0, -12} } },
	[170] = { .set = { {-1, -8}, {11, -8}, {-13, -8}, {-1, -11} } },
	[171] = { .set = { {0, -10}, {-8, -8}, {8, -5}, {-2, -12} } },
	[172] = { .set = { {4, -6}, {-3, -8}, {-3, -3}, {-2, -9} } },
	[173] = { .set = { {5, -5}, {11, -9}, {-9, -6}, {0, -7} } },
	[174] = { .set = { {0, -2}, {-12, -7}, {10, -3}, {0, -4} } },
	[175] = { .set = { {5, -3}, {10, -3}, {-10, -4}, {1, -5} } },
	[176] = { .set = { {7, -4}, {3, -4}, {-3, -2}, {1, -7} } },
	[177] = { .set = { {2, -10}, {1, -9}, {5, -2}, {-1, -10} } },
	[178] = { .set = { {-2, -8}, {9, -8}, {-11, -5}, {-1, -9} } },
	[179] = { .set = { {-5, -8}, {5, -8}, {-13, -4}, {-2, -10} } },
	[180] = { .set = { {-9, -4}, {-5, -4}, {1, -2}, {-3, -7} } },
	[181] = { .set = { {-7, -3}, {-12, -3}, {8, -4}, {-3, -5} } },
	[182] = { .set = { {-1, -3}, {-12, -6}, {10, -6}, {-1, -6} } },
	[183] = { .set = { {0, -2}, {-12, -7}, {10, -3}, {0, -4} } },
	[184] = { .set = { {-2, -2}, {-12, -3}, {10, -7}, {-2, -4} } },
	[185] = { .set = { {3, -3}, {8, -6}, {-9, -3}, {0, -6} } },
	[186] = { .set = { {3, -3}, {3, -6}, {-7, -1}, {-1, -5} } },
	[187] = { .set = { {5, -3}, {10, -3}, {-10, -4}, {1, -5} } },
	[188] = { .set = { {6, -5}, {0, -5}, {-1, -1}, {-1, -8} } },
	[189] = { .set = { {6, -3}, {-5, -4}, {2, 0}, {-2, -7} } },
	[190] = { .set = { {6, -4}, {2, -4}, {-4, -2}, {0, -7} } },
	[191] = { .set = { {3, -9}, {-6, -8}, {8, -2}, {-1, -11} } },
	[192] = { .set = { {3, -8}, {-7, -8}, {11, -4}, {0, -10} } },
	[193] = { .set = { {2, -10}, {1, -9}, {5, -2}, {-1, -10} } },
	[194] = { .set = { {-1, -8}, {10, -7}, {-12, -7}, {-1, -10} } },
	[195] = { .set = { {-2, -8}, {9, -8}, {-11, -5}, {-1, -9} } },
	[196] = { .set = { {0, -8}, {9, -5}, {-11, -8}, {-1, -9} } },
	[197] = { .set = { {-5, -9}, {4, -8}, {-10, -2}, {-1, -11} } },
	[198] = { .set = { {-5, -8}, {5, -8}, {-13, -4}, {-2, -10} } },
	[199] = { .set = { {-4, -10}, {-3, -9}, {-7, -2}, {-1, -10} } },
	[200] = { .set = { {-8, -5}, {-2, -5}, {-1, -1}, {-1, -8} } },
	[201] = { .set = { {-8, -3}, {3, -4}, {-4, 0}, {0, -7} } },
	[202] = { .set = { {-8, -4}, {-4, -4}, {2, -2}, {-2, -7} } },
	[203] = { .set = { {-5, -3}, {-10, -6}, {7, -3}, {-2, -6} } },
	[204] = { .set = { {-5, -3}, {-5, -6}, {5, -1}, {-1, -5} } },
	[205] = { .set = { {-7, -3}, {-12, -3}, {8, -4}, {-3, -5} } },
	[206] = { .set = { {-1, -3}, {-12, -6}, {10, -6}, {-1, -6} } },
	[207] = { .set = { {-5, -3}, {-10, -6}, {7, -3}, {-2, -6} } },
	[208] = { .set = { {-8, -5}, {-2, -5}, {-1, -1}, {-1, -8} } },
	[209] = { .set = { {-5, -9}, {4, -8}, {-10, -2}, {-1, -11} } },
	[210] = { .set = { {-1, -8}, {10, -7}, {-12, -7}, {-1, -10} } },
	[211] = { .set = { {3, -9}, {-6, -8}, {8, -2}, {-1, -11} } },
	[212] = { .set = { {6, -5}, {0, -5}, {-1, -1}, {-1, -8} } },
	[213] = { .set = { {3, -3}, {8, -6}, {-9, -3}, {0, -6} } },
	[214] = { .set = { {-1, -3}, {-12, -6}, {10, -6}, {-1, -6} } },
	[215] = { .set = { {-5, -3}, {-10, -6}, {7, -3}, {-2, -6} } },
	[216] = { .set = { {-8, -5}, {-2, -5}, {-1, -1}, {-1, -8} } },
	[217] = { .set = { {-5, -9}, {4, -8}, {-10, -2}, {-1, -11} } },
	[218] = { .set = { {-1, -8}, {10, -7}, {-12, -7}, {-1, -10} } },
	[219] = { .set = { {3, -9}, {-6, -8}, {8, -2}, {-1, -11} } },
	[220] = { .set = { {6, -5}, {0, -5}, {-1, -1}, {-1, -8} } },
	[221] = { .set = { {3, -3}, {8, -6}, {-9, -3}, {0, -6} } },
};

static const ax_anim *const sExploudAnimTable1[] = {
	gAxSharedAnim_02603,
	gAxSharedAnim_02679,
	gAxSharedAnim_02688,
	gAxSharedAnim_02697,
	gAxSharedAnim_02615,
	gAxSharedAnim_02637,
	gAxSharedAnim_02650,
	gAxSharedAnim_02659,
};

static const ax_anim *const sExploudAnimTable2[] = {
	gAxSharedAnim_01563,
	gAxSharedAnim_01756,
	gAxSharedAnim_01828,
	sExploudAnims_2_4,
	gAxSharedAnim_01914,
	sExploudAnims_2_6,
	gAxSharedAnim_01969,
	sExploudAnims_2_8,
};

static const ax_anim *const sExploudAnimTable3[] = {
	gAxSharedAnim_02001,
	sExploudAnims_3_2,
	sExploudAnims_3_3,
	sExploudAnims_3_4,
	gAxSharedAnim_02090,
	sExploudAnims_3_6,
	sExploudAnims_3_7,
	sExploudAnims_3_8,
};

static const ax_anim *const sExploudAnimTable4[] = {
	sExploudAnims_4_1,
	sExploudAnims_4_2,
	sExploudAnims_4_3,
	sExploudAnims_4_4,
	sExploudAnims_4_5,
	sExploudAnims_4_6,
	sExploudAnims_4_7,
	sExploudAnims_4_8,
};

static const ax_anim *const sExploudAnimTable5[] = {
	sExploudAnims_5_1,
	sExploudAnims_5_2,
	sExploudAnims_5_3,
	sExploudAnims_5_4,
	sExploudAnims_5_5,
	sExploudAnims_5_6,
	sExploudAnims_5_7,
	sExploudAnims_5_8,
};

static const ax_anim *const sExploudAnimTable6[] = {
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
	gAxSharedAnim_02361,
};

static const ax_anim *const sExploudAnimTable7[] = {
	gAxSharedAnim_00266,
	gAxSharedAnim_00273,
	gAxSharedAnim_00280,
	gAxSharedAnim_00290,
	gAxSharedAnim_00302,
	gAxSharedAnim_00315,
	gAxSharedAnim_00322,
	gAxSharedAnim_00328,
};

static const ax_anim *const sExploudAnimTable8[] = {
	sExploudAnims_8_1,
	sExploudAnims_8_2,
	sExploudAnims_8_3,
	sExploudAnims_8_4,
	sExploudAnims_8_5,
	sExploudAnims_8_6,
	sExploudAnims_8_7,
	sExploudAnims_8_8,
};

static const ax_anim *const sExploudAnimTable9[] = {
	sExploudAnims_9_1,
	sExploudAnims_9_2,
	sExploudAnims_9_3,
	sExploudAnims_9_4,
	sExploudAnims_9_5,
	sExploudAnims_9_6,
	sExploudAnims_9_7,
	sExploudAnims_9_8,
};

static const ax_anim *const sExploudAnimTable10[] = {
	gAxSharedAnim_00849,
	gAxSharedAnim_00862,
	gAxSharedAnim_00879,
	gAxSharedAnim_00889,
	gAxSharedAnim_00905,
	gAxSharedAnim_00918,
	gAxSharedAnim_00930,
	gAxSharedAnim_00942,
};

static const ax_anim *const sExploudAnimTable11[] = {
	sExploudAnims_11_1,
	sExploudAnims_11_2,
	sExploudAnims_11_3,
	sExploudAnims_11_4,
	sExploudAnims_11_5,
	sExploudAnims_11_6,
	sExploudAnims_11_7,
	sExploudAnims_11_8,
};

static const ax_anim *const sExploudAnimTable12[] = {
	gAxSharedAnim_01291,
	gAxSharedAnim_01368,
	gAxSharedAnim_01354,
	gAxSharedAnim_01338,
	gAxSharedAnim_01337,
	gAxSharedAnim_01326,
	gAxSharedAnim_01308,
	gAxSharedAnim_01292,
};

static const ax_anim *const sExploudAnimTable13[] = {
	gAxSharedAnim_01376,
	gAxSharedAnim_01441,
	gAxSharedAnim_01437,
	gAxSharedAnim_01428,
	gAxSharedAnim_01421,
	gAxSharedAnim_01413,
	gAxSharedAnim_01399,
	gAxSharedAnim_01388,
};

static const ax_anim *const *const sAxAnimationsExploud[] = {
	sExploudAnimTable1,
	sExploudAnimTable2,
	sExploudAnimTable3,
	sExploudAnimTable4,
	sExploudAnimTable5,
	sExploudAnimTable6,
	sExploudAnimTable7,
	sExploudAnimTable8,
	sExploudAnimTable9,
	sExploudAnimTable10,
	sExploudAnimTable11,
	sExploudAnimTable12,
	sExploudAnimTable13,
};

static const ax_sprite *const sAxSpritesExploud[] = {
	sExploudSprites1,
	sExploudSprites2,
	sExploudSprites3,
	sExploudSprites4,
	sExploudSprites5,
	sExploudSprites6,
	sExploudSprites7,
	sExploudSprites8,
	sExploudSprites9,
	sExploudSprites10,
	sExploudSprites11,
	sExploudSprites12,
	sExploudSprites13,
	sExploudSprites14,
	sExploudSprites15,
	sExploudSprites16,
	sExploudSprites17,
	sExploudSprites18,
	sExploudSprites19,
	sExploudSprites20,
	sExploudSprites21,
	sExploudSprites22,
	sExploudSprites23,
	sExploudSprites24,
	sExploudSprites25,
	sExploudSprites26,
	sExploudSprites27,
	sExploudSprites28,
	sExploudSprites29,
	sExploudSprites30,
};

static const axmain sAxMainExploud = {
	.poses = sAxPosesExploud,
	.animations = sAxAnimationsExploud,
	.animCount = ARRAY_COUNT(sAxAnimationsExploud),
	.spriteData = sAxSpritesExploud,
	.positions = sAxPositionsExploud,
};
