/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainStaryu;
const SiroArchive gAxStaryu = {"SIRO", &sAxMainStaryu};

static const ax_pose sStaryuPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose4[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose5[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose6[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose7[] = {
	AX_POSE(6, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose8[] = {
	AX_POSE(7, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose9[] = {
	AX_POSE(8, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose10[] = {
	AX_POSE(9, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose11[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose12[] = {
	AX_POSE(11, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose13[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose16[] = {
	AX_POSE(15, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose17[] = {
	AX_POSE(16, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose18[] = {
	AX_POSE(17, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose19[] = {
	AX_POSE(6, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose20[] = {
	AX_POSE(7, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose21[] = {
	AX_POSE(8, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose22[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose23[] = {
	AX_POSE(4, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose24[] = {
	AX_POSE(5, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose26[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose27[] = {
	AX_POSE(19, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose28[] = {
	AX_POSE(20, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose30[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose32[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose34[] = {
	AX_POSE(23, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose36[] = {
	AX_POSE(24, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose38[] = {
	AX_POSE(25, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose40[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose42[] = {
	AX_POSE(21, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose64[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose68[] = {
	AX_POSE(27, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose69[] = {
	AX_POSE(6, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose70[] = {
	AX_POSE(7, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose71[] = {
	AX_POSE(8, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose72[] = {
	AX_POSE(28, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose76[] = {
	AX_POSE(29, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose80[] = {
	AX_POSE(30, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose84[] = {
	AX_POSE(31, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose85[] = {
	AX_POSE(6, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose86[] = {
	AX_POSE(7, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose87[] = {
	AX_POSE(8, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose88[] = {
	AX_POSE(28, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose92[] = {
	AX_POSE(27, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose101[] = {
	AX_POSE(32, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose102[] = {
	AX_POSE(33, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose103[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose104[] = {
	AX_POSE(35, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose105[] = {
	AX_POSE(36, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose106[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose107[] = {
	AX_POSE(38, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose108[] = {
	AX_POSE(39, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose109[] = {
	AX_POSE(36, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose110[] = {
	AX_POSE(40, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose116[] = {
	AX_POSE(28, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose124[] = {
	AX_POSE(28, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose132[] = {
	AX_POSE(29, OAM1(237, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose133[] = {
	AX_POSE(28, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose134[] = {
	AX_POSE(27, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose147[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose154[] = {
	AX_POSE(29, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose156[] = {
	AX_POSE(24, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose160[] = {
	AX_POSE(31, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sStaryuPose165[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_anim sStaryuAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 26, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {4, 0}, .shadow = {4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 26, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {20, -19}, .shadow = {20, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {20, -19}, .shadow = {20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {20, -19}, .shadow = {20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {20, -19}, .shadow = {20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {20, -19}, .shadow = {20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {20, -19}, .shadow = {20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {12, -12}, .shadow = {12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {4, -4}, .shadow = {4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 26, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 26, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-20, -19}, .shadow = {-20, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {-20, -19}, .shadow = {-20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-20, -19}, .shadow = {-20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-20, -19}, .shadow = {-20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-20, -19}, .shadow = {-20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-20, -19}, .shadow = {-20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {-4, -4}, .shadow = {-4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 26, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {-4, 0}, .shadow = {-4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 26, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 26, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 27, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, 19}, .shadow = {0, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 12}, .shadow = {0, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 4}, .shadow = {0, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {20, 19}, .shadow = {20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {12, 12}, .shadow = {12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {4, 4}, .shadow = {4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {12, 0}, .shadow = {12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {4, 0}, .shadow = {4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {20, -19}, .shadow = {20, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {20, -19}, .shadow = {20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {20, -19}, .shadow = {20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {20, -19}, .shadow = {20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {20, -19}, .shadow = {20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {20, -19}, .shadow = {20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {12, -12}, .shadow = {12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {4, -4}, .shadow = {4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {0, -19}, .shadow = {0, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, -12}, .shadow = {0, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {0, -4}, .shadow = {0, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-20, -19}, .shadow = {-20, -19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-20, -19}, .shadow = {-20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-20, -19}, .shadow = {-20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-20, -19}, .shadow = {-20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-20, -19}, .shadow = {-20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-20, -19}, .shadow = {-20, -19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-12, -12}, .shadow = {-12, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-4, -4}, .shadow = {-4, -4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-12, 0}, .shadow = {-12, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {-4, 0}, .shadow = {-4, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 4, .unkFlags = 0, .poseId = 44, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 2, .poseId = 44, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 44, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 45, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-20, 19}, .shadow = {-20, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-12, 12}, .shadow = {-12, 12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {-4, 4}, .shadow = {-4, 4} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_4_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 60, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, -7}, .shadow = {0, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -7}, .shadow = {0, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -4}, .shadow = {0, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_4_2[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 64, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-6, -6}, .shadow = {-6, -6} },
	{ .frames = 4, .unkFlags = 0, .poseId = 64, .offset = {-7, -7}, .shadow = {-7, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-7, -6}, .shadow = {-7, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-3, -3}, .shadow = {-3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_4_3[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 68, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 71, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 68, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 68, .offset = {-6, 0}, .shadow = {-6, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 68, .offset = {-7, 0}, .shadow = {-7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-1, 0}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_4_4[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 72, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 72, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 72, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 72, .offset = {-6, 6}, .shadow = {-6, 6} },
	{ .frames = 4, .unkFlags = 0, .poseId = 72, .offset = {-7, 7}, .shadow = {-7, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 72, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_4_5[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 76, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 76, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 76, .offset = {0, 6}, .shadow = {0, 6} },
	{ .frames = 4, .unkFlags = 0, .poseId = 76, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {0, 1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_4_6[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 80, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 80, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 80, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 80, .offset = {6, 6}, .shadow = {6, 6} },
	{ .frames = 4, .unkFlags = 0, .poseId = 80, .offset = {7, 7}, .shadow = {7, 7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 81, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_4_7[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 84, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 84, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 84, .offset = {6, 0}, .shadow = {6, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {7, 0}, .shadow = {7, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 84, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {1, 0}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_4_8[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 2, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 1, .poseId = 88, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 88, .offset = {6, -6}, .shadow = {6, -6} },
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {7, -7}, .shadow = {7, -7} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {7, -6}, .shadow = {7, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {3, -3}, .shadow = {3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 96, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 93, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_6_1[] = {
	{ .frames = 30, .unkFlags = 0, .poseId = 100, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 35, .unkFlags = 0, .poseId = 101, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_7_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 102, .offset = {0, -3}, .shadow = {0, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_7_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 103, .offset = {-3, -3}, .shadow = {-3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_7_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 104, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 104, .offset = {-3, 0}, .shadow = {-3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_7_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 105, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 105, .offset = {-3, 3}, .shadow = {-3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_7_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 106, .offset = {0, 3}, .shadow = {0, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_7_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 107, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 107, .offset = {3, 3}, .shadow = {3, 3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_7_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 108, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 108, .offset = {3, 0}, .shadow = {3, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_7_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 8, .unkFlags = 0, .poseId = 109, .offset = {3, -3}, .shadow = {3, -3} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_8_1[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_8_2[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_8_3[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_8_4[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_8_5[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_8_6[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_8_7[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_8_8[] = {
	{ .frames = 36, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {8, 10}, .shadow = {8, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {7, 18}, .shadow = {7, 18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 130, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 131, .offset = {-7, 18}, .shadow = {-7, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {-8, 10}, .shadow = {-8, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {21, 12}, .shadow = {21, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 129, .offset = {22, 20}, .shadow = {22, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 130, .offset = {12, 23}, .shadow = {12, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 133, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {20, -5}, .shadow = {20, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 128, .offset = {24, -2}, .shadow = {24, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 129, .offset = {21, 5}, .shadow = {21, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {12, 7}, .shadow = {12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 132, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {14, -23}, .shadow = {14, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 127, .offset = {22, -22}, .shadow = {22, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 128, .offset = {23, -14}, .shadow = {23, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 130, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 131, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {-7, -20}, .shadow = {-7, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 126, .offset = {0, -25}, .shadow = {0, -25} },
	{ .frames = 2, .unkFlags = 3, .poseId = 127, .offset = {7, -20}, .shadow = {7, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {9, -10}, .shadow = {9, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 130, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {-14, -23}, .shadow = {-14, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 133, .offset = {-22, -22}, .shadow = {-22, -22} },
	{ .frames = 2, .unkFlags = 3, .poseId = 132, .offset = {-23, -14}, .shadow = {-23, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 131, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 130, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 126, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {-20, -5}, .shadow = {-20, -5} },
	{ .frames = 3, .unkFlags = 0, .poseId = 132, .offset = {-24, -2}, .shadow = {-24, -2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 131, .offset = {-21, 5}, .shadow = {-21, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 130, .offset = {-12, 7}, .shadow = {-12, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 129, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 126, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 133, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 132, .offset = {-21, 12}, .shadow = {-21, 12} },
	{ .frames = 3, .unkFlags = 0, .poseId = 131, .offset = {-22, 20}, .shadow = {-22, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 130, .offset = {-12, 23}, .shadow = {-12, 23} },
	{ .frames = 2, .unkFlags = 0, .poseId = 129, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 128, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 143, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 143, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 143, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 143, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 142, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 144, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 144, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 144, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 146, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 146, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 146, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 146, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 145, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 147, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 147, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 147, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 149, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 149, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 149, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 149, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 148, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 150, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 150, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 150, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 148, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 152, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 152, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 152, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 152, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 151, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 153, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 153, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 153, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 158, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 157, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, -17}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 164, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 164, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 164, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 164, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 163, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 165, .offset = {0, -22}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 165, .offset = {0, -18}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 165, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_13_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_13_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_13_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_13_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_13_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_13_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_13_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sStaryuAnims_13_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 178, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 179, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 180, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 181, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sStaryuGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_1.4bpp.lz");
static const ax_sprite sStaryuSprites1[] = {
	{sStaryuGfx1, ARRAY_COUNT(sStaryuGfx1)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_2.4bpp.lz");
static const ax_sprite sStaryuSprites2[] = {
	{sStaryuGfx2, ARRAY_COUNT(sStaryuGfx2)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_3.4bpp.lz");
static const ax_sprite sStaryuSprites3[] = {
	{sStaryuGfx3, ARRAY_COUNT(sStaryuGfx3)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_4.4bpp.lz");
static const ax_sprite sStaryuSprites4[] = {
	{sStaryuGfx4, ARRAY_COUNT(sStaryuGfx4)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_5.4bpp.lz");
static const ax_sprite sStaryuSprites5[] = {
	{sStaryuGfx5, ARRAY_COUNT(sStaryuGfx5)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_6.4bpp.lz");
static const ax_sprite sStaryuSprites6[] = {
	{sStaryuGfx6, ARRAY_COUNT(sStaryuGfx6)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_7.4bpp.lz");
static const ax_sprite sStaryuSprites7[] = {
	{sStaryuGfx7, ARRAY_COUNT(sStaryuGfx7)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_8.4bpp.lz");
static const ax_sprite sStaryuSprites8[] = {
	{sStaryuGfx8, ARRAY_COUNT(sStaryuGfx8)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_9.4bpp.lz");
static const ax_sprite sStaryuSprites9[] = {
	{sStaryuGfx9, ARRAY_COUNT(sStaryuGfx9)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_10.4bpp.lz");
static const ax_sprite sStaryuSprites10[] = {
	{sStaryuGfx10, ARRAY_COUNT(sStaryuGfx10)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_11.4bpp.lz");
static const ax_sprite sStaryuSprites11[] = {
	{sStaryuGfx11, ARRAY_COUNT(sStaryuGfx11)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_12.4bpp.lz");
static const ax_sprite sStaryuSprites12[] = {
	{sStaryuGfx12, ARRAY_COUNT(sStaryuGfx12)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_13.4bpp.lz");
static const ax_sprite sStaryuSprites13[] = {
	{sStaryuGfx13, ARRAY_COUNT(sStaryuGfx13)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_14.4bpp.lz");
static const ax_sprite sStaryuSprites14[] = {
	{sStaryuGfx14, ARRAY_COUNT(sStaryuGfx14)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_15.4bpp.lz");
static const ax_sprite sStaryuSprites15[] = {
	{sStaryuGfx15, ARRAY_COUNT(sStaryuGfx15)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_16.4bpp.lz");
static const ax_sprite sStaryuSprites16[] = {
	{sStaryuGfx16, ARRAY_COUNT(sStaryuGfx16)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_17.4bpp.lz");
static const ax_sprite sStaryuSprites17[] = {
	{sStaryuGfx17, ARRAY_COUNT(sStaryuGfx17)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_18.4bpp.lz");
static const ax_sprite sStaryuSprites18[] = {
	{sStaryuGfx18, ARRAY_COUNT(sStaryuGfx18)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_19.4bpp.lz");
static const u8 sStaryuGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_19_1.4bpp.lz");
static const u8 sStaryuGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_19_2.4bpp.lz");
static const ax_sprite sStaryuSprites19[] = {
	{NULL, 32}, 
	{sStaryuGfx19, ARRAY_COUNT(sStaryuGfx19)}, 
	{NULL, 64}, 
	{sStaryuGfx19_1, ARRAY_COUNT(sStaryuGfx19_1)}, 
	{NULL, 32}, 
	{sStaryuGfx19_2, ARRAY_COUNT(sStaryuGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sStaryuGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_20.4bpp.lz");
static const u8 sStaryuGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_20_1.4bpp.lz");
static const u8 sStaryuGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_20_2.4bpp.lz");
static const ax_sprite sStaryuSprites20[] = {
	{sStaryuGfx20, ARRAY_COUNT(sStaryuGfx20)}, 
	{NULL, 32}, 
	{sStaryuGfx20_1, ARRAY_COUNT(sStaryuGfx20_1)}, 
	{NULL, 32}, 
	{sStaryuGfx20_2, ARRAY_COUNT(sStaryuGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sStaryuGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_21.4bpp.lz");
static const u8 sStaryuGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_21_1.4bpp.lz");
static const u8 sStaryuGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_21_2.4bpp.lz");
static const ax_sprite sStaryuSprites21[] = {
	{sStaryuGfx21, ARRAY_COUNT(sStaryuGfx21)}, 
	{NULL, 32}, 
	{sStaryuGfx21_1, ARRAY_COUNT(sStaryuGfx21_1)}, 
	{NULL, 64}, 
	{sStaryuGfx21_2, ARRAY_COUNT(sStaryuGfx21_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sStaryuGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_22.4bpp.lz");
static const u8 sStaryuGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_22_1.4bpp.lz");
static const u8 sStaryuGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_22_2.4bpp.lz");
static const ax_sprite sStaryuSprites22[] = {
	{NULL, 32}, 
	{sStaryuGfx22, ARRAY_COUNT(sStaryuGfx22)}, 
	{NULL, 32}, 
	{sStaryuGfx22_1, ARRAY_COUNT(sStaryuGfx22_1)}, 
	{NULL, 32}, 
	{sStaryuGfx22_2, ARRAY_COUNT(sStaryuGfx22_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sStaryuGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_23.4bpp.lz");
static const u8 sStaryuGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_23_1.4bpp.lz");
static const u8 sStaryuGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_23_2.4bpp.lz");
static const ax_sprite sStaryuSprites23[] = {
	{NULL, 32}, 
	{sStaryuGfx23, ARRAY_COUNT(sStaryuGfx23)}, 
	{NULL, 32}, 
	{sStaryuGfx23_1, ARRAY_COUNT(sStaryuGfx23_1)}, 
	{NULL, 32}, 
	{sStaryuGfx23_2, ARRAY_COUNT(sStaryuGfx23_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sStaryuGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_24.4bpp.lz");
static const ax_sprite sStaryuSprites24[] = {
	{sStaryuGfx24, ARRAY_COUNT(sStaryuGfx24)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_25.4bpp.lz");
static const u8 sStaryuGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_25_1.4bpp.lz");
static const ax_sprite sStaryuSprites25[] = {
	{sStaryuGfx25, ARRAY_COUNT(sStaryuGfx25)}, 
	{NULL, 32}, 
	{sStaryuGfx25_1, ARRAY_COUNT(sStaryuGfx25_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sStaryuGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_26.4bpp.lz");
static const ax_sprite sStaryuSprites26[] = {
	{sStaryuGfx26, ARRAY_COUNT(sStaryuGfx26)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_27.4bpp.lz");
static const u8 sStaryuGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_27_1.4bpp.lz");
static const u8 sStaryuGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_27_2.4bpp.lz");
static const ax_sprite sStaryuSprites27[] = {
	{NULL, 32}, 
	{sStaryuGfx27, ARRAY_COUNT(sStaryuGfx27)}, 
	{NULL, 64}, 
	{sStaryuGfx27_1, ARRAY_COUNT(sStaryuGfx27_1)}, 
	{NULL, 32}, 
	{sStaryuGfx27_2, ARRAY_COUNT(sStaryuGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sStaryuGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_28.4bpp.lz");
static const u8 sStaryuGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_28_1.4bpp.lz");
static const u8 sStaryuGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_28_2.4bpp.lz");
static const ax_sprite sStaryuSprites28[] = {
	{sStaryuGfx28, ARRAY_COUNT(sStaryuGfx28)}, 
	{NULL, 64}, 
	{sStaryuGfx28_1, ARRAY_COUNT(sStaryuGfx28_1)}, 
	{NULL, 32}, 
	{sStaryuGfx28_2, ARRAY_COUNT(sStaryuGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sStaryuGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_29.4bpp.lz");
static const ax_sprite sStaryuSprites29[] = {
	{sStaryuGfx29, ARRAY_COUNT(sStaryuGfx29)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sStaryuGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_30.4bpp.lz");
static const ax_sprite sStaryuSprites30[] = {
	{sStaryuGfx30, ARRAY_COUNT(sStaryuGfx30)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sStaryuGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_31.4bpp.lz");
static const u8 sStaryuGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_31_1.4bpp.lz");
static const u8 sStaryuGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_31_2.4bpp.lz");
static const ax_sprite sStaryuSprites31[] = {
	{NULL, 32}, 
	{sStaryuGfx31, ARRAY_COUNT(sStaryuGfx31)}, 
	{NULL, 64}, 
	{sStaryuGfx31_1, ARRAY_COUNT(sStaryuGfx31_1)}, 
	{NULL, 32}, 
	{sStaryuGfx31_2, ARRAY_COUNT(sStaryuGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sStaryuGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_32.4bpp.lz");
static const ax_sprite sStaryuSprites32[] = {
	{sStaryuGfx32, ARRAY_COUNT(sStaryuGfx32)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sStaryuGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_33.4bpp.lz");
static const ax_sprite sStaryuSprites33[] = {
	{sStaryuGfx33, ARRAY_COUNT(sStaryuGfx33)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_34.4bpp.lz");
static const ax_sprite sStaryuSprites34[] = {
	{sStaryuGfx34, ARRAY_COUNT(sStaryuGfx34)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_35.4bpp.lz");
static const ax_sprite sStaryuSprites35[] = {
	{sStaryuGfx35, ARRAY_COUNT(sStaryuGfx35)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_36.4bpp.lz");
static const ax_sprite sStaryuSprites36[] = {
	{sStaryuGfx36, ARRAY_COUNT(sStaryuGfx36)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_37.4bpp.lz");
static const ax_sprite sStaryuSprites37[] = {
	{sStaryuGfx37, ARRAY_COUNT(sStaryuGfx37)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_38.4bpp.lz");
static const ax_sprite sStaryuSprites38[] = {
	{sStaryuGfx38, ARRAY_COUNT(sStaryuGfx38)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_39.4bpp.lz");
static const ax_sprite sStaryuSprites39[] = {
	{sStaryuGfx39, ARRAY_COUNT(sStaryuGfx39)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_40.4bpp.lz");
static const ax_sprite sStaryuSprites40[] = {
	{sStaryuGfx40, ARRAY_COUNT(sStaryuGfx40)}, 
	{NULL, 0}
};
static const u8 sStaryuGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/staryu/sprite_41.4bpp.lz");
static const ax_sprite sStaryuSprites41[] = {
	{sStaryuGfx41, ARRAY_COUNT(sStaryuGfx41)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesStaryu[] = {
	sStaryuPose1,
	sStaryuPose2,
	sStaryuPose3,
	sStaryuPose4,
	sStaryuPose5,
	sStaryuPose6,
	sStaryuPose7,
	sStaryuPose8,
	sStaryuPose9,
	sStaryuPose10,
	sStaryuPose11,
	sStaryuPose12,
	sStaryuPose13,
	sStaryuPose14,
	sStaryuPose15,
	sStaryuPose16,
	sStaryuPose17,
	sStaryuPose18,
	sStaryuPose19,
	sStaryuPose20,
	sStaryuPose21,
	sStaryuPose22,
	sStaryuPose23,
	sStaryuPose24,
	sStaryuPose1,
	sStaryuPose26,
	sStaryuPose27,
	sStaryuPose28,
	sStaryuPose4,
	sStaryuPose30,
	sStaryuPose7,
	sStaryuPose32,
	sStaryuPose10,
	sStaryuPose34,
	sStaryuPose13,
	sStaryuPose36,
	sStaryuPose16,
	sStaryuPose38,
	sStaryuPose19,
	sStaryuPose40,
	sStaryuPose22,
	sStaryuPose42,
	sStaryuPose1,
	sStaryuPose26,
	sStaryuPose27,
	sStaryuPose28,
	sStaryuPose4,
	sStaryuPose30,
	sStaryuPose7,
	sStaryuPose32,
	sStaryuPose10,
	sStaryuPose34,
	sStaryuPose13,
	sStaryuPose36,
	sStaryuPose16,
	sStaryuPose38,
	sStaryuPose19,
	sStaryuPose40,
	sStaryuPose22,
	sStaryuPose42,
	sStaryuPose1,
	sStaryuPose2,
	sStaryuPose3,
	sStaryuPose64,
	sStaryuPose4,
	sStaryuPose5,
	sStaryuPose6,
	sStaryuPose68,
	sStaryuPose69,
	sStaryuPose70,
	sStaryuPose71,
	sStaryuPose72,
	sStaryuPose10,
	sStaryuPose11,
	sStaryuPose12,
	sStaryuPose76,
	sStaryuPose13,
	sStaryuPose14,
	sStaryuPose15,
	sStaryuPose80,
	sStaryuPose16,
	sStaryuPose17,
	sStaryuPose18,
	sStaryuPose84,
	sStaryuPose85,
	sStaryuPose86,
	sStaryuPose87,
	sStaryuPose88,
	sStaryuPose22,
	sStaryuPose23,
	sStaryuPose24,
	sStaryuPose92,
	sStaryuPose1,
	sStaryuPose22,
	sStaryuPose19,
	sStaryuPose16,
	sStaryuPose13,
	sStaryuPose10,
	sStaryuPose7,
	sStaryuPose4,
	sStaryuPose101,
	sStaryuPose102,
	sStaryuPose103,
	sStaryuPose104,
	sStaryuPose105,
	sStaryuPose106,
	sStaryuPose107,
	sStaryuPose108,
	sStaryuPose109,
	sStaryuPose110,
	sStaryuPose1,
	sStaryuPose64,
	sStaryuPose4,
	sStaryuPose68,
	sStaryuPose7,
	sStaryuPose116,
	sStaryuPose10,
	sStaryuPose76,
	sStaryuPose13,
	sStaryuPose80,
	sStaryuPose16,
	sStaryuPose84,
	sStaryuPose19,
	sStaryuPose124,
	sStaryuPose22,
	sStaryuPose92,
	sStaryuPose64,
	sStaryuPose92,
	sStaryuPose88,
	sStaryuPose84,
	sStaryuPose80,
	sStaryuPose132,
	sStaryuPose133,
	sStaryuPose134,
	sStaryuPose64,
	sStaryuPose134,
	sStaryuPose133,
	sStaryuPose132,
	sStaryuPose80,
	sStaryuPose84,
	sStaryuPose88,
	sStaryuPose92,
	sStaryuPose1,
	sStaryuPose26,
	sStaryuPose64,
	sStaryuPose4,
	sStaryuPose147,
	sStaryuPose68,
	sStaryuPose7,
	sStaryuPose32,
	sStaryuPose116,
	sStaryuPose10,
	sStaryuPose34,
	sStaryuPose154,
	sStaryuPose13,
	sStaryuPose156,
	sStaryuPose80,
	sStaryuPose16,
	sStaryuPose38,
	sStaryuPose160,
	sStaryuPose19,
	sStaryuPose40,
	sStaryuPose124,
	sStaryuPose22,
	sStaryuPose165,
	sStaryuPose92,
	sStaryuPose64,
	sStaryuPose92,
	sStaryuPose88,
	sStaryuPose84,
	sStaryuPose80,
	sStaryuPose132,
	sStaryuPose133,
	sStaryuPose134,
	sStaryuPose1,
	sStaryuPose22,
	sStaryuPose19,
	sStaryuPose16,
	sStaryuPose13,
	sStaryuPose10,
	sStaryuPose7,
	sStaryuPose4,
};

static const struct PositionSets sAxPositionsStaryu[] = {
	[0] = { .set = { {0, -5}, {-8, -11}, {8, -11}, {0, -7} } },
	[1] = { .set = { {1, -4}, {-8, -10}, {7, -8}, {0, -6} } },
	[2] = { .set = { {-1, -4}, {-7, -8}, {8, -10}, {1, -6} } },
	[3] = { .set = { {3, -5}, {6, -13}, {-7, -8}, {0, -7} } },
	[4] = { .set = { {2, -4}, {7, -12}, {-7, -7}, {1, -6} } },
	[5] = { .set = { {4, -4}, {6, -10}, {-6, -8}, {1, -6} } },
	[6] = { .set = { {5, -6}, {3, -13}, {-2, -6}, {0, -7} } },
	[7] = { .set = { {4, -4}, {5, -13}, {-4, -5}, {1, -6} } },
	[8] = { .set = { {4, -6}, {3, -10}, {0, -8}, {1, -5} } },
	[9] = { .set = { {2, -10}, {7, -7}, {-5, -13}, {0, -8} } },
	[10] = { .set = { {0, -10}, {7, -10}, {-6, -9}, {0, -8} } },
	[11] = { .set = { {4, -7}, {6, -5}, {-3, -13}, {1, -6} } },
	[12] = { .set = { {0, -11}, {8, -11}, {-7, -11}, {0, -8} } },
	[13] = { .set = { {-1, -10}, {6, -12}, {-8, -7}, {0, -8} } },
	[14] = { .set = { {1, -10}, {7, -7}, {-6, -12}, {0, -7} } },
	[15] = { .set = { {-1, -8}, {5, -12}, {-7, -8}, {0, -9} } },
	[16] = { .set = { {-2, -6}, {3, -13}, {-6, -5}, {0, -8} } },
	[17] = { .set = { {1, -8}, {7, -9}, {-6, -9}, {0, -8} } },
	[18] = { .set = { {-5, -6}, {-3, -13}, {2, -6}, {0, -7} } },
	[19] = { .set = { {-4, -4}, {-5, -13}, {4, -5}, {-1, -6} } },
	[20] = { .set = { {-4, -6}, {-3, -10}, {0, -8}, {-1, -5} } },
	[21] = { .set = { {-3, -5}, {-6, -13}, {7, -8}, {0, -7} } },
	[22] = { .set = { {-2, -4}, {-7, -12}, {7, -7}, {-1, -6} } },
	[23] = { .set = { {-4, -4}, {-6, -10}, {6, -8}, {-1, -6} } },
	[24] = { .set = { {0, -5}, {-8, -11}, {8, -11}, {0, -7} } },
	[25] = { .set = { {0, -7}, {-8, -11}, {8, -11}, {0, -8} } },
	[26] = { .set = { {0, -9}, {-8, -11}, {8, -11}, {0, -8} } },
	[27] = { .set = { {0, -9}, {-5, -13}, {8, -6}, {0, -8} } },
	[28] = { .set = { {3, -5}, {6, -13}, {-7, -8}, {0, -7} } },
	[29] = { .set = { {0, -8}, {3, -13}, {-9, -4}, {-1, -7} } },
	[30] = { .set = { {5, -6}, {3, -13}, {-2, -6}, {0, -7} } },
	[31] = { .set = { {3, -9}, {-1, -13}, {-2, -3}, {0, -7} } },
	[32] = { .set = { {2, -10}, {7, -7}, {-5, -13}, {0, -8} } },
	[33] = { .set = { {2, -10}, {4, -1}, {-6, -11}, {1, -7} } },
	[34] = { .set = { {0, -11}, {8, -11}, {-7, -11}, {0, -8} } },
	[35] = { .set = { {-1, -12}, {8, -8}, {-9, -8}, {-1, -7} } },
	[36] = { .set = { {-1, -8}, {5, -12}, {-7, -8}, {0, -9} } },
	[37] = { .set = { {-3, -10}, {5, -11}, {-5, -2}, {-1, -7} } },
	[38] = { .set = { {-5, -6}, {-3, -13}, {2, -6}, {0, -7} } },
	[39] = { .set = { {-3, -9}, {1, -13}, {2, -3}, {0, -7} } },
	[40] = { .set = { {-3, -5}, {-6, -13}, {7, -8}, {0, -7} } },
	[41] = { .set = { {0, -8}, {-3, -13}, {9, -4}, {1, -7} } },
	[42] = { .set = { {0, -5}, {-8, -11}, {8, -11}, {0, -7} } },
	[43] = { .set = { {0, -7}, {-8, -11}, {8, -11}, {0, -8} } },
	[44] = { .set = { {0, -9}, {-8, -11}, {8, -11}, {0, -8} } },
	[45] = { .set = { {0, -9}, {-5, -13}, {8, -6}, {0, -8} } },
	[46] = { .set = { {3, -5}, {6, -13}, {-7, -8}, {0, -7} } },
	[47] = { .set = { {0, -8}, {3, -13}, {-9, -4}, {-1, -7} } },
	[48] = { .set = { {5, -6}, {3, -13}, {-2, -6}, {0, -7} } },
	[49] = { .set = { {3, -9}, {-1, -13}, {-2, -3}, {0, -7} } },
	[50] = { .set = { {2, -10}, {7, -7}, {-5, -13}, {0, -8} } },
	[51] = { .set = { {2, -10}, {4, -1}, {-6, -11}, {1, -7} } },
	[52] = { .set = { {0, -11}, {8, -11}, {-7, -11}, {0, -8} } },
	[53] = { .set = { {-1, -12}, {8, -8}, {-9, -8}, {-1, -7} } },
	[54] = { .set = { {-1, -8}, {5, -12}, {-7, -8}, {0, -9} } },
	[55] = { .set = { {-3, -10}, {5, -11}, {-5, -2}, {-1, -7} } },
	[56] = { .set = { {-5, -6}, {-3, -13}, {2, -6}, {0, -7} } },
	[57] = { .set = { {-3, -9}, {1, -13}, {2, -3}, {0, -7} } },
	[58] = { .set = { {-3, -5}, {-6, -13}, {7, -8}, {0, -7} } },
	[59] = { .set = { {0, -8}, {-3, -13}, {9, -4}, {1, -7} } },
	[60] = { .set = { {0, -5}, {-8, -11}, {8, -11}, {0, -7} } },
	[61] = { .set = { {1, -4}, {-8, -10}, {7, -8}, {0, -6} } },
	[62] = { .set = { {-1, -4}, {-7, -8}, {8, -10}, {1, -6} } },
	[63] = { .set = { {0, -3}, {-8, -9}, {7, -9}, {0, -5} } },
	[64] = { .set = { {3, -5}, {6, -13}, {-7, -8}, {0, -7} } },
	[65] = { .set = { {2, -4}, {7, -12}, {-7, -7}, {1, -6} } },
	[66] = { .set = { {4, -4}, {6, -10}, {-6, -8}, {1, -6} } },
	[67] = { .set = { {4, -4}, {8, -14}, {-6, -8}, {2, -5} } },
	[68] = { .set = { {5, -7}, {3, -14}, {-2, -7}, {0, -8} } },
	[69] = { .set = { {4, -6}, {5, -15}, {-4, -7}, {1, -8} } },
	[70] = { .set = { {4, -8}, {3, -12}, {0, -10}, {1, -7} } },
	[71] = { .set = { {6, -6}, {-2, -15}, {-3, -7}, {1, -8} } },
	[72] = { .set = { {2, -10}, {7, -7}, {-5, -13}, {0, -8} } },
	[73] = { .set = { {0, -10}, {7, -10}, {-6, -9}, {0, -8} } },
	[74] = { .set = { {4, -7}, {6, -5}, {-3, -13}, {1, -6} } },
	[75] = { .set = { {4, -10}, {7, -8}, {-5, -13}, {2, -9} } },
	[76] = { .set = { {0, -11}, {8, -11}, {-7, -11}, {0, -8} } },
	[77] = { .set = { {-1, -10}, {6, -12}, {-8, -7}, {0, -8} } },
	[78] = { .set = { {1, -10}, {7, -7}, {-6, -12}, {0, -7} } },
	[79] = { .set = { {0, -13}, {8, -9}, {-8, -8}, {0, -8} } },
	[80] = { .set = { {-1, -8}, {5, -12}, {-7, -8}, {0, -9} } },
	[81] = { .set = { {-2, -6}, {3, -13}, {-6, -5}, {0, -8} } },
	[82] = { .set = { {1, -8}, {7, -9}, {-6, -9}, {0, -8} } },
	[83] = { .set = { {-2, -10}, {5, -13}, {-7, -8}, {-1, -9} } },
	[84] = { .set = { {-5, -7}, {-3, -14}, {2, -7}, {0, -8} } },
	[85] = { .set = { {-4, -6}, {-5, -15}, {4, -7}, {-1, -8} } },
	[86] = { .set = { {-4, -8}, {-3, -12}, {0, -10}, {-1, -7} } },
	[87] = { .set = { {-6, -6}, {2, -15}, {3, -7}, {-1, -8} } },
	[88] = { .set = { {-3, -5}, {-6, -13}, {7, -8}, {0, -7} } },
	[89] = { .set = { {-2, -4}, {-7, -12}, {7, -7}, {-1, -6} } },
	[90] = { .set = { {-4, -4}, {-6, -10}, {6, -8}, {-1, -6} } },
	[91] = { .set = { {-4, -4}, {-8, -14}, {6, -8}, {-2, -5} } },
	[92] = { .set = { {0, -5}, {-8, -11}, {8, -11}, {0, -7} } },
	[93] = { .set = { {-3, -5}, {-6, -13}, {7, -8}, {0, -7} } },
	[94] = { .set = { {-5, -6}, {-3, -13}, {2, -6}, {0, -7} } },
	[95] = { .set = { {-1, -8}, {5, -12}, {-7, -8}, {0, -9} } },
	[96] = { .set = { {0, -11}, {8, -11}, {-7, -11}, {0, -8} } },
	[97] = { .set = { {2, -10}, {7, -7}, {-5, -13}, {0, -8} } },
	[98] = { .set = { {5, -6}, {3, -13}, {-2, -6}, {0, -7} } },
	[99] = { .set = { {3, -5}, {6, -13}, {-7, -8}, {0, -7} } },
	[100] = { .set = { {-2, -7}, {-6, -9}, {8, -3}, {0, -5} } },
	[101] = { .set = { {-2, -5}, {-6, -8}, {9, -3}, {0, -3} } },
	[102] = { .set = { {0, -9}, {-7, -16}, {7, -16}, {0, -11} } },
	[103] = { .set = { {2, -9}, {-9, -12}, {2, -18}, {-1, -10} } },
	[104] = { .set = { {4, -11}, {-1, -18}, {-6, -13}, {0, -12} } },
	[105] = { .set = { {1, -12}, {4, -14}, {-3, -16}, {-1, -10} } },
	[106] = { .set = { {0, -11}, {7, -13}, {-7, -13}, {0, -9} } },
	[107] = { .set = { {0, -10}, {5, -16}, {-5, -14}, {1, -11} } },
	[108] = { .set = { {-5, -10}, {0, -17}, {5, -12}, {-1, -11} } },
	[109] = { .set = { {-2, -9}, {-2, -17}, {10, -12}, {1, -10} } },
	[110] = { .set = { {0, -5}, {-8, -11}, {8, -11}, {0, -7} } },
	[111] = { .set = { {0, -3}, {-8, -9}, {7, -9}, {0, -5} } },
	[112] = { .set = { {3, -5}, {6, -13}, {-7, -8}, {0, -7} } },
	[113] = { .set = { {4, -4}, {8, -14}, {-6, -8}, {2, -5} } },
	[114] = { .set = { {5, -6}, {3, -13}, {-2, -6}, {0, -7} } },
	[115] = { .set = { {6, -5}, {-2, -14}, {-3, -6}, {1, -7} } },
	[116] = { .set = { {2, -10}, {7, -7}, {-5, -13}, {0, -8} } },
	[117] = { .set = { {4, -10}, {7, -8}, {-5, -13}, {2, -9} } },
	[118] = { .set = { {0, -11}, {8, -11}, {-7, -11}, {0, -8} } },
	[119] = { .set = { {0, -13}, {8, -9}, {-8, -8}, {0, -8} } },
	[120] = { .set = { {-1, -8}, {5, -12}, {-7, -8}, {0, -9} } },
	[121] = { .set = { {-2, -10}, {5, -13}, {-7, -8}, {-1, -9} } },
	[122] = { .set = { {-5, -6}, {-3, -13}, {2, -6}, {0, -7} } },
	[123] = { .set = { {-6, -5}, {2, -14}, {3, -6}, {-1, -7} } },
	[124] = { .set = { {-3, -5}, {-6, -13}, {7, -8}, {0, -7} } },
	[125] = { .set = { {-4, -4}, {-8, -14}, {6, -8}, {-2, -5} } },
	[126] = { .set = { {0, -3}, {-8, -9}, {7, -9}, {0, -5} } },
	[127] = { .set = { {-4, -4}, {-8, -14}, {6, -8}, {-2, -5} } },
	[128] = { .set = { {-6, -6}, {2, -15}, {3, -7}, {-1, -8} } },
	[129] = { .set = { {-2, -10}, {5, -13}, {-7, -8}, {-1, -9} } },
	[130] = { .set = { {0, -13}, {8, -9}, {-8, -8}, {0, -8} } },
	[131] = { .set = { {3, -10}, {6, -8}, {-6, -13}, {1, -9} } },
	[132] = { .set = { {5, -6}, {-3, -15}, {-4, -7}, {0, -8} } },
	[133] = { .set = { {3, -4}, {7, -14}, {-7, -8}, {1, -5} } },
	[134] = { .set = { {0, -3}, {-8, -9}, {7, -9}, {0, -5} } },
	[135] = { .set = { {3, -4}, {7, -14}, {-7, -8}, {1, -5} } },
	[136] = { .set = { {5, -6}, {-3, -15}, {-4, -7}, {0, -8} } },
	[137] = { .set = { {3, -10}, {6, -8}, {-6, -13}, {1, -9} } },
	[138] = { .set = { {0, -13}, {8, -9}, {-8, -8}, {0, -8} } },
	[139] = { .set = { {-2, -10}, {5, -13}, {-7, -8}, {-1, -9} } },
	[140] = { .set = { {-6, -6}, {2, -15}, {3, -7}, {-1, -8} } },
	[141] = { .set = { {-4, -4}, {-8, -14}, {6, -8}, {-2, -5} } },
	[142] = { .set = { {0, -5}, {-8, -11}, {8, -11}, {0, -7} } },
	[143] = { .set = { {0, -7}, {-8, -11}, {8, -11}, {0, -8} } },
	[144] = { .set = { {0, -3}, {-8, -9}, {7, -9}, {0, -5} } },
	[145] = { .set = { {3, -5}, {6, -13}, {-7, -8}, {0, -7} } },
	[146] = { .set = { {0, -11}, {3, -16}, {-9, -7}, {-1, -10} } },
	[147] = { .set = { {4, -4}, {8, -14}, {-6, -8}, {2, -5} } },
	[148] = { .set = { {5, -6}, {3, -13}, {-2, -6}, {0, -7} } },
	[149] = { .set = { {3, -9}, {-1, -13}, {-2, -3}, {0, -7} } },
	[150] = { .set = { {6, -5}, {-2, -14}, {-3, -6}, {1, -7} } },
	[151] = { .set = { {2, -10}, {7, -7}, {-5, -13}, {0, -8} } },
	[152] = { .set = { {2, -10}, {4, -1}, {-6, -11}, {1, -7} } },
	[153] = { .set = { {4, -9}, {7, -7}, {-5, -12}, {2, -8} } },
	[154] = { .set = { {0, -11}, {8, -11}, {-7, -11}, {0, -8} } },
	[155] = { .set = { {0, -12}, {9, -8}, {-8, -8}, {0, -7} } },
	[156] = { .set = { {0, -13}, {8, -9}, {-8, -8}, {0, -8} } },
	[157] = { .set = { {-1, -8}, {5, -12}, {-7, -8}, {0, -9} } },
	[158] = { .set = { {-3, -10}, {5, -11}, {-5, -2}, {-1, -7} } },
	[159] = { .set = { {-2, -9}, {5, -12}, {-7, -7}, {-1, -8} } },
	[160] = { .set = { {-5, -6}, {-3, -13}, {2, -6}, {0, -7} } },
	[161] = { .set = { {-3, -9}, {1, -13}, {2, -3}, {0, -7} } },
	[162] = { .set = { {-6, -5}, {2, -14}, {3, -6}, {-1, -7} } },
	[163] = { .set = { {-3, -5}, {-6, -13}, {7, -8}, {0, -7} } },
	[164] = { .set = { {0, -11}, {-3, -16}, {9, -7}, {1, -10} } },
	[165] = { .set = { {-4, -4}, {-8, -14}, {6, -8}, {-2, -5} } },
	[166] = { .set = { {0, -3}, {-8, -9}, {7, -9}, {0, -5} } },
	[167] = { .set = { {-4, -4}, {-8, -14}, {6, -8}, {-2, -5} } },
	[168] = { .set = { {-6, -6}, {2, -15}, {3, -7}, {-1, -8} } },
	[169] = { .set = { {-2, -10}, {5, -13}, {-7, -8}, {-1, -9} } },
	[170] = { .set = { {0, -13}, {8, -9}, {-8, -8}, {0, -8} } },
	[171] = { .set = { {3, -10}, {6, -8}, {-6, -13}, {1, -9} } },
	[172] = { .set = { {5, -6}, {-3, -15}, {-4, -7}, {0, -8} } },
	[173] = { .set = { {3, -4}, {7, -14}, {-7, -8}, {1, -5} } },
	[174] = { .set = { {0, -5}, {-8, -11}, {8, -11}, {0, -7} } },
	[175] = { .set = { {-3, -5}, {-6, -13}, {7, -8}, {0, -7} } },
	[176] = { .set = { {-5, -6}, {-3, -13}, {2, -6}, {0, -7} } },
	[177] = { .set = { {-1, -8}, {5, -12}, {-7, -8}, {0, -9} } },
	[178] = { .set = { {0, -11}, {8, -11}, {-7, -11}, {0, -8} } },
	[179] = { .set = { {2, -10}, {7, -7}, {-5, -13}, {0, -8} } },
	[180] = { .set = { {5, -6}, {3, -13}, {-2, -6}, {0, -7} } },
	[181] = { .set = { {3, -5}, {6, -13}, {-7, -8}, {0, -7} } },
};

static const ax_anim *const sStaryuAnimTable1[] = {
	gAxSharedAnim_02602,
	gAxSharedAnim_02678,
	gAxSharedAnim_02687,
	gAxSharedAnim_02696,
	gAxSharedAnim_02614,
	gAxSharedAnim_02636,
	gAxSharedAnim_02649,
	gAxSharedAnim_02658,
};

static const ax_anim *const sStaryuAnimTable2[] = {
	gAxSharedAnim_01632,
	gAxSharedAnim_01793,
	sStaryuAnims_2_3,
	sStaryuAnims_2_4,
	sStaryuAnims_2_5,
	sStaryuAnims_2_6,
	sStaryuAnims_2_7,
	sStaryuAnims_2_8,
};

static const ax_anim *const sStaryuAnimTable3[] = {
	sStaryuAnims_3_1,
	sStaryuAnims_3_2,
	sStaryuAnims_3_3,
	sStaryuAnims_3_4,
	sStaryuAnims_3_5,
	sStaryuAnims_3_6,
	sStaryuAnims_3_7,
	sStaryuAnims_3_8,
};

static const ax_anim *const sStaryuAnimTable4[] = {
	sStaryuAnims_4_1,
	sStaryuAnims_4_2,
	sStaryuAnims_4_3,
	sStaryuAnims_4_4,
	sStaryuAnims_4_5,
	sStaryuAnims_4_6,
	sStaryuAnims_4_7,
	sStaryuAnims_4_8,
};

static const ax_anim *const sStaryuAnimTable5[] = {
	sStaryuAnims_5_1,
	sStaryuAnims_5_2,
	sStaryuAnims_5_3,
	sStaryuAnims_5_4,
	sStaryuAnims_5_5,
	sStaryuAnims_5_6,
	sStaryuAnims_5_7,
	sStaryuAnims_5_8,
};

static const ax_anim *const sStaryuAnimTable6[] = {
	sStaryuAnims_6_1,
	sStaryuAnims_6_1,
	sStaryuAnims_6_1,
	sStaryuAnims_6_1,
	sStaryuAnims_6_1,
	sStaryuAnims_6_1,
	sStaryuAnims_6_1,
	sStaryuAnims_6_1,
};

static const ax_anim *const sStaryuAnimTable7[] = {
	sStaryuAnims_7_1,
	sStaryuAnims_7_2,
	sStaryuAnims_7_3,
	sStaryuAnims_7_4,
	sStaryuAnims_7_5,
	sStaryuAnims_7_6,
	sStaryuAnims_7_7,
	sStaryuAnims_7_8,
};

static const ax_anim *const sStaryuAnimTable8[] = {
	sStaryuAnims_8_1,
	sStaryuAnims_8_2,
	sStaryuAnims_8_3,
	sStaryuAnims_8_4,
	sStaryuAnims_8_5,
	sStaryuAnims_8_6,
	sStaryuAnims_8_7,
	sStaryuAnims_8_8,
};

static const ax_anim *const sStaryuAnimTable9[] = {
	sStaryuAnims_9_1,
	sStaryuAnims_9_2,
	sStaryuAnims_9_3,
	sStaryuAnims_9_4,
	sStaryuAnims_9_5,
	sStaryuAnims_9_6,
	sStaryuAnims_9_7,
	sStaryuAnims_9_8,
};

static const ax_anim *const sStaryuAnimTable10[] = {
	gAxSharedAnim_00432,
	gAxSharedAnim_00439,
	gAxSharedAnim_00447,
	gAxSharedAnim_00458,
	gAxSharedAnim_00474,
	gAxSharedAnim_00483,
	gAxSharedAnim_00492,
	gAxSharedAnim_00500,
};

static const ax_anim *const sStaryuAnimTable11[] = {
	sStaryuAnims_11_1,
	sStaryuAnims_11_2,
	sStaryuAnims_11_3,
	sStaryuAnims_11_4,
	gAxSharedAnim_00607,
	sStaryuAnims_11_6,
	gAxSharedAnim_00670,
	sStaryuAnims_11_8,
};

static const ax_anim *const sStaryuAnimTable12[] = {
	gAxSharedAnim_00754,
	gAxSharedAnim_00842,
	gAxSharedAnim_00820,
	gAxSharedAnim_00805,
	gAxSharedAnim_00804,
	gAxSharedAnim_00783,
	gAxSharedAnim_00765,
	gAxSharedAnim_00755,
};

static const ax_anim *const sStaryuAnimTable13[] = {
	sStaryuAnims_13_1,
	sStaryuAnims_13_2,
	sStaryuAnims_13_3,
	sStaryuAnims_13_4,
	sStaryuAnims_13_5,
	sStaryuAnims_13_6,
	sStaryuAnims_13_7,
	sStaryuAnims_13_8,
};

static const ax_anim *const *const sAxAnimationsStaryu[] = {
	sStaryuAnimTable1,
	sStaryuAnimTable2,
	sStaryuAnimTable3,
	sStaryuAnimTable4,
	sStaryuAnimTable5,
	sStaryuAnimTable6,
	sStaryuAnimTable7,
	sStaryuAnimTable8,
	sStaryuAnimTable9,
	sStaryuAnimTable10,
	sStaryuAnimTable11,
	sStaryuAnimTable12,
	sStaryuAnimTable13,
};

static const ax_sprite *const sAxSpritesStaryu[] = {
	sStaryuSprites1,
	sStaryuSprites2,
	sStaryuSprites3,
	sStaryuSprites4,
	sStaryuSprites5,
	sStaryuSprites6,
	sStaryuSprites7,
	sStaryuSprites8,
	sStaryuSprites9,
	sStaryuSprites10,
	sStaryuSprites11,
	sStaryuSprites12,
	sStaryuSprites13,
	sStaryuSprites14,
	sStaryuSprites15,
	sStaryuSprites16,
	sStaryuSprites17,
	sStaryuSprites18,
	sStaryuSprites19,
	sStaryuSprites20,
	sStaryuSprites21,
	sStaryuSprites22,
	sStaryuSprites23,
	sStaryuSprites24,
	sStaryuSprites25,
	sStaryuSprites26,
	sStaryuSprites27,
	sStaryuSprites28,
	sStaryuSprites29,
	sStaryuSprites30,
	sStaryuSprites31,
	sStaryuSprites32,
	sStaryuSprites33,
	sStaryuSprites34,
	sStaryuSprites35,
	sStaryuSprites36,
	sStaryuSprites37,
	sStaryuSprites38,
	sStaryuSprites39,
	sStaryuSprites40,
	sStaryuSprites41,
};

static const axmain sAxMainStaryu = {
	.poses = sAxPosesStaryu,
	.animations = sAxAnimationsStaryu,
	.animCount = ARRAY_COUNT(sAxAnimationsStaryu),
	.spriteData = sAxSpritesStaryu,
	.positions = sAxPositionsStaryu,
};
